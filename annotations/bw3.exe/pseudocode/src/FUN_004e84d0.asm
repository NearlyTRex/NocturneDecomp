; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e84d0(void)
;
;
; XREF[2]:
;   FUN_004e44e0 at 004e4c64
;   FUN_004e85a0 at 004e8ec7
;
; Referenced Globals:
;   TerminatedCString s_brightness_005c72df
;   TerminatedCString s_s_1_Turn_off_all_the_lig_005c72ea
;   TerminatedCString s_s_2_Turn_your_brightness_005c7313
;   TerminatedCString s_s_3_Turn_down_the_bright_005c7366
;   TerminatedCString s_s_4_Turn_your_contrast_a_005c73b2
;   TerminatedCString s_You_re_done_with_calibra_005c73d8
;   undefined4 DAT_01549ab4
;
; Called Functions:
;   FUN_004032b0
;   FUN_0040d400
;   FUN_0040d460
;   FUN_004b30f0
;   FUN_004e8380
;   FUN_00508960
;
; *****************************************************************************

section .text

    PUSH 0x1e0                          ; 004e84d0
        ;   Label: FUN_004e84d0
    PUSH 0x280                          ; 004e84d5
    PUSH 0x5c72df                       ; 004e84da | = "brightness"
    PUSH 0x1d737e8                      ; 004e84df
    CALL FUN_0040d460                   ; 004e84e4
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004e84e9
    PUSH 0x58                           ; 004e84ec
    MOV EDX,dword ptr [0x01549ab4]      ; 004e84ee | DAT_01549ab4
    PUSH EDX                            ; 004e84f4
    CALL FUN_004b30f0                   ; 004e84f5
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b30f0()
    ADD ESP,0x8                         ; 004e84fa
    PUSH 0x5c72ea                       ; 004e84fd | = "1. Turn off all the lights in your room."
    CALL FUN_00508960                   ; 004e8502
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004e8507
    PUSH EAX                            ; 004e850a
    CALL FUN_004e8380                   ; 004e850b
        ;   XREF to: 004e8380 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8380()
    ADD ESP,0x4                         ; 004e8510
    PUSH 0x5c7313                       ; 004e8513 | = "2. Turn your brightness up, so that y..."
    CALL FUN_00508960                   ; 004e8518
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004e851d
    PUSH EAX                            ; 004e8520
    CALL FUN_004e8380                   ; 004e8521
        ;   XREF to: 004e8380 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8380()
    ADD ESP,0x4                         ; 004e8526
    PUSH 0x5c7366                       ; 004e8529 | = "3. Turn down the brightness, so that ..."
    CALL FUN_00508960                   ; 004e852e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004e8533
    PUSH EAX                            ; 004e8536
    CALL FUN_004e8380                   ; 004e8537
        ;   XREF to: 004e8380 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8380()
    ADD ESP,0x4                         ; 004e853c
    PUSH 0x5c73b2                       ; 004e853f | = "4. Turn your contrast all the way up."
    CALL FUN_00508960                   ; 004e8544
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004e8549
    PUSH EAX                            ; 004e854c
    CALL FUN_004e8380                   ; 004e854d
        ;   XREF to: 004e8380 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8380()
    ADD ESP,0x4                         ; 004e8552
    PUSH 0x5c73d8                       ; 004e8555 | = "You're done with calibration."
    CALL FUN_00508960                   ; 004e855a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004e855f
    PUSH EAX                            ; 004e8562
    CALL FUN_004e8380                   ; 004e8563
        ;   XREF to: 004e8380 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8380()
    ADD ESP,0x4                         ; 004e8568
    PUSH 0x1d737e8                      ; 004e856b
    CALL FUN_0040d400                   ; 004e8570
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004e8575
    JMP 0x004032b0                      ; 004e8578
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)

