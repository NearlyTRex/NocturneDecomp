; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00456460(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01cc9450
;   undefined4 DAT_01cc9454
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_door.cpp_CDoor_reposition_FUN_004552a0
;   core_setcolid.cpp_FUN_00511a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456460
        ;   Label: core_door.cpp_CDoor_updateCollisionData_FUN_00456460
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456461
    MOV EAX,[0x005baf90]                ; 00456465 | g_CDemonMission_PTR_005baf90 | DAT_01cc9450
    CMP dword ptr [EAX + 0x4],0x0       ; 0045646a | DAT_01cc9454
    JNZ 0x00456479                      ; 0045646e
        ;   XREF to: 00456479 (CONDITIONAL_JUMP)  ; LAB_00456479
    CMP dword ptr [EBX + 0x2d8],0x0     ; 00456470
    JZ 0x0045647b                       ; 00456477
        ;   XREF to: 0045647b (CONDITIONAL_JUMP)  ; LAB_0045647b
    POP EBX                             ; 00456479
        ;   Label: LAB_00456479
    RET                                 ; 0045647a
    PUSH EBX                            ; 0045647b
        ;   Label: LAB_0045647b
    CALL core_door.cpp_CDoor_reposition_FUN_004552a0 ; 0045647c
        ;   XREF to: 004552a0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_reposition_FUN_004552a0(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00456481
    PUSH EBX                            ; 00456484
    MOV EBX,dword ptr [0x005be368]      ; 00456485 | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 0045648b | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_FUN_00511a10 ; 0045648c
        ;   XREF to: 00511a10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_00511a10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00456491
    POP EBX                             ; 00456494
    RET                                 ; 00456495

