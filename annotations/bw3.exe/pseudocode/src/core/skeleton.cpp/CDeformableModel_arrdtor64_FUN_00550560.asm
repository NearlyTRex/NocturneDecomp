; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * core_skeleton_cpp_CDeformableModel_arrdtor64_FUN_00550560(CDeformableModel *this_ptr,uint flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e47b0                       ; 00550560
        ;   Label: core_skeleton.cpp_CDeformableModel_arrdtor64_FUN_00550560
    PUSH 0x40                           ; 00550565
    MOV EDX,dword ptr [ESP + 0xc]       ; 00550567
    PUSH EDX                            ; 0055056b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 0055056c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 00550571
    RET                                 ; 00550574

