; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(CEdScrollBar * this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0 at 004a63ec
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 at 004a6084
;   shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420 at 004a643e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6380
        ;   Label: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a6381
    MOV ECX,dword ptr [EAX + 0x8]       ; 004a6385
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a6388
    MOV EBX,dword ptr [EAX]             ; 004a638b
    SUB EDX,ECX                         ; 004a638d
    CMP EDX,EBX                         ; 004a638f
    JL 0x004a639a                       ; 004a6391 | LAB_004a639a
        ;   XREF to: 004a639a (CONDITIONAL_JUMP)
    CMP dword ptr [EAX],0x0             ; 004a6393
    JL 0x004a63a3                       ; 004a6396 | LAB_004a63a3
        ;   XREF to: 004a63a3 (CONDITIONAL_JUMP)
    POP EBX                             ; 004a6398
    RET                                 ; 004a6399
    MOV dword ptr [EAX],EDX             ; 004a639a
        ;   Label: LAB_004a639a
    CMP dword ptr [EAX],0x0             ; 004a639c
    JL 0x004a63a3                       ; 004a639f | LAB_004a63a3
        ;   XREF to: 004a63a3 (CONDITIONAL_JUMP)
    POP EBX                             ; 004a63a1
    RET                                 ; 004a63a2
    MOV dword ptr [EAX],0x0             ; 004a63a3
        ;   Label: LAB_004a63a3
    POP EBX                             ; 004a63a9
    RET                                 ; 004a63aa

