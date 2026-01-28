; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CStrList_appendRange_FUN_004a2ba0(CStrList *this_ptr,CStrList *source_list)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   source_list
;
; Called Functions:
;   shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2ba0
        ;   Label: shape_edittool.cpp_CStrList_appendRange_FUN_004a2ba0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a2ba4
    PUSH EDX                            ; 004a2ba8
    MOV ECX,dword ptr [EAX]             ; 004a2ba9
    PUSH ECX                            ; 004a2bab
    PUSH EAX                            ; 004a2bac
    CALL shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80 ; 004a2bad
        ;   XREF to: 004a2d80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80(CStrList * this_ptr, int insertion_index, CStrList * source_list)
    ADD ESP,0xc                         ; 004a2bb2
    RET                                 ; 004a2bb5

