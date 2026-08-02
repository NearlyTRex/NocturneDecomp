; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80(CDeformableModel *this_ptr,uint flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0
;   core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0
;   core_skeleton.cpp_FUN_0051f900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517c80
        ;   Label: core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00517c81
    PUSH EBX                            ; 00517c85
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0 ; 00517c86
        ;   XREF to: 00517cc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00517c8b
    PUSH 0x0                            ; 00517c8e
    ADD EBX,0x1c0c                      ; 00517c90
    PUSH EBX                            ; 00517c96
    CALL core_skeleton.cpp_FUN_0051f900 ; 00517c97
        ;   XREF to: 0051f900 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_FUN_0051f900(CBoundingBox3D * objs, uint flags)
    ADD ESP,0x8                         ; 00517c9c
    PUSH 0x0                            ; 00517c9f
    SUB EAX,0x4bc                       ; 00517ca1
    PUSH EAX                            ; 00517ca6
    CALL core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0 ; 00517ca7
        ;   XREF to: 0043f9a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00517cac
    SUB EAX,0x1750                      ; 00517caf
    POP EBX                             ; 00517cb4
    RET                                 ; 00517cb5

