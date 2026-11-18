; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_populateRecursiveFromRoot_FUN_00481e00(CStrList *this_ptr,char *base_path,char *file_pattern)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   base_path
; char *           Stack[0xc]:4   file_pattern
;
; Called Functions:
;   shape_edittool.cpp_CStrList_populateRecursive_FUN_00481ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481e00
        ;   Label: shape_edittool.cpp_CStrList_populateRecursiveFromRoot_FUN_00481e00
    MOV EDX,dword ptr [ESP + 0x10]      ; 00481e01
    PUSH EDX                            ; 00481e05
    PUSH 0x5d286b                       ; 00481e06
    MOV ECX,dword ptr [ESP + 0x14]      ; 00481e0b
    PUSH ECX                            ; 00481e0f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00481e10
    PUSH EBX                            ; 00481e14
    CALL shape_edittool.cpp_CStrList_populateRecursive_FUN_00481ca0 ; 00481e15
        ;   XREF to: 00481ca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateRecursive_FUN_00481ca0(CStrList * this_ptr, char * base_path, char * relative_dir, char * file_pattern)
    ADD ESP,0x10                        ; 00481e1a
    POP EBX                             ; 00481e1d
    RET                                 ; 00481e1e

