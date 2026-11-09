; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50 at 0047be37
;   shape_edittool.cpp_FUN_0047e470 at 0047e8b8
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c692
;
; Called Functions:
;   shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bc10
        ;   Label: shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047bc11
    MOV EDX,dword ptr [EBX + 0x138]     ; 0047bc15
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047bc1b
    CMP EAX,EDX                         ; 0047bc21
    JG 0x0047bc29                       ; 0047bc23
        ;   XREF to: 0047bc29 (CONDITIONAL_JUMP)  ; LAB_0047bc29
    JL 0x0047bc42                       ; 0047bc25
        ;   XREF to: 0047bc42 (CONDITIONAL_JUMP)  ; LAB_0047bc42
    POP EBX                             ; 0047bc27
    RET                                 ; 0047bc28
    PUSH EAX                            ; 0047bc29
        ;   Label: LAB_0047bc29
    PUSH EDX                            ; 0047bc2a
    PUSH EBX                            ; 0047bc2b
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0 ; 0047bc2c
        ;   XREF to: 0047bba0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0(CInputString * this_ptr, int start_pos, int end_pos)
    MOV EAX,dword ptr [EBX + 0x138]     ; 0047bc31
    ADD ESP,0xc                         ; 0047bc37
    MOV dword ptr [EBX + 0x134],EAX     ; 0047bc3a
    POP EBX                             ; 0047bc40
    RET                                 ; 0047bc41
    PUSH EDX                            ; 0047bc42
        ;   Label: LAB_0047bc42
    PUSH EAX                            ; 0047bc43
    PUSH EBX                            ; 0047bc44
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0 ; 0047bc45
        ;   XREF to: 0047bba0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0(CInputString * this_ptr, int start_pos, int end_pos)
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047bc4a
    ADD ESP,0xc                         ; 0047bc50
    MOV dword ptr [EBX + 0x138],EAX     ; 0047bc53
    POP EBX                             ; 0047bc59
    RET                                 ; 0047bc5a

