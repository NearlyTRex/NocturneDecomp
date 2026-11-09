; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005215c0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_staticInit_FUN_00520f90 at 00520faf
;
; Called Functions:
;   shape_edittool.cpp_CStrList_ctor_FUN_00480d20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005215c0
        ;   Label: core_script.cpp_CScript_ctor_FUN_005215c0
    ADD EAX,0x34                        ; 005215c4
    PUSH EAX                            ; 005215c7
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00480d20 ; 005215c8
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00480d20(CStrList * this_ptr)
    MOV dword ptr [EAX + -0x8],0x0      ; 005215cd
    MOV dword ptr [EAX + -0x4],0x0      ; 005215d4
    MOV dword ptr [EAX + -0x14],0x0     ; 005215db
    MOV dword ptr [EAX + -0x10],0x0     ; 005215e2
    ADD ESP,0x4                         ; 005215e9
    MOV dword ptr [EAX + -0xc],0x0      ; 005215ec
    SUB EAX,0x34                        ; 005215f3
    RET                                 ; 005215f6

