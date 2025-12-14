; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0(CInputString * this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 004a0006
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049defa
;
; Called Functions:
;   shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d5d0
        ;   Label: shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049d5d1
    MOV EDX,dword ptr [EBX + 0x134]     ; 0049d5d5
    TEST EDX,EDX                        ; 0049d5db
    JG 0x0049d5ea                       ; 0049d5dd
        ;   XREF to: 0049d5ea (CONDITIONAL_JUMP)  ; LAB_0049d5ea
    PUSH EBX                            ; 0049d5df
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460 ; 0049d5e0
        ;   XREF to: 0049d460 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d5e5
    POP EBX                             ; 0049d5e8
    RET                                 ; 0049d5e9
    MOV EAX,EDX                         ; 0049d5ea
        ;   Label: LAB_0049d5ea
    PUSH EAX                            ; 0049d5ec
    DEC EDX                             ; 0049d5ed
    PUSH EDX                            ; 0049d5ee
    PUSH EBX                            ; 0049d5ef
    MOV dword ptr [EBX + 0x134],EDX     ; 0049d5f0
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510 ; 0049d5f6
        ;   XREF to: 0049d510 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510(CInputString * this_ptr, int start_pos, int end_pos)
    ADD ESP,0xc                         ; 0049d5fb
    PUSH EBX                            ; 0049d5fe
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460 ; 0049d5ff
        ;   XREF to: 0049d460 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d604
    POP EBX                             ; 0049d607
    RET                                 ; 0049d608

