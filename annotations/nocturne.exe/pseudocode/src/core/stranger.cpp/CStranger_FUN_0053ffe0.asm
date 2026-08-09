; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_FUN_0053ffe0(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00535900 at 0053649d
;
; Referenced Globals:
;   void* switchdataD_0053ffb4 = 005400d4
;   double DOUBLE_00595eb7 = 0.990000000000000
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ffe0
        ;   Label: core_stranger.cpp_CStranger_FUN_0053ffe0
    PUSH ESI                            ; 0053ffe1
    PUSH EDI                            ; 0053ffe2
    PUSH EBP                            ; 0053ffe3
    SUB ESP,0x4                         ; 0053ffe4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0053ffe7
    MOV EDX,dword ptr [EBX + 0xbca0]    ; 0053ffeb
    MOV dword ptr [EBX + 0x1fa9c],0x0   ; 0053fff1
    TEST EDX,EDX                        ; 0053fffb
    JZ 0x00540137                       ; 0053fffd
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    CMP dword ptr [EBX + 0x2590],0x0    ; 00540003
    JNZ 0x00540137                      ; 0054000a
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    CMP dword ptr [EBX + 0x1faa0],0x0   ; 00540010
    JNZ 0x00540137                      ; 00540017
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 0054001d
    JZ 0x00540137                       ; 00540024
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 0054002a
    TEST EAX,EAX                        ; 00540030
    JNZ 0x0054013f                      ; 00540032
        ;   XREF to: 0054013f (CONDITIONAL_JUMP)  ; LAB_0054013f
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 00540038
    TEST EAX,EAX                        ; 0054003e
        ;   Label: LAB_0054003e
    JNZ 0x00540151                      ; 00540040
        ;   XREF to: 00540151 (CONDITIONAL_JUMP)  ; LAB_00540151
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 00540046
        ;   Label: LAB_00540046
    TEST EAX,EAX                        ; 0054004c
    JZ 0x00540137                       ; 0054004e
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    MOV EDX,dword ptr [EAX + 0x2d8]     ; 00540054
    CMP EDX,0x3                         ; 0054005a
    JZ 0x00540137                       ; 0054005d
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    CMP dword ptr [EBX + 0x1f59c],0x0   ; 00540063
    JNZ 0x005400b0                      ; 0054006a
        ;   XREF to: 005400b0 (CONDITIONAL_JUMP)  ; LAB_005400b0
    TEST EDX,EDX                        ; 0054006c
    JNZ 0x005400b0                      ; 0054006e
        ;   XREF to: 005400b0 (CONDITIONAL_JUMP)  ; LAB_005400b0
    LEA ECX,[EBX + 0x1fa50]             ; 00540070
    MOV EDI,dword ptr [EBX + 0x1fa98]   ; 00540076
    LEA EAX,[EBX + 0x1fa70]             ; 0054007c
    TEST EDI,EDI                        ; 00540082
    JZ 0x005401ee                       ; 00540084
        ;   XREF to: 005401ee (CONDITIONAL_JUMP)  ; LAB_005401ee
    MOV EDX,EAX                         ; 0054008a
    MOV EAX,ECX                         ; 0054008c
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0054008e
        ;   Label: LAB_0054008e
    CMP EBP,0x2                         ; 00540091
    JNZ 0x005400b0                      ; 00540094
        ;   XREF to: 005400b0 (CONDITIONAL_JUMP)  ; LAB_005400b0
    CMP EBP,dword ptr [EDX + 0x1c]      ; 00540096
    JZ 0x005400b0                       ; 00540099
        ;   XREF to: 005400b0 (CONDITIONAL_JUMP)  ; LAB_005400b0
    CMP dword ptr [EBX + 0x1fa98],0x0   ; 0054009b
    SETZ AL                             ; 005400a2
    AND EAX,0xff                        ; 005400a5
    MOV dword ptr [EBX + 0x1fa98],EAX   ; 005400aa
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 005400b0
        ;   Label: LAB_005400b0
    TEST EAX,EAX                        ; 005400b6
    JZ 0x0054021d                       ; 005400b8
        ;   XREF to: 0054021d (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 005400be
    CMP EAX,0x8                         ; 005400c4
    JA 0x0054021d                       ; 005400c7
        ;   XREF to: 0054021d (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x53ffb4]  ; 005400cd | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 005400d4
        ;   Label: caseD_0
    PUSH EAX                            ; 005400d9
        ;   Label: LAB_005400d9
    PUSH EBX                            ; 005400da
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 005400db
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 005400e0
    FLD float ptr [ESP + 0x8]           ; 005400e4
    ADD ESP,0x8                         ; 005400e8
    FCOMP double ptr [0x00595eb7]       ; 005400eb | DOUBLE_00595eb7
    FNSTSW AX                           ; 005400f1
    SAHF                                ; 005400f3
    JC 0x00540137                       ; 005400f4
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    MOV ECX,dword ptr [EBX + 0x1fa98]   ; 005400f6
    LEA EDX,[EBX + 0x1fa50]             ; 005400fc
    TEST ECX,ECX                        ; 00540102
    JZ 0x0054011b                       ; 00540104
        ;   XREF to: 0054011b (CONDITIONAL_JUMP)  ; LAB_0054011b
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 00540106
    CMP dword ptr [EAX + 0x2d8],0x0     ; 0054010c
    JNZ 0x0054011b                      ; 00540113
        ;   XREF to: 0054011b (CONDITIONAL_JUMP)  ; LAB_0054011b
    LEA EDX,[EBX + 0x1fa70]             ; 00540115
    FLD float ptr [EDX + 0x14]          ; 0054011b
        ;   Label: LAB_0054011b
    FLD1                                ; 0054011e
    FCOMPP                              ; 00540120
    FNSTSW AX                           ; 00540122
    SAHF                                ; 00540124
    JA 0x00540137                       ; 00540125
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    FLD float ptr [EDX + 0x10]          ; 00540127
    FLDZ                                ; 0054012a
    FCOMPP                              ; 0054012c
    FNSTSW AX                           ; 0054012e
    SAHF                                ; 00540130
    JNC 0x00540224                      ; 00540131
        ;   XREF to: 00540224 (CONDITIONAL_JUMP)  ; LAB_00540224
    ADD ESP,0x4                         ; 00540137
        ;   Label: LAB_00540137
    POP EBP                             ; 0054013a
    POP EDI                             ; 0054013b
    POP ESI                             ; 0054013c
    POP EBX                             ; 0054013d
    RET                                 ; 0054013e
    CMP dword ptr [EAX + 0x2d8],0x7     ; 0054013f
        ;   Label: LAB_0054013f
    JZ 0x0054003e                       ; 00540146
        ;   XREF to: 0054003e (CONDITIONAL_JUMP)  ; LAB_0054003e
    JMP 0x00540046                      ; 0054014c
        ;   XREF to: 00540046 (UNCONDITIONAL_JUMP)  ; LAB_00540046
    PUSH EAX                            ; 00540151
        ;   Label: LAB_00540151
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00540152
    CALL dword ptr [EDX + 0x6c]         ; 00540158
    ADD ESP,0x4                         ; 0054015b
    MOV ESI,EAX                         ; 0054015e
    TEST EAX,EAX                        ; 00540160
    JZ 0x00540046                       ; 00540162
        ;   XREF to: 00540046 (CONDITIONAL_JUMP)  ; LAB_00540046
    XOR ECX,ECX                         ; 00540168
    XOR EDI,EDI                         ; 0054016a
    MOV EBP,dword ptr [EBX + 0x1faa4]   ; 0054016c
        ;   Label: LAB_0054016c
    INC EBP                             ; 00540172
    MOV dword ptr [EBX + 0x1faa4],EBP   ; 00540173
    CMP EDI,EBP                         ; 00540179
    JLE 0x005401a5                      ; 0054017b
        ;   XREF to: 005401a5 (CONDITIONAL_JUMP)  ; LAB_005401a5
    MOV dword ptr [EBX + 0x1faa4],EDI   ; 0054017d
        ;   Label: LAB_0054017d
    MOV EDX,dword ptr [EBX + 0x1faa4]   ; 00540183
        ;   Label: LAB_00540183
    ADD EDX,0xc                         ; 00540189
    MOV EAX,EDI                         ; 0054018c
    CMP EDX,0xc                         ; 0054018e
    JNC 0x005401ba                      ; 00540191
        ;   XREF to: 005401ba (CONDITIONAL_JUMP)  ; LAB_005401ba
    TEST EAX,ESI                        ; 00540193
        ;   Label: LAB_00540193
    JNZ 0x005401c3                      ; 00540195
        ;   XREF to: 005401c3 (CONDITIONAL_JUMP)  ; LAB_005401c3
    INC ECX                             ; 00540197
    CMP ECX,0x14                        ; 00540198
    JL 0x0054016c                       ; 0054019b
        ;   XREF to: 0054016c (CONDITIONAL_JUMP)  ; LAB_0054016c
    ADD ESP,0x4                         ; 0054019d
    POP EBP                             ; 005401a0
    POP EDI                             ; 005401a1
    POP ESI                             ; 005401a2
    POP EBX                             ; 005401a3
    RET                                 ; 005401a4
    CMP EBP,0x2                         ; 005401a5
        ;   Label: LAB_005401a5
    JL 0x00540183                       ; 005401a8
        ;   XREF to: 00540183 (CONDITIONAL_JUMP)  ; LAB_00540183
    JMP 0x0054017d                      ; 005401aa
        ;   XREF to: 0054017d (UNCONDITIONAL_JUMP)  ; LAB_0054017d
    MOV EAX,0x1                         ; 005401ac
        ;   Label: LAB_005401ac
    JMP 0x00540193                      ; 005401b1
        ;   XREF to: 00540193 (UNCONDITIONAL_JUMP)  ; LAB_00540193
    MOV EAX,0x2                         ; 005401b3
        ;   Label: LAB_005401b3
    JMP 0x00540193                      ; 005401b8
        ;   XREF to: 00540193 (UNCONDITIONAL_JUMP)  ; LAB_00540193
    JBE 0x005401ac                      ; 005401ba
        ;   XREF to: 005401ac (CONDITIONAL_JUMP)  ; LAB_005401ac
        ;   Label: LAB_005401ba
    CMP EDX,0xd                         ; 005401bc
    JZ 0x005401b3                       ; 005401bf
        ;   XREF to: 005401b3 (CONDITIONAL_JUMP)  ; LAB_005401b3
    JMP 0x00540193                      ; 005401c1
        ;   XREF to: 00540193 (UNCONDITIONAL_JUMP)  ; LAB_00540193
    MOV dword ptr [EBX + 0x2a88],0x0    ; 005401c3
        ;   Label: LAB_005401c3
    MOV EAX,dword ptr [EBX + 0x1faa4]   ; 005401cd
    MOV dword ptr [EBX + 0x1faa0],0x7   ; 005401d3
    ADD EAX,0xc                         ; 005401dd
    MOV dword ptr [EBX + 0x2a84],EAX    ; 005401e0
    ADD ESP,0x4                         ; 005401e6
    POP EBP                             ; 005401e9
    POP EDI                             ; 005401ea
    POP ESI                             ; 005401eb
    POP EBX                             ; 005401ec
    RET                                 ; 005401ed
    MOV EDX,ECX                         ; 005401ee
        ;   Label: LAB_005401ee
    JMP 0x0054008e                      ; 005401f0
        ;   XREF to: 0054008e (UNCONDITIONAL_JUMP)  ; LAB_0054008e
    MOV EAX,0x4                         ; 005401f5
        ;   Label: caseD_1
    JMP 0x005400d9                      ; 005401fa
        ;   XREF to: 005400d9 (UNCONDITIONAL_JUMP)  ; LAB_005400d9
    MOV EAX,0x7                         ; 005401ff
        ;   Label: caseD_4
    JMP 0x005400d9                      ; 00540204
        ;   XREF to: 005400d9 (UNCONDITIONAL_JUMP)  ; LAB_005400d9
    MOV EAX,0x5                         ; 00540209
        ;   Label: caseD_2
    JMP 0x005400d9                      ; 0054020e
        ;   XREF to: 005400d9 (UNCONDITIONAL_JUMP)  ; LAB_005400d9
    MOV EAX,0x8                         ; 00540213
        ;   Label: caseD_7
    JMP 0x005400d9                      ; 00540218
        ;   XREF to: 005400d9 (UNCONDITIONAL_JUMP)  ; LAB_005400d9
    XOR EAX,EAX                         ; 0054021d
        ;   Label: caseD_3
    JMP 0x005400d9                      ; 0054021f
        ;   XREF to: 005400d9 (UNCONDITIONAL_JUMP)  ; LAB_005400d9
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 00540224
        ;   Label: LAB_00540224
    PUSH EAX                            ; 0054022a
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0054022b
    CALL dword ptr [EDX + 0xe0]         ; 00540231
    ADD ESP,0x4                         ; 00540237
    TEST EAX,EAX                        ; 0054023a
    JZ 0x00540137                       ; 0054023c
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 00540242
    CMP dword ptr [EAX + 0x2d8],0x0     ; 00540248
    JZ 0x005402bb                       ; 0054024f
        ;   XREF to: 005402bb (CONDITIONAL_JUMP)  ; LAB_005402bb
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 00540251
        ;   Label: LAB_00540251
    MOV dword ptr [EBX + 0x1fa9c],0x0   ; 00540257
    PUSH EAX                            ; 00540261
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00540262
    CALL dword ptr [EDX + 0xdc]         ; 00540268
    ADD ESP,0x4                         ; 0054026e
    TEST EAX,EAX                        ; 00540271
    JZ 0x0054027f                       ; 00540273
        ;   XREF to: 0054027f (CONDITIONAL_JUMP)  ; LAB_0054027f
    MOV dword ptr [EBX + 0x1fa9c],0x1   ; 00540275
    PUSH 0x0                            ; 0054027f
        ;   Label: LAB_0054027f
    PUSH EBX                            ; 00540281
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660 ; 00540282
        ;   XREF to: 0053a660 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger * this_ptr, int hand_index)
    MOV EAX,dword ptr [EBX + 0x1fa94]   ; 00540287
    MOV ECX,dword ptr [EAX + 0x2d4]     ; 0054028d
    ADD ESP,0x8                         ; 00540293
    CMP ECX,0x2                         ; 00540296
    JNZ 0x00540137                      ; 00540299
        ;   XREF to: 00540137 (CONDITIONAL_JUMP)  ; LAB_00540137
    MOV dword ptr [EBX + 0x2a88],0x0    ; 0054029f
    MOV dword ptr [EBX + 0x2a84],0x8    ; 005402a9
    ADD ESP,0x4                         ; 005402b3
    POP EBP                             ; 005402b6
    POP EDI                             ; 005402b7
    POP ESI                             ; 005402b8
    POP EBX                             ; 005402b9
    RET                                 ; 005402ba
    MOV EBP,dword ptr [EBX + 0x1fa98]   ; 005402bb
        ;   Label: LAB_005402bb
    PUSH EBP                            ; 005402c1
    PUSH EBX                            ; 005402c2
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660 ; 005402c3
        ;   XREF to: 0053a660 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger * this_ptr, int hand_index)
    MOV EDX,dword ptr [EBX + 0x1fa98]   ; 005402c8
    ADD ESP,0x8                         ; 005402ce
    TEST EDX,EDX                        ; 005402d1
    SETZ AL                             ; 005402d3
    AND EAX,0xff                        ; 005402d6
    MOV dword ptr [EBX + 0x1fa98],EAX   ; 005402db
    JMP 0x00540251                      ; 005402e1
        ;   XREF to: 00540251 (UNCONDITIONAL_JUMP)  ; LAB_00540251

