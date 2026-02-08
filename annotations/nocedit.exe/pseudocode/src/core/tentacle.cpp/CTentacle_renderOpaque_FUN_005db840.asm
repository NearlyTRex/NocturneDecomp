; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_tentacle_cpp_CTentacle_renderOpaque_FUN_005db840(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005db840
        ;   Label: core_tentacle.cpp_CTentacle_renderOpaque_FUN_005db840
    MOV EBX,dword ptr [ESP + 0x8]       ; 005db841
    PUSH EBX                            ; 005db845
    MOV EAX,dword ptr [EBX + 0x154]     ; 005db846
    CALL dword ptr [EAX + 0x68]         ; 005db84c
    ADD ESP,0x4                         ; 005db84f
    TEST EAX,EAX                        ; 005db852
    JZ 0x005db86c                       ; 005db854
        ;   XREF to: 005db86c (CONDITIONAL_JUMP)  ; LAB_005db86c
    MOV EAX,[0x0067d550]                ; 005db856 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 005db85b | DAT_02f33744
    JZ 0x005db877                       ; 005db85f
        ;   XREF to: 005db877 (CONDITIONAL_JUMP)  ; LAB_005db877
    PUSH 0x3                            ; 005db861
    PUSH EBX                            ; 005db863
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 005db864
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    ADD ESP,0x8                         ; 005db869
    PUSH EBX                            ; 005db86c
        ;   Label: LAB_005db86c
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 005db86d
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005db872
    POP EBX                             ; 005db875
    RET                                 ; 005db876
    XOR EAX,EAX                         ; 005db877
        ;   Label: LAB_005db877
    POP EBX                             ; 005db879
    RET                                 ; 005db87a

