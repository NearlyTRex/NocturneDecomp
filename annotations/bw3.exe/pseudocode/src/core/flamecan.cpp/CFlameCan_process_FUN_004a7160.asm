; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004a7160(CFlameCan *this_ptr,float delta_time)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_00600530
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_fire.cpp_FUN_004a36e0
;   core_flame.cpp_CFlame_process_FUN_004a5b10
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
;   core_mission.cpp_FUN_004f6f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7160
        ;   Label: core_flamecan.cpp_CFlameCan_process_FUN_004a7160
    SUB ESP,0x18                        ; 004a7161
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a7164
    LEA EAX,[EBX + 0x2dc]               ; 004a7168
    PUSH EAX                            ; 004a716e
    MOV EDX,dword ptr [0x005fba60]      ; 004a716f | DAT_005fba60
    PUSH EDX                            ; 004a7175
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004a7176
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a717b
    TEST EAX,EAX                        ; 004a717e
    JNZ 0x004a7190                      ; 004a7180
        ;   XREF to: 004a7190 (CONDITIONAL_JUMP)  ; LAB_004a7190
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004a7182
    JNZ 0x004a71a7                      ; 004a7189
        ;   XREF to: 004a71a7 (CONDITIONAL_JUMP)  ; LAB_004a71a7
    ADD ESP,0x18                        ; 004a718b
        ;   Label: LAB_004a718b
    POP EBX                             ; 004a718e
    RET                                 ; 004a718f
    PUSH EBX                            ; 004a7190
        ;   Label: LAB_004a7190
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110 ; 004a7191
        ;   XREF to: 004a7110 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004a7196
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004a7199
    JNZ 0x004a71a7                      ; 004a71a0
        ;   XREF to: 004a71a7 (CONDITIONAL_JUMP)  ; LAB_004a71a7
    ADD ESP,0x18                        ; 004a71a2
    POP EBX                             ; 004a71a5
    RET                                 ; 004a71a6
    LEA EAX,[EBX + 0x340]               ; 004a71a7
        ;   Label: LAB_004a71a7
    PUSH dword ptr [ESP + 0x24]         ; 004a71ad
    PUSH EAX                            ; 004a71b1
    CALL core_flame.cpp_CFlame_process_FUN_004a5b10 ; 004a71b2
        ;   XREF to: 004a5b10 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_004a5b10(CFlame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004a71b7
    FLD float ptr [EBX + 0x2d8]         ; 004a71ba
    FSUB float ptr [ESP + 0x24]         ; 004a71c0
    FST float ptr [EBX + 0x2d8]         ; 004a71c4
    FLDZ                                ; 004a71ca
    FCOMPP                              ; 004a71cc
    FNSTSW AX                           ; 004a71ce
    SAHF                                ; 004a71d0
    JC 0x004a718b                       ; 004a71d1
        ;   XREF to: 004a718b (CONDITIONAL_JUMP)  ; LAB_004a718b
    PUSH EDI                            ; 004a71d3
    PUSH ESI                            ; 004a71d4
    PUSH 0x1                            ; 004a71d5
    PUSH EBX                            ; 004a71d7
    MOV ESI,dword ptr [0x00600530]      ; 004a71d8 | DAT_00600530
    PUSH ESI                            ; 004a71de
    CALL core_mission.cpp_FUN_004f6f10  ; 004a71df
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    ADD ESP,0xc                         ; 004a71e4
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a71e7
    PUSH EBX                            ; 004a71ed
    LEA ESI,[ESP + 0xc]                 ; 004a71ee
    CALL dword ptr [EAX + 0x1c]         ; 004a71f2
    ADD ESP,0x4                         ; 004a71f5
    PUSH 0x0                            ; 004a71f8
    PUSH 0x40800000                     ; 004a71fa
    PUSH 0x44bb8000                     ; 004a71ff
    ADD EBX,0x360                       ; 004a7204
    PUSH 0x41800000                     ; 004a720a
    PUSH EBX                            ; 004a720f
    MOV EDI,dword ptr [0x005fc5a0]      ; 004a7210 | DAT_005fc5a0
    PUSH EDI                            ; 004a7216
    CALL core_fire.cpp_FUN_004a36e0     ; 004a7217
        ;   XREF to: 004a36e0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a36e0()
    ADD ESP,0x18                        ; 004a721c
    POP ESI                             ; 004a721f
    POP EDI                             ; 004a7220
    ADD ESP,0x18                        ; 004a7221
    POP EBX                             ; 004a7224
    RET                                 ; 004a7225

