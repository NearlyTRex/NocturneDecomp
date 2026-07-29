; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_00473bd0(CStrList *this_ptr,CStrList *other)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   other
;
; Referenced Globals:
;   CStrList_vtable g_CStrListVTable
;
; Called Functions:
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00473c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473bd0
        ;   Label: shape_edittool.cpp_CStrList_copy_FUN_00473bd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00473bd1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00473bd5
    MOV dword ptr [EBX + 0xc],0x59ca74  ; 00473bd9 | g_CStrListVTable
    PUSH EDX                            ; 00473be0
    MOV dword ptr [EBX],0x0             ; 00473be1
    PUSH EBX                            ; 00473be7
    MOV dword ptr [EBX + 0x8],0x0       ; 00473be8
    CALL shape_edittool.cpp_CStrList_copyFrom_FUN_00473c00 ; 00473bef
        ;   XREF to: 00473c00 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_copyFrom_FUN_00473c00(CStrList * dest_ptr, CStrList * source_ptr)
    ADD ESP,0x8                         ; 00473bf4
    MOV EAX,EBX                         ; 00473bf7
    POP EBX                             ; 00473bf9
    RET                                 ; 00473bfa

