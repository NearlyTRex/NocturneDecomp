; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0(CEdScrollBar * this_ptr, int * value_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   value_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 at 004a647b
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a63e0
        ;   Label: shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0
    PUSH ESI                            ; 004a63e1
    PUSH EDI                            ; 004a63e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a63e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a63e7
    PUSH EBX                            ; 004a63eb
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380 ; 004a63ec
        ;   XREF to: 004a6380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(CEdScrollBar * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 004a63f1
    MOV EDX,dword ptr [EBX + 0x8]       ; 004a63f3
    MOV ECX,dword ptr [ESI]             ; 004a63f6
    ADD EAX,EDX                         ; 004a63f8
    ADD ESP,0x4                         ; 004a63fa
    CMP EAX,ECX                         ; 004a63fd
    JLE 0x004a640b                      ; 004a63ff
        ;   XREF to: 004a640b (CONDITIONAL_JUMP)  ; LAB_004a640b
    MOV EDI,dword ptr [EBX]             ; 004a6401
    CMP EDI,dword ptr [ESI]             ; 004a6403
    JG 0x004a6418                       ; 004a6405
        ;   XREF to: 004a6418 (CONDITIONAL_JUMP)  ; LAB_004a6418
    POP EDI                             ; 004a6407
    POP ESI                             ; 004a6408
    POP EBX                             ; 004a6409
    RET                                 ; 004a640a
    DEC EAX                             ; 004a640b
        ;   Label: LAB_004a640b
    MOV dword ptr [ESI],EAX             ; 004a640c
    MOV EDI,dword ptr [EBX]             ; 004a640e
    CMP EDI,dword ptr [ESI]             ; 004a6410
    JG 0x004a6418                       ; 004a6412
        ;   XREF to: 004a6418 (CONDITIONAL_JUMP)  ; LAB_004a6418
    POP EDI                             ; 004a6414
    POP ESI                             ; 004a6415
    POP EBX                             ; 004a6416
    RET                                 ; 004a6417
    MOV dword ptr [ESI],EDI             ; 004a6418
        ;   Label: LAB_004a6418
    POP EDI                             ; 004a641a
    POP ESI                             ; 004a641b
    POP EBX                             ; 004a641c
    RET                                 ; 004a641d

