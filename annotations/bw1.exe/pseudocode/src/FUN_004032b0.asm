; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004032b0(void)
;
;
; XREF[21]:
;   FUN_00493720 at 0049376d
;   FUN_00493d40 at 00493ee9
;   FUN_00494690 at 00494a31
;   FUN_004958d0 at 00495cc8
;   FUN_0049a8b0 at 0049a953
;   FUN_0049b060 at 0049b796
;   FUN_004cf5e0 at 004cfb97
;   FUN_004d77d0 at 004d7b62
;   FUN_004d8060 at 004d81d6
;   FUN_004d8a90 at 004d8c81
;   ... and 11 more
;
; Referenced Globals:
;   undefined4 DAT_01c50950
;
; Called Functions:
;   FUN_005b2420
;   FUN_005b24f0
;   FUN_005b2740
;
; *****************************************************************************

section .text

    CALL FUN_005b24f0                   ; 004032b0
        ;   XREF to: 005b24f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b24f0()
        ;   Label: FUN_004032b0
    CALL FUN_005b2740                   ; 004032b5
        ;   XREF to: 005b2740 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2740()
    XOR EAX,EAX                         ; 004032ba
    INC EAX                             ; 004032bc
        ;   Label: LAB_004032bc
    XOR DL,DL                           ; 004032bd
    MOV byte ptr [EAX + 0x1c5094f],DL   ; 004032bf | DAT_01c50950
    CMP EAX,0x258                       ; 004032c5
    JL 0x004032bc                       ; 004032ca
        ;   XREF to: 004032bc (CONDITIONAL_JUMP)  ; LAB_004032bc
    PUSH EBX                            ; 004032cc
    CALL FUN_005b2420                   ; 004032cd
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EBX,EAX                         ; 004032d2
    SAR EBX,0x10                        ; 004032d4
    CALL FUN_005b2420                   ; 004032d7
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
        ;   Label: LAB_004032d7
    SAR EAX,0x10                        ; 004032dc
    CMP EBX,EAX                         ; 004032df
    JZ 0x00403301                       ; 004032e1
        ;   XREF to: 00403301 (CONDITIONAL_JUMP)  ; LAB_00403301
    CALL FUN_005b24f0                   ; 004032e3
        ;   XREF to: 005b24f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b24f0()
    CALL FUN_005b2740                   ; 004032e8
        ;   XREF to: 005b2740 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2740()
    XOR EAX,EAX                         ; 004032ed
    POP EBX                             ; 004032ef
    INC EAX                             ; 004032f0
        ;   Label: LAB_004032f0
    XOR DH,DH                           ; 004032f1
    MOV byte ptr [EAX + 0x1c5094f],DH   ; 004032f3 | DAT_01c50950
    CMP EAX,0x258                       ; 004032f9
    JL 0x004032f0                       ; 004032fe
        ;   XREF to: 004032f0 (CONDITIONAL_JUMP)  ; LAB_004032f0
    RET                                 ; 00403300
    CALL FUN_005b24f0                   ; 00403301
        ;   XREF to: 005b24f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b24f0()
        ;   Label: LAB_00403301
    JMP 0x004032d7                      ; 00403306
        ;   XREF to: 004032d7 (UNCONDITIONAL_JUMP)  ; LAB_004032d7

