; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_shadowsc_cpp_FUN_00561120(CCharacter *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005f193b
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4d0
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01bc120c
;   undefined4 g_CGameInstance.field604_0x25c
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc60
;   core_charactr.cpp_FUN_0042f240
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561120
        ;   Label: core_shadowsc.cpp_FUN_00561120
    PUSH 0x5f193b                       ; 00561121 | = "heroCanSee"
    MOV EDX,dword ptr [0x0061b4d0]      ; 00561126 | DAT_0061b4d0
    PUSH EDX                            ; 0056112c
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0056112d
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00561132
    TEST EAX,EAX                        ; 00561135
    JZ 0x00561156                       ; 00561137
        ;   XREF to: 00561156 (CONDITIONAL_JUMP)  ; LAB_00561156
    MOV EAX,dword ptr [ESP + 0x8]       ; 00561139
    CMP dword ptr [EAX + 0xc298],0x0    ; 0056113d
    JZ 0x00561158                       ; 00561144
        ;   XREF to: 00561158 (CONDITIONAL_JUMP)  ; LAB_00561158
    MOV EAX,[0x0061d95c]                ; 00561146 | g_CGamePtr
        ;   Label: LAB_00561146
    CMP dword ptr [EAX + 0x25c],0x0     ; 0056114b | g_CGameInstance.field604_0x25c
    JNZ 0x0056116f                      ; 00561152
        ;   XREF to: 0056116f (CONDITIONAL_JUMP)  ; LAB_0056116f
    XOR EAX,EAX                         ; 00561154
        ;   Label: LAB_00561154
    POP EBX                             ; 00561156
        ;   Label: LAB_00561156
    RET                                 ; 00561157
    MOV EBX,dword ptr [0x00612560]      ; 00561158 | DAT_00612560
        ;   Label: LAB_00561158
    PUSH EBX                            ; 0056115e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0056115f
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00561164
    TEST EAX,EAX                        ; 00561167
    JZ 0x00561146                       ; 00561169
        ;   XREF to: 00561146 (CONDITIONAL_JUMP)  ; LAB_00561146
    XOR EAX,EAX                         ; 0056116b
    POP EBX                             ; 0056116d
    RET                                 ; 0056116e
    PUSH 0x2                            ; 0056116f
        ;   Label: LAB_0056116f
    PUSH 0x0                            ; 00561171
    CALL core_actor.cpp_FUN_0040cc60    ; 00561173
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00561178
    CMP EAX,0x1                         ; 0056117b
    JNZ 0x00561154                      ; 0056117e
        ;   XREF to: 00561154 (CONDITIONAL_JUMP)  ; LAB_00561154
    PUSH EDI                            ; 00561180
    MOV EDI,dword ptr [ESP + 0xc]       ; 00561181
    PUSH EDI                            ; 00561185
    CALL core_charactr.cpp_FUN_0042f240 ; 00561186
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0056118b
    POP EDI                             ; 0056118e
    POP EBX                             ; 0056118f
    RET                                 ; 00561190

