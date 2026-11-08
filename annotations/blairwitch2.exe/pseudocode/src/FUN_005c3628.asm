; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c3628(void)
;
;
; XREF[1]:
;   FUN_005be2d0 at 005be2d8
;
; Referenced Globals:
;   void* PTR_GetConsoleMode_005c8570 = 001c8dee
;   void* PTR_SetConsoleMode_005c8610 = 001c90f2
;   undefined4 DAT_0061f270
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;   undefined4 DAT_0061f414
;   undefined4 DAT_0061f448
;
; Called Functions:
;   FUN_005bce04
;   FUN_005c3510
;   FUN_005c4dc0
;   GetConsoleMode
;   SetConsoleMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3628
        ;   Label: FUN_005c3628
    PUSH ESI                            ; 005c3629
    SUB ESP,0x4                         ; 005c362a
    MOV EAX,[0x0061f270]                ; 005c362d | DAT_0061f270
    TEST EAX,EAX                        ; 005c3632
    JZ 0x005c3640                       ; 005c3634
        ;   XREF to: 005c3640 (CONDITIONAL_JUMP)  ; LAB_005c3640
    XOR ESI,ESI                         ; 005c3636
    MOV dword ptr [0x0061f270],ESI      ; 005c3638 | DAT_0061f270
    JMP 0x005c36ab                      ; 005c363e
        ;   XREF to: 005c36ab (UNCONDITIONAL_JUMP)  ; LAB_005c36ab
    CMP dword ptr [0x0061f448],0x0      ; 005c3640 | DAT_0061f448
        ;   Label: LAB_005c3640
    JZ 0x005c3661                       ; 005c3647
        ;   XREF to: 005c3661 (CONDITIONAL_JUMP)  ; LAB_005c3661
    PUSH EAX                            ; 005c3649
    CALL dword ptr [0x0061f414]         ; 005c364a | DAT_0061f414
    ADD ESP,0x4                         ; 005c3650
    PUSH EAX                            ; 005c3653
    CALL dword ptr [0x0061f448]         ; 005c3654 | DAT_0061f448
    ADD ESP,0x4                         ; 005c365a
    MOV ESI,EAX                         ; 005c365d
    JMP 0x005c36a9                      ; 005c365f
        ;   XREF to: 005c36a9 (UNCONDITIONAL_JUMP)  ; LAB_005c36a9
    PUSH EAX                            ; 005c3661
        ;   Label: LAB_005c3661
    CALL dword ptr [0x0061f2a8]         ; 005c3662 | PTR_FUN_0061f2a8
    ADD ESP,0x4                         ; 005c3668
    CALL FUN_005c4dc0                   ; 005c366b
        ;   XREF to: 005c4dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4dc0()
    MOV EBX,EAX                         ; 005c3670
    MOV EAX,ESP                         ; 005c3672
    PUSH EAX                            ; 005c3674
    PUSH EBX                            ; 005c3675
    CALL dword ptr CS:[0x5c8570]        ; 005c3676 | PTR_GetConsoleMode_005c8570
    PUSH 0x0                            ; 005c367d
    PUSH EBX                            ; 005c367f
    CALL dword ptr CS:[0x5c8610]        ; 005c3680 | PTR_SetConsoleMode_005c8610
    PUSH EBX                            ; 005c3687
    CALL FUN_005c3510                   ; 005c3688
        ;   XREF to: 005c3510 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3510()
    ADD ESP,0x4                         ; 005c368d
    MOV ECX,dword ptr [ESP]             ; 005c3690
    PUSH ECX                            ; 005c3693
    PUSH EBX                            ; 005c3694
    MOV ESI,EAX                         ; 005c3695
    CALL dword ptr CS:[0x5c8610]        ; 005c3697 | PTR_SetConsoleMode_005c8610
    PUSH 0x0                            ; 005c369e
    CALL dword ptr [0x0061f2ac]         ; 005c36a0 | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005c36a6
    MOV EAX,ESI                         ; 005c36a9
        ;   Label: LAB_005c36a9
    ADD ESP,0x4                         ; 005c36ab
        ;   Label: LAB_005c36ab
    POP ESI                             ; 005c36ae
    POP EBX                             ; 005c36af
    RET                                 ; 005c36b0

