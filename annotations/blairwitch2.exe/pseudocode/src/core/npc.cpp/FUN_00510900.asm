; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_npc_cpp_FUN_00510900(int param_1)
;
;
; XREF[1]:
;   core_hostage.cpp_FUN_004d15d0 at 004d1616
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005e1529
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141f0
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01ba5c50
;   undefined4 g_CGameInstance.field604_0x25c
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfc0
;   core_charactr.cpp_FUN_004254b0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510900
        ;   Label: core_npc.cpp_FUN_00510900
    PUSH ESI                            ; 00510901
    PUSH EDI                            ; 00510902
    MOV EBX,dword ptr [ESP + 0x10]      ; 00510903
    CMP dword ptr [EBX + 0x24340],0x0   ; 00510907
    JNZ 0x00510943                      ; 0051090e
        ;   XREF to: 00510943 (CONDITIONAL_JUMP)  ; LAB_00510943
    CMP dword ptr [EBX + 0x2814],0x0    ; 00510910
    JZ 0x00510949                       ; 00510917
        ;   XREF to: 00510949 (CONDITIONAL_JUMP)  ; LAB_00510949
    MOV ESI,dword ptr [0x0060b280]      ; 00510919 | DAT_0060b280
    PUSH ESI                            ; 0051091f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00510920
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00510925
    TEST EAX,EAX                        ; 00510928
    JNZ 0x00510956                      ; 0051092a
        ;   XREF to: 00510956 (CONDITIONAL_JUMP)  ; LAB_00510956
    CMP dword ptr [EBX + 0x2814],0x0    ; 0051092c
        ;   Label: LAB_0051092c
    JZ 0x00510943                       ; 00510933
        ;   XREF to: 00510943 (CONDITIONAL_JUMP)  ; LAB_00510943
    MOV EAX,[0x00616494]                ; 00510935 | g_CGamePtr
    CMP dword ptr [EAX + 0x25c],0x0     ; 0051093a | g_CGameInstance.field604_0x25c
    JNZ 0x00510972                      ; 00510941
        ;   XREF to: 00510972 (CONDITIONAL_JUMP)  ; LAB_00510972
    XOR EAX,EAX                         ; 00510943
        ;   Label: LAB_00510943
    POP EDI                             ; 00510945
    POP ESI                             ; 00510946
    POP EBX                             ; 00510947
    RET                                 ; 00510948
    PUSH EBX                            ; 00510949
        ;   Label: LAB_00510949
    CALL core_charactr.cpp_FUN_004254b0 ; 0051094a
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 0051094f
    POP EDI                             ; 00510952
    POP ESI                             ; 00510953
    POP EBX                             ; 00510954
    RET                                 ; 00510955
    PUSH 0x5e1529                       ; 00510956 | = "heroCanSee"
        ;   Label: LAB_00510956
    MOV EDI,dword ptr [0x006141f0]      ; 0051095b | DAT_006141f0
    PUSH EDI                            ; 00510961
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00510962
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00510967
    TEST EAX,EAX                        ; 0051096a
    JNZ 0x0051092c                      ; 0051096c
        ;   XREF to: 0051092c (CONDITIONAL_JUMP)  ; LAB_0051092c
    POP EDI                             ; 0051096e
    POP ESI                             ; 0051096f
    POP EBX                             ; 00510970
    RET                                 ; 00510971
    PUSH 0x2                            ; 00510972
        ;   Label: LAB_00510972
    PUSH 0x0                            ; 00510974
    CALL core_actor.cpp_FUN_0040cfc0    ; 00510976
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0051097b
    CMP EAX,0x1                         ; 0051097e
    JNZ 0x00510943                      ; 00510981
        ;   XREF to: 00510943 (CONDITIONAL_JUMP)  ; LAB_00510943
    PUSH EBX                            ; 00510983
    CALL core_charactr.cpp_FUN_004254b0 ; 00510984
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 00510989
    POP EDI                             ; 0051098c
    POP ESI                             ; 0051098d
    POP EBX                             ; 0051098e
    RET                                 ; 0051098f

