; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdButton * __cdecl shape_edittool_cpp_CEdButton_dtor_FUN_0049d4b0(CEdButton *this_ptr,uint flags)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   shape_edittool.cpp_CPickList_dtor_FUN_0049a710 at 0049a735
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 0049401b
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 00493a22
;
; Called Functions:
;   shape_edittool.cpp_FUN_0049d4d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d4b0
        ;   Label: shape_edittool.cpp_CEdButton_dtor_FUN_0049d4b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049d4b1
    PUSH EBX                            ; 0049d4b5
    CALL shape_edittool.cpp_FUN_0049d4d0 ; 0049d4b6
        ;   XREF to: 0049d4d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0049d4d0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 0049d4bb
    MOV EAX,EBX                         ; 0049d4be
    POP EBX                             ; 0049d4c0
    RET                                 ; 0049d4c1

