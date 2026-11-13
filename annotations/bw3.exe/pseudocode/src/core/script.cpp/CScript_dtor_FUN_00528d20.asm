; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00528d20(CScript *this_ptr,uint flags)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_script.cpp_CScript_clear_FUN_00528d50
;   shape_edittool.cpp_CStrList_dtor_FUN_00481f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528d20
        ;   Label: core_script.cpp_CScript_dtor_FUN_00528d20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00528d21
    PUSH EBX                            ; 00528d25
    CALL core_script.cpp_CScript_clear_FUN_00528d50 ; 00528d26
        ;   XREF to: 00528d50 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_clear_FUN_00528d50(CScript * this_ptr)
    ADD ESP,0x4                         ; 00528d2b
    PUSH 0x0                            ; 00528d2e
    ADD EBX,0x34                        ; 00528d30
    PUSH EBX                            ; 00528d33
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00481f40 ; 00528d34
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00481f40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00528d39
    SUB EAX,0x34                        ; 00528d3c
    POP EBX                             ; 00528d3f
    RET                                 ; 00528d40

