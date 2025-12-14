; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 0049ff91
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 at 0049d825
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049decf
;
; Called Functions:
;   shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d580
        ;   Label: shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049d581
    MOV EDX,dword ptr [EBX + 0x138]     ; 0049d585
    MOV EAX,dword ptr [EBX + 0x134]     ; 0049d58b
    CMP EAX,EDX                         ; 0049d591
    JG 0x0049d599                       ; 0049d593
        ;   XREF to: 0049d599 (CONDITIONAL_JUMP)  ; LAB_0049d599
    JL 0x0049d5b2                       ; 0049d595
        ;   XREF to: 0049d5b2 (CONDITIONAL_JUMP)  ; LAB_0049d5b2
    POP EBX                             ; 0049d597
    RET                                 ; 0049d598
    PUSH EAX                            ; 0049d599
        ;   Label: LAB_0049d599
    PUSH EDX                            ; 0049d59a
    PUSH EBX                            ; 0049d59b
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510 ; 0049d59c
        ;   XREF to: 0049d510 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510(CInputString * this_ptr, int start_pos, int end_pos)
    MOV EAX,dword ptr [EBX + 0x138]     ; 0049d5a1
    ADD ESP,0xc                         ; 0049d5a7
    MOV dword ptr [EBX + 0x134],EAX     ; 0049d5aa
    POP EBX                             ; 0049d5b0
    RET                                 ; 0049d5b1
    PUSH EDX                            ; 0049d5b2
        ;   Label: LAB_0049d5b2
    PUSH EAX                            ; 0049d5b3
    PUSH EBX                            ; 0049d5b4
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510 ; 0049d5b5
        ;   XREF to: 0049d510 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510(CInputString * this_ptr, int start_pos, int end_pos)
    MOV EAX,dword ptr [EBX + 0x134]     ; 0049d5ba
    ADD ESP,0xc                         ; 0049d5c0
    MOV dword ptr [EBX + 0x138],EAX     ; 0049d5c3
    POP EBX                             ; 0049d5c9
    RET                                 ; 0049d5ca

