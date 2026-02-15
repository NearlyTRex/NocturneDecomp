; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420(CEdScrollBar *this_ptr,int target_index)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   target_index
;
; XREF[1]:
;   shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 at 004a6468
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6420
        ;   Label: shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420
    PUSH ESI                            ; 004a6421
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a6422
    MOV ECX,dword ptr [ESP + 0x10]      ; 004a6426
    MOV EDX,ECX                         ; 004a642a
    MOV EBX,dword ptr [EAX + 0x8]       ; 004a642c
    MOV ESI,dword ptr [EAX]             ; 004a642f
    SUB EDX,EBX                         ; 004a6431
    CMP EDX,ESI                         ; 004a6433
    JGE 0x004a6449                      ; 004a6435
        ;   XREF to: 004a6449 (CONDITIONAL_JUMP)  ; LAB_004a6449
    CMP ECX,dword ptr [EAX]             ; 004a6437
        ;   Label: LAB_004a6437
    JGE 0x004a643d                      ; 004a6439
        ;   XREF to: 004a643d (CONDITIONAL_JUMP)  ; LAB_004a643d
    MOV dword ptr [EAX],ECX             ; 004a643b
    PUSH EAX                            ; 004a643d
        ;   Label: LAB_004a643d
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380 ; 004a643e
        ;   XREF to: 004a6380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004a6443
    POP ESI                             ; 004a6446
    POP EBX                             ; 004a6447
    RET                                 ; 004a6448
    INC EDX                             ; 004a6449
        ;   Label: LAB_004a6449
    MOV dword ptr [EAX],EDX             ; 004a644a
    JMP 0x004a6437                      ; 004a644c
        ;   XREF to: 004a6437 (UNCONDITIONAL_JUMP)  ; LAB_004a6437

