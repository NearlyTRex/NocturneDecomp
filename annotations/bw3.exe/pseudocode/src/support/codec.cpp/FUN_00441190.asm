; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00441190(int param_1,int *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bda10 at 004bddc5
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_addNode_FUN_00440d70
;   support_codec.cpp_CLZWDictionary_findCode_FUN_00440d30
;   support_codec.cpp_FUN_00440ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441190
        ;   Label: support_codec.cpp_FUN_00441190
    PUSH ESI                            ; 00441191
    PUSH EDI                            ; 00441192
    PUSH EBP                            ; 00441193
    SUB ESP,0x4                         ; 00441194
    MOV EBX,dword ptr [ESP + 0x18]      ; 00441197
    LEA ESI,[EBX + 0x4]                 ; 0044119b
    LEA EAX,[EBX + 0x18]                ; 0044119e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004411a1
    MOV dword ptr [ESP],EAX             ; 004411a5
    CMP dword ptr [EBX + 0x34],0x0      ; 004411a8
        ;   Label: LAB_004411a8
    JGE 0x004411e0                      ; 004411ac
        ;   XREF to: 004411e0 (CONDITIONAL_JUMP)  ; LAB_004411e0
    PUSH EBP                            ; 004411ae
        ;   Label: LAB_004411ae
    MOV EAX,dword ptr [EBP]             ; 004411af
    CALL dword ptr [EAX + 0x4]          ; 004411b2
    ADD ESP,0x4                         ; 004411b5
    TEST EAX,EAX                        ; 004411b8
    JL 0x0044125f                       ; 004411ba
        ;   XREF to: 0044125f (CONDITIONAL_JUMP)  ; LAB_0044125f
    MOV EDX,dword ptr [EBX + 0x30]      ; 004411c0
    MOV EDI,dword ptr [EBX + 0x28]      ; 004411c3
    PUSH EDX                            ; 004411c6
    AND EDI,EAX                         ; 004411c7
    PUSH EDI                            ; 004411c9
    PUSH ESI                            ; 004411ca
    CALL support_codec.cpp_CLZWDictionary_findCode_FUN_00440d30 ; 004411cb
        ;   XREF to: 00440d30 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_findCode_FUN_00440d30(CLZWDictionary * this_ptr, int search_code, int start_index)
    ADD ESP,0xc                         ; 004411d0
    TEST EAX,EAX                        ; 004411d3
    JL 0x0044126e                       ; 004411d5
        ;   XREF to: 0044126e (CONDITIONAL_JUMP)  ; LAB_0044126e
    MOV dword ptr [EBX + 0x30],EAX      ; 004411db
    JMP 0x004411a8                      ; 004411de
        ;   XREF to: 004411a8 (UNCONDITIONAL_JUMP)  ; LAB_004411a8
    MOV ECX,dword ptr [ESP + 0x20]      ; 004411e0
        ;   Label: LAB_004411e0
    PUSH ECX                            ; 004411e4
    MOV EDI,dword ptr [ESP + 0x4]       ; 004411e5
    PUSH EDI                            ; 004411e9
    MOV EAX,dword ptr [EBX + 0x30]      ; 004411ea
    PUSH EAX                            ; 004411ed
    PUSH ESI                            ; 004411ee
    CALL support_codec.cpp_FUN_00440ef0 ; 004411ef
        ;   XREF to: 00440ef0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00440ef0()
    ADD ESP,0x10                        ; 004411f4
    MOV EDI,EAX                         ; 004411f7
    TEST EAX,EAX                        ; 004411f9
    JZ 0x00441207                       ; 004411fb
        ;   XREF to: 00441207 (CONDITIONAL_JUMP)  ; LAB_00441207
    CMP EAX,-0x1                        ; 004411fd
    JZ 0x00441246                       ; 00441200
        ;   XREF to: 00441246 (CONDITIONAL_JUMP)  ; LAB_00441246
    CMP EAX,-0x2                        ; 00441202
    JNZ 0x00441253                      ; 00441205
        ;   XREF to: 00441253 (CONDITIONAL_JUMP)  ; LAB_00441253
    MOV EDX,dword ptr [EBX + 0x38]      ; 00441207
        ;   Label: LAB_00441207
    MOV dword ptr [EBX + 0x34],0xffffffff ; 0044120a
    TEST EDX,EDX                        ; 00441211
    JL 0x00441257                       ; 00441213
        ;   XREF to: 00441257 (CONDITIONAL_JUMP)  ; LAB_00441257
    PUSH EDX                            ; 00441215
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00441216
    PUSH EAX                            ; 00441219
    PUSH ESI                            ; 0044121a
    CALL support_codec.cpp_CLZWDictionary_addNode_FUN_00440d70 ; 0044121b
        ;   XREF to: 00440d70 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_addNode_FUN_00440d70(CLZWDictionary * this_ptr, int code, int parent_index)
    ADD ESP,0xc                         ; 00441220
    TEST EAX,EAX                        ; 00441223
    JZ 0x00441257                       ; 00441225
        ;   XREF to: 00441257 (CONDITIONAL_JUMP)  ; LAB_00441257
    MOV dword ptr [EBX + 0x38],0xffffffff ; 00441227
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0044122e
        ;   Label: LAB_0044122e
    MOV dword ptr [EBX + 0x3c],0xffffffff ; 00441231
    MOV dword ptr [EBX + 0x2c],EAX      ; 00441238
    MOV dword ptr [EBX + 0x30],EAX      ; 0044123b
    TEST EDI,EDI                        ; 0044123e
    JZ 0x004411ae                       ; 00441240
        ;   XREF to: 004411ae (CONDITIONAL_JUMP)  ; LAB_004411ae
    MOV EAX,0x2                         ; 00441246
        ;   Label: LAB_00441246
    ADD ESP,0x4                         ; 0044124b
        ;   Label: LAB_0044124b
    POP EBP                             ; 0044124e
    POP EDI                             ; 0044124f
    POP ESI                             ; 00441250
    POP EBX                             ; 00441251
    RET                                 ; 00441252
    XOR EAX,EAX                         ; 00441253
        ;   Label: LAB_00441253
    JMP 0x0044124b                      ; 00441255
        ;   XREF to: 0044124b (UNCONDITIONAL_JUMP)  ; LAB_0044124b
    MOV EAX,dword ptr [EBX + 0x30]      ; 00441257
        ;   Label: LAB_00441257
    MOV dword ptr [EBX + 0x38],EAX      ; 0044125a
    JMP 0x0044122e                      ; 0044125d
        ;   XREF to: 0044122e (UNCONDITIONAL_JUMP)  ; LAB_0044122e
    CMP EAX,-0x1                        ; 0044125f
        ;   Label: LAB_0044125f
    JZ 0x0044127c                       ; 00441262
        ;   XREF to: 0044127c (CONDITIONAL_JUMP)  ; LAB_0044127c
    XOR EAX,EAX                         ; 00441264
    ADD ESP,0x4                         ; 00441266
    POP EBP                             ; 00441269
    POP EDI                             ; 0044126a
    POP ESI                             ; 0044126b
    POP EBX                             ; 0044126c
    RET                                 ; 0044126d
    MOV EAX,dword ptr [EBX + 0x30]      ; 0044126e
        ;   Label: LAB_0044126e
    MOV dword ptr [EBX + 0x3c],EDI      ; 00441271
    MOV dword ptr [EBX + 0x34],EAX      ; 00441274
    JMP 0x004411a8                      ; 00441277
        ;   XREF to: 004411a8 (UNCONDITIONAL_JUMP)  ; LAB_004411a8
    MOV EAX,0x1                         ; 0044127c
        ;   Label: LAB_0044127c
    ADD ESP,0x4                         ; 00441281
    POP EBP                             ; 00441284
    POP EDI                             ; 00441285
    POP ESI                             ; 00441286
    POP EBX                             ; 00441287
    RET                                 ; 00441288

