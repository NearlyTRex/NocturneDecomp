; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056cde0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_02d202ac
;
; Called Functions:
;   FUN_00408bf0
;   FUN_0040c840
;   FUN_0042abb0
;   FUN_0053ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cde0
        ;   Label: FUN_0056cde0
    PUSH ESI                            ; 0056cde1
    PUSH EDI                            ; 0056cde2
    PUSH EBP                            ; 0056cde3
    SUB ESP,0xb4                        ; 0056cde4
    MOV EBP,dword ptr [ESP + 0xc8]      ; 0056cdea
    CMP dword ptr [EBP + 0x2d4],0x0     ; 0056cdf1
    JNZ 0x0056ce4c                      ; 0056cdf8
        ;   XREF to: 0056ce4c (CONDITIONAL_JUMP)  ; LAB_0056ce4c
    MOV ECX,dword ptr [EBP + 0x2d8]     ; 0056cdfa
    TEST ECX,ECX                        ; 0056ce00
    JNZ 0x0056ce57                      ; 0056ce02
        ;   XREF to: 0056ce57 (CONDITIONAL_JUMP)  ; LAB_0056ce57
    LEA ESI,[ESP + 0x64]                ; 0056ce04
        ;   Label: LAB_0056ce04
    PUSH EBP                            ; 0056ce08
    MOV EAX,dword ptr [EBP + 0x154]     ; 0056ce09
    LEA EDI,[ESP + 0x80]                ; 0056ce0f
    XOR EBX,EBX                         ; 0056ce16
    CALL dword ptr [EAX + 0x1c]         ; 0056ce18
    MOV ECX,0x6                         ; 0056ce1b
    ADD ESP,0x4                         ; 0056ce20
    LEA ESI,[ESP + 0x64]                ; 0056ce23
    MOV dword ptr [ESP + 0xb0],EBX      ; 0056ce27
    MOV dword ptr [ESP + 0xac],EBX      ; 0056ce2e
    MOVSD.REP ES:EDI,ESI                ; 0056ce35
    MOV EBX,dword ptr [0x00603b28]      ; 0056ce37 | DAT_00603b28
        ;   Label: LAB_0056ce37
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0056ce3d
    CMP EAX,dword ptr [EBX + 0x150fec]  ; 0056ce44
    JL 0x0056ceac                       ; 0056ce4a
        ;   XREF to: 0056ceac (CONDITIONAL_JUMP)  ; LAB_0056ceac
    ADD ESP,0xb4                        ; 0056ce4c
        ;   Label: LAB_0056ce4c
    POP EBP                             ; 0056ce52
    POP EDI                             ; 0056ce53
    POP ESI                             ; 0056ce54
    POP EBX                             ; 0056ce55
    RET                                 ; 0056ce56
    PUSH ECX                            ; 0056ce57
        ;   Label: LAB_0056ce57
    MOV EBX,dword ptr [ECX + 0x154]     ; 0056ce58
    CALL dword ptr [EBX + 0x10c]        ; 0056ce5e
    ADD ESP,0x4                         ; 0056ce64
    TEST EAX,EAX                        ; 0056ce67
    JZ 0x0056ce4c                       ; 0056ce69
        ;   XREF to: 0056ce4c (CONDITIONAL_JUMP)  ; LAB_0056ce4c
    MOV EAX,dword ptr [EBP + 0x2d8]     ; 0056ce6b
    MOV dword ptr [EAX + 0xd080],0x0    ; 0056ce71
    MOV dword ptr [EBP + 0x2d8],0x0     ; 0056ce7b
    JMP 0x0056ce04                      ; 0056ce85
        ;   XREF to: 0056ce04 (UNCONDITIONAL_JUMP)  ; LAB_0056ce04
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0056ce8a
        ;   Label: LAB_0056ce8a
    MOV EAX,dword ptr [ESP + 0xac]      ; 0056ce91
    INC EDX                             ; 0056ce98
    ADD EAX,0x4                         ; 0056ce99
    MOV dword ptr [ESP + 0xb0],EDX      ; 0056ce9c
    MOV dword ptr [ESP + 0xac],EAX      ; 0056cea3
    JMP 0x0056ce37                      ; 0056ceaa
        ;   XREF to: 0056ce37 (UNCONDITIONAL_JUMP)  ; LAB_0056ce37
    MOV EDX,dword ptr [ESP + 0xac]      ; 0056ceac
        ;   Label: LAB_0056ceac
    MOV EAX,[0x02d202ac]                ; 0056ceb3 | DAT_02d202ac
    ADD EBX,EDX                         ; 0056ceb8
    PUSH EAX                            ; 0056ceba
    MOV ECX,dword ptr [EBX + 0x150ff0]  ; 0056cebb
    PUSH ECX                            ; 0056cec1
    CALL FUN_0040c840                   ; 0056cec2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV EBX,EAX                         ; 0056cec7
    ADD ESP,0x8                         ; 0056cec9
    TEST EAX,EAX                        ; 0056cecc
    JZ 0x0056ce8a                       ; 0056cece
        ;   XREF to: 0056ce8a (CONDITIONAL_JUMP)  ; LAB_0056ce8a
    CMP dword ptr [EAX + 0xd080],0x0    ; 0056ced0
    JNZ 0x0056ce8a                      ; 0056ced7
        ;   XREF to: 0056ce8a (CONDITIONAL_JUMP)  ; LAB_0056ce8a
    LEA ESI,[ESP + 0x3c]                ; 0056ced9
    PUSH ESI                            ; 0056cedd
    CALL FUN_0053ed80                   ; 0056cede
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ed80()
    ADD ESP,0x4                         ; 0056cee3
    LEA ESI,[ESP + 0x3c]                ; 0056cee6
    PUSH ESI                            ; 0056ceea
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056ceeb
    PUSH EBX                            ; 0056cef1
    CALL dword ptr [EAX + 0x3c]         ; 0056cef2
    ADD ESP,0x8                         ; 0056cef5
    FLD float ptr [EBP + 0x24]          ; 0056cef8
    FADD float ptr [ESP + 0x8c]         ; 0056cefb
    FCOMP float ptr [EBX + 0x24]        ; 0056cf02
    FNSTSW AX                           ; 0056cf05
    SAHF                                ; 0056cf07
    JC 0x0056ce8a                       ; 0056cf08
        ;   XREF to: 0056ce8a (CONDITIONAL_JUMP)  ; LAB_0056ce8a
    FLD float ptr [EBX + 0x24]          ; 0056cf0a
    FADD float ptr [ESP + 0x54]         ; 0056cf0d
    FLD float ptr [EBP + 0x24]          ; 0056cf11
    FADD float ptr [ESP + 0x80]         ; 0056cf14
    FCOMPP                              ; 0056cf1b
    FNSTSW AX                           ; 0056cf1d
    SAHF                                ; 0056cf1f
    JA 0x0056ce8a                       ; 0056cf20
        ;   XREF to: 0056ce8a (CONDITIONAL_JUMP)  ; LAB_0056ce8a
    LEA ESI,[EBX + 0x20]                ; 0056cf26
    PUSH ESI                            ; 0056cf29
    PUSH EBP                            ; 0056cf2a
    LEA ESI,[ESP + 0x9c]                ; 0056cf2b
    LEA EDI,[ESP + 0xa8]                ; 0056cf32
    CALL FUN_00408bf0                   ; 0056cf39
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x9c]                ; 0056cf3e
    ADD ESP,0x8                         ; 0056cf45
    MOVSD ES:EDI,ESI                    ; 0056cf48
    MOVSD ES:EDI,ESI                    ; 0056cf49
    MOVSD ES:EDI,ESI                    ; 0056cf4a
    FLD float ptr [ESP + 0xa0]          ; 0056cf4b
    FADD float ptr [ESP + 0x58]         ; 0056cf52
    FCOMP float ptr [ESP + 0x7c]        ; 0056cf56
    FNSTSW AX                           ; 0056cf5a
    SAHF                                ; 0056cf5c
    JC 0x0056ce8a                       ; 0056cf5d
        ;   XREF to: 0056ce8a (CONDITIONAL_JUMP)  ; LAB_0056ce8a
    FLD float ptr [ESP + 0xa0]          ; 0056cf63
    FSUB float ptr [ESP + 0x58]         ; 0056cf6a
    FCOMP float ptr [ESP + 0x88]        ; 0056cf6e
    FNSTSW AX                           ; 0056cf75
    SAHF                                ; 0056cf77
    JA 0x0056ce8a                       ; 0056cf78
        ;   XREF to: 0056ce8a (CONDITIONAL_JUMP)  ; LAB_0056ce8a
    FLD float ptr [ESP + 0xa8]          ; 0056cf7e
    FADD float ptr [ESP + 0x58]         ; 0056cf85
    FCOMP float ptr [ESP + 0x84]        ; 0056cf89
    FNSTSW AX                           ; 0056cf90
    SAHF                                ; 0056cf92
    JC 0x0056ce8a                       ; 0056cf93
        ;   XREF to: 0056ce8a (CONDITIONAL_JUMP)  ; LAB_0056ce8a
    FLD float ptr [ESP + 0xa8]          ; 0056cf99
    FSUB float ptr [ESP + 0x58]         ; 0056cfa0
    FCOMP float ptr [ESP + 0x90]        ; 0056cfa4
    FNSTSW AX                           ; 0056cfab
    SAHF                                ; 0056cfad
    JA 0x0056ce8a                       ; 0056cfae
        ;   XREF to: 0056ce8a (CONDITIONAL_JUMP)  ; LAB_0056ce8a
    MOV dword ptr [EBP + 0x2d8],EBX     ; 0056cfb4
    MOV EAX,ESP                         ; 0056cfba
    MOV dword ptr [EBX + 0xd084],0x40000000 ; 0056cfbc
    PUSH EAX                            ; 0056cfc6
    MOV dword ptr [EBX + 0xd080],EBP    ; 0056cfc7
    CALL FUN_0042abb0                   ; 0056cfcd
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 0056cfd2
    MOV EAX,ESP                         ; 0056cfd5
    MOV EDI,0x41200000                  ; 0056cfd7
    PUSH EAX                            ; 0056cfdc
    MOV dword ptr [ESP + 0x8],EDI       ; 0056cfdd
    PUSH EBX                            ; 0056cfe1
    MOV ESI,dword ptr [EBX + 0x154]     ; 0056cfe2
    CALL dword ptr [ESI + 0x108]        ; 0056cfe8
    ADD ESP,0x8                         ; 0056cfee
    ADD ESP,0xb4                        ; 0056cff1
    POP EBP                             ; 0056cff7
    POP EDI                             ; 0056cff8
    POP ESI                             ; 0056cff9
    POP EBX                             ; 0056cffa
    RET                                 ; 0056cffb

