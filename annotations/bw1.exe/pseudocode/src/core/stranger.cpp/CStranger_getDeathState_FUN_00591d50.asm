; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_00591d50(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_strangerCannotDie_005f71ec
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_charactr.cpp_FUN_00431c30
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH 0x5f71ec                       ; 00591d50 | = "strangerCannotDie"
        ;   Label: core_stranger.cpp_CStranger_getDeathState_FUN_00591d50
    MOV EDX,dword ptr [0x0061b4d0]      ; 00591d55 | DAT_0061b4d0
    PUSH EDX                            ; 00591d5b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00591d5c
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00591d61
    TEST EAX,EAX                        ; 00591d64
    JZ 0x00591d6b                       ; 00591d66
        ;   XREF to: 00591d6b (CONDITIONAL_JUMP)  ; LAB_00591d6b
    XOR EAX,EAX                         ; 00591d68
    RET                                 ; 00591d6a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00591d6b
        ;   Label: LAB_00591d6b
    PUSH ECX                            ; 00591d6f
    CALL core_charactr.cpp_FUN_00431c30 ; 00591d70
        ;   XREF to: 00431c30 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431c30()
    ADD ESP,0x4                         ; 00591d75
    RET                                 ; 00591d78

