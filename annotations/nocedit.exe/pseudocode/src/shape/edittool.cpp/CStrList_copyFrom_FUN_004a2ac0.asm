; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CStrList * shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0(CStrList * dest_ptr, CStrList * source_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   dest_ptr
; CStrList *       Stack[0x8]:4   source_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_copy_FUN_004a2a90 at 004a2aaf
;
; Called Functions:
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a2ac0
        ;   Label: shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0
    PUSH EDI                            ; 004a2ac1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004a2ac2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a2ac6
    PUSH EDI                            ; 004a2aca
    MOV EAX,dword ptr [EDI + 0xc]       ; 004a2acb
    CALL dword ptr [EAX + 0x14]         ; 004a2ace
    MOV EAX,dword ptr [ESI]             ; 004a2ad1
    ADD ESP,0x4                         ; 004a2ad3
    CMP EAX,0x1                         ; 004a2ad6
    JGE 0x004a2ae0                      ; 004a2ad9 | LAB_004a2ae0
        ;   XREF to: 004a2ae0 (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 004a2adb
    POP EDI                             ; 004a2add
    POP ESI                             ; 004a2ade
    RET                                 ; 004a2adf
    PUSH EBX                            ; 004a2ae0
        ;   Label: LAB_004a2ae0
    PUSH EAX                            ; 004a2ae1
    PUSH EDI                            ; 004a2ae2
    XOR EBX,EBX                         ; 004a2ae3
    CALL shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0 ; 004a2ae5 | void shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0(CStrList * this_ptr, int new_capacity)
        ;   XREF to: 004a2cc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a2aea
        ;   Label: LAB_004a2aea
    MOV EAX,dword ptr [ESI]             ; 004a2aed
    CMP EBX,EAX                         ; 004a2aef
    JGE 0x004a2b07                      ; 004a2af1 | LAB_004a2b07
        ;   XREF to: 004a2b07 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004a2af3
    PUSH ESI                            ; 004a2af4
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a2af5 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a2afa
    PUSH EAX                            ; 004a2afd
    PUSH EDI                            ; 004a2afe
    INC EBX                             ; 004a2aff
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004a2b00 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    JMP 0x004a2aea                      ; 004a2b05 | LAB_004a2aea
        ;   XREF to: 004a2aea (UNCONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 004a2b07
        ;   Label: LAB_004a2b07
    POP EBX                             ; 004a2b09
    POP EDI                             ; 004a2b0a
    POP ESI                             ; 004a2b0b
    RET                                 ; 004a2b0c

