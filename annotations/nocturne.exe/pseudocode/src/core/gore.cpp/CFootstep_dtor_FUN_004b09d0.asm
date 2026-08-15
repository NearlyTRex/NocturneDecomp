; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFootstep * __cdecl core_gore_cpp_CFootstep_dtor_FUN_004b09d0(CFootstep *this_ptr,uint flags)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dracbrid.cpp_CVector3f_arrdtor4_FUN_0045b410
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b09d0
        ;   Label: core_gore.cpp_CFootstep_dtor_FUN_004b09d0
    PUSH 0x0                            ; 004b09d4
    ADD EAX,0x8                         ; 004b09d6
    PUSH EAX                            ; 004b09d9
    CALL core_dracbrid.cpp_CVector3f_arrdtor4_FUN_0045b410 ; 004b09da
        ;   XREF to: 0045b410 (UNCONDITIONAL_CALL)  ; CVector3f * core_dracbrid.cpp_CVector3f_arrdtor4_FUN_0045b410(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b09df
    SUB EAX,0x8                         ; 004b09e2
    RET                                 ; 004b09e5

