; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_00480d90(CStrList *this_ptr,CStrList *other)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   other
;
; Called Functions:
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00480dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480d90
        ;   Label: shape_edittool.cpp_CStrList_copy_FUN_00480d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00480d91
    MOV EDX,dword ptr [ESP + 0xc]       ; 00480d95
    MOV dword ptr [EBX + 0xc],0x5f5d14  ; 00480d99
    PUSH EDX                            ; 00480da0
    MOV dword ptr [EBX],0x0             ; 00480da1
    PUSH EBX                            ; 00480da7
    MOV dword ptr [EBX + 0x8],0x0       ; 00480da8
    CALL shape_edittool.cpp_CStrList_copyFrom_FUN_00480dc0 ; 00480daf
        ;   XREF to: 00480dc0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_copyFrom_FUN_00480dc0(CStrList * this_ptr, CStrList * source_ptr)
    ADD ESP,0x8                         ; 00480db4
    MOV EAX,EBX                         ; 00480db7
    POP EBX                             ; 00480db9
    RET                                 ; 00480dba

