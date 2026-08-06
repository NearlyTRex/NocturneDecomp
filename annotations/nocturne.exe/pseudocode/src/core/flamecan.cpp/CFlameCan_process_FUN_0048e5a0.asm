; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_0048e5a0(CFlameCan *this_ptr,float delta_time)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
;
; Referenced Globals:
;   float FLOAT_00581657 = 0.5
;   undefined4 DAT_005b7650
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   undefined4 DAT_01cc9450
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_fire.cpp_CFireEffect_FUN_0048c0d0
;   core_flame.cpp_CFlame_process_FUN_0048d0c0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e5a0
        ;   Label: core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0
    SUB ESP,0x3c                        ; 0048e5a1
    MOV EBX,dword ptr [ESP + 0x44]      ; 0048e5a4
    LEA EAX,[EBX + 0x2d4]               ; 0048e5a8
    PUSH EAX                            ; 0048e5ae
    MOV EDX,dword ptr [0x005b7650]      ; 0048e5af | DAT_005b7650
    PUSH EDX                            ; 0048e5b5
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0048e5b6
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0048e5bb
    TEST EAX,EAX                        ; 0048e5be
    JNZ 0x0048e5d0                      ; 0048e5c0
        ;   XREF to: 0048e5d0 (CONDITIONAL_JUMP)  ; LAB_0048e5d0
    CMP dword ptr [EBX + 0x2cc],0x0     ; 0048e5c2
    JNZ 0x0048e5e7                      ; 0048e5c9
        ;   XREF to: 0048e5e7 (CONDITIONAL_JUMP)  ; LAB_0048e5e7
    ADD ESP,0x3c                        ; 0048e5cb
        ;   Label: LAB_0048e5cb
    POP EBX                             ; 0048e5ce
    RET                                 ; 0048e5cf
    PUSH EBX                            ; 0048e5d0
        ;   Label: LAB_0048e5d0
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550 ; 0048e5d1
        ;   XREF to: 0048e550 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0048e5d6
    CMP dword ptr [EBX + 0x2cc],0x0     ; 0048e5d9
    JNZ 0x0048e5e7                      ; 0048e5e0
        ;   XREF to: 0048e5e7 (CONDITIONAL_JUMP)  ; LAB_0048e5e7
    ADD ESP,0x3c                        ; 0048e5e2
    POP EBX                             ; 0048e5e5
    RET                                 ; 0048e5e6
    LEA EAX,[EBX + 0x338]               ; 0048e5e7
        ;   Label: LAB_0048e5e7
    PUSH dword ptr [ESP + 0x48]         ; 0048e5ed
    PUSH EAX                            ; 0048e5f1
    CALL core_flame.cpp_CFlame_process_FUN_0048d0c0 ; 0048e5f2
        ;   XREF to: 0048d0c0 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_0048d0c0(CFlame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0048e5f7
    FLD float ptr [EBX + 0x2d0]         ; 0048e5fa
    FSUB float ptr [ESP + 0x48]         ; 0048e600
    FST float ptr [EBX + 0x2d0]         ; 0048e604
    FLDZ                                ; 0048e60a
    FCOMPP                              ; 0048e60c
    FNSTSW AX                           ; 0048e60e
    SAHF                                ; 0048e610
    JC 0x0048e5cb                       ; 0048e611
        ;   XREF to: 0048e5cb (CONDITIONAL_JUMP)  ; LAB_0048e5cb
    PUSH EDI                            ; 0048e613
    PUSH ESI                            ; 0048e614
    PUSH 0x1                            ; 0048e615
    PUSH EBX                            ; 0048e617
    MOV ESI,dword ptr [0x005baf90]      ; 0048e618 | g_CDemonMission_PTR_005baf90
    PUSH ESI                            ; 0048e61e | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110 ; 0048e61f
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0048e624
    LEA EDX,[ESP + 0x8]                 ; 0048e627
    PUSH EDX                            ; 0048e62b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0048e62c
    PUSH EBX                            ; 0048e632
    CALL dword ptr [EAX + 0x14]         ; 0048e633
    ADD ESP,0x8                         ; 0048e636
    FLD float ptr [ESP + 0x14]          ; 0048e639
    FSUB float ptr [ESP + 0x8]          ; 0048e63d
    FST float ptr [ESP + 0x38]          ; 0048e641
    FLD float ptr [0x00581657]          ; 0048e645 | FLOAT_00581657
    FXCH                                ; 0048e64b
    FMUL ST1                            ; 0048e64d
    FLD float ptr [ESP + 0x1c]          ; 0048e64f
    FLD float ptr [ESP + 0x18]          ; 0048e653
    FSUB float ptr [ESP + 0xc]          ; 0048e657
    FXCH                                ; 0048e65b
    FSUB float ptr [ESP + 0x10]         ; 0048e65d
    FXCH                                ; 0048e661
    FST float ptr [ESP + 0x3c]          ; 0048e663
    FMUL ST3                            ; 0048e667
    FXCH                                ; 0048e669
    FST float ptr [ESP + 0x40]          ; 0048e66b
    FMULP ST3                           ; 0048e66f
    MOV EDI,dword ptr [0x005b80f0]      ; 0048e671 | g_CFireEffect_PTR_005b80f0
    PUSH 0x40800000                     ; 0048e677
    LEA EAX,[EBX + 0x20]                ; 0048e67c
    PUSH 0x44bb8000                     ; 0048e67f
    ADD EBX,0x358                       ; 0048e684
    FXCH                                ; 0048e68a
    FSTP float ptr [ESP + 0x34]         ; 0048e68c
    FSTP float ptr [ESP + 0x38]         ; 0048e690
    FSTP float ptr [ESP + 0x3c]         ; 0048e694
    FLD float ptr [EAX]                 ; 0048e698
    FADD float ptr [ESP + 0x34]         ; 0048e69a
    PUSH 0x41800000                     ; 0048e69e
    FSTP float ptr [ESP + 0x2c]         ; 0048e6a3
    FLD float ptr [EAX + 0x4]           ; 0048e6a7
    FADD float ptr [ESP + 0x3c]         ; 0048e6aa
    PUSH EBX                            ; 0048e6ae
    FSTP float ptr [ESP + 0x34]         ; 0048e6af
    FLD float ptr [EAX + 0x8]           ; 0048e6b3
    FADD float ptr [ESP + 0x44]         ; 0048e6b6
    PUSH EDI                            ; 0048e6ba
    FSTP float ptr [ESP + 0x3c]         ; 0048e6bb
    CALL core_fire.cpp_CFireEffect_FUN_0048c0d0 ; 0048e6bf
        ;   XREF to: 0048c0d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_0048c0d0(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 0048e6c4
    POP ESI                             ; 0048e6c7
    POP EDI                             ; 0048e6c8
    ADD ESP,0x3c                        ; 0048e6c9
    POP EBX                             ; 0048e6cc
    RET                                 ; 0048e6cd

