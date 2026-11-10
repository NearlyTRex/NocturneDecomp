; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00483c00(CPickList *this_ptr,char *dialog_title,uint window_flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   dialog_title
; uint             Stack[0xc]:4   window_flags
; Local Variables:
; undefined1       Stack[-0x160]:1  local_160
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
; XREF[1]:
;   shape_edittool.cpp_CPickList_initializeDialog_FUN_00483520 at 00483530
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   TerminatedCString s_shape_edittool_cpp_005bd755
;   TerminatedCString s_Too_many_picklist_column_005bd76b
;   TerminatedCString s_Cancel_005bd786
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01c5bb74
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;   shape_edittool.cpp_calculateButtonWidth_FUN_004864f0
;   shape_edittool.cpp_calculateGridHeight_FUN_00485ff0
;   shape_edittool.cpp_calculateGridWidth_FUN_00485fd0
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
;   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_00485590
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;   shape_edittool.cpp_FUN_00486580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483c00
        ;   Label: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00483c00
    PUSH ESI                            ; 00483c01
    PUSH EDI                            ; 00483c02
    PUSH EBP                            ; 00483c03
    SUB ESP,0x150                       ; 00483c04
    CMP dword ptr [0x01c5b0e0],0x0      ; 00483c0a | DAT_01c5b0e0
    JZ 0x00483d0f                       ; 00483c11
        ;   XREF to: 00483d0f (CONDITIONAL_JUMP)  ; LAB_00483d0f
    MOV EAX,[0x01c5b0e0]                ; 00483c17 | DAT_01c5b0e0
        ;   Label: LAB_00483c17
    PUSH 0x6a                           ; 00483c1c
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 00483c1e
    PUSH EAX                            ; 00483c24
    MOV dword ptr [0x01c5bae0],EDX      ; 00483c25 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 00483c2b
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00483c30
    MOV [0x01c5bae4],EAX                ; 00483c33 | DAT_01c5bae4
    PUSH 0x40                           ; 00483c38
    MOV EDX,dword ptr [ESP + 0x168]     ; 00483c3a
    INC EAX                             ; 00483c41
    PUSH 0x0                            ; 00483c42
    MOV dword ptr [EDX + 0x18c],EAX     ; 00483c44
    LEA EAX,[EDX + 0x10]                ; 00483c4a
    MOV dword ptr [EDX + 0x190],0x8     ; 00483c4d
    PUSH EAX                            ; 00483c57
    MOV dword ptr [EDX + 0x50],0x1      ; 00483c58
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00483c5f
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00483c64
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483c67
    XOR ESI,ESI                         ; 00483c6e
    MOV EDI,dword ptr [EAX]             ; 00483c70
    MOV dword ptr [ESP + 0x14c],ESI     ; 00483c72
    TEST EDI,EDI                        ; 00483c79
    JLE 0x00483d7c                      ; 00483c7b
        ;   XREF to: 00483d7c (CONDITIONAL_JUMP)  ; LAB_00483d7c
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00483c81
        ;   Label: LAB_00483c81
    PUSH EBX                            ; 00483c88
    MOV ESI,dword ptr [ESP + 0x168]     ; 00483c89
    PUSH ESI                            ; 00483c90
    XOR EBP,EBP                         ; 00483c91
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 00483c93
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00483c98
    MOV EDI,EAX                         ; 00483c9b
    XOR BL,BL                           ; 00483c9d
    MOV EDX,ESP                         ; 00483c9f
        ;   Label: LAB_00483c9f
    MOV BH,byte ptr [EDI]               ; 00483ca1
    MOV EAX,EDI                         ; 00483ca3
    CMP BL,BH                           ; 00483ca5
    JZ 0x00483cb9                       ; 00483ca7
        ;   XREF to: 00483cb9 (CONDITIONAL_JUMP)  ; LAB_00483cb9
    MOV BH,byte ptr [EAX]               ; 00483ca9
        ;   Label: LAB_00483ca9
    LEA ECX,[EAX + 0x1]                 ; 00483cab
    CMP BH,0x9                          ; 00483cae
    JNZ 0x00483d37                      ; 00483cb1
        ;   XREF to: 00483d37 (CONDITIONAL_JUMP)  ; LAB_00483d37
    MOV EAX,ECX                         ; 00483cb7
    MOV byte ptr [EDX],BL               ; 00483cb9
        ;   Label: LAB_00483cb9
    MOV EDI,EAX                         ; 00483cbb
    MOV EAX,ESP                         ; 00483cbd
    PUSH EAX                            ; 00483cbf
    MOV EAX,[0x01c5b0e0]                ; 00483cc0 | DAT_01c5b0e0
    PUSH EAX                            ; 00483cc5
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 00483cc6
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV EDX,dword ptr [ESI + 0x10]      ; 00483ccb
    ADD ESP,0x8                         ; 00483cce
    CMP EAX,EDX                         ; 00483cd1
    JLE 0x00483cd8                      ; 00483cd3
        ;   XREF to: 00483cd8 (CONDITIONAL_JUMP)  ; LAB_00483cd8
    MOV dword ptr [ESI + 0x10],EAX      ; 00483cd5
    INC EBP                             ; 00483cd8
        ;   Label: LAB_00483cd8
    MOV CL,byte ptr [EDI]               ; 00483cd9
    ADD ESI,0x4                         ; 00483cdb
    CMP BL,CL                           ; 00483cde
    JZ 0x00483d4d                       ; 00483ce0
        ;   XREF to: 00483d4d (CONDITIONAL_JUMP)  ; LAB_00483d4d
    CMP EBP,0x10                        ; 00483ce6
    JL 0x00483c9f                       ; 00483ce9
        ;   XREF to: 00483c9f (CONDITIONAL_JUMP)  ; LAB_00483c9f
    MOV EAX,0x5bd755                    ; 00483ceb | = "..\\shape\\edittool.cpp"
    MOV EDX,0x101e                      ; 00483cf0
    PUSH 0x5bd76b                       ; 00483cf5 | = "Too many picklist columns!"
    MOV [0x01d71de0],EAX                ; 00483cfa | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00483cff | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00483d05
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00483d0a
    JMP 0x00483c9f                      ; 00483d0d
        ;   XREF to: 00483c9f (UNCONDITIONAL_JUMP)  ; LAB_00483c9f
    MOV ECX,0x5bcd25                    ; 00483d0f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00483d0f
    MOV EBX,0xa7                        ; 00483d14
    PUSH 0x5bcd3b                       ; 00483d19 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 00483d1e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00483d24 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00483d2a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00483d2f
    JMP 0x00483c17                      ; 00483d32
        ;   XREF to: 00483c17 (UNCONDITIONAL_JUMP)  ; LAB_00483c17
    MOV AL,byte ptr [EAX]               ; 00483d37
        ;   Label: LAB_00483d37
    MOV byte ptr [EDX],AL               ; 00483d39
    INC EDX                             ; 00483d3b
    MOV BH,byte ptr [ECX]               ; 00483d3c
    MOV EAX,ECX                         ; 00483d3e
    CMP BL,BH                           ; 00483d40
    JNZ 0x00483ca9                      ; 00483d42
        ;   XREF to: 00483ca9 (CONDITIONAL_JUMP)  ; LAB_00483ca9
    JMP 0x00483cb9                      ; 00483d48
        ;   XREF to: 00483cb9 (UNCONDITIONAL_JUMP)  ; LAB_00483cb9
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483d4d
        ;   Label: LAB_00483d4d
    CMP EBP,dword ptr [EAX + 0x50]      ; 00483d54
    JLE 0x00483d5c                      ; 00483d57
        ;   XREF to: 00483d5c (CONDITIONAL_JUMP)  ; LAB_00483d5c
    MOV dword ptr [EAX + 0x50],EBP      ; 00483d59
    MOV EBP,dword ptr [ESP + 0x14c]     ; 00483d5c
        ;   Label: LAB_00483d5c
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483d63
    INC EBP                             ; 00483d6a
    MOV ECX,dword ptr [EDX]             ; 00483d6b
    MOV dword ptr [ESP + 0x14c],EBP     ; 00483d6d
    CMP EBP,ECX                         ; 00483d74
    JL 0x00483c81                       ; 00483d76
        ;   XREF to: 00483c81 (CONDITIONAL_JUMP)  ; LAB_00483c81
    MOV ESI,dword ptr [ESP + 0x164]     ; 00483d7c
        ;   Label: LAB_00483d7c
    MOV ECX,0x28                        ; 00483d83
    XOR EDI,EDI                         ; 00483d88
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483d8a
        ;   Label: LAB_00483d8a
    MOV EAX,dword ptr [EAX + 0x50]      ; 00483d91
    DEC EAX                             ; 00483d94
    CMP EDI,EAX                         ; 00483d95
    JGE 0x00483db3                      ; 00483d97
        ;   XREF to: 00483db3 (CONDITIONAL_JUMP)  ; LAB_00483db3
    MOV EAX,[0x005fba18]                ; 00483d99 | DAT_005fba18
    MOV EDX,EAX                         ; 00483d9e
    SAR EDX,0x1f                        ; 00483da0
    IDIV ECX                            ; 00483da3
    MOV EBP,dword ptr [ESI + 0x10]      ; 00483da5
    ADD ESI,0x4                         ; 00483da8
    ADD EBP,EAX                         ; 00483dab
    INC EDI                             ; 00483dad
    MOV dword ptr [ESI + 0xc],EBP       ; 00483dae
    JMP 0x00483d8a                      ; 00483db1
        ;   XREF to: 00483d8a (UNCONDITIONAL_JUMP)  ; LAB_00483d8a
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483db3
        ;   Label: LAB_00483db3
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483dba
    MOV dword ptr [EAX + 0x1a4],0x0     ; 00483dc1
    MOV EDI,dword ptr [EDX + 0x50]      ; 00483dcb
    XOR EAX,EAX                         ; 00483dce
    TEST EDI,EDI                        ; 00483dd0
    JLE 0x00483e00                      ; 00483dd2
        ;   XREF to: 00483e00 (CONDITIONAL_JUMP)  ; LAB_00483e00
    MOV EBX,dword ptr [ESP + 0x164]     ; 00483dd4
    MOV ECX,dword ptr [EDX + 0x10]      ; 00483ddb
        ;   Label: LAB_00483ddb
    ADD EDX,0x4                         ; 00483dde
    MOV ESI,dword ptr [EBX + 0x1a4]     ; 00483de1
    INC EAX                             ; 00483de7
    ADD ESI,ECX                         ; 00483de8
    MOV EDI,dword ptr [EBX + 0x50]      ; 00483dea
    MOV dword ptr [EBX + 0x1a4],ESI     ; 00483ded
    CMP EAX,EDI                         ; 00483df3
    JL 0x00483ddb                       ; 00483df5
        ;   XREF to: 00483ddb (CONDITIONAL_JUMP)  ; LAB_00483ddb
    LEA EAX,[EAX]                       ; 00483df7
    LEA EDX,[EDX]                       ; 00483dfd
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483e00
        ;   Label: LAB_00483e00
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483e07
    MOV EAX,dword ptr [EAX + 0x190]     ; 00483e0e
    MOV EBP,dword ptr [EDX + 0x1a4]     ; 00483e14
    ADD EAX,EAX                         ; 00483e1a
    ADD EBP,EAX                         ; 00483e1c
    MOV dword ptr [EDX + 0x1a4],EBP     ; 00483e1e
    MOV EDX,dword ptr [0x01c5bae4]      ; 00483e24 | DAT_01c5bae4
    MOV EAX,[0x005fba1c]                ; 00483e2a | DAT_005fba1c
    SHL EDX,0x2                         ; 00483e2f
    SUB EAX,EDX                         ; 00483e32
    MOV ECX,dword ptr [ESP + 0x164]     ; 00483e34
    MOV EDX,EAX                         ; 00483e3b
    MOV ECX,dword ptr [ECX + 0x18c]     ; 00483e3d
    SAR EDX,0x1f                        ; 00483e43
    IDIV ECX                            ; 00483e46
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483e48
    MOV dword ptr [EDX + 0x1a0],EAX     ; 00483e4f
    CMP EAX,0x1                         ; 00483e55
    JGE 0x00483e64                      ; 00483e58
        ;   XREF to: 00483e64 (CONDITIONAL_JUMP)  ; LAB_00483e64
    MOV dword ptr [EDX + 0x1a0],0x1     ; 00483e5a
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483e64
        ;   Label: LAB_00483e64
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483e6b
    MOV ECX,dword ptr [EDX]             ; 00483e72
    CMP ECX,dword ptr [EAX + 0x1a0]     ; 00483e74
    JGE 0x00483e82                      ; 00483e7a
        ;   XREF to: 00483e82 (CONDITIONAL_JUMP)  ; LAB_00483e82
    MOV dword ptr [EDX + 0x1a0],ECX     ; 00483e7c
    MOV EDX,dword ptr [0x005fba18]      ; 00483e82 | DAT_005fba18
        ;   Label: LAB_00483e82
    LEA EAX,[EDX*0x8 + 0x0]             ; 00483e88
    SUB EAX,EDX                         ; 00483e8f
    MOV EDX,EAX                         ; 00483e91
    SAR EDX,0x1f                        ; 00483e93
    SHL EDX,0x3                         ; 00483e96
    SBB EAX,EDX                         ; 00483e99
    SAR EAX,0x3                         ; 00483e9b
    MOV ECX,dword ptr [ESP + 0x164]     ; 00483e9e
    MOV EDX,EAX                         ; 00483ea5
    MOV ECX,dword ptr [ECX + 0x1a4]     ; 00483ea7
    SAR EDX,0x1f                        ; 00483ead
    IDIV ECX                            ; 00483eb0
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483eb2
    MOV dword ptr [EDX + 0x1a8],EAX     ; 00483eb9
    CMP EAX,0x1                         ; 00483ebf
    JGE 0x00483ece                      ; 00483ec2
        ;   XREF to: 00483ece (CONDITIONAL_JUMP)  ; LAB_00483ece
    MOV dword ptr [EDX + 0x1a8],0x1     ; 00483ec4
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483ece
        ;   Label: LAB_00483ece
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483ed5
    MOV ESI,dword ptr [EDX + 0x1a0]     ; 00483edc
    MOV EAX,dword ptr [EAX]             ; 00483ee2
    ADD EAX,ESI                         ; 00483ee4
    MOV ECX,dword ptr [ESP + 0x164]     ; 00483ee6
    LEA EDX,[EAX + -0x1]                ; 00483eed
    MOV EDI,dword ptr [ECX + 0x1a0]     ; 00483ef0
    MOV EAX,EDX                         ; 00483ef6
    SAR EDX,0x1f                        ; 00483ef8
    IDIV EDI                            ; 00483efb
    CMP EAX,dword ptr [ECX + 0x1a8]     ; 00483efd
    JGE 0x00483f0b                      ; 00483f03
        ;   XREF to: 00483f0b (CONDITIONAL_JUMP)  ; LAB_00483f0b
    MOV dword ptr [ECX + 0x1a8],EAX     ; 00483f05
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483f0b
        ;   Label: LAB_00483f0b
    MOV EDX,dword ptr [EAX + 0x54]      ; 00483f12
    TEST EDX,EDX                        ; 00483f15
    JLE 0x00483f28                      ; 00483f17
        ;   XREF to: 00483f28 (CONDITIONAL_JUMP)  ; LAB_00483f28
    MOV EAX,EDX                         ; 00483f19
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483f1b
    MOV dword ptr [EDX + 0x1a8],EAX     ; 00483f22
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483f28
        ;   Label: LAB_00483f28
    MOV dword ptr [EAX + 0x1f0],0x0     ; 00483f2f
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483f39
    MOV EAX,dword ptr [EAX + 0x1a0]     ; 00483f40
    MOV ECX,dword ptr [EDX + 0x1a8]     ; 00483f46
    IMUL EAX,ECX                        ; 00483f4c
    CMP EAX,dword ptr [EDX]             ; 00483f4f
    JGE 0x00483f66                      ; 00483f51
        ;   XREF to: 00483f66 (CONDITIONAL_JUMP)  ; LAB_00483f66
    CMP ECX,0x1                         ; 00483f53
    JLE 0x00484369                      ; 00483f56
        ;   XREF to: 00484369 (CONDITIONAL_JUMP)  ; LAB_00484369
    MOV dword ptr [EDX + 0x1f0],0x2     ; 00483f5c
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483f66
        ;   Label: LAB_00483f66
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483f6d
    MOV EAX,dword ptr [EAX + 0x1a4]     ; 00483f74
    IMUL EAX,dword ptr [EDX + 0x1a8]    ; 00483f7a
    LEA EBP,[EAX + 0x8]                 ; 00483f81
    MOV ECX,dword ptr [EDX + 0x18c]     ; 00483f84
    MOV EAX,dword ptr [EDX + 0x1a0]     ; 00483f8a
    IMUL EAX,ECX                        ; 00483f90
    LEA ESI,[EAX + 0x6]                 ; 00483f93
    CALL shape_edittool.cpp_calculateGridWidth_FUN_00485fd0 ; 00483f96
        ;   XREF to: 00485fd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_00485fd0()
    MOV EBX,EAX                         ; 00483f9b
    MOV dword ptr [ESP + 0x130],EAX     ; 00483f9d
    CALL shape_edittool.cpp_calculateGridHeight_FUN_00485ff0 ; 00483fa4
        ;   XREF to: 00485ff0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridHeight_FUN_00485ff0()
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483fa9
    MOV EDI,dword ptr [EDX + 0x1f0]     ; 00483fb0
    MOV dword ptr [ESP + 0x134],EAX     ; 00483fb6
    CMP EDI,0x1                         ; 00483fbd
    JNZ 0x00484378                      ; 00483fc0
        ;   XREF to: 00484378 (CONDITIONAL_JUMP)  ; LAB_00484378
    ADD EBP,EBX                         ; 00483fc6
    MOV EAX,[0x005fba18]                ; 00483fc8 | DAT_005fba18
        ;   Label: LAB_00483fc8
    MOV EDX,EAX                         ; 00483fcd
    SAR EDX,0x1f                        ; 00483fcf
    SHL EDX,0x7                         ; 00483fd2
    SBB EAX,EDX                         ; 00483fd5
    SAR EAX,0x7                         ; 00483fd7
    MOV dword ptr [ESP + 0x12c],EAX     ; 00483fda
    MOV EAX,[0x005fba1c]                ; 00483fe1 | DAT_005fba1c
    MOV EDX,EAX                         ; 00483fe6
    MOV ECX,0x60                        ; 00483fe8
    SAR EDX,0x1f                        ; 00483fed
    IDIV ECX                            ; 00483ff0
    XOR EBX,EBX                         ; 00483ff2
    XOR EDI,EDI                         ; 00483ff4
    MOV dword ptr [ESP + 0x138],EAX     ; 00483ff6
    MOV EAX,dword ptr [ESP + 0x164]     ; 00483ffd
    MOV dword ptr [ESP + 0x140],EBX     ; 00484004
    MOV dword ptr [ESP + 0x144],EBX     ; 0048400b
    MOV DL,byte ptr [EAX + 0x5c]        ; 00484012
    MOV dword ptr [ESP + 0x148],EBX     ; 00484015
    TEST DL,DL                          ; 0048401c
    JZ 0x0048403a                       ; 0048401e
        ;   XREF to: 0048403a (CONDITIONAL_JUMP)  ; LAB_0048403a
    ADD EAX,0x5c                        ; 00484020
    PUSH EAX                            ; 00484023
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004864f0 ; 00484024
        ;   XREF to: 004864f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004864f0(char * button_text)
    MOV ECX,0x1                         ; 00484029
    ADD ESP,0x4                         ; 0048402e
    MOV EDI,EAX                         ; 00484031
    MOV dword ptr [ESP + 0x148],ECX     ; 00484033
    MOV EAX,dword ptr [ESP + 0x164]     ; 0048403a
        ;   Label: LAB_0048403a
    CMP byte ptr [EAX + 0xc0],0x0       ; 00484041
    JZ 0x00484065                       ; 00484048
        ;   XREF to: 00484065 (CONDITIONAL_JUMP)  ; LAB_00484065
    ADD EAX,0xc0                        ; 0048404a
    PUSH EAX                            ; 0048404f
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004864f0 ; 00484050
        ;   XREF to: 004864f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004864f0(char * button_text)
    ADD ESP,0x4                         ; 00484055
    CMP EAX,EDI                         ; 00484058
    JLE 0x0048405e                      ; 0048405a
        ;   XREF to: 0048405e (CONDITIONAL_JUMP)  ; LAB_0048405e
    MOV EDI,EAX                         ; 0048405c
    INC dword ptr [ESP + 0x148]         ; 0048405e
        ;   Label: LAB_0048405e
    CMP dword ptr [ESP + 0x148],0x0     ; 00484065
        ;   Label: LAB_00484065
    JLE 0x004840ed                      ; 0048406d
        ;   XREF to: 004840ed (CONDITIONAL_JUMP)  ; LAB_004840ed
    PUSH 0x5bd786                       ; 00484073 | = "Cancel"
    CALL shape_edittool.cpp_calculateButtonWidth_FUN_004864f0 ; 00484078
        ;   XREF to: 004864f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateButtonWidth_FUN_004864f0(char * button_text)
    ADD ESP,0x4                         ; 0048407d
    CMP EAX,EDI                         ; 00484080
    JLE 0x00484086                      ; 00484082
        ;   XREF to: 00484086 (CONDITIONAL_JUMP)  ; LAB_00484086
    MOV EDI,EAX                         ; 00484084
    PUSH 0x0                            ; 00484086
        ;   Label: LAB_00484086
    CALL shape_edittool.cpp_FUN_00486580 ; 00484088
        ;   XREF to: 00486580 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486580(char * button_text)
    ADD ESP,0x4                         ; 0048408d
    MOV EDX,dword ptr [ESP + 0x148]     ; 00484090
    MOV ECX,dword ptr [ESP + 0x12c]     ; 00484097
    DEC EDX                             ; 0048409e
    IMUL EDX,ECX                        ; 0048409f
    MOV ECX,dword ptr [ESP + 0x148]     ; 004840a2
    IMUL ECX,EDI                        ; 004840a9
    MOV EBX,dword ptr [ESP + 0x138]     ; 004840ac
    MOV dword ptr [ESP + 0x144],EAX     ; 004840b3
    ADD EBX,EAX                         ; 004840ba
    MOV EAX,dword ptr [ESP + 0x164]     ; 004840bc
    ADD ECX,EDX                         ; 004840c3
    MOV EDX,dword ptr [EAX + 0x1f0]     ; 004840c5
    MOV dword ptr [ESP + 0x140],ECX     ; 004840cb
    CMP EDX,0x2                         ; 004840d2
    JNZ 0x004840de                      ; 004840d5
        ;   XREF to: 004840de (CONDITIONAL_JUMP)  ; LAB_004840de
    ADD EBX,dword ptr [ESP + 0x138]     ; 004840d7
    MOV EAX,dword ptr [ESP + 0x140]     ; 004840de
        ;   Label: LAB_004840de
    CMP EBP,EAX                         ; 004840e5
    JGE 0x004840eb                      ; 004840e7
        ;   XREF to: 004840eb (CONDITIONAL_JUMP)  ; LAB_004840eb
    MOV EBP,EAX                         ; 004840e9
    ADD ESI,EBX                         ; 004840eb
        ;   Label: LAB_004840eb
    MOV EDX,dword ptr [ESP + 0x16c]     ; 004840ed
        ;   Label: LAB_004840ed
    PUSH EDX                            ; 004840f4
    MOV ECX,dword ptr [ESP + 0x16c]     ; 004840f5
    PUSH ECX                            ; 004840fc
    PUSH ESI                            ; 004840fd
    PUSH EBP                            ; 004840fe
    MOV ESI,dword ptr [0x005fb140]      ; 004840ff | g_CEditorToolsPtr
    PUSH ESI                            ; 00484105
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0 ; 00484106
        ;   XREF to: 0047f3e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    MOV EAX,[0x01c6b5b0]                ; 0048410b | DAT_01c6b5b0
    SUB EAX,dword ptr [0x01c6b5a8]      ; 00484110 | DAT_01c6b5a8
    LEA EBP,[EAX + 0x1]                 ; 00484116
    MOV EDX,dword ptr [0x01c6b5ac]      ; 00484119 | DAT_01c6b5ac
    MOV EAX,[0x01c6b5b4]                ; 0048411f | DAT_01c6b5b4
    SUB EAX,EDX                         ; 00484124
    ADD ESP,0x14                        ; 00484126
    LEA ESI,[EAX + 0x1]                 ; 00484129
    MOV EDX,dword ptr [ESP + 0x164]     ; 0048412c
    MOV EAX,dword ptr [ESP + 0x164]     ; 00484133
    MOV ECX,dword ptr [EDX + 0x1f0]     ; 0048413a
    ADD EAX,0x1bc                       ; 00484140
    CMP ECX,0x1                         ; 00484145
    JNZ 0x00484388                      ; 00484148
        ;   XREF to: 00484388 (CONDITIONAL_JUMP)  ; LAB_00484388
    MOV ECX,dword ptr [ESP + 0x130]     ; 0048414e
    MOV EDX,dword ptr [0x01c6b5b4]      ; 00484155 | DAT_01c6b5b4
    SUB EBP,ECX                         ; 0048415b
    SUB EDX,dword ptr [ESP + 0x144]     ; 0048415d
    SUB EDX,dword ptr [ESP + 0x138]     ; 00484164
    PUSH EDX                            ; 0048416b
    MOV EDX,dword ptr [0x01c6b5b0]      ; 0048416c | DAT_01c6b5b0
    PUSH EDX                            ; 00484172
    MOV ECX,dword ptr [0x01c6b5ac]      ; 00484173 | DAT_01c6b5ac
    PUSH ECX                            ; 00484179
    SUB EDX,dword ptr [ESP + 0x13c]     ; 0048417a
    INC EDX                             ; 00484181
    PUSH EDX                            ; 00484182
        ;   Label: LAB_00484182
    PUSH EAX                            ; 00484183
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_00485590 ; 00484184
        ;   XREF to: 00485590 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_00485590(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    ADD ESP,0x14                        ; 00484189
    CMP dword ptr [ESP + 0x148],0x0     ; 0048418c
        ;   Label: LAB_0048418c
    JLE 0x00484267                      ; 00484194
        ;   XREF to: 00484267 (CONDITIONAL_JUMP)  ; LAB_00484267
    MOV EDX,dword ptr [ESP + 0x144]     ; 0048419a
    MOV EAX,[0x01c6b5b4]                ; 004841a1 | DAT_01c6b5b4
    SUB EAX,EDX                         ; 004841a6
    INC EAX                             ; 004841a8
    MOV dword ptr [ESP + 0x13c],EAX     ; 004841a9
    MOV EAX,dword ptr [ESP + 0x164]     ; 004841b0
    CMP byte ptr [EAX + 0x5c],0x0       ; 004841b7
    JZ 0x0048420a                       ; 004841bb
        ;   XREF to: 0048420a (CONDITIONAL_JUMP)  ; LAB_0048420a
    MOV ECX,dword ptr [ESP + 0x140]     ; 004841bd
    MOV EDX,dword ptr [ESP + 0x164]     ; 004841c4
    MOV EAX,[0x01c6b5b0]                ; 004841cb | DAT_01c6b5b0
    ADD EDX,0x5c                        ; 004841d0
    INC EAX                             ; 004841d3
    PUSH EDX                            ; 004841d4
    SUB EAX,ECX                         ; 004841d5
    MOV EDX,dword ptr [ESP + 0x140]     ; 004841d7
    ADD EDX,dword ptr [ESP + 0x148]     ; 004841de
    DEC EDX                             ; 004841e5
    PUSH EDX                            ; 004841e6
    LEA EDX,[EAX + EDI*0x1 + -0x1]      ; 004841e7
    PUSH EDX                            ; 004841eb
    MOV EDX,dword ptr [ESP + 0x148]     ; 004841ec
    PUSH EDX                            ; 004841f3
    PUSH EAX                            ; 004841f4
    MOV EAX,dword ptr [ESP + 0x178]     ; 004841f5
    ADD EAX,0x1f4                       ; 004841fc
    PUSH EAX                            ; 00484201
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0 ; 00484202
        ;   XREF to: 004860d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 00484207
    MOV EAX,dword ptr [ESP + 0x164]     ; 0048420a
        ;   Label: LAB_0048420a
    CMP byte ptr [EAX + 0xc0],0x0       ; 00484211
    JZ 0x00484265                       ; 00484218
        ;   XREF to: 00484265 (CONDITIONAL_JUMP)  ; LAB_00484265
    MOV EDX,dword ptr [ESP + 0x164]     ; 0048421a
    ADD EDX,0xc0                        ; 00484221
    MOV ECX,dword ptr [ESP + 0x144]     ; 00484227
    PUSH EDX                            ; 0048422e
    MOV EDX,dword ptr [ESP + 0x140]     ; 0048422f
    MOV EAX,[0x01c6b5b0]                ; 00484236 | DAT_01c6b5b0
    ADD EDX,ECX                         ; 0048423b
    INC EAX                             ; 0048423d
    DEC EDX                             ; 0048423e
    SUB EAX,EDI                         ; 0048423f
    PUSH EDX                            ; 00484241
    LEA EDX,[EAX + EDI*0x1 + -0x1]      ; 00484242
    PUSH EDX                            ; 00484246
    MOV EDI,dword ptr [ESP + 0x148]     ; 00484247
    PUSH EDI                            ; 0048424e
    PUSH EAX                            ; 0048424f
    MOV EAX,dword ptr [ESP + 0x178]     ; 00484250
    ADD EAX,0x2d8                       ; 00484257
    PUSH EAX                            ; 0048425c
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0 ; 0048425d
        ;   XREF to: 004860d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004860d0(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 00484262
    SUB ESI,EBX                         ; 00484265
        ;   Label: LAB_00484265
    MOV ECX,dword ptr [ESP + 0x164]     ; 00484267
        ;   Label: LAB_00484267
    MOV EDX,ESI                         ; 0048426e
    MOV EAX,ESI                         ; 00484270
    SAR EDX,0x1f                        ; 00484272
    MOV ECX,dword ptr [ECX + 0x18c]     ; 00484275
    IDIV ECX                            ; 0048427b
    MOV EDX,dword ptr [ESP + 0x164]     ; 0048427d
    MOV ECX,dword ptr [EDX + 0x1a4]     ; 00484284
    MOV dword ptr [EDX + 0x1a0],EAX     ; 0048428a
    MOV EDX,EBP                         ; 00484290
    MOV EAX,EBP                         ; 00484292
    SAR EDX,0x1f                        ; 00484294
    IDIV ECX                            ; 00484297
    MOV EDX,dword ptr [ESP + 0x164]     ; 00484299
    MOV dword ptr [EDX + 0x1a8],EAX     ; 004842a0
    MOV ECX,dword ptr [EDX + 0x1a0]     ; 004842a6
    MOV EAX,dword ptr [EDX]             ; 004842ac
    ADD EAX,ECX                         ; 004842ae
    LEA EDX,[EAX + -0x1]                ; 004842b0
    MOV ECX,dword ptr [ESP + 0x164]     ; 004842b3
    MOV EAX,EDX                         ; 004842ba
    MOV EBX,dword ptr [ECX + 0x1a0]     ; 004842bc
    SAR EDX,0x1f                        ; 004842c2
    IDIV EBX                            ; 004842c5
    CMP EAX,dword ptr [ECX + 0x1a8]     ; 004842c7
    JGE 0x004842d5                      ; 004842cd
        ;   XREF to: 004842d5 (CONDITIONAL_JUMP)  ; LAB_004842d5
    MOV dword ptr [ECX + 0x1a8],EAX     ; 004842cf
    MOV EAX,dword ptr [ESP + 0x164]     ; 004842d5
        ;   Label: LAB_004842d5
    CMP dword ptr [EAX + 0x1a8],0x1     ; 004842dc
    JGE 0x004842ef                      ; 004842e3
        ;   XREF to: 004842ef (CONDITIONAL_JUMP)  ; LAB_004842ef
    MOV dword ptr [EAX + 0x1a8],0x1     ; 004842e5
    MOV EAX,dword ptr [ESP + 0x164]     ; 004842ef
        ;   Label: LAB_004842ef
    MOV EDX,dword ptr [ESP + 0x164]     ; 004842f6
    MOV EAX,dword ptr [EAX + 0x1a0]     ; 004842fd
    IMUL EAX,dword ptr [EDX + 0x1a8]    ; 00484303
    MOV ECX,dword ptr [EDX + 0x1a8]     ; 0048430a
    MOV dword ptr [EDX + 0x19c],EAX     ; 00484310
    MOV EDX,EBP                         ; 00484316
    MOV EAX,EBP                         ; 00484318
    SAR EDX,0x1f                        ; 0048431a
    IDIV ECX                            ; 0048431d
    MOV EDX,dword ptr [ESP + 0x164]     ; 0048431f
    MOV dword ptr [EDX + 0x198],0x0     ; 00484326
    MOV dword ptr [EDX + 0x1a4],EAX     ; 00484330
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00484336
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x164]     ; 0048433b
    MOV EBX,0xffffffff                  ; 00484342
    MOV byte ptr [EAX + 0x124],0x0      ; 00484347
    MOV dword ptr [0x01c5bb74],EBX      ; 0048434e | DAT_01c5bb74
    MOV dword ptr [EAX + 0x188],0x0     ; 00484354
    ADD ESP,0x150                       ; 0048435e
    POP EBP                             ; 00484364
    POP EDI                             ; 00484365
    POP ESI                             ; 00484366
    POP EBX                             ; 00484367
    RET                                 ; 00484368
    MOV dword ptr [EDX + 0x1f0],0x1     ; 00484369
        ;   Label: LAB_00484369
    JMP 0x00483f66                      ; 00484373
        ;   XREF to: 00483f66 (UNCONDITIONAL_JUMP)  ; LAB_00483f66
    CMP EDI,0x2                         ; 00484378
        ;   Label: LAB_00484378
    JNZ 0x00483fc8                      ; 0048437b
        ;   XREF to: 00483fc8 (CONDITIONAL_JUMP)  ; LAB_00483fc8
    ADD ESI,EAX                         ; 00484381
    JMP 0x00483fc8                      ; 00484383
        ;   XREF to: 00483fc8 (UNCONDITIONAL_JUMP)  ; LAB_00483fc8
    CMP ECX,0x2                         ; 00484388
        ;   Label: LAB_00484388
    JNZ 0x0048418c                      ; 0048438b
        ;   XREF to: 0048418c (CONDITIONAL_JUMP)  ; LAB_0048418c
    SUB ESI,dword ptr [ESP + 0x134]     ; 00484391
    MOV EDX,dword ptr [0x01c6b5b4]      ; 00484398 | DAT_01c6b5b4
    SUB EDX,EBX                         ; 0048439e
    PUSH EDX                            ; 004843a0
    MOV ECX,dword ptr [0x01c6b5b0]      ; 004843a1 | DAT_01c6b5b0
    MOV EDX,dword ptr [0x01c6b5b4]      ; 004843a7 | DAT_01c6b5b4
    PUSH ECX                            ; 004843ad
    SUB EDX,dword ptr [ESP + 0x13c]     ; 004843ae
    SUB EDX,EBX                         ; 004843b5
    INC EDX                             ; 004843b7
    PUSH EDX                            ; 004843b8
    MOV EDX,dword ptr [0x01c6b5a8]      ; 004843b9 | DAT_01c6b5a8
    JMP 0x00484182                      ; 004843bf
        ;   XREF to: 00484182 (UNCONDITIONAL_JUMP)  ; LAB_00484182

