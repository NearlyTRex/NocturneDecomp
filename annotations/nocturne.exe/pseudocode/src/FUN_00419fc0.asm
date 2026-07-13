; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00419fc0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   undefined4 DAT_00764794
;   undefined4 DAT_007647a8
;   undefined4 DAT_007647ac
;   undefined4 DAT_007647b8
;   undefined4 DAT_007647bc
;
; Called Functions:
;   FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419fc0
        ;   Label: FUN_00419fc0
    PUSH ESI                            ; 00419fc1
    PUSH EBP                            ; 00419fc2
    SUB ESP,0x3c                        ; 00419fc3
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00419fc6
    MOV EBX,dword ptr [ESP + 0x50]      ; 00419fca
    CMP dword ptr [ESI + 0xc344],0x0    ; 00419fce
    JZ 0x00419fe0                       ; 00419fd5
        ;   XREF to: 00419fe0 (CONDITIONAL_JUMP)  ; LAB_00419fe0
    XOR EAX,EAX                         ; 00419fd7
    ADD ESP,0x3c                        ; 00419fd9
    POP EBP                             ; 00419fdc
    POP ESI                             ; 00419fdd
    POP EBX                             ; 00419fde
    RET                                 ; 00419fdf
    MOV ECX,dword ptr [0x00764794]      ; 00419fe0 | DAT_00764794
        ;   Label: LAB_00419fe0
    PUSH ECX                            ; 00419fe6
    LEA EAX,[ESP + 0x1c]                ; 00419fe7
    PUSH EAX                            ; 00419feb
    LEA EAX,[ESI + 0x150]               ; 00419fec
    PUSH EAX                            ; 00419ff2
    CALL FUN_0051d380                   ; 00419ff3
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 00419ff8
    CMP EBX,EAX                         ; 00419ffb
    JZ 0x0041a00f                       ; 00419ffd
        ;   XREF to: 0041a00f (CONDITIONAL_JUMP)  ; LAB_0041a00f
    MOV EDX,dword ptr [EAX]             ; 00419fff
    MOV dword ptr [EBX],EDX             ; 0041a001
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a003
    MOV dword ptr [EBX + 0x4],EDX       ; 0041a006
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a009
    MOV dword ptr [EBX + 0x8],EDX       ; 0041a00c
    PUSH EDI                            ; 0041a00f
        ;   Label: LAB_0041a00f
    MOV EDI,dword ptr [0x007647a8]      ; 0041a010 | DAT_007647a8
    PUSH EDI                            ; 0041a016
    LEA EAX,[ESP + 0x2c]                ; 0041a017
    PUSH EAX                            ; 0041a01b
    LEA EAX,[ESI + 0x150]               ; 0041a01c
    PUSH EAX                            ; 0041a022
    CALL FUN_0051d380                   ; 0041a023
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    LEA EDX,[EBX + 0xc]                 ; 0041a028
    ADD ESP,0xc                         ; 0041a02b
    CMP EDX,EAX                         ; 0041a02e
    JZ 0x0041a042                       ; 0041a030
        ;   XREF to: 0041a042 (CONDITIONAL_JUMP)  ; LAB_0041a042
    MOV ECX,dword ptr [EAX]             ; 0041a032
    MOV dword ptr [EDX],ECX             ; 0041a034
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041a036
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a039
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041a03c
    MOV dword ptr [EDX + 0x8],ECX       ; 0041a03f
    MOV EBP,dword ptr [0x007647ac]      ; 0041a042 | DAT_007647ac
        ;   Label: LAB_0041a042
    PUSH EBP                            ; 0041a048
    LEA EAX,[ESP + 0x38]                ; 0041a049
    PUSH EAX                            ; 0041a04d
    LEA EAX,[ESI + 0x150]               ; 0041a04e
    PUSH EAX                            ; 0041a054
    CALL FUN_0051d380                   ; 0041a055
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    LEA EDX,[EBX + 0x18]                ; 0041a05a
    ADD ESP,0xc                         ; 0041a05d
    CMP EDX,EAX                         ; 0041a060
    JZ 0x0041a074                       ; 0041a062
        ;   XREF to: 0041a074 (CONDITIONAL_JUMP)  ; LAB_0041a074
    MOV ECX,dword ptr [EAX]             ; 0041a064
    MOV dword ptr [EDX],ECX             ; 0041a066
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041a068
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a06b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041a06e
    MOV dword ptr [EDX + 0x8],ECX       ; 0041a071
    MOV EAX,[0x007647b8]                ; 0041a074 | DAT_007647b8
        ;   Label: LAB_0041a074
    PUSH EAX                            ; 0041a079
    LEA EAX,[ESP + 0x14]                ; 0041a07a
    PUSH EAX                            ; 0041a07e
    LEA EAX,[ESI + 0x150]               ; 0041a07f
    PUSH EAX                            ; 0041a085
    CALL FUN_0051d380                   ; 0041a086
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    LEA EDX,[EBX + 0x24]                ; 0041a08b
    ADD ESP,0xc                         ; 0041a08e
    CMP EDX,EAX                         ; 0041a091
    JZ 0x0041a0a5                       ; 0041a093
        ;   XREF to: 0041a0a5 (CONDITIONAL_JUMP)  ; LAB_0041a0a5
    MOV ECX,dword ptr [EAX]             ; 0041a095
    MOV dword ptr [EDX],ECX             ; 0041a097
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041a099
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a09c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041a09f
    MOV dword ptr [EDX + 0x8],ECX       ; 0041a0a2
    MOV EDX,dword ptr [0x007647bc]      ; 0041a0a5 | DAT_007647bc
        ;   Label: LAB_0041a0a5
    PUSH EDX                            ; 0041a0ab
    LEA EAX,[ESP + 0x8]                 ; 0041a0ac
    PUSH EAX                            ; 0041a0b0
    ADD ESI,0x150                       ; 0041a0b1
    PUSH ESI                            ; 0041a0b7
    ADD EBX,0x30                        ; 0041a0b8
    CALL FUN_0051d380                   ; 0041a0bb
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d380()
    ADD ESP,0xc                         ; 0041a0c0
    CMP EBX,EAX                         ; 0041a0c3
    JZ 0x0041a0d7                       ; 0041a0c5
        ;   XREF to: 0041a0d7 (CONDITIONAL_JUMP)  ; LAB_0041a0d7
    MOV EDX,dword ptr [EAX]             ; 0041a0c7
    MOV dword ptr [EBX],EDX             ; 0041a0c9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a0cb
    MOV dword ptr [EBX + 0x4],EDX       ; 0041a0ce
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a0d1
    MOV dword ptr [EBX + 0x8],EDX       ; 0041a0d4
    MOV EAX,0x5                         ; 0041a0d7
        ;   Label: LAB_0041a0d7
    POP EDI                             ; 0041a0dc
    ADD ESP,0x3c                        ; 0041a0dd
    POP EBP                             ; 0041a0e0
    POP ESI                             ; 0041a0e1
    POP EBX                             ; 0041a0e2
    RET                                 ; 0041a0e3

