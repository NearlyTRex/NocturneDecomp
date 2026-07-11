; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cffa0(void)
;
;
; XREF[2]:
;   FUN_004c85f0 at 004c8da8
;   FUN_004d0080 at 004d0c82
;
; Referenced Globals:
;   string s_brightness_0058857c
;   string s_1._Turn_off_all_the_lights_in_yo_00588587
;   string s_2._Turn_your_brightness_up,_so_t_005885b0
;   string s_3._Turn_down_the_brightness,_so_t_00588603
;   string s_4._Turn_your_contrast_all_the_wa_0058864f
;   string s_You're_done_with_calibration._00588675
;   undefined4 DAT_014b9904
;
; Called Functions:
;   FUN_00403f50
;   FUN_0040e360
;   FUN_0040e3c0
;   FUN_004930e0
;   FUN_004cfe50
;   FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH 0x1e0                          ; 004cffa0
        ;   Label: FUN_004cffa0
    PUSH 0x280                          ; 004cffa5
    PUSH 0x58857c                       ; 004cffaa | = "brightness"
    PUSH 0x1cc5b6c                      ; 004cffaf
    CALL FUN_0040e3c0                   ; 004cffb4
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e3c0()
    ADD ESP,0x10                        ; 004cffb9
    PUSH 0x58                           ; 004cffbc
    MOV EDX,dword ptr [0x014b9904]      ; 004cffbe | DAT_014b9904
    PUSH EDX                            ; 004cffc4
    CALL FUN_004930e0                   ; 004cffc5
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004930e0()
    ADD ESP,0x8                         ; 004cffca
    PUSH 0x588587                       ; 004cffcd | = "1. Turn off all the lights in your room."
    CALL FUN_004ee370                   ; 004cffd2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee370()
    ADD ESP,0x4                         ; 004cffd7
    PUSH EAX                            ; 004cffda
    CALL FUN_004cfe50                   ; 004cffdb
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfe50()
    ADD ESP,0x4                         ; 004cffe0
    PUSH 0x5885b0                       ; 004cffe3 | = "2. Turn your brightness up, so that y..."
    CALL FUN_004ee370                   ; 004cffe8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee370()
    ADD ESP,0x4                         ; 004cffed
    PUSH EAX                            ; 004cfff0
    CALL FUN_004cfe50                   ; 004cfff1
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfe50()
    ADD ESP,0x4                         ; 004cfff6
    PUSH 0x588603                       ; 004cfff9 | = "3. Turn down the brightness, so that ..."
    CALL FUN_004ee370                   ; 004cfffe
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee370()
    ADD ESP,0x4                         ; 004d0003
    PUSH EAX                            ; 004d0006
    CALL FUN_004cfe50                   ; 004d0007
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfe50()
    ADD ESP,0x4                         ; 004d000c
    PUSH 0x58864f                       ; 004d000f | = "4. Turn your contrast all the way up."
    CALL FUN_004ee370                   ; 004d0014
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee370()
    ADD ESP,0x4                         ; 004d0019
    PUSH EAX                            ; 004d001c
    CALL FUN_004cfe50                   ; 004d001d
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfe50()
    ADD ESP,0x4                         ; 004d0022
    PUSH 0x588675                       ; 004d0025 | = "You're done with calibration."
    CALL FUN_004ee370                   ; 004d002a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee370()
    ADD ESP,0x4                         ; 004d002f
    PUSH EAX                            ; 004d0032
    CALL FUN_004cfe50                   ; 004d0033
        ;   XREF to: 004cfe50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfe50()
    ADD ESP,0x4                         ; 004d0038
    PUSH 0x1cc5b6c                      ; 004d003b
    CALL FUN_0040e360                   ; 004d0040
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e360()
    ADD ESP,0x4                         ; 004d0045
    JMP 0x00403f50                      ; 004d0048
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)

