; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0ee0(int param_1,uint *param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004d0860 at 004d08b1
;   FUN_004d0d30 at 004d0d48
;   FUN_004d1820 at 004d1834
;
; Referenced Globals:
;   undefined4 DAT_005e19c4
;   undefined4 DAT_005e19c8
;   undefined4 DAT_005e19cc
;   undefined4 DAT_005e19d0
;   undefined4 DAT_005e19d4
;   undefined4 DAT_005e19dc
;   undefined4 DAT_005e19e4
;   undefined4 DAT_005e19e8
;   undefined4 DAT_005e19ec
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01c50950
;   undefined4 DAT_01ccf624
;   undefined4 DAT_01ccff98
;   undefined4 DAT_01d06ab4
;   ... and 1 more
;
; Called Functions:
;   FUN_004f8dc0
;   FUN_004f8ec0
;   FUN_004f8fe0
;   FUN_004fc370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0ee0
        ;   Label: FUN_004d0ee0
    PUSH ESI                            ; 004d0ee1
    PUSH EDI                            ; 004d0ee2
    PUSH EBP                            ; 004d0ee3
    SUB ESP,0x14                        ; 004d0ee4
    MOV EBX,dword ptr [ESP + 0x28]      ; 004d0ee7
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004d0eeb
    CMP dword ptr [EBX + 0x2ac],0x0     ; 004d0eef
    JNZ 0x004d1430                      ; 004d0ef6
        ;   XREF to: 004d1430 (CONDITIONAL_JUMP)  ; LAB_004d1430
    MOV dword ptr [ESI + 0x24],0x0      ; 004d0efc
        ;   Label: LAB_004d0efc
    MOV EAX,dword ptr [EBX + 0x38]      ; 004d0f03
    LEA EDX,[ESI + 0x24]                ; 004d0f06
    MOV ECX,dword ptr [EBX + 0x3c]      ; 004d0f09
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d0f0c | DAT_01c50950
    JZ 0x004d145b                       ; 004d0f13
        ;   XREF to: 004d145b (CONDITIONAL_JUMP)  ; LAB_004d145b
    FLD float ptr [EDX]                 ; 004d0f19
    FCOMP float ptr [0x005e19c8]        ; 004d0f1b | DAT_005e19c8
    FNSTSW AX                           ; 004d0f21
    SAHF                                ; 004d0f23
    JBE 0x004d0f4c                      ; 004d0f24
        ;   XREF to: 004d0f4c (CONDITIONAL_JUMP)  ; LAB_004d0f4c
    MOV EAX,[0x0061d95c]                ; 004d0f26 | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d0f2b | DAT_01ccf624
    FDIV float ptr [0x005e19c4]         ; 004d0f31 | DAT_005e19c4
    FSUBR float ptr [EDX]               ; 004d0f37
    FST float ptr [EDX]                 ; 004d0f39
    FCOMP float ptr [0x005e19c8]        ; 004d0f3b | DAT_005e19c8
    FNSTSW AX                           ; 004d0f41
    SAHF                                ; 004d0f43
    JNC 0x004d0f4c                      ; 004d0f44
        ;   XREF to: 004d0f4c (CONDITIONAL_JUMP)  ; LAB_004d0f4c
    MOV dword ptr [EDX],0xbf800000      ; 004d0f46
    MOV EAX,dword ptr [EBX + 0x34]      ; 004d0f4c
        ;   Label: LAB_004d0f4c
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d0f4f | DAT_01c50950
    JZ 0x004d1501                       ; 004d0f56
        ;   XREF to: 004d1501 (CONDITIONAL_JUMP)  ; LAB_004d1501
    MOV EAX,dword ptr [EBX + 0x44]      ; 004d0f5c
    LEA EDX,[ESI + 0x24]                ; 004d0f5f
    MOV ECX,dword ptr [EBX + 0x40]      ; 004d0f62
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d0f65 | DAT_01c50950
    JZ 0x004d14a0                       ; 004d0f6c
        ;   XREF to: 004d14a0 (CONDITIONAL_JUMP)  ; LAB_004d14a0
    FLD float ptr [EDX]                 ; 004d0f72
    FCOMP float ptr [0x005e19c8]        ; 004d0f74 | DAT_005e19c8
    FNSTSW AX                           ; 004d0f7a
    SAHF                                ; 004d0f7c
    JBE 0x004d0fa5                      ; 004d0f7d
        ;   XREF to: 004d0fa5 (CONDITIONAL_JUMP)  ; LAB_004d0fa5
    MOV EAX,[0x0061d95c]                ; 004d0f7f | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d0f84 | DAT_01ccf624
    FDIV float ptr [0x005e19c4]         ; 004d0f8a | DAT_005e19c4
    FSUBR float ptr [EDX]               ; 004d0f90
    FST float ptr [EDX]                 ; 004d0f92
    FCOMP float ptr [0x005e19c8]        ; 004d0f94 | DAT_005e19c8
    FNSTSW AX                           ; 004d0f9a
    SAHF                                ; 004d0f9c
    JNC 0x004d0fa5                      ; 004d0f9d
        ;   XREF to: 004d0fa5 (CONDITIONAL_JUMP)  ; LAB_004d0fa5
    MOV dword ptr [EDX],0xbf800000      ; 004d0f9f
    MOV EAX,[0x0061d95c]                ; 004d0fa5 | DAT_0061d95c
        ;   Label: LAB_004d0fa5
    FLD float ptr [EAX + 0x294]         ; 004d0faa | DAT_01ccf624
    FMUL float ptr [0x005e19cc]         ; 004d0fb0 | DAT_005e19cc
    FDIV float ptr [0x005e19d0]         ; 004d0fb6 | DAT_005e19d0
    FLDZ                                ; 004d0fbc
    LEA EDX,[ESI + 0x28]                ; 004d0fbe
    FXCH                                ; 004d0fc1
    FSTP float ptr [ESP + 0x8]          ; 004d0fc3
    FCOMP float ptr [EDX]               ; 004d0fc7
    FNSTSW AX                           ; 004d0fc9
    SAHF                                ; 004d0fcb
    JBE 0x004d14e5                      ; 004d0fcc
        ;   XREF to: 004d14e5 (CONDITIONAL_JUMP)  ; LAB_004d14e5
    FLD float ptr [EDX]                 ; 004d0fd2
    FADD float ptr [ESP + 0x8]          ; 004d0fd4
    FLDZ                                ; 004d0fd8
        ;   Label: LAB_004d0fd8
    FXCH                                ; 004d0fda
    FSTP float ptr [EDX]                ; 004d0fdc
    FCOMP float ptr [EDX]               ; 004d0fde
    FNSTSW AX                           ; 004d0fe0
    SAHF                                ; 004d0fe2
    JNC 0x004d0feb                      ; 004d0fe3
        ;   XREF to: 004d0feb (CONDITIONAL_JUMP)  ; LAB_004d0feb
    MOV dword ptr [EDX],0x0             ; 004d0fe5
        ;   Label: LAB_004d0fe5
    MOV EAX,dword ptr [EBX + 0x74]      ; 004d0feb
        ;   Label: LAB_004d0feb
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d0fee | DAT_01c50950
    JZ 0x004d1622                       ; 004d0ff5
        ;   XREF to: 004d1622 (CONDITIONAL_JUMP)  ; LAB_004d1622
    FILD dword ptr [EBX + 0xb4]         ; 004d0ffb
        ;   Label: LAB_004d0ffb
    FMUL double ptr [0x005e19ec]        ; 004d1001 | DAT_005e19ec
    FMUL double ptr [0x005e19dc]        ; 004d1007 | DAT_005e19dc
    LEA EDX,[ESI + 0x2c]                ; 004d100d
    MOV EAX,dword ptr [EBX + 0x74]      ; 004d1010
    MOV ECX,dword ptr [EBX + 0x78]      ; 004d1013
    FSTP float ptr [ESP]                ; 004d1016
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d1019 | DAT_01c50950
    JZ 0x004d167d                       ; 004d1020
        ;   XREF to: 004d167d (CONDITIONAL_JUMP)  ; LAB_004d167d
    FLD float ptr [EDX]                 ; 004d1026
    FCOMP float ptr [0x005e19e4]        ; 004d1028 | DAT_005e19e4
    FNSTSW AX                           ; 004d102e
    SAHF                                ; 004d1030
    JBE 0x004d105c                      ; 004d1031
        ;   XREF to: 004d105c (CONDITIONAL_JUMP)  ; LAB_004d105c
    MOV EAX,[0x0061d95c]                ; 004d1033 | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d1038 | DAT_01ccf624
    FMUL float ptr [0x005e19cc]         ; 004d103e | DAT_005e19cc
    FDIV float ptr [ESP]                ; 004d1044
    FSUBR float ptr [EDX]               ; 004d1047
    FST float ptr [EDX]                 ; 004d1049
    FCOMP float ptr [0x005e19e4]        ; 004d104b | DAT_005e19e4
    FNSTSW AX                           ; 004d1051
    SAHF                                ; 004d1053
    JNC 0x004d105c                      ; 004d1054
        ;   XREF to: 004d105c (CONDITIONAL_JUMP)  ; LAB_004d105c
    MOV dword ptr [EDX],0xbe800000      ; 004d1056
    CMP dword ptr [EBX + 0xac],0x0      ; 004d105c
        ;   Label: LAB_004d105c
    JZ 0x004d16e7                       ; 004d1063
        ;   XREF to: 004d16e7 (CONDITIONAL_JUMP)  ; LAB_004d16e7
    MOV EAX,dword ptr [EBX + 0x30]      ; 004d1069
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d106c | DAT_01c50950
    SETZ AL                             ; 004d1073
    AND EAX,0xff                        ; 004d1076
        ;   Label: LAB_004d1076
    MOV dword ptr [ESI + 0x8],EAX       ; 004d107b
    MOV EDX,dword ptr [EBX + 0x28]      ; 004d107e
    MOV AL,byte ptr [EDX + 0x1ccff98]   ; 004d1081 | DAT_01ccff98
    MOV CL,byte ptr [EDX + 0x1c50950]   ; 004d1087 | DAT_01c50950
    CMP AL,CL                           ; 004d108d
    JZ 0x004d1097                       ; 004d108f
        ;   XREF to: 004d1097 (CONDITIONAL_JUMP)  ; LAB_004d1097
    XOR EAX,EAX                         ; 004d1091
    MOV AL,CL                           ; 004d1093
    MOV dword ptr [ESI],EAX             ; 004d1095
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004d1097
        ;   Label: LAB_004d1097
    MOV AL,byte ptr [EDX + 0x1ccff98]   ; 004d109a | DAT_01ccff98
    MOV AH,byte ptr [EDX + 0x1c50950]   ; 004d10a0 | DAT_01c50950
    LEA ECX,[ESI + 0x4]                 ; 004d10a6
    CMP AL,AH                           ; 004d10a9
    JZ 0x004d10b7                       ; 004d10ab
        ;   XREF to: 004d10b7 (CONDITIONAL_JUMP)  ; LAB_004d10b7
    XOR EAX,EAX                         ; 004d10ad
    MOV AL,byte ptr [EDX + 0x1c50950]   ; 004d10af | DAT_01c50950
    MOV dword ptr [ECX],EAX             ; 004d10b5
    MOV EAX,[0x01d06ab4]                ; 004d10b7 | DAT_01d06ab4
        ;   Label: LAB_004d10b7
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d10bc
    PUSH EAX                            ; 004d10c3
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d10c4
    CALL dword ptr [EDX + 0x10c]        ; 004d10ca
    ADD ESP,0x4                         ; 004d10d0
    TEST EAX,EAX                        ; 004d10d3
    JNZ 0x004d16f5                      ; 004d10d5
        ;   XREF to: 004d16f5 (CONDITIONAL_JUMP)  ; LAB_004d16f5
    MOV EDX,dword ptr [EBX + 0x48]      ; 004d10db
    MOV AL,byte ptr [EDX + 0x1ccff98]   ; 004d10de | DAT_01ccff98
    MOV AH,byte ptr [EDX + 0x1c50950]   ; 004d10e4 | DAT_01c50950
    LEA ECX,[ESI + 0xc]                 ; 004d10ea
    CMP AL,AH                           ; 004d10ed
    JZ 0x004d10fb                       ; 004d10ef
        ;   XREF to: 004d10fb (CONDITIONAL_JUMP)  ; LAB_004d10fb
    XOR EAX,EAX                         ; 004d10f1
    MOV AL,byte ptr [EDX + 0x1c50950]   ; 004d10f3 | DAT_01c50950
    MOV dword ptr [ECX],EAX             ; 004d10f9
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004d10fb
        ;   Label: LAB_004d10fb
    MOV CL,byte ptr [EDX + 0x1ccff98]   ; 004d10fe | DAT_01ccff98
    MOV CH,byte ptr [EDX + 0x1c50950]   ; 004d1104 | DAT_01c50950
    LEA EAX,[ESI + 0x10]                ; 004d110a
    CMP CL,CH                           ; 004d110d
    JZ 0x004d1701                       ; 004d110f
        ;   XREF to: 004d1701 (CONDITIONAL_JUMP)  ; LAB_004d1701
    MOV DL,CH                           ; 004d1115
    AND EDX,0xff                        ; 004d1117
    MOV dword ptr [EAX],EDX             ; 004d111d
    MOV EDX,dword ptr [EBX + 0x50]      ; 004d111f
        ;   Label: LAB_004d111f
    MOV CL,byte ptr [EDX + 0x1ccff98]   ; 004d1122 | DAT_01ccff98
    MOV CH,byte ptr [EDX + 0x1c50950]   ; 004d1128 | DAT_01c50950
    LEA EAX,[ESI + 0x14]                ; 004d112e
    CMP CL,CH                           ; 004d1131
    JZ 0x004d170c                       ; 004d1133
        ;   XREF to: 004d170c (CONDITIONAL_JUMP)  ; LAB_004d170c
    MOV DL,CH                           ; 004d1139
    AND EDX,0xff                        ; 004d113b
    MOV dword ptr [EAX],EDX             ; 004d1141
    MOV EDX,dword ptr [EBX + 0x68]      ; 004d1143
        ;   Label: LAB_004d1143
    MOV CL,byte ptr [EDX + 0x1ccff98]   ; 004d1146 | DAT_01ccff98
    MOV CH,byte ptr [EDX + 0x1c50950]   ; 004d114c | DAT_01c50950
    LEA EAX,[ESI + 0x18]                ; 004d1152
    CMP CL,CH                           ; 004d1155
    JZ 0x004d1717                       ; 004d1157
        ;   XREF to: 004d1717 (CONDITIONAL_JUMP)  ; LAB_004d1717
    MOV DL,CH                           ; 004d115d
    AND EDX,0xff                        ; 004d115f
    MOV dword ptr [EAX],EDX             ; 004d1165
    MOV EDX,dword ptr [EBX + 0x6c]      ; 004d1167
        ;   Label: LAB_004d1167
    MOV CL,byte ptr [EDX + 0x1ccff98]   ; 004d116a | DAT_01ccff98
    MOV CH,byte ptr [EDX + 0x1c50950]   ; 004d1170 | DAT_01c50950
    LEA EAX,[ESI + 0x1c]                ; 004d1176
    CMP CL,CH                           ; 004d1179
    JZ 0x004d1722                       ; 004d117b
        ;   XREF to: 004d1722 (CONDITIONAL_JUMP)  ; LAB_004d1722
    MOV DL,CH                           ; 004d1181
    AND EDX,0xff                        ; 004d1183
    MOV dword ptr [EAX],EDX             ; 004d1189
    MOV EDX,dword ptr [EBX + 0x70]      ; 004d118b
        ;   Label: LAB_004d118b
    MOV AL,byte ptr [EDX + 0x1ccff98]   ; 004d118e | DAT_01ccff98
    MOV AH,byte ptr [EDX + 0x1c50950]   ; 004d1194 | DAT_01c50950
    ADD ESI,0x20                        ; 004d119a
    CMP AL,AH                           ; 004d119d
    JZ 0x004d172d                       ; 004d119f
        ;   XREF to: 004d172d (CONDITIONAL_JUMP)  ; LAB_004d172d
    XOR EAX,EAX                         ; 004d11a5
    MOV AL,byte ptr [EDX + 0x1c50950]   ; 004d11a7 | DAT_01c50950
    MOV dword ptr [ESI],EAX             ; 004d11ad
    MOV ECX,dword ptr [EBX + 0x90]      ; 004d11af
        ;   Label: LAB_004d11af
    MOV EAX,[0x0061f2a4]                ; 004d11b5 | DAT_0061f2a4
    PUSH ECX                            ; 004d11ba
    MOV EDX,dword ptr [EAX]             ; 004d11bb | DAT_01d1bca0
    PUSH EAX                            ; 004d11bd | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d11be
    ADD ESP,0x8                         ; 004d11c1
    TEST EAX,EAX                        ; 004d11c4
    JZ 0x004d11e8                       ; 004d11c6
        ;   XREF to: 004d11e8 (CONDITIONAL_JUMP)  ; LAB_004d11e8
    PUSH 0x1                            ; 004d11c8
    MOV EAX,[0x01d06ab4]                ; 004d11ca | DAT_01d06ab4
    PUSH 0x5                            ; 004d11cf
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d11d1
    PUSH 0x0                            ; 004d11d8
    ADD EAX,0x1fae8                     ; 004d11da
    PUSH EAX                            ; 004d11df
    CALL FUN_004f8dc0                   ; 004d11e0
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 004d11e5
    MOV ESI,dword ptr [EBX + 0x94]      ; 004d11e8
        ;   Label: LAB_004d11e8
    MOV EDX,dword ptr [0x0061f2a4]      ; 004d11ee | DAT_0061f2a4
    PUSH ESI                            ; 004d11f4
    MOV EAX,dword ptr [EDX]             ; 004d11f5 | DAT_01d1bca0
    PUSH EDX                            ; 004d11f7 | DAT_01d1bca0
    CALL dword ptr [EAX + 0x4]          ; 004d11f8
    ADD ESP,0x8                         ; 004d11fb
    TEST EAX,EAX                        ; 004d11fe
    JZ 0x004d1222                       ; 004d1200
        ;   XREF to: 004d1222 (CONDITIONAL_JUMP)  ; LAB_004d1222
    PUSH -0x1                           ; 004d1202
    MOV EAX,[0x01d06ab4]                ; 004d1204 | DAT_01d06ab4
    PUSH 0x5                            ; 004d1209
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d120b
    PUSH 0x0                            ; 004d1212
    ADD EAX,0x1fae8                     ; 004d1214
    PUSH EAX                            ; 004d1219
    CALL FUN_004f8dc0                   ; 004d121a
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 004d121f
    MOV EDI,dword ptr [EBX + 0x98]      ; 004d1222
        ;   Label: LAB_004d1222
    MOV EAX,[0x0061f2a4]                ; 004d1228 | DAT_0061f2a4
    PUSH EDI                            ; 004d122d
    MOV EDX,dword ptr [EAX]             ; 004d122e | DAT_01d1bca0
    PUSH EAX                            ; 004d1230 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d1231
    ADD ESP,0x8                         ; 004d1234
    TEST EAX,EAX                        ; 004d1237
    JZ 0x004d1257                       ; 004d1239
        ;   XREF to: 004d1257 (CONDITIONAL_JUMP)  ; LAB_004d1257
    MOV EAX,[0x01d06ab4]                ; 004d123b | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d1240
    PUSH 0x1                            ; 004d1247
    ADD EAX,0x1fae8                     ; 004d1249
    PUSH EAX                            ; 004d124e
    CALL FUN_004f8ec0                   ; 004d124f
        ;   XREF to: 004f8ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8ec0()
    ADD ESP,0x8                         ; 004d1254
    MOV EBP,dword ptr [EBX + 0x9c]      ; 004d1257
        ;   Label: LAB_004d1257
    MOV EAX,[0x0061f2a4]                ; 004d125d | DAT_0061f2a4
    PUSH EBP                            ; 004d1262
    MOV EDX,dword ptr [EAX]             ; 004d1263 | DAT_01d1bca0
    PUSH EAX                            ; 004d1265 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d1266
    ADD ESP,0x8                         ; 004d1269
    TEST EAX,EAX                        ; 004d126c
    JZ 0x004d128c                       ; 004d126e
        ;   XREF to: 004d128c (CONDITIONAL_JUMP)  ; LAB_004d128c
    MOV EAX,[0x01d06ab4]                ; 004d1270 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d1275
    PUSH -0x1                           ; 004d127c
    ADD EAX,0x1fae8                     ; 004d127e
    PUSH EAX                            ; 004d1283
    CALL FUN_004f8ec0                   ; 004d1284
        ;   XREF to: 004f8ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8ec0()
    ADD ESP,0x8                         ; 004d1289
    MOV ECX,dword ptr [EBX + 0xa4]      ; 004d128c
        ;   Label: LAB_004d128c
    MOV EAX,[0x0061f2a4]                ; 004d1292 | DAT_0061f2a4
    PUSH ECX                            ; 004d1297
    MOV EDX,dword ptr [EAX]             ; 004d1298 | DAT_01d1bca0
    PUSH EAX                            ; 004d129a | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d129b
    ADD ESP,0x8                         ; 004d129e
    TEST EAX,EAX                        ; 004d12a1
    JZ 0x004d12c1                       ; 004d12a3
        ;   XREF to: 004d12c1 (CONDITIONAL_JUMP)  ; LAB_004d12c1
    MOV EAX,[0x01d06ab4]                ; 004d12a5 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d12aa
    PUSH 0x1                            ; 004d12b1
    ADD EAX,0x1fae8                     ; 004d12b3
    PUSH EAX                            ; 004d12b8
    CALL FUN_004f8fe0                   ; 004d12b9
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8fe0()
    ADD ESP,0x8                         ; 004d12be
    MOV ESI,dword ptr [EBX + 0xa0]      ; 004d12c1
        ;   Label: LAB_004d12c1
    MOV EAX,[0x0061f2a4]                ; 004d12c7 | DAT_0061f2a4
    PUSH ESI                            ; 004d12cc
    MOV EDX,dword ptr [EAX]             ; 004d12cd | DAT_01d1bca0
    PUSH EAX                            ; 004d12cf | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d12d0
    ADD ESP,0x8                         ; 004d12d3
    TEST EAX,EAX                        ; 004d12d6
    JZ 0x004d12f4                       ; 004d12d8
        ;   XREF to: 004d12f4 (CONDITIONAL_JUMP)  ; LAB_004d12f4
    MOV EAX,[0x01d06ab4]                ; 004d12da | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d12df
    ADD EAX,0x1fae8                     ; 004d12e6
    PUSH EAX                            ; 004d12eb
    CALL FUN_004fc370                   ; 004d12ec
        ;   XREF to: 004fc370 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc370()
    ADD ESP,0x4                         ; 004d12f1
    MOV EDI,dword ptr [EBX + 0x7c]      ; 004d12f4
        ;   Label: LAB_004d12f4
    MOV EAX,[0x0061f2a4]                ; 004d12f7 | DAT_0061f2a4
    PUSH EDI                            ; 004d12fc
    MOV EDX,dword ptr [EAX]             ; 004d12fd | DAT_01d1bca0
    PUSH EAX                            ; 004d12ff | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d1300
    ADD ESP,0x8                         ; 004d1303
    TEST EAX,EAX                        ; 004d1306
    JZ 0x004d132a                       ; 004d1308
        ;   XREF to: 004d132a (CONDITIONAL_JUMP)  ; LAB_004d132a
    PUSH 0x1                            ; 004d130a
    MOV EAX,[0x01d06ab4]                ; 004d130c | DAT_01d06ab4
    PUSH 0x0                            ; 004d1311
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d1313
    PUSH 0x0                            ; 004d131a
    ADD EAX,0x1fae8                     ; 004d131c
    PUSH EAX                            ; 004d1321
    CALL FUN_004f8dc0                   ; 004d1322
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 004d1327
    MOV EBP,dword ptr [EBX + 0x80]      ; 004d132a
        ;   Label: LAB_004d132a
    MOV EAX,[0x0061f2a4]                ; 004d1330 | DAT_0061f2a4
    PUSH EBP                            ; 004d1335
    MOV EDX,dword ptr [EAX]             ; 004d1336 | DAT_01d1bca0
    PUSH EAX                            ; 004d1338 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d1339
    ADD ESP,0x8                         ; 004d133c
    TEST EAX,EAX                        ; 004d133f
    JZ 0x004d1363                       ; 004d1341
        ;   XREF to: 004d1363 (CONDITIONAL_JUMP)  ; LAB_004d1363
    PUSH 0x1                            ; 004d1343
    MOV EAX,[0x01d06ab4]                ; 004d1345 | DAT_01d06ab4
    PUSH 0x1                            ; 004d134a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d134c
    PUSH 0x0                            ; 004d1353
    ADD EAX,0x1fae8                     ; 004d1355
    PUSH EAX                            ; 004d135a
    CALL FUN_004f8dc0                   ; 004d135b
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 004d1360
    MOV ECX,dword ptr [EBX + 0x84]      ; 004d1363
        ;   Label: LAB_004d1363
    MOV EAX,[0x0061f2a4]                ; 004d1369 | DAT_0061f2a4
    PUSH ECX                            ; 004d136e
    MOV EDX,dword ptr [EAX]             ; 004d136f | DAT_01d1bca0
    PUSH EAX                            ; 004d1371 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d1372
    ADD ESP,0x8                         ; 004d1375
    TEST EAX,EAX                        ; 004d1378
    JZ 0x004d139c                       ; 004d137a
        ;   XREF to: 004d139c (CONDITIONAL_JUMP)  ; LAB_004d139c
    PUSH 0x1                            ; 004d137c
    MOV EAX,[0x01d06ab4]                ; 004d137e | DAT_01d06ab4
    PUSH 0x2                            ; 004d1383
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d1385
    PUSH 0x0                            ; 004d138c
    ADD EAX,0x1fae8                     ; 004d138e
    PUSH EAX                            ; 004d1393
    CALL FUN_004f8dc0                   ; 004d1394
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 004d1399
    MOV ESI,dword ptr [EBX + 0x88]      ; 004d139c
        ;   Label: LAB_004d139c
    MOV EAX,[0x0061f2a4]                ; 004d13a2 | DAT_0061f2a4
    PUSH ESI                            ; 004d13a7
    MOV EDX,dword ptr [EAX]             ; 004d13a8 | DAT_01d1bca0
    PUSH EAX                            ; 004d13aa | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d13ab
    ADD ESP,0x8                         ; 004d13ae
    TEST EAX,EAX                        ; 004d13b1
    JZ 0x004d13d5                       ; 004d13b3
        ;   XREF to: 004d13d5 (CONDITIONAL_JUMP)  ; LAB_004d13d5
    PUSH 0x1                            ; 004d13b5
    MOV EAX,[0x01d06ab4]                ; 004d13b7 | DAT_01d06ab4
    PUSH 0x4                            ; 004d13bc
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d13be
    PUSH 0x0                            ; 004d13c5
    ADD EAX,0x1fae8                     ; 004d13c7
    PUSH EAX                            ; 004d13cc
    CALL FUN_004f8dc0                   ; 004d13cd
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 004d13d2
    MOV EDI,dword ptr [EBX + 0x8c]      ; 004d13d5
        ;   Label: LAB_004d13d5
    MOV EAX,[0x0061f2a4]                ; 004d13db | DAT_0061f2a4
    PUSH EDI                            ; 004d13e0
    MOV EDX,dword ptr [EAX]             ; 004d13e1 | DAT_01d1bca0
    PUSH EAX                            ; 004d13e3 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d13e4
    ADD ESP,0x8                         ; 004d13e7
    TEST EAX,EAX                        ; 004d13ea
    JZ 0x004d140e                       ; 004d13ec
        ;   XREF to: 004d140e (CONDITIONAL_JUMP)  ; LAB_004d140e
    PUSH 0x1                            ; 004d13ee
    MOV EAX,[0x01d06ab4]                ; 004d13f0 | DAT_01d06ab4
    PUSH 0x3                            ; 004d13f5
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d13f7
    PUSH 0x0                            ; 004d13fe
    ADD EAX,0x1fae8                     ; 004d1400
    PUSH EAX                            ; 004d1405
    CALL FUN_004f8dc0                   ; 004d1406
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f8dc0()
    ADD ESP,0x10                        ; 004d140b
    MOV EBP,dword ptr [EBX + 0x54]      ; 004d140e
        ;   Label: LAB_004d140e
    MOV EAX,[0x0061f2a4]                ; 004d1411 | DAT_0061f2a4
    PUSH EBP                            ; 004d1416
    MOV EDX,dword ptr [EAX]             ; 004d1417 | DAT_01d1bca0
    PUSH EAX                            ; 004d1419 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d141a
    ADD ESP,0x8                         ; 004d141d
    TEST EAX,EAX                        ; 004d1420
    JNZ 0x004d1738                      ; 004d1422
        ;   XREF to: 004d1738 (CONDITIONAL_JUMP)  ; LAB_004d1738
    ADD ESP,0x14                        ; 004d1428
    POP EBP                             ; 004d142b
    POP EDI                             ; 004d142c
    POP ESI                             ; 004d142d
    POP EBX                             ; 004d142e
    RET                                 ; 004d142f
    PUSH 0x200                          ; 004d1430
        ;   Label: LAB_004d1430
    MOV EAX,[0x0061f2a4]                ; 004d1435 | DAT_0061f2a4
    PUSH EAX                            ; 004d143a | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004d143b | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d143d
    ADD ESP,0x8                         ; 004d1440
    MOV EAX,[0x0061f2a4]                ; 004d1443 | DAT_0061f2a4
    PUSH 0x201                          ; 004d1448
    MOV EDX,dword ptr [EAX]             ; 004d144d | DAT_01d1bca0
    PUSH EAX                            ; 004d144f | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004d1450
    ADD ESP,0x8                         ; 004d1453
    JMP 0x004d0efc                      ; 004d1456
        ;   XREF to: 004d0efc (UNCONDITIONAL_JUMP)  ; LAB_004d0efc
    CMP byte ptr [ECX + 0x1c50950],0x0  ; 004d145b | DAT_01c50950
        ;   Label: LAB_004d145b
    JZ 0x004d0f4c                       ; 004d1462
        ;   XREF to: 004d0f4c (CONDITIONAL_JUMP)  ; LAB_004d0f4c
    CMP dword ptr [EDX],0x3f800000      ; 004d1468
    JGE 0x004d0f4c                      ; 004d146e
        ;   XREF to: 004d0f4c (CONDITIONAL_JUMP)  ; LAB_004d0f4c
    MOV EAX,[0x0061d95c]                ; 004d1474 | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d1479 | DAT_01ccf624
    FDIV float ptr [0x005e19c4]         ; 004d147f | DAT_005e19c4
    FADD float ptr [EDX]                ; 004d1485
    FSTP float ptr [EDX]                ; 004d1487
    CMP dword ptr [EDX],0x3f800000      ; 004d1489
    JLE 0x004d0f4c                      ; 004d148f
        ;   XREF to: 004d0f4c (CONDITIONAL_JUMP)  ; LAB_004d0f4c
    MOV dword ptr [EDX],0x3f800000      ; 004d1495
    JMP 0x004d0f4c                      ; 004d149b
        ;   XREF to: 004d0f4c (UNCONDITIONAL_JUMP)  ; LAB_004d0f4c
    CMP byte ptr [ECX + 0x1c50950],0x0  ; 004d14a0 | DAT_01c50950
        ;   Label: LAB_004d14a0
    JZ 0x004d0fa5                       ; 004d14a7
        ;   XREF to: 004d0fa5 (CONDITIONAL_JUMP)  ; LAB_004d0fa5
    CMP dword ptr [EDX],0x3f800000      ; 004d14ad
    JGE 0x004d0fa5                      ; 004d14b3
        ;   XREF to: 004d0fa5 (CONDITIONAL_JUMP)  ; LAB_004d0fa5
    MOV EAX,[0x0061d95c]                ; 004d14b9 | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d14be | DAT_01ccf624
    FDIV float ptr [0x005e19c4]         ; 004d14c4 | DAT_005e19c4
    FADD float ptr [EDX]                ; 004d14ca
    FSTP float ptr [EDX]                ; 004d14cc
    CMP dword ptr [EDX],0x3f800000      ; 004d14ce
    JLE 0x004d0fa5                      ; 004d14d4
        ;   XREF to: 004d0fa5 (CONDITIONAL_JUMP)  ; LAB_004d0fa5
    MOV dword ptr [EDX],0x3f800000      ; 004d14da
    JMP 0x004d0fa5                      ; 004d14e0
        ;   XREF to: 004d0fa5 (UNCONDITIONAL_JUMP)  ; LAB_004d0fa5
    FLD float ptr [EDX]                 ; 004d14e5
        ;   Label: LAB_004d14e5
    FSUB float ptr [ESP + 0x8]          ; 004d14e7
    FLDZ                                ; 004d14eb
    FXCH                                ; 004d14ed
    FSTP float ptr [EDX]                ; 004d14ef
    FCOMP float ptr [EDX]               ; 004d14f1
    FNSTSW AX                           ; 004d14f3
    SAHF                                ; 004d14f5
    JBE 0x004d0feb                      ; 004d14f6
        ;   XREF to: 004d0feb (CONDITIONAL_JUMP)  ; LAB_004d0feb
    JMP 0x004d0fe5                      ; 004d14fc
        ;   XREF to: 004d0fe5 (UNCONDITIONAL_JUMP)  ; LAB_004d0fe5
    MOV EAX,dword ptr [EBX + 0x44]      ; 004d1501
        ;   Label: LAB_004d1501
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d1504 | DAT_01c50950
    JZ 0x004d157d                       ; 004d150b
        ;   XREF to: 004d157d (CONDITIONAL_JUMP)  ; LAB_004d157d
    FILD dword ptr [EBX + 0xb0]         ; 004d150d
        ;   Label: LAB_004d150d
    FMUL double ptr [0x005e19d4]        ; 004d1513 | DAT_005e19d4
    FMUL double ptr [0x005e19dc]        ; 004d1519 | DAT_005e19dc
    LEA EDX,[ESI + 0x28]                ; 004d151f
    MOV ECX,dword ptr [EBX + 0x44]      ; 004d1522
    MOV EAX,dword ptr [EBX + 0x40]      ; 004d1525
    FSTP float ptr [ESP + 0xc]          ; 004d1528
    CMP byte ptr [ECX + 0x1c50950],0x0  ; 004d152c | DAT_01c50950
    JZ 0x004d15bd                       ; 004d1533
        ;   XREF to: 004d15bd (CONDITIONAL_JUMP)  ; LAB_004d15bd
    FLD float ptr [EDX]                 ; 004d1539
    FCOMP float ptr [0x005e19e4]        ; 004d153b | DAT_005e19e4
    FNSTSW AX                           ; 004d1541
    SAHF                                ; 004d1543
    JBE 0x004d0feb                      ; 004d1544
        ;   XREF to: 004d0feb (CONDITIONAL_JUMP)  ; LAB_004d0feb
    MOV EAX,[0x0061d95c]                ; 004d154a | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d154f | DAT_01ccf624
    FMUL float ptr [0x005e19cc]         ; 004d1555 | DAT_005e19cc
    FDIV float ptr [ESP + 0xc]          ; 004d155b
    FSUBR float ptr [EDX]               ; 004d155f
    FST float ptr [EDX]                 ; 004d1561
    FCOMP float ptr [0x005e19e4]        ; 004d1563 | DAT_005e19e4
    FNSTSW AX                           ; 004d1569
    SAHF                                ; 004d156b
    JNC 0x004d0feb                      ; 004d156c
        ;   XREF to: 004d0feb (CONDITIONAL_JUMP)  ; LAB_004d0feb
    MOV dword ptr [EDX],0xbe800000      ; 004d1572
    JMP 0x004d0feb                      ; 004d1578
        ;   XREF to: 004d0feb (UNCONDITIONAL_JUMP)  ; LAB_004d0feb
    MOV EAX,dword ptr [EBX + 0x40]      ; 004d157d
        ;   Label: LAB_004d157d
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d1580 | DAT_01c50950
    JNZ 0x004d150d                      ; 004d1587
        ;   XREF to: 004d150d (CONDITIONAL_JUMP)  ; LAB_004d150d
    MOV EAX,[0x0061d95c]                ; 004d1589 | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d158e | DAT_01ccf624
    FMUL float ptr [0x005e19cc]         ; 004d1594 | DAT_005e19cc
    FDIV float ptr [0x005e19d0]         ; 004d159a | DAT_005e19d0
    FLDZ                                ; 004d15a0
    LEA EDX,[ESI + 0x28]                ; 004d15a2
    FXCH                                ; 004d15a5
    FSTP float ptr [ESP + 0x4]          ; 004d15a7
    FCOMP float ptr [EDX]               ; 004d15ab
    FNSTSW AX                           ; 004d15ad
    SAHF                                ; 004d15af
    JBE 0x004d1606                      ; 004d15b0
        ;   XREF to: 004d1606 (CONDITIONAL_JUMP)  ; LAB_004d1606
    FLD float ptr [EDX]                 ; 004d15b2
    FADD float ptr [ESP + 0x4]          ; 004d15b4
    JMP 0x004d0fd8                      ; 004d15b8
        ;   XREF to: 004d0fd8 (UNCONDITIONAL_JUMP)  ; LAB_004d0fd8
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d15bd | DAT_01c50950
        ;   Label: LAB_004d15bd
    JZ 0x004d0feb                       ; 004d15c4
        ;   XREF to: 004d0feb (CONDITIONAL_JUMP)  ; LAB_004d0feb
    CMP dword ptr [EDX],0x3e800000      ; 004d15ca
    JGE 0x004d0feb                      ; 004d15d0
        ;   XREF to: 004d0feb (CONDITIONAL_JUMP)  ; LAB_004d0feb
    MOV EAX,[0x0061d95c]                ; 004d15d6 | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d15db | DAT_01ccf624
    FMUL float ptr [0x005e19cc]         ; 004d15e1 | DAT_005e19cc
    FDIV float ptr [ESP + 0xc]          ; 004d15e7
    FADD float ptr [EDX]                ; 004d15eb
    FSTP float ptr [EDX]                ; 004d15ed
    CMP dword ptr [EDX],0x3e800000      ; 004d15ef
    JLE 0x004d0feb                      ; 004d15f5
        ;   XREF to: 004d0feb (CONDITIONAL_JUMP)  ; LAB_004d0feb
    MOV dword ptr [EDX],0x3e800000      ; 004d15fb
    JMP 0x004d0feb                      ; 004d1601
        ;   XREF to: 004d0feb (UNCONDITIONAL_JUMP)  ; LAB_004d0feb
    FLD float ptr [EDX]                 ; 004d1606
        ;   Label: LAB_004d1606
    FSUB float ptr [ESP + 0x4]          ; 004d1608
    FLDZ                                ; 004d160c
    FXCH                                ; 004d160e
    FSTP float ptr [EDX]                ; 004d1610
    FCOMP float ptr [EDX]               ; 004d1612
    FNSTSW AX                           ; 004d1614
    SAHF                                ; 004d1616
    JBE 0x004d0feb                      ; 004d1617
        ;   XREF to: 004d0feb (CONDITIONAL_JUMP)  ; LAB_004d0feb
    JMP 0x004d0fe5                      ; 004d161d
        ;   XREF to: 004d0fe5 (UNCONDITIONAL_JUMP)  ; LAB_004d0fe5
    MOV EAX,dword ptr [EBX + 0x78]      ; 004d1622
        ;   Label: LAB_004d1622
    CMP byte ptr [EAX + 0x1c50950],0x0  ; 004d1625 | DAT_01c50950
    JNZ 0x004d0ffb                      ; 004d162c
        ;   XREF to: 004d0ffb (CONDITIONAL_JUMP)  ; LAB_004d0ffb
    MOV EAX,[0x0061d95c]                ; 004d1632 | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d1637 | DAT_01ccf624
    FMUL float ptr [0x005e19cc]         ; 004d163d | DAT_005e19cc
    FDIV float ptr [0x005e19e8]         ; 004d1643 | DAT_005e19e8
    FLDZ                                ; 004d1649
    LEA EDX,[ESI + 0x2c]                ; 004d164b
    FXCH                                ; 004d164e
    FSTP float ptr [ESP + 0x10]         ; 004d1650
    FCOMP float ptr [EDX]               ; 004d1654
    FNSTSW AX                           ; 004d1656
    SAHF                                ; 004d1658
    JBE 0x004d16c5                      ; 004d1659
        ;   XREF to: 004d16c5 (CONDITIONAL_JUMP)  ; LAB_004d16c5
    FLD float ptr [EDX]                 ; 004d165b
    FADD float ptr [ESP + 0x10]         ; 004d165d
    FLDZ                                ; 004d1661
    FXCH                                ; 004d1663
    FSTP float ptr [EDX]                ; 004d1665
    FCOMP float ptr [EDX]               ; 004d1667
    FNSTSW AX                           ; 004d1669
    SAHF                                ; 004d166b
    JNC 0x004d105c                      ; 004d166c
        ;   XREF to: 004d105c (CONDITIONAL_JUMP)  ; LAB_004d105c
    MOV dword ptr [EDX],0x0             ; 004d1672
    JMP 0x004d105c                      ; 004d1678
        ;   XREF to: 004d105c (UNCONDITIONAL_JUMP)  ; LAB_004d105c
    CMP byte ptr [ECX + 0x1c50950],0x0  ; 004d167d | DAT_01c50950
        ;   Label: LAB_004d167d
    JZ 0x004d105c                       ; 004d1684
        ;   XREF to: 004d105c (CONDITIONAL_JUMP)  ; LAB_004d105c
    CMP dword ptr [EDX],0x3e800000      ; 004d168a
    JGE 0x004d105c                      ; 004d1690
        ;   XREF to: 004d105c (CONDITIONAL_JUMP)  ; LAB_004d105c
    MOV EAX,[0x0061d95c]                ; 004d1696 | DAT_0061d95c
    FLD float ptr [EAX + 0x294]         ; 004d169b | DAT_01ccf624
    FMUL float ptr [0x005e19cc]         ; 004d16a1 | DAT_005e19cc
    FDIV float ptr [ESP]                ; 004d16a7
    FADD float ptr [EDX]                ; 004d16aa
    FSTP float ptr [EDX]                ; 004d16ac
    CMP dword ptr [EDX],0x3e800000      ; 004d16ae
    JLE 0x004d105c                      ; 004d16b4
        ;   XREF to: 004d105c (CONDITIONAL_JUMP)  ; LAB_004d105c
    MOV dword ptr [EDX],0x3e800000      ; 004d16ba
    JMP 0x004d105c                      ; 004d16c0
        ;   XREF to: 004d105c (UNCONDITIONAL_JUMP)  ; LAB_004d105c
    FLD float ptr [EDX]                 ; 004d16c5
        ;   Label: LAB_004d16c5
    FSUB float ptr [ESP + 0x10]         ; 004d16c7
    FLDZ                                ; 004d16cb
    FXCH                                ; 004d16cd
    FSTP float ptr [EDX]                ; 004d16cf
    FCOMP float ptr [EDX]               ; 004d16d1
    FNSTSW AX                           ; 004d16d3
    SAHF                                ; 004d16d5
    JBE 0x004d105c                      ; 004d16d6
        ;   XREF to: 004d105c (CONDITIONAL_JUMP)  ; LAB_004d105c
    MOV dword ptr [EDX],0x0             ; 004d16dc
    JMP 0x004d105c                      ; 004d16e2
        ;   XREF to: 004d105c (UNCONDITIONAL_JUMP)  ; LAB_004d105c
    MOV EAX,dword ptr [EBX + 0x30]      ; 004d16e7
        ;   Label: LAB_004d16e7
    MOV AL,byte ptr [EAX + 0x1c50950]   ; 004d16ea | DAT_01c50950
    JMP 0x004d1076                      ; 004d16f0
        ;   XREF to: 004d1076 (UNCONDITIONAL_JUMP)  ; LAB_004d1076
    MOV dword ptr [ESI + 0xc],0x0       ; 004d16f5
        ;   Label: LAB_004d16f5
    JMP 0x004d10fb                      ; 004d16fc
        ;   XREF to: 004d10fb (UNCONDITIONAL_JUMP)  ; LAB_004d10fb
    MOV dword ptr [EAX],0x0             ; 004d1701
        ;   Label: LAB_004d1701
    JMP 0x004d111f                      ; 004d1707
        ;   XREF to: 004d111f (UNCONDITIONAL_JUMP)  ; LAB_004d111f
    MOV dword ptr [EAX],0x0             ; 004d170c
        ;   Label: LAB_004d170c
    JMP 0x004d1143                      ; 004d1712
        ;   XREF to: 004d1143 (UNCONDITIONAL_JUMP)  ; LAB_004d1143
    MOV dword ptr [EAX],0x0             ; 004d1717
        ;   Label: LAB_004d1717
    JMP 0x004d1167                      ; 004d171d
        ;   XREF to: 004d1167 (UNCONDITIONAL_JUMP)  ; LAB_004d1167
    MOV dword ptr [EAX],0x0             ; 004d1722
        ;   Label: LAB_004d1722
    JMP 0x004d118b                      ; 004d1728
        ;   XREF to: 004d118b (UNCONDITIONAL_JUMP)  ; LAB_004d118b
    MOV dword ptr [ESI],0x0             ; 004d172d
        ;   Label: LAB_004d172d
    JMP 0x004d11af                      ; 004d1733
        ;   XREF to: 004d11af (UNCONDITIONAL_JUMP)  ; LAB_004d11af
    MOV EAX,[0x01d06ab4]                ; 004d1738 | DAT_01d06ab4
        ;   Label: LAB_004d1738
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d173d
    PUSH EAX                            ; 004d1744
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d1745
    CALL dword ptr [EDX + 0x150]        ; 004d174b
    ADD ESP,0x4                         ; 004d1751
    ADD ESP,0x14                        ; 004d1754
    POP EBP                             ; 004d1757
    POP EDI                             ; 004d1758
    POP ESI                             ; 004d1759
    POP EBX                             ; 004d175a
    RET                                 ; 004d175b

