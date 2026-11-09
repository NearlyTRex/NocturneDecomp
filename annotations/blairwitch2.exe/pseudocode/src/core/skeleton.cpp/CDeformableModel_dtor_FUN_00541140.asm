; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * core_skeleton_cpp_CDeformableModel_dtor_FUN_00541140(CDeformableModel *this_ptr,uint flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_00541160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541140
        ;   Label: core_skeleton.cpp_CDeformableModel_dtor_FUN_00541140
    MOV EBX,dword ptr [ESP + 0x8]       ; 00541141
    PUSH EBX                            ; 00541145
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00541160 ; 00541146
        ;   XREF to: 00541160 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00541160(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0054114b
    MOV EAX,EBX                         ; 0054114e
    POP EBX                             ; 00541150
    RET                                 ; 00541151

