; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_setMini3DMode_FUN_00499360(CEditorTools *this_ptr,int enable)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable
;
; Referenced Globals:
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f544
;
; Called Functions:
;   engine_font.cpp_CBitFont_setAcceleration_FUN_004c0fa0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00499360
        ;   Label: shape_edittool.cpp_CEditorTools_setMini3DMode_FUN_00499360
    MOV EDX,dword ptr [0x01c3eb50]      ; 00499364 | DAT_01c3eb50
    MOV [0x01c3f544],EAX                ; 0049936a | DAT_01c3f544
    TEST EDX,EDX                        ; 0049936f
    JNZ 0x00499374                      ; 00499371
        ;   XREF to: 00499374 (CONDITIONAL_JUMP)  ; LAB_00499374
    RET                                 ; 00499373
    PUSH EAX                            ; 00499374
        ;   Label: LAB_00499374
    PUSH EDX                            ; 00499375
    CALL engine_font.cpp_CBitFont_setAcceleration_FUN_004c0fa0 ; 00499376
        ;   XREF to: 004c0fa0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setAcceleration_FUN_004c0fa0(CBitFont * this_ptr, int enable)
    ADD ESP,0x8                         ; 0049937b
    RET                                 ; 0049937e

