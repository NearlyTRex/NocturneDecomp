; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFootstep * __cdecl core_gore_cpp_CFootstep_dtor_FUN_004ee390(CFootstep *this_ptr,uint flags)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dracbrid.cpp_CVector3f_arrdtor_FUN_00486e30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ee390
        ;   Label: core_gore.cpp_CFootstep_dtor_FUN_004ee390
    PUSH 0x0                            ; 004ee394
    ADD EAX,0x8                         ; 004ee396
    PUSH EAX                            ; 004ee399
    CALL core_dracbrid.cpp_CVector3f_arrdtor_FUN_00486e30 ; 004ee39a
        ;   XREF to: 00486e30 (UNCONDITIONAL_CALL)  ; CVector3f * core_dracbrid.cpp_CVector3f_arrdtor_FUN_00486e30(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004ee39f
    SUB EAX,0x8                         ; 004ee3a2
    RET                                 ; 004ee3a5

