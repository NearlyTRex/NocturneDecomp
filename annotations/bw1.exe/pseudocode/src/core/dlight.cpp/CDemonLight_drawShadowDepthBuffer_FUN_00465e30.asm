; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00465e30(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; int              Stack[0x10]:4   brightness_offset
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_00550da0 at 005510a7
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01b2ee48
;   undefined4 DAT_01b2ee4c
;   undefined4 DAT_01b2ee50
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465e30
        ;   Label: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00465e30
    PUSH ESI                            ; 00465e31
    PUSH EDI                            ; 00465e32
    PUSH EBP                            ; 00465e33
    SUB ESP,0x34                        ; 00465e34
    MOV EBP,dword ptr [ESP + 0x54]      ; 00465e37
    XOR ESI,ESI                         ; 00465e3b
    XOR EBX,EBX                         ; 00465e3d
    MOV dword ptr [0x01b2ee48],ESI      ; 00465e3f | DAT_01b2ee48
    CALL crt_stdlib.c_rand_FUN_005c084c ; 00465e45
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
        ;   Label: LAB_00465e45
    AND EAX,0x1f                        ; 00465e4a
    ADD EBX,0x4                         ; 00465e4d
    SUB EAX,0x10                        ; 00465e50
    MOV dword ptr [EBX + 0x1b2ee48],EAX ; 00465e53
    CMP EBX,0x190                       ; 00465e59
    JNZ 0x00465e45                      ; 00465e5f
        ;   XREF to: 00465e45 (CONDITIONAL_JUMP)  ; LAB_00465e45
    MOV EDX,dword ptr [0x0061b49c]      ; 00465e61 | DAT_0061b49c
    XOR EBX,EBX                         ; 00465e67
    TEST EDX,EDX                        ; 00465e69
    JLE 0x00465eb0                      ; 00465e6b
        ;   XREF to: 00465eb0 (CONDITIONAL_JUMP)  ; LAB_00465eb0
    XOR EDI,EDI                         ; 00465e6d
    MOV EDX,dword ptr [0x0061b498]      ; 00465e6f | DAT_0061b498
        ;   Label: LAB_00465e6f
    MOV ECX,dword ptr [0x0061b4a0]      ; 00465e75 | DAT_0061b4a0
    IMUL EDX,ECX                        ; 00465e7b
    MOV EAX,EDX                         ; 00465e7e
    SAR EDX,0x1f                        ; 00465e80
    SHL EDX,0x3                         ; 00465e83
    SBB EAX,EDX                         ; 00465e86
    SAR EAX,0x3                         ; 00465e88
    PUSH EAX                            ; 00465e8b
    PUSH 0x0                            ; 00465e8c
    MOV EAX,dword ptr [EDI + 0x1c4354c] ; 00465e8e | DAT_01c4354c | DAT_01c43550
    PUSH EAX                            ; 00465e94
    ADD EDI,0x4                         ; 00465e95
    INC EBX                             ; 00465e98
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00465e99
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EDX,dword ptr [0x0061b49c]      ; 00465e9e | DAT_0061b49c
    ADD ESP,0xc                         ; 00465ea4
    CMP EBX,EDX                         ; 00465ea7
    JL 0x00465e6f                       ; 00465ea9
        ;   XREF to: 00465e6f (CONDITIONAL_JUMP)  ; LAB_00465e6f
    LEA EAX,[EAX]                       ; 00465eab
    MOV ECX,ECX                         ; 00465eae
    MOV ECX,dword ptr [0x0061b4a0]      ; 00465eb0 | DAT_0061b4a0
        ;   Label: LAB_00465eb0
    MOV ESI,dword ptr [0x01b2ee48]      ; 00465eb6 | DAT_01b2ee48
    CMP ECX,0x20                        ; 00465ebc
    JNZ 0x00466063                      ; 00465ebf
        ;   XREF to: 00466063 (CONDITIONAL_JUMP)  ; LAB_00466063
    XOR EAX,EAX                         ; 00465ec5
    MOV dword ptr [ESP + 0x14],EAX      ; 00465ec7
    MOV EAX,dword ptr [ESP + 0x48]      ; 00465ecb
    CMP dword ptr [EAX + 0x1cc4],0x0    ; 00465ecf
    JLE 0x00465f1e                      ; 00465ed6
        ;   XREF to: 00465f1e (CONDITIONAL_JUMP)  ; LAB_00465f1e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00465ed8
    SHL EAX,0x2                         ; 00465edc
    MOV dword ptr [ESP + 0xc],EAX       ; 00465edf
    CMP dword ptr [0x0061b49c],0xf0     ; 00465ee3 | DAT_0061b49c
        ;   Label: LAB_00465ee3
    JLE 0x00465f2c                      ; 00465eed
        ;   XREF to: 00465f2c (CONDITIONAL_JUMP)  ; LAB_00465f2c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00465eef
    MOV ECX,dword ptr [ESP + 0x50]      ; 00465ef3
    ADD EAX,EAX                         ; 00465ef7
    ADD EAX,ECX                         ; 00465ef9
    TEST EAX,EAX                        ; 00465efb
        ;   Label: LAB_00465efb
    JL 0x00465f07                       ; 00465efd
        ;   XREF to: 00465f07 (CONDITIONAL_JUMP)  ; LAB_00465f07
    CMP EAX,dword ptr [0x0061b49c]      ; 00465eff | DAT_0061b49c
    JL 0x00465f36                       ; 00465f05
        ;   XREF to: 00465f36 (CONDITIONAL_JUMP)  ; LAB_00465f36
    MOV EBX,dword ptr [ESP + 0x14]      ; 00465f07
        ;   Label: LAB_00465f07
    MOV EDX,dword ptr [ESP + 0x48]      ; 00465f0b
    INC EBX                             ; 00465f0f
    MOV EDI,dword ptr [EDX + 0x1cc4]    ; 00465f10
    MOV dword ptr [ESP + 0x14],EBX      ; 00465f16
    CMP EBX,EDI                         ; 00465f1a
    JL 0x00465ee3                       ; 00465f1c
        ;   XREF to: 00465ee3 (CONDITIONAL_JUMP)  ; LAB_00465ee3
    MOV dword ptr [0x01b2ee48],ESI      ; 00465f1e | DAT_01b2ee48
        ;   Label: LAB_00465f1e
    ADD ESP,0x34                        ; 00465f24
    POP EBP                             ; 00465f27
    POP EDI                             ; 00465f28
    POP ESI                             ; 00465f29
    POP EBX                             ; 00465f2a
    RET                                 ; 00465f2b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00465f2c
        ;   Label: LAB_00465f2c
    ADD EAX,dword ptr [ESP + 0x50]      ; 00465f30
    JMP 0x00465efb                      ; 00465f34
        ;   XREF to: 00465efb (UNCONDITIONAL_JUMP)  ; LAB_00465efb
    MOV EDX,dword ptr [ESP + 0x48]      ; 00465f36
        ;   Label: LAB_00465f36
    MOV EDI,dword ptr [EAX*0x4 + 0x1c4354c] ; 00465f3a | DAT_01c4354c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00465f41
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 00465f45
    ADD EDI,EAX                         ; 00465f4b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00465f4d
    IMUL EAX,ECX                        ; 00465f51
    LEA EDX,[EAX + EAX*0x1]             ; 00465f54
    MOV EAX,dword ptr [ESP + 0x48]      ; 00465f57
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 00465f5b
    ADD EAX,EDX                         ; 00465f61
    XOR EBX,EBX                         ; 00465f63
    MOV dword ptr [ESP + 0x2c],EAX      ; 00465f65
    MOV EAX,dword ptr [ESP + 0x48]      ; 00465f69
    MOV dword ptr [ESP + 0x20],EBX      ; 00465f6d
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 00465f71
    MOV dword ptr [ESP + 0x24],EBX      ; 00465f77
    TEST EDX,EDX                        ; 00465f7b
    JLE 0x00465f07                      ; 00465f7d
        ;   XREF to: 00465f07 (CONDITIONAL_JUMP)  ; LAB_00465f07
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00465f7f
        ;   Label: LAB_00465f7f
    XOR EBX,EBX                         ; 00465f83
    MOV BX,word ptr [EAX]               ; 00465f85
    TEST EBX,EBX                        ; 00465f88
    JZ 0x00466014                       ; 00465f8a
        ;   XREF to: 00466014 (CONDITIONAL_JUMP)  ; LAB_00466014
    SHR EBX,0x6                         ; 00465f90
    MOV EAX,dword ptr [ESI*0x4 + 0x1b2ee4c] ; 00465f93 | DAT_01b2ee4c | DAT_01b2ee50
    INC ESI                             ; 00465f9a
    ADD EBX,EAX                         ; 00465f9b
    CMP ESI,0x64                        ; 00465f9d
    JL 0x00465fa4                       ; 00465fa0
        ;   XREF to: 00465fa4 (CONDITIONAL_JUMP)  ; LAB_00465fa4
    XOR ESI,ESI                         ; 00465fa2
    CMP EBX,0x7f                        ; 00465fa4
        ;   Label: LAB_00465fa4
    JBE 0x00465fae                      ; 00465fa7
        ;   XREF to: 00465fae (CONDITIONAL_JUMP)  ; LAB_00465fae
    MOV EBX,0x7f                        ; 00465fa9
    XOR BL,0x7f                         ; 00465fae
        ;   Label: LAB_00465fae
    TEST EBP,EBP                        ; 00465fb1
    JLE 0x00465fc4                      ; 00465fb3
        ;   XREF to: 00465fc4 (CONDITIONAL_JUMP)  ; LAB_00465fc4
    ADD EBX,EBP                         ; 00465fb5
    CMP EBX,0xff                        ; 00465fb7
    JBE 0x00465fc4                      ; 00465fbd
        ;   XREF to: 00465fc4 (CONDITIONAL_JUMP)  ; LAB_00465fc4
    MOV EBX,0xff                        ; 00465fbf
    ADD EBX,dword ptr [ESP + 0x20]      ; 00465fc4
        ;   Label: LAB_00465fc4
    SHR EBX,0x1                         ; 00465fc8
    MOV dword ptr [ESP + 0x20],EBX      ; 00465fca
    LEA EAX,[EBX + EBX*0x1]             ; 00465fce
    ADD EAX,EBX                         ; 00465fd1
    MOV ECX,dword ptr [0x0061b4a0]      ; 00465fd3 | DAT_0061b4a0
    SHR EAX,0x2                         ; 00465fd9
    CMP ECX,0x20                        ; 00465fdc
    JNZ 0x00466050                      ; 00465fdf
        ;   XREF to: 00466050 (CONDITIONAL_JUMP)  ; LAB_00466050
    MOV CL,byte ptr [0x01c4e9d4]        ; 00465fe1 | DAT_01c4e9d4
    MOV EDX,EAX                         ; 00465fe7
    SHL EDX,CL                          ; 00465fe9
    MOV CL,byte ptr [0x01c4e9e0]        ; 00465feb | DAT_01c4e9e0
    SHL EAX,CL                          ; 00465ff1
    MOV CL,byte ptr [0x01c4e9ec]        ; 00465ff3 | DAT_01c4e9ec
    SHL EBX,CL                          ; 00465ff9
    OR EAX,EDX                          ; 00465ffb
    MOV ECX,EBX                         ; 00465ffd
    OR ECX,EAX                          ; 00465fff
    MOV EBX,dword ptr [0x0061b498]      ; 00466001 | DAT_0061b498
        ;   Label: LAB_00466001
    MOV dword ptr [EDI],ECX             ; 00466007
    CMP EBX,0x140                       ; 00466009
    JLE 0x00466014                      ; 0046600f
        ;   XREF to: 00466014 (CONDITIONAL_JUMP)  ; LAB_00466014
    MOV dword ptr [EDI + 0x4],ECX       ; 00466011
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00466014
        ;   Label: LAB_00466014
    ADD EAX,0x2                         ; 00466018
    MOV EDX,dword ptr [0x0061b498]      ; 0046601b | DAT_0061b498
    MOV dword ptr [ESP + 0x2c],EAX      ; 00466021
    CMP EDX,0x140                       ; 00466025
    JLE 0x0046605e                      ; 0046602b
        ;   XREF to: 0046605e (CONDITIONAL_JUMP)  ; LAB_0046605e
    ADD EDI,0x8                         ; 0046602d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00466030
        ;   Label: LAB_00466030
    MOV EDX,dword ptr [ESP + 0x48]      ; 00466034
    INC ECX                             ; 00466038
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 00466039
    MOV dword ptr [ESP + 0x24],ECX      ; 0046603f
    CMP ECX,EBX                         ; 00466043
    JGE 0x00465f07                      ; 00466045
        ;   XREF to: 00465f07 (CONDITIONAL_JUMP)  ; LAB_00465f07
    JMP 0x00465f7f                      ; 0046604b
        ;   XREF to: 00465f7f (UNCONDITIONAL_JUMP)  ; LAB_00465f7f
    MOV ECX,EAX                         ; 00466050
        ;   Label: LAB_00466050
    SHL EAX,0x8                         ; 00466052
    SHL ECX,0x10                        ; 00466055
    OR ECX,EAX                          ; 00466058
    OR ECX,EBX                          ; 0046605a
    JMP 0x00466001                      ; 0046605c
        ;   XREF to: 00466001 (UNCONDITIONAL_JUMP)  ; LAB_00466001
    ADD EDI,0x4                         ; 0046605e
        ;   Label: LAB_0046605e
    JMP 0x00466030                      ; 00466061
        ;   XREF to: 00466030 (UNCONDITIONAL_JUMP)  ; LAB_00466030
    MOV EAX,dword ptr [ESP + 0x48]      ; 00466063
        ;   Label: LAB_00466063
    XOR EBX,EBX                         ; 00466067
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 00466069
    MOV dword ptr [ESP + 0x18],EBX      ; 0046606f
    TEST EDI,EDI                        ; 00466073
    JLE 0x00465f1e                      ; 00466075
        ;   XREF to: 00465f1e (CONDITIONAL_JUMP)  ; LAB_00465f1e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0046607b
    ADD EAX,EAX                         ; 0046607f
    MOV dword ptr [ESP + 0x10],EAX      ; 00466081
    CMP dword ptr [0x0061b49c],0xf0     ; 00466085 | DAT_0061b49c
        ;   Label: LAB_00466085
    JLE 0x004660c6                      ; 0046608f
        ;   XREF to: 004660c6 (CONDITIONAL_JUMP)  ; LAB_004660c6
    MOV EAX,dword ptr [ESP + 0x18]      ; 00466091
    MOV ECX,dword ptr [ESP + 0x50]      ; 00466095
    ADD EAX,EAX                         ; 00466099
    ADD EAX,ECX                         ; 0046609b
    TEST EAX,EAX                        ; 0046609d
        ;   Label: LAB_0046609d
    JL 0x004660a9                       ; 0046609f
        ;   XREF to: 004660a9 (CONDITIONAL_JUMP)  ; LAB_004660a9
    CMP EAX,dword ptr [0x0061b49c]      ; 004660a1 | DAT_0061b49c
    JL 0x004660d0                       ; 004660a7
        ;   XREF to: 004660d0 (CONDITIONAL_JUMP)  ; LAB_004660d0
    MOV ECX,dword ptr [ESP + 0x18]      ; 004660a9
        ;   Label: LAB_004660a9
    MOV EDX,dword ptr [ESP + 0x48]      ; 004660ad
    INC ECX                             ; 004660b1
    MOV EBX,dword ptr [EDX + 0x1cc4]    ; 004660b2
    MOV dword ptr [ESP + 0x18],ECX      ; 004660b8
    CMP ECX,EBX                         ; 004660bc
    JGE 0x00465f1e                      ; 004660be
        ;   XREF to: 00465f1e (CONDITIONAL_JUMP)  ; LAB_00465f1e
    JMP 0x00466085                      ; 004660c4
        ;   XREF to: 00466085 (UNCONDITIONAL_JUMP)  ; LAB_00466085
    MOV EAX,dword ptr [ESP + 0x18]      ; 004660c6
        ;   Label: LAB_004660c6
    ADD EAX,dword ptr [ESP + 0x50]      ; 004660ca
    JMP 0x0046609d                      ; 004660ce
        ;   XREF to: 0046609d (UNCONDITIONAL_JUMP)  ; LAB_0046609d
    MOV EDX,dword ptr [ESP + 0x48]      ; 004660d0
        ;   Label: LAB_004660d0
    MOV EDI,dword ptr [EAX*0x4 + 0x1c4354c] ; 004660d4 | DAT_01c4354c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004660db
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 004660df
    ADD EDI,EAX                         ; 004660e5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004660e7
    IMUL EAX,ECX                        ; 004660eb
    MOV EDX,dword ptr [EDX + 0x2f94]    ; 004660ee
    ADD EAX,EAX                         ; 004660f4
    XOR EBX,EBX                         ; 004660f6
    ADD EDX,EAX                         ; 004660f8
    MOV EAX,dword ptr [ESP + 0x48]      ; 004660fa
    MOV dword ptr [ESP + 0x1c],EBX      ; 004660fe
    MOV dword ptr [ESP + 0x30],EDX      ; 00466102
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 00466106
    MOV dword ptr [ESP + 0x28],EBX      ; 0046610c
    TEST EDX,EDX                        ; 00466110
    JLE 0x004660a9                      ; 00466112
        ;   XREF to: 004660a9 (CONDITIONAL_JUMP)  ; LAB_004660a9
    MOV EAX,dword ptr [ESP + 0x30]      ; 00466114
        ;   Label: LAB_00466114
    XOR EBX,EBX                         ; 00466118
    MOV BX,word ptr [EAX]               ; 0046611a
    TEST EBX,EBX                        ; 0046611d
    JZ 0x004661de                       ; 0046611f
        ;   XREF to: 004661de (CONDITIONAL_JUMP)  ; LAB_004661de
    SHR EBX,0x6                         ; 00466125
    MOV EAX,dword ptr [ESI*0x4 + 0x1b2ee4c] ; 00466128 | DAT_01b2ee4c | DAT_01b2ee50
    INC ESI                             ; 0046612f
    ADD EBX,EAX                         ; 00466130
    CMP ESI,0x64                        ; 00466132
    JL 0x00466139                       ; 00466135
        ;   XREF to: 00466139 (CONDITIONAL_JUMP)  ; LAB_00466139
    XOR ESI,ESI                         ; 00466137
    CMP EBX,0x7f                        ; 00466139
        ;   Label: LAB_00466139
    JBE 0x00466143                      ; 0046613c
        ;   XREF to: 00466143 (CONDITIONAL_JUMP)  ; LAB_00466143
    MOV EBX,0x7f                        ; 0046613e
    XOR BL,0x7f                         ; 00466143
        ;   Label: LAB_00466143
    TEST EBP,EBP                        ; 00466146
    JLE 0x00466159                      ; 00466148
        ;   XREF to: 00466159 (CONDITIONAL_JUMP)  ; LAB_00466159
    ADD EBX,EBP                         ; 0046614a
    CMP EBX,0xff                        ; 0046614c
    JBE 0x00466159                      ; 00466152
        ;   XREF to: 00466159 (CONDITIONAL_JUMP)  ; LAB_00466159
    MOV EBX,0xff                        ; 00466154
    ADD EBX,dword ptr [ESP + 0x1c]      ; 00466159
        ;   Label: LAB_00466159
    SHR EBX,0x1                         ; 0046615d
    MOV dword ptr [ESP + 0x1c],EBX      ; 0046615f
    LEA ECX,[EBX + EBX*0x1]             ; 00466163
    ADD ECX,EBX                         ; 00466166
    SHR ECX,0x2                         ; 00466168
    XOR EDX,EDX                         ; 0046616b
    MOV EAX,ECX                         ; 0046616d
    DIV dword ptr [0x01c4e9d8]          ; 0046616f | DAT_01c4e9d8
    MOV dword ptr [ESP],ECX             ; 00466175
    MOV dword ptr [ESP + 0x4],ECX       ; 00466178
    MOV dword ptr [ESP],EAX             ; 0046617c
    XOR EDX,EDX                         ; 0046617f
    MOV EAX,ECX                         ; 00466181
    DIV dword ptr [0x01c4e9e4]          ; 00466183 | DAT_01c4e9e4
    MOV dword ptr [ESP + 0x8],EBX       ; 00466189
    MOV dword ptr [ESP + 0x4],EAX       ; 0046618d
    XOR EDX,EDX                         ; 00466191
    MOV EAX,EBX                         ; 00466193
    DIV dword ptr [0x01c4e9f0]          ; 00466195 | DAT_01c4e9f0
    MOV CL,byte ptr [0x01c4e9d4]        ; 0046619b | DAT_01c4e9d4
    MOV EBX,dword ptr [ESP]             ; 004661a1
    MOV dword ptr [ESP + 0x8],EAX       ; 004661a4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004661a8
    SHL EBX,CL                          ; 004661ac
    MOV CL,byte ptr [0x01c4e9e0]        ; 004661ae | DAT_01c4e9e0
    SHL EAX,CL                          ; 004661b4
    MOV CL,byte ptr [0x01c4e9ec]        ; 004661b6 | DAT_01c4e9ec
    OR EBX,EAX                          ; 004661bc
    MOV EAX,dword ptr [ESP + 0x8]       ; 004661be
    SHL EAX,CL                          ; 004661c2
    OR EAX,EBX                          ; 004661c4
    XOR EBX,EBX                         ; 004661c6
    MOV word ptr [EDI],AX               ; 004661c8
    MOV BX,AX                           ; 004661cb
    CMP dword ptr [0x0061b498],0x140    ; 004661ce | DAT_0061b498
    JLE 0x004661de                      ; 004661d8
        ;   XREF to: 004661de (CONDITIONAL_JUMP)  ; LAB_004661de
    MOV word ptr [EDI + 0x2],BX         ; 004661da
    MOV EDX,dword ptr [ESP + 0x30]      ; 004661de
        ;   Label: LAB_004661de
    ADD EDX,0x2                         ; 004661e2
    MOV ECX,dword ptr [0x0061b498]      ; 004661e5 | DAT_0061b498
    MOV dword ptr [ESP + 0x30],EDX      ; 004661eb
    CMP ECX,0x140                       ; 004661ef
    JLE 0x0046621a                      ; 004661f5
        ;   XREF to: 0046621a (CONDITIONAL_JUMP)  ; LAB_0046621a
    ADD EDI,0x4                         ; 004661f7
    MOV ECX,dword ptr [ESP + 0x28]      ; 004661fa
        ;   Label: LAB_004661fa
    MOV EDX,dword ptr [ESP + 0x48]      ; 004661fe
    INC ECX                             ; 00466202
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 00466203
    MOV dword ptr [ESP + 0x28],ECX      ; 00466209
    CMP ECX,EBX                         ; 0046620d
    JGE 0x004660a9                      ; 0046620f
        ;   XREF to: 004660a9 (CONDITIONAL_JUMP)  ; LAB_004660a9
    JMP 0x00466114                      ; 00466215
        ;   XREF to: 00466114 (UNCONDITIONAL_JUMP)  ; LAB_00466114
    ADD EDI,0x2                         ; 0046621a
        ;   Label: LAB_0046621a
    JMP 0x004661fa                      ; 0046621d
        ;   XREF to: 004661fa (UNCONDITIONAL_JUMP)  ; LAB_004661fa

