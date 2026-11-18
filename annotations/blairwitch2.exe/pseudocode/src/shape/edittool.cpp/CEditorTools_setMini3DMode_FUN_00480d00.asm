; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_setMini3DMode_FUN_00480d00(CEditorTools *this_ptr,int enable)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable
;
; Referenced Globals:
;   CBitFont* g_EditorFont
;   int g_INT_01c25f84
;
; Called Functions:
;   engine_font.cpp_CBitFont_setAcceleration_FUN_004a7fd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00480d00
        ;   Label: shape_edittool.cpp_CEditorTools_setMini3DMode_FUN_00480d00
    MOV EDX,dword ptr [0x01c25590]      ; 00480d04 | g_EditorFont
    MOV [0x01c25f84],EAX                ; 00480d0a | g_INT_01c25f84
    TEST EDX,EDX                        ; 00480d0f
    JNZ 0x00480d14                      ; 00480d11
        ;   XREF to: 00480d14 (CONDITIONAL_JUMP)  ; LAB_00480d14
    RET                                 ; 00480d13
    PUSH EAX                            ; 00480d14
        ;   Label: LAB_00480d14
    PUSH EDX                            ; 00480d15
    CALL engine_font.cpp_CBitFont_setAcceleration_FUN_004a7fd0 ; 00480d16
        ;   XREF to: 004a7fd0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setAcceleration_FUN_004a7fd0(CBitFont * this_ptr, int enable)
    ADD ESP,0x8                         ; 00480d1b
    RET                                 ; 00480d1e

