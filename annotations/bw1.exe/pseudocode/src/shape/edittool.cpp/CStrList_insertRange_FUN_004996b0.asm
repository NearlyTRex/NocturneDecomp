; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_004996b0(CStrList *this_ptr,int param_2,CStrList *param_3)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; CStrList *       Stack[0xc]:4   param_3
;
; Called Functions:
;   shape_edittool.cpp_CStrList_allocate_FUN_00499600
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004996b0
        ;   Label: shape_edittool.cpp_CStrList_insertRange_FUN_004996b0
    PUSH ESI                            ; 004996b1
    PUSH EDI                            ; 004996b2
    PUSH EBP                            ; 004996b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004996b4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004996b8
    MOV EDX,dword ptr [EDI]             ; 004996bc
    MOV EAX,dword ptr [EAX]             ; 004996be
    ADD EAX,EDX                         ; 004996c0
    PUSH EAX                            ; 004996c2
    PUSH EDI                            ; 004996c3
    CALL shape_edittool.cpp_CStrList_allocate_FUN_00499600 ; 004996c4
        ;   XREF to: 00499600 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_allocate_FUN_00499600(CStrList * this_ptr, int new_capacity)
    ADD ESP,0x8                         ; 004996c9
    XOR EBX,EBX                         ; 004996cc
    MOV ESI,dword ptr [ESP + 0x18]      ; 004996ce
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004996d2
    MOV EAX,dword ptr [EAX]             ; 004996d6
    CMP EBX,EAX                         ; 004996d8
    JL 0x004996e1                       ; 004996da
        ;   XREF to: 004996e1 (CONDITIONAL_JUMP)  ; LAB_004996e1
    POP EBP                             ; 004996dc
    POP EDI                             ; 004996dd
    POP ESI                             ; 004996de
    POP EBX                             ; 004996df
    RET                                 ; 004996e0
    PUSH EBX                            ; 004996e1
        ;   Label: LAB_004996e1
    MOV ECX,dword ptr [ESP + 0x20]      ; 004996e2
    PUSH ECX                            ; 004996e6
    MOV EBP,dword ptr [EDI + 0xc]       ; 004996e7
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 004996ea
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004996ef
    PUSH EAX                            ; 004996f2
    PUSH ESI                            ; 004996f3
    PUSH EDI                            ; 004996f4
    INC EBX                             ; 004996f5
    INC ESI                             ; 004996f6
    CALL dword ptr [EBP + 0xc]          ; 004996f7
    ADD ESP,0xc                         ; 004996fa
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004996fd
    MOV EAX,dword ptr [EAX]             ; 00499701
    CMP EBX,EAX                         ; 00499703
    JL 0x004996e1                       ; 00499705
        ;   XREF to: 004996e1 (CONDITIONAL_JUMP)  ; LAB_004996e1
    POP EBP                             ; 00499707
    POP EDI                             ; 00499708
    POP ESI                             ; 00499709
    POP EBX                             ; 0049970a
    RET                                 ; 0049970b

