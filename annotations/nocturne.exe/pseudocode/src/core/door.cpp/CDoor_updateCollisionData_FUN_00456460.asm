; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_CDoor_updateCollisionData_FUN_00456460(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005baf90
;   undefined4 DAT_005be368
;   undefined4 DAT_01cc9450
;   undefined4 DAT_01cc9454
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_door.cpp_CDoor_reposition_FUN_004552a0
;   FUN_00511a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456460
        ;   Label: core_door.cpp_CDoor_updateCollisionData_FUN_00456460
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456461
    MOV EAX,[0x005baf90]                ; 00456465 | DAT_005baf90 | DAT_01cc9450
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
        ;   XREF to: 004552a0 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_CDoor_reposition_FUN_004552a0()
    ADD ESP,0x4                         ; 00456481
    PUSH EBX                            ; 00456484
    MOV EBX,dword ptr [0x005be368]      ; 00456485 | DAT_005be368
    PUSH EBX                            ; 0045648b | DAT_01e57284
    CALL FUN_00511a10                   ; 0045648c
        ;   XREF to: 00511a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00511a10()
    ADD ESP,0x8                         ; 00456491
    POP EBX                             ; 00456494
    RET                                 ; 00456495

