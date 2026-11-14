; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_dtor_FUN_005637b0(CDeformableModel *this_ptr,uint flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_005637d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005637b0
        ;   Label: core_skeleton.cpp_CDeformableModel_dtor_FUN_005637b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005637b1
    PUSH EBX                            ; 005637b5
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_005637d0 ; 005637b6
        ;   XREF to: 005637d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_005637d0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005637bb
    MOV EAX,EBX                         ; 005637be
    POP EBX                             ; 005637c0
    RET                                 ; 005637c1

