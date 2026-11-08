; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a2fb0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff34c
;   undefined4 DAT_005ff350
;
; Called Functions:
;   FUN_005478b0
;   FUN_0059d7f0
;   FUN_0059d990
;   FUN_0059dc80
;   FUN_0059e3b0
;   FUN_005a31c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2fb0
        ;   Label: FUN_005a2fb0
    PUSH ESI                            ; 005a2fb1
    PUSH EDI                            ; 005a2fb2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a2fb3
    PUSH EDX                            ; 005a2fb7
    CALL FUN_0059e3b0                   ; 005a2fb8
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e3b0()
    ADD ESP,0x4                         ; 005a2fbd
    PUSH 0x5f0064                       ; 005a2fc0
    MOV EBX,EAX                         ; 005a2fc5
    LEA ESI,[EAX + 0x2b4]               ; 005a2fc7
    PUSH ESI                            ; 005a2fcd
    MOV dword ptr [EAX + 0x2b0],0x5ff374 ; 005a2fce
    CALL FUN_005478b0                   ; 005a2fd8
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x3434],0x40000000 ; 005a2fdd
    MOV dword ptr [EBX + 0x3444],0x40a00000 ; 005a2fe7
    MOV dword ptr [EBX + 0x1134c],0x40200000 ; 005a2ff1
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a2ffb
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a3005
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a300f
    MOV dword ptr [EBX + 0x1138c],0x2   ; 005a3019
    MOV dword ptr [EBX + 0x11860],0x0   ; 005a3023
    LEA EDI,[EBX + 0x113d4]             ; 005a302d
    MOV dword ptr [EBX + 0x11864],0x0   ; 005a3033
    FLD float ptr [0x005ff34c]          ; 005a303d | DAT_005ff34c
    MOV dword ptr [EBX + 0x11868],0x2   ; 005a3043
    MOV ESI,0x5f0070                    ; 005a304d
    MOV dword ptr [EBX + 0x11418],0x1   ; 005a3052
    ADD ESP,0x8                         ; 005a305c
    FSTP float ptr [EBX + 0x11370]      ; 005a305f
    PUSH EDI                            ; 005a3065
    MOV AL,byte ptr [ESI]               ; 005a3066
        ;   Label: LAB_005a3066
    MOV byte ptr [EDI],AL               ; 005a3068
    CMP AL,0x0                          ; 005a306a
    JZ 0x005a307e                       ; 005a306c
        ;   XREF to: 005a307e (CONDITIONAL_JUMP)  ; LAB_005a307e
    MOV AL,byte ptr [ESI + 0x1]         ; 005a306e
    ADD ESI,0x2                         ; 005a3071
    MOV byte ptr [EDI + 0x1],AL         ; 005a3074
    ADD EDI,0x2                         ; 005a3077
    CMP AL,0x0                          ; 005a307a
    JNZ 0x005a3066                      ; 005a307c
        ;   XREF to: 005a3066 (CONDITIONAL_JUMP)  ; LAB_005a3066
    POP EDI                             ; 005a307e
        ;   Label: LAB_005a307e
    PUSH 0x0                            ; 005a307f
    PUSH 0x0                            ; 005a3081
    PUSH EBX                            ; 005a3083
    CALL FUN_005a31c0                   ; 005a3084
        ;   XREF to: 005a31c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a31c0()
    ADD ESP,0xc                         ; 005a3089
    FLD float ptr [0x005ff350]          ; 005a308c | DAT_005ff350
    MOV dword ptr [EBX + 0x11398],0x0   ; 005a3092
    PUSH 0x5f0077                       ; 005a309c
    LEA ESI,[EBX + 0x10af8]             ; 005a30a1
    MOV dword ptr [EBX + 0x1186c],0x0   ; 005a30a7
    PUSH ESI                            ; 005a30b1
    FSTP float ptr [EBX + 0x11394]      ; 005a30b2
    CALL FUN_0059d990                   ; 005a30b8
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d990()
    ADD ESP,0x8                         ; 005a30bd
    PUSH ESI                            ; 005a30c0
    CALL FUN_0059dc80                   ; 005a30c1
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0059dc80()
    ADD ESP,0x4                         ; 005a30c6
    PUSH 0x5f007d                       ; 005a30c9
    PUSH 0x5f0089                       ; 005a30ce
    PUSH ESI                            ; 005a30d3
    CALL FUN_0059d7f0                   ; 005a30d4
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a30d9
    LEA EDI,[EBX + 0x11444]             ; 005a30dc
    MOV ESI,0x5f0097                    ; 005a30e2
    PUSH EDI                            ; 005a30e7
    MOV AL,byte ptr [ESI]               ; 005a30e8
        ;   Label: LAB_005a30e8
    MOV byte ptr [EDI],AL               ; 005a30ea
    CMP AL,0x0                          ; 005a30ec
    JZ 0x005a3100                       ; 005a30ee
        ;   XREF to: 005a3100 (CONDITIONAL_JUMP)  ; LAB_005a3100
    MOV AL,byte ptr [ESI + 0x1]         ; 005a30f0
    ADD ESI,0x2                         ; 005a30f3
    MOV byte ptr [EDI + 0x1],AL         ; 005a30f6
    ADD EDI,0x2                         ; 005a30f9
    CMP AL,0x0                          ; 005a30fc
    JNZ 0x005a30e8                      ; 005a30fe
        ;   XREF to: 005a30e8 (CONDITIONAL_JUMP)  ; LAB_005a30e8
    POP EDI                             ; 005a3100
        ;   Label: LAB_005a3100
    MOV ESI,0x5f00a8                    ; 005a3101
    LEA EDI,[EBX + 0x11741]             ; 005a3106
    PUSH EDI                            ; 005a310c
    MOV AL,byte ptr [ESI]               ; 005a310d
        ;   Label: LAB_005a310d
    MOV byte ptr [EDI],AL               ; 005a310f
    CMP AL,0x0                          ; 005a3111
    JZ 0x005a3125                       ; 005a3113
        ;   XREF to: 005a3125 (CONDITIONAL_JUMP)  ; LAB_005a3125
    MOV AL,byte ptr [ESI + 0x1]         ; 005a3115
    ADD ESI,0x2                         ; 005a3118
    MOV byte ptr [EDI + 0x1],AL         ; 005a311b
    ADD EDI,0x2                         ; 005a311e
    CMP AL,0x0                          ; 005a3121
    JNZ 0x005a310d                      ; 005a3123
        ;   XREF to: 005a310d (CONDITIONAL_JUMP)  ; LAB_005a310d
    POP EDI                             ; 005a3125
        ;   Label: LAB_005a3125
    MOV dword ptr [EBX + 0x11844],0x40a00000 ; 005a3126
    MOV EAX,EBX                         ; 005a3130
    MOV dword ptr [EBX + 0x2ac],0x0     ; 005a3132
    POP EDI                             ; 005a313c
    POP ESI                             ; 005a313d
    POP EBX                             ; 005a313e
    RET                                 ; 005a313f

