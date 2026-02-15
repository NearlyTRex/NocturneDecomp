; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMorphControlPoint * __cdecl core_morph_cpp_SMorphControlPoint_dtor_FUN_0052cc70(SMorphControlPoint *this_ptr,uint flags)
;
; Parameters:
; SMorphControlPoint * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_morph.cpp_CVector3f_arrdtor_FUN_0052cc90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052cc70
        ;   Label: core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70
    PUSH 0x0                            ; 0052cc74
    ADD EAX,0x8                         ; 0052cc76
    PUSH EAX                            ; 0052cc79
    CALL core_morph.cpp_CVector3f_arrdtor_FUN_0052cc90 ; 0052cc7a
        ;   XREF to: 0052cc90 (UNCONDITIONAL_CALL)  ; CVector3f * core_morph.cpp_CVector3f_arrdtor_FUN_0052cc90(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0052cc7f
    SUB EAX,0x8                         ; 0052cc82
    RET                                 ; 0052cc85

