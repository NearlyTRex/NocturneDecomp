; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_bird_cpp_FUN_0040ff30(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005b6405
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f510
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ff30
        ;   Label: unkafter_bird.cpp_FUN_0040ff30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ff31
    CMP dword ptr [EBX + 0x27a8],0x0    ; 0040ff35
    JNZ 0x0040ff42                      ; 0040ff3c
        ;   XREF to: 0040ff42 (CONDITIONAL_JUMP)  ; LAB_0040ff42
    XOR EAX,EAX                         ; 0040ff3e
        ;   Label: LAB_0040ff3e
    POP EBX                             ; 0040ff40
        ;   Label: LAB_0040ff40
    RET                                 ; 0040ff41
    PUSH 0x5b6405                       ; 0040ff42 | = "heroCanSee"
        ;   Label: LAB_0040ff42
    MOV ECX,dword ptr [0x005fba60]      ; 0040ff47 | DAT_005fba60
    PUSH ECX                            ; 0040ff4d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0040ff4e
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0040ff53
    TEST EAX,EAX                        ; 0040ff56
    JZ 0x0040ff40                       ; 0040ff58
        ;   XREF to: 0040ff40 (CONDITIONAL_JUMP)  ; LAB_0040ff40
    CMP dword ptr [EBX + 0x206ac],0x0   ; 0040ff5a
    JNZ 0x0040ff3e                      ; 0040ff61
        ;   XREF to: 0040ff3e (CONDITIONAL_JUMP)  ; LAB_0040ff3e
    PUSH EBX                            ; 0040ff63
    CALL core_charactr.cpp_FUN_0042f510 ; 0040ff64
        ;   XREF to: 0042f510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f510()
    ADD ESP,0x4                         ; 0040ff69
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0040ff6c
    POP EBX                             ; 0040ff72
    RET                                 ; 0040ff73

