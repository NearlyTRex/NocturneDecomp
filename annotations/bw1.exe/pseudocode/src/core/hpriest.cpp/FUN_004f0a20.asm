; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hpriest_cpp_FUN_004f0a20(CNPC *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_npc.cpp_CNPC_process_FUN_005317c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0a20
        ;   Label: core_hpriest.cpp_FUN_004f0a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f0a21
    PUSH dword ptr [ESP + 0xc]          ; 004f0a25
    PUSH EBX                            ; 004f0a29
    CALL core_npc.cpp_CNPC_process_FUN_005317c0 ; 004f0a2a
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_process_FUN_005317c0(CNPC * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f0a2f
    LEA EAX,[EBX + 0x1fab8]             ; 004f0a32
    PUSH EAX                            ; 004f0a38
    MOV EDX,dword ptr [0x0061b4d0]      ; 004f0a39 | DAT_0061b4d0
    PUSH EDX                            ; 004f0a3f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004f0a40
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f0a45
    TEST EAX,EAX                        ; 004f0a48
    JNZ 0x004f0a4e                      ; 004f0a4a
        ;   XREF to: 004f0a4e (CONDITIONAL_JUMP)  ; LAB_004f0a4e
    POP EBX                             ; 004f0a4c
    RET                                 ; 004f0a4d
    PUSH 0x1                            ; 004f0a4e
        ;   Label: LAB_004f0a4e
    PUSH 0xbf800000                     ; 004f0a50
    PUSH 0x0                            ; 004f0a55
    PUSH EBX                            ; 004f0a57
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00430d90 ; 004f0a58
        ;   XREF to: 00430d90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00430d90(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 004f0a5d
    POP EBX                             ; 004f0a60
    RET                                 ; 004f0a61

