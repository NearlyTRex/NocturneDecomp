; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004540c0(int param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00475720 at 00475cfb
;   FUN_004772f0 at 0047733e
;
; Referenced Globals:
;   undefined1* PTR_LAB_004540a0 = 004541e4
;   TerminatedCString s_core_dcube_cpp_005ba2fb
;   TerminatedCString s_CDemonCube_rotateVertici_005ba30d
;   undefined4 DAT_005ba366
;   undefined4 DAT_005de020
;   undefined4 DAT_005f2afc
;   undefined4 DAT_015485ec
;   undefined4 DAT_015485f0
;   undefined4 DAT_015485f4
;   undefined4 DAT_015485f8
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01bdd7fc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   FUN_00453c40
;   FUN_0046ce90
;   FUN_0046d3d0
;   FUN_0046d460
;   FUN_0046d500
;   FUN_004e4330
;   FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004540c0
        ;   Label: FUN_004540c0
    PUSH ESI                            ; 004540c1
    PUSH EDI                            ; 004540c2
    PUSH EBP                            ; 004540c3
    MOV EBP,ESP                         ; 004540c4
    SUB ESP,0x38                        ; 004540c6
    PUSH 0x2cfd900                      ; 004540c9 | DAT_02cfd900
    MOV EDX,dword ptr [0x005f2afc]      ; 004540ce | DAT_005f2afc
    PUSH EDX                            ; 004540d4 | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 004540d5
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004540da
    MOV ECX,dword ptr [EAX + 0x20]      ; 004540dd
    ADD ESP,0x8                         ; 004540e0
    CMP ECX,0x61a8                      ; 004540e3
    JG 0x004542ce                       ; 004540e9
        ;   XREF to: 004542ce (CONDITIONAL_JUMP)  ; LAB_004542ce
    PUSH 0x1                            ; 004540ef
        ;   Label: LAB_004540ef
    MOV EAX,[0x005f2afc]                ; 004540f1 | DAT_005f2afc
    PUSH EAX                            ; 004540f6 | DAT_01bdd7e4
    CALL FUN_0046d500                   ; 004540f7
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d500()
    ADD ESP,0x8                         ; 004540fc
    PUSH 0x1                            ; 004540ff
    MOV EDX,dword ptr [0x005f2afc]      ; 00454101 | DAT_005f2afc
    PUSH EDX                            ; 00454107 | DAT_01bdd7e4
    MOV ESI,dword ptr [EBP + 0x14]      ; 00454108
    CALL FUN_0046d460                   ; 0045410b
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00454110
    MOV EDI,dword ptr [0x005f2afc]      ; 00454113 | DAT_005f2afc
    ADD ESP,0x8                         ; 00454119
    XOR ECX,ECX                         ; 0045411c
    MOV ESI,dword ptr [ESI + 0x24]      ; 0045411e
    MOV dword ptr [EBP + -0x10],ECX     ; 00454121
    MOV dword ptr [EBP + -0xc],ECX      ; 00454124
    MOV EDX,dword ptr [EAX + 0x20]      ; 00454127
    MOV EDI,dword ptr [EDI]             ; 0045412a | DAT_01bdd7e4
    TEST EDX,EDX                        ; 0045412c
    JLE 0x00454186                      ; 0045412e
        ;   XREF to: 00454186 (CONDITIONAL_JUMP)  ; LAB_00454186
    LEA EBX,[EBP + -0x38]               ; 00454130
        ;   Label: LAB_00454130
    MOV EAX,ESI                         ; 00454133
    FLD float ptr [EAX]                 ; 00454135
    FMUL float ptr [0x005de020]         ; 00454137 | DAT_005de020
    FISTP dword ptr [EBX]               ; 0045413d
    FLD float ptr [EAX + 0x4]           ; 0045413f
    FMUL float ptr [0x005de020]         ; 00454142 | DAT_005de020
    FISTP dword ptr [EBX + 0x4]         ; 00454148
    FLD float ptr [EAX + 0x8]           ; 0045414b
    FMUL float ptr [0x005de020]         ; 0045414e | DAT_005de020
    FISTP dword ptr [EBX + 0x8]         ; 00454154
    LEA EAX,[EBP + -0x38]               ; 00454157
    PUSH EAX                            ; 0045415a
    PUSH EDI                            ; 0045415b
    CALL FUN_005632a3                   ; 0045415c
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    MOV DH,byte ptr [EDI + 0x13]        ; 00454161
    ADD ESP,0x8                         ; 00454164
    TEST DH,0x80                        ; 00454167
    JNZ 0x0045416f                      ; 0045416a
        ;   XREF to: 0045416f (CONDITIONAL_JUMP)  ; LAB_0045416f
    INC dword ptr [EBP + -0x10]         ; 0045416c
    MOV ECX,dword ptr [EBP + -0xc]      ; 0045416f
        ;   Label: LAB_0045416f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00454172
    ADD EDI,0x30                        ; 00454175
    ADD ESI,0xc                         ; 00454178
    INC ECX                             ; 0045417b
    MOV EBX,dword ptr [EDX + 0x20]      ; 0045417c
    MOV dword ptr [EBP + -0xc],ECX      ; 0045417f
    CMP ECX,EBX                         ; 00454182
    JL 0x00454130                       ; 00454184
        ;   XREF to: 00454130 (CONDITIONAL_JUMP)  ; LAB_00454130
    MOV EDX,dword ptr [EBP + 0x14]      ; 00454186
        ;   Label: LAB_00454186
    MOV EAX,dword ptr [EBP + -0x10]     ; 00454189
    CMP EAX,dword ptr [EDX + 0x20]      ; 0045418c
    JNZ 0x004541a7                      ; 0045418f
        ;   XREF to: 004541a7 (CONDITIONAL_JUMP)  ; LAB_004541a7
    MOV EAX,[0x005f2afc]                ; 00454191 | DAT_005f2afc
    MOV EDX,dword ptr [EAX + 0x18]      ; 00454196 | DAT_01bdd7fc
    TEST EDX,EDX                        ; 00454199
    JNZ 0x004541a7                      ; 0045419b
        ;   XREF to: 004541a7 (CONDITIONAL_JUMP)  ; LAB_004541a7
    PUSH EDX                            ; 0045419d
    PUSH EAX                            ; 0045419e | DAT_01bdd7e4
    CALL FUN_0046d500                   ; 0045419f
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d500()
    ADD ESP,0x8                         ; 004541a4
    MOV AH,byte ptr [0x015485f8]        ; 004541a7 | DAT_015485f8
        ;   Label: LAB_004541a7
    TEST AH,0x1                         ; 004541ad
    JZ 0x004542fc                       ; 004541b0
        ;   XREF to: 004542fc (CONDITIONAL_JUMP)  ; LAB_004542fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004541b6
        ;   Label: LAB_004541b6
    XOR ECX,ECX                         ; 004541b9
    MOV EBX,dword ptr [EAX + 0x28]      ; 004541bb
    MOV dword ptr [EBP + -0x4],ECX      ; 004541be
    TEST EBX,EBX                        ; 004541c1
    JLE 0x004542a6                      ; 004541c3
        ;   XREF to: 004542a6 (CONDITIONAL_JUMP)  ; LAB_004542a6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004541c9
    SHL EAX,0x2                         ; 004541cc
    MOV dword ptr [EBP + -0x8],ECX      ; 004541cf
    MOV dword ptr [EBP + -0x14],EAX     ; 004541d2
    CMP dword ptr [EBP + 0x18],0x4      ; 004541d5
        ;   Label: LAB_004541d5
    JA 0x004541e4                       ; 004541d9
        ;   XREF to: 004541e4 (CONDITIONAL_JUMP)  ; LAB_004541e4
    MOV EAX,dword ptr [EBP + -0x14]     ; 004541db
    JMP dword ptr [EAX + 0x4540a0]      ; 004541de | PTR_LAB_004540a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004541e4
        ;   Label: LAB_004541e4
    MOV ESI,dword ptr [EBP + -0x8]      ; 004541e7
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004541ea
    ADD EAX,ESI                         ; 004541ed
    LEA EDX,[EAX + 0xc]                 ; 004541ef
    LEA EAX,[EBP + -0x2c]               ; 004541f2
    CMP EAX,EDX                         ; 004541f5
    JZ 0x0045420a                       ; 004541f7
        ;   XREF to: 0045420a (CONDITIONAL_JUMP)  ; LAB_0045420a
    MOV EAX,dword ptr [EDX]             ; 004541f9
    MOV dword ptr [EBP + -0x2c],EAX     ; 004541fb
    MOV EAX,dword ptr [EDX + 0x4]       ; 004541fe
    MOV dword ptr [EBP + -0x28],EAX     ; 00454201
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454204
    MOV dword ptr [EBP + -0x24],EAX     ; 00454207
    FLD float ptr [0x005ba366]          ; 0045420a | DAT_005ba366
        ;   Label: LAB_0045420a
    FLD float ptr [EBP + -0x2c]         ; 00454210
    FMUL ST1                            ; 00454213
    FSTP float ptr [EBP + -0x2c]        ; 00454215
    FLD float ptr [EBP + -0x28]         ; 00454218
    FMUL ST1                            ; 0045421b
    FSTP float ptr [EBP + -0x28]        ; 0045421d
    FMUL float ptr [EBP + -0x24]        ; 00454220
    FSTP float ptr [EBP + -0x24]        ; 00454223
    LEA EAX,[EBP + 0xffffffd4]          ; 00454226
    FLD float ptr [EAX]                 ; 0045422c
    FLD float ptr [EAX + 0x4]           ; 0045422e
    FLD float ptr [EAX + 0x8]           ; 00454231
    FISTP dword ptr [EBP + 0xffffffe8]  ; 00454234
    FISTP dword ptr [EBP + 0xffffffe4]  ; 0045423a
    FISTP dword ptr [EBP + 0xffffffe0]  ; 00454240
    MOV EAX,dword ptr [EBP + -0x18]     ; 00454246
    AND EAX,0xff                        ; 00454249
    PUSH EAX                            ; 0045424e
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045424f
    AND EAX,0xff                        ; 00454252
    PUSH EAX                            ; 00454257
    MOV EAX,dword ptr [EBP + -0x20]     ; 00454258
    AND EAX,0xff                        ; 0045425b
    PUSH EAX                            ; 00454260
    MOV EDI,dword ptr [0x005f2afc]      ; 00454261 | DAT_005f2afc
    PUSH EDI                            ; 00454267 | DAT_01bdd7e4
    CALL FUN_0046d3d0                   ; 00454268
        ;   XREF to: 0046d3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d3d0()
    ADD ESP,0x10                        ; 0045426d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00454270
        ;   Label: LAB_00454270
    MOV ECX,dword ptr [EBP + -0x8]      ; 00454273
    MOV EBX,dword ptr [EBP + -0x8]      ; 00454276
    MOV EDX,dword ptr [EAX + 0x24]      ; 00454279
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0045427c
    PUSH EDX                            ; 0045427f
    ADD EAX,ECX                         ; 00454280
    MOV ESI,dword ptr [EBP + -0x4]      ; 00454282
    PUSH EAX                            ; 00454285
    ADD EBX,0x20                        ; 00454286
    INC ESI                             ; 00454289
    CALL FUN_00453c40                   ; 0045428a
        ;   XREF to: 00453c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00453c40()
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045428f
    MOV dword ptr [EBP + -0x8],EBX      ; 00454292
    MOV dword ptr [EBP + -0x4],ESI      ; 00454295
    MOV EDI,dword ptr [EDX + 0x28]      ; 00454298
    ADD ESP,0x8                         ; 0045429b
    CMP ESI,EDI                         ; 0045429e
    JL 0x004541d5                       ; 004542a0
        ;   XREF to: 004541d5 (CONDITIONAL_JUMP)  ; LAB_004541d5
    PUSH 0x1                            ; 004542a6
        ;   Label: LAB_004542a6
    MOV EAX,[0x005f2afc]                ; 004542a8 | DAT_005f2afc
    PUSH EAX                            ; 004542ad | DAT_01bdd7e4
    CALL FUN_0046d500                   ; 004542ae
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d500()
    ADD ESP,0x8                         ; 004542b3
    PUSH 0x0                            ; 004542b6
    MOV EDX,dword ptr [0x005f2afc]      ; 004542b8 | DAT_005f2afc
    PUSH EDX                            ; 004542be | DAT_01bdd7e4
    CALL FUN_0046d460                   ; 004542bf
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 004542c4
    MOV ESP,EBP                         ; 004542c7
    POP EBP                             ; 004542c9
    POP EDI                             ; 004542ca
    POP ESI                             ; 004542cb
    POP EBX                             ; 004542cc
    RET                                 ; 004542cd
    PUSH 0x61a8                         ; 004542ce
        ;   Label: LAB_004542ce
    PUSH ECX                            ; 004542d3
    MOV EBX,0x5ba2fb                    ; 004542d4 | = "..\\core\\dcube.cpp"
    MOV ESI,0x7bb                       ; 004542d9
    PUSH 0x5ba30d                       ; 004542de | = "CDemonCube::rotateVerticies - tried t..."
    MOV dword ptr [0x01d71de0],EBX      ; 004542e3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004542e9 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004542ef
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 004542f4
    JMP 0x004540ef                      ; 004542f7
        ;   XREF to: 004540ef (UNCONDITIONAL_JUMP)  ; LAB_004540ef
    MOV EDI,0x3f13cd3a                  ; 004542fc
        ;   Label: LAB_004542fc
    MOV DL,AH                           ; 00454301
    MOV EAX,0xbf13cd3a                  ; 00454303
    OR DL,0x1                           ; 00454308
    MOV dword ptr [0x015485ec],EDI      ; 0045430b | DAT_015485ec
    MOV dword ptr [0x015485f4],EDI      ; 00454311 | DAT_015485f4
    MOV [0x015485f0],EAX                ; 00454317 | DAT_015485f0
    MOV byte ptr [0x015485f8],DL        ; 0045431c | DAT_015485f8
    JMP 0x004541b6                      ; 00454322
        ;   XREF to: 004541b6 (UNCONDITIONAL_JUMP)  ; LAB_004541b6

