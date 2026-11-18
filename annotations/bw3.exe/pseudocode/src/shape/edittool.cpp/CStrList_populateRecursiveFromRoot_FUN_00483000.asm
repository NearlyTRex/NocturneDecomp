; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_populateRecursiveFromRoot_FUN_00483000(CStrList *this_ptr,char *base_path,char *file_pattern)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   base_path
; char *           Stack[0xc]:4   file_pattern
;
; Called Functions:
;   shape_edittool.cpp_CStrList_populateRecursive_FUN_00482ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483000
        ;   Label: shape_edittool.cpp_CStrList_populateRecursiveFromRoot_FUN_00483000
    MOV EDX,dword ptr [ESP + 0x10]      ; 00483001
    PUSH EDX                            ; 00483005
    PUSH 0x5bd6c1                       ; 00483006
    MOV ECX,dword ptr [ESP + 0x14]      ; 0048300b
    PUSH ECX                            ; 0048300f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00483010
    PUSH EBX                            ; 00483014
    CALL shape_edittool.cpp_CStrList_populateRecursive_FUN_00482ea0 ; 00483015
        ;   XREF to: 00482ea0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateRecursive_FUN_00482ea0(CStrList * this_ptr, char * base_path, char * relative_dir, char * file_pattern)
    ADD ESP,0x10                        ; 0048301a
    POP EBX                             ; 0048301d
    RET                                 ; 0048301e

