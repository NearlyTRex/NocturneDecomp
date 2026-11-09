; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_palette_cpp_FUN_00531ee0(int *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   engine_font.cpp_FUN_004c1dd0 at 004c1e16
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01d22544
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_font.cpp_FUN_004c2690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531ee0
        ;   Label: unkafter_palette.cpp_FUN_00531ee0
    PUSH ESI                            ; 00531ee1
    PUSH EBP                            ; 00531ee2
    SUB ESP,0x10                        ; 00531ee3
    MOV EBX,dword ptr [ESP + 0x20]      ; 00531ee6
    MOV ESI,dword ptr [ESP + 0x24]      ; 00531eea
    MOV EBP,dword ptr [ESP + 0x30]      ; 00531eee
    MOV EDX,dword ptr [EBX]             ; 00531ef2
    CMP EDX,0x64                        ; 00531ef4
    JL 0x00531f02                       ; 00531ef7
        ;   XREF to: 00531f02 (CONDITIONAL_JUMP)  ; LAB_00531f02
    XOR EAX,EAX                         ; 00531ef9
    ADD ESP,0x10                        ; 00531efb
    POP EBP                             ; 00531efe
    POP ESI                             ; 00531eff
    POP EBX                             ; 00531f00
    RET                                 ; 00531f01
    PUSH EDI                            ; 00531f02
        ;   Label: LAB_00531f02
    MOV EDI,EDX                         ; 00531f03
    LEA EAX,[EBX + 0x324]               ; 00531f05
    SHL EDI,0x8                         ; 00531f0b
    ADD EDI,EAX                         ; 00531f0e
    PUSH EDI                            ; 00531f10
    MOV AL,byte ptr [ESI]               ; 00531f11
        ;   Label: LAB_00531f11
    MOV byte ptr [EDI],AL               ; 00531f13
    CMP AL,0x0                          ; 00531f15
    JZ 0x00531f29                       ; 00531f17
        ;   XREF to: 00531f29 (CONDITIONAL_JUMP)  ; LAB_00531f29
    MOV AL,byte ptr [ESI + 0x1]         ; 00531f19
    ADD ESI,0x2                         ; 00531f1c
    MOV byte ptr [EDI + 0x1],AL         ; 00531f1f
    ADD EDI,0x2                         ; 00531f22
    CMP AL,0x0                          ; 00531f25
    JNZ 0x00531f11                      ; 00531f27
        ;   XREF to: 00531f11 (CONDITIONAL_JUMP)  ; LAB_00531f11
    POP EDI                             ; 00531f29
        ;   Label: LAB_00531f29
    MOV EAX,[0x01d22544]                ; 00531f2a | DAT_01d22544
    MOV dword ptr [ESP + 0x4],EAX       ; 00531f2f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00531f33
    MOV dword ptr [ESP + 0x10],EAX      ; 00531f37
    FILD dword ptr [ESP + 0x10]         ; 00531f3b
    MOV EAX,dword ptr [EBX]             ; 00531f3f
    FMUL float ptr [ESP + 0x4]          ; 00531f41
    SHL EAX,0x2                         ; 00531f45
    CALL crt_math.c_round_FUN_005c03a0  ; 00531f48
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    LEA ECX,[EBX + EAX*0x1]             ; 00531f4d
    FISTP dword ptr [ESP + 0x10]        ; 00531f50
    MOV EAX,dword ptr [ESP + 0x10]      ; 00531f54
    MOV dword ptr [ECX + 0x4],EAX       ; 00531f58
    MOV EAX,dword ptr [ESP + 0x30]      ; 00531f5b
    MOV dword ptr [ESP + 0x10],EAX      ; 00531f5f
    FILD dword ptr [ESP + 0x10]         ; 00531f63
    MOV EAX,dword ptr [EBX]             ; 00531f67
    FMUL float ptr [ESP + 0x4]          ; 00531f69
    SHL EAX,0x2                         ; 00531f6d
    CALL crt_math.c_round_FUN_005c03a0  ; 00531f70
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    LEA ECX,[EBX + EAX*0x1]             ; 00531f75
    FISTP dword ptr [ESP + 0x10]        ; 00531f78
    MOV EAX,dword ptr [ESP + 0x10]      ; 00531f7c
    MOV dword ptr [ECX + 0x194],EAX     ; 00531f80
    TEST EBP,EBP                        ; 00531f86
    JL 0x0053203b                       ; 00531f88
        ;   XREF to: 0053203b (CONDITIONAL_JUMP)  ; LAB_0053203b
    LEA ECX,[EBP*0x4 + 0x0]             ; 00531f8e
    MOV ESI,dword ptr [0x0061b4a0]      ; 00531f95 | DAT_0061b4a0
    SUB ECX,EBP                         ; 00531f9b
    CMP ESI,0x10                        ; 00531f9d
    JNZ 0x00532044                      ; 00531fa0
        ;   XREF to: 00532044 (CONDITIONAL_JUMP)  ; LAB_00532044
    MOVZX EBP,byte ptr [ECX + 0x1c4e9f9] ; 00531fa6 | DAT_01c4e9f9
    MOVZX EDI,byte ptr [ECX + 0x1c4e9fa] ; 00531fad | DAT_01c4e9fa
    XOR EAX,EAX                         ; 00531fb4
    XOR EDX,EDX                         ; 00531fb6
    MOV AL,byte ptr [ECX + 0x1c4e9f8]   ; 00531fb8 | DAT_01c4e9f8
    MOV ECX,dword ptr [0x01c4e9d8]      ; 00531fbe | DAT_01c4e9d8
    MOV dword ptr [ESP + 0x8],EAX       ; 00531fc4
    DIV ECX                             ; 00531fc8
    MOV ESI,dword ptr [0x01c4e9e4]      ; 00531fca | DAT_01c4e9e4
    MOV dword ptr [ESP + 0x8],EAX       ; 00531fd0
    XOR EDX,EDX                         ; 00531fd4
    MOV EAX,EBP                         ; 00531fd6
    DIV ESI                             ; 00531fd8
    MOV dword ptr [ESP + 0xc],EBP       ; 00531fda
    MOV dword ptr [ESP + 0xc],EAX       ; 00531fde
    XOR EDX,EDX                         ; 00531fe2
    MOV EAX,EDI                         ; 00531fe4
    DIV dword ptr [0x01c4e9f0]          ; 00531fe6 | DAT_01c4e9f0
    MOV CL,byte ptr [0x01c4e9d4]        ; 00531fec | DAT_01c4e9d4
    MOV EDI,dword ptr [ESP + 0x8]       ; 00531ff2
    MOV ESI,EAX                         ; 00531ff6
    MOV EAX,dword ptr [ESP + 0xc]       ; 00531ff8
    SHL EDI,CL                          ; 00531ffc
    MOV CL,byte ptr [0x01c4e9e0]        ; 00531ffe | DAT_01c4e9e0
    SHL EAX,CL                          ; 00532004
    MOV CL,byte ptr [0x01c4e9ec]        ; 00532006 | DAT_01c4e9ec
    OR EDI,EAX                          ; 0053200c
    MOV EAX,ESI                         ; 0053200e
    SHL EAX,CL                          ; 00532010
    OR EAX,EDI                          ; 00532012
    MOV ECX,dword ptr [EBX]             ; 00532014
    AND EAX,0xffff                      ; 00532016
    MOV dword ptr [EBX + ECX*0x4 + 0x6724],EAX ; 0053201b
        ;   Label: LAB_0053201b
    MOV EAX,dword ptr [EBX]             ; 00532022
        ;   Label: LAB_00532022
    MOV ECX,dword ptr [ESP + 0x38]      ; 00532024
    MOV dword ptr [EBX + EAX*0x4 + 0x68b4],ECX ; 00532028
    INC dword ptr [EBX]                 ; 0053202f
    POP EDI                             ; 00532031
    XOR EAX,EAX                         ; 00532032
    ADD ESP,0x10                        ; 00532034
    POP EBP                             ; 00532037
    POP ESI                             ; 00532038
    POP EBX                             ; 00532039
    RET                                 ; 0053203a
    CALL engine_font.cpp_FUN_004c2690   ; 0053203b
        ;   XREF to: 004c2690 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c2690()
        ;   Label: LAB_0053203b
    MOV ECX,dword ptr [EBX]             ; 00532040
    JMP 0x0053201b                      ; 00532042
        ;   XREF to: 0053201b (UNCONDITIONAL_JUMP)  ; LAB_0053201b
    MOV EBP,dword ptr [0x0061b4a0]      ; 00532044 | DAT_0061b4a0
        ;   Label: LAB_00532044
    MOVZX EDI,byte ptr [ECX + 0x1c4e9f9] ; 0053204a | DAT_01c4e9f9
    XOR EAX,EAX                         ; 00532051
    MOVZX ESI,byte ptr [ECX + 0x1c4e9fa] ; 00532053 | DAT_01c4e9fa
    MOV AL,byte ptr [ECX + 0x1c4e9f8]   ; 0053205a | DAT_01c4e9f8
    CMP EBP,0x20                        ; 00532060
    JNZ 0x0053208e                      ; 00532063
        ;   XREF to: 0053208e (CONDITIONAL_JUMP)  ; LAB_0053208e
    MOV CL,byte ptr [0x01c4e9d4]        ; 00532065 | DAT_01c4e9d4
    SHL EAX,CL                          ; 0053206b
    MOV CL,byte ptr [0x01c4e9e0]        ; 0053206d | DAT_01c4e9e0
    SHL EDI,CL                          ; 00532073
    MOV CL,byte ptr [0x01c4e9ec]        ; 00532075 | DAT_01c4e9ec
    SHL ESI,CL                          ; 0053207b
    OR EAX,EDI                          ; 0053207d
    MOV ECX,ESI                         ; 0053207f
    OR ECX,EAX                          ; 00532081
    MOV EAX,dword ptr [EBX]             ; 00532083
    MOV dword ptr [EBX + EAX*0x4 + 0x6724],ECX ; 00532085
    JMP 0x00532022                      ; 0053208c
        ;   XREF to: 00532022 (UNCONDITIONAL_JUMP)  ; LAB_00532022
    MOV ECX,EDI                         ; 0053208e
        ;   Label: LAB_0053208e
    SHL EAX,0x10                        ; 00532090
    SHL ECX,0x8                         ; 00532093
    OR ECX,EAX                          ; 00532096
    OR ECX,ESI                          ; 00532098
    MOV EAX,dword ptr [EBX]             ; 0053209a
    MOV dword ptr [EBX + EAX*0x4 + 0x6724],ECX ; 0053209c
    JMP 0x00532022                      ; 005320a3
        ;   XREF to: 00532022 (UNCONDITIONAL_JUMP)  ; LAB_00532022

