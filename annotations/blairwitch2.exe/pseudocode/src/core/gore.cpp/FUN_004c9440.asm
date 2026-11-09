; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004c9440(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_set.cpp_FUN_0052ef80 at 0052f163
;   core_set.cpp_FUN_0052f2a0 at 0052f5cc
;   core_set.cpp_FUN_0052fad0 at 0052fce6
;   core_set.cpp_FUN_0052fea0 at 005300a7
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field20_0x14
;   undefined4 g_BloodParticles[0].field36_0x24
;   undefined4 g_BloodParticles[0].field60_0x3c
;   undefined4 g_BloodParticles[1].field36_0x24
;   undefined4 g_BloodParticles[1].field60_0x3c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_gore.cpp_FUN_004c7490
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9440
        ;   Label: core_gore.cpp_FUN_004c9440
    PUSH ESI                            ; 004c9441
    PUSH EBP                            ; 004c9442
    MOV EBP,ESP                         ; 004c9443
    AND ESP,0xfffffff8                  ; 004c9445
    MOV EAX,[0x00616494]                ; 004c9448 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x14],0x0      ; 004c944d | g_CGameInstance.field20_0x14
    JNZ 0x004c9459                      ; 004c9451
        ;   XREF to: 004c9459 (CONDITIONAL_JUMP)  ; LAB_004c9459
    MOV ESP,EBP                         ; 004c9453
        ;   Label: LAB_004c9453
    POP EBP                             ; 004c9455
    POP ESI                             ; 004c9456
    POP EBX                             ; 004c9457
    RET                                 ; 004c9458
    MOV ECX,dword ptr [0x0060b280]      ; 004c9459 | DAT_0060b280
        ;   Label: LAB_004c9459
    PUSH ECX                            ; 004c945f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004c9460
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c9465
    TEST EAX,EAX                        ; 004c9468
    JNZ 0x004c9453                      ; 004c946a
        ;   XREF to: 004c9453 (CONDITIONAL_JUMP)  ; LAB_004c9453
    PUSH EAX                            ; 004c946c
    PUSH EAX                            ; 004c946d
    PUSH EAX                            ; 004c946e
    PUSH EAX                            ; 004c946f
    PUSH EAX                            ; 004c9470
    MOV EBX,dword ptr [0x0061b5a8]      ; 004c9471 | g_CDemonSetPtr
    PUSH EBX                            ; 004c9477 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980 ; 004c9478
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004c947d
    PUSH 0x1cb82f4                      ; 004c9480
    MOV EBX,0x1cb82f4                   ; 004c9485
    CALL core_gore.cpp_FUN_004c7490     ; 004c948a
        ;   XREF to: 004c7490 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004c7490()
    LEA ESI,[EBX + 0x4800]              ; 004c948f
    ADD ESP,0x4                         ; 004c9495
    FLD float ptr [EBX + 0x24]          ; 004c9498 | g_BloodParticles[0].field36_0x24 | g_BloodParticles[1].field36_0x24
        ;   Label: LAB_004c9498
    FLDZ                                ; 004c949b
    FCOMPP                              ; 004c949d
    FNSTSW AX                           ; 004c949f
    SAHF                                ; 004c94a1
    JNC 0x004c94ae                      ; 004c94a2
        ;   XREF to: 004c94ae (CONDITIONAL_JUMP)  ; LAB_004c94ae
    PUSH EBX                            ; 004c94a4
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004c94a5 | g_BloodParticles[0].field60_0x3c | g_BloodParticles[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004c94a8
    ADD ESP,0x4                         ; 004c94ab
    ADD EBX,0x48                        ; 004c94ae
        ;   Label: LAB_004c94ae
    CMP EBX,ESI                         ; 004c94b1
    JZ 0x004c9453                       ; 004c94b3
        ;   XREF to: 004c9453 (CONDITIONAL_JUMP)  ; LAB_004c9453
    JMP 0x004c9498                      ; 004c94b5
        ;   XREF to: 004c9498 (UNCONDITIONAL_JUMP)  ; LAB_004c9498

