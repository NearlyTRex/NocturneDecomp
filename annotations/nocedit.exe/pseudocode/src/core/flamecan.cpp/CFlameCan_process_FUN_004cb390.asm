; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004cb390(CFlameCan *this_ptr,float delta_time)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x40]:1  local_40
;
; Referenced Globals:
;   float FLOAT_0062a2e8 = 0.5
;   CEventList* g_CEventListPtr = 02d05310
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CEventList g_CEventListInstance
;   CFireEffect g_CFireEffectInstance
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_fire.cpp_CFireEffect_FUN_004c8c10
;   core_flame.cpp_FUN_004c9c00
;   core_flamecan.cpp_CFlameCan_FUN_004cb340
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb390
        ;   Label: core_flamecan.cpp_CFlameCan_process_FUN_004cb390
    SUB ESP,0x3c                        ; 004cb391
    MOV EBX,dword ptr [ESP + 0x44]      ; 004cb394
    LEA EAX,[EBX + 0x2dc]               ; 004cb398
    PUSH EAX                            ; 004cb39e
    MOV EDX,dword ptr [0x006793d0]      ; 004cb39f | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 004cb3a5 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004cb3a6
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004cb3ab
    TEST EAX,EAX                        ; 004cb3ae
    JNZ 0x004cb3c0                      ; 004cb3b0
        ;   XREF to: 004cb3c0 (CONDITIONAL_JUMP)  ; LAB_004cb3c0
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004cb3b2
    JNZ 0x004cb3d7                      ; 004cb3b9
        ;   XREF to: 004cb3d7 (CONDITIONAL_JUMP)  ; LAB_004cb3d7
    ADD ESP,0x3c                        ; 004cb3bb
        ;   Label: LAB_004cb3bb
    POP EBX                             ; 004cb3be
    RET                                 ; 004cb3bf
    PUSH EBX                            ; 004cb3c0
        ;   Label: LAB_004cb3c0
    CALL core_flamecan.cpp_CFlameCan_FUN_004cb340 ; 004cb3c1
        ;   XREF to: 004cb340 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_FUN_004cb340(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004cb3c6
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004cb3c9
    JNZ 0x004cb3d7                      ; 004cb3d0
        ;   XREF to: 004cb3d7 (CONDITIONAL_JUMP)  ; LAB_004cb3d7
    ADD ESP,0x3c                        ; 004cb3d2
    POP EBX                             ; 004cb3d5
    RET                                 ; 004cb3d6
    LEA EAX,[EBX + 0x340]               ; 004cb3d7
        ;   Label: LAB_004cb3d7
    PUSH dword ptr [ESP + 0x48]         ; 004cb3dd
    PUSH EAX                            ; 004cb3e1
    CALL core_flame.cpp_FUN_004c9c00    ; 004cb3e2
        ;   XREF to: 004c9c00 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_FUN_004c9c00()
    ADD ESP,0x8                         ; 004cb3e7
    FLD float ptr [EBX + 0x2d8]         ; 004cb3ea
    FSUB float ptr [ESP + 0x48]         ; 004cb3f0
    FST float ptr [EBX + 0x2d8]         ; 004cb3f4
    FLDZ                                ; 004cb3fa
    FCOMPP                              ; 004cb3fc
    FNSTSW AX                           ; 004cb3fe
    SAHF                                ; 004cb400
    JC 0x004cb3bb                       ; 004cb401
        ;   XREF to: 004cb3bb (CONDITIONAL_JUMP)  ; LAB_004cb3bb
    PUSH EDI                            ; 004cb403
    PUSH ESI                            ; 004cb404
    PUSH 0x1                            ; 004cb405
    PUSH EBX                            ; 004cb407
    MOV ESI,dword ptr [0x0067d550]      ; 004cb408 | g_CDemonMissionPtr
    PUSH ESI                            ; 004cb40e | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 004cb40f
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr)
    ADD ESP,0xc                         ; 004cb414
    LEA EDX,[ESP + 0x8]                 ; 004cb417
    PUSH EDX                            ; 004cb41b
    MOV EAX,dword ptr [EBX + 0x154]     ; 004cb41c
    PUSH EBX                            ; 004cb422
    CALL dword ptr [EAX + 0x14]         ; 004cb423
    ADD ESP,0x8                         ; 004cb426
    FLD float ptr [ESP + 0x14]          ; 004cb429
    FSUB float ptr [ESP + 0x8]          ; 004cb42d
    FST float ptr [ESP + 0x38]          ; 004cb431
    FLD float ptr [0x0062a2e8]          ; 004cb435 | FLOAT_0062a2e8
    FXCH                                ; 004cb43b
    FMUL ST1                            ; 004cb43d
    FLD float ptr [ESP + 0x1c]          ; 004cb43f
    FLD float ptr [ESP + 0x18]          ; 004cb443
    FSUB float ptr [ESP + 0xc]          ; 004cb447
    FXCH                                ; 004cb44b
    FSUB float ptr [ESP + 0x10]         ; 004cb44d
    FXCH                                ; 004cb451
    FST float ptr [ESP + 0x3c]          ; 004cb453
    FMUL ST3                            ; 004cb457
    FXCH                                ; 004cb459
    FST float ptr [ESP + 0x40]          ; 004cb45b
    FMULP ST3                           ; 004cb45f
    MOV EDI,dword ptr [0x0067a3d0]      ; 004cb461 | g_CFireEffectPtr
    PUSH 0x40800000                     ; 004cb467
    LEA EAX,[EBX + 0x20]                ; 004cb46c
    PUSH 0x44bb8000                     ; 004cb46f
    ADD EBX,0x360                       ; 004cb474
    FXCH                                ; 004cb47a
    FSTP float ptr [ESP + 0x34]         ; 004cb47c
    FSTP float ptr [ESP + 0x38]         ; 004cb480
    FSTP float ptr [ESP + 0x3c]         ; 004cb484
    FLD float ptr [EAX]                 ; 004cb488
    FADD float ptr [ESP + 0x34]         ; 004cb48a
    PUSH 0x41800000                     ; 004cb48e
    FSTP float ptr [ESP + 0x2c]         ; 004cb493
    FLD float ptr [EAX + 0x4]           ; 004cb497
    FADD float ptr [ESP + 0x3c]         ; 004cb49a
    PUSH EBX                            ; 004cb49e
    FSTP float ptr [ESP + 0x34]         ; 004cb49f
    FLD float ptr [EAX + 0x8]           ; 004cb4a3
    FADD float ptr [ESP + 0x44]         ; 004cb4a6
    PUSH EDI                            ; 004cb4aa | g_CFireEffectInstance
    FSTP float ptr [ESP + 0x3c]         ; 004cb4ab
    CALL core_fire.cpp_CFireEffect_FUN_004c8c10 ; 004cb4af
        ;   XREF to: 004c8c10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c8c10(CFireEffect * this_ptr)
    ADD ESP,0x14                        ; 004cb4b4
    POP ESI                             ; 004cb4b7
    POP EDI                             ; 004cb4b8
    ADD ESP,0x3c                        ; 004cb4b9
    POP EBX                             ; 004cb4bc
    RET                                 ; 004cb4bd

