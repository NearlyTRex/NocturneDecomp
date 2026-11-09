; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_stranger_cpp_FUN_0056f100(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_strangerCannotDie_005ebf78
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_charactr.cpp_FUN_004281d0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH 0x5ebf78                       ; 0056f100 | = "strangerCannotDie"
        ;   Label: core_stranger.cpp_FUN_0056f100
    MOV EDX,dword ptr [0x006141f0]      ; 0056f105 | DAT_006141f0
    PUSH EDX                            ; 0056f10b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0056f10c
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0056f111
    TEST EAX,EAX                        ; 0056f114
    JZ 0x0056f11b                       ; 0056f116
        ;   XREF to: 0056f11b (CONDITIONAL_JUMP)  ; LAB_0056f11b
    XOR EAX,EAX                         ; 0056f118
    RET                                 ; 0056f11a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056f11b
        ;   Label: LAB_0056f11b
    PUSH ECX                            ; 0056f11f
    CALL core_charactr.cpp_FUN_004281d0 ; 0056f120
        ;   XREF to: 004281d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004281d0()
    ADD ESP,0x4                         ; 0056f125
    RET                                 ; 0056f128

