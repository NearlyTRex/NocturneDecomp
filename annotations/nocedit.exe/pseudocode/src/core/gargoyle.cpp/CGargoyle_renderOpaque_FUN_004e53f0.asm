; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_CGargoyle_renderOpaque_FUN_004e53f0(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonMission g_CDemonMissionInstance
;   undefined4 g_CDemonMissionInstance.is_in_editor
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.lighting_quality_mode
;   undefined4 g_CDemonSetInstance.flat_color.r
;   undefined4 g_CDemonSetInstance.flat_color.g
;   undefined4 g_CDemonSetInstance.flat_color.b
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e53f0
        ;   Label: core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004e53f0
    MOV EAX,[0x0067d550]                ; 004e53f4 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 004e53f9 | g_CDemonMissionInstance.is_in_editor
    JZ 0x004e5459                       ; 004e53fd
        ;   XREF to: 004e5459 (CONDITIONAL_JUMP)  ; LAB_004e5459
    PUSH EBX                            ; 004e53ff
    MOV EAX,[0x006810c8]                ; 004e5400 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EBX,dword ptr [EAX + 0x15ac80]  ; 004e5405 | g_CDemonSetInstance.lighting_quality_mode
    MOV dword ptr [EAX + 0x15ac80],0x3  ; 004e540b | g_CDemonSetInstance.lighting_quality_mode
    MOV ECX,dword ptr [EDX + 0xbeec]    ; 004e5415
    SHL ECX,0x8                         ; 004e541b
    MOV dword ptr [EAX + 0x15ae88],ECX  ; 004e541e | g_CDemonSetInstance.flat_color.r
    MOV ECX,dword ptr [EDX + 0xbef0]    ; 004e5424
    SHL ECX,0x8                         ; 004e542a
    MOV dword ptr [EAX + 0x15ae8c],ECX  ; 004e542d | g_CDemonSetInstance.flat_color.g
    MOV ECX,dword ptr [EDX + 0xbef4]    ; 004e5433
    SHL ECX,0x8                         ; 004e5439
    PUSH EDX                            ; 004e543c
    MOV dword ptr [EAX + 0x15ae90],ECX  ; 004e543d | g_CDemonSetInstance.flat_color.b
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 004e5443
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    MOV EDX,dword ptr [0x006810c8]      ; 004e5448 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004e544e
    MOV dword ptr [EDX + 0x15ac80],EBX  ; 004e5451 | g_CDemonSetInstance.lighting_quality_mode
    POP EBX                             ; 004e5457
    RET                                 ; 004e5458
    PUSH EDX                            ; 004e5459
        ;   Label: LAB_004e5459
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 004e545a
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e545f
    RET                                 ; 004e5462

