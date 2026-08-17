; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HMODULE __cdecl wincore_wddvmem_cpp_loadLibrary_FUN_00553d30(LPCSTR lpLibFileName)
;
; Parameters:
; LPCSTR           Stack[0x4]:4   lpLibFileName
;
; XREF[2]:
;   engine_special.cpp_initializeExternalRenderer_FUN_00530e60 at 00530e6d
;   engine_special.cpp_loadExternalRenderer_FUN_00531780 at 005317be
;
; Referenced Globals:
;   void* PTR_LoadLibraryA_00575560 = 00175eaa
;
; Called Functions:
;   LoadLibraryA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00553d30
        ;   Label: wincore_wddvmem.cpp_loadLibrary_FUN_00553d30
    PUSH EDX                            ; 00553d34
    CALL dword ptr CS:[0x575560]        ; 00553d35 | PTR_LoadLibraryA_00575560
    RET                                 ; 00553d3c

