; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_litecone_cpp_CLightCone_process_FUN_004c81a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c81a0
        ;   Label: core_litecone.cpp_CLightCone_process_FUN_004c81a0
    PUSH ESI                            ; 004c81a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c81a2
    CMP dword ptr [EBX + 0x158],0x0     ; 004c81a6
    JNZ 0x004c81d9                      ; 004c81ad
        ;   XREF to: 004c81d9 (CONDITIONAL_JUMP)  ; LAB_004c81d9
    LEA EAX,[EBX + 0x15c]               ; 004c81af
    PUSH EAX                            ; 004c81b5
    MOV ESI,dword ptr [0x005b7650]      ; 004c81b6 | DAT_005b7650
    PUSH ESI                            ; 004c81bc
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004c81bd
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004c81c2
    TEST EAX,EAX                        ; 004c81c5
    JNZ 0x004c81cc                      ; 004c81c7
        ;   XREF to: 004c81cc (CONDITIONAL_JUMP)  ; LAB_004c81cc
    POP ESI                             ; 004c81c9
        ;   Label: LAB_004c81c9
    POP EBX                             ; 004c81ca
    RET                                 ; 004c81cb
    MOV dword ptr [EBX + 0x158],0x1     ; 004c81cc
        ;   Label: LAB_004c81cc
    POP ESI                             ; 004c81d6
    POP EBX                             ; 004c81d7
    RET                                 ; 004c81d8
    LEA EAX,[EBX + 0x1c0]               ; 004c81d9
        ;   Label: LAB_004c81d9
    PUSH EAX                            ; 004c81df
    MOV ECX,dword ptr [0x005b7650]      ; 004c81e0 | DAT_005b7650
    PUSH ECX                            ; 004c81e6
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004c81e7
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 004c81ec
    TEST EAX,EAX                        ; 004c81ef
    JZ 0x004c81c9                       ; 004c81f1
        ;   XREF to: 004c81c9 (CONDITIONAL_JUMP)  ; LAB_004c81c9
    MOV dword ptr [EBX + 0x158],0x0     ; 004c81f3
    POP ESI                             ; 004c81fd
    POP EBX                             ; 004c81fe
    RET                                 ; 004c81ff

