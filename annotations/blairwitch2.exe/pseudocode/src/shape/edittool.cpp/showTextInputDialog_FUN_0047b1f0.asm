; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_showTextInputDialog_FUN_0047b1f0(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode)
;
; Parameters:
; char *           Stack[0x4]:4   dialog_title
; char *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   max_length
; int              Stack[0x10]:4   flags
; int              Stack[0x14]:4   dialog_mode
; Local Variables:
; undefined        Stack[-0x320]:1  local_320
; undefined        Stack[-0x1e0]:1  local_1e0
; undefined        Stack[-0xfc]:1  local_fc
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_0047db10 at 0047db28
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0 at 0047daf8
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   TerminatedCString s_Cancel_005d1f4a
;   undefined4 DAT_005d1f51
;   TerminatedCString s_Cancel_005d1f54
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141cc
;   undefined4 DAT_00617dd4
;   undefined4 DAT_0061ed94
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c26410
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_font.cpp_FUN_004ab560
;   engine_keys.cpp_CKeys_getInputKey_FUN_004dfe90
;   shape_edittool.cpp_CEdButton_ctor_FUN_00484e20
;   shape_edittool.cpp_CEdButton_dtor_FUN_00484e50
;   shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0
;   shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
;   shape_edittool.cpp_CInputString_backspace_FUN_0047abd0
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0
;   shape_edittool.cpp_CInputString_init_FUN_0047a9d0
;   shape_edittool.cpp_CInputString_insertChar_FUN_0047aa80
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b1f0
        ;   Label: shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0
    PUSH ESI                            ; 0047b1f1
    PUSH EDI                            ; 0047b1f2
    PUSH EBP                            ; 0047b1f3
    SUB ESP,0x310                       ; 0047b1f4
    MOV EBP,dword ptr [ESP + 0x328]     ; 0047b1fa
    MOV ESI,dword ptr [ESP + 0x32c]     ; 0047b201
    MOV EBX,dword ptr [ESP + 0x334]     ; 0047b208
    CMP dword ptr [0x01c25590],0x0      ; 0047b20f | DAT_01c25590
    JZ 0x0047b50d                       ; 0047b216
        ;   XREF to: 0047b50d (CONDITIONAL_JUMP)  ; LAB_0047b50d
    MOV EAX,[0x01c25590]                ; 0047b21c | DAT_01c25590
        ;   Label: LAB_0047b21c
    PUSH 0x6a                           ; 0047b221
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047b223
    PUSH EAX                            ; 0047b229
    MOV dword ptr [0x01c25f78],EDX      ; 0047b22a | DAT_01c25f78
    CALL engine_font.cpp_FUN_004ab560   ; 0047b230
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047b235
    MOV [0x01c25f7c],EAX                ; 0047b238 | DAT_01c25f7c
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047b23d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    TEST byte ptr [ESP + 0x330],0x1     ; 0047b242
    JZ 0x0047b535                       ; 0047b24a
        ;   XREF to: 0047b535 (CONDITIONAL_JUMP)  ; LAB_0047b535
    PUSH EBX                            ; 0047b250
    PUSH ESI                            ; 0047b251
    PUSH EBP                            ; 0047b252
    LEA EAX,[ESP + 0xc]                 ; 0047b253
        ;   Label: LAB_0047b253
    PUSH EAX                            ; 0047b257
    CALL shape_edittool.cpp_CInputString_init_FUN_0047a9d0 ; 0047b258
        ;   XREF to: 0047a9d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_init_FUN_0047a9d0(CInputString * this_ptr, char * source_string, int max_length, int mask_mode)
    ADD ESP,0x10                        ; 0047b25d
    MOV EAX,[0x006141b8]                ; 0047b260 | DAT_006141b8
    MOV EDX,EAX                         ; 0047b265
    SAR EDX,0x1f                        ; 0047b267
    SHL EDX,0x7                         ; 0047b26a
    SBB EAX,EDX                         ; 0047b26d
    SAR EAX,0x7                         ; 0047b26f
    MOV ESI,EAX                         ; 0047b272
    MOV EAX,[0x006141bc]                ; 0047b274 | DAT_006141bc
    MOV EDX,EAX                         ; 0047b279
    MOV ECX,0x60                        ; 0047b27b
    SAR EDX,0x1f                        ; 0047b280
    IDIV ECX                            ; 0047b283
    PUSH 0x0                            ; 0047b285
    MOV EBX,EAX                         ; 0047b287
    CALL shape_edittool.cpp_FUN_00485380 ; 0047b289
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00485380()
    ADD ESP,0x4                         ; 0047b28e
    MOV ECX,dword ptr [0x01c25f7c]      ; 0047b291 | DAT_01c25f7c
    ADD EBX,EBX                         ; 0047b297
    PUSH 0x0                            ; 0047b299
    MOV EDX,dword ptr [ESP + 0x328]     ; 0047b29b
    ADD EAX,EBX                         ; 0047b2a2
    PUSH EDX                            ; 0047b2a4
    ADD EAX,ECX                         ; 0047b2a5
    MOV EDX,dword ptr [0x006141b8]      ; 0047b2a7 | DAT_006141b8
    MOV ECX,0x5                         ; 0047b2ad
    SHL EDX,0x2                         ; 0047b2b2
    PUSH EAX                            ; 0047b2b5
    MOV EAX,EDX                         ; 0047b2b6
    SAR EDX,0x1f                        ; 0047b2b8
    IDIV ECX                            ; 0047b2bb
    PUSH EAX                            ; 0047b2bd
    MOV EBX,dword ptr [0x006138e0]      ; 0047b2be | g_CEditorToolsPtr
    PUSH EBX                            ; 0047b2c4
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0 ; 0047b2c5
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    ADD ESP,0x14                        ; 0047b2ca
    PUSH 0x5d1f4a                       ; 0047b2cd | = "Cancel"
    CALL shape_edittool.cpp_FUN_004852f0 ; 0047b2d2
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_004852f0(char * button_text)
    MOV ECX,dword ptr [0x01c35e48]      ; 0047b2d7 | DAT_01c35e48
    MOV EDI,dword ptr [0x01c35e50]      ; 0047b2dd | DAT_01c35e50
    ADD ECX,EDI                         ; 0047b2e3
    MOV EDX,ECX                         ; 0047b2e5
    SUB EDX,ESI                         ; 0047b2e7
    MOV EBX,EAX                         ; 0047b2e9
    MOV EAX,EDX                         ; 0047b2eb
    SAR EDX,0x1f                        ; 0047b2ed
    SUB EAX,EDX                         ; 0047b2f0
    SAR EAX,0x1                         ; 0047b2f2
    SUB EAX,EBX                         ; 0047b2f4
    LEA EDX,[ECX + ESI*0x1]             ; 0047b2f6
    LEA EDI,[EAX + 0x1]                 ; 0047b2f9
    MOV EAX,EDX                         ; 0047b2fc
    SAR EDX,0x1f                        ; 0047b2fe
    SUB EAX,EDX                         ; 0047b301
    SAR EAX,0x1                         ; 0047b303
    ADD ESP,0x4                         ; 0047b305
    PUSH 0x0                            ; 0047b308
    MOV ESI,EAX                         ; 0047b30a
    CALL shape_edittool.cpp_FUN_00485380 ; 0047b30c
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00485380()
    MOV EDX,dword ptr [0x01c35e54]      ; 0047b311 | DAT_01c35e54
    SUB EDX,EAX                         ; 0047b317
    ADD ESP,0x4                         ; 0047b319
    LEA EAX,[EDX + 0x1]                 ; 0047b31c
    MOV dword ptr [ESP + 0x308],EAX     ; 0047b31f
    LEA EAX,[ESP + 0x224]               ; 0047b326
    PUSH EAX                            ; 0047b32d
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_00484e20 ; 0047b32e
        ;   XREF to: 00484e20 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_00484e20(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047b333
    LEA EAX,[ESP + 0x140]               ; 0047b336
    PUSH EAX                            ; 0047b33d
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_00484e20 ; 0047b33e
        ;   XREF to: 00484e20 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_00484e20(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047b343
    PUSH 0x5d1f51                       ; 0047b346 | DAT_005d1f51
    MOV EAX,[0x01c35e54]                ; 0047b34b | DAT_01c35e54
    PUSH EAX                            ; 0047b350
    LEA EAX,[EDI + EBX*0x1 + -0x1]      ; 0047b351
    PUSH EAX                            ; 0047b355
    MOV EDX,dword ptr [ESP + 0x314]     ; 0047b356
    PUSH EDX                            ; 0047b35d
    PUSH EDI                            ; 0047b35e
    LEA EAX,[ESP + 0x238]               ; 0047b35f
    PUSH EAX                            ; 0047b366
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0 ; 0047b367
        ;   XREF to: 00484ed0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0(CEdButton * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x18                        ; 0047b36c
    PUSH 0x5d1f54                       ; 0047b36f | = "Cancel"
    MOV ECX,dword ptr [0x01c35e54]      ; 0047b374 | DAT_01c35e54
    ADD EBX,ESI                         ; 0047b37a
    PUSH ECX                            ; 0047b37c
    DEC EBX                             ; 0047b37d
    PUSH EBX                            ; 0047b37e
    MOV EBX,dword ptr [ESP + 0x314]     ; 0047b37f
    PUSH EBX                            ; 0047b386
    PUSH ESI                            ; 0047b387
    LEA EAX,[ESP + 0x154]               ; 0047b388
    PUSH EAX                            ; 0047b38f
    MOV EDI,0x1                         ; 0047b390
    CALL shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0 ; 0047b395
        ;   XREF to: 00484ed0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00484ed0(CEdButton * this_ptr, int left, int top, int right, ...)
    MOV EAX,[0x006141cc]                ; 0047b39a | DAT_006141cc
    ADD ESP,0x18                        ; 0047b39f
    MOV ESI,0x7f                        ; 0047b3a2
    MOV dword ptr [ESP + 0x30c],EAX     ; 0047b3a7
    MOV dword ptr [0x006141cc],ESI      ; 0047b3ae | DAT_006141cc
    XOR ESI,ESI                         ; 0047b3b4
    MOV EAX,[0x006138e0]                ; 0047b3b6 | g_CEditorToolsPtr
        ;   Label: LAB_0047b3b6
    PUSH EAX                            ; 0047b3bb
    CALL shape_edittool.cpp_FUN_0047e870 ; 0047b3bc
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e870()
    ADD ESP,0x4                         ; 0047b3c1
    PUSH 0x1                            ; 0047b3c4
    MOV EDX,dword ptr [0x006138e0]      ; 0047b3c6 | g_CEditorToolsPtr
    PUSH EDX                            ; 0047b3cc
    CALL shape_edittool.cpp_FUN_0047eff0 ; 0047b3cd
        ;   XREF to: 0047eff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047eff0()
    ADD ESP,0x8                         ; 0047b3d2
    MOV ECX,dword ptr [0x01c35e4c]      ; 0047b3d5 | DAT_01c35e4c
    PUSH ECX                            ; 0047b3db
    MOV EBX,dword ptr [0x01c35e48]      ; 0047b3dc | DAT_01c35e48
    PUSH EBX                            ; 0047b3e2
    LEA EAX,[ESP + 0x8]                 ; 0047b3e3
    PUSH EAX                            ; 0047b3e7
    CALL shape_edittool.cpp_FUN_0047afb0 ; 0047b3e8
        ;   XREF to: 0047afb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047afb0()
    ADD ESP,0xc                         ; 0047b3ed
    TEST ESI,ESI                        ; 0047b3f0
    SETZ AL                             ; 0047b3f2
    AND EAX,0xff                        ; 0047b3f5
    PUSH EAX                            ; 0047b3fa
    LEA EAX,[ESP + 0x228]               ; 0047b3fb
    PUSH EAX                            ; 0047b402
    CALL shape_edittool.cpp_FUN_00484f20 ; 0047b403
        ;   XREF to: 00484f20 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00484f20()
    ADD ESP,0x8                         ; 0047b408
    CMP ESI,0x1                         ; 0047b40b
    SETZ AL                             ; 0047b40e
    AND EAX,0xff                        ; 0047b411
    PUSH EAX                            ; 0047b416
    LEA EAX,[ESP + 0x144]               ; 0047b417
    PUSH EAX                            ; 0047b41e
    CALL shape_edittool.cpp_FUN_00484f20 ; 0047b41f
        ;   XREF to: 00484f20 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00484f20()
    ADD ESP,0x8                         ; 0047b424
    PUSH 0x0                            ; 0047b427
    MOV EAX,[0x006138e0]                ; 0047b429 | g_CEditorToolsPtr
    PUSH EAX                            ; 0047b42e
    CALL shape_edittool.cpp_FUN_0047f210 ; 0047b42f
        ;   XREF to: 0047f210 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f210()
    ADD ESP,0x8                         ; 0047b434
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 0047b437
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    PUSH 0x2a                           ; 0047b43c
    MOV EAX,[0x00617dd4]                ; 0047b43e | DAT_00617dd4
    PUSH EAX                            ; 0047b443 | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0047b444 | DAT_01d02f84
    CALL dword ptr [EBX]                ; 0047b446
    ADD ESP,0x8                         ; 0047b448
    TEST EAX,EAX                        ; 0047b44b
    JZ 0x0047b53e                       ; 0047b44d
        ;   XREF to: 0047b53e (CONDITIONAL_JUMP)  ; LAB_0047b53e
    PUSH 0x2a                           ; 0047b453
        ;   Label: LAB_0047b453
    MOV EAX,[0x00617dd4]                ; 0047b455 | DAT_00617dd4
    PUSH EAX                            ; 0047b45a | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0047b45b | DAT_01d02f84
    CALL dword ptr [EBX]                ; 0047b45d
    ADD ESP,0x8                         ; 0047b45f
    TEST EAX,EAX                        ; 0047b462
    JZ 0x0047b47b                       ; 0047b464
        ;   XREF to: 0047b47b (CONDITIONAL_JUMP)  ; LAB_0047b47b
    PUSH 0xf                            ; 0047b466
    MOV EAX,[0x00617dd4]                ; 0047b468 | DAT_00617dd4
    PUSH EAX                            ; 0047b46d | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0047b46e | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 0047b470
    ADD ESP,0x8                         ; 0047b473
    TEST EAX,EAX                        ; 0047b476
    JZ 0x0047b47b                       ; 0047b478
        ;   XREF to: 0047b47b (CONDITIONAL_JUMP)  ; LAB_0047b47b
    DEC ESI                             ; 0047b47a
    CMP ESI,0x2                         ; 0047b47b
        ;   Label: LAB_0047b47b
    JL 0x0047b55c                       ; 0047b47e
        ;   XREF to: 0047b55c (CONDITIONAL_JUMP)  ; LAB_0047b55c
    XOR ESI,ESI                         ; 0047b484
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40 ; 0047b486
        ;   XREF to: 0058eb40 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_0058eb40()
        ;   Label: LAB_0047b486
    TEST EAX,EAX                        ; 0047b48b
    JZ 0x0047b5e7                       ; 0047b48d
        ;   XREF to: 0047b5e7 (CONDITIONAL_JUMP)  ; LAB_0047b5e7
    MOV EBX,dword ptr [0x00617dd4]      ; 0047b493 | DAT_00617dd4
    PUSH EBX                            ; 0047b499 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_004dfe90 ; 0047b49a
        ;   XREF to: 004dfe90 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_004dfe90(CKeys * this_ptr)
    MOV EBX,EAX                         ; 0047b49f
    ADD ESP,0x4                         ; 0047b4a1
    CMP EAX,0x1b                        ; 0047b4a4
    JZ 0x0047b4ba                       ; 0047b4a7
        ;   XREF to: 0047b4ba (CONDITIONAL_JUMP)  ; LAB_0047b4ba
    CMP EAX,0xd                         ; 0047b4a9
    JNZ 0x0047b593                      ; 0047b4ac
        ;   XREF to: 0047b593 (CONDITIONAL_JUMP)  ; LAB_0047b593
    TEST ESI,ESI                        ; 0047b4b2
    JZ 0x0047b56b                       ; 0047b4b4
        ;   XREF to: 0047b56b (CONDITIONAL_JUMP)  ; LAB_0047b56b
    XOR EBX,EAX                         ; 0047b4ba
        ;   Label: LAB_0047b4ba
    MOV ESI,dword ptr [0x006138e0]      ; 0047b4bc | g_CEditorToolsPtr
        ;   Label: LAB_0047b4bc
    PUSH ESI                            ; 0047b4c2
    CALL shape_edittool.cpp_FUN_0047e760 ; 0047b4c3
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0047b4c8
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0047b4cb
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0047b4d0
    PUSH 0x0                            ; 0047b4d7
    MOV [0x006141cc],EAX                ; 0047b4d9 | DAT_006141cc
    LEA EAX,[ESP + 0x144]               ; 0047b4de
    PUSH EAX                            ; 0047b4e5
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00484e50 ; 0047b4e6
        ;   XREF to: 00484e50 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00484e50(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047b4eb
    PUSH 0x0                            ; 0047b4ee
    LEA EAX,[ESP + 0x228]               ; 0047b4f0
    PUSH EAX                            ; 0047b4f7
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00484e50 ; 0047b4f8
        ;   XREF to: 00484e50 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00484e50(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047b4fd
    MOV EAX,EBX                         ; 0047b500
    ADD ESP,0x310                       ; 0047b502
    POP EBP                             ; 0047b508
    POP EDI                             ; 0047b509
    POP ESI                             ; 0047b50a
    POP EBX                             ; 0047b50b
    RET                                 ; 0047b50c
    MOV ECX,0x5d1e6f                    ; 0047b50d | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047b50d
    MOV EDI,0xa0                        ; 0047b512
    PUSH 0x5d1e85                       ; 0047b517 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0047b51c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0047b522 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047b528
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047b52d
    JMP 0x0047b21c                      ; 0047b530
        ;   XREF to: 0047b21c (UNCONDITIONAL_JUMP)  ; LAB_0047b21c
    PUSH EBX                            ; 0047b535
        ;   Label: LAB_0047b535
    PUSH ESI                            ; 0047b536
    PUSH 0x0                            ; 0047b537
    JMP 0x0047b253                      ; 0047b539
        ;   XREF to: 0047b253 (UNCONDITIONAL_JUMP)  ; LAB_0047b253
    PUSH 0xf                            ; 0047b53e
        ;   Label: LAB_0047b53e
    MOV EAX,[0x00617dd4]                ; 0047b540 | DAT_00617dd4
    PUSH EAX                            ; 0047b545 | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 0047b546 | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 0047b548
    ADD ESP,0x8                         ; 0047b54b
    TEST EAX,EAX                        ; 0047b54e
    JZ 0x0047b453                       ; 0047b550
        ;   XREF to: 0047b453 (CONDITIONAL_JUMP)  ; LAB_0047b453
    INC ESI                             ; 0047b556
    JMP 0x0047b453                      ; 0047b557
        ;   XREF to: 0047b453 (UNCONDITIONAL_JUMP)  ; LAB_0047b453
    TEST ESI,ESI                        ; 0047b55c
        ;   Label: LAB_0047b55c
    JGE 0x0047b486                      ; 0047b55e
        ;   XREF to: 0047b486 (CONDITIONAL_JUMP)  ; LAB_0047b486
    MOV ESI,EDI                         ; 0047b564
    JMP 0x0047b486                      ; 0047b566
        ;   XREF to: 0047b486 (UNCONDITIONAL_JUMP)  ; LAB_0047b486
    MOV ESI,ESP                         ; 0047b56b
        ;   Label: LAB_0047b56b
    MOV EDI,EBP                         ; 0047b56d
    MOV EBX,0x1                         ; 0047b56f
    PUSH EDI                            ; 0047b574
    MOV AL,byte ptr [ESI]               ; 0047b575
        ;   Label: LAB_0047b575
    MOV byte ptr [EDI],AL               ; 0047b577
    CMP AL,0x0                          ; 0047b579
    JZ 0x0047b58d                       ; 0047b57b
        ;   XREF to: 0047b58d (CONDITIONAL_JUMP)  ; LAB_0047b58d
    MOV AL,byte ptr [ESI + 0x1]         ; 0047b57d
    ADD ESI,0x2                         ; 0047b580
    MOV byte ptr [EDI + 0x1],AL         ; 0047b583
    ADD EDI,0x2                         ; 0047b586
    CMP AL,0x0                          ; 0047b589
    JNZ 0x0047b575                      ; 0047b58b
        ;   XREF to: 0047b575 (CONDITIONAL_JUMP)  ; LAB_0047b575
    POP EDI                             ; 0047b58d
        ;   Label: LAB_0047b58d
    JMP 0x0047b4bc                      ; 0047b58e
        ;   XREF to: 0047b4bc (UNCONDITIONAL_JUMP)  ; LAB_0047b4bc
    CMP EAX,0x8                         ; 0047b593
        ;   Label: LAB_0047b593
    JZ 0x0047b5d7                       ; 0047b596
        ;   XREF to: 0047b5d7 (CONDITIONAL_JUMP)  ; LAB_0047b5d7
    INC AL                              ; 0047b598
    AND EAX,0xff                        ; 0047b59a
    TEST byte ptr [EAX + 0x61ed94],0x8  ; 0047b59f | DAT_0061ed94
    JZ 0x0047b486                       ; 0047b5a6
        ;   XREF to: 0047b486 (CONDITIONAL_JUMP)  ; LAB_0047b486
    MOV EAX,ESP                         ; 0047b5ac
    PUSH EAX                            ; 0047b5ae
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80 ; 0047b5af
        ;   XREF to: 0047ab80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047b5b4
    PUSH 0x1                            ; 0047b5b7
    PUSH EBX                            ; 0047b5b9
    LEA EAX,[ESP + 0x8]                 ; 0047b5ba
    PUSH EAX                            ; 0047b5be
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0047aa80 ; 0047b5bf
        ;   XREF to: 0047aa80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0047aa80(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 0047b5c4
    MOV EAX,ESP                         ; 0047b5c7
    PUSH EAX                            ; 0047b5c9
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60 ; 0047b5ca
        ;   XREF to: 0047aa60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047b5cf
    JMP 0x0047b486                      ; 0047b5d2
        ;   XREF to: 0047b486 (UNCONDITIONAL_JUMP)  ; LAB_0047b486
    MOV EAX,ESP                         ; 0047b5d7
        ;   Label: LAB_0047b5d7
    PUSH EAX                            ; 0047b5d9
    CALL shape_edittool.cpp_CInputString_backspace_FUN_0047abd0 ; 0047b5da
        ;   XREF to: 0047abd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_backspace_FUN_0047abd0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047b5df
    JMP 0x0047b486                      ; 0047b5e2
        ;   XREF to: 0047b486 (UNCONDITIONAL_JUMP)  ; LAB_0047b486
    MOV EAX,ESP                         ; 0047b5e7
        ;   Label: LAB_0047b5e7
    PUSH EAX                            ; 0047b5e9
    CALL shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0 ; 0047b5ea
        ;   XREF to: 0047acc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047b5ef
    LEA EAX,[ESP + 0x224]               ; 0047b5f2
    PUSH EAX                            ; 0047b5f9
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240 ; 0047b5fa
        ;   XREF to: 00485240 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047b5ff
    TEST EAX,EAX                        ; 0047b602
    JNZ 0x0047b56b                      ; 0047b604
        ;   XREF to: 0047b56b (CONDITIONAL_JUMP)  ; LAB_0047b56b
    LEA EAX,[ESP + 0x224]               ; 0047b60a
    CMP EAX,dword ptr [0x01c26410]      ; 0047b611 | DAT_01c26410
    JNZ 0x0047b61b                      ; 0047b617
        ;   XREF to: 0047b61b (CONDITIONAL_JUMP)  ; LAB_0047b61b
    XOR ESI,ESI                         ; 0047b619
    LEA EAX,[ESP + 0x140]               ; 0047b61b
        ;   Label: LAB_0047b61b
    PUSH EAX                            ; 0047b622
    CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240 ; 0047b623
        ;   XREF to: 00485240 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0047b628
    TEST EAX,EAX                        ; 0047b62b
    JNZ 0x0047b64c                      ; 0047b62d
        ;   XREF to: 0047b64c (CONDITIONAL_JUMP)  ; LAB_0047b64c
    LEA EAX,[ESP + 0x140]               ; 0047b62f
    CMP EAX,dword ptr [0x01c26410]      ; 0047b636 | DAT_01c26410
    JNZ 0x0047b3b6                      ; 0047b63c
        ;   XREF to: 0047b3b6 (CONDITIONAL_JUMP)  ; LAB_0047b3b6
    MOV ESI,0x1                         ; 0047b642
    JMP 0x0047b3b6                      ; 0047b647
        ;   XREF to: 0047b3b6 (UNCONDITIONAL_JUMP)  ; LAB_0047b3b6
    XOR EBX,EBX                         ; 0047b64c
        ;   Label: LAB_0047b64c
    JMP 0x0047b4bc                      ; 0047b64e
        ;   XREF to: 0047b4bc (UNCONDITIONAL_JUMP)  ; LAB_0047b4bc

