; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00477060(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_dog2_wav_005da743
;   undefined4 DAT_006236b8
;
; Called Functions:
;   FUN_004a0f00
;   FUN_00524770
;   FUN_005247c0
;   FUN_0057d9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477060
        ;   Label: FUN_00477060
    PUSH ESI                            ; 00477061
    MOV EBX,dword ptr [ESP + 0xc]       ; 00477062
    MOV EAX,dword ptr [ESP + 0x10]      ; 00477066
    FLD float ptr [EAX + 0x4]           ; 0047706a
    FSUBR float ptr [EBX + 0x2538]      ; 0047706d
    LEA ESI,[EBX + 0x158]               ; 00477073
    FST float ptr [EBX + 0x2538]        ; 00477079
    FLDZ                                ; 0047707f
    FCOMPP                              ; 00477081
    FNSTSW AX                           ; 00477083
    SAHF                                ; 00477085
    JNC 0x004770c0                      ; 00477086
        ;   XREF to: 004770c0 (CONDITIONAL_JUMP)  ; LAB_004770c0
    PUSH 0x1                            ; 00477088
    PUSH 0x5                            ; 0047708a
    PUSH ESI                            ; 0047708c
        ;   Label: LAB_0047708c
    CALL FUN_005247c0                   ; 0047708d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00477092
    MOV EDX,dword ptr [EBX + 0xc270]    ; 00477095
        ;   Label: LAB_00477095
    PUSH EDX                            ; 0047709b
    MOV ECX,dword ptr [0x006236b8]      ; 0047709c | DAT_006236b8
    PUSH ECX                            ; 004770a2
    CALL FUN_0057d9c0                   ; 004770a3
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d9c0()
    ADD ESP,0x8                         ; 004770a8
    TEST EAX,EAX                        ; 004770ab
    JZ 0x004770e6                       ; 004770ad
        ;   XREF to: 004770e6 (CONDITIONAL_JUMP)  ; LAB_004770e6
    MOV ESI,dword ptr [ESP + 0x10]      ; 004770af
    PUSH ESI                            ; 004770b3
    PUSH EBX                            ; 004770b4
    CALL FUN_004a0f00                   ; 004770b5
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 004770ba
    POP ESI                             ; 004770bd
    POP EBX                             ; 004770be
    RET                                 ; 004770bf
    PUSH ESI                            ; 004770c0
        ;   Label: LAB_004770c0
    MOV dword ptr [EBX + 0x2538],0x0    ; 004770c1
    CALL FUN_00524770                   ; 004770cb
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004770d0
    ADD ESP,0x4                         ; 004770d3
    CMP EAX,0x7                         ; 004770d6
    JZ 0x00477095                       ; 004770d9
        ;   XREF to: 00477095 (CONDITIONAL_JUMP)  ; LAB_00477095
    CMP EAX,0x6                         ; 004770db
    JZ 0x00477095                       ; 004770de
        ;   XREF to: 00477095 (CONDITIONAL_JUMP)  ; LAB_00477095
    PUSH 0x1                            ; 004770e0
    PUSH 0x6                            ; 004770e2
    JMP 0x0047708c                      ; 004770e4
        ;   XREF to: 0047708c (UNCONDITIONAL_JUMP)  ; LAB_0047708c
    PUSH 0x5da743                       ; 004770e6 | = "dog2.wav"
        ;   Label: LAB_004770e6
    MOV EAX,dword ptr [EBX + 0x154]     ; 004770eb
    PUSH EBX                            ; 004770f1
    CALL dword ptr [EAX + 0x2c]         ; 004770f2
    ADD ESP,0x8                         ; 004770f5
    MOV dword ptr [EBX + 0xc270],EAX    ; 004770f8
    MOV ESI,dword ptr [ESP + 0x10]      ; 004770fe
    PUSH ESI                            ; 00477102
    PUSH EBX                            ; 00477103
    CALL FUN_004a0f00                   ; 00477104
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0f00()
    ADD ESP,0x8                         ; 00477109
    POP ESI                             ; 0047710c
    POP EBX                             ; 0047710d
    RET                                 ; 0047710e

