; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059ddb0(int param_1)
;
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_0042d8e0
;   FUN_004fab90
;   FUN_004fb0e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ddb0
        ;   Label: FUN_0059ddb0
    SUB ESP,0x30                        ; 0059ddb1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0059ddb4
    FLD float ptr [EBX + 0x487c4]       ; 0059ddb8
    FLD1                                ; 0059ddbe
    FCOMPP                              ; 0059ddc0
    FNSTSW AX                           ; 0059ddc2
    SAHF                                ; 0059ddc4
    JC 0x0059ddd0                       ; 0059ddc5
        ;   XREF to: 0059ddd0 (CONDITIONAL_JUMP)  ; LAB_0059ddd0
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0059ddc7
    JZ 0x0059ddd7                       ; 0059ddce
        ;   XREF to: 0059ddd7 (CONDITIONAL_JUMP)  ; LAB_0059ddd7
    XOR EAX,EAX                         ; 0059ddd0
        ;   Label: LAB_0059ddd0
    ADD ESP,0x30                        ; 0059ddd2
    POP EBX                             ; 0059ddd5
    RET                                 ; 0059ddd6
    PUSH EDI                            ; 0059ddd7
        ;   Label: LAB_0059ddd7
    PUSH ESI                            ; 0059ddd8
    PUSH EBX                            ; 0059ddd9
    CALL FUN_004087f0                   ; 0059ddda
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0059dddf
    PUSH 0x0                            ; 0059dde2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059dde4
    PUSH EBX                            ; 0059ddea
    LEA ESI,[ESP + 0x10]                ; 0059ddeb
    LEA EDI,[ESP + 0x28]                ; 0059ddef
    CALL dword ptr [EAX + 0x1c]         ; 0059ddf3
    MOV ECX,0x6                         ; 0059ddf6
    ADD ESP,0x4                         ; 0059ddfb
    LEA EAX,[ESP + 0x24]                ; 0059ddfe
    LEA ESI,[ESP + 0xc]                 ; 0059de02
    PUSH EAX                            ; 0059de06
    MOVSD.REP ES:EDI,ESI                ; 0059de07
    CALL FUN_0041daf0                   ; 0059de09
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0059de0e
    MOV EDI,EAX                         ; 0059de11
    TEST EAX,EAX                        ; 0059de13
    JZ 0x0059de2c                       ; 0059de15
        ;   XREF to: 0059de2c (CONDITIONAL_JUMP)  ; LAB_0059de2c
    TEST dword ptr [EBX + 0x487c4],0x7fffffff ; 0059de17
    JNZ 0x0059de3e                      ; 0059de21
        ;   XREF to: 0059de3e (CONDITIONAL_JUMP)  ; LAB_0059de3e
    PUSH EBX                            ; 0059de23
        ;   Label: LAB_0059de23
    CALL FUN_0042d8e0                   ; 0059de24
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d8e0()
    ADD ESP,0x4                         ; 0059de29
    PUSH EBX                            ; 0059de2c
        ;   Label: LAB_0059de2c
    CALL FUN_00408830                   ; 0059de2d
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0059de32
    MOV EAX,EDI                         ; 0059de35
    POP ESI                             ; 0059de37
    POP EDI                             ; 0059de38
    ADD ESP,0x30                        ; 0059de39
    POP EBX                             ; 0059de3c
    RET                                 ; 0059de3d
    MOV ESI,dword ptr [EBX + 0x47b90]   ; 0059de3e
        ;   Label: LAB_0059de3e
    TEST ESI,ESI                        ; 0059de44
    JNZ 0x0059de23                      ; 0059de46
        ;   XREF to: 0059de23 (CONDITIONAL_JUMP)  ; LAB_0059de23
    PUSH ESI                            ; 0059de48
    LEA EAX,[EBX + 0x158]               ; 0059de49
    PUSH EAX                            ; 0059de4f
    PUSH ESI                            ; 0059de50
    LEA ESI,[EBX + 0x47b98]             ; 0059de51
    PUSH ESI                            ; 0059de57
    CALL FUN_004fab90                   ; 0059de58
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; undefined FUN_004fab90()
    ADD ESP,0x10                        ; 0059de5d
    MOV EAX,dword ptr [EBX + 0x47b94]   ; 0059de60
    PUSH 0x0                            ; 0059de66
    ADD EAX,0x158                       ; 0059de68
    PUSH EAX                            ; 0059de6d
    PUSH 0x1                            ; 0059de6e
    PUSH ESI                            ; 0059de70
    CALL FUN_004fab90                   ; 0059de71
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; undefined FUN_004fab90()
    ADD ESP,0x10                        ; 0059de76
    PUSH dword ptr [EBX + 0x487c4]      ; 0059de79
    PUSH ESI                            ; 0059de7f
    CALL FUN_004fb0e0                   ; 0059de80
        ;   XREF to: 004fb0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb0e0()
    ADD ESP,0x8                         ; 0059de85
    PUSH EBX                            ; 0059de88
    CALL FUN_00408830                   ; 0059de89
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0059de8e
    MOV EAX,EDI                         ; 0059de91
    POP ESI                             ; 0059de93
    POP EDI                             ; 0059de94
    ADD ESP,0x30                        ; 0059de95
    POP EBX                             ; 0059de98
    RET                                 ; 0059de99

