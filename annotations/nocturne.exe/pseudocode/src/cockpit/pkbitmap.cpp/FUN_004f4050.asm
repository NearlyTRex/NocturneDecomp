; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_004f4050(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4050
        ;   Label: cockpit_pkbitmap.cpp_FUN_004f4050
    PUSH ESI                            ; 004f4051
    PUSH EDI                            ; 004f4052
    PUSH EBP                            ; 004f4053
    SUB ESP,0x1c                        ; 004f4054
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f4057
    MOV EDX,dword ptr [ESP + 0x30]      ; 004f405b
    CMP dword ptr [EDX + 0x20],0x0      ; 004f405f
    JZ 0x004f4163                       ; 004f4063
        ;   XREF to: 004f4163 (CONDITIONAL_JUMP)  ; LAB_004f4163
    CMP dword ptr [EDX + 0x14],0x0      ; 004f4069
    JZ 0x004f4163                       ; 004f406d
        ;   XREF to: 004f4163 (CONDITIONAL_JUMP)  ; LAB_004f4163
    MOV EDX,dword ptr [ESP + 0x38]      ; 004f4073
    MOV EDI,dword ptr [0x005b7624]      ; 004f4077 | DAT_005b7624
    XOR ESI,ESI                         ; 004f407d
    MOV dword ptr [ESP],EAX             ; 004f407f
    MOV dword ptr [ESP + 0x10],ESI      ; 004f4082
    MOV dword ptr [ESP + 0x4],EDX       ; 004f4086
    CMP EDI,0x10                        ; 004f408a
    JNZ 0x004f4094                      ; 004f408d
        ;   XREF to: 004f4094 (CONDITIONAL_JUMP)  ; LAB_004f4094
    ADD EAX,EAX                         ; 004f408f
    MOV dword ptr [ESP],EAX             ; 004f4091
    CALL cockpit_ckptutil.c_FUN_0042d130 ; 004f4094
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042d130()
        ;   Label: LAB_004f4094
    MOV dword ptr [ESP + 0x14],EAX      ; 004f4099
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f409d
    MOV EAX,dword ptr [EAX + 0x20]      ; 004f40a1
    MOV EBP,dword ptr [EAX]             ; 004f40a4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f40a6
    SHL EAX,0x2                         ; 004f40aa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004f40ad
    MOV dword ptr [ESP + 0xc],EAX       ; 004f40b1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f40b5
    MOV EBX,dword ptr [EBX + 0x14]      ; 004f40b9
    SHL EAX,0x2                         ; 004f40bc
    ADD EBX,EBP                         ; 004f40bf
    MOV dword ptr [ESP + 0x8],EAX       ; 004f40c1
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f40c5
        ;   Label: LAB_004f40c5
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f40c9
    MOV EAX,dword ptr [EAX + 0x20]      ; 004f40cd
    ADD EAX,EDX                         ; 004f40d0
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f40d2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f40d5
    MOV EDI,dword ptr [ESP + 0x30]      ; 004f40d9
    MOV EDX,dword ptr [ESP]             ; 004f40dd
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 004f40e0 | DAT_01bd2fa0 | DAT_01bd2fa4
    MOV EDI,dword ptr [EDI + 0x14]      ; 004f40e6
    ADD EDX,EAX                         ; 004f40e9
    ADD EDI,ECX                         ; 004f40eb
    MOV dword ptr [ESP + 0x18],EDX      ; 004f40ed
    CMP EBX,EDI                         ; 004f40f1
    JNC 0x004f412c                      ; 004f40f3
        ;   XREF to: 004f412c (CONDITIONAL_JUMP)  ; LAB_004f412c
    XOR ESI,ESI                         ; 004f40f5
        ;   Label: LAB_004f40f5
    MOV SI,word ptr [EBX + 0x2]         ; 004f40f7
    LEA EDX,[EBX + 0x4]                 ; 004f40fb
    LEA EAX,[ESI + 0x3]                 ; 004f40fe
    XOR ECX,ECX                         ; 004f4101
    AND AL,0xfc                         ; 004f4103
    MOV CX,word ptr [EBX]               ; 004f4105
    LEA EBX,[EDX + EAX*0x1]             ; 004f4108
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f410b
    MOV EBP,dword ptr [0x005b7624]      ; 004f410f | DAT_005b7624
    ADD EAX,ECX                         ; 004f4115
    CMP EBP,0x10                        ; 004f4117
    JNZ 0x004f411e                      ; 004f411a
        ;   XREF to: 004f411e (CONDITIONAL_JUMP)  ; LAB_004f411e
    ADD EAX,ECX                         ; 004f411c
    PUSH ESI                            ; 004f411e
        ;   Label: LAB_004f411e
    PUSH EDX                            ; 004f411f
    PUSH EAX                            ; 004f4120
    CALL dword ptr [ESP + 0x20]         ; 004f4121
    ADD ESP,0xc                         ; 004f4125
    CMP EBX,EDI                         ; 004f4128
    JC 0x004f40f5                       ; 004f412a
        ;   XREF to: 004f40f5 (CONDITIONAL_JUMP)  ; LAB_004f40f5
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f412c
        ;   Label: LAB_004f412c
    MOV EBP,dword ptr [ESP + 0xc]       ; 004f4130
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4134
    MOV ESI,dword ptr [ESP + 0x8]       ; 004f4138
    MOV EDX,dword ptr [ESP + 0x30]      ; 004f413c
    INC EDI                             ; 004f4140
    ADD EBP,0x4                         ; 004f4141
    INC EAX                             ; 004f4144
    ADD ESI,0x4                         ; 004f4145
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004f4148
    MOV dword ptr [ESP + 0x10],EDI      ; 004f414b
    MOV dword ptr [ESP + 0xc],EBP       ; 004f414f
    MOV dword ptr [ESP + 0x4],EAX       ; 004f4153
    MOV dword ptr [ESP + 0x8],ESI       ; 004f4157
    CMP EDI,ECX                         ; 004f415b
    JL 0x004f40c5                       ; 004f415d
        ;   XREF to: 004f40c5 (CONDITIONAL_JUMP)  ; LAB_004f40c5
    ADD ESP,0x1c                        ; 004f4163
        ;   Label: LAB_004f4163
    POP EBP                             ; 004f4166
    POP EDI                             ; 004f4167
    POP ESI                             ; 004f4168
    POP EBX                             ; 004f4169
    RET                                 ; 004f416a

