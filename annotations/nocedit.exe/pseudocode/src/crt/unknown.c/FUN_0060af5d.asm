; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_0060af5d(int param_1,int *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined1[10]   Stack[-0x24]:10  local_24
; undefined8       Stack[-0x18]:8  local_18
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   crt_strtod.c_staticInit_FUN_00603bb0 at 00603bb1
;
; Called Functions:
;   crt_unknown.c_FUN_00603dc8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060af5d
        ;   Label: crt_unknown.c_FUN_0060af5d
    MOV EBP,ESP                         ; 0060af5e
    PUSH EBX                            ; 0060af60
    PUSH ESI                            ; 0060af61
    PUSH EDI                            ; 0060af62
    SUB ESP,0x40                        ; 0060af63
    MOV EDI,dword ptr [EBP + 0x8]       ; 0060af66
    MOV EDX,dword ptr [EBP + 0xc]       ; 0060af69
    MOV EBX,dword ptr [EBP + 0x10]      ; 0060af6c
    XOR EAX,EAX                         ; 0060af6f
    MOV AL,byte ptr [EBX + 0x15]        ; 0060af71
    MOV dword ptr [EBP + -0x40],EAX     ; 0060af74
    AND AL,0x5f                         ; 0060af77
    MOV ESI,dword ptr [EBX + 0x8]       ; 0060af79
    AND EAX,0xff                        ; 0060af7c
    CMP EAX,0x47                        ; 0060af81
    JNZ 0x0060afa9                      ; 0060af84
        ;   XREF to: 0060afa9 (CONDITIONAL_JUMP)  ; LAB_0060afa9
    TEST ESI,ESI                        ; 0060af86
    JNZ 0x0060af8f                      ; 0060af88
        ;   XREF to: 0060af8f (CONDITIONAL_JUMP)  ; LAB_0060af8f
    MOV ESI,0x1                         ; 0060af8a
    MOV dword ptr [EBP + -0x44],0x4     ; 0060af8f
        ;   Label: LAB_0060af8f
    MOV ECX,dword ptr [EBP + -0x40]     ; 0060af96
    MOV EAX,0x1                         ; 0060af99
    SUB ECX,0x2                         ; 0060af9e
    MOV dword ptr [EBP + -0x48],EAX     ; 0060afa1
    MOV dword ptr [EBP + -0x40],ECX     ; 0060afa4
    JMP 0x0060afc8                      ; 0060afa7
        ;   XREF to: 0060afc8 (UNCONDITIONAL_JUMP)  ; LAB_0060afc8
    CMP EAX,0x45                        ; 0060afa9
        ;   Label: LAB_0060afa9
    JNZ 0x0060afbb                      ; 0060afac
        ;   XREF to: 0060afbb (CONDITIONAL_JUMP)  ; LAB_0060afbb
    MOV ECX,0x1                         ; 0060afae
    MOV dword ptr [EBP + -0x44],ECX     ; 0060afb3
    MOV dword ptr [EBP + -0x48],ECX     ; 0060afb6
    JMP 0x0060afc8                      ; 0060afb9
        ;   XREF to: 0060afc8 (UNCONDITIONAL_JUMP)  ; LAB_0060afc8
    MOV ECX,0x2                         ; 0060afbb
        ;   Label: LAB_0060afbb
    XOR EAX,EAX                         ; 0060afc0
    MOV dword ptr [EBP + -0x44],ECX     ; 0060afc2
    MOV dword ptr [EBP + -0x48],EAX     ; 0060afc5
    TEST byte ptr [EBX + 0x1e],0x1      ; 0060afc8
        ;   Label: LAB_0060afc8
    JZ 0x0060afd2                       ; 0060afcc
        ;   XREF to: 0060afd2 (CONDITIONAL_JUMP)  ; LAB_0060afd2
    OR byte ptr [EBP + -0x44],0x10      ; 0060afce
    MOV EAX,dword ptr [EDX]             ; 0060afd2
        ;   Label: LAB_0060afd2
    ADD EAX,0x8                         ; 0060afd4
    MOV dword ptr [EDX],EAX             ; 0060afd7
    MOV EDX,EAX                         ; 0060afd9
    MOV EAX,dword ptr [EAX + -0x8]      ; 0060afdb
    MOV dword ptr [EBP + -0x14],EAX     ; 0060afde
    MOV EAX,dword ptr [EDX + -0x4]      ; 0060afe1
    LEA EDX,[EBP + -0x20]               ; 0060afe4
    MOV dword ptr [EBP + -0x10],EAX     ; 0060afe7
    LEA EAX,[EBP + -0x14]               ; 0060afea
    FLD double ptr [EAX]                ; 0060afed
    FSTP extended double ptr [EDX]      ; 0060afef
    CMP ESI,-0x1                        ; 0060aff1
    JNZ 0x0060affb                      ; 0060aff4
        ;   XREF to: 0060affb (CONDITIONAL_JUMP)  ; LAB_0060affb
    MOV ESI,0x6                         ; 0060aff6
    LEA EAX,[EDI + 0x1]                 ; 0060affb
        ;   Label: LAB_0060affb
    PUSH EAX                            ; 0060affe
    LEA EAX,[EBP + -0x4c]               ; 0060afff
    PUSH EAX                            ; 0060b002
    LEA EAX,[EBP + -0x20]               ; 0060b003
    XOR EDX,EDX                         ; 0060b006
    PUSH EAX                            ; 0060b008
    MOV dword ptr [EBP + -0x4c],ESI     ; 0060b009
    MOV dword ptr [EBP + -0x3c],EDX     ; 0060b00c
    CALL crt_unknown.c_FUN_00603dc8     ; 0060b00f
        ;   XREF to: 00603dc8 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_00603dc8()
    MOV EAX,dword ptr [EBP + -0x30]     ; 0060b014
    MOV dword ptr [EBX + 0x28],EAX      ; 0060b017
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0060b01a
    MOV dword ptr [EBX + 0x2c],EAX      ; 0060b01d
    MOV EAX,dword ptr [EBP + -0x28]     ; 0060b020
    MOV dword ptr [EBX + 0x30],EAX      ; 0060b023
    MOV EAX,dword ptr [EBP + -0x24]     ; 0060b026
    MOV dword ptr [EBX + 0x34],EAX      ; 0060b029
    MOV ECX,dword ptr [EBP + -0x38]     ; 0060b02c
    ADD ESP,0xc                         ; 0060b02f
    TEST ECX,ECX                        ; 0060b032
    JGE 0x0060b045                      ; 0060b034
        ;   XREF to: 0060b045 (CONDITIONAL_JUMP)  ; LAB_0060b045
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060b036
    LEA EDX,[EAX + 0x1]                 ; 0060b039
    MOV dword ptr [EBX + 0x20],EDX      ; 0060b03c
    MOV byte ptr [EDI + EAX*0x1],0x2d   ; 0060b03f
    JMP 0x0060b06e                      ; 0060b043
        ;   XREF to: 0060b06e (UNCONDITIONAL_JUMP)  ; LAB_0060b06e
    MOV CH,byte ptr [EBX + 0x1e]        ; 0060b045
        ;   Label: LAB_0060b045
    TEST CH,0x4                         ; 0060b048
    JZ 0x0060b05c                       ; 0060b04b
        ;   XREF to: 0060b05c (CONDITIONAL_JUMP)  ; LAB_0060b05c
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060b04d
    LEA EDX,[EAX + 0x1]                 ; 0060b050
    MOV dword ptr [EBX + 0x20],EDX      ; 0060b053
    MOV byte ptr [EDI + EAX*0x1],0x2b   ; 0060b056
    JMP 0x0060b06e                      ; 0060b05a
        ;   XREF to: 0060b06e (UNCONDITIONAL_JUMP)  ; LAB_0060b06e
    TEST CH,0x2                         ; 0060b05c
        ;   Label: LAB_0060b05c
    JZ 0x0060b06e                       ; 0060b05f
        ;   XREF to: 0060b06e (CONDITIONAL_JUMP)  ; LAB_0060b06e
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060b061
    LEA EDX,[EAX + 0x1]                 ; 0060b064
    MOV dword ptr [EBX + 0x20],EDX      ; 0060b067
    MOV byte ptr [EDI + EAX*0x1],0x20   ; 0060b06a
    MOV DX,DS                           ; 0060b06e
        ;   Label: LAB_0060b06e
    MOV EAX,EDI                         ; 0060b070
    LEA ESP,[EBP + -0xc]                ; 0060b072
    POP EDI                             ; 0060b075
    POP ESI                             ; 0060b076
    POP EBX                             ; 0060b077
    POP EBP                             ; 0060b078
    RET                                 ; 0060b079

