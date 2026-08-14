; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_00473c00(CStrList *this_ptr,CStrList *source_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   source_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_copy_FUN_00473bd0 at 00473bef
;
; Called Functions:
;   shape_edittool.cpp_CStrList_add_FUN_00473cb0
;   shape_edittool.cpp_CStrList_allocate_FUN_00473de0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00473c00
        ;   Label: shape_edittool.cpp_CStrList_copyFrom_FUN_00473c00
    PUSH EDI                            ; 00473c01
    MOV EDI,dword ptr [ESP + 0xc]       ; 00473c02
    MOV ESI,dword ptr [ESP + 0x10]      ; 00473c06
    PUSH EDI                            ; 00473c0a
    MOV EAX,dword ptr [EDI + 0xc]       ; 00473c0b
    CALL dword ptr [EAX + 0x14]         ; 00473c0e
    MOV EAX,dword ptr [ESI]             ; 00473c11
    ADD ESP,0x4                         ; 00473c13
    CMP EAX,0x1                         ; 00473c16
    JGE 0x00473c20                      ; 00473c19
        ;   XREF to: 00473c20 (CONDITIONAL_JUMP)  ; LAB_00473c20
    MOV EAX,EDI                         ; 00473c1b
    POP EDI                             ; 00473c1d
    POP ESI                             ; 00473c1e
    RET                                 ; 00473c1f
    PUSH EBX                            ; 00473c20
        ;   Label: LAB_00473c20
    PUSH EAX                            ; 00473c21
    PUSH EDI                            ; 00473c22
    XOR EBX,EBX                         ; 00473c23
    CALL shape_edittool.cpp_CStrList_allocate_FUN_00473de0 ; 00473c25
        ;   XREF to: 00473de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_00473de0(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 00473c2a
        ;   Label: LAB_00473c2a
    MOV EAX,dword ptr [ESI]             ; 00473c2d
    CMP EBX,EAX                         ; 00473c2f
    JGE 0x00473c47                      ; 00473c31
        ;   XREF to: 00473c47 (CONDITIONAL_JUMP)  ; LAB_00473c47
    PUSH EBX                            ; 00473c33
    PUSH ESI                            ; 00473c34
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 00473c35
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00474080(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00473c3a
    PUSH EAX                            ; 00473c3d
    PUSH EDI                            ; 00473c3e
    INC EBX                             ; 00473c3f
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00473c40
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    JMP 0x00473c2a                      ; 00473c45
        ;   XREF to: 00473c2a (UNCONDITIONAL_JUMP)  ; LAB_00473c2a
    MOV EAX,EDI                         ; 00473c47
        ;   Label: LAB_00473c47
    POP EBX                             ; 00473c49
    POP EDI                             ; 00473c4a
    POP ESI                             ; 00473c4b
    RET                                 ; 00473c4c

