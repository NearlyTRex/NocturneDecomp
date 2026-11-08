; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543d80(int param_1,float *param_2,undefined4 param_3,int param_4,int *param_5,byte *param_6,int *param_7)
;
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
;   FUN_005485c0 at 00548604
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e71dd
;   TerminatedCString s_CDeformableModel_shatter_005e71f2
;   undefined4 DAT_005f22b0
;   undefined4 DAT_005fb9a0
;   undefined4 DAT_00614d30
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_020c4338
;   undefined4 DAT_020c433c
;   undefined4 DAT_020c4340
;   undefined4 DAT_020c4344
;   undefined4 DAT_020c4348
;   undefined4 DAT_020c434c
;   undefined4 DAT_020ccfd8
;
; Called Functions:
;   FUN_00449280
;   FUN_00449530
;   FUN_0049d450
;   FUN_004e4500
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543d80
        ;   Label: FUN_00543d80
    PUSH ESI                            ; 00543d81
    PUSH EDI                            ; 00543d82
    PUSH EBP                            ; 00543d83
    SUB ESP,0xf0                        ; 00543d84
    MOV ECX,dword ptr [ESP + 0x10c]     ; 00543d8a
    PUSH ECX                            ; 00543d91
    LEA EAX,[ESP + 0x4]                 ; 00543d92
    MOV EDX,0xffff                      ; 00543d96
    PUSH EAX                            ; 00543d9b
    MOV dword ptr [ESP + 0xec],EDX      ; 00543d9c
    CALL FUN_00449280                   ; 00543da3
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    MOV AH,byte ptr [0x020ccfd8]        ; 00543da8 | DAT_020ccfd8
    ADD ESP,0x8                         ; 00543dae
    TEST AH,0x1                         ; 00543db1
    JZ 0x0054421d                       ; 00543db4
        ;   XREF to: 0054421d (CONDITIONAL_JUMP)  ; LAB_0054421d
    MOV EAX,dword ptr [ESP + 0x110]     ; 00543dba
        ;   Label: LAB_00543dba
    MOV EBX,dword ptr [ESP + 0x104]     ; 00543dc1
    SHL EAX,0x2                         ; 00543dc8
    ADD EAX,EBX                         ; 00543dcb
    CMP dword ptr [EAX + 0x2c],0xbb8    ; 00543dcd
    JLE 0x00543df9                      ; 00543dd4
        ;   XREF to: 00543df9 (CONDITIONAL_JUMP)  ; LAB_00543df9
    MOV EDI,0x5e71dd                    ; 00543dd6 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x757                       ; 00543ddb
    PUSH 0x5e71f2                       ; 00543de0 | = "CDeformableModel::shatter - too many ..."
    MOV dword ptr [0x01d046a0],EDI      ; 00543de5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00543deb | DAT_01d046a4
    CALL FUN_004e4500                   ; 00543df1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00543df6
    XOR EAX,EAX                         ; 00543df9
        ;   Label: LAB_00543df9
    MOV dword ptr [ESP + 0xb8],EAX      ; 00543dfb
    MOV EAX,dword ptr [ESP + 0x110]     ; 00543e02
    MOV EDX,dword ptr [ESP + 0x104]     ; 00543e09
    SHL EAX,0x2                         ; 00543e10
    MOV EBP,0x20c4338                   ; 00543e13
    ADD EDX,EAX                         ; 00543e18
    MOV EAX,dword ptr [ESP + 0x114]     ; 00543e1a
    MOV dword ptr [ESP + 0x9c],EDX      ; 00543e21
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00543e28
    MOV dword ptr [ESP + 0xb4],EAX      ; 00543e2b
    TEST EDX,EDX                        ; 00543e32
    JLE 0x00543f18                      ; 00543e34
        ;   XREF to: 00543f18 (CONDITIONAL_JUMP)  ; LAB_00543f18
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00543e3a
        ;   Label: LAB_00543e3a
    MOV EBX,EBP                         ; 00543e41
    FILD dword ptr [EAX]                ; 00543e43
    FMUL float ptr [0x005fb9a0]         ; 00543e45 | DAT_005fb9a0
    FSTP float ptr [EBX]                ; 00543e4b | DAT_020c4338 | DAT_020c4344
    FILD dword ptr [EAX + 0x4]          ; 00543e4d
    FMUL float ptr [0x005fb9a0]         ; 00543e50 | DAT_005fb9a0
    FSTP float ptr [EBX + 0x4]          ; 00543e56 | DAT_020c433c | DAT_020c4348
    FILD dword ptr [EAX + 0x8]          ; 00543e59
    FMUL float ptr [0x005fb9a0]         ; 00543e5c | DAT_005fb9a0
    FSTP float ptr [EBX + 0x8]          ; 00543e62 | DAT_020c4340 | DAT_020c434c
    PUSH EBP                            ; 00543e65 | DAT_020c4338 | DAT_020c4344
    LEA EAX,[ESP + 0x4]                 ; 00543e66
    PUSH EAX                            ; 00543e6a
    LEA ESI,[ESP + 0x78]                ; 00543e6b
    LEA EDI,[ESP + 0x60]                ; 00543e6f
    CALL FUN_00449530                   ; 00543e73
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    ADD ESP,0x8                         ; 00543e78
    LEA ESI,[ESP + 0x70]                ; 00543e7b
    MOV EAX,dword ptr [ESP + 0x108]     ; 00543e7f
    MOVSD ES:EDI,ESI                    ; 00543e86
    MOVSD ES:EDI,ESI                    ; 00543e87
    MOVSD ES:EDI,ESI                    ; 00543e88
    FLD float ptr [EAX + 0x4]           ; 00543e89
    FLD float ptr [EAX + 0x8]           ; 00543e8c
    FLD float ptr [EAX]                 ; 00543e8f
    LEA EDI,[ESP + 0x64]                ; 00543e91
    LEA ESI,[ESP + 0x88]                ; 00543e95
    LEA EAX,[ESP + 0x64]                ; 00543e9c
    FADD float ptr [ESP + 0x58]         ; 00543ea0
    FXCH ST2                            ; 00543ea4
    FADD float ptr [ESP + 0x5c]         ; 00543ea6
    FXCH                                ; 00543eaa
    FADD float ptr [ESP + 0x60]         ; 00543eac
    FXCH ST2                            ; 00543eb0
    FSTP float ptr [ESP + 0x88]         ; 00543eb2
    FSTP float ptr [ESP + 0x8c]         ; 00543eb9
    FSTP float ptr [ESP + 0x90]         ; 00543ec0
    MOVSD ES:EDI,ESI                    ; 00543ec7
    MOVSD ES:EDI,ESI                    ; 00543ec8
    MOVSD ES:EDI,ESI                    ; 00543ec9
    CMP EBP,EAX                         ; 00543eca
    JZ 0x00543ee3                       ; 00543ecc
        ;   XREF to: 00543ee3 (CONDITIONAL_JUMP)  ; LAB_00543ee3
    MOV EAX,dword ptr [ESP + 0x64]      ; 00543ece
    MOV dword ptr [EBP],EAX             ; 00543ed2 | DAT_020c4338
    MOV EAX,dword ptr [ESP + 0x68]      ; 00543ed5
    MOV dword ptr [EBP + 0x4],EAX       ; 00543ed9 | DAT_020c433c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00543edc
    MOV dword ptr [EBP + 0x8],EAX       ; 00543ee0 | DAT_020c4340
    MOV ECX,dword ptr [ESP + 0xb4]      ; 00543ee3
        ;   Label: LAB_00543ee3
    MOV EBX,dword ptr [ESP + 0xb8]      ; 00543eea
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00543ef1
    ADD EBP,0xc                         ; 00543ef8
    ADD ECX,0xc                         ; 00543efb
    INC EBX                             ; 00543efe
    MOV ESI,dword ptr [EDX + 0x2c]      ; 00543eff
    MOV dword ptr [ESP + 0xb4],ECX      ; 00543f02
    MOV dword ptr [ESP + 0xb8],EBX      ; 00543f09
    CMP EBX,ESI                         ; 00543f10
    JL 0x00543e3a                       ; 00543f12
        ;   XREF to: 00543e3a (CONDITIONAL_JUMP)  ; LAB_00543e3a
    PUSH 0x5f22b0                       ; 00543f18 | DAT_005f22b0
        ;   Label: LAB_00543f18
    PUSH 0x3                            ; 00543f1d
    LEA EAX,[ESP + 0x30]                ; 00543f1f
    PUSH EAX                            ; 00543f23
    CALL FUN_005b7f5f                   ; 00543f24
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00543f29
    MOV EDX,dword ptr [ESP + 0x104]     ; 00543f2c
    XOR EAX,EAX                         ; 00543f33
    MOV EBP,dword ptr [EDX + 0xc00]     ; 00543f35
    MOV dword ptr [ESP + 0xbc],EAX      ; 00543f3b
    TEST EBP,EBP                        ; 00543f42
    JLE 0x00544126                      ; 00543f44
        ;   XREF to: 00544126 (CONDITIONAL_JUMP)  ; LAB_00544126
    MOV EDX,dword ptr [ESP + 0x110]     ; 00543f4a
    MOV ECX,dword ptr [ESP + 0x104]     ; 00543f51
    SHL EDX,0x2                         ; 00543f58
    ADD ECX,EDX                         ; 00543f5b
    MOV dword ptr [ESP + 0xd0],ECX      ; 00543f5d
    MOV dword ptr [ESP + 0xc8],ECX      ; 00543f64
    MOV ECX,dword ptr [ESP + 0x104]     ; 00543f6b
    ADD ECX,0xc0                        ; 00543f72
    MOV EBX,dword ptr [ESP + 0x104]     ; 00543f78
    MOV dword ptr [ESP + 0x98],ECX      ; 00543f7f
    MOV ECX,dword ptr [ESP + 0x118]     ; 00543f86
    ADD EDX,EBX                         ; 00543f8d
    MOV dword ptr [ESP + 0xa0],ECX      ; 00543f8f
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00543f96
    MOV dword ptr [ESP + 0xac],EDX      ; 00543f9d
    MOV dword ptr [ESP + 0xb0],ECX      ; 00543fa4
    MOV EDX,dword ptr [ESP + 0xac]      ; 00543fab
        ;   Label: LAB_00543fab
    MOV EDX,dword ptr [EDX + 0xc24]     ; 00543fb2
    ADD EDX,EAX                         ; 00543fb8
    MOV dword ptr [ESP + 0xc0],EDX      ; 00543fba
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00543fc1
    IMUL EDX,dword ptr [EDX],0x240      ; 00543fc8
    MOV ECX,dword ptr [ESP + 0x98]      ; 00543fce
    ADD ECX,EDX                         ; 00543fd5
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00543fd7
    MOV BL,byte ptr [EDX]               ; 00543fde
    MOV dword ptr [ESP + 0xd4],ECX      ; 00543fe0
    TEST BL,0x1                         ; 00543fe7
    JZ 0x005440c8                       ; 00543fea
        ;   XREF to: 005440c8 (CONDITIONAL_JUMP)  ; LAB_005440c8
    CMP EAX,dword ptr [ESP + 0xc0]      ; 00543ff0
    JGE 0x005440c8                      ; 00543ff7
        ;   XREF to: 005440c8 (CONDITIONAL_JUMP)  ; LAB_005440c8
    IMUL EDI,EAX,0x12                   ; 00543ffd
    LEA ESI,[EAX*0x4 + 0x0]             ; 00544000
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00544007
    SHL EAX,0x2                         ; 0054400e
    MOV dword ptr [ESP + 0xe0],EAX      ; 00544011
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00544018
        ;   Label: LAB_00544018
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0054401f
    LEA ECX,[EAX + EDI*0x1]             ; 00544022
    XOR EDX,EDX                         ; 00544025
    LEA EAX,[ESP + 0x28]                ; 00544027
    XOR EBX,EBX                         ; 0054402b
        ;   Label: LAB_0054402b
    MOV BX,word ptr [ECX]               ; 0054402d
    IMUL EBX,EBX,0xc                    ; 00544030
    ADD EBX,0x20c4338                   ; 00544033
    CMP EAX,EBX                         ; 00544039
    JZ 0x0054404d                       ; 0054403b
        ;   XREF to: 0054404d (CONDITIONAL_JUMP)  ; LAB_0054404d
    MOV EBP,dword ptr [EBX]             ; 0054403d | DAT_020c4338
    MOV dword ptr [EAX],EBP             ; 0054403f
    MOV EBP,dword ptr [EBX + 0x4]       ; 00544041 | DAT_020c433c
    MOV dword ptr [EAX + 0x4],EBP       ; 00544044
    MOV EBP,dword ptr [EBX + 0x8]       ; 00544047 | DAT_020c4340
    MOV dword ptr [EAX + 0x8],EBP       ; 0054404a
    XOR EBX,EBX                         ; 0054404d
        ;   Label: LAB_0054404d
    MOV BX,word ptr [ECX + 0x6]         ; 0054404f
    ADD EAX,0xc                         ; 00544053
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 00544056
    XOR EBX,EBX                         ; 0054405a
    ADD EDX,0x4                         ; 0054405c
    MOV BX,word ptr [ECX + 0xc]         ; 0054405f
    ADD ECX,0x2                         ; 00544063
    MOV dword ptr [ESP + EDX*0x1 + 0x78],EBX ; 00544066
    CMP EDX,0xc                         ; 0054406a
    JNZ 0x0054402b                      ; 0054406d
        ;   XREF to: 0054402b (CONDITIONAL_JUMP)  ; LAB_0054402b
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0054406f
    MOV EAX,dword ptr [EAX + 0x90]      ; 00544076
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0054407c
    MOV EBP,dword ptr [ESP + 0xe4]      ; 00544080
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00544087
    PUSH EBP                            ; 0054408e
    ADD EAX,ECX                         ; 0054408f
    PUSH EAX                            ; 00544091
    LEA EAX,[ESP + 0x84]                ; 00544092
    PUSH EAX                            ; 00544099
    LEA EAX,[ESP + 0x58]                ; 0054409a
    PUSH EAX                            ; 0054409e
    LEA EAX,[ESP + 0x38]                ; 0054409f
    PUSH EAX                            ; 005440a3
    MOV EBX,dword ptr [0x00614d30]      ; 005440a4 | DAT_00614d30
    PUSH EBX                            ; 005440aa
    CALL FUN_0049d450                   ; 005440ab
        ;   XREF to: 0049d450 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d450()
    ADD ESP,0x18                        ; 005440b0
    ADD ESI,0x4                         ; 005440b3
    MOV EBP,dword ptr [ESP + 0xe0]      ; 005440b6
    ADD EDI,0x12                        ; 005440bd
    CMP ESI,EBP                         ; 005440c0
    JL 0x00544018                       ; 005440c2
        ;   XREF to: 00544018 (CONDITIONAL_JUMP)  ; LAB_00544018
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005440c8
        ;   Label: LAB_005440c8
    MOV EDX,dword ptr [ESP + 0xa0]      ; 005440cf
    MOV ECX,dword ptr [ESP + 0xb0]      ; 005440d6
    MOV EBX,dword ptr [ESP + 0xac]      ; 005440dd
    MOV ESI,dword ptr [ESP + 0xbc]      ; 005440e4
    ADD EDX,0x4                         ; 005440eb
    ADD ECX,0x4                         ; 005440ee
    ADD EBX,0x60                        ; 005440f1
    INC ESI                             ; 005440f4
    MOV dword ptr [ESP + 0xb0],ECX      ; 005440f5
    MOV ECX,dword ptr [ESP + 0x104]     ; 005440fc
    MOV dword ptr [ESP + 0xa0],EDX      ; 00544103
    MOV dword ptr [ESP + 0xac],EBX      ; 0054410a
    MOV EDI,dword ptr [ECX + 0xc00]     ; 00544111
    MOV dword ptr [ESP + 0xbc],ESI      ; 00544117
    CMP ESI,EDI                         ; 0054411e
    JL 0x00543fab                       ; 00544120
        ;   XREF to: 00543fab (CONDITIONAL_JUMP)  ; LAB_00543fab
    MOV EDX,dword ptr [ESP + 0x104]     ; 00544126
        ;   Label: LAB_00544126
    XOR EBP,EBP                         ; 0054412d
    MOV ECX,dword ptr [EDX + 0xc00]     ; 0054412f
    MOV dword ptr [ESP + 0xc4],EBP      ; 00544135
    TEST ECX,ECX                        ; 0054413c
    JLE 0x00544212                      ; 0054413e
        ;   XREF to: 00544212 (CONDITIONAL_JUMP)  ; LAB_00544212
    MOV EDX,dword ptr [ESP + 0x110]     ; 00544144
    MOV ECX,dword ptr [ESP + 0x104]     ; 0054414b
    SHL EDX,0x2                         ; 00544152
    ADD ECX,EDX                         ; 00544155
    MOV dword ptr [ESP + 0xcc],ECX      ; 00544157
    MOV dword ptr [ESP + 0xe8],ECX      ; 0054415e
    MOV ECX,dword ptr [ESP + 0x104]     ; 00544165
    MOV EDI,dword ptr [ESP + 0x104]     ; 0054416c
    ADD ECX,0xc0                        ; 00544173
    ADD EDX,EDI                         ; 00544179
    MOV dword ptr [ESP + 0x94],ECX      ; 0054417b
    MOV ECX,dword ptr [ESP + 0x118]     ; 00544182
    MOV dword ptr [ESP + 0xa4],EDX      ; 00544189
    MOV dword ptr [ESP + 0xa8],ECX      ; 00544190
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00544197
        ;   Label: LAB_00544197
    MOV EDX,dword ptr [EDX + 0xc38]     ; 0054419e
    ADD EDX,EAX                         ; 005441a4
    MOV ECX,dword ptr [ESP + 0xa8]      ; 005441a6
    MOV dword ptr [ESP + 0xdc],EDX      ; 005441ad
    MOV EDX,dword ptr [ESP + 0xc4]      ; 005441b4
    MOV BH,byte ptr [ECX]               ; 005441bb
    SHL EDX,0x2                         ; 005441bd
    TEST BH,0x1                         ; 005441c0
    JNZ 0x00544244                      ; 005441c3
        ;   XREF to: 00544244 (CONDITIONAL_JUMP)  ; LAB_00544244
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005441c9
        ;   Label: LAB_005441c9
    MOV EDX,dword ptr [ESP + 0xa8]      ; 005441d0
    MOV ECX,dword ptr [ESP + 0xa4]      ; 005441d7
    MOV EBX,dword ptr [ESP + 0xc4]      ; 005441de
    ADD ECX,0x60                        ; 005441e5
    ADD EDX,0x4                         ; 005441e8
    MOV dword ptr [ESP + 0xa4],ECX      ; 005441eb
    MOV ECX,dword ptr [ESP + 0x104]     ; 005441f2
    INC EBX                             ; 005441f9
    MOV dword ptr [ESP + 0xa8],EDX      ; 005441fa
    MOV ESI,dword ptr [ECX + 0xc00]     ; 00544201
    MOV dword ptr [ESP + 0xc4],EBX      ; 00544207
    CMP EBX,ESI                         ; 0054420e
    JL 0x00544197                       ; 00544210
        ;   XREF to: 00544197 (CONDITIONAL_JUMP)  ; LAB_00544197
    ADD ESP,0xf0                        ; 00544212
        ;   Label: LAB_00544212
    POP EBP                             ; 00544218
    POP EDI                             ; 00544219
    POP ESI                             ; 0054421a
    POP EBX                             ; 0054421b
    RET                                 ; 0054421c
    PUSH 0x5f22b0                       ; 0054421d | DAT_005f22b0
        ;   Label: LAB_0054421d
    MOV DL,AH                           ; 00544222
    PUSH 0xbb8                          ; 00544224
    OR DL,0x1                           ; 00544229
    PUSH 0x20c4338                      ; 0054422c | DAT_020c4338
    MOV byte ptr [0x020ccfd8],DL        ; 00544231 | DAT_020ccfd8
    CALL FUN_005b7f5f                   ; 00544237
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0054423c
    JMP 0x00543dba                      ; 0054423f
        ;   XREF to: 00543dba (UNCONDITIONAL_JUMP)  ; LAB_00543dba
    ADD EDX,dword ptr [ESP + 0x11c]     ; 00544244
        ;   Label: LAB_00544244
    IMUL EDX,dword ptr [EDX],0x240      ; 0054424b
    MOV ECX,dword ptr [ESP + 0x94]      ; 00544251
    MOV EBX,dword ptr [ESP + 0xdc]      ; 00544258
    ADD ECX,EDX                         ; 0054425f
    MOV ESI,EAX                         ; 00544261
    MOV dword ptr [ESP + 0xd8],ECX      ; 00544263
    CMP EAX,EBX                         ; 0054426a
    JGE 0x005441c9                      ; 0054426c
        ;   XREF to: 005441c9 (CONDITIONAL_JUMP)  ; LAB_005441c9
    IMUL EDI,EAX,0x12                   ; 00544272
    SHL EAX,0x2                         ; 00544275
    MOV dword ptr [ESP + 0xec],EAX      ; 00544278
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0054427f
        ;   Label: LAB_0054427f
    MOV EAX,dword ptr [EAX + 0x7c]      ; 00544286
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00544289
    LEA ECX,[EAX + EDI*0x1]             ; 00544290
    MOV EBX,dword ptr [EDX + 0x54]      ; 00544293
    MOV EAX,ESI                         ; 00544296
    MOV EDX,dword ptr [EDX + 0xa4]      ; 00544298
    SUB EAX,EBX                         ; 0054429e
    MOV EAX,dword ptr [EDX + EAX*0x4]   ; 005442a0
    MOV EBP,dword ptr [ESP + 0x118]     ; 005442a3
    SHL EAX,0x2                         ; 005442aa
    ADD EAX,EBP                         ; 005442ad
    TEST byte ptr [EAX],0x1             ; 005442af
    JNZ 0x00544352                      ; 005442b2
        ;   XREF to: 00544352 (CONDITIONAL_JUMP)  ; LAB_00544352
    LEA EAX,[ESP + 0x28]                ; 005442b8
    XOR EDX,EDX                         ; 005442bc
    XOR EBX,EBX                         ; 005442be
        ;   Label: LAB_005442be
    MOV BX,word ptr [ECX]               ; 005442c0
    IMUL EBX,EBX,0xc                    ; 005442c3
    ADD EBX,0x20c4338                   ; 005442c6
    CMP EAX,EBX                         ; 005442cc
    JZ 0x005442e0                       ; 005442ce
        ;   XREF to: 005442e0 (CONDITIONAL_JUMP)  ; LAB_005442e0
    MOV EBP,dword ptr [EBX]             ; 005442d0 | DAT_020c4338
    MOV dword ptr [EAX],EBP             ; 005442d2
    MOV EBP,dword ptr [EBX + 0x4]       ; 005442d4 | DAT_020c433c
    MOV dword ptr [EAX + 0x4],EBP       ; 005442d7
    MOV EBP,dword ptr [EBX + 0x8]       ; 005442da | DAT_020c4340
    MOV dword ptr [EAX + 0x8],EBP       ; 005442dd
    XOR EBX,EBX                         ; 005442e0
        ;   Label: LAB_005442e0
    MOV BX,word ptr [ECX + 0x6]         ; 005442e2
    SHL EBX,0x8                         ; 005442e6
    MOV dword ptr [ESP + EDX*0x1 + 0x4c],EBX ; 005442e9
    XOR EBX,EBX                         ; 005442ed
    ADD EAX,0xc                         ; 005442ef
    MOV BX,word ptr [ECX + 0xc]         ; 005442f2
    ADD EDX,0x4                         ; 005442f6
    SHL EBX,0x8                         ; 005442f9
    ADD ECX,0x2                         ; 005442fc
    MOV dword ptr [ESP + EDX*0x1 + 0x78],EBX ; 005442ff
    CMP EDX,0xc                         ; 00544303
    JNZ 0x005442be                      ; 00544306
        ;   XREF to: 005442be (CONDITIONAL_JUMP)  ; LAB_005442be
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00544308
    PUSH EAX                            ; 0054430f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00544310
    MOV EDX,dword ptr [ESP + 0xf0]      ; 00544317
    MOV EAX,dword ptr [EAX + 0x90]      ; 0054431e
    ADD EAX,EDX                         ; 00544324
    IMUL EAX,dword ptr [EAX],0x48       ; 00544326
    ADD EAX,dword ptr [ESP + 0xdc]      ; 00544329
    PUSH EAX                            ; 00544330
    LEA EAX,[ESP + 0x84]                ; 00544331
    PUSH EAX                            ; 00544338
    LEA EAX,[ESP + 0x58]                ; 00544339
    PUSH EAX                            ; 0054433d
    LEA EAX,[ESP + 0x38]                ; 0054433e
    PUSH EAX                            ; 00544342
    MOV EBP,dword ptr [0x00614d30]      ; 00544343 | DAT_00614d30
    PUSH EBP                            ; 00544349
    CALL FUN_0049d450                   ; 0054434a
        ;   XREF to: 0049d450 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d450()
    ADD ESP,0x18                        ; 0054434f
    MOV EBP,dword ptr [ESP + 0xec]      ; 00544352
        ;   Label: LAB_00544352
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00544359
    ADD EDI,0x12                        ; 00544360
    ADD EBP,0x4                         ; 00544363
    INC ESI                             ; 00544366
    MOV dword ptr [ESP + 0xec],EBP      ; 00544367
    CMP ESI,EAX                         ; 0054436e
    JGE 0x005441c9                      ; 00544370
        ;   XREF to: 005441c9 (CONDITIONAL_JUMP)  ; LAB_005441c9
    JMP 0x0054427f                      ; 00544376
        ;   XREF to: 0054427f (UNCONDITIONAL_JUMP)  ; LAB_0054427f

