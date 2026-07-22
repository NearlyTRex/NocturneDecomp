; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004116b0(void)
;
;
; Referenced Globals:
;   string s_CBarrier_00578730
;   undefined4 DAT_005acf80
;   undefined4 DAT_00763e48
;   undefined4 DAT_00764524
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004116b0 | DAT_00763e48
        ;   Label: FUN_004116b0
    PUSH 0x2                            ; 004116b5
    PUSH 0x5acf80                       ; 004116b7 | DAT_005acf80
    PUSH 0x4116e0                       ; 004116bc | LAB_004116e0
    PUSH 0x578730                       ; 004116c1 | = "CBarrier"
    PUSH 0x764524                       ; 004116c6 | DAT_00764524
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004116cb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_registerActorClass_FUN_0040d3f0()
    ADD ESP,0x18                        ; 004116d0
    RET                                 ; 004116d3

