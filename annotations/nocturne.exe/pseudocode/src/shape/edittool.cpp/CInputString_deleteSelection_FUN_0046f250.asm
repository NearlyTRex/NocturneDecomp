; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0 at 004712d1
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390 at 0046f477
;   shape_edittool.cpp_showTextInputDialog_FUN_0046f7e0 at 0046f9b9
;
; Called Functions:
;   shape_edittool.cpp_CInputString_deleteRange_FUN_0046f1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f250
        ;   Label: shape_edittool.cpp_CInputString_deleteSelection_FUN_0046f250
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046f251
    MOV EDX,dword ptr [EBX + 0x138]     ; 0046f255
    MOV EAX,dword ptr [EBX + 0x134]     ; 0046f25b
    CMP EAX,EDX                         ; 0046f261
    JG 0x0046f269                       ; 0046f263
        ;   XREF to: 0046f269 (CONDITIONAL_JUMP)  ; LAB_0046f269
    JL 0x0046f282                       ; 0046f265
        ;   XREF to: 0046f282 (CONDITIONAL_JUMP)  ; LAB_0046f282
    POP EBX                             ; 0046f267
    RET                                 ; 0046f268
    PUSH EAX                            ; 0046f269
        ;   Label: LAB_0046f269
    PUSH EDX                            ; 0046f26a
    PUSH EBX                            ; 0046f26b
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0046f1e0 ; 0046f26c
        ;   XREF to: 0046f1e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0046f1e0(CInputString * this_ptr, int start_pos, int end_pos)
    MOV EAX,dword ptr [EBX + 0x138]     ; 0046f271
    ADD ESP,0xc                         ; 0046f277
    MOV dword ptr [EBX + 0x134],EAX     ; 0046f27a
    POP EBX                             ; 0046f280
    RET                                 ; 0046f281
    PUSH EDX                            ; 0046f282
        ;   Label: LAB_0046f282
    PUSH EAX                            ; 0046f283
    PUSH EBX                            ; 0046f284
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0046f1e0 ; 0046f285
        ;   XREF to: 0046f1e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0046f1e0(CInputString * this_ptr, int start_pos, int end_pos)
    MOV EAX,dword ptr [EBX + 0x134]     ; 0046f28a
    ADD ESP,0xc                         ; 0046f290
    MOV dword ptr [EBX + 0x138],EAX     ; 0046f293
    POP EBX                             ; 0046f299
    RET                                 ; 0046f29a

