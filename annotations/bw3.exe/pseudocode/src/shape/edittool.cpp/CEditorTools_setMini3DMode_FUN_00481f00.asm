; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_setMini3DMode_FUN_00481f00(CEditorTools *this_ptr,int enable)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable
;
; Referenced Globals:
;   CBitFont* g_CBitFont_PTR_01c5b0e0
;   int g_INT_01c5baec
;
; Called Functions:
;   engine_font.cpp_CBitFont_setAcceleration_FUN_004afbf0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00481f00
        ;   Label: shape_edittool.cpp_CEditorTools_setMini3DMode_FUN_00481f00
    MOV EDX,dword ptr [0x01c5b0e0]      ; 00481f04 | g_CBitFont_PTR_01c5b0e0
    MOV [0x01c5baec],EAX                ; 00481f0a | g_INT_01c5baec
    TEST EDX,EDX                        ; 00481f0f
    JNZ 0x00481f14                      ; 00481f11
        ;   XREF to: 00481f14 (CONDITIONAL_JUMP)  ; LAB_00481f14
    RET                                 ; 00481f13
    PUSH EAX                            ; 00481f14
        ;   Label: LAB_00481f14
    PUSH EDX                            ; 00481f15
    CALL engine_font.cpp_CBitFont_setAcceleration_FUN_004afbf0 ; 00481f16
        ;   XREF to: 004afbf0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setAcceleration_FUN_004afbf0(CBitFont * this_ptr, int enable)
    ADD ESP,0x8                         ; 00481f1b
    RET                                 ; 00481f1e

