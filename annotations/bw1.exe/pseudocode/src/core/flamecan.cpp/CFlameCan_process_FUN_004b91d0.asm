; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004b91d0(CFlameCan *this_ptr,float delta_time)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061c010
;   undefined4 DAT_0061f650
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60
;   core_flame.cpp_CFlame_process_FUN_004b7b90
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
;   core_mission.cpp_FUN_0051b740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b91d0
        ;   Label: core_flamecan.cpp_CFlameCan_process_FUN_004b91d0
    SUB ESP,0x18                        ; 004b91d1
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b91d4
    LEA EAX,[EBX + 0x2dc]               ; 004b91d8
    PUSH EAX                            ; 004b91de
    MOV EDX,dword ptr [0x0061b4d0]      ; 004b91df | DAT_0061b4d0
    PUSH EDX                            ; 004b91e5
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004b91e6
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004b91eb
    TEST EAX,EAX                        ; 004b91ee
    JNZ 0x004b9200                      ; 004b91f0
        ;   XREF to: 004b9200 (CONDITIONAL_JUMP)  ; LAB_004b9200
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004b91f2
    JNZ 0x004b9217                      ; 004b91f9
        ;   XREF to: 004b9217 (CONDITIONAL_JUMP)  ; LAB_004b9217
    ADD ESP,0x18                        ; 004b91fb
        ;   Label: LAB_004b91fb
    POP EBX                             ; 004b91fe
    RET                                 ; 004b91ff
    PUSH EBX                            ; 004b9200
        ;   Label: LAB_004b9200
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180 ; 004b9201
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004b9206
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004b9209
    JNZ 0x004b9217                      ; 004b9210
        ;   XREF to: 004b9217 (CONDITIONAL_JUMP)  ; LAB_004b9217
    ADD ESP,0x18                        ; 004b9212
    POP EBX                             ; 004b9215
    RET                                 ; 004b9216
    LEA EAX,[EBX + 0x340]               ; 004b9217
        ;   Label: LAB_004b9217
    PUSH dword ptr [ESP + 0x24]         ; 004b921d
    PUSH EAX                            ; 004b9221
    CALL core_flame.cpp_CFlame_process_FUN_004b7b90 ; 004b9222
        ;   XREF to: 004b7b90 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_004b7b90(CFlame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004b9227
    FLD float ptr [EBX + 0x2d8]         ; 004b922a
    FSUB float ptr [ESP + 0x24]         ; 004b9230
    FST float ptr [EBX + 0x2d8]         ; 004b9234
    FLDZ                                ; 004b923a
    FCOMPP                              ; 004b923c
    FNSTSW AX                           ; 004b923e
    SAHF                                ; 004b9240
    JC 0x004b91fb                       ; 004b9241
        ;   XREF to: 004b91fb (CONDITIONAL_JUMP)  ; LAB_004b91fb
    PUSH EDI                            ; 004b9243
    PUSH ESI                            ; 004b9244
    PUSH 0x1                            ; 004b9245
    PUSH EBX                            ; 004b9247
    MOV ESI,dword ptr [0x0061f650]      ; 004b9248 | DAT_0061f650
    PUSH ESI                            ; 004b924e
    CALL core_mission.cpp_FUN_0051b740  ; 004b924f
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    ADD ESP,0xc                         ; 004b9254
    MOV EAX,dword ptr [EBX + 0x154]     ; 004b9257
    PUSH EBX                            ; 004b925d
    LEA ESI,[ESP + 0xc]                 ; 004b925e
    CALL dword ptr [EAX + 0x1c]         ; 004b9262
    ADD ESP,0x4                         ; 004b9265
    PUSH 0x40800000                     ; 004b9268
    PUSH 0x44bb8000                     ; 004b926d
    ADD EBX,0x360                       ; 004b9272
    PUSH 0x41800000                     ; 004b9278
    PUSH EBX                            ; 004b927d
    MOV EDI,dword ptr [0x0061c010]      ; 004b927e | DAT_0061c010
    PUSH EDI                            ; 004b9284
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60 ; 004b9285
        ;   XREF to: 004b6c60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 004b928a
    POP ESI                             ; 004b928d
    POP EDI                             ; 004b928e
    ADD ESP,0x18                        ; 004b928f
    POP EBX                             ; 004b9292
    RET                                 ; 004b9293

