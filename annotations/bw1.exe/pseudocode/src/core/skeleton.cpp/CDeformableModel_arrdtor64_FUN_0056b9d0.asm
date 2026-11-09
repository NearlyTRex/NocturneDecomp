; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * core_skeleton_cpp_CDeformableModel_arrdtor64_FUN_0056b9d0(CDeformableModel *this_ptr,uint flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x6058e0                       ; 0056b9d0
        ;   Label: core_skeleton.cpp_CDeformableModel_arrdtor64_FUN_0056b9d0
    PUSH 0x40                           ; 0056b9d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056b9d7
    PUSH EDX                            ; 0056b9db
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0056b9dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 0056b9e1
    RET                                 ; 0056b9e4

