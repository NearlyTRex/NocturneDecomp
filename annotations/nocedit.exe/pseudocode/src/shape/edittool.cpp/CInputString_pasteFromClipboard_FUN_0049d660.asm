; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0049d660(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 at 0049d807
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char[256] g_CharacterClassificationTable
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
;   shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d660
        ;   Label: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660
    PUSH ESI                            ; 0049d661
    MOV ESI,dword ptr [ESP + 0xc]       ; 0049d662
    MOV EDX,dword ptr [0x00678a60]      ; 0049d666 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0049d66c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30 ; 0049d66d
        ;   XREF to: 004a1b30 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049d672
    MOV EBX,EAX                         ; 0049d675
    XOR EAX,EAX                         ; 0049d677
        ;   Label: LAB_0049d677
    MOV AL,byte ptr [EBX]               ; 0049d679
    TEST EAX,EAX                        ; 0049d67b
    JLE 0x0049d6ad                      ; 0049d67d
        ;   XREF to: 0049d6ad (CONDITIONAL_JUMP)  ; LAB_0049d6ad
    MOV DL,AL                           ; 0049d67f
    INC DL                              ; 0049d681
    AND EDX,0xff                        ; 0049d683
    TEST byte ptr [EDX + 0x6849c4],0x8  ; 0049d689 | g_CharacterClassificationTable
    JNZ 0x0049d695                      ; 0049d690
        ;   XREF to: 0049d695 (CONDITIONAL_JUMP)  ; LAB_0049d695
    INC EBX                             ; 0049d692
        ;   Label: LAB_0049d692
    JMP 0x0049d677                      ; 0049d693
        ;   XREF to: 0049d677 (UNCONDITIONAL_JUMP)  ; LAB_0049d677
    CMP EAX,0x9                         ; 0049d695
        ;   Label: LAB_0049d695
    JNZ 0x0049d69f                      ; 0049d698
        ;   XREF to: 0049d69f (CONDITIONAL_JUMP)  ; LAB_0049d69f
    MOV EAX,0x20                        ; 0049d69a
    PUSH 0x1                            ; 0049d69f
        ;   Label: LAB_0049d69f
    PUSH EAX                            ; 0049d6a1
    PUSH ESI                            ; 0049d6a2
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0049d480 ; 0049d6a3
        ;   XREF to: 0049d480 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0049d480(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 0049d6a8
    JMP 0x0049d692                      ; 0049d6ab
        ;   XREF to: 0049d692 (UNCONDITIONAL_JUMP)  ; LAB_0049d692
    PUSH ESI                            ; 0049d6ad
        ;   Label: LAB_0049d6ad
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460 ; 0049d6ae
        ;   XREF to: 0049d460 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d6b3
    POP ESI                             ; 0049d6b6
    POP EBX                             ; 0049d6b7
    RET                                 ; 0049d6b8

