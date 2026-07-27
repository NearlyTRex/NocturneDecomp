; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_event_cpp_CEventList_getCounterValue_FUN_004807e0(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047e695
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047bb8c
;   core_event.cpp_FUN_0047a350 at 0047a381
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00501d03
;
; Called Functions:
;   core_event.cpp_CEventList_findCounter_FUN_00480900
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004807e0
        ;   Label: core_event.cpp_CEventList_getCounterValue_FUN_004807e0
    PUSH EDX                            ; 004807e4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004807e5
    PUSH ECX                            ; 004807e9
    CALL core_event.cpp_CEventList_findCounter_FUN_00480900 ; 004807ea
        ;   XREF to: 00480900 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_findCounter_FUN_00480900()
    ADD ESP,0x8                         ; 004807ef
    TEST EAX,EAX                        ; 004807f2
    JL 0x00480808                       ; 004807f4
        ;   XREF to: 00480808 (CONDITIONAL_JUMP)  ; LAB_00480808
    PUSH EBX                            ; 004807f6
    MOV EBX,dword ptr [ESP + 0x8]       ; 004807f7
    SHL EAX,0x2                         ; 004807fb
    ADD EAX,EBX                         ; 004807fe
    MOV EAX,dword ptr [EAX + 0x34c0]    ; 00480800
    POP EBX                             ; 00480806
    RET                                 ; 00480807
    XOR EAX,EAX                         ; 00480808
        ;   Label: LAB_00480808
    RET                                 ; 0048080a

