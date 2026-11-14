; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shadow_cpp_CShadow_renderOpaque_FUN_0055fbf0(CShadow *this_ptr)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_heroCanSee_005f1734
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b4d0
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01bc120c
;   undefined4 g_CGameInstance.goggles_active
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fbf0
        ;   Label: core_shadow.cpp_CShadow_renderOpaque_FUN_0055fbf0
    PUSH ESI                            ; 0055fbf1
    PUSH EDI                            ; 0055fbf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055fbf3
    CMP dword ptr [EBX + 0xc2fc],0x0    ; 0055fbf7
    JNZ 0x0055fc13                      ; 0055fbfe
        ;   XREF to: 0055fc13 (CONDITIONAL_JUMP)  ; LAB_0055fc13
    MOV ECX,dword ptr [0x00612560]      ; 0055fc00 | DAT_00612560
    PUSH ECX                            ; 0055fc06 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0055fc07
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0055fc0c
    TEST EAX,EAX                        ; 0055fc0f
    JNZ 0x0055fc57                      ; 0055fc11
        ;   XREF to: 0055fc57 (CONDITIONAL_JUMP)  ; LAB_0055fc57
    MOV ESI,dword ptr [0x00612560]      ; 0055fc13 | DAT_00612560
        ;   Label: LAB_0055fc13
    PUSH ESI                            ; 0055fc19 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0055fc1a
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0055fc1f
    TEST EAX,EAX                        ; 0055fc22
    JZ 0x0055fc3e                       ; 0055fc24
        ;   XREF to: 0055fc3e (CONDITIONAL_JUMP)  ; LAB_0055fc3e
    PUSH 0x5f1734                       ; 0055fc26 | = "heroCanSee"
    MOV EDI,dword ptr [0x0061b4d0]      ; 0055fc2b | DAT_0061b4d0
    PUSH EDI                            ; 0055fc31
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0055fc32
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055fc37
    TEST EAX,EAX                        ; 0055fc3a
    JZ 0x0055fc53                       ; 0055fc3c
        ;   XREF to: 0055fc53 (CONDITIONAL_JUMP)  ; LAB_0055fc53
    MOV EAX,[0x0061d95c]                ; 0055fc3e | g_CGamePtr
        ;   Label: LAB_0055fc3e
    CMP dword ptr [EAX + 0x25c],0x0     ; 0055fc43 | g_CGameInstance.goggles_active
    PUSH EBX                            ; 0055fc4a
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 0055fc4b
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0055fc50
    POP EDI                             ; 0055fc53
        ;   Label: LAB_0055fc53
    POP ESI                             ; 0055fc54
    POP EBX                             ; 0055fc55
    RET                                 ; 0055fc56
    XOR EAX,EAX                         ; 0055fc57
        ;   Label: LAB_0055fc57
    POP EDI                             ; 0055fc59
    POP ESI                             ; 0055fc5a
    POP EBX                             ; 0055fc5b
    RET                                 ; 0055fc5c

