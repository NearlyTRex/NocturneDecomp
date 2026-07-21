; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hpriest_cpp_CHighPriestOfGardath_process_FUN_004b9b80(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_npc.cpp_CNPC_process_FUN_004eea20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9b80
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004b9b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b9b81
    PUSH dword ptr [ESP + 0xc]          ; 004b9b85
    PUSH EBX                            ; 004b9b89
    CALL core_npc.cpp_CNPC_process_FUN_004eea20 ; 004b9b8a
        ;   XREF to: 004eea20 (UNCONDITIONAL_CALL)  ; undefined core_npc.cpp_CNPC_process_FUN_004eea20()
    ADD ESP,0x8                         ; 004b9b8f
    LEA EAX,[EBX + 0x1f570]             ; 004b9b92
    PUSH EAX                            ; 004b9b98
    MOV EDX,dword ptr [0x005b7650]      ; 004b9b99 | DAT_005b7650
    PUSH EDX                            ; 004b9b9f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004b9ba0
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004b9ba5
    TEST EAX,EAX                        ; 004b9ba8
    JNZ 0x004b9bae                      ; 004b9baa
        ;   XREF to: 004b9bae (CONDITIONAL_JUMP)  ; LAB_004b9bae
    POP EBX                             ; 004b9bac
    RET                                 ; 004b9bad
    PUSH 0x1                            ; 004b9bae
        ;   Label: LAB_004b9bae
    PUSH 0xbf800000                     ; 004b9bb0
    PUSH 0x0                            ; 004b9bb5
    PUSH EBX                            ; 004b9bb7
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427b60 ; 004b9bb8
        ;   XREF to: 00427b60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismember_FUN_00427b60()
    ADD ESP,0x10                        ; 004b9bbd
    POP EBX                             ; 004b9bc0
    RET                                 ; 004b9bc1

