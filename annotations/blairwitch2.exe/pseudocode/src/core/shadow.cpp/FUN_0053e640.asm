; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_shadow_cpp_FUN_0053e640(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005e66f9
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

    PUSH EBX                            ; 0053e640
        ;   Label: core_shadow.cpp_FUN_0053e640
    PUSH ESI                            ; 0053e641
    PUSH EDI                            ; 0053e642
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053e643
    CMP dword ptr [EBX + 0x10b70],0x0   ; 0053e647
    JNZ 0x0053e663                      ; 0053e64e
        ;   XREF to: 0053e663 (CONDITIONAL_JUMP)  ; LAB_0053e663
    MOV ECX,dword ptr [0x0060b280]      ; 0053e650 | DAT_0060b280
    PUSH ECX                            ; 0053e656 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0053e657
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053e65c
    TEST EAX,EAX                        ; 0053e65f
    JNZ 0x0053e6ad                      ; 0053e661
        ;   XREF to: 0053e6ad (CONDITIONAL_JUMP)  ; LAB_0053e6ad
    MOV ESI,dword ptr [0x0060b280]      ; 0053e663 | DAT_0060b280
        ;   Label: LAB_0053e663
    PUSH ESI                            ; 0053e669 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0053e66a
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053e66f
    TEST EAX,EAX                        ; 0053e672
    JZ 0x0053e68e                       ; 0053e674
        ;   XREF to: 0053e68e (CONDITIONAL_JUMP)  ; LAB_0053e68e
    PUSH 0x5e66f9                       ; 0053e676 | = "heroCanSee"
    MOV EDI,dword ptr [0x006141f0]      ; 0053e67b | DAT_006141f0
    PUSH EDI                            ; 0053e681
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0053e682
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0053e687
    TEST EAX,EAX                        ; 0053e68a
    JZ 0x0053e6af                       ; 0053e68c
        ;   XREF to: 0053e6af (CONDITIONAL_JUMP)  ; LAB_0053e6af
    MOV EAX,[0x00616494]                ; 0053e68e | g_CGamePtr
        ;   Label: LAB_0053e68e
    CMP dword ptr [EAX + 0x25c],0x0     ; 0053e693 | g_CGameInstance.field604_0x25c
    JZ 0x0053e6b3                       ; 0053e69a
        ;   XREF to: 0053e6b3 (CONDITIONAL_JUMP)  ; LAB_0053e6b3
    PUSH 0x2                            ; 0053e69c
    PUSH 0x0                            ; 0053e69e
    CALL core_actor.cpp_FUN_0040cfc0    ; 0053e6a0
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053e6a5
    CMP EAX,0x1                         ; 0053e6a8
    JZ 0x0053e6b3                       ; 0053e6ab
        ;   XREF to: 0053e6b3 (CONDITIONAL_JUMP)  ; LAB_0053e6b3
    XOR EAX,EAX                         ; 0053e6ad
        ;   Label: LAB_0053e6ad
    POP EDI                             ; 0053e6af
        ;   Label: LAB_0053e6af
    POP ESI                             ; 0053e6b0
    POP EBX                             ; 0053e6b1
    RET                                 ; 0053e6b2
    PUSH EBX                            ; 0053e6b3
        ;   Label: LAB_0053e6b3
    CALL core_charactr.cpp_FUN_004254b0 ; 0053e6b4
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 0053e6b9
    POP EDI                             ; 0053e6bc
    POP ESI                             ; 0053e6bd
    POP EBX                             ; 0053e6be
    RET                                 ; 0053e6bf

