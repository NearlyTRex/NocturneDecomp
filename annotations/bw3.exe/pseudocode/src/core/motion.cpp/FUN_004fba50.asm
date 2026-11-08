; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fba50(int *param_1,undefined4 param_2,int param_3)
;
;
; XREF[16]:
;   FUN_00410030 at 00410075
;   FUN_00431470 at 004314b9
;   FUN_004331a0 at 004331ee
;   FUN_0048c2e0 at 00490485
;   FUN_004d2aa0 at 004d2acf
;   FUN_004d2af0 at 004d2b67
;   FUN_004d2c20 at 004d2c66
;   FUN_004fc160 at 004fc170
;   FUN_00509120 at 00509457
;   FUN_00509900 at 00509945
;   ... and 6 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005c9b9a
;   TerminatedCString s_Can_t_find_state_s_in_mo_005c9bad
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fba50
        ;   Label: FUN_004fba50
    PUSH ESI                            ; 004fba51
    PUSH EDI                            ; 004fba52
    PUSH EBP                            ; 004fba53
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fba54
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fba58
    MOV EDX,dword ptr [EDI]             ; 004fba5c
    XOR EBX,EBX                         ; 004fba5e
    TEST EDX,EDX                        ; 004fba60
    JLE 0x004fba7f                      ; 004fba62
        ;   XREF to: 004fba7f (CONDITIONAL_JUMP)  ; LAB_004fba7f
    LEA ESI,[EDI + 0x4]                 ; 004fba64
    PUSH EBP                            ; 004fba67
        ;   Label: LAB_004fba67
    PUSH ESI                            ; 004fba68
    CALL FUN_005a3260                   ; 004fba69
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004fba6e
    TEST EAX,EAX                        ; 004fba71
    JZ 0x004fba90                       ; 004fba73
        ;   XREF to: 004fba90 (CONDITIONAL_JUMP)  ; LAB_004fba90
    INC EBX                             ; 004fba75
    MOV ECX,dword ptr [EDI]             ; 004fba76
    ADD ESI,0x1e                        ; 004fba78
    CMP EBX,ECX                         ; 004fba7b
    JL 0x004fba67                       ; 004fba7d
        ;   XREF to: 004fba67 (CONDITIONAL_JUMP)  ; LAB_004fba67
    CMP dword ptr [ESP + 0x1c],0x0      ; 004fba7f
        ;   Label: LAB_004fba7f
    JNZ 0x004fba97                      ; 004fba84
        ;   XREF to: 004fba97 (CONDITIONAL_JUMP)  ; LAB_004fba97
    MOV EAX,0xffffffff                  ; 004fba86
    POP EBP                             ; 004fba8b
    POP EDI                             ; 004fba8c
    POP ESI                             ; 004fba8d
    POP EBX                             ; 004fba8e
    RET                                 ; 004fba8f
    MOV EAX,EBX                         ; 004fba90
        ;   Label: LAB_004fba90
    POP EBP                             ; 004fba92
    POP EDI                             ; 004fba93
    POP ESI                             ; 004fba94
    POP EBX                             ; 004fba95
    RET                                 ; 004fba96
    PUSH EBP                            ; 004fba97
        ;   Label: LAB_004fba97
    MOV ESI,0x5c9b9a                    ; 004fba98 | = "..\\core\\motion.cpp"
    MOV EDI,0x152                       ; 004fba9d
    PUSH 0x5c9bad                       ; 004fbaa2 | = "Can't find state \"%s\" in motion list"
    MOV dword ptr [0x01d71de0],ESI      ; 004fbaa7 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004fbaad | DAT_01d71de4
    CALL FUN_004e4330                   ; 004fbab3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 004fbab8
    MOV EAX,0xffffffff                  ; 004fbabb
    POP EBP                             ; 004fbac0
    POP EDI                             ; 004fbac1
    POP ESI                             ; 004fbac2
    POP EBX                             ; 004fbac3
    RET                                 ; 004fbac4

