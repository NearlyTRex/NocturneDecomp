; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_game_cpp_FUN_004bb4e0(void)
;
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 0048f9d5
;   core_script.cpp_CScript_step_FUN_00522350 at 00525383
;
; Referenced Globals:
;   undefined4 DAT_01cb80e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cb80e0]      ; 004bb4e0 | DAT_01cb80e0
        ;   Label: core_game.cpp_FUN_004bb4e0
    TEST EDX,EDX                        ; 004bb4e6
    JZ 0x004bb4f3                       ; 004bb4e8
        ;   XREF to: 004bb4f3 (CONDITIONAL_JUMP)  ; LAB_004bb4f3
    CMP EDX,0x5                         ; 004bb4ea
    JNZ 0x004b2965                      ; 004bb4ed
        ;   XREF to: 004b2965 (CONDITIONAL_JUMP)  ; LAB_004b2965
    MOV EAX,0x1                         ; 004bb4f3
        ;   Label: LAB_004bb4f3
    RET                                 ; 004bb4f8

