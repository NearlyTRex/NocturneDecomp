; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_npc_cpp_FUN_00509560(CCharacter *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005cb5b8
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba60
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CGameInstance.field612_0x264
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_FUN_0042e220
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509560
        ;   Label: core_npc.cpp_FUN_00509560
    PUSH ESI                            ; 00509561
    PUSH EDI                            ; 00509562
    MOV EBX,dword ptr [ESP + 0x10]      ; 00509563
    CMP dword ptr [EBX + 0x206ac],0x0   ; 00509567
    JNZ 0x005095a3                      ; 0050956e
        ;   XREF to: 005095a3 (CONDITIONAL_JUMP)  ; LAB_005095a3
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00509570
    JZ 0x005095a9                       ; 00509577
        ;   XREF to: 005095a9 (CONDITIONAL_JUMP)  ; LAB_005095a9
    MOV ESI,dword ptr [0x005f2afc]      ; 00509579 | DAT_005f2afc
    PUSH ESI                            ; 0050957f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00509580
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00509585
    TEST EAX,EAX                        ; 00509588
    JNZ 0x005095b6                      ; 0050958a
        ;   XREF to: 005095b6 (CONDITIONAL_JUMP)  ; LAB_005095b6
    CMP dword ptr [EBX + 0x27a8],0x0    ; 0050958c
        ;   Label: LAB_0050958c
    JZ 0x005095a3                       ; 00509593
        ;   XREF to: 005095a3 (CONDITIONAL_JUMP)  ; LAB_005095a3
    MOV EAX,[0x005fe9dc]                ; 00509595 | g_CGamePtr
    CMP dword ptr [EAX + 0x264],0x0     ; 0050959a | g_CGameInstance.field612_0x264
    JNZ 0x005095d2                      ; 005095a1
        ;   XREF to: 005095d2 (CONDITIONAL_JUMP)  ; LAB_005095d2
    XOR EAX,EAX                         ; 005095a3
        ;   Label: LAB_005095a3
    POP EDI                             ; 005095a5
    POP ESI                             ; 005095a6
    POP EBX                             ; 005095a7
    RET                                 ; 005095a8
    PUSH EBX                            ; 005095a9
        ;   Label: LAB_005095a9
    CALL core_charactr.cpp_FUN_0042e220 ; 005095aa
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005095af
    POP EDI                             ; 005095b2
    POP ESI                             ; 005095b3
    POP EBX                             ; 005095b4
    RET                                 ; 005095b5
    PUSH 0x5cb5b8                       ; 005095b6 | = "heroCanSee"
        ;   Label: LAB_005095b6
    MOV EDI,dword ptr [0x005fba60]      ; 005095bb | DAT_005fba60
    PUSH EDI                            ; 005095c1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 005095c2
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005095c7
    TEST EAX,EAX                        ; 005095ca
    JNZ 0x0050958c                      ; 005095cc
        ;   XREF to: 0050958c (CONDITIONAL_JUMP)  ; LAB_0050958c
    POP EDI                             ; 005095ce
    POP ESI                             ; 005095cf
    POP EBX                             ; 005095d0
    RET                                 ; 005095d1
    PUSH 0x2                            ; 005095d2
        ;   Label: LAB_005095d2
    PUSH 0x0                            ; 005095d4
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005095d6
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005095db
    CMP EAX,0x1                         ; 005095de
    JNZ 0x005095a3                      ; 005095e1
        ;   XREF to: 005095a3 (CONDITIONAL_JUMP)  ; LAB_005095a3
    PUSH EBX                            ; 005095e3
    CALL core_charactr.cpp_FUN_0042e220 ; 005095e4
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005095e9
    POP EDI                             ; 005095ec
    POP ESI                             ; 005095ed
    POP EBX                             ; 005095ee
    RET                                 ; 005095ef

