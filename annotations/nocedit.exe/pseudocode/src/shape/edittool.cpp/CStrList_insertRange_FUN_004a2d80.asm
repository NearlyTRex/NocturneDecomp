; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80(CStrList * this_ptr, int insertion_index, CStrList * source_list)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   insertion_index
; CStrList *       Stack[0xc]:4   source_list
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_appendRange_FUN_004a2ba0 at 004a2bad
;
; Called Functions:
;   shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2d80
        ;   Label: shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80
    PUSH ESI                            ; 004a2d81
    PUSH EDI                            ; 004a2d82
    PUSH EBP                            ; 004a2d83
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a2d84
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a2d88
    MOV EDX,dword ptr [EDI]             ; 004a2d8c
    MOV EAX,dword ptr [EAX]             ; 004a2d8e
    ADD EAX,EDX                         ; 004a2d90
    PUSH EAX                            ; 004a2d92
    PUSH EDI                            ; 004a2d93
    CALL shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0 ; 004a2d94
        ;   XREF to: 004a2cc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 004a2d99
    XOR EBX,EBX                         ; 004a2d9c
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a2d9e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a2da2
    MOV EAX,dword ptr [EAX]             ; 004a2da6
    CMP EBX,EAX                         ; 004a2da8
    JL 0x004a2db1                       ; 004a2daa
        ;   XREF to: 004a2db1 (CONDITIONAL_JUMP)  ; LAB_004a2db1
    POP EBP                             ; 004a2dac
    POP EDI                             ; 004a2dad
    POP ESI                             ; 004a2dae
    POP EBX                             ; 004a2daf
    RET                                 ; 004a2db0
    PUSH EBX                            ; 004a2db1
        ;   Label: LAB_004a2db1
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a2db2
    PUSH ECX                            ; 004a2db6
    MOV EBP,dword ptr [EDI + 0xc]       ; 004a2db7
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a2dba
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004a2dbf
    PUSH EAX                            ; 004a2dc2
    PUSH ESI                            ; 004a2dc3
    PUSH EDI                            ; 004a2dc4
    INC EBX                             ; 004a2dc5
    INC ESI                             ; 004a2dc6
    CALL dword ptr [EBP + 0xc]          ; 004a2dc7
    ADD ESP,0xc                         ; 004a2dca
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a2dcd
    MOV EAX,dword ptr [EAX]             ; 004a2dd1
    CMP EBX,EAX                         ; 004a2dd3
    JL 0x004a2db1                       ; 004a2dd5
        ;   XREF to: 004a2db1 (CONDITIONAL_JUMP)  ; LAB_004a2db1
    POP EBP                             ; 004a2dd7
    POP EDI                             ; 004a2dd8
    POP ESI                             ; 004a2dd9
    POP EBX                             ; 004a2dda
    RET                                 ; 004a2ddb

