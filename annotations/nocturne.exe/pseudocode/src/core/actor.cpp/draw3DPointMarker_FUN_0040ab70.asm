; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_draw3DPointMarker_FUN_0040ab70(float *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_005992b0
;   undefined4 DAT_005ae700
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401530
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ab70
        ;   Label: core_actor.cpp_draw3DPointMarker_FUN_0040ab70
    PUSH ESI                            ; 0040ab71
    SUB ESP,0xc                         ; 0040ab72
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040ab75
    MOV EBX,ESP                         ; 0040ab79
    MOV EDX,dword ptr [0x005ae700]      ; 0040ab7b | DAT_005ae700
    FLD float ptr [EAX]                 ; 0040ab81
    FMUL float ptr [0x005992b0]         ; 0040ab83 | DAT_005992b0
    FISTP dword ptr [EBX]               ; 0040ab89
    FLD float ptr [EAX + 0x4]           ; 0040ab8b
    FMUL float ptr [0x005992b0]         ; 0040ab8e | DAT_005992b0
    FISTP dword ptr [EBX + 0x4]         ; 0040ab94
    FLD float ptr [EAX + 0x8]           ; 0040ab97
    FMUL float ptr [0x005992b0]         ; 0040ab9a | DAT_005992b0
    FISTP dword ptr [EBX + 0x8]         ; 0040aba0
    MOV EAX,ESP                         ; 0040aba3
    PUSH EAX                            ; 0040aba5
    MOV EAX,dword ptr [EDX]             ; 0040aba6 | DAT_01b4d738
    ADD EAX,0xea5d0                     ; 0040aba8
    PUSH EAX                            ; 0040abad
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0040abae
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,dword ptr [0x005ae700]      ; 0040abb3 | DAT_005ae700
    MOV EBX,dword ptr [EBX]             ; 0040abb9 | DAT_01b4d738
    MOV AH,byte ptr [EBX + 0xea5e3]     ; 0040abbb
    ADD ESP,0x8                         ; 0040abc1
    TEST AH,0x80                        ; 0040abc4
    JNZ 0x0040acd4                      ; 0040abc7
        ;   XREF to: 0040acd4 (CONDITIONAL_JUMP)  ; LAB_0040acd4
    MOV ESI,dword ptr [EBX + 0xea5e0]   ; 0040abcd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040abd3
    SAR ESI,0x10                        ; 0040abd7
    MOV EBX,dword ptr [EBX + 0xea5e4]   ; 0040abda
    MOV [0x01c00c70],EAX                ; 0040abe0 | DAT_01c00c70
    SAR EBX,0x10                        ; 0040abe5
    TEST ESI,ESI                        ; 0040abe8
    JL 0x0040abfc                       ; 0040abea
        ;   XREF to: 0040abfc (CONDITIONAL_JUMP)  ; LAB_0040abfc
    TEST EBX,EBX                        ; 0040abec
    JL 0x0040abfc                       ; 0040abee
        ;   XREF to: 0040abfc (CONDITIONAL_JUMP)  ; LAB_0040abfc
    CMP ESI,dword ptr [0x005b761c]      ; 0040abf0 | DAT_005b761c
    JL 0x0040acda                       ; 0040abf6
        ;   XREF to: 0040acda (CONDITIONAL_JUMP)  ; LAB_0040acda
    LEA EAX,[ESI + -0x1]                ; 0040abfc
        ;   Label: LAB_0040abfc
    LEA EDX,[EBX + -0x1]                ; 0040abff
    TEST EAX,EAX                        ; 0040ac02
    JL 0x0040ac16                       ; 0040ac04
        ;   XREF to: 0040ac16 (CONDITIONAL_JUMP)  ; LAB_0040ac16
    TEST EDX,EDX                        ; 0040ac06
    JL 0x0040ac16                       ; 0040ac08
        ;   XREF to: 0040ac16 (CONDITIONAL_JUMP)  ; LAB_0040ac16
    CMP EAX,dword ptr [0x005b761c]      ; 0040ac0a | DAT_005b761c
    JL 0x0040acf5                       ; 0040ac10
        ;   XREF to: 0040acf5 (CONDITIONAL_JUMP)  ; LAB_0040acf5
    LEA EDX,[ESI + -0x1]                ; 0040ac16
        ;   Label: LAB_0040ac16
    LEA EAX,[EBX + 0x1]                 ; 0040ac19
    TEST EDX,EDX                        ; 0040ac1c
    JL 0x0040ac30                       ; 0040ac1e
        ;   XREF to: 0040ac30 (CONDITIONAL_JUMP)  ; LAB_0040ac30
    TEST EAX,EAX                        ; 0040ac20
    JL 0x0040ac30                       ; 0040ac22
        ;   XREF to: 0040ac30 (CONDITIONAL_JUMP)  ; LAB_0040ac30
    CMP EDX,dword ptr [0x005b761c]      ; 0040ac24 | DAT_005b761c
    JL 0x0040ad10                       ; 0040ac2a
        ;   XREF to: 0040ad10 (CONDITIONAL_JUMP)  ; LAB_0040ad10
    LEA EDX,[ESI + 0x1]                 ; 0040ac30
        ;   Label: LAB_0040ac30
    LEA EAX,[EBX + -0x1]                ; 0040ac33
    TEST EDX,EDX                        ; 0040ac36
    JL 0x0040ac4a                       ; 0040ac38
        ;   XREF to: 0040ac4a (CONDITIONAL_JUMP)  ; LAB_0040ac4a
    TEST EAX,EAX                        ; 0040ac3a
    JL 0x0040ac4a                       ; 0040ac3c
        ;   XREF to: 0040ac4a (CONDITIONAL_JUMP)  ; LAB_0040ac4a
    CMP EDX,dword ptr [0x005b761c]      ; 0040ac3e | DAT_005b761c
    JL 0x0040ad2b                       ; 0040ac44
        ;   XREF to: 0040ad2b (CONDITIONAL_JUMP)  ; LAB_0040ad2b
    LEA EAX,[ESI + 0x1]                 ; 0040ac4a
        ;   Label: LAB_0040ac4a
    LEA EDX,[EBX + 0x1]                 ; 0040ac4d
    TEST EAX,EAX                        ; 0040ac50
    JL 0x0040ac64                       ; 0040ac52
        ;   XREF to: 0040ac64 (CONDITIONAL_JUMP)  ; LAB_0040ac64
    TEST EDX,EDX                        ; 0040ac54
    JL 0x0040ac64                       ; 0040ac56
        ;   XREF to: 0040ac64 (CONDITIONAL_JUMP)  ; LAB_0040ac64
    CMP EAX,dword ptr [0x005b761c]      ; 0040ac58 | DAT_005b761c
    JL 0x0040ad46                       ; 0040ac5e
        ;   XREF to: 0040ad46 (CONDITIONAL_JUMP)  ; LAB_0040ad46
    LEA EDX,[ESI + -0x2]                ; 0040ac64
        ;   Label: LAB_0040ac64
    LEA EAX,[EBX + -0x2]                ; 0040ac67
    TEST EDX,EDX                        ; 0040ac6a
    JL 0x0040ac7e                       ; 0040ac6c
        ;   XREF to: 0040ac7e (CONDITIONAL_JUMP)  ; LAB_0040ac7e
    TEST EAX,EAX                        ; 0040ac6e
    JL 0x0040ac7e                       ; 0040ac70
        ;   XREF to: 0040ac7e (CONDITIONAL_JUMP)  ; LAB_0040ac7e
    CMP EDX,dword ptr [0x005b761c]      ; 0040ac72 | DAT_005b761c
    JL 0x0040ad61                       ; 0040ac78
        ;   XREF to: 0040ad61 (CONDITIONAL_JUMP)  ; LAB_0040ad61
    LEA EAX,[ESI + -0x2]                ; 0040ac7e
        ;   Label: LAB_0040ac7e
    LEA EDX,[EBX + 0x2]                 ; 0040ac81
    TEST EAX,EAX                        ; 0040ac84
    JL 0x0040ac98                       ; 0040ac86
        ;   XREF to: 0040ac98 (CONDITIONAL_JUMP)  ; LAB_0040ac98
    TEST EDX,EDX                        ; 0040ac88
    JL 0x0040ac98                       ; 0040ac8a
        ;   XREF to: 0040ac98 (CONDITIONAL_JUMP)  ; LAB_0040ac98
    CMP EAX,dword ptr [0x005b761c]      ; 0040ac8c | DAT_005b761c
    JL 0x0040ad7c                       ; 0040ac92
        ;   XREF to: 0040ad7c (CONDITIONAL_JUMP)  ; LAB_0040ad7c
    LEA EAX,[ESI + 0x2]                 ; 0040ac98
        ;   Label: LAB_0040ac98
    LEA EDX,[EBX + -0x2]                ; 0040ac9b
    TEST EAX,EAX                        ; 0040ac9e
    JL 0x0040acb2                       ; 0040aca0
        ;   XREF to: 0040acb2 (CONDITIONAL_JUMP)  ; LAB_0040acb2
    TEST EDX,EDX                        ; 0040aca2
    JL 0x0040acb2                       ; 0040aca4
        ;   XREF to: 0040acb2 (CONDITIONAL_JUMP)  ; LAB_0040acb2
    CMP EAX,dword ptr [0x005b761c]      ; 0040aca6 | DAT_005b761c
    JL 0x0040ad97                       ; 0040acac
        ;   XREF to: 0040ad97 (CONDITIONAL_JUMP)  ; LAB_0040ad97
    ADD ESI,0x2                         ; 0040acb2
        ;   Label: LAB_0040acb2
    ADD EBX,0x2                         ; 0040acb5
    TEST ESI,ESI                        ; 0040acb8
    JL 0x0040acd4                       ; 0040acba
        ;   XREF to: 0040acd4 (CONDITIONAL_JUMP)  ; LAB_0040acd4
    TEST EBX,EBX                        ; 0040acbc
    JL 0x0040acd4                       ; 0040acbe
        ;   XREF to: 0040acd4 (CONDITIONAL_JUMP)  ; LAB_0040acd4
    CMP ESI,dword ptr [0x005b761c]      ; 0040acc0 | DAT_005b761c
    JGE 0x0040acd4                      ; 0040acc6
        ;   XREF to: 0040acd4 (CONDITIONAL_JUMP)  ; LAB_0040acd4
    CMP EBX,dword ptr [0x005b7620]      ; 0040acc8 | DAT_005b7620
    JL 0x0040adb2                       ; 0040acce
        ;   XREF to: 0040adb2 (CONDITIONAL_JUMP)  ; LAB_0040adb2
    ADD ESP,0xc                         ; 0040acd4
        ;   Label: LAB_0040acd4
    POP ESI                             ; 0040acd7
    POP EBX                             ; 0040acd8
    RET                                 ; 0040acd9
    CMP EBX,dword ptr [0x005b7620]      ; 0040acda | DAT_005b7620
        ;   Label: LAB_0040acda
    JGE 0x0040abfc                      ; 0040ace0
        ;   XREF to: 0040abfc (CONDITIONAL_JUMP)  ; LAB_0040abfc
    PUSH EBX                            ; 0040ace6
    PUSH ESI                            ; 0040ace7
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040ace8
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0040aced
    JMP 0x0040abfc                      ; 0040acf0
        ;   XREF to: 0040abfc (UNCONDITIONAL_JUMP)  ; LAB_0040abfc
    CMP EDX,dword ptr [0x005b7620]      ; 0040acf5 | DAT_005b7620
        ;   Label: LAB_0040acf5
    JGE 0x0040ac16                      ; 0040acfb
        ;   XREF to: 0040ac16 (CONDITIONAL_JUMP)  ; LAB_0040ac16
    PUSH EDX                            ; 0040ad01
    PUSH EAX                            ; 0040ad02
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040ad03
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0040ad08
    JMP 0x0040ac16                      ; 0040ad0b
        ;   XREF to: 0040ac16 (UNCONDITIONAL_JUMP)  ; LAB_0040ac16
    CMP EAX,dword ptr [0x005b7620]      ; 0040ad10 | DAT_005b7620
        ;   Label: LAB_0040ad10
    JGE 0x0040ac30                      ; 0040ad16
        ;   XREF to: 0040ac30 (CONDITIONAL_JUMP)  ; LAB_0040ac30
    PUSH EAX                            ; 0040ad1c
    PUSH EDX                            ; 0040ad1d
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040ad1e
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0040ad23
    JMP 0x0040ac30                      ; 0040ad26
        ;   XREF to: 0040ac30 (UNCONDITIONAL_JUMP)  ; LAB_0040ac30
    CMP EAX,dword ptr [0x005b7620]      ; 0040ad2b | DAT_005b7620
        ;   Label: LAB_0040ad2b
    JGE 0x0040ac4a                      ; 0040ad31
        ;   XREF to: 0040ac4a (CONDITIONAL_JUMP)  ; LAB_0040ac4a
    PUSH EAX                            ; 0040ad37
    PUSH EDX                            ; 0040ad38
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040ad39
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0040ad3e
    JMP 0x0040ac4a                      ; 0040ad41
        ;   XREF to: 0040ac4a (UNCONDITIONAL_JUMP)  ; LAB_0040ac4a
    CMP EDX,dword ptr [0x005b7620]      ; 0040ad46 | DAT_005b7620
        ;   Label: LAB_0040ad46
    JGE 0x0040ac64                      ; 0040ad4c
        ;   XREF to: 0040ac64 (CONDITIONAL_JUMP)  ; LAB_0040ac64
    PUSH EDX                            ; 0040ad52
    PUSH EAX                            ; 0040ad53
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040ad54
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0040ad59
    JMP 0x0040ac64                      ; 0040ad5c
        ;   XREF to: 0040ac64 (UNCONDITIONAL_JUMP)  ; LAB_0040ac64
    CMP EAX,dword ptr [0x005b7620]      ; 0040ad61 | DAT_005b7620
        ;   Label: LAB_0040ad61
    JGE 0x0040ac7e                      ; 0040ad67
        ;   XREF to: 0040ac7e (CONDITIONAL_JUMP)  ; LAB_0040ac7e
    PUSH EAX                            ; 0040ad6d
    PUSH EDX                            ; 0040ad6e
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040ad6f
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0040ad74
    JMP 0x0040ac7e                      ; 0040ad77
        ;   XREF to: 0040ac7e (UNCONDITIONAL_JUMP)  ; LAB_0040ac7e
    CMP EDX,dword ptr [0x005b7620]      ; 0040ad7c | DAT_005b7620
        ;   Label: LAB_0040ad7c
    JGE 0x0040ac98                      ; 0040ad82
        ;   XREF to: 0040ac98 (CONDITIONAL_JUMP)  ; LAB_0040ac98
    PUSH EDX                            ; 0040ad88
    PUSH EAX                            ; 0040ad89
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040ad8a
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0040ad8f
    JMP 0x0040ac98                      ; 0040ad92
        ;   XREF to: 0040ac98 (UNCONDITIONAL_JUMP)  ; LAB_0040ac98
    CMP EDX,dword ptr [0x005b7620]      ; 0040ad97 | DAT_005b7620
        ;   Label: LAB_0040ad97
    JGE 0x0040acb2                      ; 0040ad9d
        ;   XREF to: 0040acb2 (CONDITIONAL_JUMP)  ; LAB_0040acb2
    PUSH EDX                            ; 0040ada3
    PUSH EAX                            ; 0040ada4
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040ada5
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0040adaa
    JMP 0x0040acb2                      ; 0040adad
        ;   XREF to: 0040acb2 (UNCONDITIONAL_JUMP)  ; LAB_0040acb2
    PUSH EBX                            ; 0040adb2
        ;   Label: LAB_0040adb2
    PUSH ESI                            ; 0040adb3
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0040adb4
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0040adb9
    ADD ESP,0xc                         ; 0040adbc
    POP ESI                             ; 0040adbf
    POP EBX                             ; 0040adc0
    RET                                 ; 0040adc1

