; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_00540890(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_strangerCannotDie_00595fe2
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getDeathState_FUN_00428710
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;
; *****************************************************************************

section .text

    PUSH 0x595fe2                       ; 00540890 | = "strangerCannotDie"
        ;   Label: core_stranger.cpp_CStranger_getDeathState_FUN_00540890
    MOV EDX,dword ptr [0x005b7650]      ; 00540895 | DAT_005b7650
    PUSH EDX                            ; 0054089b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0054089c
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005408a1
    TEST EAX,EAX                        ; 005408a4
    JZ 0x005408ab                       ; 005408a6
        ;   XREF to: 005408ab (CONDITIONAL_JUMP)  ; LAB_005408ab
    XOR EAX,EAX                         ; 005408a8
    RET                                 ; 005408aa
    MOV ECX,dword ptr [ESP + 0x4]       ; 005408ab
        ;   Label: LAB_005408ab
    PUSH ECX                            ; 005408af
    CALL core_charactr.cpp_CCharacter_getDeathState_FUN_00428710 ; 005408b0
        ;   XREF to: 00428710 (UNCONDITIONAL_CALL)  ; EDeathState core_charactr.cpp_CCharacter_getDeathState_FUN_00428710(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005408b5
    RET                                 ; 005408b8

