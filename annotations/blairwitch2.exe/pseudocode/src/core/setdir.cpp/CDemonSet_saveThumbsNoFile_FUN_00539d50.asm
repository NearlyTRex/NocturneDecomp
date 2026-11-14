; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_00539d50(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setdir.cpp_FUN_00539860 at 00539884
;
; Called Functions:
;   core_setdir.cpp_FUN_005398d0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00539d50
        ;   Label: core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00539d50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00539d52
    PUSH EDX                            ; 00539d56
    CALL core_setdir.cpp_FUN_005398d0   ; 00539d57
        ;   XREF to: 005398d0 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_005398d0()
    ADD ESP,0x8                         ; 00539d5c
    RET                                 ; 00539d5f

