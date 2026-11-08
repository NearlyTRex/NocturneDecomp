; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004032b0(void)
;
;
; XREF[21]:
;   FUN_0047c2c0 at 0047c30d
;   FUN_0047c8e0 at 0047ca89
;   FUN_0047d230 at 0047d5d1
;   FUN_0047e470 at 0047e868
;   FUN_00483450 at 004834f3
;   FUN_00483c00 at 00484336
;   FUN_004b7f90 at 004b8555
;   FUN_004bec20 at 004befb2
;   FUN_004bf4b0 at 004bf626
;   FUN_004bfee0 at 004c00d1
;   ... and 11 more
;
; Referenced Globals:
;   undefined4 DAT_01c6cef0
;
; Called Functions:
;   FUN_005806a0
;   FUN_00580770
;   FUN_005809c0
;
; *****************************************************************************

section .text

    CALL FUN_00580770                   ; 004032b0
        ;   XREF to: 00580770 (UNCONDITIONAL_CALL)  ; undefined FUN_00580770()
        ;   Label: FUN_004032b0
    CALL FUN_005809c0                   ; 004032b5
        ;   XREF to: 005809c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005809c0()
    XOR EAX,EAX                         ; 004032ba
    INC EAX                             ; 004032bc
        ;   Label: LAB_004032bc
    XOR DL,DL                           ; 004032bd
    MOV byte ptr [EAX + 0x1c6ceef],DL   ; 004032bf | DAT_01c6cef0
    CMP EAX,0x258                       ; 004032c5
    JL 0x004032bc                       ; 004032ca
        ;   XREF to: 004032bc (CONDITIONAL_JUMP)  ; LAB_004032bc
    PUSH EBX                            ; 004032cc
    CALL FUN_005806a0                   ; 004032cd
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
    MOV EBX,EAX                         ; 004032d2
    SAR EBX,0x10                        ; 004032d4
    CALL FUN_005806a0                   ; 004032d7
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
        ;   Label: LAB_004032d7
    SAR EAX,0x10                        ; 004032dc
    CMP EBX,EAX                         ; 004032df
    JZ 0x00403301                       ; 004032e1
        ;   XREF to: 00403301 (CONDITIONAL_JUMP)  ; LAB_00403301
    CALL FUN_00580770                   ; 004032e3
        ;   XREF to: 00580770 (UNCONDITIONAL_CALL)  ; undefined FUN_00580770()
    CALL FUN_005809c0                   ; 004032e8
        ;   XREF to: 005809c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005809c0()
    XOR EAX,EAX                         ; 004032ed
    POP EBX                             ; 004032ef
    INC EAX                             ; 004032f0
        ;   Label: LAB_004032f0
    XOR DH,DH                           ; 004032f1
    MOV byte ptr [EAX + 0x1c6ceef],DH   ; 004032f3 | DAT_01c6cef0
    CMP EAX,0x258                       ; 004032f9
    JL 0x004032f0                       ; 004032fe
        ;   XREF to: 004032f0 (CONDITIONAL_JUMP)  ; LAB_004032f0
    RET                                 ; 00403300
    CALL FUN_00580770                   ; 00403301
        ;   XREF to: 00580770 (UNCONDITIONAL_CALL)  ; undefined FUN_00580770()
        ;   Label: LAB_00403301
    JMP 0x004032d7                      ; 00403306
        ;   XREF to: 004032d7 (UNCONDITIONAL_JUMP)  ; LAB_004032d7

