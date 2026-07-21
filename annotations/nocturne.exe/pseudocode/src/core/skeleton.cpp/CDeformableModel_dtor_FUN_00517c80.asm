; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_skeleton_cpp_CDeformableModel_dtor_FUN_00517c80(int param_1)
;
;
; Called Functions:
;   core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0
;   core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0
;   FUN_0051f900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517c80
        ;   Label: core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00517c81
    PUSH EBX                            ; 00517c85
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0 ; 00517c86
        ;   XREF to: 00517cc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0()
    ADD ESP,0x4                         ; 00517c8b
    PUSH 0x0                            ; 00517c8e
    ADD EBX,0x1c0c                      ; 00517c90
    PUSH EBX                            ; 00517c96
    CALL FUN_0051f900                   ; 00517c97
        ;   XREF to: 0051f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0051f900()
    ADD ESP,0x8                         ; 00517c9c
    PUSH 0x0                            ; 00517c9f
    SUB EAX,0x4bc                       ; 00517ca1
    PUSH EAX                            ; 00517ca6
    CALL core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0 ; 00517ca7
        ;   XREF to: 0043f9a0 (UNCONDITIONAL_CALL)  ; undefined core_curtain.cpp_CVector3f_arrdtor_FUN_0043f9a0()
    ADD ESP,0x8                         ; 00517cac
    SUB EAX,0x1750                      ; 00517caf
    POP EBX                             ; 00517cb4
    RET                                 ; 00517cb5

