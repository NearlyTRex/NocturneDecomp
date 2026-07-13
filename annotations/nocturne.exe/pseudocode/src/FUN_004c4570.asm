; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c4570(int param_1)
;
;
; Called Functions:
;   FUN_00454530
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c4570
        ;   Label: FUN_004c4570
    ADD EAX,0x150                       ; 004c4574
    PUSH EAX                            ; 004c4579
    CALL FUN_00454530                   ; 004c457a
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    MOV EDX,dword ptr [EAX + 0x110]     ; 004c457f
    ADD ESP,0x4                         ; 004c4585
    CMP EDX,0x1                         ; 004c4588
    JGE 0x004c4590                      ; 004c458b
        ;   XREF to: 004c4590 (CONDITIONAL_JUMP)  ; LAB_004c4590
    XOR EAX,EAX                         ; 004c458d
    RET                                 ; 004c458f
    MOV EAX,0x1                         ; 004c4590
        ;   Label: LAB_004c4590
    RET                                 ; 004c4595

