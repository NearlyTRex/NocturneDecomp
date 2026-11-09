; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL __cdecl wincore_wddvmem_cpp_freeLibrary_FUN_005ad450(HMODULE hLibModule)
;
; Parameters:
; HMODULE          Stack[0x4]:4   hLibModule
;
; XREF[1]:
;   engine_special.cpp_FUN_00580740 at 0058090f
;
; Referenced Globals:
;   void* PTR_FreeLibrary_005d0568 = 001d0dba
;
; Called Functions:
;   FreeLibrary
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ad450
        ;   Label: wincore_wddvmem.cpp_freeLibrary_FUN_005ad450
    PUSH EDX                            ; 005ad454
    CALL dword ptr CS:[0x5d0568]        ; 005ad455 | PTR_FreeLibrary_005d0568
    RET                                 ; 005ad45c

