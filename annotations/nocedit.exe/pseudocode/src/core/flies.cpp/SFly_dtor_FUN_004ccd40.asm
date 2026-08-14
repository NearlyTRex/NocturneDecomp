; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFly * __cdecl core_flies_cpp_SFly_dtor_FUN_004ccd40(SFly *this_ptr,uint flags)
;
; Parameters:
; SFly *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dracbrid.cpp_CVector3f_arrdtor_FUN_00486e30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ccd40
        ;   Label: core_flies.cpp_SFly_dtor_FUN_004ccd40
    PUSH 0x0                            ; 004ccd44
    ADD EAX,0x4                         ; 004ccd46
    PUSH EAX                            ; 004ccd49
    CALL core_dracbrid.cpp_CVector3f_arrdtor_FUN_00486e30 ; 004ccd4a
        ;   XREF to: 00486e30 (UNCONDITIONAL_CALL)  ; CVector3f * core_dracbrid.cpp_CVector3f_arrdtor_FUN_00486e30(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ccd4f
    SUB EAX,0x4                         ; 004ccd52
    RET                                 ; 004ccd55

