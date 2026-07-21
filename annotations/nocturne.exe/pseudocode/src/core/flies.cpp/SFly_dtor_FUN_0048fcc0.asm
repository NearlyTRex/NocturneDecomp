; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_flies_cpp_SFly_dtor_FUN_0048fcc0(int param_1)
;
;
; Called Functions:
;   core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048fcc0
        ;   Label: core_flies.cpp_SFly_dtor_FUN_0048fcc0
    PUSH 0x0                            ; 0048fcc4
    ADD EAX,0x4                         ; 0048fcc6
    PUSH EAX                            ; 0048fcc9
    CALL core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410 ; 0048fcca
        ;   XREF to: 0045b410 (UNCONDITIONAL_CALL)  ; undefined core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410()
    ADD ESP,0x8                         ; 0048fccf
    SUB EAX,0x4                         ; 0048fcd2
    RET                                 ; 0048fcd5

