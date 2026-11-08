; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00419130(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_s_going_into_background_005d4367
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01e82168
;   undefined4 DAT_01fdce00
;
; Called Functions:
;   FUN_004087b0
;   FUN_00418e50
;   FUN_004207b0
;   FUN_00445430
;   FUN_00483e60
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419130
        ;   Label: FUN_00419130
    PUSH EBP                            ; 00419131
    SUB ESP,0x30                        ; 00419132
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00419135
    CMP dword ptr [EBX + 0xcc8],0x0     ; 00419139
    JNZ 0x00419223                      ; 00419140
        ;   XREF to: 00419223 (CONDITIONAL_JUMP)  ; LAB_00419223
    CMP dword ptr [EBX + 0x158],0x0     ; 00419146
    JNZ 0x00419179                      ; 0041914d
        ;   XREF to: 00419179 (CONDITIONAL_JUMP)  ; LAB_00419179
    CMP dword ptr [ESP + 0x40],0x0      ; 0041914f
    JZ 0x0041916c                       ; 00419154
        ;   XREF to: 0041916c (CONDITIONAL_JUMP)  ; LAB_0041916c
    CMP dword ptr [EBX + 0xf2c],0x0     ; 00419156
    JNZ 0x0041916c                      ; 0041915d
        ;   XREF to: 0041916c (CONDITIONAL_JUMP)  ; LAB_0041916c
    CMP dword ptr [EBX + 0xf24],0x0     ; 0041915f
    JZ 0x00419229                       ; 00419166
        ;   XREF to: 00419229 (CONDITIONAL_JUMP)  ; LAB_00419229
    CMP dword ptr [EBX + 0x158],0x0     ; 0041916c
        ;   Label: LAB_0041916c
    JZ 0x00419223                       ; 00419173
        ;   XREF to: 00419223 (CONDITIONAL_JUMP)  ; LAB_00419223
    CMP dword ptr [EBX + 0x158],0x1     ; 00419179
        ;   Label: LAB_00419179
    JNZ 0x0041918f                      ; 00419180
        ;   XREF to: 0041918f (CONDITIONAL_JUMP)  ; LAB_0041918f
    CMP dword ptr [EBX + 0xf24],0x0     ; 00419182
    JNZ 0x00419223                      ; 00419189
        ;   XREF to: 00419223 (CONDITIONAL_JUMP)  ; LAB_00419223
    PUSH EDI                            ; 0041918f
        ;   Label: LAB_0041918f
    PUSH ESI                            ; 00419190
    PUSH EBX                            ; 00419191
    MOV dword ptr [EBX + 0x158],0x2     ; 00419192
    CALL FUN_004087b0                   ; 0041919c
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 004191a1
    MOV EAX,[0x00622c18]                ; 004191a4 | DAT_00622c18
    MOV ESI,dword ptr [EBX + 0xcb0]     ; 004191a9
    PUSH 0x0                            ; 004191af
    MOV dword ptr [EAX + 0x15ac98],ESI  ; 004191b1 | DAT_01fdce00
    PUSH EBX                            ; 004191b7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004191b8
    LEA ESI,[ESP + 0x28]                ; 004191be
    LEA EDI,[ESP + 0x10]                ; 004191c2
    CALL dword ptr [EAX + 0x1c]         ; 004191c6
    MOV ECX,0x6                         ; 004191c9
    ADD ESP,0x4                         ; 004191ce
    LEA EAX,[ESP + 0xc]                 ; 004191d1
    LEA ESI,[ESP + 0x24]                ; 004191d5
    PUSH EAX                            ; 004191d9
    MOVSD.REP ES:EDI,ESI                ; 004191da
    CALL FUN_004207b0                   ; 004191dc
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004191e1
    MOV ESI,EAX                         ; 004191e4
    TEST EAX,EAX                        ; 004191e6
    JZ 0x004191fe                       ; 004191e8
        ;   XREF to: 004191fe (CONDITIONAL_JUMP)  ; LAB_004191fe
    CMP dword ptr [EBX + 0xcb4],0x0     ; 004191ea
    JNZ 0x00419261                      ; 004191f1
        ;   XREF to: 00419261 (CONDITIONAL_JUMP)  ; LAB_00419261
    PUSH -0x1                           ; 004191f3
        ;   Label: LAB_004191f3
    PUSH EBX                            ; 004191f5
    CALL FUN_00418e50                   ; 004191f6
        ;   XREF to: 00418e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00418e50()
    ADD ESP,0x8                         ; 004191fb
    MOV EAX,[0x00612560]                ; 004191fe | DAT_00612560
        ;   Label: LAB_004191fe
    PUSH EAX                            ; 00419203 | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 00419204
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    MOV EAX,[0x00622c18]                ; 00419209 | DAT_00622c18 | DAT_01e82168
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 0041920e | DAT_01fdce00
    ADD ESP,0x4                         ; 00419218
    MOV dword ptr [EBX + 0xf30],ESI     ; 0041921b
    POP ESI                             ; 00419221
    POP EDI                             ; 00419222
    ADD ESP,0x30                        ; 00419223
        ;   Label: LAB_00419223
    POP EBP                             ; 00419226
    POP EBX                             ; 00419227
    RET                                 ; 00419228
    PUSH EBX                            ; 00419229
        ;   Label: LAB_00419229
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041922a
    CALL dword ptr [EAX + 0x74]         ; 00419230
    ADD ESP,0x4                         ; 00419233
    TEST EAX,EAX                        ; 00419236
    JNZ 0x0041916c                      ; 00419238
        ;   XREF to: 0041916c (CONDITIONAL_JUMP)  ; LAB_0041916c
    PUSH EBX                            ; 0041923e
    PUSH 0x5d4367                       ; 0041923f | = "%s going into background\n"
    MOV EAX,[0x00611100]                ; 00419244 | PTR_DAT_00611100
    PUSH EAX                            ; 00419249 | DAT_007db5f0
    MOV dword ptr [EBX + 0x158],0x1     ; 0041924a
    CALL FUN_00445430                   ; 00419254
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 00419259
    JMP 0x0041916c                      ; 0041925c
        ;   XREF to: 0041916c (UNCONDITIONAL_JUMP)  ; LAB_0041916c
    MOV EBP,dword ptr [0x00612560]      ; 00419261 | DAT_00612560
        ;   Label: LAB_00419261
    PUSH EBP                            ; 00419267 | DAT_01bc120c
    CALL FUN_00483e60                   ; 00419268
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 0041926d
    TEST EAX,EAX                        ; 00419270
    JNZ 0x004191f3                      ; 00419272
        ;   XREF to: 004191f3 (CONDITIONAL_JUMP)  ; LAB_004191f3
    JMP 0x004191fe                      ; 00419278
        ;   XREF to: 004191fe (UNCONDITIONAL_JUMP)  ; LAB_004191fe

