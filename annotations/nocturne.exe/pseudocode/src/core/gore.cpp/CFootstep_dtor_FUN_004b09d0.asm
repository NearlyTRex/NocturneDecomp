; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_gore_cpp_CFootstep_dtor_FUN_004b09d0(int param_1)
;
;
; Called Functions:
;   core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b09d0
        ;   Label: core_gore.cpp_CFootstep_dtor_FUN_004b09d0
    PUSH 0x0                            ; 004b09d4
    ADD EAX,0x8                         ; 004b09d6
    PUSH EAX                            ; 004b09d9
    CALL core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410 ; 004b09da
        ;   XREF to: 0045b410 (UNCONDITIONAL_CALL)  ; CVector3f * core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004b09df
    SUB EAX,0x8                         ; 004b09e2
    RET                                 ; 004b09e5

