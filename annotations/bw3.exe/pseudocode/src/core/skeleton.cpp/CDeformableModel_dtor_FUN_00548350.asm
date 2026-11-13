; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_00548350(CDeformableModel *this_ptr,uint flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_00548370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548350
        ;   Label: core_skeleton.cpp_CDeformableModel_dtor_FUN_00548350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548351
    PUSH EBX                            ; 00548355
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00548370 ; 00548356
        ;   XREF to: 00548370 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00548370(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0054835b
    MOV EAX,EBX                         ; 0054835e
    POP EBX                             ; 00548360
    RET                                 ; 00548361

