; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004bf390(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c7171
;
; Referenced Globals:
;   float FLOAT_00629c0b = 30
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf390
        ;   Label: core_fire.cpp_CSmokeParticle_process_FUN_004bf390
    SUB ESP,0x20                        ; 004bf391
    MOV EBX,dword ptr [ESP + 0x28]      ; 004bf394
    MOV EAX,[0x0067b654]                ; 004bf398 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 004bf39d | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x18],EAX      ; 004bf3a3
    FLD float ptr [ESP + 0x18]          ; 004bf3a7
    FMUL float ptr [0x00629c0b]         ; 004bf3ab | FLOAT_00629c0b
    FADD float ptr [EBX + 0x18]         ; 004bf3b1
    FSTP float ptr [EBX + 0x18]         ; 004bf3b4
    CMP dword ptr [EBX + 0x18],0x42200000 ; 004bf3b7
    JL 0x004bf3cb                       ; 004bf3be
        ;   XREF to: 004bf3cb (CONDITIONAL_JUMP)  ; LAB_004bf3cb
    MOV dword ptr [EBX],0x0             ; 004bf3c0
    ADD ESP,0x20                        ; 004bf3c6
    POP EBX                             ; 004bf3c9
    RET                                 ; 004bf3ca
    FLD float ptr [ESP + 0x18]          ; 004bf3cb
        ;   Label: LAB_004bf3cb
    FMUL float ptr [EBX + 0x10]         ; 004bf3cf
    FMUL float ptr [EBX + 0x14]         ; 004bf3d2
    PUSH 0x3f800000                     ; 004bf3d5
    FADD float ptr [EBX + 0x8]          ; 004bf3da
    PUSH 0xbf800000                     ; 004bf3dd
    FSTP float ptr [EBX + 0x8]          ; 004bf3e2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004bf3e5
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x24],EAX      ; 004bf3ea
    FLD float ptr [ESP + 0x24]          ; 004bf3ee
    ADD ESP,0x8                         ; 004bf3f2
    FMUL float ptr [ESP + 0x18]         ; 004bf3f5
    PUSH 0x3f800000                     ; 004bf3f9
    FADD float ptr [EBX + 0x4]          ; 004bf3fe
    PUSH 0xbf800000                     ; 004bf401
    FSTP float ptr [EBX + 0x4]          ; 004bf406
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004bf409
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x24],EAX      ; 004bf40e
    FLD float ptr [ESP + 0x24]          ; 004bf412
    ADD ESP,0x8                         ; 004bf416
    FMUL float ptr [ESP + 0x18]         ; 004bf419
    FADD float ptr [EBX + 0xc]          ; 004bf41d
    LEA EAX,[EBX + 0x1c]                ; 004bf420
    FSTP float ptr [EBX + 0xc]          ; 004bf423
    FLD float ptr [EAX]                 ; 004bf426
    FMUL float ptr [ESP + 0x18]         ; 004bf428
    FSTP float ptr [ESP + 0xc]          ; 004bf42c
    FLD float ptr [EAX + 0x4]           ; 004bf430
    FMUL float ptr [ESP + 0x18]         ; 004bf433
    FSTP float ptr [ESP + 0x10]         ; 004bf437
    FLD float ptr [EAX + 0x8]           ; 004bf43b
    FMUL float ptr [ESP + 0x18]         ; 004bf43e
    LEA EAX,[EBX + 0x4]                 ; 004bf442
    FSTP float ptr [ESP + 0x14]         ; 004bf445
    FLD float ptr [EAX]                 ; 004bf449
    FADD float ptr [ESP + 0xc]          ; 004bf44b
    FLD float ptr [EAX + 0x4]           ; 004bf44f
    FXCH                                ; 004bf452
    FSTP float ptr [EAX]                ; 004bf454
    FADD float ptr [ESP + 0x10]         ; 004bf456
    FLD float ptr [EAX + 0x8]           ; 004bf45a
    FXCH                                ; 004bf45d
    FSTP float ptr [EAX + 0x4]          ; 004bf45f
    FADD float ptr [ESP + 0x14]         ; 004bf462
    MOV EBX,dword ptr [0x006810c8]      ; 004bf466 | g_CDemonSetPtr
    FSTP float ptr [EAX + 0x8]          ; 004bf46c
    FLD float ptr [EBX + 0x15ac60]      ; 004bf46f | g_CDemonSetInstance.active_fog.scroll.x
    FMUL float ptr [ESP + 0x18]         ; 004bf475
    FSTP float ptr [ESP]                ; 004bf479
    FLD float ptr [EBX + 0x15ac64]      ; 004bf47c | g_CDemonSetInstance.active_fog.scroll.y
    FMUL float ptr [ESP + 0x18]         ; 004bf482
    FSTP float ptr [ESP + 0x4]          ; 004bf486
    FLD float ptr [EBX + 0x15ac68]      ; 004bf48a | g_CDemonSetInstance.active_fog.scroll.z
    FMUL float ptr [ESP + 0x18]         ; 004bf490
    FSTP float ptr [ESP + 0x8]          ; 004bf494
    FLD float ptr [EAX]                 ; 004bf498
    FADD float ptr [ESP]                ; 004bf49a
    FLD float ptr [EAX + 0x4]           ; 004bf49d
    FXCH                                ; 004bf4a0
    FSTP float ptr [EAX]                ; 004bf4a2
    FADD float ptr [ESP + 0x4]          ; 004bf4a4
    FLD float ptr [EAX + 0x8]           ; 004bf4a8
    FXCH                                ; 004bf4ab
    FSTP float ptr [EAX + 0x4]          ; 004bf4ad
    FADD float ptr [ESP + 0x8]          ; 004bf4b0
    FSTP float ptr [EAX + 0x8]          ; 004bf4b4
    ADD ESP,0x20                        ; 004bf4b7
    POP EBX                             ; 004bf4ba
    RET                                 ; 004bf4bb

