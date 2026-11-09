; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flamecan_cpp_FUN_004a0920(CFlameCan *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   undefined4 DAT_00618170
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360
;   core_flame.cpp_CFlame_process_FUN_0049f2e0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0
;   core_mission.cpp_FUN_004fc7b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0920
        ;   Label: core_flamecan.cpp_FUN_004a0920
    SUB ESP,0x18                        ; 004a0921
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a0924
    LEA EAX,[EBX + 0x438]               ; 004a0928
    PUSH EAX                            ; 004a092e
    MOV EDX,dword ptr [0x006141f0]      ; 004a092f | DAT_006141f0
    PUSH EDX                            ; 004a0935
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004a0936
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a093b
    TEST EAX,EAX                        ; 004a093e
    JNZ 0x004a0950                      ; 004a0940
        ;   XREF to: 004a0950 (CONDITIONAL_JUMP)  ; LAB_004a0950
    CMP dword ptr [EBX + 0x430],0x0     ; 004a0942
    JNZ 0x004a0967                      ; 004a0949
        ;   XREF to: 004a0967 (CONDITIONAL_JUMP)  ; LAB_004a0967
    ADD ESP,0x18                        ; 004a094b
        ;   Label: LAB_004a094b
    POP EBX                             ; 004a094e
    RET                                 ; 004a094f
    PUSH EBX                            ; 004a0950
        ;   Label: LAB_004a0950
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0 ; 004a0951
        ;   XREF to: 004a08d0 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004a0956
    CMP dword ptr [EBX + 0x430],0x0     ; 004a0959
    JNZ 0x004a0967                      ; 004a0960
        ;   XREF to: 004a0967 (CONDITIONAL_JUMP)  ; LAB_004a0967
    ADD ESP,0x18                        ; 004a0962
    POP EBX                             ; 004a0965
    RET                                 ; 004a0966
    LEA EAX,[EBX + 0x49c]               ; 004a0967
        ;   Label: LAB_004a0967
    PUSH dword ptr [ESP + 0x24]         ; 004a096d
    PUSH EAX                            ; 004a0971
    CALL core_flame.cpp_CFlame_process_FUN_0049f2e0 ; 004a0972
        ;   XREF to: 0049f2e0 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_0049f2e0(CFlame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004a0977
    FLD float ptr [EBX + 0x434]         ; 004a097a
    FSUB float ptr [ESP + 0x24]         ; 004a0980
    FST float ptr [EBX + 0x434]         ; 004a0984
    FLDZ                                ; 004a098a
    FCOMPP                              ; 004a098c
    FNSTSW AX                           ; 004a098e
    SAHF                                ; 004a0990
    JC 0x004a094b                       ; 004a0991
        ;   XREF to: 004a094b (CONDITIONAL_JUMP)  ; LAB_004a094b
    PUSH EDI                            ; 004a0993
    PUSH ESI                            ; 004a0994
    PUSH 0x1                            ; 004a0995
    PUSH EBX                            ; 004a0997
    MOV ESI,dword ptr [0x00618170]      ; 004a0998 | DAT_00618170
    PUSH ESI                            ; 004a099e
    CALL core_mission.cpp_FUN_004fc7b0  ; 004a099f
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    ADD ESP,0xc                         ; 004a09a4
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004a09a7
    PUSH EBX                            ; 004a09ad
    LEA ESI,[ESP + 0xc]                 ; 004a09ae
    CALL dword ptr [EAX + 0x24]         ; 004a09b2
    ADD ESP,0x4                         ; 004a09b5
    PUSH 0x40800000                     ; 004a09b8
    PUSH 0x44bb8000                     ; 004a09bd
    ADD EBX,0x4bc                       ; 004a09c2
    PUSH 0x41800000                     ; 004a09c8
    PUSH EBX                            ; 004a09cd
    MOV EDI,dword ptr [0x00614d30]      ; 004a09ce | DAT_00614d30
    PUSH EDI                            ; 004a09d4
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360 ; 004a09d5
        ;   XREF to: 0049e360 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 004a09da
    POP ESI                             ; 004a09dd
    POP EDI                             ; 004a09de
    ADD ESP,0x18                        ; 004a09df
    POP EBX                             ; 004a09e2
    RET                                 ; 004a09e3

