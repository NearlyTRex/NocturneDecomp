; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041d0d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d4840+1
;   TerminatedCString s_modelName_005d4847
;   TerminatedCString s_guardDistance_005d4851
;   TerminatedCString s_motion_state_005d485f
;   TerminatedCString s_deathEvent_005d486c
;   TerminatedCString s_recombineTime_005d4877
;   TerminatedCString s_blownUp_005d4885
;   TerminatedCString s_param_005d488d
;   TerminatedCString s_boxCount_005d4893
;   TerminatedCString s_partStatus_005d489c
;   TerminatedCString s_boxListPos_005d48a7
;   TerminatedCString s_boxListOrient_005d48b2
;   TerminatedCString s_boxListDestOrient_005d48c0
;   TerminatedCString s_boxListStartOrient_005d48d2
;   TerminatedCString s_sourcePos_005d48e5
;   ... and 3 more
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b3a0
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040b6f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_0040b960
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d0d0
        ;   Label: FUN_0041d0d0
    PUSH ESI                            ; 0041d0d1
    PUSH EDI                            ; 0041d0d2
    PUSH EBP                            ; 0041d0d3
    SUB ESP,0xc                         ; 0041d0d4
    MOV EDX,dword ptr [ESP + 0x20]      ; 0041d0d7
    PUSH EDX                            ; 0041d0db
    CALL FUN_004a0520                   ; 0041d0dc
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 0041d0e1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d0e4
    PUSH 0x5d4841                       ; 0041d0e8 | s_speed_005d4840+1
    ADD EAX,0xc1d0                      ; 0041d0ed
    PUSH EAX                            ; 0041d0f2
    CALL FUN_0040b5f0                   ; 0041d0f3
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0041d0f8
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d0fb
    PUSH 0x5d4847                       ; 0041d0ff | = "modelName"
    ADD EAX,0x158                       ; 0041d104
    PUSH EAX                            ; 0041d109
    CALL FUN_0040b7f0                   ; 0041d10a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    MOV ECX,dword ptr [0x00610b14]      ; 0041d10f | DAT_00610b14
    ADD ESP,0x8                         ; 0041d115
    CMP ECX,0x4                         ; 0041d118
    JL 0x0041d2d8                       ; 0041d11b
        ;   XREF to: 0041d2d8 (CONDITIONAL_JUMP)  ; LAB_0041d2d8
    MOV EBX,dword ptr [ESP + 0x20]      ; 0041d121
        ;   Label: LAB_0041d121
    PUSH 0x5d485f                       ; 0041d125 | = "motion state"
    ADD EBX,0x158                       ; 0041d12a
    PUSH EBX                            ; 0041d130
    CALL FUN_0040b870                   ; 0041d131
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    MOV ESI,dword ptr [0x00610b14]      ; 0041d136 | DAT_00610b14
    ADD ESP,0x8                         ; 0041d13c
    CMP ESI,0x2                         ; 0041d13f
    JL 0x0041d2c0                       ; 0041d142
        ;   XREF to: 0041d2c0 (CONDITIONAL_JUMP)  ; LAB_0041d2c0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d148
    PUSH 0x5d486c                       ; 0041d14c | = "deathEvent"
    ADD EAX,0xc27c                      ; 0041d151
    PUSH EAX                            ; 0041d156
    CALL FUN_0040b440                   ; 0041d157
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 0041d15c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d15f
    PUSH 0x5d4877                       ; 0041d163 | = "recombineTime"
    ADD EAX,0xc2e0                      ; 0041d168
    PUSH EAX                            ; 0041d16d
    CALL FUN_0040b5f0                   ; 0041d16e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0041d173
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d176
    PUSH 0x5d4885                       ; 0041d17a | = "blownUp"
    ADD EAX,0xc888                      ; 0041d17f
    PUSH EAX                            ; 0041d184
    CALL FUN_0040b670                   ; 0041d185
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0041d18a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d18d
    PUSH 0x5d488d                       ; 0041d191 | = "param"
    ADD EAX,0xc88c                      ; 0041d196
    PUSH EAX                            ; 0041d19b
    CALL FUN_0040b5f0                   ; 0041d19c
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0041d1a1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d1a4
    PUSH 0x5d4893                       ; 0041d1a8 | = "boxCount"
    ADD EAX,0xc2e4                      ; 0041d1ad
    PUSH EAX                            ; 0041d1b2
    CALL FUN_0040b670                   ; 0041d1b3
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0041d1b8
    PUSH 0x5d489c                       ; 0041d1bb | = "partStatus"
    PUSH EBX                            ; 0041d1c0
    CALL FUN_0040b960                   ; 0041d1c1
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041d1c6
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d1c9
    MOV EDI,dword ptr [EAX + 0xc2e4]    ; 0041d1cd
    XOR EBX,EBX                         ; 0041d1d3
    TEST EDI,EDI                        ; 0041d1d5
    JLE 0x0041d2c0                      ; 0041d1d7
        ;   XREF to: 0041d2c0 (CONDITIONAL_JUMP)  ; LAB_0041d2c0
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041d1dd
    ADD EAX,0xc2e8                      ; 0041d1e1
    MOV EDI,dword ptr [ESP + 0x20]      ; 0041d1e6
    MOV dword ptr [ESP],EAX             ; 0041d1ea
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d1ed
    MOV EBP,dword ptr [ESP + 0x20]      ; 0041d1f1
    ADD EAX,0xc32c                      ; 0041d1f5
    ADD ESI,0xc320                      ; 0041d1fa
    MOV dword ptr [ESP + 0x8],EAX       ; 0041d200
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d204
    ADD EDI,0xc300                      ; 0041d208
    ADD EAX,0xc310                      ; 0041d20e
    ADD EBP,0xc2f4                      ; 0041d213
    MOV dword ptr [ESP + 0x4],EAX       ; 0041d219
    IMUL EAX,EBX,0x48                   ; 0041d21d
        ;   Label: LAB_0041d21d
    MOV EDX,dword ptr [ESP]             ; 0041d220
    PUSH 0x5d48a7                       ; 0041d223 | = "boxListPos"
    ADD EAX,EDX                         ; 0041d228
    PUSH EAX                            ; 0041d22a
    CALL FUN_0040b1c0                   ; 0041d22b
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 0041d230
    PUSH 0x5d48b2                       ; 0041d233 | = "boxListOrient"
    PUSH EBP                            ; 0041d238
    CALL FUN_0040b1c0                   ; 0041d239
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 0041d23e
    PUSH 0x5d48c0                       ; 0041d241 | = "boxListDestOrient"
    PUSH EDI                            ; 0041d246
    CALL FUN_0040b3a0                   ; 0041d247
        ;   XREF to: 0040b3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b3a0()
    ADD ESP,0x8                         ; 0041d24c
    PUSH 0x5d48d2                       ; 0041d24f | = "boxListStartOrient"
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041d254
    PUSH ECX                            ; 0041d258
    CALL FUN_0040b3a0                   ; 0041d259
        ;   XREF to: 0040b3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b3a0()
    ADD ESP,0x8                         ; 0041d25e
    PUSH 0x5d48e5                       ; 0041d261 | = "sourcePos"
    PUSH ESI                            ; 0041d266
    CALL FUN_0040b1c0                   ; 0041d267
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 0041d26c
    PUSH 0x5d48ef                       ; 0041d26f | = "boxListPart"
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041d274
    INC EBX                             ; 0041d278
    PUSH EAX                            ; 0041d279
    ADD EBP,0x48                        ; 0041d27a
    ADD EDI,0x48                        ; 0041d27d
    CALL FUN_0040b6f0                   ; 0041d280
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b6f0()
    ADD ESP,0x8                         ; 0041d285
    ADD ESI,0x48                        ; 0041d288
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041d28b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0041d28f
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d293
    ADD EDX,0x48                        ; 0041d297
    ADD ECX,0x48                        ; 0041d29a
    MOV dword ptr [ESP + 0x8],EDX       ; 0041d29d
    MOV EDX,dword ptr [EAX + 0xc2e4]    ; 0041d2a1
    MOV dword ptr [ESP + 0x4],ECX       ; 0041d2a7
    CMP EBX,EDX                         ; 0041d2ab
    JL 0x0041d21d                       ; 0041d2ad
        ;   XREF to: 0041d21d (CONDITIONAL_JUMP)  ; LAB_0041d21d
    LEA EAX,[EAX]                       ; 0041d2b3
    LEA EDX,[EDX]                       ; 0041d2b9
    NOP                                 ; 0041d2bf
    MOV ECX,dword ptr [0x00610b14]      ; 0041d2c0 | DAT_00610b14
        ;   Label: LAB_0041d2c0
    CMP ECX,0x3                         ; 0041d2c6
    JL 0x0041d2d0                       ; 0041d2c9
        ;   XREF to: 0041d2d0 (CONDITIONAL_JUMP)  ; LAB_0041d2d0
    CMP ECX,0x5                         ; 0041d2cb
    JL 0x0041d2f4                       ; 0041d2ce
        ;   XREF to: 0041d2f4 (CONDITIONAL_JUMP)  ; LAB_0041d2f4
    ADD ESP,0xc                         ; 0041d2d0
        ;   Label: LAB_0041d2d0
    POP EBP                             ; 0041d2d3
    POP EDI                             ; 0041d2d4
    POP ESI                             ; 0041d2d5
    POP EBX                             ; 0041d2d6
    RET                                 ; 0041d2d7
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d2d8
        ;   Label: LAB_0041d2d8
    PUSH 0x5d4851                       ; 0041d2dc | = "guardDistance"
    ADD EAX,0xc1e0                      ; 0041d2e1
    PUSH EAX                            ; 0041d2e6
    CALL FUN_0040b5f0                   ; 0041d2e7
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0041d2ec
    JMP 0x0041d121                      ; 0041d2ef
        ;   XREF to: 0041d121 (UNCONDITIONAL_JUMP)  ; LAB_0041d121
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d2f4
        ;   Label: LAB_0041d2f4
    PUSH 0x5d48fb                       ; 0041d2f8 | = "victimHeight"
    ADD EAX,0xc25c                      ; 0041d2fd
    PUSH EAX                            ; 0041d302
    CALL FUN_0040b5f0                   ; 0041d303
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0041d308
    ADD ESP,0xc                         ; 0041d30b
    POP EBP                             ; 0041d30e
    POP EDI                             ; 0041d30f
    POP ESI                             ; 0041d310
    POP EBX                             ; 0041d311
    RET                                 ; 0041d312

