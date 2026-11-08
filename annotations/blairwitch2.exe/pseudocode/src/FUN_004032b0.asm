; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004032b0(void)
;
;
; XREF[23]:
;   FUN_0047b1f0 at 0047b23d
;   FUN_0047b800 at 0047b9a9
;   FUN_0047c0f0 at 0047c486
;   FUN_0047d270 at 0047d65b
;   FUN_00482250 at 004822f3
;   FUN_00482a00 at 00483136
;   FUN_004b6170 at 004b66a5
;   FUN_004bcbf0 at 004bcfaa
;   FUN_004bd570 at 004bd6ef
;   FUN_004bdfb0 at 004be074
;   ... and 13 more
;
; Referenced Globals:
;   undefined4 DAT_01c37790
;
; Called Functions:
;   FUN_0058e9e0
;   FUN_0058eab0
;   FUN_0058ed00
;
; *****************************************************************************

section .text

    CALL FUN_0058eab0                   ; 004032b0
        ;   XREF to: 0058eab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058eab0()
        ;   Label: FUN_004032b0
    CALL FUN_0058ed00                   ; 004032b5
        ;   XREF to: 0058ed00 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ed00()
    XOR EAX,EAX                         ; 004032ba
    INC EAX                             ; 004032bc
        ;   Label: LAB_004032bc
    XOR DL,DL                           ; 004032bd
    MOV byte ptr [EAX + 0x1c3778f],DL   ; 004032bf | DAT_01c37790
    CMP EAX,0x258                       ; 004032c5
    JL 0x004032bc                       ; 004032ca
        ;   XREF to: 004032bc (CONDITIONAL_JUMP)  ; LAB_004032bc
    PUSH EBX                            ; 004032cc
    CALL FUN_0058e9e0                   ; 004032cd
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
    MOV EBX,EAX                         ; 004032d2
    SAR EBX,0x10                        ; 004032d4
    CALL FUN_0058e9e0                   ; 004032d7
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
        ;   Label: LAB_004032d7
    SAR EAX,0x10                        ; 004032dc
    CMP EBX,EAX                         ; 004032df
    JZ 0x00403301                       ; 004032e1
        ;   XREF to: 00403301 (CONDITIONAL_JUMP)  ; LAB_00403301
    CALL FUN_0058eab0                   ; 004032e3
        ;   XREF to: 0058eab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058eab0()
    CALL FUN_0058ed00                   ; 004032e8
        ;   XREF to: 0058ed00 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ed00()
    XOR EAX,EAX                         ; 004032ed
    POP EBX                             ; 004032ef
    INC EAX                             ; 004032f0
        ;   Label: LAB_004032f0
    XOR DH,DH                           ; 004032f1
    MOV byte ptr [EAX + 0x1c3778f],DH   ; 004032f3 | DAT_01c37790
    CMP EAX,0x258                       ; 004032f9
    JL 0x004032f0                       ; 004032fe
        ;   XREF to: 004032f0 (CONDITIONAL_JUMP)  ; LAB_004032f0
    RET                                 ; 00403300
    CALL FUN_0058eab0                   ; 00403301
        ;   XREF to: 0058eab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058eab0()
        ;   Label: LAB_00403301
    JMP 0x004032d7                      ; 00403306
        ;   XREF to: 004032d7 (UNCONDITIONAL_JUMP)  ; LAB_004032d7

