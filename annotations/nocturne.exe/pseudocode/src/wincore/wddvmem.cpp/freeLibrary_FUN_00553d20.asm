; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_freeLibrary_FUN_00553d20(HMODULE param_1)
;
;
; XREF[1]:
;   FUN_00530d40 at 00530e3d
;
; Referenced Globals:
;   void* PTR_FreeLibrary_005754dc = 00175c4c
;
; Called Functions:
;   FreeLibrary
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00553d20
        ;   Label: wincore_wddvmem.cpp_freeLibrary_FUN_00553d20
    PUSH EDX                            ; 00553d24
    CALL dword ptr CS:[0x5754dc]        ; 00553d25 | PTR_FreeLibrary_005754dc
    RET                                 ; 00553d2c

