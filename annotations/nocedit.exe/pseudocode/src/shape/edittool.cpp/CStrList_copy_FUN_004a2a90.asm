; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_004a2a90(CStrList *this_ptr,CStrList *other)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   other
;
; Referenced Globals:
;   CStrList_vtable g_CStrListVTable
;
; Called Functions:
;   shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2a90
        ;   Label: shape_edittool.cpp_CStrList_copy_FUN_004a2a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2a91
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a2a95
    MOV dword ptr [EBX + 0xc],0x65d474  ; 004a2a99 | g_CStrListVTable
    PUSH EDX                            ; 004a2aa0
    MOV dword ptr [EBX],0x0             ; 004a2aa1
    PUSH EBX                            ; 004a2aa7
    MOV dword ptr [EBX + 0x8],0x0       ; 004a2aa8
    CALL shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0 ; 004a2aaf
        ;   XREF to: 004a2ac0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0(CStrList * this_ptr, CStrList * source_ptr)
    ADD ESP,0x8                         ; 004a2ab4
    MOV EAX,EBX                         ; 004a2ab7
    POP EBX                             ; 004a2ab9
    RET                                 ; 004a2aba

