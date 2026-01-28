; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_scat_cpp_CSCat_load_FUN_00557db0(void)
;
;
; Called Functions:
;   core_hero.cpp_CHero_serialize_FUN_004f2610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00557db0
        ;   Label: core_scat.cpp_CSCat_load_FUN_00557db0
    PUSH EDX                            ; 00557db4
    CALL core_hero.cpp_CHero_serialize_FUN_004f2610 ; 00557db5
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr)
    ADD ESP,0x4                         ; 00557dba
    RET                                 ; 00557dbd

