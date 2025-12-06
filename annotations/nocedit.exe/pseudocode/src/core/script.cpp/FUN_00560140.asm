; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00560140()
;
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_FUN_00429870 at 00429914
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c4f9
;   core_script.cpp_FUN_005602b0 at 005602ba
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00560140
        ;   Label: core_script.cpp_FUN_00560140
    MOV EDX,dword ptr [ESP + 0x8]       ; 00560144
    CMP EDX,dword ptr [EAX + 0x4]       ; 00560148
    JZ 0x0056014e                       ; 0056014b | LAB_0056014e
        ;   XREF to: 0056014e (CONDITIONAL_JUMP)
    RET                                 ; 0056014d
    MOV dword ptr [EAX + 0x4],0x0       ; 0056014e
        ;   Label: LAB_0056014e
    MOV byte ptr [EAX + 0x54],0x0       ; 00560155
    RET                                 ; 00560159

