; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(int param_1,uint *param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_game.cpp_CGame_playerControls_FUN_0049e7d0 at 0049e806
;   core_game.cpp_CGame_processJoystickControls_FUN_0049ec80 at 0049ec98
;   core_game.cpp_CGame_processMouseControls_FUN_0049f710 at 0049f724
;
; Referenced Globals:
;   float FLOAT_005829ea = 0.01000000
;   float FLOAT_005829ee = -1
;   float FLOAT_005829f2 = 0.25
;   float FLOAT_005829f6 = 0.05000000
;   double DOUBLE_005829fa = 0.300000000000000
;   double DOUBLE_00582a02 = 0.0000152587890625
;   float FLOAT_00582a0a = -0.25
;   float FLOAT_00582a0e = 0.1000000
;   double DOUBLE_00582a12 = 0.200000000000000
;   undefined4 DAT_005b9354
;   int INT_005bac64 = 0x1cc30e4
;   undefined4 DAT_005be220
;   undefined4 DAT_005be368
;   undefined4 DAT_01c77850
;   undefined4 DAT_01cae0e8
;   ... and 5 more
;
; Called Functions:
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50
;   core_inv.cpp_CInventory_selectItem_FUN_004c0950
;   core_inv.cpp_CInventory_selectWeapon_FUN_004c0850
;   core_inv.cpp_CInventory_toggleDetailView_FUN_004c32e0
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
;   core_setdir.cpp_FUN_005125a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ee30
        ;   Label: core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30
    PUSH ESI                            ; 0049ee31
    PUSH EDI                            ; 0049ee32
    PUSH EBP                            ; 0049ee33
    SUB ESP,0x14                        ; 0049ee34
    MOV EBX,dword ptr [ESP + 0x28]      ; 0049ee37
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0049ee3b
    CMP dword ptr [EBX + 0x27c],0x0     ; 0049ee3f
    JNZ 0x0049f3e1                      ; 0049ee46
        ;   XREF to: 0049f3e1 (CONDITIONAL_JUMP)  ; LAB_0049f3e1
    MOV dword ptr [ESI + 0x20],0x0      ; 0049ee4c
        ;   Label: LAB_0049ee4c
    MOV EAX,dword ptr [EBX + 0x38]      ; 0049ee53
    LEA EDX,[ESI + 0x20]                ; 0049ee56
    MOV ECX,dword ptr [EBX + 0x3c]      ; 0049ee59
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049ee5c
    JZ 0x0049f40c                       ; 0049ee63
        ;   XREF to: 0049f40c (CONDITIONAL_JUMP)  ; LAB_0049f40c
    FLD float ptr [EDX]                 ; 0049ee69
    FCOMP float ptr [0x005829ee]        ; 0049ee6b | FLOAT_005829ee
    FNSTSW AX                           ; 0049ee71
    SAHF                                ; 0049ee73
    JBE 0x0049ee9c                      ; 0049ee74
        ;   XREF to: 0049ee9c (CONDITIONAL_JUMP)  ; LAB_0049ee9c
    MOV EAX,[0x005b9354]                ; 0049ee76 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049ee7b | DAT_01c77850
    FDIV float ptr [0x005829ea]         ; 0049ee81 | FLOAT_005829ea
    FSUBR float ptr [EDX]               ; 0049ee87
    FST float ptr [EDX]                 ; 0049ee89
    FCOMP float ptr [0x005829ee]        ; 0049ee8b | FLOAT_005829ee
    FNSTSW AX                           ; 0049ee91
    SAHF                                ; 0049ee93
    JNC 0x0049ee9c                      ; 0049ee94
        ;   XREF to: 0049ee9c (CONDITIONAL_JUMP)  ; LAB_0049ee9c
    MOV dword ptr [EDX],0xbf800000      ; 0049ee96
    MOV EAX,dword ptr [EBX + 0x34]      ; 0049ee9c
        ;   Label: LAB_0049ee9c
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049ee9f
    JZ 0x0049f4b1                       ; 0049eea6
        ;   XREF to: 0049f4b1 (CONDITIONAL_JUMP)  ; LAB_0049f4b1
    MOV EAX,dword ptr [EBX + 0x44]      ; 0049eeac
    LEA EDX,[ESI + 0x20]                ; 0049eeaf
    MOV ECX,dword ptr [EBX + 0x40]      ; 0049eeb2
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049eeb5
    JZ 0x0049f451                       ; 0049eebc
        ;   XREF to: 0049f451 (CONDITIONAL_JUMP)  ; LAB_0049f451
    FLD float ptr [EDX]                 ; 0049eec2
    FCOMP float ptr [0x005829ee]        ; 0049eec4 | FLOAT_005829ee
    FNSTSW AX                           ; 0049eeca
    SAHF                                ; 0049eecc
    JBE 0x0049eef5                      ; 0049eecd
        ;   XREF to: 0049eef5 (CONDITIONAL_JUMP)  ; LAB_0049eef5
    MOV EAX,[0x005b9354]                ; 0049eecf | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049eed4 | DAT_01c77850
    FDIV float ptr [0x005829ea]         ; 0049eeda | FLOAT_005829ea
    FSUBR float ptr [EDX]               ; 0049eee0
    FST float ptr [EDX]                 ; 0049eee2
    FCOMP float ptr [0x005829ee]        ; 0049eee4 | FLOAT_005829ee
    FNSTSW AX                           ; 0049eeea
    SAHF                                ; 0049eeec
    JNC 0x0049eef5                      ; 0049eeed
        ;   XREF to: 0049eef5 (CONDITIONAL_JUMP)  ; LAB_0049eef5
    MOV dword ptr [EDX],0xbf800000      ; 0049eeef
    MOV EAX,[0x005b9354]                ; 0049eef5 | DAT_005b9354
        ;   Label: LAB_0049eef5
    FLD float ptr [EAX + 0x264]         ; 0049eefa | DAT_01c77850
    FMUL float ptr [0x005829f2]         ; 0049ef00 | FLOAT_005829f2
    FDIV float ptr [0x005829f6]         ; 0049ef06 | FLOAT_005829f6
    FLDZ                                ; 0049ef0c
    LEA EDX,[ESI + 0x24]                ; 0049ef0e
    FXCH                                ; 0049ef11
    FSTP float ptr [ESP]                ; 0049ef13
    FCOMP float ptr [EDX]               ; 0049ef16
    FNSTSW AX                           ; 0049ef18
    SAHF                                ; 0049ef1a
    JBE 0x0049f496                      ; 0049ef1b
        ;   XREF to: 0049f496 (CONDITIONAL_JUMP)  ; LAB_0049f496
    FLD float ptr [EDX]                 ; 0049ef21
    FADD float ptr [ESP]                ; 0049ef23
    FLDZ                                ; 0049ef26
        ;   Label: LAB_0049ef26
    FXCH                                ; 0049ef28
    FSTP float ptr [EDX]                ; 0049ef2a
    FCOMP float ptr [EDX]               ; 0049ef2c
    FNSTSW AX                           ; 0049ef2e
    SAHF                                ; 0049ef30
    JNC 0x0049ef39                      ; 0049ef31
        ;   XREF to: 0049ef39 (CONDITIONAL_JUMP)  ; LAB_0049ef39
    MOV dword ptr [EDX],0x0             ; 0049ef33
        ;   Label: LAB_0049ef33
    MOV EAX,dword ptr [EBX + 0x60]      ; 0049ef39
        ;   Label: LAB_0049ef39
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049ef3c
    JZ 0x0049f5d2                       ; 0049ef43
        ;   XREF to: 0049f5d2 (CONDITIONAL_JUMP)  ; LAB_0049f5d2
    FILD dword ptr [EBX + 0xa0]         ; 0049ef49
        ;   Label: LAB_0049ef49
    FMUL double ptr [0x00582a12]        ; 0049ef4f | DOUBLE_00582a12
    FMUL double ptr [0x00582a02]        ; 0049ef55 | DOUBLE_00582a02
    LEA EDX,[ESI + 0x28]                ; 0049ef5b
    MOV ECX,dword ptr [EBX + 0x60]      ; 0049ef5e
    MOV EAX,dword ptr [EBX + 0x64]      ; 0049ef61
    FSTP float ptr [ESP + 0x8]          ; 0049ef64
    CMP byte ptr [ECX + 0x1c02598],0x0  ; 0049ef68
    JZ 0x0049f62d                       ; 0049ef6f
        ;   XREF to: 0049f62d (CONDITIONAL_JUMP)  ; LAB_0049f62d
    FLD float ptr [EDX]                 ; 0049ef75
    FCOMP float ptr [0x00582a0a]        ; 0049ef77 | FLOAT_00582a0a
    FNSTSW AX                           ; 0049ef7d
    SAHF                                ; 0049ef7f
    JBE 0x0049efac                      ; 0049ef80
        ;   XREF to: 0049efac (CONDITIONAL_JUMP)  ; LAB_0049efac
    MOV EAX,[0x005b9354]                ; 0049ef82 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049ef87 | DAT_01c77850
    FMUL float ptr [0x005829f2]         ; 0049ef8d | FLOAT_005829f2
    FDIV float ptr [ESP + 0x8]          ; 0049ef93
    FSUBR float ptr [EDX]               ; 0049ef97
    FST float ptr [EDX]                 ; 0049ef99
    FCOMP float ptr [0x00582a0a]        ; 0049ef9b | FLOAT_00582a0a
    FNSTSW AX                           ; 0049efa1
    SAHF                                ; 0049efa3
    JNC 0x0049efac                      ; 0049efa4
        ;   XREF to: 0049efac (CONDITIONAL_JUMP)  ; LAB_0049efac
    MOV dword ptr [EDX],0xbe800000      ; 0049efa6
    CMP dword ptr [EBX + 0x98],0x0      ; 0049efac
        ;   Label: LAB_0049efac
    JZ 0x0049f698                       ; 0049efb3
        ;   XREF to: 0049f698 (CONDITIONAL_JUMP)  ; LAB_0049f698
    MOV EAX,dword ptr [EBX + 0x30]      ; 0049efb9
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049efbc
    SETZ AL                             ; 0049efc3
    AND EAX,0xff                        ; 0049efc6
        ;   Label: LAB_0049efc6
    MOV dword ptr [ESI + 0x8],EAX       ; 0049efcb
    MOV EDX,dword ptr [EBX + 0x28]      ; 0049efce
    MOV AL,byte ptr [EDX + 0x1c781c0]   ; 0049efd1
    CMP AL,byte ptr [EDX + 0x1c02598]   ; 0049efd7
    JZ 0x0049efe9                       ; 0049efdd
        ;   XREF to: 0049efe9 (CONDITIONAL_JUMP)  ; LAB_0049efe9
    XOR EAX,EAX                         ; 0049efdf
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 0049efe1
    MOV dword ptr [ESI],EAX             ; 0049efe7
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0049efe9
        ;   Label: LAB_0049efe9
    MOV AL,byte ptr [EDX + 0x1c781c0]   ; 0049efec
    MOV AH,byte ptr [EDX + 0x1c02598]   ; 0049eff2
    LEA ECX,[ESI + 0x4]                 ; 0049eff8
    CMP AL,AH                           ; 0049effb
    JZ 0x0049f009                       ; 0049effd
        ;   XREF to: 0049f009 (CONDITIONAL_JUMP)  ; LAB_0049f009
    XOR EAX,EAX                         ; 0049efff
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 0049f001
    MOV dword ptr [ECX],EAX             ; 0049f007
    MOV EAX,[0x01cae0e8]                ; 0049f009 | DAT_01cae0e8
        ;   Label: LAB_0049f009
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f00e
    PUSH EAX                            ; 0049f015
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0049f016
    CALL dword ptr [EDX + 0x104]        ; 0049f01c
    ADD ESP,0x4                         ; 0049f022
    TEST EAX,EAX                        ; 0049f025
    JNZ 0x0049f6a6                      ; 0049f027
        ;   XREF to: 0049f6a6 (CONDITIONAL_JUMP)  ; LAB_0049f6a6
    MOV EDX,dword ptr [EBX + 0x48]      ; 0049f02d
    MOV AL,byte ptr [EDX + 0x1c781c0]   ; 0049f030
    MOV AH,byte ptr [EDX + 0x1c02598]   ; 0049f036
    LEA ECX,[ESI + 0xc]                 ; 0049f03c
    CMP AL,AH                           ; 0049f03f
    JZ 0x0049f04d                       ; 0049f041
        ;   XREF to: 0049f04d (CONDITIONAL_JUMP)  ; LAB_0049f04d
    XOR EAX,EAX                         ; 0049f043
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 0049f045
    MOV dword ptr [ECX],EAX             ; 0049f04b
    MOV EDX,dword ptr [EBX + 0x4c]      ; 0049f04d
        ;   Label: LAB_0049f04d
    MOV CL,byte ptr [EDX + 0x1c781c0]   ; 0049f050
    MOV CH,byte ptr [EDX + 0x1c02598]   ; 0049f056
    LEA EAX,[ESI + 0x10]                ; 0049f05c
    CMP CL,CH                           ; 0049f05f
    JZ 0x0049f6b2                       ; 0049f061
        ;   XREF to: 0049f6b2 (CONDITIONAL_JUMP)  ; LAB_0049f6b2
    MOV DL,CH                           ; 0049f067
    AND EDX,0xff                        ; 0049f069
    MOV dword ptr [EAX],EDX             ; 0049f06f
    MOV EDX,dword ptr [EBX + 0x50]      ; 0049f071
        ;   Label: LAB_0049f071
    MOV CL,byte ptr [EDX + 0x1c781c0]   ; 0049f074
    MOV CH,byte ptr [EDX + 0x1c02598]   ; 0049f07a
    LEA EAX,[ESI + 0x14]                ; 0049f080
    CMP CL,CH                           ; 0049f083
    JZ 0x0049f6bd                       ; 0049f085
        ;   XREF to: 0049f6bd (CONDITIONAL_JUMP)  ; LAB_0049f6bd
    MOV DL,CH                           ; 0049f08b
    AND EDX,0xff                        ; 0049f08d
    MOV dword ptr [EAX],EDX             ; 0049f093
    MOV EDX,dword ptr [EBX + 0x58]      ; 0049f095
        ;   Label: LAB_0049f095
    MOV CL,byte ptr [EDX + 0x1c781c0]   ; 0049f098
    MOV CH,byte ptr [EDX + 0x1c02598]   ; 0049f09e
    LEA EAX,[ESI + 0x18]                ; 0049f0a4
    CMP CL,CH                           ; 0049f0a7
    JZ 0x0049f6c8                       ; 0049f0a9
        ;   XREF to: 0049f6c8 (CONDITIONAL_JUMP)  ; LAB_0049f6c8
    MOV DL,CH                           ; 0049f0af
    AND EDX,0xff                        ; 0049f0b1
    MOV dword ptr [EAX],EDX             ; 0049f0b7
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0049f0b9
        ;   Label: LAB_0049f0b9
    MOV AL,byte ptr [EDX + 0x1c781c0]   ; 0049f0bc
    MOV AH,byte ptr [EDX + 0x1c02598]   ; 0049f0c2
    ADD ESI,0x1c                        ; 0049f0c8
    CMP AL,AH                           ; 0049f0cb
    JZ 0x0049f6d3                       ; 0049f0cd
        ;   XREF to: 0049f6d3 (CONDITIONAL_JUMP)  ; LAB_0049f6d3
    XOR EAX,EAX                         ; 0049f0d3
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 0049f0d5
    MOV dword ptr [ESI],EAX             ; 0049f0db
    MOV ECX,dword ptr [EBX + 0x7c]      ; 0049f0dd
        ;   Label: LAB_0049f0dd
    MOV EAX,[0x005bac64]                ; 0049f0e0 | INT_005bac64
    PUSH ECX                            ; 0049f0e5
    MOV EDX,dword ptr [EAX]             ; 0049f0e6 | DAT_01cc30e4
    PUSH EAX                            ; 0049f0e8 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f0e9
    ADD ESP,0x8                         ; 0049f0ec
    TEST EAX,EAX                        ; 0049f0ef
    JZ 0x0049f113                       ; 0049f0f1
        ;   XREF to: 0049f113 (CONDITIONAL_JUMP)  ; LAB_0049f113
    PUSH 0x1                            ; 0049f0f3
    MOV EAX,[0x01cae0e8]                ; 0049f0f5 | DAT_01cae0e8
    PUSH 0x5                            ; 0049f0fa
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f0fc
    PUSH 0x0                            ; 0049f103
    ADD EAX,0x1f5a0                     ; 0049f105
    PUSH EAX                            ; 0049f10a
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 0049f10b
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectWeapon_FUN_004c0850()
    ADD ESP,0x10                        ; 0049f110
    MOV ESI,dword ptr [EBX + 0x80]      ; 0049f113
        ;   Label: LAB_0049f113
    MOV EAX,[0x005bac64]                ; 0049f119 | INT_005bac64
    PUSH ESI                            ; 0049f11e
    MOV EDX,dword ptr [EAX]             ; 0049f11f | DAT_01cc30e4
    PUSH EAX                            ; 0049f121 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f122
    ADD ESP,0x8                         ; 0049f125
    TEST EAX,EAX                        ; 0049f128
    JZ 0x0049f14c                       ; 0049f12a
        ;   XREF to: 0049f14c (CONDITIONAL_JUMP)  ; LAB_0049f14c
    PUSH -0x1                           ; 0049f12c
    MOV EAX,[0x01cae0e8]                ; 0049f12e | DAT_01cae0e8
    PUSH 0x5                            ; 0049f133
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f135
    PUSH 0x0                            ; 0049f13c
    ADD EAX,0x1f5a0                     ; 0049f13e
    PUSH EAX                            ; 0049f143
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 0049f144
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectWeapon_FUN_004c0850()
    ADD ESP,0x10                        ; 0049f149
    MOV EDI,dword ptr [EBX + 0x84]      ; 0049f14c
        ;   Label: LAB_0049f14c
    MOV EAX,[0x005bac64]                ; 0049f152 | INT_005bac64
    PUSH EDI                            ; 0049f157
    MOV EDX,dword ptr [EAX]             ; 0049f158 | DAT_01cc30e4
    PUSH EAX                            ; 0049f15a | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f15b
    ADD ESP,0x8                         ; 0049f15e
    TEST EAX,EAX                        ; 0049f161
    JZ 0x0049f181                       ; 0049f163
        ;   XREF to: 0049f181 (CONDITIONAL_JUMP)  ; LAB_0049f181
    MOV EAX,[0x01cae0e8]                ; 0049f165 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f16a
    PUSH 0x1                            ; 0049f171
    ADD EAX,0x1f5a0                     ; 0049f173
    PUSH EAX                            ; 0049f178
    CALL core_inv.cpp_CInventory_selectItem_FUN_004c0950 ; 0049f179
        ;   XREF to: 004c0950 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectItem_FUN_004c0950()
    ADD ESP,0x8                         ; 0049f17e
    MOV EBP,dword ptr [EBX + 0x88]      ; 0049f181
        ;   Label: LAB_0049f181
    MOV EAX,[0x005bac64]                ; 0049f187 | INT_005bac64
    PUSH EBP                            ; 0049f18c
    MOV EDX,dword ptr [EAX]             ; 0049f18d | DAT_01cc30e4
    PUSH EAX                            ; 0049f18f | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f190
    ADD ESP,0x8                         ; 0049f193
    TEST EAX,EAX                        ; 0049f196
    JZ 0x0049f1b6                       ; 0049f198
        ;   XREF to: 0049f1b6 (CONDITIONAL_JUMP)  ; LAB_0049f1b6
    MOV EAX,[0x01cae0e8]                ; 0049f19a | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f19f
    PUSH -0x1                           ; 0049f1a6
    ADD EAX,0x1f5a0                     ; 0049f1a8
    PUSH EAX                            ; 0049f1ad
    CALL core_inv.cpp_CInventory_selectItem_FUN_004c0950 ; 0049f1ae
        ;   XREF to: 004c0950 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectItem_FUN_004c0950()
    ADD ESP,0x8                         ; 0049f1b3
    MOV ECX,dword ptr [EBX + 0x90]      ; 0049f1b6
        ;   Label: LAB_0049f1b6
    MOV EAX,[0x005bac64]                ; 0049f1bc | INT_005bac64
    PUSH ECX                            ; 0049f1c1
    MOV EDX,dword ptr [EAX]             ; 0049f1c2 | DAT_01cc30e4
    PUSH EAX                            ; 0049f1c4 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f1c5
    ADD ESP,0x8                         ; 0049f1c8
    TEST EAX,EAX                        ; 0049f1cb
    JZ 0x0049f1eb                       ; 0049f1cd
        ;   XREF to: 0049f1eb (CONDITIONAL_JUMP)  ; LAB_0049f1eb
    MOV EAX,[0x01cae0e8]                ; 0049f1cf | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f1d4
    PUSH 0x1                            ; 0049f1db
    ADD EAX,0x1f5a0                     ; 0049f1dd
    PUSH EAX                            ; 0049f1e2
    CALL core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50 ; 0049f1e3
        ;   XREF to: 004c0a50 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50()
    ADD ESP,0x8                         ; 0049f1e8
    MOV ESI,dword ptr [EBX + 0x8c]      ; 0049f1eb
        ;   Label: LAB_0049f1eb
    MOV EAX,[0x005bac64]                ; 0049f1f1 | INT_005bac64
    PUSH ESI                            ; 0049f1f6
    MOV EDX,dword ptr [EAX]             ; 0049f1f7 | DAT_01cc30e4
    PUSH EAX                            ; 0049f1f9 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f1fa
    ADD ESP,0x8                         ; 0049f1fd
    TEST EAX,EAX                        ; 0049f200
    JZ 0x0049f21e                       ; 0049f202
        ;   XREF to: 0049f21e (CONDITIONAL_JUMP)  ; LAB_0049f21e
    MOV EAX,[0x01cae0e8]                ; 0049f204 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f209
    ADD EAX,0x1f5a0                     ; 0049f210
    PUSH EAX                            ; 0049f215
    CALL core_inv.cpp_CInventory_toggleDetailView_FUN_004c32e0 ; 0049f216
        ;   XREF to: 004c32e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_toggleDetailView_FUN_004c32e0()
    ADD ESP,0x4                         ; 0049f21b
    MOV EDI,dword ptr [EBX + 0x68]      ; 0049f21e
        ;   Label: LAB_0049f21e
    MOV EAX,[0x005bac64]                ; 0049f221 | INT_005bac64
    PUSH EDI                            ; 0049f226
    MOV EDX,dword ptr [EAX]             ; 0049f227 | DAT_01cc30e4
    PUSH EAX                            ; 0049f229 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f22a
    ADD ESP,0x8                         ; 0049f22d
    TEST EAX,EAX                        ; 0049f230
    JZ 0x0049f254                       ; 0049f232
        ;   XREF to: 0049f254 (CONDITIONAL_JUMP)  ; LAB_0049f254
    PUSH 0x1                            ; 0049f234
    MOV EAX,[0x01cae0e8]                ; 0049f236 | DAT_01cae0e8
    PUSH 0x0                            ; 0049f23b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f23d
    PUSH 0x0                            ; 0049f244
    ADD EAX,0x1f5a0                     ; 0049f246
    PUSH EAX                            ; 0049f24b
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 0049f24c
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectWeapon_FUN_004c0850()
    ADD ESP,0x10                        ; 0049f251
    MOV EBP,dword ptr [EBX + 0x6c]      ; 0049f254
        ;   Label: LAB_0049f254
    MOV EAX,[0x005bac64]                ; 0049f257 | INT_005bac64
    PUSH EBP                            ; 0049f25c
    MOV EDX,dword ptr [EAX]             ; 0049f25d | DAT_01cc30e4
    PUSH EAX                            ; 0049f25f | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f260
    ADD ESP,0x8                         ; 0049f263
    TEST EAX,EAX                        ; 0049f266
    JZ 0x0049f28a                       ; 0049f268
        ;   XREF to: 0049f28a (CONDITIONAL_JUMP)  ; LAB_0049f28a
    PUSH 0x1                            ; 0049f26a
    MOV EAX,[0x01cae0e8]                ; 0049f26c | DAT_01cae0e8
    PUSH 0x1                            ; 0049f271
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f273
    PUSH 0x0                            ; 0049f27a
    ADD EAX,0x1f5a0                     ; 0049f27c
    PUSH EAX                            ; 0049f281
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 0049f282
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectWeapon_FUN_004c0850()
    ADD ESP,0x10                        ; 0049f287
    MOV ECX,dword ptr [EBX + 0x70]      ; 0049f28a
        ;   Label: LAB_0049f28a
    MOV EDX,dword ptr [0x005bac64]      ; 0049f28d | INT_005bac64
    PUSH ECX                            ; 0049f293
    MOV EAX,dword ptr [EDX]             ; 0049f294 | DAT_01cc30e4
    PUSH EDX                            ; 0049f296 | DAT_01cc30e4
    CALL dword ptr [EAX + 0x4]          ; 0049f297
    ADD ESP,0x8                         ; 0049f29a
    TEST EAX,EAX                        ; 0049f29d
    JZ 0x0049f2c1                       ; 0049f29f
        ;   XREF to: 0049f2c1 (CONDITIONAL_JUMP)  ; LAB_0049f2c1
    PUSH 0x1                            ; 0049f2a1
    MOV EAX,[0x01cae0e8]                ; 0049f2a3 | DAT_01cae0e8
    PUSH 0x2                            ; 0049f2a8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f2aa
    PUSH 0x0                            ; 0049f2b1
    ADD EAX,0x1f5a0                     ; 0049f2b3
    PUSH EAX                            ; 0049f2b8
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 0049f2b9
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectWeapon_FUN_004c0850()
    ADD ESP,0x10                        ; 0049f2be
    MOV ESI,dword ptr [EBX + 0x74]      ; 0049f2c1
        ;   Label: LAB_0049f2c1
    MOV EAX,[0x005bac64]                ; 0049f2c4 | INT_005bac64
    PUSH ESI                            ; 0049f2c9
    MOV EDX,dword ptr [EAX]             ; 0049f2ca | DAT_01cc30e4
    PUSH EAX                            ; 0049f2cc | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f2cd
    ADD ESP,0x8                         ; 0049f2d0
    TEST EAX,EAX                        ; 0049f2d3
    JZ 0x0049f2f7                       ; 0049f2d5
        ;   XREF to: 0049f2f7 (CONDITIONAL_JUMP)  ; LAB_0049f2f7
    PUSH 0x1                            ; 0049f2d7
    MOV EAX,[0x01cae0e8]                ; 0049f2d9 | DAT_01cae0e8
    PUSH 0x4                            ; 0049f2de
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f2e0
    PUSH 0x0                            ; 0049f2e7
    ADD EAX,0x1f5a0                     ; 0049f2e9
    PUSH EAX                            ; 0049f2ee
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 0049f2ef
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectWeapon_FUN_004c0850()
    ADD ESP,0x10                        ; 0049f2f4
    MOV EDI,dword ptr [EBX + 0x78]      ; 0049f2f7
        ;   Label: LAB_0049f2f7
    MOV EAX,[0x005bac64]                ; 0049f2fa | INT_005bac64
    PUSH EDI                            ; 0049f2ff
    MOV EDX,dword ptr [EAX]             ; 0049f300 | DAT_01cc30e4
    PUSH EAX                            ; 0049f302 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f303
    ADD ESP,0x8                         ; 0049f306
    TEST EAX,EAX                        ; 0049f309
    JZ 0x0049f32d                       ; 0049f30b
        ;   XREF to: 0049f32d (CONDITIONAL_JUMP)  ; LAB_0049f32d
    PUSH 0x1                            ; 0049f30d
    MOV EAX,[0x01cae0e8]                ; 0049f30f | DAT_01cae0e8
    PUSH 0x3                            ; 0049f314
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049f316
    PUSH 0x0                            ; 0049f31d
    ADD EAX,0x1f5a0                     ; 0049f31f
    PUSH EAX                            ; 0049f324
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 0049f325
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectWeapon_FUN_004c0850()
    ADD ESP,0x10                        ; 0049f32a
    MOV EBP,dword ptr [EBX + 0x54]      ; 0049f32d
        ;   Label: LAB_0049f32d
    MOV EAX,[0x005bac64]                ; 0049f330 | INT_005bac64
    PUSH EBP                            ; 0049f335
    MOV EDX,dword ptr [EAX]             ; 0049f336 | DAT_01cc30e4
    PUSH EAX                            ; 0049f338 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f339
    ADD ESP,0x8                         ; 0049f33c
    TEST EAX,EAX                        ; 0049f33f
    JZ 0x0049f3d9                       ; 0049f341
        ;   XREF to: 0049f3d9 (CONDITIONAL_JUMP)  ; LAB_0049f3d9
    CMP dword ptr [EBX + 0x240],0x0     ; 0049f347
    SETZ AL                             ; 0049f34e
    AND EAX,0xff                        ; 0049f351
    MOV dword ptr [EBX + 0x240],EAX     ; 0049f356
    JZ 0x0049f6de                       ; 0049f35c
        ;   XREF to: 0049f6de (CONDITIONAL_JUMP)  ; LAB_0049f6de
    MOV EAX,[0x01cae0e8]                ; 0049f362 | DAT_01cae0e8
    SHL EAX,0x2                         ; 0049f367
    MOV ESI,dword ptr [EAX + 0x1cae0d8] ; 0049f36a
    TEST ESI,ESI                        ; 0049f370
    JZ 0x0049f6de                       ; 0049f372
        ;   XREF to: 0049f6de (CONDITIONAL_JUMP)  ; LAB_0049f6de
    PUSH ESI                            ; 0049f378
    MOV EDX,dword ptr [ESI + 0x14c]     ; 0049f379
    CALL dword ptr [EDX + 0x104]        ; 0049f37f
    ADD ESP,0x4                         ; 0049f385
    TEST EAX,EAX                        ; 0049f388
    JZ 0x0049f6de                       ; 0049f38a
        ;   XREF to: 0049f6de (CONDITIONAL_JUMP)  ; LAB_0049f6de
    MOV dword ptr [EBX + 0x240],0x0     ; 0049f390
    MOV EDX,dword ptr [0x005be220]      ; 0049f39a | DAT_005be220
        ;   Label: LAB_0049f39a
    PUSH 0x1                            ; 0049f3a0
    MOV EBP,dword ptr [EDX + 0xc]       ; 0049f3a2 | DAT_01e56dac
    PUSH EBP                            ; 0049f3a5
    MOV EAX,[0x005be368]                ; 0049f3a6 | DAT_005be368
    PUSH EAX                            ; 0049f3ab | DAT_01e57284
    MOV EBX,dword ptr [EAX + 0x15aabc]  ; 0049f3ac | DAT_01fb1d40
    CALL core_setdir.cpp_FUN_005125a0   ; 0049f3b2
        ;   XREF to: 005125a0 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_005125a0()
    MOV EAX,[0x005be220]                ; 0049f3b7 | DAT_005be220
    MOV dword ptr [EAX + 0x10],0x0      ; 0049f3bc | DAT_01e56db0
    MOV EAX,[0x005be368]                ; 0049f3c3 | DAT_005be368 | DAT_01e57284
    MOV EDX,dword ptr [EAX + 0x15aabc]  ; 0049f3c8 | DAT_01fb1d40
    ADD ESP,0xc                         ; 0049f3ce
    CMP EBX,EDX                         ; 0049f3d1
    JZ 0x0049f6f3                       ; 0049f3d3
        ;   XREF to: 0049f6f3 (CONDITIONAL_JUMP)  ; LAB_0049f6f3
    ADD ESP,0x14                        ; 0049f3d9
        ;   Label: LAB_0049f3d9
    POP EBP                             ; 0049f3dc
    POP EDI                             ; 0049f3dd
    POP ESI                             ; 0049f3de
    POP EBX                             ; 0049f3df
    RET                                 ; 0049f3e0
    PUSH 0x200                          ; 0049f3e1
        ;   Label: LAB_0049f3e1
    MOV EAX,[0x005bac64]                ; 0049f3e6 | INT_005bac64
    PUSH EAX                            ; 0049f3eb | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0049f3ec | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f3ee
    ADD ESP,0x8                         ; 0049f3f1
    MOV EAX,[0x005bac64]                ; 0049f3f4 | INT_005bac64
    PUSH 0x201                          ; 0049f3f9
    MOV EDX,dword ptr [EAX]             ; 0049f3fe | DAT_01cc30e4
    PUSH EAX                            ; 0049f400 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 0049f401
    ADD ESP,0x8                         ; 0049f404
    JMP 0x0049ee4c                      ; 0049f407
        ;   XREF to: 0049ee4c (UNCONDITIONAL_JUMP)  ; LAB_0049ee4c
    CMP byte ptr [ECX + 0x1c02598],0x0  ; 0049f40c
        ;   Label: LAB_0049f40c
    JZ 0x0049ee9c                       ; 0049f413
        ;   XREF to: 0049ee9c (CONDITIONAL_JUMP)  ; LAB_0049ee9c
    CMP dword ptr [EDX],0x3f800000      ; 0049f419
    JGE 0x0049ee9c                      ; 0049f41f
        ;   XREF to: 0049ee9c (CONDITIONAL_JUMP)  ; LAB_0049ee9c
    MOV EAX,[0x005b9354]                ; 0049f425 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049f42a | DAT_01c77850
    FDIV float ptr [0x005829ea]         ; 0049f430 | FLOAT_005829ea
    FADD float ptr [EDX]                ; 0049f436
    FSTP float ptr [EDX]                ; 0049f438
    CMP dword ptr [EDX],0x3f800000      ; 0049f43a
    JLE 0x0049ee9c                      ; 0049f440
        ;   XREF to: 0049ee9c (CONDITIONAL_JUMP)  ; LAB_0049ee9c
    MOV dword ptr [EDX],0x3f800000      ; 0049f446
    JMP 0x0049ee9c                      ; 0049f44c
        ;   XREF to: 0049ee9c (UNCONDITIONAL_JUMP)  ; LAB_0049ee9c
    CMP byte ptr [ECX + 0x1c02598],0x0  ; 0049f451
        ;   Label: LAB_0049f451
    JZ 0x0049eef5                       ; 0049f458
        ;   XREF to: 0049eef5 (CONDITIONAL_JUMP)  ; LAB_0049eef5
    CMP dword ptr [EDX],0x3f800000      ; 0049f45e
    JGE 0x0049eef5                      ; 0049f464
        ;   XREF to: 0049eef5 (CONDITIONAL_JUMP)  ; LAB_0049eef5
    MOV EAX,[0x005b9354]                ; 0049f46a | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049f46f | DAT_01c77850
    FDIV float ptr [0x005829ea]         ; 0049f475 | FLOAT_005829ea
    FADD float ptr [EDX]                ; 0049f47b
    FSTP float ptr [EDX]                ; 0049f47d
    CMP dword ptr [EDX],0x3f800000      ; 0049f47f
    JLE 0x0049eef5                      ; 0049f485
        ;   XREF to: 0049eef5 (CONDITIONAL_JUMP)  ; LAB_0049eef5
    MOV dword ptr [EDX],0x3f800000      ; 0049f48b
    JMP 0x0049eef5                      ; 0049f491
        ;   XREF to: 0049eef5 (UNCONDITIONAL_JUMP)  ; LAB_0049eef5
    FLD float ptr [EDX]                 ; 0049f496
        ;   Label: LAB_0049f496
    FSUB float ptr [ESP]                ; 0049f498
    FLDZ                                ; 0049f49b
    FXCH                                ; 0049f49d
    FSTP float ptr [EDX]                ; 0049f49f
    FCOMP float ptr [EDX]               ; 0049f4a1
    FNSTSW AX                           ; 0049f4a3
    SAHF                                ; 0049f4a5
    JBE 0x0049ef39                      ; 0049f4a6
        ;   XREF to: 0049ef39 (CONDITIONAL_JUMP)  ; LAB_0049ef39
    JMP 0x0049ef33                      ; 0049f4ac
        ;   XREF to: 0049ef33 (UNCONDITIONAL_JUMP)  ; LAB_0049ef33
    MOV EAX,dword ptr [EBX + 0x44]      ; 0049f4b1
        ;   Label: LAB_0049f4b1
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049f4b4
    JZ 0x0049f52d                       ; 0049f4bb
        ;   XREF to: 0049f52d (CONDITIONAL_JUMP)  ; LAB_0049f52d
    FILD dword ptr [EBX + 0x9c]         ; 0049f4bd
        ;   Label: LAB_0049f4bd
    FMUL double ptr [0x005829fa]        ; 0049f4c3 | DOUBLE_005829fa
    FMUL double ptr [0x00582a02]        ; 0049f4c9 | DOUBLE_00582a02
    LEA EDX,[ESI + 0x24]                ; 0049f4cf
    MOV ECX,dword ptr [EBX + 0x44]      ; 0049f4d2
    MOV EAX,dword ptr [EBX + 0x40]      ; 0049f4d5
    FSTP float ptr [ESP + 0x10]         ; 0049f4d8
    CMP byte ptr [ECX + 0x1c02598],0x0  ; 0049f4dc
    JZ 0x0049f56d                       ; 0049f4e3
        ;   XREF to: 0049f56d (CONDITIONAL_JUMP)  ; LAB_0049f56d
    FLD float ptr [EDX]                 ; 0049f4e9
    FCOMP float ptr [0x00582a0a]        ; 0049f4eb | FLOAT_00582a0a
    FNSTSW AX                           ; 0049f4f1
    SAHF                                ; 0049f4f3
    JBE 0x0049ef39                      ; 0049f4f4
        ;   XREF to: 0049ef39 (CONDITIONAL_JUMP)  ; LAB_0049ef39
    MOV EAX,[0x005b9354]                ; 0049f4fa | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049f4ff | DAT_01c77850
    FMUL float ptr [0x005829f2]         ; 0049f505 | FLOAT_005829f2
    FDIV float ptr [ESP + 0x10]         ; 0049f50b
    FSUBR float ptr [EDX]               ; 0049f50f
    FST float ptr [EDX]                 ; 0049f511
    FCOMP float ptr [0x00582a0a]        ; 0049f513 | FLOAT_00582a0a
    FNSTSW AX                           ; 0049f519
    SAHF                                ; 0049f51b
    JNC 0x0049ef39                      ; 0049f51c
        ;   XREF to: 0049ef39 (CONDITIONAL_JUMP)  ; LAB_0049ef39
    MOV dword ptr [EDX],0xbe800000      ; 0049f522
    JMP 0x0049ef39                      ; 0049f528
        ;   XREF to: 0049ef39 (UNCONDITIONAL_JUMP)  ; LAB_0049ef39
    MOV EAX,dword ptr [EBX + 0x40]      ; 0049f52d
        ;   Label: LAB_0049f52d
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049f530
    JNZ 0x0049f4bd                      ; 0049f537
        ;   XREF to: 0049f4bd (CONDITIONAL_JUMP)  ; LAB_0049f4bd
    MOV EAX,[0x005b9354]                ; 0049f539 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049f53e | DAT_01c77850
    FMUL float ptr [0x005829f2]         ; 0049f544 | FLOAT_005829f2
    FDIV float ptr [0x005829f6]         ; 0049f54a | FLOAT_005829f6
    FLDZ                                ; 0049f550
    LEA EDX,[ESI + 0x24]                ; 0049f552
    FXCH                                ; 0049f555
    FSTP float ptr [ESP + 0x4]          ; 0049f557
    FCOMP float ptr [EDX]               ; 0049f55b
    FNSTSW AX                           ; 0049f55d
    SAHF                                ; 0049f55f
    JBE 0x0049f5b6                      ; 0049f560
        ;   XREF to: 0049f5b6 (CONDITIONAL_JUMP)  ; LAB_0049f5b6
    FLD float ptr [EDX]                 ; 0049f562
    FADD float ptr [ESP + 0x4]          ; 0049f564
    JMP 0x0049ef26                      ; 0049f568
        ;   XREF to: 0049ef26 (UNCONDITIONAL_JUMP)  ; LAB_0049ef26
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049f56d
        ;   Label: LAB_0049f56d
    JZ 0x0049ef39                       ; 0049f574
        ;   XREF to: 0049ef39 (CONDITIONAL_JUMP)  ; LAB_0049ef39
    CMP dword ptr [EDX],0x3e800000      ; 0049f57a
    JGE 0x0049ef39                      ; 0049f580
        ;   XREF to: 0049ef39 (CONDITIONAL_JUMP)  ; LAB_0049ef39
    MOV EAX,[0x005b9354]                ; 0049f586 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049f58b | DAT_01c77850
    FMUL float ptr [0x005829f2]         ; 0049f591 | FLOAT_005829f2
    FDIV float ptr [ESP + 0x10]         ; 0049f597
    FADD float ptr [EDX]                ; 0049f59b
    FSTP float ptr [EDX]                ; 0049f59d
    CMP dword ptr [EDX],0x3e800000      ; 0049f59f
    JLE 0x0049ef39                      ; 0049f5a5
        ;   XREF to: 0049ef39 (CONDITIONAL_JUMP)  ; LAB_0049ef39
    MOV dword ptr [EDX],0x3e800000      ; 0049f5ab
    JMP 0x0049ef39                      ; 0049f5b1
        ;   XREF to: 0049ef39 (UNCONDITIONAL_JUMP)  ; LAB_0049ef39
    FLD float ptr [EDX]                 ; 0049f5b6
        ;   Label: LAB_0049f5b6
    FSUB float ptr [ESP + 0x4]          ; 0049f5b8
    FLDZ                                ; 0049f5bc
    FXCH                                ; 0049f5be
    FSTP float ptr [EDX]                ; 0049f5c0
    FCOMP float ptr [EDX]               ; 0049f5c2
    FNSTSW AX                           ; 0049f5c4
    SAHF                                ; 0049f5c6
    JBE 0x0049ef39                      ; 0049f5c7
        ;   XREF to: 0049ef39 (CONDITIONAL_JUMP)  ; LAB_0049ef39
    JMP 0x0049ef33                      ; 0049f5cd
        ;   XREF to: 0049ef33 (UNCONDITIONAL_JUMP)  ; LAB_0049ef33
    MOV EAX,dword ptr [EBX + 0x64]      ; 0049f5d2
        ;   Label: LAB_0049f5d2
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049f5d5
    JNZ 0x0049ef49                      ; 0049f5dc
        ;   XREF to: 0049ef49 (CONDITIONAL_JUMP)  ; LAB_0049ef49
    MOV EAX,[0x005b9354]                ; 0049f5e2 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049f5e7 | DAT_01c77850
    FMUL float ptr [0x005829f2]         ; 0049f5ed | FLOAT_005829f2
    FDIV float ptr [0x00582a0e]         ; 0049f5f3 | FLOAT_00582a0e
    FLDZ                                ; 0049f5f9
    LEA EDX,[ESI + 0x28]                ; 0049f5fb
    FXCH                                ; 0049f5fe
    FSTP float ptr [ESP + 0xc]          ; 0049f600
    FCOMP float ptr [EDX]               ; 0049f604
    FNSTSW AX                           ; 0049f606
    SAHF                                ; 0049f608
    JBE 0x0049f676                      ; 0049f609
        ;   XREF to: 0049f676 (CONDITIONAL_JUMP)  ; LAB_0049f676
    FLD float ptr [EDX]                 ; 0049f60b
    FADD float ptr [ESP + 0xc]          ; 0049f60d
    FLDZ                                ; 0049f611
    FXCH                                ; 0049f613
    FSTP float ptr [EDX]                ; 0049f615
    FCOMP float ptr [EDX]               ; 0049f617
    FNSTSW AX                           ; 0049f619
    SAHF                                ; 0049f61b
    JNC 0x0049efac                      ; 0049f61c
        ;   XREF to: 0049efac (CONDITIONAL_JUMP)  ; LAB_0049efac
    MOV dword ptr [EDX],0x0             ; 0049f622
    JMP 0x0049efac                      ; 0049f628
        ;   XREF to: 0049efac (UNCONDITIONAL_JUMP)  ; LAB_0049efac
    CMP byte ptr [EAX + 0x1c02598],0x0  ; 0049f62d
        ;   Label: LAB_0049f62d
    JZ 0x0049efac                       ; 0049f634
        ;   XREF to: 0049efac (CONDITIONAL_JUMP)  ; LAB_0049efac
    CMP dword ptr [EDX],0x3e800000      ; 0049f63a
    JGE 0x0049efac                      ; 0049f640
        ;   XREF to: 0049efac (CONDITIONAL_JUMP)  ; LAB_0049efac
    MOV EAX,[0x005b9354]                ; 0049f646 | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0049f64b | DAT_01c77850
    FMUL float ptr [0x005829f2]         ; 0049f651 | FLOAT_005829f2
    FDIV float ptr [ESP + 0x8]          ; 0049f657
    FADD float ptr [EDX]                ; 0049f65b
    FSTP float ptr [EDX]                ; 0049f65d
    CMP dword ptr [EDX],0x3e800000      ; 0049f65f
    JLE 0x0049efac                      ; 0049f665
        ;   XREF to: 0049efac (CONDITIONAL_JUMP)  ; LAB_0049efac
    MOV dword ptr [EDX],0x3e800000      ; 0049f66b
    JMP 0x0049efac                      ; 0049f671
        ;   XREF to: 0049efac (UNCONDITIONAL_JUMP)  ; LAB_0049efac
    FLD float ptr [EDX]                 ; 0049f676
        ;   Label: LAB_0049f676
    FSUB float ptr [ESP + 0xc]          ; 0049f678
    FLDZ                                ; 0049f67c
    FXCH                                ; 0049f67e
    FSTP float ptr [EDX]                ; 0049f680
    FCOMP float ptr [EDX]               ; 0049f682
    FNSTSW AX                           ; 0049f684
    SAHF                                ; 0049f686
    JBE 0x0049efac                      ; 0049f687
        ;   XREF to: 0049efac (CONDITIONAL_JUMP)  ; LAB_0049efac
    MOV dword ptr [EDX],0x0             ; 0049f68d
    JMP 0x0049efac                      ; 0049f693
        ;   XREF to: 0049efac (UNCONDITIONAL_JUMP)  ; LAB_0049efac
    MOV EAX,dword ptr [EBX + 0x30]      ; 0049f698
        ;   Label: LAB_0049f698
    MOV AL,byte ptr [EAX + 0x1c02598]   ; 0049f69b
    JMP 0x0049efc6                      ; 0049f6a1
        ;   XREF to: 0049efc6 (UNCONDITIONAL_JUMP)  ; LAB_0049efc6
    MOV dword ptr [ESI + 0xc],0x0       ; 0049f6a6
        ;   Label: LAB_0049f6a6
    JMP 0x0049f04d                      ; 0049f6ad
        ;   XREF to: 0049f04d (UNCONDITIONAL_JUMP)  ; LAB_0049f04d
    MOV dword ptr [EAX],0x0             ; 0049f6b2
        ;   Label: LAB_0049f6b2
    JMP 0x0049f071                      ; 0049f6b8
        ;   XREF to: 0049f071 (UNCONDITIONAL_JUMP)  ; LAB_0049f071
    MOV dword ptr [EAX],0x0             ; 0049f6bd
        ;   Label: LAB_0049f6bd
    JMP 0x0049f095                      ; 0049f6c3
        ;   XREF to: 0049f095 (UNCONDITIONAL_JUMP)  ; LAB_0049f095
    MOV dword ptr [EAX],0x0             ; 0049f6c8
        ;   Label: LAB_0049f6c8
    JMP 0x0049f0b9                      ; 0049f6ce
        ;   XREF to: 0049f0b9 (UNCONDITIONAL_JUMP)  ; LAB_0049f0b9
    MOV dword ptr [ESI],0x0             ; 0049f6d3
        ;   Label: LAB_0049f6d3
    JMP 0x0049f0dd                      ; 0049f6d9
        ;   XREF to: 0049f0dd (UNCONDITIONAL_JUMP)  ; LAB_0049f0dd
    CMP dword ptr [EBX + 0x240],0x0     ; 0049f6de
        ;   Label: LAB_0049f6de
    JZ 0x0049f39a                       ; 0049f6e5
        ;   XREF to: 0049f39a (CONDITIONAL_JUMP)  ; LAB_0049f39a
    ADD ESP,0x14                        ; 0049f6eb
    POP EBP                             ; 0049f6ee
    POP EDI                             ; 0049f6ef
    POP ESI                             ; 0049f6f0
    POP EBX                             ; 0049f6f1
    RET                                 ; 0049f6f2
    PUSH EDX                            ; 0049f6f3
        ;   Label: LAB_0049f6f3
    PUSH EAX                            ; 0049f6f4 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 0049f6f5
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_setCameraView_FUN_005088f0()
    ADD ESP,0x8                         ; 0049f6fa
    ADD ESP,0x14                        ; 0049f6fd
    POP EBP                             ; 0049f700
    POP EDI                             ; 0049f701
    POP ESI                             ; 0049f702
    POP EBX                             ; 0049f703
    RET                                 ; 0049f704

