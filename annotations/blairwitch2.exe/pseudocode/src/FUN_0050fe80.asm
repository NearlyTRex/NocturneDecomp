; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050fe80(undefined4 param_1)
;
;
; XREF[38]:
;   FUN_00460630 at 004606b6
;   FUN_0047c970 at 0047cadc
;   FUN_0047d270 at 0047d387
;   FUN_00481fc0 at 00482046
;   FUN_004a32e0 at 004a3479
;   FUN_004a5700 at 004a5ecf
;   FUN_004b3c50 at 004b3cbc
;   FUN_004b5190 at 004b5b74
;   FUN_004b6170 at 004b672d
;   FUN_004b82e0 at 004b8b7b
;   ... and 28 more
;
; Referenced Globals:
;   undefined4 DAT_01d63254
;   undefined4 DAT_01d63258
;
; Called Functions:
;   FUN_0050fe00
;   FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0050fe80
        ;   Label: FUN_0050fe80
    PUSH EBP                            ; 0050fe81
    MOV EDI,dword ptr [ESP + 0xc]       ; 0050fe82
    CMP dword ptr [0x01d63254],0x0      ; 0050fe86 | DAT_01d63254
    JZ 0x0050fea3                       ; 0050fe8d
        ;   XREF to: 0050fea3 (CONDITIONAL_JUMP)  ; LAB_0050fea3
    PUSH ESI                            ; 0050fe8f
    PUSH EBX                            ; 0050fe90
    MOV EBX,dword ptr [0x01d63258]      ; 0050fe91 | DAT_01d63258
    DEC EBX                             ; 0050fe97
    TEST EBX,EBX                        ; 0050fe98
    JGE 0x0050fea8                      ; 0050fe9a
        ;   XREF to: 0050fea8 (CONDITIONAL_JUMP)  ; LAB_0050fea8
    MOV EAX,EDI                         ; 0050fe9c
    POP EBX                             ; 0050fe9e
    POP ESI                             ; 0050fe9f
    POP EBP                             ; 0050fea0
    POP EDI                             ; 0050fea1
    RET                                 ; 0050fea2
    MOV EAX,EDI                         ; 0050fea3
        ;   Label: LAB_0050fea3
    POP EBP                             ; 0050fea5
    POP EDI                             ; 0050fea6
    RET                                 ; 0050fea7
    MOV EDX,EBX                         ; 0050fea8
        ;   Label: LAB_0050fea8
    MOV EAX,EBX                         ; 0050feaa
    SAR EDX,0x1f                        ; 0050feac
    SUB EAX,EDX                         ; 0050feaf
    SAR EAX,0x1                         ; 0050feb1
    MOV ESI,EAX                         ; 0050feb3
    LEA EBP,[EAX*0x4 + 0x0]             ; 0050feb5
    MOV ECX,dword ptr [EBP + 0x1d6325c] ; 0050febc
    PUSH ECX                            ; 0050fec2
    PUSH EDI                            ; 0050fec3
    CALL FUN_005b8c30                   ; 0050fec4
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 0050fec9
    TEST EAX,EAX                        ; 0050fecc
    JL 0x0050fedd                       ; 0050fece
        ;   XREF to: 0050fedd (CONDITIONAL_JUMP)  ; LAB_0050fedd
    JG 0x0050feef                       ; 0050fed0
        ;   XREF to: 0050feef (CONDITIONAL_JUMP)  ; LAB_0050feef
    MOV EAX,dword ptr [EBP + 0x1d63a2c] ; 0050fed2
    POP EBX                             ; 0050fed8
    POP ESI                             ; 0050fed9
    POP EBP                             ; 0050feda
    POP EDI                             ; 0050fedb
    RET                                 ; 0050fedc
    DEC ESI                             ; 0050fedd
        ;   Label: LAB_0050fedd
    PUSH ESI                            ; 0050fede
    PUSH 0x0                            ; 0050fedf
    PUSH EDI                            ; 0050fee1
    CALL FUN_0050fe00                   ; 0050fee2
        ;   XREF to: 0050fe00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe00()
    ADD ESP,0xc                         ; 0050fee7
    POP EBX                             ; 0050feea
    POP ESI                             ; 0050feeb
    POP EBP                             ; 0050feec
    POP EDI                             ; 0050feed
    RET                                 ; 0050feee
    PUSH EBX                            ; 0050feef
        ;   Label: LAB_0050feef
    INC ESI                             ; 0050fef0
    PUSH ESI                            ; 0050fef1
    PUSH EDI                            ; 0050fef2
    CALL FUN_0050fe00                   ; 0050fef3
        ;   XREF to: 0050fe00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe00()
    ADD ESP,0xc                         ; 0050fef8
    POP EBX                             ; 0050fefb
    POP ESI                             ; 0050fefc
    POP EBP                             ; 0050fefd
    POP EDI                             ; 0050fefe
    RET                                 ; 0050feff

