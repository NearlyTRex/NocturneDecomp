; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00521600(CScript *this_ptr,uint flags)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_script.cpp_CScript_clear_FUN_00521630
;   shape_edittool.cpp_CStrList_dtor_FUN_00480d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521600
        ;   Label: core_script.cpp_CScript_dtor_FUN_00521600
    MOV EBX,dword ptr [ESP + 0x8]       ; 00521601
    PUSH EBX                            ; 00521605
    CALL core_script.cpp_CScript_clear_FUN_00521630 ; 00521606
        ;   XREF to: 00521630 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_clear_FUN_00521630(CScript * this_ptr)
    ADD ESP,0x4                         ; 0052160b
    PUSH 0x0                            ; 0052160e
    ADD EBX,0x34                        ; 00521610
    PUSH EBX                            ; 00521613
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00480d40 ; 00521614
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00480d40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00521619
    SUB EAX,0x34                        ; 0052161c
    POP EBX                             ; 0052161f
    RET                                 ; 00521620

