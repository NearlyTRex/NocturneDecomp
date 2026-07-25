; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e570(void)
;
;
; Called Functions:
;   core_vehicle.cpp_CVehicle_ctor_FUN_0054e5a0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1070                         ; 0054e570
        ;   Label: FUN_0054e570
    CALL FUN_0056497c                   ; 0054e575
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0054e57a
    TEST EAX,EAX                        ; 0054e57d
    JNZ 0x0054e582                      ; 0054e57f
        ;   XREF to: 0054e582 (CONDITIONAL_JUMP)  ; LAB_0054e582
    RET                                 ; 0054e581
    PUSH EAX                            ; 0054e582
        ;   Label: LAB_0054e582
    CALL core_vehicle.cpp_CVehicle_ctor_FUN_0054e5a0 ; 0054e583
        ;   XREF to: 0054e5a0 (UNCONDITIONAL_CALL)  ; undefined core_vehicle.cpp_CVehicle_ctor_FUN_0054e5a0()
    ADD ESP,0x4                         ; 0054e588
    RET                                 ; 0054e58b

