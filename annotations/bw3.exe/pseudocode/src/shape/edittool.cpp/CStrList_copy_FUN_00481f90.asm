; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_00481f90(CStrList *this_ptr,CStrList *other)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   other
;
; Called Functions:
;   shape_edittool.cpp_CStrList_copyFrom_FUN_00481fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481f90
        ;   Label: shape_edittool.cpp_CStrList_copy_FUN_00481f90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481f91
    MOV EDX,dword ptr [ESP + 0xc]       ; 00481f95
    MOV dword ptr [EBX + 0xc],0x5df024  ; 00481f99
    PUSH EDX                            ; 00481fa0
    MOV dword ptr [EBX],0x0             ; 00481fa1
    PUSH EBX                            ; 00481fa7
    MOV dword ptr [EBX + 0x8],0x0       ; 00481fa8
    CALL shape_edittool.cpp_CStrList_copyFrom_FUN_00481fc0 ; 00481faf
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_copyFrom_FUN_00481fc0(CStrList * this_ptr, CStrList * source_ptr)
    ADD ESP,0x8                         ; 00481fb4
    MOV EAX,EBX                         ; 00481fb7
    POP EBX                             ; 00481fb9
    RET                                 ; 00481fba

