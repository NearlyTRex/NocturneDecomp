; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   min_width
; int              Stack[0xc]:4   min_height
; char *           Stack[0x10]:4   text_content
; uint             Stack[0x14]:4   window_flags
;
; XREF[9]:
;   core_menu.cpp_FUN_004eba50 at 004eba88
;   core_menu.cpp_FUN_004ebf10 at 004ec98e
;   core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0 at 004eb7f8
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40 at 0047dbc4
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047d270 at 0047d300
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00 at 00482f06
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c335
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047b905
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b2c5
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047e2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e1d0
        ;   Label: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
    PUSH ESI                            ; 0047e1d1
    PUSH EDI                            ; 0047e1d2
    PUSH EBP                            ; 0047e1d3
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047e1d4
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047e1d8
    CMP dword ptr [0x01c25590],0x0      ; 0047e1dc | DAT_01c25590
    JNZ 0x0047e208                      ; 0047e1e3
        ;   XREF to: 0047e208 (CONDITIONAL_JUMP)  ; LAB_0047e208
    MOV ECX,0x5d1e6f                    ; 0047e1e5 | = "..\\shape\\edittool.cpp"
    MOV EBX,0xa0                        ; 0047e1ea
    PUSH 0x5d1e85                       ; 0047e1ef | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0047e1f4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047e1fa | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047e200
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047e205
    MOV EAX,[0x01c25590]                ; 0047e208 | DAT_01c25590
        ;   Label: LAB_0047e208
    PUSH 0x6a                           ; 0047e20d
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047e20f
    PUSH EAX                            ; 0047e215
    MOV dword ptr [0x01c25f78],EDX      ; 0047e216 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047e21c
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047e221
    MOV [0x01c25f7c],EAX                ; 0047e224 | DAT_01c25f7c
    TEST ESI,ESI                        ; 0047e229
    JNZ 0x0047e281                      ; 0047e22b
        ;   XREF to: 0047e281 (CONDITIONAL_JUMP)  ; LAB_0047e281
    MOV EDX,dword ptr [0x006141b8]      ; 0047e22d | DAT_006141b8
        ;   Label: LAB_0047e22d
    SUB EDX,EDI                         ; 0047e233
    MOV EAX,EDX                         ; 0047e235
    SAR EDX,0x1f                        ; 0047e237
    SUB EAX,EDX                         ; 0047e23a
    SAR EAX,0x1                         ; 0047e23c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047e23e
    MOV EDX,dword ptr [0x006141bc]      ; 0047e242 | DAT_006141bc
    SUB EDX,EDI                         ; 0047e248
    MOV ECX,EAX                         ; 0047e24a
    MOV EAX,EDX                         ; 0047e24c
    SAR EDX,0x1f                        ; 0047e24e
    SUB EAX,EDX                         ; 0047e251
    SAR EAX,0x1                         ; 0047e253
    MOV EBP,dword ptr [ESP + 0x24]      ; 0047e255
    PUSH EBP                            ; 0047e259
    MOV EBX,dword ptr [0x006141bc]      ; 0047e25a | DAT_006141bc
    PUSH ESI                            ; 0047e260
    SUB EBX,EAX                         ; 0047e261
    MOV EDX,dword ptr [0x006141b8]      ; 0047e263 | DAT_006141b8
    PUSH EBX                            ; 0047e269
    SUB EDX,ECX                         ; 0047e26a
    PUSH EDX                            ; 0047e26c
    PUSH EAX                            ; 0047e26d
    PUSH ECX                            ; 0047e26e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0047e26f
    PUSH EAX                            ; 0047e273
    CALL shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047e2b0 ; 0047e274
        ;   XREF to: 0047e2b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createModalWindow_FUN_0047e2b0(CEditorTools * this_ptr, int left, int top, int right, ...)
    ADD ESP,0x1c                        ; 0047e279
    POP EBP                             ; 0047e27c
    POP EDI                             ; 0047e27d
    POP ESI                             ; 0047e27e
    POP EBX                             ; 0047e27f
    RET                                 ; 0047e280
    MOV EAX,[0x01c25590]                ; 0047e281 | DAT_01c25590
        ;   Label: LAB_0047e281
    PUSH ESI                            ; 0047e286
    MOV EDX,dword ptr [EAX + 0x3668]    ; 0047e287
    PUSH EAX                            ; 0047e28d
    LEA EBX,[EDX + EDX*0x1]             ; 0047e28e
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 0047e291
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD EAX,EBX                         ; 0047e296
    ADD ESP,0x8                         ; 0047e298
    CMP EDI,EAX                         ; 0047e29b
    JGE 0x0047e22d                      ; 0047e29d
        ;   XREF to: 0047e22d (CONDITIONAL_JUMP)  ; LAB_0047e22d
    MOV EDI,EAX                         ; 0047e29f
    JMP 0x0047e22d                      ; 0047e2a1
        ;   XREF to: 0047e22d (UNCONDITIONAL_JUMP)  ; LAB_0047e22d

