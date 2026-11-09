; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_npc_cpp_FUN_00531ba0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005ec78f
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_charactr.cpp_FUN_004301e0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531ba0
        ;   Label: core_npc.cpp_FUN_00531ba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00531ba1
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00531ba5
    JNZ 0x00531bb2                      ; 00531bac
        ;   XREF to: 00531bb2 (CONDITIONAL_JUMP)  ; LAB_00531bb2
    XOR EAX,EAX                         ; 00531bae
        ;   Label: LAB_00531bae
    POP EBX                             ; 00531bb0
        ;   Label: LAB_00531bb0
    RET                                 ; 00531bb1
    PUSH 0x5ec78f                       ; 00531bb2 | = "heroCanSee"
        ;   Label: LAB_00531bb2
    MOV ECX,dword ptr [0x0061b4d0]      ; 00531bb7 | DAT_0061b4d0
    PUSH ECX                            ; 00531bbd
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00531bbe
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00531bc3
    TEST EAX,EAX                        ; 00531bc6
    JZ 0x00531bb0                       ; 00531bc8
        ;   XREF to: 00531bb0 (CONDITIONAL_JUMP)  ; LAB_00531bb0
    CMP dword ptr [EBX + 0x1fab0],0x0   ; 00531bca
    JNZ 0x00531bae                      ; 00531bd1
        ;   XREF to: 00531bae (CONDITIONAL_JUMP)  ; LAB_00531bae
    PUSH EBX                            ; 00531bd3
    CALL core_charactr.cpp_FUN_004301e0 ; 00531bd4
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004301e0()
    ADD ESP,0x4                         ; 00531bd9
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 00531bdc
    POP EBX                             ; 00531be2
    RET                                 ; 00531be3

