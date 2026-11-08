; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00535da0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
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
;   FUN_004b6f30 at 004b7a30
;
; Referenced Globals:
;   undefined4 s_comp_3_2f_3_2f_actren_3_005d0576+1
;   undefined4 DAT_005d059f
;   undefined4 DAT_005d05a7
;   undefined4 DAT_005d05af
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_005fed24
;   undefined4 DAT_00600530
;   undefined4 DAT_00606aa0
;   undefined4 DAT_00606b20
;   undefined4 DAT_006071f0
;   undefined4 DAT_007f7ea4
;   undefined4 DAT_01d21330
;   undefined4 DAT_01d21518
;   ... and 15 more
;
; Called Functions:
;   FUN_0040c840
;   FUN_00441ff0
;   FUN_00448ff0
;   FUN_00449430
;   FUN_00449750
;   FUN_00449840
;   FUN_00449a00
;   FUN_0044d800
;   FUN_0044db70
;   FUN_0044dd00
;   FUN_0044ded0
;   FUN_0044df60
;   FUN_0044e690
;   FUN_00450580
;   FUN_0045ca30
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535da0
        ;   Label: FUN_00535da0
    PUSH ESI                            ; 00535da1
    PUSH EDI                            ; 00535da2
    PUSH EBP                            ; 00535da3
    MOV EBP,ESP                         ; 00535da4
    SUB ESP,0x74                        ; 00535da6
    MOV EBX,dword ptr [EBP + 0x14]      ; 00535da9
    MOV ESI,dword ptr [EBP + 0x18]      ; 00535dac
    MOV EAX,[0x005fe9dc]                ; 00535daf | DAT_005fe9dc
    CMP dword ptr [EAX + 0x230],0x0     ; 00535db4 | DAT_01d2153c
    JNZ 0x0053643f                      ; 00535dbb
        ;   XREF to: 0053643f (CONDITIONAL_JUMP)  ; LAB_0053643f
    TEST ESI,ESI                        ; 00535dc1
        ;   Label: LAB_00535dc1
    JNZ 0x0053644c                      ; 00535dc3
        ;   XREF to: 0053644c (CONDITIONAL_JUMP)  ; LAB_0053644c
    TEST ESI,ESI                        ; 00535dc9
        ;   Label: LAB_00535dc9
    JNZ 0x00535df0                      ; 00535dcb
        ;   XREF to: 00535df0 (CONDITIONAL_JUMP)  ; LAB_00535df0
    PUSH 0x1d1e360                      ; 00535dcd
    PUSH EBX                            ; 00535dd2
    MOV dword ptr [0x0203ad1c],ESI      ; 00535dd3 | DAT_0203ad1c
    MOV dword ptr [0x0203ad30],ESI      ; 00535dd9 | DAT_0203ad30
    CALL FUN_00537270                   ; 00535ddf
        ;   XREF to: 00537270 (UNCONDITIONAL_CALL)  ; undefined FUN_00537270()
    ADD ESP,0x8                         ; 00535de4
    PUSH EBX                            ; 00535de7
    CALL FUN_00535a80                   ; 00535de8
        ;   XREF to: 00535a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00535a80()
    ADD ESP,0x4                         ; 00535ded
    PUSH 0x2038f4c                      ; 00535df0
        ;   Label: LAB_00535df0
    CALL FUN_00449430                   ; 00535df5
        ;   XREF to: 00449430 (UNCONDITIONAL_CALL)  ; undefined FUN_00449430()
    MOV EDI,dword ptr [EBX + 0x16166c]  ; 00535dfa
    ADD ESP,0x4                         ; 00535e00
    TEST EDI,EDI                        ; 00535e03
    JZ 0x00535e1a                       ; 00535e05
        ;   XREF to: 00535e1a (CONDITIONAL_JUMP)  ; LAB_00535e1a
    PUSH EBX                            ; 00535e07
    CALL FUN_0053b0d0                   ; 00535e08
        ;   XREF to: 0053b0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b0d0()
    ADD ESP,0x4                         ; 00535e0d
    MOV dword ptr [EBX + 0x16166c],0x0  ; 00535e10
    PUSH 0x1                            ; 00535e1a
        ;   Label: LAB_00535e1a
    PUSH 0x2038f4c                      ; 00535e1c
    CALL FUN_00448ff0                   ; 00535e21
        ;   XREF to: 00448ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00448ff0()
    MOV EAX,[0x0207bad4]                ; 00535e26 | DAT_0207bad4
    ADD ESP,0x8                         ; 00535e2b
    TEST EAX,EAX                        ; 00535e2e
    JZ 0x00536468                       ; 00535e30
        ;   XREF to: 00536468 (CONDITIONAL_JUMP)  ; LAB_00536468
    PUSH 0x2038f4c                      ; 00535e36
        ;   Label: LAB_00535e36
    XOR ECX,ECX                         ; 00535e3b
    XOR ESI,ESI                         ; 00535e3d
    MOV dword ptr [0x0207bad4],ECX      ; 00535e3f | DAT_0207bad4
    CALL FUN_0044ded0                   ; 00535e45
        ;   XREF to: 0044ded0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044ded0()
    MOV EDI,dword ptr [0x0203a598]      ; 00535e4a | DAT_0203a598
    ADD ESP,0x4                         ; 00535e50
    TEST EDI,EDI                        ; 00535e53
    JLE 0x00535e83                      ; 00535e55
        ;   XREF to: 00535e83 (CONDITIONAL_JUMP)  ; LAB_00535e83
    XOR EDI,EDI                         ; 00535e57
    MOV EAX,dword ptr [EDI + 0x203a59c] ; 00535e59 | DAT_0203a59c
        ;   Label: LAB_00535e59
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00535e5f
    JZ 0x00535e76                       ; 00535e66
        ;   XREF to: 00535e76 (CONDITIONAL_JUMP)  ; LAB_00535e76
    PUSH EAX                            ; 00535e68
    PUSH 0x2038f4c                      ; 00535e69
    CALL FUN_0044db70                   ; 00535e6e
        ;   XREF to: 0044db70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044db70()
    ADD ESP,0x8                         ; 00535e73
    MOV EAX,[0x0203a598]                ; 00535e76 | DAT_0203a598
        ;   Label: LAB_00535e76
    INC ESI                             ; 00535e7b
    ADD EDI,0x4                         ; 00535e7c
    CMP ESI,EAX                         ; 00535e7f
    JL 0x00535e59                       ; 00535e81
        ;   XREF to: 00535e59 (CONDITIONAL_JUMP)  ; LAB_00535e59
    XOR EDX,EDX                         ; 00535e83
        ;   Label: LAB_00535e83
    MOV ECX,dword ptr [0x0203ad1c]      ; 00535e85 | DAT_0203ad1c
    MOV dword ptr [EBP + -0x1c],EDX     ; 00535e8b
    TEST ECX,ECX                        ; 00535e8e
    JLE 0x00535f23                      ; 00535e90
        ;   XREF to: 00535f23 (CONDITIONAL_JUMP)  ; LAB_00535f23
    MOV dword ptr [EBP + -0x14],EDX     ; 00535e96
    MOV EAX,dword ptr [EBP + -0x14]     ; 00535e99
        ;   Label: LAB_00535e99
    MOV EAX,dword ptr [EAX + 0x203ad20] ; 00535e9c
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00535ea2
    JZ 0x00535f05                       ; 00535ea9
        ;   XREF to: 00535f05 (CONDITIONAL_JUMP)  ; LAB_00535f05
    CMP dword ptr [EAX + 0x1cd0],0x0    ; 00535eab
    JZ 0x00535f05                       ; 00535eb2
        ;   XREF to: 00535f05 (CONDITIONAL_JUMP)  ; LAB_00535f05
    PUSH EAX                            ; 00535eb4
    PUSH 0x2038f4c                      ; 00535eb5
    XOR ESI,ESI                         ; 00535eba
    CALL FUN_0044d800                   ; 00535ebc
        ;   XREF to: 0044d800 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d800()
    MOV EAX,dword ptr [EBX + 0x15acc8]  ; 00535ec1
    ADD ESP,0x8                         ; 00535ec7
    TEST EAX,EAX                        ; 00535eca
    JLE 0x00535f05                      ; 00535ecc
        ;   XREF to: 00535f05 (CONDITIONAL_JUMP)  ; LAB_00535f05
    MOV EDI,dword ptr [EBP + -0x14]     ; 00535ece
    PUSH 0x0                            ; 00535ed1
        ;   Label: LAB_00535ed1
    PUSH ESI                            ; 00535ed3
    PUSH EBX                            ; 00535ed4
    CALL FUN_0053adf0                   ; 00535ed5
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053adf0()
    ADD ESP,0xc                         ; 00535eda
    MOV EDX,dword ptr [EDI + 0x203ad20] ; 00535edd
    PUSH EDX                            ; 00535ee3
    PUSH 0x2038f4c                      ; 00535ee4
    CALL FUN_0044d800                   ; 00535ee9
        ;   XREF to: 0044d800 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d800()
    ADD ESP,0x8                         ; 00535eee
    PUSH EBX                            ; 00535ef1
    INC ESI                             ; 00535ef2
    CALL FUN_0053af20                   ; 00535ef3
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af20()
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 00535ef8
    ADD ESP,0x4                         ; 00535efe
    CMP ESI,ECX                         ; 00535f01
    JL 0x00535ed1                       ; 00535f03
        ;   XREF to: 00535ed1 (CONDITIONAL_JUMP)  ; LAB_00535ed1
    MOV ECX,dword ptr [EBP + -0x14]     ; 00535f05
        ;   Label: LAB_00535f05
    MOV ESI,dword ptr [EBP + -0x1c]     ; 00535f08
    MOV EDI,dword ptr [0x0203ad1c]      ; 00535f0b | DAT_0203ad1c
    ADD ECX,0x4                         ; 00535f11
    INC ESI                             ; 00535f14
    MOV dword ptr [EBP + -0x14],ECX     ; 00535f15
    MOV dword ptr [EBP + -0x1c],ESI     ; 00535f18
    CMP ESI,EDI                         ; 00535f1b
    JL 0x00535e99                       ; 00535f1d
        ;   XREF to: 00535e99 (CONDITIONAL_JUMP)  ; LAB_00535e99
    XOR EAX,EAX                         ; 00535f23
        ;   Label: LAB_00535f23
    MOV EDX,dword ptr [0x0203ad30]      ; 00535f25 | DAT_0203ad30
    MOV dword ptr [EBP + -0x2c],EAX     ; 00535f2b
    TEST EDX,EDX                        ; 00535f2e
    JLE 0x00535fb1                      ; 00535f30
        ;   XREF to: 00535fb1 (CONDITIONAL_JUMP)  ; LAB_00535fb1
    MOV dword ptr [EBP + -0x18],EAX     ; 00535f36
    MOV EAX,dword ptr [EBP + -0x18]     ; 00535f39
        ;   Label: LAB_00535f39
    PUSH 0x0                            ; 00535f3c
    MOV EDX,dword ptr [EAX + 0x203ad34] ; 00535f3e
    PUSH EDX                            ; 00535f44
    PUSH 0x2038f4c                      ; 00535f45
    XOR ESI,ESI                         ; 00535f4a
    CALL FUN_0044e690                   ; 00535f4c
        ;   XREF to: 0044e690 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e690()
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 00535f51
    ADD ESP,0xc                         ; 00535f57
    TEST ECX,ECX                        ; 00535f5a
    JLE 0x00535f97                      ; 00535f5c
        ;   XREF to: 00535f97 (CONDITIONAL_JUMP)  ; LAB_00535f97
    MOV EDI,dword ptr [EBP + -0x18]     ; 00535f5e
    PUSH 0x0                            ; 00535f61
        ;   Label: LAB_00535f61
    PUSH ESI                            ; 00535f63
    PUSH EBX                            ; 00535f64
    CALL FUN_0053adf0                   ; 00535f65
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053adf0()
    ADD ESP,0xc                         ; 00535f6a
    PUSH 0x1                            ; 00535f6d
    MOV EAX,dword ptr [EDI + 0x203ad34] ; 00535f6f
    PUSH EAX                            ; 00535f75
    PUSH 0x2038f4c                      ; 00535f76
    CALL FUN_0044e690                   ; 00535f7b
        ;   XREF to: 0044e690 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e690()
    ADD ESP,0xc                         ; 00535f80
    PUSH EBX                            ; 00535f83
    INC ESI                             ; 00535f84
    CALL FUN_0053af20                   ; 00535f85
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af20()
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 00535f8a
    ADD ESP,0x4                         ; 00535f90
    CMP ESI,EDX                         ; 00535f93
    JL 0x00535f61                       ; 00535f95
        ;   XREF to: 00535f61 (CONDITIONAL_JUMP)  ; LAB_00535f61
    MOV ESI,dword ptr [EBP + -0x18]     ; 00535f97
        ;   Label: LAB_00535f97
    MOV EDI,dword ptr [EBP + -0x2c]     ; 00535f9a
    MOV EDX,dword ptr [0x0203ad30]      ; 00535f9d | DAT_0203ad30
    ADD ESI,0x4                         ; 00535fa3
    INC EDI                             ; 00535fa6
    MOV dword ptr [EBP + -0x18],ESI     ; 00535fa7
    MOV dword ptr [EBP + -0x2c],EDI     ; 00535faa
    CMP EDI,EDX                         ; 00535fad
    JL 0x00535f39                       ; 00535faf
        ;   XREF to: 00535f39 (CONDITIONAL_JUMP)  ; LAB_00535f39
    XOR ECX,ECX                         ; 00535fb1
        ;   Label: LAB_00535fb1
    MOV EDI,dword ptr [0x0203aec4]      ; 00535fb3 | DAT_0203aec4
    MOV dword ptr [EBP + -0x20],ECX     ; 00535fb9
    MOV dword ptr [0x0203b1e8],ECX      ; 00535fbc | DAT_0203b1e8
    TEST EDI,EDI                        ; 00535fc2
    JLE 0x00536014                      ; 00535fc4
        ;   XREF to: 00536014 (CONDITIONAL_JUMP)  ; LAB_00536014
    XOR ESI,ESI                         ; 00535fc6
    MOV EAX,dword ptr [ESI + 0x203b058] ; 00535fc8
        ;   Label: LAB_00535fc8
    MOV EDI,dword ptr [ESI + 0x203aec8] ; 00535fce
    TEST EAX,EAX                        ; 00535fd4
    JNZ 0x0053647c                      ; 00535fd6
        ;   XREF to: 0053647c (CONDITIONAL_JUMP)  ; LAB_0053647c
    PUSH EAX                            ; 00535fdc
    PUSH EDI                            ; 00535fdd
    PUSH 0x2038f4c                      ; 00535fde
    CALL FUN_0044e690                   ; 00535fe3
        ;   XREF to: 0044e690 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e690()
    MOV EAX,[0x0203b1e8]                ; 00535fe8 | DAT_0203b1e8
    MOV dword ptr [EAX*0x4 + 0x203b1ec],EDI ; 00535fed | DAT_0203b1ec
    LEA EDI,[EAX + 0x1]                 ; 00535ff4
    ADD ESP,0xc                         ; 00535ff7
    MOV dword ptr [0x0203b1e8],EDI      ; 00535ffa | DAT_0203b1e8
    MOV EDI,dword ptr [EBP + -0x20]     ; 00536000
        ;   Label: LAB_00536000
    MOV EDX,dword ptr [0x0203aec4]      ; 00536003 | DAT_0203aec4
    INC EDI                             ; 00536009
    ADD ESI,0x4                         ; 0053600a
    MOV dword ptr [EBP + -0x20],EDI     ; 0053600d
    CMP EDI,EDX                         ; 00536010
    JL 0x00535fc8                       ; 00536012
        ;   XREF to: 00535fc8 (CONDITIONAL_JUMP)  ; LAB_00535fc8
    FLD float ptr [EBX + 0x14d160]      ; 00536014
        ;   Label: LAB_00536014
    XOR ECX,ECX                         ; 0053601a
    FLDZ                                ; 0053601c
    MOV dword ptr [0x0203aec4],ECX      ; 0053601e | DAT_0203aec4
    FCOMPP                              ; 00536024
    FNSTSW AX                           ; 00536026
    SAHF                                ; 00536028
    JNC 0x00536038                      ; 00536029
        ;   XREF to: 00536038 (CONDITIONAL_JUMP)  ; LAB_00536038
    PUSH 0x2038f4c                      ; 0053602b
    CALL FUN_0044dd00                   ; 00536030
        ;   XREF to: 0044dd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dd00()
    ADD ESP,0x4                         ; 00536035
    MOV EAX,[0x005fe9dc]                ; 00536038 | DAT_005fe9dc
        ;   Label: LAB_00536038
    CMP dword ptr [EAX + 0x230],0x0     ; 0053603d | DAT_01d2153c
    JZ 0x0053604e                       ; 00536044
        ;   XREF to: 0053604e (CONDITIONAL_JUMP)  ; LAB_0053604e
    CALL FUN_005806a0                   ; 00536046
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
    MOV dword ptr [EBP + -0x3c],EAX     ; 0053604b
    PUSH 0x2038f4c                      ; 0053604e
        ;   Label: LAB_0053604e
    CALL FUN_0044df60                   ; 00536053
        ;   XREF to: 0044df60 (UNCONDITIONAL_CALL)  ; undefined FUN_0044df60()
    MOV EAX,[0x005fe9dc]                ; 00536058 | DAT_005fe9dc
    MOV ESI,dword ptr [EAX + 0x230]     ; 0053605d | DAT_01d2153c
    ADD ESP,0x4                         ; 00536063
    TEST ESI,ESI                        ; 00536066
    JZ 0x00536072                       ; 00536068
        ;   XREF to: 00536072 (CONDITIONAL_JUMP)  ; LAB_00536072
    CALL FUN_005806a0                   ; 0053606a
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
    MOV dword ptr [EBP + -0x38],EAX     ; 0053606f
    MOV EAX,[0x0203a598]                ; 00536072 | DAT_0203a598
        ;   Label: LAB_00536072
    XOR EDI,EDI                         ; 00536077
    TEST EAX,EAX                        ; 00536079
    JLE 0x005360a0                      ; 0053607b
        ;   XREF to: 005360a0 (CONDITIONAL_JUMP)  ; LAB_005360a0
    XOR ESI,ESI                         ; 0053607d
    MOV EDX,dword ptr [ESI + 0x203a59c] ; 0053607f | DAT_0203a59c
        ;   Label: LAB_0053607f
    PUSH EDX                            ; 00536085
    ADD ESI,0x4                         ; 00536086
    INC EDI                             ; 00536089
    CALL FUN_0045ca30                   ; 0053608a
        ;   XREF to: 0045ca30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ca30()
    MOV ECX,dword ptr [0x0203a598]      ; 0053608f | DAT_0203a598
    ADD ESP,0x4                         ; 00536095
    CMP EDI,ECX                         ; 00536098
    JL 0x0053607f                       ; 0053609a
        ;   XREF to: 0053607f (CONDITIONAL_JUMP)  ; LAB_0053607f
    LEA EAX,[EAX]                       ; 0053609c
    PUSH 0xc                            ; 005360a0
        ;   Label: LAB_005360a0
    PUSH EBX                            ; 005360a2
    CALL FUN_00539f30                   ; 005360a3
        ;   XREF to: 00539f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00539f30()
    ADD ESP,0x8                         ; 005360a8
    PUSH EBX                            ; 005360ab
    CALL FUN_00536c90                   ; 005360ac
        ;   XREF to: 00536c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00536c90()
    ADD ESP,0x4                         ; 005360b1
    PUSH 0x0                            ; 005360b4
    PUSH 0x0                            ; 005360b6
    PUSH 0x2038f4c                      ; 005360b8
    CALL FUN_00450580                   ; 005360bd
        ;   XREF to: 00450580 (UNCONDITIONAL_CALL)  ; undefined FUN_00450580()
    ADD ESP,0xc                         ; 005360c2
    MOV ESI,dword ptr [0x005fed24]      ; 005360c5 | DAT_005fed24
    PUSH ESI                            ; 005360cb
    CALL FUN_004ce5b0                   ; 005360cc
        ;   XREF to: 004ce5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce5b0()
    ADD ESP,0x4                         ; 005360d1
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 005360d4
    XOR ESI,ESI                         ; 005360da
    TEST EDI,EDI                        ; 005360dc
    JLE 0x00536110                      ; 005360de
        ;   XREF to: 00536110 (CONDITIONAL_JUMP)  ; LAB_00536110
    PUSH 0x0                            ; 005360e0
        ;   Label: LAB_005360e0
    PUSH ESI                            ; 005360e2
    PUSH EBX                            ; 005360e3
    CALL FUN_0053adf0                   ; 005360e4
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053adf0()
    ADD ESP,0xc                         ; 005360e9
    MOV EAX,[0x005fed24]                ; 005360ec | DAT_005fed24
    PUSH EAX                            ; 005360f1
    CALL FUN_004ce5b0                   ; 005360f2
        ;   XREF to: 004ce5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce5b0()
    ADD ESP,0x4                         ; 005360f7
    PUSH EBX                            ; 005360fa
    INC ESI                             ; 005360fb
    CALL FUN_0053af20                   ; 005360fc
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af20()
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 00536101
    ADD ESP,0x4                         ; 00536107
    CMP ESI,EDX                         ; 0053610a
    JL 0x005360e0                       ; 0053610c
        ;   XREF to: 005360e0 (CONDITIONAL_JUMP)  ; LAB_005360e0
    MOV EAX,EAX                         ; 0053610e
    MOV EAX,[0x00606b20]                ; 00536110 | DAT_00606b20
        ;   Label: LAB_00536110
    CMP dword ptr [EAX],0x0             ; 00536115 | DAT_02cfd950
    JZ 0x00536125                       ; 00536118
        ;   XREF to: 00536125 (CONDITIONAL_JUMP)  ; LAB_00536125
    PUSH 0x0                            ; 0053611a
    PUSH EAX                            ; 0053611c | DAT_02cfd950
    CALL FUN_00577760                   ; 0053611d
        ;   XREF to: 00577760 (UNCONDITIONAL_CALL)  ; undefined FUN_00577760()
    ADD ESP,0x8                         ; 00536122
    PUSH EBX                            ; 00536125
        ;   Label: LAB_00536125
    CALL FUN_00536f90                   ; 00536126
        ;   XREF to: 00536f90 (UNCONDITIONAL_CALL)  ; undefined FUN_00536f90()
    MOV ESI,dword ptr [EBX + 0x15acb8]  ; 0053612b
    ADD ESP,0x4                         ; 00536131
    TEST ESI,ESI                        ; 00536134
    JZ 0x00536149                       ; 00536136
        ;   XREF to: 00536149 (CONDITIONAL_JUMP)  ; LAB_00536149
    PUSH 0x0                            ; 00536138
    MOV EDI,dword ptr [0x00606aa0]      ; 0053613a | DAT_00606aa0
    PUSH EDI                            ; 00536140
    CALL FUN_005723d0                   ; 00536141
        ;   XREF to: 005723d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005723d0()
    ADD ESP,0x8                         ; 00536146
    MOV EAX,[0x005fc5a0]                ; 00536149 | DAT_005fc5a0
        ;   Label: LAB_00536149
    PUSH EAX                            ; 0053614e
    XOR ESI,ESI                         ; 0053614f
    CALL FUN_004a1ad0                   ; 00536151
        ;   XREF to: 004a1ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1ad0()
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 00536156
    ADD ESP,0x4                         ; 0053615c
    TEST EDX,EDX                        ; 0053615f
    JLE 0x005361a0                      ; 00536161
        ;   XREF to: 005361a0 (CONDITIONAL_JUMP)  ; LAB_005361a0
    PUSH 0x0                            ; 00536163
        ;   Label: LAB_00536163
    PUSH ESI                            ; 00536165
    PUSH EBX                            ; 00536166
    CALL FUN_0053adf0                   ; 00536167
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053adf0()
    ADD ESP,0xc                         ; 0053616c
    MOV ECX,dword ptr [0x005fc5a0]      ; 0053616f | DAT_005fc5a0
    PUSH ECX                            ; 00536175
    CALL FUN_004a1ad0                   ; 00536176
        ;   XREF to: 004a1ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1ad0()
    ADD ESP,0x4                         ; 0053617b
    PUSH EBX                            ; 0053617e
    INC ESI                             ; 0053617f
    CALL FUN_0053af20                   ; 00536180
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af20()
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 00536185
    ADD ESP,0x4                         ; 0053618b
    CMP ESI,EDI                         ; 0053618e
    JL 0x00536163                       ; 00536190
        ;   XREF to: 00536163 (CONDITIONAL_JUMP)  ; LAB_00536163
    LEA EAX,[EAX]                       ; 00536192
    LEA EDX,[EDX]                       ; 00536198
    MOV EAX,EAX                         ; 0053619e
    MOV EAX,[0x006071f0]                ; 005361a0 | DAT_006071f0
        ;   Label: LAB_005361a0
    PUSH EAX                            ; 005361a5
    CALL FUN_0057c890                   ; 005361a6
        ;   XREF to: 0057c890 (UNCONDITIONAL_CALL)  ; undefined FUN_0057c890()
    MOV ECX,dword ptr [0x0203ad1c]      ; 005361ab | DAT_0203ad1c
    XOR EDX,EDX                         ; 005361b1
    ADD ESP,0x4                         ; 005361b3
    MOV dword ptr [EBP + -0x24],EDX     ; 005361b6
    TEST ECX,ECX                        ; 005361b9
    JLE 0x005361f4                      ; 005361bb
        ;   XREF to: 005361f4 (CONDITIONAL_JUMP)  ; LAB_005361f4
    MOV dword ptr [EBP + -0x34],EDX     ; 005361bd
    MOV EAX,dword ptr [EBP + -0x34]     ; 005361c0
        ;   Label: LAB_005361c0
    MOV EAX,dword ptr [EAX + 0x203ad20] ; 005361c3
    MOV ECX,dword ptr [EAX + 0x1cb4]    ; 005361c9
    MOV dword ptr [EBP + -0x10],EAX     ; 005361cf
    TEST ECX,ECX                        ; 005361d2
    JNZ 0x005364a7                      ; 005361d4
        ;   XREF to: 005364a7 (CONDITIONAL_JUMP)  ; LAB_005364a7
    MOV ESI,dword ptr [EBP + -0x34]     ; 005361da
        ;   Label: LAB_005361da
    MOV EDI,dword ptr [EBP + -0x24]     ; 005361dd
    MOV EDX,dword ptr [0x0203ad1c]      ; 005361e0 | DAT_0203ad1c
    ADD ESI,0x4                         ; 005361e6
    INC EDI                             ; 005361e9
    MOV dword ptr [EBP + -0x34],ESI     ; 005361ea
    MOV dword ptr [EBP + -0x24],EDI     ; 005361ed
    CMP EDI,EDX                         ; 005361f0
    JL 0x005361c0                       ; 005361f2
        ;   XREF to: 005361c0 (CONDITIONAL_JUMP)  ; LAB_005361c0
    PUSH 0x2038f4c                      ; 005361f4
        ;   Label: LAB_005361f4
    CALL FUN_00449840                   ; 005361f9
        ;   XREF to: 00449840 (UNCONDITIONAL_CALL)  ; undefined FUN_00449840()
    ADD ESP,0x4                         ; 005361fe
    PUSH 0x1                            ; 00536201
    PUSH 0x0                            ; 00536203
    MOV ECX,dword ptr [0x005fed24]      ; 00536205 | DAT_005fed24
    PUSH ECX                            ; 0053620b
    CALL FUN_004ce630                   ; 0053620c
        ;   XREF to: 004ce630 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce630()
    ADD ESP,0xc                         ; 00536211
    PUSH 0x1                            ; 00536214
    PUSH 0x0                            ; 00536216
    MOV ESI,dword ptr [0x005fc5a0]      ; 00536218 | DAT_005fc5a0
    PUSH ESI                            ; 0053621e
    CALL FUN_004a1e90                   ; 0053621f
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1e90()
    MOV EAX,[0x00606b20]                ; 00536224 | DAT_00606b20
    MOV EDI,dword ptr [EAX]             ; 00536229 | DAT_02cfd950
    ADD ESP,0xc                         ; 0053622b
    TEST EDI,EDI                        ; 0053622e
    JNZ 0x0053623c                      ; 00536230
        ;   XREF to: 0053623c (CONDITIONAL_JUMP)  ; LAB_0053623c
    PUSH EDI                            ; 00536232
    PUSH EAX                            ; 00536233 | DAT_02cfd950
    CALL FUN_00577760                   ; 00536234
        ;   XREF to: 00577760 (UNCONDITIONAL_CALL)  ; undefined FUN_00577760()
    ADD ESP,0x8                         ; 00536239
    MOV EAX,dword ptr [EBX + 0x14d164]  ; 0053623c
        ;   Label: LAB_0053623c
    XOR ESI,ESI                         ; 00536242
    TEST EAX,EAX                        ; 00536244
    JLE 0x00536280                      ; 00536246
        ;   XREF to: 00536280 (CONDITIONAL_JUMP)  ; LAB_00536280
    MOV EDI,EBX                         ; 00536248
    MOV EAX,[0x01d22e04]                ; 0053624a | DAT_01d22e04
        ;   Label: LAB_0053624a
    PUSH EAX                            ; 0053624f
    MOV EDX,dword ptr [EDI + 0x14d168]  ; 00536250
    PUSH EDX                            ; 00536256
    CALL FUN_0040c840                   ; 00536257
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0053625c
    TEST EAX,EAX                        ; 0053625f
    JZ 0x00536272                       ; 00536261
        ;   XREF to: 00536272 (CONDITIONAL_JUMP)  ; LAB_00536272
    PUSH 0x0                            ; 00536263
    MOV EDX,dword ptr [EAX + 0x154]     ; 00536265
    PUSH EAX                            ; 0053626b
    CALL dword ptr [EDX + 0x18]         ; 0053626c
    ADD ESP,0x8                         ; 0053626f
    INC ESI                             ; 00536272
        ;   Label: LAB_00536272
    MOV EAX,dword ptr [EBX + 0x14d164]  ; 00536273
    ADD EDI,0x4                         ; 00536279
    CMP ESI,EAX                         ; 0053627c
    JL 0x0053624a                       ; 0053627e
        ;   XREF to: 0053624a (CONDITIONAL_JUMP)  ; LAB_0053624a
    PUSH 0x0                            ; 00536280
        ;   Label: LAB_00536280
    PUSH 0x2038f4c                      ; 00536282
    CALL FUN_00449a00                   ; 00536287
        ;   XREF to: 00449a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00449a00()
    MOV ECX,dword ptr [0x0203ad1c]      ; 0053628c | DAT_0203ad1c
    XOR EDX,EDX                         ; 00536292
    ADD ESP,0x8                         ; 00536294
    MOV dword ptr [EBP + -0x28],EDX     ; 00536297
    TEST ECX,ECX                        ; 0053629a
    JLE 0x005362d5                      ; 0053629c
        ;   XREF to: 005362d5 (CONDITIONAL_JUMP)  ; LAB_005362d5
    MOV dword ptr [EBP + -0x30],EDX     ; 0053629e
    MOV EAX,dword ptr [EBP + -0x30]     ; 005362a1
        ;   Label: LAB_005362a1
    MOV EAX,dword ptr [EAX + 0x203ad20] ; 005362a4
    MOV EDI,dword ptr [EAX + 0x1cb4]    ; 005362aa
    MOV dword ptr [EBP + -0xc],EAX      ; 005362b0
    TEST EDI,EDI                        ; 005362b3
    JNZ 0x0053651c                      ; 005362b5
        ;   XREF to: 0053651c (CONDITIONAL_JUMP)  ; LAB_0053651c
    MOV EAX,dword ptr [EBP + -0x30]     ; 005362bb
        ;   Label: LAB_005362bb
    MOV EDX,dword ptr [EBP + -0x28]     ; 005362be
    MOV ECX,dword ptr [0x0203ad1c]      ; 005362c1 | DAT_0203ad1c
    ADD EAX,0x4                         ; 005362c7
    INC EDX                             ; 005362ca
    MOV dword ptr [EBP + -0x30],EAX     ; 005362cb
    MOV dword ptr [EBP + -0x28],EDX     ; 005362ce
    CMP EDX,ECX                         ; 005362d1
    JL 0x005362a1                       ; 005362d3
        ;   XREF to: 005362a1 (CONDITIONAL_JUMP)  ; LAB_005362a1
    MOV EAX,[0x01d5ba14]                ; 005362d5 | DAT_01d5ba14
        ;   Label: LAB_005362d5
    SHL EAX,0x2                         ; 005362da
    MOV ESI,dword ptr [EAX + 0x1d5ba04] ; 005362dd
    TEST ESI,ESI                        ; 005362e3
    JZ 0x005362fa                       ; 005362e5
        ;   XREF to: 005362fa (CONDITIONAL_JUMP)  ; LAB_005362fa
    MOV EDX,dword ptr [0x00600530]      ; 005362e7 | DAT_00600530
    CMP dword ptr [EDX + 0x1008],0x0    ; 005362ed | DAT_01d82088
    JZ 0x00536591                       ; 005362f4
        ;   XREF to: 00536591 (CONDITIONAL_JUMP)  ; LAB_00536591
    PUSH 0x0                            ; 005362fa
        ;   Label: LAB_005362fa
    PUSH 0x2038f4c                      ; 005362fc
    CALL FUN_00449750                   ; 00536301
        ;   XREF to: 00449750 (UNCONDITIONAL_CALL)  ; undefined FUN_00449750()
    MOV EAX,[0x005fe9dc]                ; 00536306 | DAT_005fe9dc
    MOV EDX,dword ptr [EAX + 0x230]     ; 0053630b | DAT_01d2153c
    ADD ESP,0x8                         ; 00536311
    TEST EDX,EDX                        ; 00536314
    JZ 0x005363b8                       ; 00536316
        ;   XREF to: 005363b8 (CONDITIONAL_JUMP)  ; LAB_005363b8
    CALL FUN_005806a0                   ; 0053631c
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
    MOV ECX,dword ptr [EBP + -0x38]     ; 00536321
    SUB EAX,ECX                         ; 00536324
    MOV dword ptr [EBP + -0x4],EAX      ; 00536326
    FLD double ptr [0x005d059f]         ; 00536329 | DAT_005d059f
    FILD dword ptr [EBP + -0x4]         ; 0053632f
    FMUL ST1                            ; 00536332
    MOV EAX,[0x005fe9dc]                ; 00536334 | DAT_005fe9dc
    MOV ESI,dword ptr [EBP + -0x8]      ; 00536339
    FLD float ptr [EAX + 0x314]         ; 0053633c | DAT_01d21620
    MOV EAX,ECX                         ; 00536342
    FXCH                                ; 00536344
    FLD double ptr [0x005d05a7]         ; 00536346 | DAT_005d05a7
    FXCH                                ; 0053634c
    FMUL ST1                            ; 0053634e
    SUB EAX,ESI                         ; 00536350
    MOV dword ptr [EBP + -0x4],EAX      ; 00536352
    FLD double ptr [0x005d05af]         ; 00536355 | DAT_005d05af
    FXCH                                ; 0053635b
    FMUL ST1                            ; 0053635d
    FILD dword ptr [EBP + -0x4]         ; 0053635f
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00536362
    FMUL ST5                            ; 00536365
    SUB EAX,ESI                         ; 00536367
    MOV dword ptr [EBP + -0x4],EAX      ; 00536369
    FMUL ST3                            ; 0053636c
    FILD dword ptr [EBP + -0x4]         ; 0053636e
    FMULP ST6                           ; 00536371
    FMUL ST2                            ; 00536373
    FXCH ST5                            ; 00536375
    FMULP ST3                           ; 00536377
    FLD1                                ; 00536379
    FXCH ST3                            ; 0053637b
    FMULP ST2                           ; 0053637d
    FXCH ST2                            ; 0053637f
    FDIVRP ST3,ST0                      ; 00536381
    FXCH                                ; 00536383
    FMUL ST2                            ; 00536385
    FXCH ST3                            ; 00536387
    FMUL ST2                            ; 00536389
    FXCH                                ; 0053638b
    FMULP ST2                           ; 0053638d
    SUB ESP,0x8                         ; 0053638f
    FXCH ST2                            ; 00536392
    FSTP double ptr [ESP]               ; 00536394
    SUB ESP,0x8                         ; 00536397
    FXCH                                ; 0053639a
    FSTP double ptr [ESP]               ; 0053639c
    SUB ESP,0x8                         ; 0053639f
    FSTP double ptr [ESP]               ; 005363a2
    PUSH 0x5d0577                       ; 005363a5 | s_comp_3_2f_3_2f_actren_3_005d0576+1
    MOV EAX,[0x005f1690]                ; 005363aa | PTR_DAT_005f1690
    PUSH EAX                            ; 005363af | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 005363b0
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x20                        ; 005363b5
    MOV EAX,[0x005fe9dc]                ; 005363b8 | DAT_005fe9dc
        ;   Label: LAB_005363b8
    CMP dword ptr [EAX + 0x20c],0x0     ; 005363bd | DAT_01d21518
    JZ 0x005363cf                       ; 005363c4
        ;   XREF to: 005363cf (CONDITIONAL_JUMP)  ; LAB_005363cf
    PUSH EBX                            ; 005363c6
    CALL FUN_00540eb0                   ; 005363c7
        ;   XREF to: 00540eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00540eb0()
    ADD ESP,0x4                         ; 005363cc
    MOV ECX,dword ptr [EBX + 0x14d164]  ; 005363cf
        ;   Label: LAB_005363cf
    XOR EDX,EDX                         ; 005363d5
    TEST ECX,ECX                        ; 005363d7
    JLE 0x0053642b                      ; 005363d9
        ;   XREF to: 0053642b (CONDITIONAL_JUMP)  ; LAB_0053642b
    MOV ECX,EBX                         ; 005363db
    MOV ESI,dword ptr [ECX + 0x14d168]  ; 005363dd
        ;   Label: LAB_005363dd
    LEA EAX,[ESI + 0x12c]               ; 005363e3
    LEA EDI,[ESI + 0x20]                ; 005363e9
    CMP EAX,EDI                         ; 005363ec
    JZ 0x00536400                       ; 005363ee
        ;   XREF to: 00536400 (CONDITIONAL_JUMP)  ; LAB_00536400
    FLD float ptr [EDI]                 ; 005363f0
    FSTP float ptr [EAX]                ; 005363f2
    FLD float ptr [EDI + 0x4]           ; 005363f4
    FSTP float ptr [EAX + 0x4]          ; 005363f7
    FLD float ptr [EDI + 0x8]           ; 005363fa
    FSTP float ptr [EAX + 0x8]          ; 005363fd
    LEA EDI,[ESI + 0x138]               ; 00536400
        ;   Label: LAB_00536400
    ADD ESI,0x30                        ; 00536406
    CMP EDI,ESI                         ; 00536409
    JZ 0x0053641d                       ; 0053640b
        ;   XREF to: 0053641d (CONDITIONAL_JUMP)  ; LAB_0053641d
    MOV EAX,dword ptr [ESI]             ; 0053640d
    MOV dword ptr [EDI],EAX             ; 0053640f
    MOV EAX,dword ptr [ESI + 0x4]       ; 00536411
    MOV dword ptr [EDI + 0x4],EAX       ; 00536414
    MOV EAX,dword ptr [ESI + 0x8]       ; 00536417
    MOV dword ptr [EDI + 0x8],EAX       ; 0053641a
    INC EDX                             ; 0053641d
        ;   Label: LAB_0053641d
    MOV ESI,dword ptr [EBX + 0x14d164]  ; 0053641e
    ADD ECX,0x4                         ; 00536424
    CMP EDX,ESI                         ; 00536427
    JL 0x005363dd                       ; 00536429
        ;   XREF to: 005363dd (CONDITIONAL_JUMP)  ; LAB_005363dd
    CMP dword ptr [0x0207baa8],0x0      ; 0053642b | DAT_0207baa8
        ;   Label: LAB_0053642b
    JNZ 0x005365a5                      ; 00536432
        ;   XREF to: 005365a5 (CONDITIONAL_JUMP)  ; LAB_005365a5
    MOV ESP,EBP                         ; 00536438
    POP EBP                             ; 0053643a
    POP EDI                             ; 0053643b
    POP ESI                             ; 0053643c
    POP EBX                             ; 0053643d
    RET                                 ; 0053643e
    CALL FUN_005806a0                   ; 0053643f
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
        ;   Label: LAB_0053643f
    MOV dword ptr [EBP + -0x8],EAX      ; 00536444
    JMP 0x00535dc1                      ; 00536447
        ;   XREF to: 00535dc1 (UNCONDITIONAL_JUMP)  ; LAB_00535dc1
    PUSH EBX                            ; 0053644c
        ;   Label: LAB_0053644c
    CALL FUN_0053b9a0                   ; 0053644d
        ;   XREF to: 0053b9a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b9a0()
    ADD ESP,0x4                         ; 00536452
    TEST EAX,EAX                        ; 00536455
    JZ 0x00535dc9                       ; 00536457
        ;   XREF to: 00535dc9 (CONDITIONAL_JUMP)  ; LAB_00535dc9
    PUSH EBX                            ; 0053645d
    ADD ESP,0x4                         ; 0053645e
    MOV ESP,EBP                         ; 00536461
    POP EBP                             ; 00536463
    POP EDI                             ; 00536464
    POP ESI                             ; 00536465
    POP EBX                             ; 00536466
    RET                                 ; 00536467
    MOV EAX,[0x005fe9dc]                ; 00536468 | DAT_005fe9dc
        ;   Label: LAB_00536468
    CMP dword ptr [EAX + 0x24],0x0      ; 0053646d | DAT_01d21330
    JNZ 0x00535e36                      ; 00536471
        ;   XREF to: 00535e36 (CONDITIONAL_JUMP)  ; LAB_00535e36
    JMP 0x00536038                      ; 00536477
        ;   XREF to: 00536038 (UNCONDITIONAL_JUMP)  ; LAB_00536038
    PUSH 0x0                            ; 0053647c
        ;   Label: LAB_0053647c
    DEC EAX                             ; 0053647e
    PUSH EAX                            ; 0053647f
    PUSH EBX                            ; 00536480
    CALL FUN_0053adf0                   ; 00536481
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053adf0()
    ADD ESP,0xc                         ; 00536486
    PUSH 0x1                            ; 00536489
    PUSH EDI                            ; 0053648b
    PUSH 0x2038f4c                      ; 0053648c
    CALL FUN_0044e690                   ; 00536491
        ;   XREF to: 0044e690 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e690()
    ADD ESP,0xc                         ; 00536496
    PUSH EBX                            ; 00536499
    CALL FUN_0053af20                   ; 0053649a
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af20()
    ADD ESP,0x4                         ; 0053649f
    JMP 0x00536000                      ; 005364a2
        ;   XREF to: 00536000 (UNCONDITIONAL_JUMP)  ; LAB_00536000
    MOV ESI,EAX                         ; 005364a7
        ;   Label: LAB_005364a7
    LEA EDI,[EBP + -0x74]               ; 005364a9
    LEA ESI,[ESI + 0x4]                 ; 005364ac
    PUSH 0x0                            ; 005364af
    LEA EAX,[EBP + -0x50]               ; 005364b1
    MOVSD ES:EDI,ESI                    ; 005364b4
    MOVSD ES:EDI,ESI                    ; 005364b5
    MOVSD ES:EDI,ESI                    ; 005364b6
    PUSH EAX                            ; 005364b7
    LEA EDI,[EBP + -0x50]               ; 005364b8
    LEA ESI,[EBP + -0x74]               ; 005364bb
    PUSH 0x2038f4c                      ; 005364be
    MOVSD ES:EDI,ESI                    ; 005364c3
    MOVSD ES:EDI,ESI                    ; 005364c4
    MOVSD ES:EDI,ESI                    ; 005364c5
    CALL FUN_00450580                   ; 005364c6
        ;   XREF to: 00450580 (UNCONDITIONAL_CALL)  ; undefined FUN_00450580()
    ADD ESP,0xc                         ; 005364cb
    MOV ESI,dword ptr [EBP + -0x10]     ; 005364ce
    PUSH ESI                            ; 005364d1
    CALL FUN_0045d530                   ; 005364d2
        ;   XREF to: 0045d530 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d530()
    ADD ESP,0x4                         ; 005364d7
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 005364da
    XOR ESI,ESI                         ; 005364e0
    TEST EDI,EDI                        ; 005364e2
    JLE 0x005361da                      ; 005364e4
        ;   XREF to: 005361da (CONDITIONAL_JUMP)  ; LAB_005361da
    PUSH 0x0                            ; 005364ea
        ;   Label: LAB_005364ea
    PUSH ESI                            ; 005364ec
    PUSH EBX                            ; 005364ed
    CALL FUN_0053adf0                   ; 005364ee
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053adf0()
    ADD ESP,0xc                         ; 005364f3
    MOV ECX,dword ptr [EBP + -0x10]     ; 005364f6
    PUSH ECX                            ; 005364f9
    CALL FUN_0045d530                   ; 005364fa
        ;   XREF to: 0045d530 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d530()
    ADD ESP,0x4                         ; 005364ff
    PUSH EBX                            ; 00536502
    INC ESI                             ; 00536503
    CALL FUN_0053af20                   ; 00536504
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af20()
    MOV EDI,dword ptr [EBX + 0x15acc8]  ; 00536509
    ADD ESP,0x4                         ; 0053650f
    CMP ESI,EDI                         ; 00536512
    JGE 0x005361da                      ; 00536514
        ;   XREF to: 005361da (CONDITIONAL_JUMP)  ; LAB_005361da
    JMP 0x005364ea                      ; 0053651a
        ;   XREF to: 005364ea (UNCONDITIONAL_JUMP)  ; LAB_005364ea
    MOV ESI,EAX                         ; 0053651c
        ;   Label: LAB_0053651c
    LEA EDI,[EBP + -0x5c]               ; 0053651e
    LEA ESI,[ESI + 0x4]                 ; 00536521
    PUSH 0x0                            ; 00536524
    LEA EAX,[EBP + -0x68]               ; 00536526
    MOVSD ES:EDI,ESI                    ; 00536529
    MOVSD ES:EDI,ESI                    ; 0053652a
    MOVSD ES:EDI,ESI                    ; 0053652b
    PUSH EAX                            ; 0053652c
    LEA EDI,[EBP + -0x68]               ; 0053652d
    LEA ESI,[EBP + -0x5c]               ; 00536530
    PUSH 0x2038f4c                      ; 00536533
    MOVSD ES:EDI,ESI                    ; 00536538
    MOVSD ES:EDI,ESI                    ; 00536539
    MOVSD ES:EDI,ESI                    ; 0053653a
    CALL FUN_00450580                   ; 0053653b
        ;   XREF to: 00450580 (UNCONDITIONAL_CALL)  ; undefined FUN_00450580()
    ADD ESP,0xc                         ; 00536540
    MOV EAX,dword ptr [EBP + -0xc]      ; 00536543
    PUSH EAX                            ; 00536546
    XOR ESI,ESI                         ; 00536547
    CALL FUN_0045d560                   ; 00536549
        ;   XREF to: 0045d560 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d560()
    MOV EDX,dword ptr [EBX + 0x15acc8]  ; 0053654e
    ADD ESP,0x4                         ; 00536554
    TEST EDX,EDX                        ; 00536557
    JLE 0x005362bb                      ; 00536559
        ;   XREF to: 005362bb (CONDITIONAL_JUMP)  ; LAB_005362bb
    PUSH 0x0                            ; 0053655f
        ;   Label: LAB_0053655f
    PUSH ESI                            ; 00536561
    PUSH EBX                            ; 00536562
    CALL FUN_0053adf0                   ; 00536563
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053adf0()
    ADD ESP,0xc                         ; 00536568
    MOV EDX,dword ptr [EBP + -0xc]      ; 0053656b
    PUSH EDX                            ; 0053656e
    CALL FUN_0045d560                   ; 0053656f
        ;   XREF to: 0045d560 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d560()
    ADD ESP,0x4                         ; 00536574
    PUSH EBX                            ; 00536577
    INC ESI                             ; 00536578
    CALL FUN_0053af20                   ; 00536579
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053af20()
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 0053657e
    ADD ESP,0x4                         ; 00536584
    CMP ESI,ECX                         ; 00536587
    JGE 0x005362bb                      ; 00536589
        ;   XREF to: 005362bb (CONDITIONAL_JUMP)  ; LAB_005362bb
    JMP 0x0053655f                      ; 0053658f
        ;   XREF to: 0053655f (UNCONDITIONAL_JUMP)  ; LAB_0053655f
    LEA EAX,[ESI + 0x206e8]             ; 00536591
        ;   Label: LAB_00536591
    PUSH EAX                            ; 00536597
    CALL FUN_004dd770                   ; 00536598
        ;   XREF to: 004dd770 (UNCONDITIONAL_CALL)  ; undefined FUN_004dd770()
    ADD ESP,0x4                         ; 0053659d
    JMP 0x005362fa                      ; 005365a0
        ;   XREF to: 005362fa (UNCONDITIONAL_JUMP)  ; LAB_005362fa
    CALL FUN_00560d70                   ; 005365a5
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00560d70()
        ;   Label: LAB_005365a5
    XOR EAX,EAX                         ; 005365aa
    MOV [0x0207baa8],EAX                ; 005365ac | DAT_0207baa8
    MOV ESP,EBP                         ; 005365b1
    POP EBP                             ; 005365b3
    POP EDI                             ; 005365b4
    POP ESI                             ; 005365b5
    POP EBX                             ; 005365b6
    RET                                 ; 005365b7

