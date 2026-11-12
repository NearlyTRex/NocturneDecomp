; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_load_FUN_005690c0(CTextureList *this_ptr,char *filename)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x12b]:1  local_12b
; undefined1       Stack[-0x129]:1  local_129
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_load_FUN_004cfcd0 at 004cff9c
;
; Referenced Globals:
;   TerminatedCString s_core_texlist_cpp_005d5d2a
;   TerminatedCString s_CTextureList_load_No_ext_005d5d3e
;   undefined1 DAT_005d5d66
;   undefined1 DAT_005d5d67
;   undefined1 DAT_005d5d68
;   undefined1 DAT_005d5d69
;   undefined4 DAT_005d5d6b
;   undefined4 DAT_005d5d6e
;   TerminatedCString s_core_texlist_cpp_005d5d73
;   TerminatedCString s_CTextureList_load_Bad_fi_005d5d87
;   undefined4 DAT_005d5daa
;   undefined4 DAT_005d5dae
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_ctype.c_toupper_FUN_005a4120
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_stdlib.c_atoi_FUN_005a5f50
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005690c0
        ;   Label: core_texlist.cpp_CTextureList_load_FUN_005690c0
    PUSH ESI                            ; 005690c1
    PUSH EDI                            ; 005690c2
    PUSH EBP                            ; 005690c3
    SUB ESP,0x11c                       ; 005690c4
    MOV EBP,dword ptr [ESP + 0x130]     ; 005690ca
    MOV ESI,dword ptr [ESP + 0x134]     ; 005690d1
    MOV EDI,ESP                         ; 005690d8
    MOV DL,0x2e                         ; 005690da
    PUSH EDI                            ; 005690dc
    MOV AL,byte ptr [ESI]               ; 005690dd
        ;   Label: LAB_005690dd
    MOV byte ptr [EDI],AL               ; 005690df
    CMP AL,0x0                          ; 005690e1
    JZ 0x005690f5                       ; 005690e3
        ;   XREF to: 005690f5 (CONDITIONAL_JUMP)  ; LAB_005690f5
    MOV AL,byte ptr [ESI + 0x1]         ; 005690e5
    ADD ESI,0x2                         ; 005690e8
    MOV byte ptr [EDI + 0x1],AL         ; 005690eb
    ADD EDI,0x2                         ; 005690ee
    CMP AL,0x0                          ; 005690f1
    JNZ 0x005690dd                      ; 005690f3
        ;   XREF to: 005690dd (CONDITIONAL_JUMP)  ; LAB_005690dd
    POP EDI                             ; 005690f5
        ;   Label: LAB_005690f5
    MOV ESI,ESP                         ; 005690f6
    MOV AL,byte ptr [ESI]               ; 005690f8
        ;   Label: LAB_005690f8
    CMP AL,DL                           ; 005690fa
    JZ 0x00569110                       ; 005690fc
        ;   XREF to: 00569110 (CONDITIONAL_JUMP)  ; LAB_00569110
    CMP AL,0x0                          ; 005690fe
    JZ 0x0056910e                       ; 00569100
        ;   XREF to: 0056910e (CONDITIONAL_JUMP)  ; LAB_0056910e
    INC ESI                             ; 00569102
    MOV AL,byte ptr [ESI]               ; 00569103
    CMP AL,DL                           ; 00569105
    JZ 0x00569110                       ; 00569107
        ;   XREF to: 00569110 (CONDITIONAL_JUMP)  ; LAB_00569110
    INC ESI                             ; 00569109
    CMP AL,0x0                          ; 0056910a
    JNZ 0x005690f8                      ; 0056910c
        ;   XREF to: 005690f8 (CONDITIONAL_JUMP)  ; LAB_005690f8
    SUB ESI,ESI                         ; 0056910e
        ;   Label: LAB_0056910e
    MOV EDI,ESI                         ; 00569110
        ;   Label: LAB_00569110
    TEST ESI,ESI                        ; 00569112
    JZ 0x00569296                       ; 00569114
        ;   XREF to: 00569296 (CONDITIONAL_JUMP)  ; LAB_00569296
    MOV ESI,0x5d5d66                    ; 0056911a | DAT_005d5d66
        ;   Label: LAB_0056911a
    PUSH EDI                            ; 0056911f
    MOV AL,byte ptr [ESI]               ; 00569120 | DAT_005d5d66 | DAT_005d5d68
        ;   Label: LAB_00569120
    MOV byte ptr [EDI],AL               ; 00569122
    CMP AL,0x0                          ; 00569124
    JZ 0x00569138                       ; 00569126
        ;   XREF to: 00569138 (CONDITIONAL_JUMP)  ; LAB_00569138
    MOV AL,byte ptr [ESI + 0x1]         ; 00569128 | DAT_005d5d67 | DAT_005d5d69
    ADD ESI,0x2                         ; 0056912b
    MOV byte ptr [EDI + 0x1],AL         ; 0056912e
    ADD EDI,0x2                         ; 00569131
    CMP AL,0x0                          ; 00569134
    JNZ 0x00569120                      ; 00569136
        ;   XREF to: 00569120 (CONDITIONAL_JUMP)  ; LAB_00569120
    POP EDI                             ; 00569138
        ;   Label: LAB_00569138
    PUSH 0x5d5d6b                       ; 00569139 | DAT_005d5d6b
    LEA EAX,[ESP + 0x4]                 ; 0056913e
    PUSH EAX                            ; 00569142
    PUSH 0x5d5d6e                       ; 00569143 | DAT_005d5d6e
    CALL engine_dosio.cpp_FUN_004659c0  ; 00569148
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0056914d
    MOV dword ptr [ESP + 0x100],EAX     ; 00569150
    TEST EAX,EAX                        ; 00569157
    JNZ 0x0056917e                      ; 00569159
        ;   XREF to: 0056917e (CONDITIONAL_JUMP)  ; LAB_0056917e
    MOV EBX,0x5d5d73                    ; 0056915b | = "..\\core\\texlist.cpp"
    MOV ESI,0x6a                        ; 00569160
    PUSH 0x5d5d87                       ; 00569165 | = "CTextureList::load - Bad filename!"
    MOV dword ptr [0x01d71de0],EBX      ; 0056916a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00569170 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00569176
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056917b
    PUSH EBP                            ; 0056917e
        ;   Label: LAB_0056917e
    PUSH 0x5d5daa                       ; 0056917f | DAT_005d5daa
    MOV EDI,dword ptr [ESP + 0x108]     ; 00569184
    PUSH EDI                            ; 0056918b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0056918c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00569191
    XOR EAX,EAX                         ; 00569194
    MOV EDX,dword ptr [EBP]             ; 00569196
    MOV dword ptr [ESP + 0x110],EAX     ; 00569199
    TEST EDX,EDX                        ; 005691a0
    JLE 0x0056931c                      ; 005691a2
        ;   XREF to: 0056931c (CONDITIONAL_JUMP)  ; LAB_0056931c
    LEA EAX,[EBP + 0x4]                 ; 005691a8
    XOR ECX,ECX                         ; 005691ab
    MOV dword ptr [ESP + 0x118],EAX     ; 005691ad
    MOV dword ptr [ESP + 0x114],EBP     ; 005691b4
    MOV dword ptr [ESP + 0x104],ECX     ; 005691bb
    ADD EAX,0x8                         ; 005691c2
    MOV dword ptr [ESP + 0x108],EBP     ; 005691c5
    MOV dword ptr [ESP + 0x10c],EAX     ; 005691cc
    MOV EAX,ESP                         ; 005691d3
        ;   Label: LAB_005691d3
    PUSH EAX                            ; 005691d5
    PUSH 0x5d5dae                       ; 005691d6 | DAT_005d5dae
    MOV EBX,dword ptr [ESP + 0x108]     ; 005691db
    PUSH EBX                            ; 005691e2
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005691e3
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005691e8
    MOV ESI,ESP                         ; 005691eb
    MOV DL,0x2c                         ; 005691ed
    MOV AL,byte ptr [ESI]               ; 005691ef
        ;   Label: LAB_005691ef
    CMP AL,DL                           ; 005691f1
    JZ 0x00569207                       ; 005691f3
        ;   XREF to: 00569207 (CONDITIONAL_JUMP)  ; LAB_00569207
    CMP AL,0x0                          ; 005691f5
    JZ 0x00569205                       ; 005691f7
        ;   XREF to: 00569205 (CONDITIONAL_JUMP)  ; LAB_00569205
    INC ESI                             ; 005691f9
    MOV AL,byte ptr [ESI]               ; 005691fa
    CMP AL,DL                           ; 005691fc
    JZ 0x00569207                       ; 005691fe
        ;   XREF to: 00569207 (CONDITIONAL_JUMP)  ; LAB_00569207
    INC ESI                             ; 00569200
    CMP AL,0x0                          ; 00569201
    JNZ 0x005691ef                      ; 00569203
        ;   XREF to: 005691ef (CONDITIONAL_JUMP)  ; LAB_005691ef
    SUB ESI,ESI                         ; 00569205
        ;   Label: LAB_00569205
    TEST ESI,ESI                        ; 00569207
        ;   Label: LAB_00569207
    JZ 0x0056936b                       ; 00569209
        ;   XREF to: 0056936b (CONDITIONAL_JUMP)  ; LAB_0056936b
    MOV byte ptr [ESI],0x0              ; 0056920f
    INC ESI                             ; 00569212
    PUSH ESI                            ; 00569213
    CALL crt_stdlib.c_atoi_FUN_005a5f50 ; 00569214
        ;   XREF to: 005a5f50 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005a5f50(char * string_ptr)
    ADD ESP,0x4                         ; 00569219
    MOV ECX,dword ptr [ESP + 0x114]     ; 0056921c
    MOV dword ptr [ECX + 0x5dc4],EAX    ; 00569223
    MOV ESI,ESP                         ; 00569229
        ;   Label: LAB_00569229
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0056922b
    PUSH EDI                            ; 00569232
    MOV AL,byte ptr [ESI]               ; 00569233
        ;   Label: LAB_00569233
    MOV byte ptr [EDI],AL               ; 00569235
    CMP AL,0x0                          ; 00569237
    JZ 0x0056924b                       ; 00569239
        ;   XREF to: 0056924b (CONDITIONAL_JUMP)  ; LAB_0056924b
    MOV AL,byte ptr [ESI + 0x1]         ; 0056923b
    ADD ESI,0x2                         ; 0056923e
    MOV byte ptr [EDI + 0x1],AL         ; 00569241
    ADD EDI,0x2                         ; 00569244
    CMP AL,0x0                          ; 00569247
    JNZ 0x00569233                      ; 00569249
        ;   XREF to: 00569233 (CONDITIONAL_JUMP)  ; LAB_00569233
    POP EDI                             ; 0056924b
        ;   Label: LAB_0056924b
    MOV EAX,dword ptr [ESP + 0x108]     ; 0056924c
    XOR EBX,EBX                         ; 00569253
    MOV ESI,dword ptr [ESP + 0x104]     ; 00569255
    MOV dword ptr [EAX + 0x8],0x0       ; 0056925c
    MOV EDI,dword ptr [ESP + 0x118]     ; 00569263
        ;   Label: LAB_00569263
    ADD EDI,ESI                         ; 0056926a
    ADD EDI,0x8                         ; 0056926c
    SUB ECX,ECX                         ; 0056926f
    DEC ECX                             ; 00569271
    XOR EAX,EAX                         ; 00569272
    SCASB.REPNE ES:EDI                  ; 00569274
    NOT ECX                             ; 00569276
    DEC ECX                             ; 00569278
    CMP EBX,ECX                         ; 00569279
    JNC 0x005692be                      ; 0056927b
        ;   XREF to: 005692be (CONDITIONAL_JUMP)  ; LAB_005692be
    LEA EDI,[ESI + EBP*0x1]             ; 0056927d
    XOR EAX,EAX                         ; 00569280
    MOV AL,byte ptr [EDI + EBX*0x1 + 0xc] ; 00569282
    PUSH EAX                            ; 00569286
    INC EBX                             ; 00569287
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 00569288
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 0056928d
    MOV byte ptr [EDI + EBX*0x1 + 0xb],AL ; 00569290
    JMP 0x00569263                      ; 00569294
        ;   XREF to: 00569263 (UNCONDITIONAL_JUMP)  ; LAB_00569263
    MOV EDX,0x5d5d2a                    ; 00569296 | = "..\\core\\texlist.cpp"
        ;   Label: LAB_00569296
    MOV ECX,0x61                        ; 0056929b
    PUSH 0x5d5d3e                       ; 005692a0 | = "CTextureList::load - No extension found"
    MOV dword ptr [0x01d71de0],EDX      ; 005692a5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 005692ab | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005692b1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005692b6
    JMP 0x0056911a                      ; 005692b9
        ;   XREF to: 0056911a (UNCONDITIONAL_JUMP)  ; LAB_0056911a
    MOV ECX,dword ptr [ESP + 0x114]     ; 005692be
        ;   Label: LAB_005692be
    MOV EBX,dword ptr [ESP + 0x104]     ; 005692c5
    MOV ESI,dword ptr [ESP + 0x108]     ; 005692cc
    MOV EDI,dword ptr [ESP + 0x10c]     ; 005692d3
    MOV EAX,dword ptr [ESP + 0x110]     ; 005692da
    MOV EDX,dword ptr [EBP]             ; 005692e1
    ADD ECX,0x4                         ; 005692e4
    ADD EBX,0x18                        ; 005692e7
    ADD ESI,0x18                        ; 005692ea
    ADD EDI,0x18                        ; 005692ed
    INC EAX                             ; 005692f0
    MOV dword ptr [ESP + 0x114],ECX     ; 005692f1
    MOV dword ptr [ESP + 0x104],EBX     ; 005692f8
    MOV dword ptr [ESP + 0x108],ESI     ; 005692ff
    MOV dword ptr [ESP + 0x10c],EDI     ; 00569306
    MOV dword ptr [ESP + 0x110],EAX     ; 0056930d
    CMP EAX,EDX                         ; 00569314
    JL 0x005691d3                       ; 00569316
        ;   XREF to: 005691d3 (CONDITIONAL_JUMP)  ; LAB_005691d3
    MOV ESI,dword ptr [EBP]             ; 0056931c
        ;   Label: LAB_0056931c
    CMP ESI,0x3e8                       ; 0056931f
    JGE 0x00569350                      ; 00569325
        ;   XREF to: 00569350 (CONDITIONAL_JUMP)  ; LAB_00569350
    LEA EAX,[ESI*0x4 + 0x0]             ; 00569327
    ADD EAX,EBP                         ; 0056932e
    ADD EAX,0x4                         ; 00569330
        ;   Label: LAB_00569330
    INC ESI                             ; 00569333
    MOV dword ptr [EAX + 0x5dc0],0x0    ; 00569334
    CMP ESI,0x3e8                       ; 0056933e
    JL 0x00569330                       ; 00569344
        ;   XREF to: 00569330 (CONDITIONAL_JUMP)  ; LAB_00569330
    LEA EAX,[EAX]                       ; 00569346
    LEA EDX,[EDX]                       ; 0056934c
    MOV ESI,dword ptr [ESP + 0x100]     ; 00569350
        ;   Label: LAB_00569350
    PUSH ESI                            ; 00569357
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00569358
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 0056935d
    ADD ESP,0x11c                       ; 00569360
    POP EBP                             ; 00569366
    POP EDI                             ; 00569367
    POP ESI                             ; 00569368
    POP EBX                             ; 00569369
    RET                                 ; 0056936a
    MOV EAX,dword ptr [ESP + 0x114]     ; 0056936b
        ;   Label: LAB_0056936b
    MOV dword ptr [EAX + 0x5dc4],ESI    ; 00569372
    JMP 0x00569229                      ; 00569378
        ;   XREF to: 00569229 (UNCONDITIONAL_JUMP)  ; LAB_00569229

