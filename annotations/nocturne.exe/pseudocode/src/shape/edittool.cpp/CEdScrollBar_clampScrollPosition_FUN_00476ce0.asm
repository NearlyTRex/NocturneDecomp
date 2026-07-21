; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0(int *param_1)
;
;
; XREF[1]:
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920 at 00476929
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476ce0
        ;   Label: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476ce1
    MOV ECX,dword ptr [EAX + 0x8]       ; 00476ce5
    MOV EDX,dword ptr [EAX + 0x4]       ; 00476ce8
    MOV EBX,dword ptr [EAX]             ; 00476ceb
    SUB EDX,ECX                         ; 00476ced
    CMP EDX,EBX                         ; 00476cef
    JL 0x00476cfa                       ; 00476cf1
        ;   XREF to: 00476cfa (CONDITIONAL_JUMP)  ; LAB_00476cfa
    CMP dword ptr [EAX],0x0             ; 00476cf3
    JL 0x00476d03                       ; 00476cf6
        ;   XREF to: 00476d03 (CONDITIONAL_JUMP)  ; LAB_00476d03
    POP EBX                             ; 00476cf8
    RET                                 ; 00476cf9
    MOV dword ptr [EAX],EDX             ; 00476cfa
        ;   Label: LAB_00476cfa
    CMP dword ptr [EAX],0x0             ; 00476cfc
    JL 0x00476d03                       ; 00476cff
        ;   XREF to: 00476d03 (CONDITIONAL_JUMP)  ; LAB_00476d03
    POP EBX                             ; 00476d01
    RET                                 ; 00476d02
    MOV dword ptr [EAX],0x0             ; 00476d03
        ;   Label: LAB_00476d03
    POP EBX                             ; 00476d09
    RET                                 ; 00476d0a

