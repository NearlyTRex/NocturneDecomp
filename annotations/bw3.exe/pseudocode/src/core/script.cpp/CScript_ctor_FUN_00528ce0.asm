; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScript * __cdecl core_script_cpp_CScript_ctor_FUN_00528ce0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_staticInit_FUN_005286b0 at 005286cf
;
; Called Functions:
;   shape_edittool.cpp_CStrList_ctor_FUN_00481f20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00528ce0
        ;   Label: core_script.cpp_CScript_ctor_FUN_00528ce0
    ADD EAX,0x34                        ; 00528ce4
    PUSH EAX                            ; 00528ce7
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00481f20 ; 00528ce8
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00481f20(CStrList * this_ptr)
    MOV dword ptr [EAX + -0x8],0x0      ; 00528ced
    MOV dword ptr [EAX + -0x4],0x0      ; 00528cf4
    MOV dword ptr [EAX + -0x14],0x0     ; 00528cfb
    MOV dword ptr [EAX + -0x10],0x0     ; 00528d02
    ADD ESP,0x4                         ; 00528d09
    MOV dword ptr [EAX + -0xc],0x0      ; 00528d0c
    SUB EAX,0x34                        ; 00528d13
    RET                                 ; 00528d16

