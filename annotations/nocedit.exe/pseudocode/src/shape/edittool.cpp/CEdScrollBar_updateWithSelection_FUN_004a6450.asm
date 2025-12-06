; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450(CEdScrollBar * this_ptr, int * selection_index_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   selection_index_ptr
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
;   shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
;   shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6450
        ;   Label: shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450
    PUSH ESI                            ; 004a6451
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a6452
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a6456
    PUSH ESI                            ; 004a645a
    PUSH EBX                            ; 004a645b
    CALL shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0 ; 004a645c | void shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0(CEdScrollBar * this_ptr, int * value_ptr)
        ;   XREF to: 004a63b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a6461
    MOV EDX,dword ptr [ESI]             ; 004a6464
    PUSH EDX                            ; 004a6466
    PUSH EBX                            ; 004a6467
    CALL shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420 ; 004a6468 | void shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420(CEdScrollBar * this_ptr, int target_index)
        ;   XREF to: 004a6420 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a646d
    PUSH EBX                            ; 004a6470
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 004a6471 | void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a6476
    PUSH ESI                            ; 004a6479
    PUSH EBX                            ; 004a647a
    CALL shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0 ; 004a647b | void shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0(CEdScrollBar * this_ptr, int * value_ptr)
        ;   XREF to: 004a63e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a6480
    POP ESI                             ; 004a6483
    POP EBX                             ; 004a6484
    RET                                 ; 004a6485

