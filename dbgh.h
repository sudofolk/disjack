#pragma once

HMODULE hModule = LoadLibrary(L"c:\\windows\\system32\\dbghelp.dll");

VOID DebugToFile(LPCSTR szInput)
{
	std::ofstream log("spookyhack.log", std::ios_base::app | std::ios_base::out);
	log << szInput;
	log << "\n";
}

typedef BOOL(*EnumerateLoadedModules_Type)(HANDLE param_1, ULONGLONG param_2, ULONGLONG param_3);
typedef BOOL(*EnumerateLoadedModulesEx_Type)(HANDLE param_1, ULONGLONG param_2, ULONGLONG param_3);
typedef LONGLONG(*ImageDirectoryEntryToDataEx_Type)(int* param_1, char param_2, unsigned short param_3, int* param_4, LONGLONG* param_5);
typedef INT* (*ImageNtHeader_Type)(short* param_1);
typedef LONGLONG(*ImageRvaToVa_Type)(LONGLONG param_1, LONGLONG param_2, unsigned int param_3, LONGLONG* param_4);
typedef ULONGLONG(*SymAddSourceStream_Type)(LONGLONG param_1, LONGLONG* param_2, LPCSTR param_3, void* param_4, ULONGLONG param_5);
typedef ULONGLONG(*SymAddSourceStreamA_Type)(LONGLONG param_1, LONGLONG* param_2, LPCSTR param_3, void* param_4, ULONGLONG param_5);
typedef UINT(*SymCompareInlineTrace_Type)(LONGLONG param_1, LONGLONG* param_2, unsigned int param_3, LONGLONG* param_4, LONGLONG* param_5, LONGLONG* param_6);
typedef BOOL(*SymGetDiaSession_Type)(LONGLONG param_1, LONGLONG* param_2, LONGLONG** param_3);
typedef UINT(*SymGetFileLineOffsets64_Type)(LONGLONG param_1, LPCSTR param_2, char* param_3, LONGLONG param_4, unsigned int param_5);
typedef LONGLONG* (*SymGetModuleBase_Type)(LONGLONG* param_1, LONGLONG* param_2);
typedef ULONGLONG(*SymGetSearchPath_Type)(LONGLONG param_1, LPSTR param_2, unsigned int param_3);
typedef BOOL(*SymGetSearchPathW_Type)(LONGLONG param_1, short* param_2, ULONGLONG param_3);
typedef ULONGLONG(*SymGetSourceVarFromToken_Type)(LONGLONG param_1, LONGLONG param_2, LPCSTR param_3, LPCSTR param_4, LPSTR param_5, int param_6);
typedef INT* (*SymGetSymFromAddr_Type)(LONGLONG param_1, LONGLONG* param_2, ULONGLONG* param_3, LONGLONG param_4);
typedef INT(*SymGetSymbolFile_Type)(LONGLONG param_1, LPCSTR param_2, LPCSTR param_3, int param_4, LPSTR param_5, LONGLONG param_6, LPSTR param_7, LONGLONG param_8);
typedef BOOL(*SymGetTypeInfo_Type)(LONGLONG param_1, LONGLONG* param_2, unsigned int param_3, unsigned int param_4, int** param_5);
typedef BOOL(*SymMatchFileName_Type)(char* param_1, char* param_2, char** param_3, char** param_4);
typedef BOOL(*SymMatchString_Type)(LPCSTR param_1, LPCSTR param_2, int param_3);
typedef BOOL(*SymMatchStringA_Type)(LPCSTR param_1, LPCSTR param_2, int param_3);
typedef BOOL(*SymMatchStringW_Type)(unsigned short* param_1, short* param_2, int param_3);
typedef INT(*SymQueryInlineTrace_Type)(LONGLONG param_1, LONGLONG* param_2, unsigned int param_3, LONGLONG* param_4, LONGLONG* param_5, unsigned int* param_6, unsigned int* param_7);
typedef INT(*SymRefreshModuleList_Type)(HANDLE param_1);
typedef BOOL(*SymSetDiaSession_Type)(LONGLONG param_1, LONGLONG* param_2, LONGLONG* param_3);
typedef UINT(*SymSetOptions_Type)(unsigned int param_1);
typedef BOOL(*SymUnDName_Type)(LONGLONG param_1, char* param_2, int param_3);
typedef INT(*UnDecorateSymbolNameW_Type)(LPCWSTR param_1, LPWSTR param_2, unsigned int param_3, unsigned short param_4);

BOOL EnumerateLoadedModules_Proxy(HANDLE param_1, ULONGLONG param_2, ULONGLONG param_3)
{
	DebugToFile("EnumerateLoadedModules");
	EnumerateLoadedModules_Type original = (EnumerateLoadedModules_Type)GetProcAddress(hModule, "EnumerateLoadedModules");
	return original(param_1, param_2, param_3);
}
BOOL EnumerateLoadedModulesEx_Proxy(HANDLE param_1, ULONGLONG param_2, ULONGLONG param_3)
{
	DebugToFile("EnumerateLoadedModulesEx");
	EnumerateLoadedModulesEx_Type original = (EnumerateLoadedModulesEx_Type)GetProcAddress(hModule, "EnumerateLoadedModulesEx");
	return original(param_1, param_2, param_3);
}
LONGLONG ImageDirectoryEntryToDataEx_Proxy(int* param_1, char param_2, unsigned short param_3, int* param_4, LONGLONG* param_5)
{
	DebugToFile("ImageDirectoryEntryToDataEx");
	ImageDirectoryEntryToDataEx_Type original = (ImageDirectoryEntryToDataEx_Type)GetProcAddress(hModule, "ImageDirectoryEntryToDataEx");
	return original(param_1, param_2, param_3, param_4, param_5);
}
INT* ImageNtHeader_Proxy(short* param_1)
{
	DebugToFile("ImageNtHeader");
	ImageNtHeader_Type original = (ImageNtHeader_Type)GetProcAddress(hModule, "ImageNtHeader");
	return original(param_1);
}
LONGLONG ImageRvaToVa_Proxy(LONGLONG param_1, LONGLONG param_2, unsigned int param_3, LONGLONG* param_4)
{
	DebugToFile("ImageRvaToVa");
	ImageRvaToVa_Type original = (ImageRvaToVa_Type)GetProcAddress(hModule, "ImageRvaToVa");
	return original(param_1, param_2, param_3, param_4);
}
ULONGLONG SymAddSourceStream_Proxy(LONGLONG param_1, LONGLONG* param_2, LPCSTR param_3, void* param_4, ULONGLONG param_5)
{
	DebugToFile("SymAddSourceStream");
	SymAddSourceStream_Type original = (SymAddSourceStream_Type)GetProcAddress(hModule, "SymAddSourceStream");
	return original(param_1, param_2, param_3, param_4, param_5);
}
ULONGLONG SymAddSourceStreamA_Proxy(LONGLONG param_1, LONGLONG* param_2, LPCSTR param_3, void* param_4, ULONGLONG param_5)
{
	DebugToFile("SymAddSourceStreamA");
	SymAddSourceStreamA_Type original = (SymAddSourceStreamA_Type)GetProcAddress(hModule, "SymAddSourceStreamA");
	return original(param_1, param_2, param_3, param_4, param_5);
}
UINT SymCompareInlineTrace_Proxy(LONGLONG param_1, LONGLONG* param_2, unsigned int param_3, LONGLONG* param_4, LONGLONG* param_5, LONGLONG* param_6)
{
	DebugToFile("SymCompareInlineTrace");
	SymCompareInlineTrace_Type original = (SymCompareInlineTrace_Type)GetProcAddress(hModule, "SymCompareInlineTrace");
	return original(param_1, param_2, param_3, param_4, param_5, param_6);
}
BOOL SymGetDiaSession_Proxy(LONGLONG param_1, LONGLONG* param_2, LONGLONG** param_3)
{
	DebugToFile("SymGetDiaSession");
	SymGetDiaSession_Type original = (SymGetDiaSession_Type)GetProcAddress(hModule, "SymGetDiaSession");
	return original(param_1, param_2, param_3);
}
UINT SymGetFileLineOffsets64_Proxy(LONGLONG param_1, LPCSTR param_2, char* param_3, LONGLONG param_4, unsigned int param_5)
{
	DebugToFile("SymGetFileLineOffsets64");
	SymGetFileLineOffsets64_Type original = (SymGetFileLineOffsets64_Type)GetProcAddress(hModule, "SymGetFileLineOffsets64");
	return original(param_1, param_2, param_3, param_4, param_5);
}
LONGLONG* SymGetModuleBase_Proxy(LONGLONG* param_1, LONGLONG* param_2)
{
	DebugToFile("SymGetModuleBase");
	SymGetModuleBase_Type original = (SymGetModuleBase_Type)GetProcAddress(hModule, "SymGetModuleBase");
	return original(param_1, param_2);
}
ULONGLONG SymGetSearchPath_Proxy(LONGLONG param_1, LPSTR param_2, unsigned int param_3)
{
	DebugToFile("SymGetSearchPath");
	SymGetSearchPath_Type original = (SymGetSearchPath_Type)GetProcAddress(hModule, "SymGetSearchPath");
	return original(param_1, param_2, param_3);
}
BOOL SymGetSearchPathW_Proxy(LONGLONG param_1, short* param_2, ULONGLONG param_3)
{
	DebugToFile("SymGetSearchPathW");
	SymGetSearchPathW_Type original = (SymGetSearchPathW_Type)GetProcAddress(hModule, "SymGetSearchPathW");
	return original(param_1, param_2, param_3);
}
ULONGLONG SymGetSourceVarFromToken_Proxy(LONGLONG param_1, LONGLONG param_2, LPCSTR param_3, LPCSTR param_4, LPSTR param_5, int param_6)
{
	DebugToFile("SymGetSourceVarFromToken");
	SymGetSourceVarFromToken_Type original = (SymGetSourceVarFromToken_Type)GetProcAddress(hModule, "SymGetSourceVarFromToken");
	return original(param_1, param_2, param_3, param_4, param_5, param_6);
}
INT* SymGetSymFromAddr_Proxy(LONGLONG param_1, LONGLONG* param_2, ULONGLONG* param_3, LONGLONG param_4)
{
	DebugToFile("SymGetSymFromAddr");
	SymGetSymFromAddr_Type original = (SymGetSymFromAddr_Type)GetProcAddress(hModule, "SymGetSymFromAddr");
	return original(param_1, param_2, param_3, param_4);
}
INT SymGetSymbolFile_Proxy(LONGLONG param_1, LPCSTR param_2, LPCSTR param_3, int param_4, LPSTR param_5, LONGLONG param_6, LPSTR param_7, LONGLONG param_8)
{
	DebugToFile("SymGetSymbolFile");
	SymGetSymbolFile_Type original = (SymGetSymbolFile_Type)GetProcAddress(hModule, "SymGetSymbolFile");
	return original(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
}
BOOL SymGetTypeInfo_Proxy(LONGLONG param_1, LONGLONG* param_2, unsigned int param_3, unsigned int param_4, int** param_5)
{
	DebugToFile("SymGetTypeInfo");
	SymGetTypeInfo_Type original = (SymGetTypeInfo_Type)GetProcAddress(hModule, "SymGetTypeInfo");
	return original(param_1, param_2, param_3, param_4, param_5);
}
BOOL SymMatchFileName_Proxy(char* param_1, char* param_2, char** param_3, char** param_4)
{
	DebugToFile("SymMatchFileName");
	SymMatchFileName_Type original = (SymMatchFileName_Type)GetProcAddress(hModule, "SymMatchFileName");
	return original(param_1, param_2, param_3, param_4);
}
BOOL SymMatchString_Proxy(LPCSTR param_1, LPCSTR param_2, int param_3)
{
	DebugToFile("SymMatchString");
	SymMatchString_Type original = (SymMatchString_Type)GetProcAddress(hModule, "SymMatchString");
	return original(param_1, param_2, param_3);
}
BOOL SymMatchStringA_Proxy(LPCSTR param_1, LPCSTR param_2, int param_3)
{
	DebugToFile("SymMatchStringA");
	SymMatchStringA_Type original = (SymMatchStringA_Type)GetProcAddress(hModule, "SymMatchStringA");
	return original(param_1, param_2, param_3);
}
BOOL SymMatchStringW_Proxy(unsigned short* param_1, short* param_2, int param_3)
{
	DebugToFile("SymMatchStringW");
	SymMatchStringW_Type original = (SymMatchStringW_Type)GetProcAddress(hModule, "SymMatchStringW");
	return original(param_1, param_2, param_3);
}
INT SymQueryInlineTrace_Proxy(LONGLONG param_1, LONGLONG* param_2, unsigned int param_3, LONGLONG* param_4, LONGLONG* param_5, unsigned int* param_6, unsigned int* param_7)
{
	DebugToFile("SymQueryInlineTrace");
	SymQueryInlineTrace_Type original = (SymQueryInlineTrace_Type)GetProcAddress(hModule, "SymQueryInlineTrace");
	return original(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
}
INT SymRefreshModuleList_Proxy(HANDLE param_1)
{
	DebugToFile("SymRefreshModuleList");
	SymRefreshModuleList_Type original = (SymRefreshModuleList_Type)GetProcAddress(hModule, "SymRefreshModuleList");
	return original(param_1);
}
BOOL SymSetDiaSession_Proxy(LONGLONG param_1, LONGLONG* param_2, LONGLONG* param_3)
{
	DebugToFile("SymSetDiaSession");
	SymSetDiaSession_Type original = (SymSetDiaSession_Type)GetProcAddress(hModule, "SymSetDiaSession");
	return original(param_1, param_2, param_3);
}
UINT SymSetOptions_Proxy(unsigned int param_1)
{
	DebugToFile("SymSetOptions");
	SymSetOptions_Type original = (SymSetOptions_Type)GetProcAddress(hModule, "SymSetOptions");
	return original(param_1);
}
BOOL SymUnDName_Proxy(LONGLONG param_1, char* param_2, int param_3)
{
	DebugToFile("SymUnDName");
	SymUnDName_Type original = (SymUnDName_Type)GetProcAddress(hModule, "SymUnDName");
	return original(param_1, param_2, param_3);
}
INT UnDecorateSymbolNameW_Proxy(LPCWSTR param_1, LPWSTR param_2, unsigned int param_3, unsigned short param_4)
{
	DebugToFile("UnDecorateSymbolNameW");
	UnDecorateSymbolNameW_Type original = (UnDecorateSymbolNameW_Type)GetProcAddress(hModule, "UnDecorateSymbolNameW");
	return original(param_1, param_2, param_3, param_4);
}