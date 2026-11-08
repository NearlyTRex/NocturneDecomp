; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d6540(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f8d20
;
; Called Functions:
;   FUN_004ce3d0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6540
        ;   Label: FUN_004d6540
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d6541
    TEST byte ptr [ESP + 0xc],0x4       ; 004d6545
    JNZ 0x004d6566                      ; 004d654a
        ;   XREF to: 004d6566 (CONDITIONAL_JUMP)  ; LAB_004d6566
    PUSH 0x1                            ; 004d654c
    PUSH EBX                            ; 004d654e
    CALL FUN_004ce3d0                   ; 004d654f
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce3d0()
    ADD ESP,0x8                         ; 004d6554
    MOV DL,byte ptr [ESP + 0xc]         ; 004d6557
    MOV EBX,EAX                         ; 004d655b
    TEST DL,0x2                         ; 004d655d
    JNZ 0x004d6581                      ; 004d6560
        ;   XREF to: 004d6581 (CONDITIONAL_JUMP)  ; LAB_004d6581
    MOV EAX,EBX                         ; 004d6562
    POP EBX                             ; 004d6564
    RET                                 ; 004d6565
    PUSH 0x5f8d20                       ; 004d6566 | DAT_005f8d20
        ;   Label: LAB_004d6566
    PUSH EBX                            ; 004d656b
    CALL FUN_005b7fa7                   ; 004d656c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d6571
    PUSH EAX                            ; 004d6574
    CALL FUN_005b7fce                   ; 004d6575
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004d657a
    MOV EAX,EBX                         ; 004d657d
    POP EBX                             ; 004d657f
    RET                                 ; 004d6580
    PUSH EAX                            ; 004d6581
        ;   Label: LAB_004d6581
    CALL FUN_005b7fdc                   ; 004d6582
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d6587
    MOV EAX,EBX                         ; 004d658a
    POP EBX                             ; 004d658c
    RET                                 ; 004d658d

