; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_005a1f90(SVert *this_ptr,uint flags)
;
; Parameters:
; SVert *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_cloth.cpp_CVector3f_arrdtor_FUN_0043e460
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1f90
        ;   Label: core_skeleton.cpp_SVert_dtor_FUN_005a1f90
    PUSH 0x0                            ; 005a1f94
    ADD EAX,0x10                        ; 005a1f96
    PUSH EAX                            ; 005a1f99
    CALL core_cloth.cpp_CVector3f_arrdtor_FUN_0043e460 ; 005a1f9a
        ;   XREF to: 0043e460 (UNCONDITIONAL_CALL)  ; CVector3f * core_cloth.cpp_CVector3f_arrdtor_FUN_0043e460(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a1f9f
    SUB EAX,0x10                        ; 005a1fa2
    RET                                 ; 005a1fa5

