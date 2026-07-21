; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050ad20(int param_1)
;
;
; XREF[3]:
;   FUN_00507f80 at 00508496
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dfea
;   core_mission.cpp_CDemonMission_process_FUN_004d92a0 at 004d93a4
;
; Referenced Globals:
;   undefined4 DAT_01fb99d0
;   undefined4 DAT_01fb99d4
;   undefined4 DAT_01fb99d8
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_free_FUN_004401d0
;   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0
;   FUN_0044e1c0
;   FUN_00515410
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ad20
        ;   Label: FUN_0050ad20
    PUSH ESI                            ; 0050ad21
    PUSH EDI                            ; 0050ad22
    PUSH EBP                            ; 0050ad23
    MOV EDI,dword ptr [ESP + 0x14]      ; 0050ad24
    MOV EDX,dword ptr [0x01fb99d0]      ; 0050ad28 | DAT_01fb99d0
    XOR ESI,ESI                         ; 0050ad2e
    TEST EDX,EDX                        ; 0050ad30
    JLE 0x0050ad56                      ; 0050ad32
        ;   XREF to: 0050ad56 (CONDITIONAL_JUMP)  ; LAB_0050ad56
    XOR EBX,EBX                         ; 0050ad34
    MOV EAX,dword ptr [EBX + 0x1fb99d4] ; 0050ad36 | DAT_01fb99d4 | DAT_01fb99d8
        ;   Label: LAB_0050ad36
    TEST EAX,EAX                        ; 0050ad3c
    JNZ 0x0050ada7                      ; 0050ad3e
        ;   XREF to: 0050ada7 (CONDITIONAL_JUMP)  ; LAB_0050ada7
    MOV EBP,dword ptr [0x01fb99d0]      ; 0050ad40 | DAT_01fb99d0
        ;   Label: LAB_0050ad40
    ADD EBX,0x4                         ; 0050ad46
    XOR ECX,ECX                         ; 0050ad49
    INC ESI                             ; 0050ad4b
    MOV dword ptr [EBX + 0x1fb99d0],ECX ; 0050ad4c | DAT_01fb99d4 | DAT_01fb99d8
    CMP ESI,EBP                         ; 0050ad52
    JL 0x0050ad36                       ; 0050ad54
        ;   XREF to: 0050ad36 (CONDITIONAL_JUMP)  ; LAB_0050ad36
    MOV EDX,dword ptr [EDI + 0x19644]   ; 0050ad56
        ;   Label: LAB_0050ad56
    XOR EAX,EAX                         ; 0050ad5c
    XOR ESI,ESI                         ; 0050ad5e
    MOV [0x01fb99d0],EAX                ; 0050ad60 | DAT_01fb99d0
    TEST EDX,EDX                        ; 0050ad65
    JLE 0x0050ad90                      ; 0050ad67
        ;   XREF to: 0050ad90 (CONDITIONAL_JUMP)  ; LAB_0050ad90
    LEA EBX,[EDI + 0x19648]             ; 0050ad69
    PUSH EBX                            ; 0050ad6f
        ;   Label: LAB_0050ad6f
    CALL FUN_00515410                   ; 0050ad70
        ;   XREF to: 00515410 (UNCONDITIONAL_CALL)  ; undefined FUN_00515410()
    INC ESI                             ; 0050ad75
    ADD ESP,0x4                         ; 0050ad76
    MOV ECX,dword ptr [EDI + 0x19644]   ; 0050ad79
    ADD EBX,0x1898                      ; 0050ad7f
    CMP ESI,ECX                         ; 0050ad85
    JL 0x0050ad6f                       ; 0050ad87
        ;   XREF to: 0050ad6f (CONDITIONAL_JUMP)  ; LAB_0050ad6f
    LEA EAX,[EAX]                       ; 0050ad89
    NOP                                 ; 0050ad8f
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0 ; 0050ad90
        ;   XREF to: 0044e3b0 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0()
        ;   Label: LAB_0050ad90
    PUSH 0x1fb8508                      ; 0050ad95
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_004401d0 ; 0050ad9a
        ;   XREF to: 004401d0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_free_FUN_004401d0()
    ADD ESP,0x4                         ; 0050ad9f
    POP EBP                             ; 0050ada2
    POP EDI                             ; 0050ada3
    POP ESI                             ; 0050ada4
    POP EBX                             ; 0050ada5
    RET                                 ; 0050ada6
    PUSH 0x0                            ; 0050ada7
        ;   Label: LAB_0050ada7
    PUSH EAX                            ; 0050ada9
    CALL FUN_0044e1c0                   ; 0050adaa
        ;   XREF to: 0044e1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e1c0()
    ADD ESP,0x8                         ; 0050adaf
    PUSH EAX                            ; 0050adb2
    CALL FUN_00564494                   ; 0050adb3
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0050adb8
    JMP 0x0050ad40                      ; 0050adbb
        ;   XREF to: 0050ad40 (UNCONDITIONAL_JUMP)  ; LAB_0050ad40

