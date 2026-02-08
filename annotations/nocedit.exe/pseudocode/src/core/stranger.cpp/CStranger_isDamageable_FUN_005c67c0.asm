; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_stranger_cpp_CStranger_isDamageable_FUN_005c67c0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_strangerCannotDie_00653fa7
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042c580
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;
; *****************************************************************************

section .text

    PUSH 0x653fa7                       ; 005c67c0 | = "strangerCannotDie"
        ;   Label: core_stranger.cpp_CStranger_isDamageable_FUN_005c67c0
    MOV EDX,dword ptr [0x006793d0]      ; 005c67c5 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 005c67cb | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005c67cc
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005c67d1
    TEST EAX,EAX                        ; 005c67d4
    JZ 0x005c67db                       ; 005c67d6
        ;   XREF to: 005c67db (CONDITIONAL_JUMP)  ; LAB_005c67db
    XOR EAX,EAX                         ; 005c67d8
    RET                                 ; 005c67da
    MOV ECX,dword ptr [ESP + 0x4]       ; 005c67db
        ;   Label: LAB_005c67db
    PUSH ECX                            ; 005c67df
    CALL core_charactr.cpp_CCharacter_FUN_0042c580 ; 005c67e0
        ;   XREF to: 0042c580 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042c580(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005c67e5
    RET                                 ; 005c67e8

