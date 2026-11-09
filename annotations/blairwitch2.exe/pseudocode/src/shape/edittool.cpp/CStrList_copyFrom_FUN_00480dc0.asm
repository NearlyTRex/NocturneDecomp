; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_00480dc0(CStrList *this_ptr,CStrList *source_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   source_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_copy_FUN_00480d90 at 00480daf
;
; Called Functions:
;   shape_edittool.cpp_CStrList_add_FUN_00480e70
;   shape_edittool.cpp_CStrList_allocate_FUN_00480fa0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00480dc0
        ;   Label: shape_edittool.cpp_CStrList_copyFrom_FUN_00480dc0
    PUSH EDI                            ; 00480dc1
    MOV EDI,dword ptr [ESP + 0xc]       ; 00480dc2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00480dc6
    PUSH EDI                            ; 00480dca
    MOV EAX,dword ptr [EDI + 0xc]       ; 00480dcb
    CALL dword ptr [EAX + 0x14]         ; 00480dce
    MOV EAX,dword ptr [ESI]             ; 00480dd1
    ADD ESP,0x4                         ; 00480dd3
    CMP EAX,0x1                         ; 00480dd6
    JGE 0x00480de0                      ; 00480dd9
        ;   XREF to: 00480de0 (CONDITIONAL_JUMP)  ; LAB_00480de0
    MOV EAX,EDI                         ; 00480ddb
    POP EDI                             ; 00480ddd
    POP ESI                             ; 00480dde
    RET                                 ; 00480ddf
    PUSH EBX                            ; 00480de0
        ;   Label: LAB_00480de0
    PUSH EAX                            ; 00480de1
    PUSH EDI                            ; 00480de2
    XOR EBX,EBX                         ; 00480de3
    CALL shape_edittool.cpp_CStrList_allocate_FUN_00480fa0 ; 00480de5
        ;   XREF to: 00480fa0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_00480fa0(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 00480dea
        ;   Label: LAB_00480dea
    MOV EAX,dword ptr [ESI]             ; 00480ded
    CMP EBX,EAX                         ; 00480def
    JGE 0x00480e07                      ; 00480df1
        ;   XREF to: 00480e07 (CONDITIONAL_JUMP)  ; LAB_00480e07
    PUSH EBX                            ; 00480df3
    PUSH ESI                            ; 00480df4
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00480df5
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00480dfa
    PUSH EAX                            ; 00480dfd
    PUSH EDI                            ; 00480dfe
    INC EBX                             ; 00480dff
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 00480e00
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    JMP 0x00480dea                      ; 00480e05
        ;   XREF to: 00480dea (UNCONDITIONAL_JUMP)  ; LAB_00480dea
    MOV EAX,EDI                         ; 00480e07
        ;   Label: LAB_00480e07
    POP EBX                             ; 00480e09
    POP EDI                             ; 00480e0a
    POP ESI                             ; 00480e0b
    RET                                 ; 00480e0c

