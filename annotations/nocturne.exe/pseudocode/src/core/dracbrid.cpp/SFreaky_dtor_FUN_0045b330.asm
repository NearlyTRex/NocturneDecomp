; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFreaky * __cdecl core_dracbrid_cpp_SFreaky_dtor_FUN_0045b330(SFreaky *this_ptr,uint flags)
;
; Parameters:
; SFreaky *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045b330
        ;   Label: core_dracbrid.cpp_SFreaky_dtor_FUN_0045b330
    PUSH 0x0                            ; 0045b334
    ADD EAX,0x20                        ; 0045b336
    PUSH EAX                            ; 0045b339
    CALL core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410 ; 0045b33a
        ;   XREF to: 0045b410 (UNCONDITIONAL_CALL)  ; CVector3f * core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045b33f
    SUB EAX,0x20                        ; 0045b342
    RET                                 ; 0045b345

