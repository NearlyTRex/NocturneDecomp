; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gargoyle.cpp_CGargoyle_unk5_FUN_004e53f0()
;
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.lighting_quality_mode
;   undefined4 DAT_0326f100
;   undefined4 DAT_0326f104
;   undefined4 DAT_0326f108
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e53f0
        ;   Label: core_gargoyle.cpp_CGargoyle_unk5_FUN_004e53f0
    MOV EAX,[0x0067d550]                ; 004e53f4 | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 004e53f9 | DAT_02f33744
    JZ 0x004e5459                       ; 004e53fd | LAB_004e5459
        ;   XREF to: 004e5459 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004e53ff
    MOV EAX,[0x006810c8]                ; 004e5400 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    MOV EBX,dword ptr [EAX + 0x15ac80]  ; 004e5405 | g_CDemonSetInstance.lighting_quality_mode
    MOV dword ptr [EAX + 0x15ac80],0x3  ; 004e540b | g_CDemonSetInstance.lighting_quality_mode
    MOV ECX,dword ptr [EDX + 0xbeec]    ; 004e5415
    SHL ECX,0x8                         ; 004e541b
    MOV dword ptr [EAX + 0x15ae88],ECX  ; 004e541e | DAT_0326f100
    MOV ECX,dword ptr [EDX + 0xbef0]    ; 004e5424
    SHL ECX,0x8                         ; 004e542a
    MOV dword ptr [EAX + 0x15ae8c],ECX  ; 004e542d | DAT_0326f104
    MOV ECX,dword ptr [EDX + 0xbef4]    ; 004e5433
    SHL ECX,0x8                         ; 004e5439
    PUSH EDX                            ; 004e543c
    MOV dword ptr [EAX + 0x15ae90],ECX  ; 004e543d | DAT_0326f108
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 004e5443 | int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x006810c8]      ; 004e5448 | CDemonSet * g_CDemonSetPtr
    ADD ESP,0x4                         ; 004e544e
    MOV dword ptr [EDX + 0x15ac80],EBX  ; 004e5451 | g_CDemonSetInstance.lighting_quality_mode
    POP EBX                             ; 004e5457
    RET                                 ; 004e5458
    PUSH EDX                            ; 004e5459
        ;   Label: LAB_004e5459
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 004e545a | int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e545f
    RET                                 ; 004e5462

