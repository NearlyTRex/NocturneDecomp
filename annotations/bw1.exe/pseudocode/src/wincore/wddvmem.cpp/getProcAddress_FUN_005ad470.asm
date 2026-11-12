; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_005ad470(HMODULE hModule,LPCSTR lpProcName)
;
; Parameters:
; HMODULE          Stack[0x4]:4   hModule
; LPCSTR           Stack[0x8]:4   lpProcName
;
; XREF[1]:
;   engine_special.cpp_loadExternalRenderer_FUN_00581310 at 00581377
;
; Referenced Globals:
;   void* PTR_GetProcAddress_005d05c8 = 001d0f6c
;
; Called Functions:
;   GetProcAddress
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005ad470
        ;   Label: wincore_wddvmem.cpp_getProcAddress_FUN_005ad470
    PUSH EDX                            ; 005ad474
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ad475
    PUSH ECX                            ; 005ad479
    CALL dword ptr CS:[0x5d05c8]        ; 005ad47a | PTR_GetProcAddress_005d05c8
    RET                                 ; 005ad481

