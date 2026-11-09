; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_0057ad20(HMODULE hModule,LPCSTR lpProcName)
;
; Parameters:
; HMODULE          Stack[0x4]:4   hModule
; LPCSTR           Stack[0x8]:4   lpProcName
;
; XREF[1]:
;   engine_special.cpp_FUN_00564be0 at 00564c47
;
; Referenced Globals:
;   void* PTR_GetProcAddress_005b35c8 = 001b3f72
;
; Called Functions:
;   GetProcAddress
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0057ad20
        ;   Label: wincore_wddvmem.cpp_getProcAddress_FUN_0057ad20
    PUSH EDX                            ; 0057ad24
    MOV ECX,dword ptr [ESP + 0x8]       ; 0057ad25
    PUSH ECX                            ; 0057ad29
    CALL dword ptr CS:[0x5b35c8]        ; 0057ad2a | PTR_GetProcAddress_005b35c8
    RET                                 ; 0057ad31

