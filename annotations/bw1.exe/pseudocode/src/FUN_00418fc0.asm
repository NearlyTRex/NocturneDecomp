; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00418fc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01fdce00
;
; Called Functions:
;   FUN_004087b0
;   FUN_00418e50
;   FUN_004207b0
;   FUN_004688a0
;   FUN_00483850
;   FUN_00483e60
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00418fc0
        ;   Label: FUN_00418fc0
    SUB ESP,0x34                        ; 00418fc1
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00418fc4
    CMP dword ptr [EBP + 0x158],0x1     ; 00418fc8
    JLE 0x00418ff4                      ; 00418fcf
        ;   XREF to: 00418ff4 (CONDITIONAL_JUMP)  ; LAB_00418ff4
    CMP dword ptr [EBP + 0xf30],0x0     ; 00418fd1
    JZ 0x00418fed                       ; 00418fd8
        ;   XREF to: 00418fed (CONDITIONAL_JUMP)  ; LAB_00418fed
    CMP dword ptr [EBP + 0x74c],0x0     ; 00418fda
    JLE 0x00418fed                      ; 00418fe1
        ;   XREF to: 00418fed (CONDITIONAL_JUMP)  ; LAB_00418fed
    MOV EAX,0x1                         ; 00418fe3
    ADD ESP,0x34                        ; 00418fe8
    POP EBP                             ; 00418feb
    RET                                 ; 00418fec
    XOR EAX,EAX                         ; 00418fed
        ;   Label: LAB_00418fed
    ADD ESP,0x34                        ; 00418fef
    POP EBP                             ; 00418ff2
    RET                                 ; 00418ff3
    PUSH EDI                            ; 00418ff4
        ;   Label: LAB_00418ff4
    PUSH ESI                            ; 00418ff5
    PUSH EBX                            ; 00418ff6
    MOV EAX,[0x00622c18]                ; 00418ff7 | DAT_00622c18
    MOV EBX,dword ptr [EBP + 0xcb0]     ; 00418ffc
    PUSH EBP                            ; 00419002
    MOV dword ptr [EAX + 0x15ac98],EBX  ; 00419003 | DAT_01fdce00
    CALL FUN_004087b0                   ; 00419009
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 0041900e
    PUSH 0x0                            ; 00419011
    MOV EAX,dword ptr [EBP + 0x154]     ; 00419013
    PUSH EBP                            ; 00419019
    LEA ESI,[ESP + 0x14]                ; 0041901a
    LEA EDI,[ESP + 0x2c]                ; 0041901e
    CALL dword ptr [EAX + 0x1c]         ; 00419022
    MOV ECX,0x6                         ; 00419025
    ADD ESP,0x4                         ; 0041902a
    LEA EAX,[ESP + 0x28]                ; 0041902d
    LEA ESI,[ESP + 0x10]                ; 00419031
    PUSH EAX                            ; 00419035
    MOVSD.REP ES:EDI,ESI                ; 00419036
    CALL FUN_004207b0                   ; 00419038
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0041903d
    MOV dword ptr [EBP + 0xf30],EAX     ; 00419040
    TEST EAX,EAX                        ; 00419046
    JZ 0x004190e0                       ; 00419048
        ;   XREF to: 004190e0 (CONDITIONAL_JUMP)  ; LAB_004190e0
    CMP dword ptr [EBP + 0xcb4],0x0     ; 0041904e
    JNZ 0x0041910c                      ; 00419055
        ;   XREF to: 0041910c (CONDITIONAL_JUMP)  ; LAB_0041910c
    PUSH -0x1                           ; 0041905b
        ;   Label: LAB_0041905b
    PUSH EBP                            ; 0041905d
    CALL FUN_00418e50                   ; 0041905e
        ;   XREF to: 00418e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00418e50()
    ADD ESP,0x8                         ; 00419063
    MOV EDI,dword ptr [EBP + 0x28c]     ; 00419066
        ;   Label: LAB_00419066
    XOR EBX,EBX                         ; 0041906c
    TEST EDI,EDI                        ; 0041906e
    JLE 0x004190e0                      ; 00419070
        ;   XREF to: 004190e0 (CONDITIONAL_JUMP)  ; LAB_004190e0
    LEA EAX,[EBP + 0x290]               ; 00419072
    LEA ESI,[EBP + 0x2a8]               ; 00419078
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041907e
    LEA EDI,[EBP + 0x29c]               ; 00419082
    IMUL EAX,EBX,0x194                  ; 00419088
        ;   Label: LAB_00419088
    ADD EAX,dword ptr [ESP + 0x3c]      ; 0041908e
    PUSH EAX                            ; 00419092
    PUSH EDI                            ; 00419093
    MOV EAX,[0x00612560]                ; 00419094 | DAT_00612560
    PUSH EAX                            ; 00419099 | DAT_01bc120c
    CALL FUN_00483850                   ; 0041909a
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 0041909f
    PUSH -0x1                           ; 004190a2
    PUSH 0x0                            ; 004190a4
    PUSH ESI                            ; 004190a6
    CALL FUN_004688a0                   ; 004190a7
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 004190ac
    MOV EDX,dword ptr [0x00612560]      ; 004190af | DAT_00612560
    INC EBX                             ; 004190b5
    PUSH EDX                            ; 004190b6 | DAT_01bc120c
    ADD EDI,0x194                       ; 004190b7
    ADD ESI,0x194                       ; 004190bd
    CALL thunk_FUN_005084b0             ; 004190c3
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    MOV ECX,dword ptr [EBP + 0x28c]     ; 004190c8
    ADD ESP,0x4                         ; 004190ce
    CMP EBX,ECX                         ; 004190d1
    JL 0x00419088                       ; 004190d3
        ;   XREF to: 00419088 (CONDITIONAL_JUMP)  ; LAB_00419088
    LEA EAX,[EAX]                       ; 004190d5
    LEA EDX,[EDX]                       ; 004190db
    MOV EBX,EBX                         ; 004190de
    MOV EBX,dword ptr [0x00612560]      ; 004190e0 | DAT_00612560
        ;   Label: LAB_004190e0
    PUSH EBX                            ; 004190e6 | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 004190e7
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    MOV EAX,[0x00622c18]                ; 004190ec | DAT_00622c18
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 004190f1 | DAT_01fdce00
    ADD ESP,0x4                         ; 004190fb
    MOV EAX,dword ptr [EBP + 0xf30]     ; 004190fe
    POP EBX                             ; 00419104
    POP ESI                             ; 00419105
    POP EDI                             ; 00419106
    ADD ESP,0x34                        ; 00419107
    POP EBP                             ; 0041910a
    RET                                 ; 0041910b
    MOV ESI,dword ptr [0x00612560]      ; 0041910c | DAT_00612560
        ;   Label: LAB_0041910c
    PUSH ESI                            ; 00419112 | DAT_01bc120c
    CALL FUN_00483e60                   ; 00419113
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 00419118
    TEST EAX,EAX                        ; 0041911b
    JNZ 0x0041905b                      ; 0041911d
        ;   XREF to: 0041905b (CONDITIONAL_JUMP)  ; LAB_0041905b
    JMP 0x00419066                      ; 00419123
        ;   XREF to: 00419066 (UNCONDITIONAL_JUMP)  ; LAB_00419066

