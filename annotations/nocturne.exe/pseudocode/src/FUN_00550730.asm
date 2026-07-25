; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550730(void)
;
;
; Called Functions:
;   core_water.cpp_CWater_ctor_FUN_005507a0
;   FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x2dd1210                      ; 00550730
        ;   Label: FUN_00550730
    CALL core_water.cpp_CWater_ctor_FUN_005507a0 ; 00550735
        ;   XREF to: 005507a0 (UNCONDITIONAL_CALL)  ; undefined core_water.cpp_CWater_ctor_FUN_005507a0()
    ADD ESP,0x4                         ; 0055073a
    PUSH 0x5c11dc                       ; 0055073d
    CALL FUN_00564bb0                   ; 00550742
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 00550747
    RET                                 ; 0055074a

