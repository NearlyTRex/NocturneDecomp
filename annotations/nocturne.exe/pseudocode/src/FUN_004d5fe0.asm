; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d5fe0(void)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a0784 = 004d6020
;
; Called Functions:
;   FUN_004f5d90
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x724                          ; 004d5fe0
        ;   Label: FUN_004d5fe0
    CALL FUN_0056497c                   ; 004d5fe5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004d5fea
    TEST EAX,EAX                        ; 004d5fed
    JNZ 0x004d5ff2                      ; 004d5fef
        ;   XREF to: 004d5ff2 (CONDITIONAL_JUMP)  ; LAB_004d5ff2
    RET                                 ; 004d5ff1
    PUSH EAX                            ; 004d5ff2
        ;   Label: LAB_004d5ff2
    CALL FUN_004f5d90                   ; 004d5ff3
        ;   XREF to: 004f5d90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f5d90()
    ADD ESP,0x4                         ; 004d5ff8
    MOV dword ptr [EAX + 0x14c],0x5a0784 ; 004d5ffb | PTR_FUN_005a0784
    RET                                 ; 004d6005

