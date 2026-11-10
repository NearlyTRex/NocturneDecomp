; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_00589970(LPCSTR lpLibFileName)
;
; Parameters:
; LPCSTR           Stack[0x4]:4   lpLibFileName
;
; XREF[1]:
;   engine_special.cpp_FUN_0055e8c0 at 0055e8fe
;
; Referenced Globals:
;   void* PTR_LoadLibraryA_005c85e4 = 001c9012
;
; Called Functions:
;   LoadLibraryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00589970
        ;   Label: wincore_wddvmem.cpp_loadLibrary_FUN_00589970
    PUSH EDX                            ; 00589974
    CALL dword ptr CS:[0x5c85e4]        ; 00589975 | PTR_LoadLibraryA_005c85e4
    RET                                 ; 0058997c

