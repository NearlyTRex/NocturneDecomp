; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl BOOL wincore_wddvmem.cpp_freeLibrary_FUN_005ede00(HMODULE hLibModule)
;
; Parameters:
; typedef HMODULE HINSTANCE Stack[0x4]:4   hLibModule
;
; XREF[1]:
;   wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20 at 005b5e9b
;
; Referenced Globals:
;   FreeLibrary* PTR_FreeLibrary_0061155c = 00211dd4
;
; Called Functions:
;   FreeLibrary
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ede00
        ;   Label: wincore_wddvmem.cpp_freeLibrary_FUN_005ede00
    PUSH EDX                            ; 005ede04
    CALL dword ptr CS:[0x61155c]        ; 005ede05 | FreeLibrary * PTR_FreeLibrary_0061155c
    RET                                 ; 005ede0c

