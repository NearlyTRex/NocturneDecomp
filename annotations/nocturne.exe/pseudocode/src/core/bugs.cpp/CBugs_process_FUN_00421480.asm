; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_CBugs_process_FUN_00421480(CBugs *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00421464 = 004214bb
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370
;   core_bugs.cpp_CBugs_updateBoundingBox_FUN_004227a0
;   core_bugs.cpp_FUN_00422050
;   core_charactr.cpp_FUN_004259f0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421480
        ;   Label: core_bugs.cpp_CBugs_process_FUN_00421480
    PUSH EDI                            ; 00421481
    MOV EBX,dword ptr [ESP + 0xc]       ; 00421482
    PUSH dword ptr [ESP + 0x10]         ; 00421486
    PUSH EBX                            ; 0042148a
    CALL core_charactr.cpp_FUN_004259f0 ; 0042148b
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00421490
    TEST EAX,EAX                        ; 00421493
    JZ 0x004214c8                       ; 00421495
        ;   XREF to: 004214c8 (CONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [EBX + 0x19700],0x0   ; 00421497
    JZ 0x004214cb                       ; 0042149e
        ;   XREF to: 004214cb (CONDITIONAL_JUMP)  ; LAB_004214cb
    CMP dword ptr [EBX + 0x19704],0x0   ; 004214a0
        ;   Label: LAB_004214a0
    JZ 0x004214f1                       ; 004214a7
        ;   XREF to: 004214f1 (CONDITIONAL_JUMP)  ; LAB_004214f1
    MOV EAX,dword ptr [EBX + 0xbd24]    ; 004214a9
        ;   Label: LAB_004214a9
    CMP EAX,0x3                         ; 004214af
    JA 0x004214c8                       ; 004214b2
        ;   XREF to: 004214c8 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x421464]  ; 004214b4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [ESP + 0x10]         ; 004214bb
        ;   Label: caseD_0
    PUSH EBX                            ; 004214bf
    CALL core_bugs.cpp_FUN_00422050     ; 004214c0
        ;   XREF to: 00422050 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00422050(CBugs * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004214c5
    POP EDI                             ; 004214c8
        ;   Label: caseD_3
    POP EBX                             ; 004214c9
    RET                                 ; 004214ca
    LEA EAX,[EBX + 0x19708]             ; 004214cb
        ;   Label: LAB_004214cb
    PUSH EAX                            ; 004214d1
    MOV ECX,dword ptr [0x005b7650]      ; 004214d2 | DAT_005b7650
    PUSH ECX                            ; 004214d8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004214d9
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004214de
    TEST EAX,EAX                        ; 004214e1
    JZ 0x004214a0                       ; 004214e3
        ;   XREF to: 004214a0 (CONDITIONAL_JUMP)  ; LAB_004214a0
    MOV dword ptr [EBX + 0x19700],0x1   ; 004214e5
    JMP 0x004214a0                      ; 004214ef
        ;   XREF to: 004214a0 (UNCONDITIONAL_JUMP)  ; LAB_004214a0
    LEA EAX,[EBX + 0x1976c]             ; 004214f1
        ;   Label: LAB_004214f1
    PUSH EAX                            ; 004214f7
    MOV EDI,dword ptr [0x005b7650]      ; 004214f8 | DAT_005b7650
    PUSH EDI                            ; 004214fe
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004214ff
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00421504
    TEST EAX,EAX                        ; 00421507
    JZ 0x004214a9                       ; 00421509
        ;   XREF to: 004214a9 (CONDITIONAL_JUMP)  ; LAB_004214a9
    MOV dword ptr [EBX + 0x19704],0x1   ; 0042150b
    JMP 0x004214a9                      ; 00421515
        ;   XREF to: 004214a9 (UNCONDITIONAL_JUMP)  ; LAB_004214a9
    PUSH dword ptr [ESP + 0x10]         ; 00421517
        ;   Label: caseD_1
    PUSH EBX                            ; 0042151b
    CALL core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 ; 0042151c
        ;   XREF to: 00422370 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370(CBugs * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00421521
    POP EDI                             ; 00421524
    POP EBX                             ; 00421525
    RET                                 ; 00421526
    PUSH dword ptr [ESP + 0x10]         ; 00421527
        ;   Label: caseD_2
    PUSH EBX                            ; 0042152b
    CALL core_bugs.cpp_CBugs_updateBoundingBox_FUN_004227a0 ; 0042152c
        ;   XREF to: 004227a0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateBoundingBox_FUN_004227a0(CBugs * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00421531
    POP EDI                             ; 00421534
    POP EBX                             ; 00421535
    RET                                 ; 00421536

