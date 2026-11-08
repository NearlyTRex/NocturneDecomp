; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a14a0(int param_1)
;
;
; Called Functions:
;   FUN_0059f980
;   FUN_005a8290
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a14a0
        ;   Label: FUN_005a14a0
    PUSH EDX                            ; 005a14a4
    CALL FUN_0059f980                   ; 005a14a5
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f980()
    ADD ESP,0x4                         ; 005a14aa
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a14ad
    ADD EAX,0x154                       ; 005a14b1
    PUSH EAX                            ; 005a14b6
    CALL FUN_005a8290                   ; 005a14b7
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8290()
    MOV EAX,0x1                         ; 005a14bc
    ADD ESP,0x4                         ; 005a14c1
    RET                                 ; 005a14c4

