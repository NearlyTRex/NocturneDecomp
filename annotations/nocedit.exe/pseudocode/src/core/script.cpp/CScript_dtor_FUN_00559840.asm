; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00559840(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_script.cpp_CScript_FreeSomething1_FUN_00559870
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559840
        ;   Label: core_script.cpp_CScript_dtor_FUN_00559840
    MOV EBX,dword ptr [ESP + 0x8]       ; 00559841
    PUSH EBX                            ; 00559845
    CALL core_script.cpp_CScript_FreeSomething1_FUN_00559870 ; 00559846
        ;   XREF to: 00559870 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_FreeSomething1_FUN_00559870()
    ADD ESP,0x4                         ; 0055984b
    PUSH 0x0                            ; 0055984e
    ADD EBX,0x38                        ; 00559850
    PUSH EBX                            ; 00559853
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 00559854
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 00559859
    SUB EAX,0x38                        ; 0055985c
    POP EBX                             ; 0055985f
    RET                                 ; 00559860

