; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057b040(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   FUN_004087d0
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;   FUN_0046d4c0
;   FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b040
        ;   Label: FUN_0057b040
    PUSH ESI                            ; 0057b041
    PUSH EDI                            ; 0057b042
    PUSH EBP                            ; 0057b043
    SUB ESP,0x30                        ; 0057b044
    MOV EBX,dword ptr [ESP + 0x44]      ; 0057b047
    PUSH 0x0                            ; 0057b04b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057b04d
    PUSH EBX                            ; 0057b053
    LEA ESI,[ESP + 0x8]                 ; 0057b054
    LEA EDI,[ESP + 0x20]                ; 0057b058
    CALL dword ptr [EAX + 0x1c]         ; 0057b05c
    MOV ECX,0x6                         ; 0057b05f
    ADD ESP,0x4                         ; 0057b064
    LEA EAX,[ESP + 0x1c]                ; 0057b067
    LEA ESI,[ESP + 0x4]                 ; 0057b06b
    PUSH EAX                            ; 0057b06f
    MOVSD.REP ES:EDI,ESI                ; 0057b070
    CALL FUN_0041daf0                   ; 0057b072
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    MOV EDI,EAX                         ; 0057b077
    ADD ESP,0x8                         ; 0057b079
    MOV EDX,dword ptr [EBX + 0x588]     ; 0057b07c
    MOV ESI,EAX                         ; 0057b082
    CMP EDX,0x10000                     ; 0057b084
    JZ 0x0057b0f9                       ; 0057b08a
        ;   XREF to: 0057b0f9 (CONDITIONAL_JUMP)  ; LAB_0057b0f9
    PUSH EBX                            ; 0057b08c
    CALL FUN_004087f0                   ; 0057b08d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0057b092
    TEST EDI,EDI                        ; 0057b095
    JZ 0x0057b0c5                       ; 0057b097
        ;   XREF to: 0057b0c5 (CONDITIONAL_JUMP)  ; LAB_0057b0c5
    MOV ECX,dword ptr [EBX + 0x588]     ; 0057b099
    PUSH ECX                            ; 0057b09f
    MOV EDI,dword ptr [0x005f2afc]      ; 0057b0a0 | DAT_005f2afc
    PUSH EDI                            ; 0057b0a6
    CALL FUN_0046d4c0                   ; 0057b0a7
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 0057b0ac
    PUSH 0x267                          ; 0057b0af
    LEA EAX,[EBX + 0x158]               ; 0057b0b4
    PUSH 0x0                            ; 0057b0ba
    PUSH EAX                            ; 0057b0bc
    CALL FUN_00462540                   ; 0057b0bd
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 0057b0c2
    PUSH EBX                            ; 0057b0c5
        ;   Label: LAB_0057b0c5
    CALL FUN_00408830                   ; 0057b0c6
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0057b0cb
    MOV EBP,dword ptr [0x005f2afc]      ; 0057b0ce | DAT_005f2afc
    PUSH EBP                            ; 0057b0d4
    MOV dword ptr [EBX + 0x584],0x0     ; 0057b0d5
    CALL FUN_0046d540                   ; 0057b0df
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 0057b0e4
    TEST EAX,EAX                        ; 0057b0e7
    JNZ 0x0057b0ef                      ; 0057b0e9
        ;   XREF to: 0057b0ef (CONDITIONAL_JUMP)  ; LAB_0057b0ef
    TEST ESI,ESI                        ; 0057b0eb
    JNZ 0x0057b104                      ; 0057b0ed
        ;   XREF to: 0057b104 (CONDITIONAL_JUMP)  ; LAB_0057b104
    MOV EAX,ESI                         ; 0057b0ef
        ;   Label: LAB_0057b0ef
    ADD ESP,0x30                        ; 0057b0f1
    POP EBP                             ; 0057b0f4
    POP EDI                             ; 0057b0f5
    POP ESI                             ; 0057b0f6
    POP EBX                             ; 0057b0f7
    RET                                 ; 0057b0f8
    PUSH EBX                            ; 0057b0f9
        ;   Label: LAB_0057b0f9
    CALL FUN_004087d0                   ; 0057b0fa
        ;   XREF to: 004087d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087d0()
    ADD ESP,0x4                         ; 0057b0ff
    JMP 0x0057b0ef                      ; 0057b102
        ;   XREF to: 0057b0ef (UNCONDITIONAL_JUMP)  ; LAB_0057b0ef
    MOV dword ptr [EBX + 0x584],0x1     ; 0057b104
        ;   Label: LAB_0057b104
    MOV EAX,ESI                         ; 0057b10e
    ADD ESP,0x30                        ; 0057b110
    POP EBP                             ; 0057b113
    POP EDI                             ; 0057b114
    POP ESI                             ; 0057b115
    POP EBX                             ; 0057b116
    RET                                 ; 0057b117

