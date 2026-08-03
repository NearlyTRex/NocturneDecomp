; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0046f330(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390 at 0046f4d7
;
; Referenced Globals:
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   undefined4 DAT_005c168c
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_getClipboardText_FUN_00472c90
;   shape_edittool.cpp_CInputString_insertChar_FUN_0046f150
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f330
        ;   Label: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0046f330
    PUSH ESI                            ; 0046f331
    MOV ESI,dword ptr [ESP + 0xc]       ; 0046f332
    MOV EDX,dword ptr [0x005b6d50]      ; 0046f336 | g_CEditorTools_PTR_005b6d50
    PUSH EDX                            ; 0046f33c
    CALL shape_edittool.cpp_CEditorTools_getClipboardText_FUN_00472c90 ; 0046f33d
        ;   XREF to: 00472c90 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CEditorTools_getClipboardText_FUN_00472c90(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0046f342
    MOV EBX,EAX                         ; 0046f345
    XOR EAX,EAX                         ; 0046f347
        ;   Label: LAB_0046f347
    MOV AL,byte ptr [EBX]               ; 0046f349
    TEST EAX,EAX                        ; 0046f34b
    JLE 0x0046f37d                      ; 0046f34d
        ;   XREF to: 0046f37d (CONDITIONAL_JUMP)  ; LAB_0046f37d
    MOV DL,AL                           ; 0046f34f
    INC DL                              ; 0046f351
    AND EDX,0xff                        ; 0046f353
    TEST byte ptr [EDX + 0x5c168c],0x8  ; 0046f359 | DAT_005c168c
    JNZ 0x0046f365                      ; 0046f360
        ;   XREF to: 0046f365 (CONDITIONAL_JUMP)  ; LAB_0046f365
    INC EBX                             ; 0046f362
        ;   Label: LAB_0046f362
    JMP 0x0046f347                      ; 0046f363
        ;   XREF to: 0046f347 (UNCONDITIONAL_JUMP)  ; LAB_0046f347
    CMP EAX,0x9                         ; 0046f365
        ;   Label: LAB_0046f365
    JNZ 0x0046f36f                      ; 0046f368
        ;   XREF to: 0046f36f (CONDITIONAL_JUMP)  ; LAB_0046f36f
    MOV EAX,0x20                        ; 0046f36a
    PUSH 0x1                            ; 0046f36f
        ;   Label: LAB_0046f36f
    PUSH EAX                            ; 0046f371
    PUSH ESI                            ; 0046f372
    CALL shape_edittool.cpp_CInputString_insertChar_FUN_0046f150 ; 0046f373
        ;   XREF to: 0046f150 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_insertChar_FUN_0046f150(CInputString * this_ptr, char character, int advance_cursor)
    ADD ESP,0xc                         ; 0046f378
    JMP 0x0046f362                      ; 0046f37b
        ;   XREF to: 0046f362 (UNCONDITIONAL_JUMP)  ; LAB_0046f362
    PUSH ESI                            ; 0046f37d
        ;   Label: LAB_0046f37d
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130 ; 0046f37e
        ;   XREF to: 0046f130 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0046f383
    POP ESI                             ; 0046f386
    POP EBX                             ; 0046f387
    RET                                 ; 0046f388

