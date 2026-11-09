; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_00499420(CStrList *this_ptr,CStrList *source_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   source_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_copy_FUN_004993f0 at 0049940f
;
; Called Functions:
;   shape_edittool.cpp_CStrList_add_FUN_004994d0
;   shape_edittool.cpp_CStrList_allocate_FUN_00499600
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00499420
        ;   Label: shape_edittool.cpp_CStrList_copyFrom_FUN_00499420
    PUSH EDI                            ; 00499421
    MOV EDI,dword ptr [ESP + 0xc]       ; 00499422
    MOV ESI,dword ptr [ESP + 0x10]      ; 00499426
    PUSH EDI                            ; 0049942a
    MOV EAX,dword ptr [EDI + 0xc]       ; 0049942b
    CALL dword ptr [EAX + 0x14]         ; 0049942e
    MOV EAX,dword ptr [ESI]             ; 00499431
    ADD ESP,0x4                         ; 00499433
    CMP EAX,0x1                         ; 00499436
    JGE 0x00499440                      ; 00499439
        ;   XREF to: 00499440 (CONDITIONAL_JUMP)  ; LAB_00499440
    MOV EAX,EDI                         ; 0049943b
    POP EDI                             ; 0049943d
    POP ESI                             ; 0049943e
    RET                                 ; 0049943f
    PUSH EBX                            ; 00499440
        ;   Label: LAB_00499440
    PUSH EAX                            ; 00499441
    PUSH EDI                            ; 00499442
    XOR EBX,EBX                         ; 00499443
    CALL shape_edittool.cpp_CStrList_allocate_FUN_00499600 ; 00499445
        ;   XREF to: 00499600 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_00499600(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 0049944a
        ;   Label: LAB_0049944a
    MOV EAX,dword ptr [ESI]             ; 0049944d
    CMP EBX,EAX                         ; 0049944f
    JGE 0x00499467                      ; 00499451
        ;   XREF to: 00499467 (CONDITIONAL_JUMP)  ; LAB_00499467
    PUSH EBX                            ; 00499453
    PUSH ESI                            ; 00499454
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 00499455
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0049945a
    PUSH EAX                            ; 0049945d
    PUSH EDI                            ; 0049945e
    INC EBX                             ; 0049945f
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00499460
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    JMP 0x0049944a                      ; 00499465
        ;   XREF to: 0049944a (UNCONDITIONAL_JUMP)  ; LAB_0049944a
    MOV EAX,EDI                         ; 00499467
        ;   Label: LAB_00499467
    POP EBX                             ; 00499469
    POP EDI                             ; 0049946a
    POP ESI                             ; 0049946b
    RET                                 ; 0049946c

