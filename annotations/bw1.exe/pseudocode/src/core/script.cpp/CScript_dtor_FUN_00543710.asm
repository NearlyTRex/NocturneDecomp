; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00543710(CScript *this_ptr,uint flags)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_script.cpp_FUN_00543740
;   shape_edittool.cpp_CStrList_dtor_FUN_004993a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543710
        ;   Label: core_script.cpp_CScript_dtor_FUN_00543710
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543711
    PUSH EBX                            ; 00543715
    CALL core_script.cpp_FUN_00543740   ; 00543716
        ;   XREF to: 00543740 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00543740()
    ADD ESP,0x4                         ; 0054371b
    PUSH 0x0                            ; 0054371e
    ADD EBX,0x34                        ; 00543720
    PUSH EBX                            ; 00543723
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004993a0 ; 00543724
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004993a0(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00543729
    SUB EAX,0x34                        ; 0054372c
    POP EBX                             ; 0054372f
    RET                                 ; 00543730

