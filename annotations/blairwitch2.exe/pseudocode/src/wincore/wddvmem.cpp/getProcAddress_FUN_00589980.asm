; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; FARPROC __cdecl wincore_wddvmem_cpp_getProcAddress_FUN_00589980(HMODULE hModule,LPCSTR lpProcName)
;
; Parameters:
; HMODULE          Stack[0x4]:4   hModule
; LPCSTR           Stack[0x8]:4   lpProcName
;
; XREF[1]:
;   engine_special.cpp_loadExternalRenderer_FUN_0055e8c0 at 0055e927
;
; Referenced Globals:
;   void* PTR_GetProcAddress_005c85b8 = 001c8f44
;
; Called Functions:
;   GetProcAddress
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00589980
        ;   Label: wincore_wddvmem.cpp_getProcAddress_FUN_00589980
    PUSH EDX                            ; 00589984
    MOV ECX,dword ptr [ESP + 0x8]       ; 00589985
    PUSH ECX                            ; 00589989
    CALL dword ptr CS:[0x5c85b8]        ; 0058998a | PTR_GetProcAddress_005c85b8
    RET                                 ; 00589991

