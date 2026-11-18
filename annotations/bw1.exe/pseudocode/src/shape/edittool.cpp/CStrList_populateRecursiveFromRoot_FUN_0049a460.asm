; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_populateRecursiveFromRoot_FUN_0049a460(CStrList *this_ptr,char *base_path,char *file_pattern)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   base_path
; char *           Stack[0xc]:4   file_pattern
;
; Called Functions:
;   shape_edittool.cpp_CStrList_populateRecursive_FUN_0049a300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a460
        ;   Label: shape_edittool.cpp_CStrList_populateRecursiveFromRoot_FUN_0049a460
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049a461
    PUSH EDX                            ; 0049a465
    PUSH 0x5dc604                       ; 0049a466
    MOV ECX,dword ptr [ESP + 0x14]      ; 0049a46b
    PUSH ECX                            ; 0049a46f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049a470
    PUSH EBX                            ; 0049a474
    CALL shape_edittool.cpp_CStrList_populateRecursive_FUN_0049a300 ; 0049a475
        ;   XREF to: 0049a300 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateRecursive_FUN_0049a300(CStrList * this_ptr, char * base_path, char * relative_dir, char * file_pattern)
    ADD ESP,0x10                        ; 0049a47a
    POP EBX                             ; 0049a47d
    RET                                 ; 0049a47e

