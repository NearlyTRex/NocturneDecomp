; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   min_width
; int              Stack[0xc]:4   min_height
; char *           Stack[0x10]:4   text_content
; uint             Stack[0x14]:4   window_flags
;
; XREF[8]:
;   core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0 at 004e8128
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50 at 0047edd4
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470 at 0047e500
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00483c00 at 00484106
;   shape_edittool.cpp_FUN_0047d19e at 0047d1ef
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047c9e5
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 at 0047d47e
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c395
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047f4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f3e0
        ;   Label: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
    PUSH ESI                            ; 0047f3e1
    PUSH EDI                            ; 0047f3e2
    PUSH EBP                            ; 0047f3e3
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047f3e4
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047f3e8
    CMP dword ptr [0x01c5b0e0],0x0      ; 0047f3ec | DAT_01c5b0e0
    JNZ 0x0047f418                      ; 0047f3f3
        ;   XREF to: 0047f418 (CONDITIONAL_JUMP)  ; LAB_0047f418
    MOV ECX,0x5bcd25                    ; 0047f3f5 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa7                        ; 0047f3fa
    PUSH 0x5bcd3b                       ; 0047f3ff | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0047f404 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047f40a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047f410
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047f415
    MOV EAX,[0x01c5b0e0]                ; 0047f418 | DAT_01c5b0e0
        ;   Label: LAB_0047f418
    PUSH 0x6a                           ; 0047f41d
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047f41f
    PUSH EAX                            ; 0047f425
    MOV dword ptr [0x01c5bae0],EDX      ; 0047f426 | DAT_01c5bae0
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 0047f42c
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047f431
    MOV [0x01c5bae4],EAX                ; 0047f434 | DAT_01c5bae4
    TEST ESI,ESI                        ; 0047f439
    JNZ 0x0047f491                      ; 0047f43b
        ;   XREF to: 0047f491 (CONDITIONAL_JUMP)  ; LAB_0047f491
    MOV EDX,dword ptr [0x005fba18]      ; 0047f43d | DAT_005fba18
        ;   Label: LAB_0047f43d
    SUB EDX,EDI                         ; 0047f443
    MOV EAX,EDX                         ; 0047f445
    SAR EDX,0x1f                        ; 0047f447
    SUB EAX,EDX                         ; 0047f44a
    SAR EAX,0x1                         ; 0047f44c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047f44e
    MOV EDX,dword ptr [0x005fba1c]      ; 0047f452 | DAT_005fba1c
    SUB EDX,EDI                         ; 0047f458
    MOV ECX,EAX                         ; 0047f45a
    MOV EAX,EDX                         ; 0047f45c
    SAR EDX,0x1f                        ; 0047f45e
    SUB EAX,EDX                         ; 0047f461
    SAR EAX,0x1                         ; 0047f463
    MOV EBP,dword ptr [ESP + 0x24]      ; 0047f465
    PUSH EBP                            ; 0047f469
    MOV EBX,dword ptr [0x005fba1c]      ; 0047f46a | DAT_005fba1c
    PUSH ESI                            ; 0047f470
    SUB EBX,EAX                         ; 0047f471
    MOV EDX,dword ptr [0x005fba18]      ; 0047f473 | DAT_005fba18
    PUSH EBX                            ; 0047f479
    SUB EDX,ECX                         ; 0047f47a
    PUSH EDX                            ; 0047f47c
    PUSH EAX                            ; 0047f47d
    PUSH ECX                            ; 0047f47e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047f47f
    PUSH EAX                            ; 0047f483
    CALL shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047f4c0 ; 0047f484
        ;   XREF to: 0047f4c0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047f4c0(CEditorTools * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x1c                        ; 0047f489
    POP EBP                             ; 0047f48c
    POP EDI                             ; 0047f48d
    POP ESI                             ; 0047f48e
    POP EBX                             ; 0047f48f
    RET                                 ; 0047f490
    MOV EAX,[0x01c5b0e0]                ; 0047f491 | DAT_01c5b0e0
        ;   Label: LAB_0047f491
    PUSH ESI                            ; 0047f496
    MOV EDX,dword ptr [EAX + 0x3668]    ; 0047f497
    PUSH EAX                            ; 0047f49d
    LEA EBX,[EDX + EDX*0x1]             ; 0047f49e
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 0047f4a1
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD EAX,EBX                         ; 0047f4a6
    ADD ESP,0x8                         ; 0047f4a8
    CMP EDI,EAX                         ; 0047f4ab
    JGE 0x0047f43d                      ; 0047f4ad
        ;   XREF to: 0047f43d (CONDITIONAL_JUMP)  ; LAB_0047f43d
    MOV EDI,EAX                         ; 0047f4af
    JMP 0x0047f43d                      ; 0047f4b1
        ;   XREF to: 0047f43d (UNCONDITIONAL_JUMP)  ; LAB_0047f43d

