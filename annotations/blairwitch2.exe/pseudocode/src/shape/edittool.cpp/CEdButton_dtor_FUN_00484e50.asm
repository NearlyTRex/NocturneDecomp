; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdButton * __cdecl shape_edittool_cpp_CEdButton_dtor_FUN_00484e50(CEdButton *this_ptr,uint flags)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   shape_edittool.cpp_CPickList_dtor_FUN_004820b0 at 004820d5
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047bacf
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b4e6
;
; Called Functions:
;   shape_edittool.cpp_FUN_00484e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484e50
        ;   Label: shape_edittool.cpp_CEdButton_dtor_FUN_00484e50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00484e51
    PUSH EBX                            ; 00484e55
    CALL shape_edittool.cpp_FUN_00484e70 ; 00484e56
        ;   XREF to: 00484e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00484e70(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 00484e5b
    MOV EAX,EBX                         ; 00484e5e
    POP EBX                             ; 00484e60
    RET                                 ; 00484e61

