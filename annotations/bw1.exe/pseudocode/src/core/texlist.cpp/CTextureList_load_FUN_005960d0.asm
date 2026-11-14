; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_load_FUN_005960d0(CTextureList *this_ptr,char *filename)
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
;   core_ground.cpp_CGround_load_FUN_004e7340 at 004e760c
;
; Referenced Globals:
;   TerminatedCString s_core_texlist_cpp_005f77bb
;   TerminatedCString s_CTextureList_load_No_ext_005f77cf
;   undefined1 DAT_005f77f7
;   undefined1 DAT_005f77f8
;   undefined1 DAT_005f77f9
;   undefined1 DAT_005f77fa
;   undefined4 DAT_005f77fc
;   undefined4 DAT_005f77ff
;   TerminatedCString s_core_texlist_cpp_005f7804
;   TerminatedCString s_CTextureList_load_Bad_fi_005f7818
;   undefined4 DAT_005f783b
;   undefined4 DAT_005f783f
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_ctype.c_toupper_FUN_005c12b0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_stdlib.c_atoi_FUN_005c30e0
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005960d0
        ;   Label: core_texlist.cpp_CTextureList_load_FUN_005960d0
    PUSH ESI                            ; 005960d1
    PUSH EDI                            ; 005960d2
    PUSH EBP                            ; 005960d3
    SUB ESP,0x11c                       ; 005960d4
    MOV EBP,dword ptr [ESP + 0x130]     ; 005960da
    MOV ESI,dword ptr [ESP + 0x134]     ; 005960e1
    MOV EDI,ESP                         ; 005960e8
    MOV DL,0x2e                         ; 005960ea
    PUSH EDI                            ; 005960ec
    MOV AL,byte ptr [ESI]               ; 005960ed
        ;   Label: LAB_005960ed
    MOV byte ptr [EDI],AL               ; 005960ef
    CMP AL,0x0                          ; 005960f1
    JZ 0x00596105                       ; 005960f3
        ;   XREF to: 00596105 (CONDITIONAL_JUMP)  ; LAB_00596105
    MOV AL,byte ptr [ESI + 0x1]         ; 005960f5
    ADD ESI,0x2                         ; 005960f8
    MOV byte ptr [EDI + 0x1],AL         ; 005960fb
    ADD EDI,0x2                         ; 005960fe
    CMP AL,0x0                          ; 00596101
    JNZ 0x005960ed                      ; 00596103
        ;   XREF to: 005960ed (CONDITIONAL_JUMP)  ; LAB_005960ed
    POP EDI                             ; 00596105
        ;   Label: LAB_00596105
    MOV ESI,ESP                         ; 00596106
    MOV AL,byte ptr [ESI]               ; 00596108
        ;   Label: LAB_00596108
    CMP AL,DL                           ; 0059610a
    JZ 0x00596120                       ; 0059610c
        ;   XREF to: 00596120 (CONDITIONAL_JUMP)  ; LAB_00596120
    CMP AL,0x0                          ; 0059610e
    JZ 0x0059611e                       ; 00596110
        ;   XREF to: 0059611e (CONDITIONAL_JUMP)  ; LAB_0059611e
    INC ESI                             ; 00596112
    MOV AL,byte ptr [ESI]               ; 00596113
    CMP AL,DL                           ; 00596115
    JZ 0x00596120                       ; 00596117
        ;   XREF to: 00596120 (CONDITIONAL_JUMP)  ; LAB_00596120
    INC ESI                             ; 00596119
    CMP AL,0x0                          ; 0059611a
    JNZ 0x00596108                      ; 0059611c
        ;   XREF to: 00596108 (CONDITIONAL_JUMP)  ; LAB_00596108
    SUB ESI,ESI                         ; 0059611e
        ;   Label: LAB_0059611e
    MOV EDI,ESI                         ; 00596120
        ;   Label: LAB_00596120
    TEST ESI,ESI                        ; 00596122
    JZ 0x005962a6                       ; 00596124
        ;   XREF to: 005962a6 (CONDITIONAL_JUMP)  ; LAB_005962a6
    MOV ESI,0x5f77f7                    ; 0059612a | DAT_005f77f7
        ;   Label: LAB_0059612a
    PUSH EDI                            ; 0059612f
    MOV AL,byte ptr [ESI]               ; 00596130 | DAT_005f77f7 | DAT_005f77f9
        ;   Label: LAB_00596130
    MOV byte ptr [EDI],AL               ; 00596132
    CMP AL,0x0                          ; 00596134
    JZ 0x00596148                       ; 00596136
        ;   XREF to: 00596148 (CONDITIONAL_JUMP)  ; LAB_00596148
    MOV AL,byte ptr [ESI + 0x1]         ; 00596138 | DAT_005f77f8 | DAT_005f77fa
    ADD ESI,0x2                         ; 0059613b
    MOV byte ptr [EDI + 0x1],AL         ; 0059613e
    ADD EDI,0x2                         ; 00596141
    CMP AL,0x0                          ; 00596144
    JNZ 0x00596130                      ; 00596146
        ;   XREF to: 00596130 (CONDITIONAL_JUMP)  ; LAB_00596130
    POP EDI                             ; 00596148
        ;   Label: LAB_00596148
    PUSH 0x5f77fc                       ; 00596149 | DAT_005f77fc
    LEA EAX,[ESP + 0x4]                 ; 0059614e
    PUSH EAX                            ; 00596152
    PUSH 0x5f77ff                       ; 00596153 | DAT_005f77ff
    CALL engine_dosio.cpp_FUN_00479180  ; 00596158
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0059615d
    MOV dword ptr [ESP + 0x100],EAX     ; 00596160
    TEST EAX,EAX                        ; 00596167
    JNZ 0x0059618e                      ; 00596169
        ;   XREF to: 0059618e (CONDITIONAL_JUMP)  ; LAB_0059618e
    MOV EBX,0x5f7804                    ; 0059616b | = "..\\core\\texlist.cpp"
    MOV ESI,0x6a                        ; 00596170
    PUSH 0x5f7818                       ; 00596175 | = "CTextureList::load - Bad filename!"
    MOV dword ptr [0x01d1d400],EBX      ; 0059617a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00596180 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00596186
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0059618b
    PUSH EBP                            ; 0059618e
        ;   Label: LAB_0059618e
    PUSH 0x5f783b                       ; 0059618f | DAT_005f783b
    MOV EDI,dword ptr [ESP + 0x108]     ; 00596194
    PUSH EDI                            ; 0059619b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0059619c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005961a1
    XOR EAX,EAX                         ; 005961a4
    MOV EDX,dword ptr [EBP]             ; 005961a6
    MOV dword ptr [ESP + 0x110],EAX     ; 005961a9
    TEST EDX,EDX                        ; 005961b0
    JLE 0x0059632c                      ; 005961b2
        ;   XREF to: 0059632c (CONDITIONAL_JUMP)  ; LAB_0059632c
    LEA EAX,[EBP + 0x4]                 ; 005961b8
    XOR ECX,ECX                         ; 005961bb
    MOV dword ptr [ESP + 0x118],EAX     ; 005961bd
    MOV dword ptr [ESP + 0x114],EBP     ; 005961c4
    MOV dword ptr [ESP + 0x104],ECX     ; 005961cb
    ADD EAX,0x8                         ; 005961d2
    MOV dword ptr [ESP + 0x108],EBP     ; 005961d5
    MOV dword ptr [ESP + 0x10c],EAX     ; 005961dc
    MOV EAX,ESP                         ; 005961e3
        ;   Label: LAB_005961e3
    PUSH EAX                            ; 005961e5
    PUSH 0x5f783f                       ; 005961e6 | DAT_005f783f
    MOV EBX,dword ptr [ESP + 0x108]     ; 005961eb
    PUSH EBX                            ; 005961f2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 005961f3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005961f8
    MOV ESI,ESP                         ; 005961fb
    MOV DL,0x2c                         ; 005961fd
    MOV AL,byte ptr [ESI]               ; 005961ff
        ;   Label: LAB_005961ff
    CMP AL,DL                           ; 00596201
    JZ 0x00596217                       ; 00596203
        ;   XREF to: 00596217 (CONDITIONAL_JUMP)  ; LAB_00596217
    CMP AL,0x0                          ; 00596205
    JZ 0x00596215                       ; 00596207
        ;   XREF to: 00596215 (CONDITIONAL_JUMP)  ; LAB_00596215
    INC ESI                             ; 00596209
    MOV AL,byte ptr [ESI]               ; 0059620a
    CMP AL,DL                           ; 0059620c
    JZ 0x00596217                       ; 0059620e
        ;   XREF to: 00596217 (CONDITIONAL_JUMP)  ; LAB_00596217
    INC ESI                             ; 00596210
    CMP AL,0x0                          ; 00596211
    JNZ 0x005961ff                      ; 00596213
        ;   XREF to: 005961ff (CONDITIONAL_JUMP)  ; LAB_005961ff
    SUB ESI,ESI                         ; 00596215
        ;   Label: LAB_00596215
    TEST ESI,ESI                        ; 00596217
        ;   Label: LAB_00596217
    JZ 0x0059637b                       ; 00596219
        ;   XREF to: 0059637b (CONDITIONAL_JUMP)  ; LAB_0059637b
    MOV byte ptr [ESI],0x0              ; 0059621f
    INC ESI                             ; 00596222
    PUSH ESI                            ; 00596223
    CALL crt_stdlib.c_atoi_FUN_005c30e0 ; 00596224
        ;   XREF to: 005c30e0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005c30e0(char * string_ptr)
    ADD ESP,0x4                         ; 00596229
    MOV ECX,dword ptr [ESP + 0x114]     ; 0059622c
    MOV dword ptr [ECX + 0x5dc4],EAX    ; 00596233
    MOV ESI,ESP                         ; 00596239
        ;   Label: LAB_00596239
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0059623b
    PUSH EDI                            ; 00596242
    MOV AL,byte ptr [ESI]               ; 00596243
        ;   Label: LAB_00596243
    MOV byte ptr [EDI],AL               ; 00596245
    CMP AL,0x0                          ; 00596247
    JZ 0x0059625b                       ; 00596249
        ;   XREF to: 0059625b (CONDITIONAL_JUMP)  ; LAB_0059625b
    MOV AL,byte ptr [ESI + 0x1]         ; 0059624b
    ADD ESI,0x2                         ; 0059624e
    MOV byte ptr [EDI + 0x1],AL         ; 00596251
    ADD EDI,0x2                         ; 00596254
    CMP AL,0x0                          ; 00596257
    JNZ 0x00596243                      ; 00596259
        ;   XREF to: 00596243 (CONDITIONAL_JUMP)  ; LAB_00596243
    POP EDI                             ; 0059625b
        ;   Label: LAB_0059625b
    MOV EAX,dword ptr [ESP + 0x108]     ; 0059625c
    XOR EBX,EBX                         ; 00596263
    MOV ESI,dword ptr [ESP + 0x104]     ; 00596265
    MOV dword ptr [EAX + 0x8],0x0       ; 0059626c
    MOV EDI,dword ptr [ESP + 0x118]     ; 00596273
        ;   Label: LAB_00596273
    ADD EDI,ESI                         ; 0059627a
    ADD EDI,0x8                         ; 0059627c
    SUB ECX,ECX                         ; 0059627f
    DEC ECX                             ; 00596281
    XOR EAX,EAX                         ; 00596282
    SCASB.REPNE ES:EDI                  ; 00596284
    NOT ECX                             ; 00596286
    DEC ECX                             ; 00596288
    CMP EBX,ECX                         ; 00596289
    JNC 0x005962ce                      ; 0059628b
        ;   XREF to: 005962ce (CONDITIONAL_JUMP)  ; LAB_005962ce
    LEA EDI,[ESI + EBP*0x1]             ; 0059628d
    XOR EAX,EAX                         ; 00596290
    MOV AL,byte ptr [EDI + EBX*0x1 + 0xc] ; 00596292
    PUSH EAX                            ; 00596296
    INC EBX                             ; 00596297
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 00596298
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 0059629d
    MOV byte ptr [EDI + EBX*0x1 + 0xb],AL ; 005962a0
    JMP 0x00596273                      ; 005962a4
        ;   XREF to: 00596273 (UNCONDITIONAL_JUMP)  ; LAB_00596273
    MOV EDX,0x5f77bb                    ; 005962a6 | = "..\\core\\texlist.cpp"
        ;   Label: LAB_005962a6
    MOV ECX,0x61                        ; 005962ab
    PUSH 0x5f77cf                       ; 005962b0 | = "CTextureList::load - No extension found"
    MOV dword ptr [0x01d1d400],EDX      ; 005962b5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005962bb | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005962c1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005962c6
    JMP 0x0059612a                      ; 005962c9
        ;   XREF to: 0059612a (UNCONDITIONAL_JUMP)  ; LAB_0059612a
    MOV ECX,dword ptr [ESP + 0x114]     ; 005962ce
        ;   Label: LAB_005962ce
    MOV EBX,dword ptr [ESP + 0x104]     ; 005962d5
    MOV ESI,dword ptr [ESP + 0x108]     ; 005962dc
    MOV EDI,dword ptr [ESP + 0x10c]     ; 005962e3
    MOV EAX,dword ptr [ESP + 0x110]     ; 005962ea
    MOV EDX,dword ptr [EBP]             ; 005962f1
    ADD ECX,0x4                         ; 005962f4
    ADD EBX,0x18                        ; 005962f7
    ADD ESI,0x18                        ; 005962fa
    ADD EDI,0x18                        ; 005962fd
    INC EAX                             ; 00596300
    MOV dword ptr [ESP + 0x114],ECX     ; 00596301
    MOV dword ptr [ESP + 0x104],EBX     ; 00596308
    MOV dword ptr [ESP + 0x108],ESI     ; 0059630f
    MOV dword ptr [ESP + 0x10c],EDI     ; 00596316
    MOV dword ptr [ESP + 0x110],EAX     ; 0059631d
    CMP EAX,EDX                         ; 00596324
    JL 0x005961e3                       ; 00596326
        ;   XREF to: 005961e3 (CONDITIONAL_JUMP)  ; LAB_005961e3
    MOV ESI,dword ptr [EBP]             ; 0059632c
        ;   Label: LAB_0059632c
    CMP ESI,0x3e8                       ; 0059632f
    JGE 0x00596360                      ; 00596335
        ;   XREF to: 00596360 (CONDITIONAL_JUMP)  ; LAB_00596360
    LEA EAX,[ESI*0x4 + 0x0]             ; 00596337
    ADD EAX,EBP                         ; 0059633e
    ADD EAX,0x4                         ; 00596340
        ;   Label: LAB_00596340
    INC ESI                             ; 00596343
    MOV dword ptr [EAX + 0x5dc0],0x0    ; 00596344
    CMP ESI,0x3e8                       ; 0059634e
    JL 0x00596340                       ; 00596354
        ;   XREF to: 00596340 (CONDITIONAL_JUMP)  ; LAB_00596340
    LEA EAX,[EAX]                       ; 00596356
    LEA EDX,[EDX]                       ; 0059635c
    MOV ESI,dword ptr [ESP + 0x100]     ; 00596360
        ;   Label: LAB_00596360
    PUSH ESI                            ; 00596367
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 00596368
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 0059636d
    ADD ESP,0x11c                       ; 00596370
    POP EBP                             ; 00596376
    POP EDI                             ; 00596377
    POP ESI                             ; 00596378
    POP EBX                             ; 00596379
    RET                                 ; 0059637a
    MOV EAX,dword ptr [ESP + 0x114]     ; 0059637b
        ;   Label: LAB_0059637b
    MOV dword ptr [EAX + 0x5dc4],ESI    ; 00596382
    JMP 0x00596239                      ; 00596388
        ;   XREF to: 00596239 (UNCONDITIONAL_JUMP)  ; LAB_00596239

