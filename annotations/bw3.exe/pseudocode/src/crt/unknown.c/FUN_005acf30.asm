; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005acf30(byte *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   crt_unknown.c_FUN_005ad0f2 at 005ad107
;
; Called Functions:
;   crt_unknown.c_FUN_005a7360
;   crt_unknown.c_FUN_005af71c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005acf30
        ;   Label: crt_unknown.c_FUN_005acf30
    MOV EBP,ESP                         ; 005acf31
    PUSH EBX                            ; 005acf33
    PUSH ESI                            ; 005acf34
    PUSH EDI                            ; 005acf35
    SUB ESP,0x30                        ; 005acf36
    MOV EAX,dword ptr [EBP + 0x8]       ; 005acf39
    MOV dword ptr [EBP + -0x1c],EAX     ; 005acf3c
    MOV DL,byte ptr [EAX]               ; 005acf3f
        ;   Label: LAB_005acf3f
    CMP DL,0x20                         ; 005acf41
    JZ 0x005acf50                       ; 005acf44
        ;   XREF to: 005acf50 (CONDITIONAL_JUMP)  ; LAB_005acf50
    CMP DL,0x9                          ; 005acf46
    JC 0x005acf53                       ; 005acf49
        ;   XREF to: 005acf53 (CONDITIONAL_JUMP)  ; LAB_005acf53
    CMP DL,0xd                          ; 005acf4b
    JA 0x005acf53                       ; 005acf4e
        ;   XREF to: 005acf53 (CONDITIONAL_JUMP)  ; LAB_005acf53
    INC EAX                             ; 005acf50
        ;   Label: LAB_005acf50
    JMP 0x005acf3f                      ; 005acf51
        ;   XREF to: 005acf3f (UNCONDITIONAL_JUMP)  ; LAB_005acf3f
    XOR DH,DH                           ; 005acf53
        ;   Label: LAB_005acf53
    LEA EBX,[EAX + 0x1]                 ; 005acf55
    MOV byte ptr [EBP + -0x10],DH       ; 005acf58
    CMP DL,0x2b                         ; 005acf5b
    JNZ 0x005acf64                      ; 005acf5e
        ;   XREF to: 005acf64 (CONDITIONAL_JUMP)  ; LAB_005acf64
    MOV EAX,EBX                         ; 005acf60
    JMP 0x005acf70                      ; 005acf62
        ;   XREF to: 005acf70 (UNCONDITIONAL_JUMP)  ; LAB_005acf70
    CMP DL,0x2d                         ; 005acf64
        ;   Label: LAB_005acf64
    JNZ 0x005acf70                      ; 005acf67
        ;   XREF to: 005acf70 (CONDITIONAL_JUMP)  ; LAB_005acf70
    MOV CL,0x1                          ; 005acf69
    MOV EAX,EBX                         ; 005acf6b
    MOV byte ptr [EBP + -0x10],CL       ; 005acf6d
    MOV DH,0x30                         ; 005acf70
        ;   Label: LAB_005acf70
    XOR EBX,EBX                         ; 005acf72
    XOR EDI,EDI                         ; 005acf74
    MOV DL,byte ptr [EAX]               ; 005acf76
        ;   Label: LAB_005acf76
    INC EAX                             ; 005acf78
    CMP DL,0x2e                         ; 005acf79
    JNZ 0x005acf90                      ; 005acf7c
        ;   XREF to: 005acf90 (CONDITIONAL_JUMP)  ; LAB_005acf90
    MOV CL,byte ptr [EBP + -0x10]       ; 005acf7e
    TEST CL,0x8                         ; 005acf81
    JNZ 0x005acfb8                      ; 005acf84
        ;   XREF to: 005acfb8 (CONDITIONAL_JUMP)  ; LAB_005acfb8
    MOV CH,CL                           ; 005acf86
    OR CH,0x8                           ; 005acf88
    MOV byte ptr [EBP + -0x10],CH       ; 005acf8b
    JMP 0x005acf76                      ; 005acf8e
        ;   XREF to: 005acf76 (UNCONDITIONAL_JUMP)  ; LAB_005acf76
    CMP DL,0x30                         ; 005acf90
        ;   Label: LAB_005acf90
    JC 0x005acfb8                       ; 005acf93
        ;   XREF to: 005acfb8 (CONDITIONAL_JUMP)  ; LAB_005acfb8
    CMP DL,0x39                         ; 005acf95
    JA 0x005acfb8                       ; 005acf98
        ;   XREF to: 005acfb8 (CONDITIONAL_JUMP)  ; LAB_005acfb8
    TEST byte ptr [EBP + -0x10],0x8     ; 005acf9a
    JZ 0x005acfa1                       ; 005acf9e
        ;   XREF to: 005acfa1 (CONDITIONAL_JUMP)  ; LAB_005acfa1
    INC EDI                             ; 005acfa0
    OR DH,DL                            ; 005acfa1
        ;   Label: LAB_005acfa1
    CMP DH,0x30                         ; 005acfa3
    JZ 0x005acfb2                       ; 005acfa6
        ;   XREF to: 005acfb2 (CONDITIONAL_JUMP)  ; LAB_005acfb2
    CMP EBX,0x13                        ; 005acfa8
    JGE 0x005acfb1                      ; 005acfab
        ;   XREF to: 005acfb1 (CONDITIONAL_JUMP)  ; LAB_005acfb1
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],DL ; 005acfad
    INC EBX                             ; 005acfb1
        ;   Label: LAB_005acfb1
    OR byte ptr [EBP + -0x10],0x4       ; 005acfb2
        ;   Label: LAB_005acfb2
    JMP 0x005acf76                      ; 005acfb6
        ;   XREF to: 005acf76 (UNCONDITIONAL_JUMP)  ; LAB_005acf76
    MOV DH,byte ptr [EBP + -0x10]       ; 005acfb8
        ;   Label: LAB_005acfb8
    XOR ESI,ESI                         ; 005acfbb
    TEST DH,0x4                         ; 005acfbd
    JZ 0x005ad042                       ; 005acfc0
        ;   XREF to: 005ad042 (CONDITIONAL_JUMP)  ; LAB_005ad042
    CMP DL,0x65                         ; 005acfc6
    JZ 0x005acfd4                       ; 005acfc9
        ;   XREF to: 005acfd4 (CONDITIONAL_JUMP)  ; LAB_005acfd4
    CMP DL,0x45                         ; 005acfcb
    JNZ 0x005ad03e                      ; 005acfce
        ;   XREF to: 005ad03e (CONDITIONAL_JUMP)  ; LAB_005ad03e
    LEA EDX,[EAX + -0x1]                ; 005acfd4
        ;   Label: LAB_005acfd4
    MOV CL,byte ptr [EAX]               ; 005acfd7
    MOV dword ptr [EBP + -0x18],EDX     ; 005acfd9
    LEA EDX,[EAX + 0x1]                 ; 005acfdc
    CMP CL,0x2b                         ; 005acfdf
    JNZ 0x005acfe8                      ; 005acfe2
        ;   XREF to: 005acfe8 (CONDITIONAL_JUMP)  ; LAB_005acfe8
    MOV EAX,EDX                         ; 005acfe4
    JMP 0x005acff8                      ; 005acfe6
        ;   XREF to: 005acff8 (UNCONDITIONAL_JUMP)  ; LAB_005acff8
    CMP CL,0x2d                         ; 005acfe8
        ;   Label: LAB_005acfe8
    JNZ 0x005acff8                      ; 005acfeb
        ;   XREF to: 005acff8 (CONDITIONAL_JUMP)  ; LAB_005acff8
    MOV CL,byte ptr [EBP + -0x10]       ; 005acfed
    OR CL,0x2                           ; 005acff0
    MOV EAX,EDX                         ; 005acff3
    MOV byte ptr [EBP + -0x10],CL       ; 005acff5
    AND byte ptr [EBP + -0x10],0xfb     ; 005acff8
        ;   Label: LAB_005acff8
    MOV DL,byte ptr [EAX]               ; 005acffc
        ;   Label: LAB_005acffc
    CMP DL,0x30                         ; 005acffe
    JC 0x005ad02b                       ; 005ad001
        ;   XREF to: 005ad02b (CONDITIONAL_JUMP)  ; LAB_005ad02b
    CMP DL,0x39                         ; 005ad003
    JA 0x005ad02b                       ; 005ad006
        ;   XREF to: 005ad02b (CONDITIONAL_JUMP)  ; LAB_005ad02b
    CMP ESI,0x3e8                       ; 005ad008
    JGE 0x005ad01f                      ; 005ad00e
        ;   XREF to: 005ad01f (CONDITIONAL_JUMP)  ; LAB_005ad01f
    IMUL ESI,ESI,0xa                    ; 005ad010
    MOV dword ptr [EBP + -0x14],ESI     ; 005ad013
    MOVZX ESI,DL                        ; 005ad016
    ADD ESI,dword ptr [EBP + -0x14]     ; 005ad019
    SUB ESI,0x30                        ; 005ad01c
    MOV DL,byte ptr [EBP + -0x10]       ; 005ad01f
        ;   Label: LAB_005ad01f
    OR DL,0x4                           ; 005ad022
    INC EAX                             ; 005ad025
    MOV byte ptr [EBP + -0x10],DL       ; 005ad026
    JMP 0x005acffc                      ; 005ad029
        ;   XREF to: 005acffc (UNCONDITIONAL_JUMP)  ; LAB_005acffc
    TEST byte ptr [EBP + -0x10],0x2     ; 005ad02b
        ;   Label: LAB_005ad02b
    JZ 0x005ad033                       ; 005ad02f
        ;   XREF to: 005ad033 (CONDITIONAL_JUMP)  ; LAB_005ad033
    NEG ESI                             ; 005ad031
    TEST byte ptr [EBP + -0x10],0x4     ; 005ad033
        ;   Label: LAB_005ad033
    JNZ 0x005ad03f                      ; 005ad037
        ;   XREF to: 005ad03f (CONDITIONAL_JUMP)  ; LAB_005ad03f
    MOV EAX,dword ptr [EBP + -0x18]     ; 005ad039
    JMP 0x005ad03f                      ; 005ad03c
        ;   XREF to: 005ad03f (UNCONDITIONAL_JUMP)  ; LAB_005ad03f
    DEC EAX                             ; 005ad03e
        ;   Label: LAB_005ad03e
    MOV dword ptr [EBP + -0x1c],EAX     ; 005ad03f
        ;   Label: LAB_005ad03f
    MOV ECX,dword ptr [EBP + 0x10]      ; 005ad042
        ;   Label: LAB_005ad042
    TEST ECX,ECX                        ; 005ad045
    JZ 0x005ad04e                       ; 005ad047
        ;   XREF to: 005ad04e (CONDITIONAL_JUMP)  ; LAB_005ad04e
    MOV EAX,dword ptr [EBP + -0x1c]     ; 005ad049
    MOV dword ptr [ECX],EAX             ; 005ad04c
    SUB ESI,EDI                         ; 005ad04e
        ;   Label: LAB_005ad04e
    CMP EBX,0x13                        ; 005ad050
    JLE 0x005ad05f                      ; 005ad053
        ;   XREF to: 005ad05f (CONDITIONAL_JUMP)  ; LAB_005ad05f
    SUB EBX,0x13                        ; 005ad055
    ADD ESI,EBX                         ; 005ad058
    MOV EBX,0x13                        ; 005ad05a
    TEST EBX,EBX                        ; 005ad05f
        ;   Label: LAB_005ad05f
    JLE 0x005ad06e                      ; 005ad061
        ;   XREF to: 005ad06e (CONDITIONAL_JUMP)  ; LAB_005ad06e
    CMP byte ptr [EBX + EBP*0x1 + -0x3d],0x30 ; 005ad063
    JNZ 0x005ad06e                      ; 005ad068
        ;   XREF to: 005ad06e (CONDITIONAL_JUMP)  ; LAB_005ad06e
    INC ESI                             ; 005ad06a
    DEC EBX                             ; 005ad06b
    JMP 0x005ad05f                      ; 005ad06c
        ;   XREF to: 005ad05f (UNCONDITIONAL_JUMP)  ; LAB_005ad05f
    TEST EBX,EBX                        ; 005ad06e
        ;   Label: LAB_005ad06e
    JNZ 0x005ad084                      ; 005ad070
        ;   XREF to: 005ad084 (CONDITIONAL_JUMP)  ; LAB_005ad084
    MOV EAX,dword ptr [EBP + 0xc]       ; 005ad072
    MOV word ptr [EAX + 0x8],0x0        ; 005ad075
    MOV dword ptr [EAX + 0x4],EBX       ; 005ad07b
    MOV dword ptr [EAX],EBX             ; 005ad07e
    XOR EAX,EAX                         ; 005ad080
    JMP 0x005ad0ea                      ; 005ad082
        ;   XREF to: 005ad0ea (UNCONDITIONAL_JUMP)  ; LAB_005ad0ea
    XOR AL,AL                           ; 005ad084
        ;   Label: LAB_005ad084
    LEA EDX,[EBP + -0x28]               ; 005ad086
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],AL ; 005ad089
    LEA EAX,[EBP + -0x3c]               ; 005ad08d
    CALL crt_unknown.c_FUN_005af71c     ; 005ad090
        ;   XREF to: 005af71c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af71c()
    TEST ESI,ESI                        ; 005ad095
    JZ 0x005ad0a6                       ; 005ad097
        ;   XREF to: 005ad0a6 (CONDITIONAL_JUMP)  ; LAB_005ad0a6
    PUSH ESI                            ; 005ad099
    LEA EAX,[EBP + -0x28]               ; 005ad09a
    PUSH EAX                            ; 005ad09d
    CALL crt_unknown.c_FUN_005a7360     ; 005ad09e
        ;   XREF to: 005a7360 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7360()
    ADD ESP,0x8                         ; 005ad0a3
    TEST byte ptr [EBP + -0x10],0x1     ; 005ad0a6
        ;   Label: LAB_005ad0a6
    JZ 0x005ad0b0                       ; 005ad0aa
        ;   XREF to: 005ad0b0 (CONDITIONAL_JUMP)  ; LAB_005ad0b0
    OR byte ptr [EBP + -0x1f],0x80      ; 005ad0ac
    MOV EDX,dword ptr [EBP + 0xc]       ; 005ad0b0
        ;   Label: LAB_005ad0b0
    MOV EAX,dword ptr [EBP + -0x20]     ; 005ad0b3
    MOV word ptr [EDX + 0x8],AX         ; 005ad0b6
    MOV EAX,dword ptr [EBP + -0x24]     ; 005ad0ba
    MOV dword ptr [EDX + 0x4],EAX       ; 005ad0bd
    MOV EAX,dword ptr [EBP + -0x28]     ; 005ad0c0
    MOV dword ptr [EDX],EAX             ; 005ad0c3
    LEA EAX,[ESI + EBX*0x1 + -0x1]      ; 005ad0c5
    CMP EAX,0x134                       ; 005ad0c9
    JLE 0x005ad0d7                      ; 005ad0ce
        ;   XREF to: 005ad0d7 (CONDITIONAL_JUMP)  ; LAB_005ad0d7
    MOV EAX,0x3                         ; 005ad0d0
    JMP 0x005ad0ea                      ; 005ad0d5
        ;   XREF to: 005ad0ea (UNCONDITIONAL_JUMP)  ; LAB_005ad0ea
    CMP EAX,0xfffffecc                  ; 005ad0d7
        ;   Label: LAB_005ad0d7
    JGE 0x005ad0e5                      ; 005ad0dc
        ;   XREF to: 005ad0e5 (CONDITIONAL_JUMP)  ; LAB_005ad0e5
    MOV EAX,0x2                         ; 005ad0de
    JMP 0x005ad0ea                      ; 005ad0e3
        ;   XREF to: 005ad0ea (UNCONDITIONAL_JUMP)  ; LAB_005ad0ea
    MOV EAX,0x1                         ; 005ad0e5
        ;   Label: LAB_005ad0e5
    LEA ESP,[EBP + -0xc]                ; 005ad0ea
        ;   Label: LAB_005ad0ea
    POP EDI                             ; 005ad0ed
    POP ESI                             ; 005ad0ee
    POP EBX                             ; 005ad0ef
    POP EBP                             ; 005ad0f0
    RET                                 ; 005ad0f1

