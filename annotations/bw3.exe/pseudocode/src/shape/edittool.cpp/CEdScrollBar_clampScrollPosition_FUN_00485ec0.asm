; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00 at 00485b09
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485ec0
        ;   Label: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00485ec1
    MOV ECX,dword ptr [EAX + 0x8]       ; 00485ec5
    MOV EDX,dword ptr [EAX + 0x4]       ; 00485ec8
    MOV EBX,dword ptr [EAX]             ; 00485ecb
    SUB EDX,ECX                         ; 00485ecd
    CMP EDX,EBX                         ; 00485ecf
    JL 0x00485eda                       ; 00485ed1
        ;   XREF to: 00485eda (CONDITIONAL_JUMP)  ; LAB_00485eda
    CMP dword ptr [EAX],0x0             ; 00485ed3
    JL 0x00485ee3                       ; 00485ed6
        ;   XREF to: 00485ee3 (CONDITIONAL_JUMP)  ; LAB_00485ee3
    POP EBX                             ; 00485ed8
    RET                                 ; 00485ed9
    MOV dword ptr [EAX],EDX             ; 00485eda
        ;   Label: LAB_00485eda
    CMP dword ptr [EAX],0x0             ; 00485edc
    JL 0x00485ee3                       ; 00485edf
        ;   XREF to: 00485ee3 (CONDITIONAL_JUMP)  ; LAB_00485ee3
    POP EBX                             ; 00485ee1
    RET                                 ; 00485ee2
    MOV dword ptr [EAX],0x0             ; 00485ee3
        ;   Label: LAB_00485ee3
    POP EBX                             ; 00485ee9
    RET                                 ; 00485eea

