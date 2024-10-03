# disjack
DISJACK - Discord DLL Hijacking and Proxying POC.

Discord being highly popular and commonly running on startup makes it a solid target for DLL hijacking.  
This is lacking an attack vector and shellcode/mapping.


![image](https://github.com/user-attachments/assets/c6a36fbe-63e9-4e20-a1c5-1b4017987d62)

![image](https://github.com/user-attachments/assets/fc230d26-e384-4a21-a86a-995b1063638c)


## Issues       
1. The code is executed more than once on launch.
2. A Discord update would kill persistence, there has to be a workaround.
