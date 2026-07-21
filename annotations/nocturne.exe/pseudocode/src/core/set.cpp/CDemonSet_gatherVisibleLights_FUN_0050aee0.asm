; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0(undefined4 param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
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
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0 at 0050b5ed
;
; Referenced Globals:
;   undefined4 DAT_005905da
;   undefined4 DAT_005905e2
;   undefined4 DAT_005a18f0
;   undefined4 DAT_01c7070c
;   undefined4 DAT_01fb9b54
;   undefined4 DAT_01fb9b58
;   undefined4 DAT_01fba2d8
;   undefined4 DAT_01fba2ec
;   undefined4 DAT_01fba7a4
;   undefined4 DAT_01fba7a8
;   undefined4 DAT_01fba9a4
;   undefined4 DAT_01fba9a8
;   undefined4 DAT_01fba9ac
;   undefined4 DAT_01ffeef8
;   undefined4 DAT_01ffeefc
;   ... and 10 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
;   core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050aee0
        ;   Label: core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0
    PUSH ESI                            ; 0050aee1
    PUSH EDI                            ; 0050aee2
    PUSH EBP                            ; 0050aee3
    MOV EBP,ESP                         ; 0050aee4
    SUB ESP,0xa4                        ; 0050aee6
    AND ESP,0xfffffff8                  ; 0050aeec
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050aeef
    MOV EDI,dword ptr [EBP + 0x24]      ; 0050aef2
    TEST ESI,ESI                        ; 0050aef5
    JNZ 0x0050aff7                      ; 0050aef7
        ;   XREF to: 0050aff7 (CONDITIONAL_JUMP)  ; LAB_0050aff7
    MOV EDI,dword ptr [0x01fba2d8]      ; 0050aefd | DAT_01fba2d8
    MOV dword ptr [0x01fff07c],ESI      ; 0050af03 | DAT_01fff07c
    TEST EDI,EDI                        ; 0050af09
    JLE 0x0050af44                      ; 0050af0b
        ;   XREF to: 0050af44 (CONDITIONAL_JUMP)  ; LAB_0050af44
    LEA ESI,[EDI*0x4 + 0x0]             ; 0050af0d
    XOR EDX,EDX                         ; 0050af14
    XOR EAX,EAX                         ; 0050af16
    MOV EBX,dword ptr [EAX + 0x1fba2dc] ; 0050af18
        ;   Label: LAB_0050af18
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 0050af1e
    JZ 0x0050af3d                       ; 0050af25
        ;   XREF to: 0050af3d (CONDITIONAL_JUMP)  ; LAB_0050af3d
    MOV ECX,dword ptr [0x01fff07c]      ; 0050af27 | DAT_01fff07c
    ADD EDX,0x4                         ; 0050af2d
    INC ECX                             ; 0050af30
    MOV dword ptr [EDX + 0x1fff07c],EBX ; 0050af31
    MOV dword ptr [0x01fff07c],ECX      ; 0050af37 | DAT_01fff07c
    ADD EAX,0x4                         ; 0050af3d
        ;   Label: LAB_0050af3d
    CMP EAX,ESI                         ; 0050af40
    JL 0x0050af18                       ; 0050af42
        ;   XREF to: 0050af18 (CONDITIONAL_JUMP)  ; LAB_0050af18
    XOR EBX,EBX                         ; 0050af44
        ;   Label: LAB_0050af44
    MOV ESI,dword ptr [0x01fb9b54]      ; 0050af46 | DAT_01fb9b54
    MOV dword ptr [0x01ffeef8],EBX      ; 0050af4c | DAT_01ffeef8
    TEST ESI,ESI                        ; 0050af52
    JLE 0x0050af89                      ; 0050af54
        ;   XREF to: 0050af89 (CONDITIONAL_JUMP)  ; LAB_0050af89
    SHL ESI,0x2                         ; 0050af56
    XOR EDX,EDX                         ; 0050af59
    XOR EAX,EAX                         ; 0050af5b
    MOV EBX,dword ptr [EAX + 0x1fb9b58] ; 0050af5d | DAT_01fb9b58
        ;   Label: LAB_0050af5d
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 0050af63
    JZ 0x0050af82                       ; 0050af6a
        ;   XREF to: 0050af82 (CONDITIONAL_JUMP)  ; LAB_0050af82
    MOV ECX,dword ptr [0x01ffeef8]      ; 0050af6c | DAT_01ffeef8
    ADD EDX,0x4                         ; 0050af72
    INC ECX                             ; 0050af75
    MOV dword ptr [EDX + 0x1ffeef8],EBX ; 0050af76
    MOV dword ptr [0x01ffeef8],ECX      ; 0050af7c | DAT_01ffeef8
    ADD EAX,0x4                         ; 0050af82
        ;   Label: LAB_0050af82
    CMP EAX,ESI                         ; 0050af85
    JL 0x0050af5d                       ; 0050af87
        ;   XREF to: 0050af5d (CONDITIONAL_JUMP)  ; LAB_0050af5d
    MOV EAX,[0x01fba2ec]                ; 0050af89 | DAT_01fba2ec
        ;   Label: LAB_0050af89
    MOV [0x01fff090],EAX                ; 0050af8e | DAT_01fff090
    TEST EAX,EAX                        ; 0050af93
    JLE 0x0050afc0                      ; 0050af95
        ;   XREF to: 0050afc0 (CONDITIONAL_JUMP)  ; LAB_0050afc0
    MOV EBX,dword ptr [0x01fba2ec]      ; 0050af97 | DAT_01fba2ec
    XOR EAX,EAX                         ; 0050af9d
    SHL EBX,0x2                         ; 0050af9f
    ADD EAX,0x4                         ; 0050afa2
        ;   Label: LAB_0050afa2
    MOV EDX,dword ptr [EAX + 0x1fba2ec] ; 0050afa5
    MOV dword ptr [EAX + 0x1fff090],EDX ; 0050afab
    CMP EAX,EBX                         ; 0050afb1
    JL 0x0050afa2                       ; 0050afb3
        ;   XREF to: 0050afa2 (CONDITIONAL_JUMP)  ; LAB_0050afa2
    LEA EAX,[EAX]                       ; 0050afb5
    LEA EDX,[EDX]                       ; 0050afbb
    MOV EBX,EBX                         ; 0050afbe
    MOV EAX,[0x01fba9a4]                ; 0050afc0 | DAT_01fba9a4
        ;   Label: LAB_0050afc0
    MOV [0x01fff224],EAX                ; 0050afc5 | DAT_01fff224
    TEST EAX,EAX                        ; 0050afca
    JLE 0x0050aff0                      ; 0050afcc
        ;   XREF to: 0050aff0 (CONDITIONAL_JUMP)  ; LAB_0050aff0
    MOV EBX,dword ptr [0x01fba9a4]      ; 0050afce | DAT_01fba9a4
    XOR EAX,EAX                         ; 0050afd4
    SHL EBX,0x2                         ; 0050afd6
    ADD EAX,0x4                         ; 0050afd9
        ;   Label: LAB_0050afd9
    MOV EDX,dword ptr [EAX + 0x1fba9a4] ; 0050afdc | DAT_01fba9a8 | DAT_01fba9ac
    MOV dword ptr [EAX + 0x1fff224],EDX ; 0050afe2
    CMP EAX,EBX                         ; 0050afe8
    JL 0x0050afd9                       ; 0050afea
        ;   XREF to: 0050afd9 (CONDITIONAL_JUMP)  ; LAB_0050afd9
    LEA EAX,[EAX]                       ; 0050afec
    MOV ESP,EBP                         ; 0050aff0
        ;   Label: LAB_0050aff0
    POP EBP                             ; 0050aff2
    POP EDI                             ; 0050aff3
    POP ESI                             ; 0050aff4
    POP EBX                             ; 0050aff5
    RET                                 ; 0050aff6
    XOR EDX,EDX                         ; 0050aff7
        ;   Label: LAB_0050aff7
    MOV EBX,dword ptr [0x01fba2d8]      ; 0050aff9 | DAT_01fba2d8
    MOV dword ptr [ESP + 0x94],EDX      ; 0050afff
    MOV dword ptr [0x01fff07c],EDX      ; 0050b006 | DAT_01fff07c
    TEST EBX,EBX                        ; 0050b00c
    JLE 0x0050b070                      ; 0050b00e
        ;   XREF to: 0050b070 (CONDITIONAL_JUMP)  ; LAB_0050b070
    XOR EBX,EBX                         ; 0050b010
    MOV EAX,dword ptr [EBX + 0x1fba2dc] ; 0050b012
        ;   Label: LAB_0050b012
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0050b018
    JZ 0x0050b054                       ; 0050b01f
        ;   XREF to: 0050b054 (CONDITIONAL_JUMP)  ; LAB_0050b054
    PUSH EDI                            ; 0050b021
    MOV ECX,dword ptr [EBP + 0x20]      ; 0050b022
    PUSH ECX                            ; 0050b025
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0050b026
    PUSH EDX                            ; 0050b029
    PUSH ESI                            ; 0050b02a
    PUSH EAX                            ; 0050b02b
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0 ; 0050b02c
        ;   XREF to: 00445fe0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0()
    ADD ESP,0x14                        ; 0050b031
    TEST EAX,EAX                        ; 0050b034
    JZ 0x0050b054                       ; 0050b036
        ;   XREF to: 0050b054 (CONDITIONAL_JUMP)  ; LAB_0050b054
    MOV EDX,dword ptr [0x01fff07c]      ; 0050b038 | DAT_01fff07c
    MOV EAX,dword ptr [EBX + 0x1fba2dc] ; 0050b03e
    LEA ECX,[EDX + 0x1]                 ; 0050b044
    MOV dword ptr [EDX*0x4 + 0x1fff080],EAX ; 0050b047 | DAT_01fff080
    MOV dword ptr [0x01fff07c],ECX      ; 0050b04e | DAT_01fff07c
    MOV EAX,dword ptr [ESP + 0x94]      ; 0050b054
        ;   Label: LAB_0050b054
    MOV EDX,dword ptr [0x01fba2d8]      ; 0050b05b | DAT_01fba2d8
    INC EAX                             ; 0050b061
    ADD EBX,0x4                         ; 0050b062
    MOV dword ptr [ESP + 0x94],EAX      ; 0050b065
    CMP EAX,EDX                         ; 0050b06c
    JL 0x0050b012                       ; 0050b06e
        ;   XREF to: 0050b012 (CONDITIONAL_JUMP)  ; LAB_0050b012
    XOR ECX,ECX                         ; 0050b070
        ;   Label: LAB_0050b070
    MOV EAX,[0x01fb9b54]                ; 0050b072 | DAT_01fb9b54
    MOV dword ptr [ESP + 0x98],ECX      ; 0050b077
    MOV dword ptr [0x01ffeef8],ECX      ; 0050b07e | DAT_01ffeef8
    TEST EAX,EAX                        ; 0050b084
    JLE 0x0050b0e7                      ; 0050b086
        ;   XREF to: 0050b0e7 (CONDITIONAL_JUMP)  ; LAB_0050b0e7
    XOR EBX,EBX                         ; 0050b088
    MOV EAX,dword ptr [EBX + 0x1fb9b58] ; 0050b08a | DAT_01fb9b58
        ;   Label: LAB_0050b08a
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0050b090
    JZ 0x0050b0cb                       ; 0050b097
        ;   XREF to: 0050b0cb (CONDITIONAL_JUMP)  ; LAB_0050b0cb
    PUSH EDI                            ; 0050b099
    MOV ECX,dword ptr [EBP + 0x20]      ; 0050b09a
    PUSH ECX                            ; 0050b09d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0050b09e
    PUSH EDX                            ; 0050b0a1
    PUSH ESI                            ; 0050b0a2
    PUSH EAX                            ; 0050b0a3
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0 ; 0050b0a4
        ;   XREF to: 00445fe0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0()
    ADD ESP,0x14                        ; 0050b0a9
    TEST EAX,EAX                        ; 0050b0ac
    JZ 0x0050b0cb                       ; 0050b0ae
        ;   XREF to: 0050b0cb (CONDITIONAL_JUMP)  ; LAB_0050b0cb
    MOV EAX,[0x01ffeef8]                ; 0050b0b0 | DAT_01ffeef8
    MOV EDX,dword ptr [EBX + 0x1fb9b58] ; 0050b0b5 | DAT_01fb9b58
    LEA ECX,[EAX + 0x1]                 ; 0050b0bb
    MOV dword ptr [EAX*0x4 + 0x1ffeefc],EDX ; 0050b0be | DAT_01ffeefc
    MOV dword ptr [0x01ffeef8],ECX      ; 0050b0c5 | DAT_01ffeef8
    MOV EAX,dword ptr [ESP + 0x98]      ; 0050b0cb
        ;   Label: LAB_0050b0cb
    MOV EDX,dword ptr [0x01fb9b54]      ; 0050b0d2 | DAT_01fb9b54
    INC EAX                             ; 0050b0d8
    ADD EBX,0x4                         ; 0050b0d9
    MOV dword ptr [ESP + 0x98],EAX      ; 0050b0dc
    CMP EAX,EDX                         ; 0050b0e3
    JL 0x0050b08a                       ; 0050b0e5
        ;   XREF to: 0050b08a (CONDITIONAL_JUMP)  ; LAB_0050b08a
    XOR ECX,ECX                         ; 0050b0e7
        ;   Label: LAB_0050b0e7
    MOV EAX,[0x01fba9a4]                ; 0050b0e9 | DAT_01fba9a4
    MOV dword ptr [ESP + 0x9c],ECX      ; 0050b0ee
    MOV dword ptr [0x01fff224],ECX      ; 0050b0f5 | DAT_01fff224
    TEST EAX,EAX                        ; 0050b0fb
    JLE 0x0050b1b3                      ; 0050b0fd
        ;   XREF to: 0050b1b3 (CONDITIONAL_JUMP)  ; LAB_0050b1b3
    MOV dword ptr [ESP + 0x8c],ECX      ; 0050b103
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0050b10a
        ;   Label: LAB_0050b10a
    MOV EBX,dword ptr [EBX + 0x1fba9a8] ; 0050b111 | DAT_01fba9a8 | DAT_01fba9ac
    LEA EAX,[EBX + 0x104]               ; 0050b117
    FLD float ptr [EAX]                 ; 0050b11d
    FSUB float ptr [ESI]                ; 0050b11f
    FSTP float ptr [ESP + 0x54]         ; 0050b121
    FLD float ptr [EAX + 0x4]           ; 0050b125
    FSUB float ptr [ESI + 0x4]          ; 0050b128
    FSTP float ptr [ESP + 0x58]         ; 0050b12b
    FLD float ptr [EAX + 0x8]           ; 0050b12f
    LEA EAX,[ESP + 0x54]                ; 0050b132
    PUSH EAX                            ; 0050b136
    LEA EAX,[ESP + 0x1c]                ; 0050b137
    MOV ECX,dword ptr [EBP + 0x28]      ; 0050b13b
    PUSH EAX                            ; 0050b13e
    FSUB float ptr [ESI + 0x8]          ; 0050b13f
    PUSH ECX                            ; 0050b142
    FSTP float ptr [ESP + 0x68]         ; 0050b143
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0050b147
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    MOV EDX,EAX                         ; 0050b14c
    LEA EAX,[ESP + 0x60]                ; 0050b14e
    ADD ESP,0xc                         ; 0050b152
    CMP EAX,EDX                         ; 0050b155
    JZ 0x0050b16d                       ; 0050b157
        ;   XREF to: 0050b16d (CONDITIONAL_JUMP)  ; LAB_0050b16d
    MOV EAX,dword ptr [EDX]             ; 0050b159
    MOV dword ptr [ESP + 0x54],EAX      ; 0050b15b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050b15f
    MOV dword ptr [ESP + 0x58],EAX      ; 0050b162
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050b166
    MOV dword ptr [ESP + 0x5c],EAX      ; 0050b169
    FLD float ptr [ESP + 0x54]          ; 0050b16d
        ;   Label: LAB_0050b16d
    FADD float ptr [EBX + 0x11d4]       ; 0050b171
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050b177
    FCOMP float ptr [EAX]               ; 0050b17a
    FNSTSW AX                           ; 0050b17c
    SAHF                                ; 0050b17e
    JNC 0x0050b471                      ; 0050b17f
        ;   XREF to: 0050b471 (CONDITIONAL_JUMP)  ; LAB_0050b471
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0050b185
        ;   Label: LAB_0050b185
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0050b18c
    MOV EDX,dword ptr [0x01fba9a4]      ; 0050b193 | DAT_01fba9a4
    ADD EBX,0x4                         ; 0050b199
    INC EAX                             ; 0050b19c
    MOV dword ptr [ESP + 0x8c],EBX      ; 0050b19d
    MOV dword ptr [ESP + 0x9c],EAX      ; 0050b1a4
    CMP EAX,EDX                         ; 0050b1ab
    JL 0x0050b10a                       ; 0050b1ad
        ;   XREF to: 0050b10a (CONDITIONAL_JUMP)  ; LAB_0050b10a
    XOR ECX,ECX                         ; 0050b1b3
        ;   Label: LAB_0050b1b3
    MOV EAX,[0x01fba2ec]                ; 0050b1b5 | DAT_01fba2ec
    MOV dword ptr [ESP + 0x90],ECX      ; 0050b1ba
    MOV dword ptr [0x01fff090],ECX      ; 0050b1c1 | DAT_01fff090
    TEST EAX,EAX                        ; 0050b1c7
    JLE 0x0050b221                      ; 0050b1c9
        ;   XREF to: 0050b221 (CONDITIONAL_JUMP)  ; LAB_0050b221
    XOR EBX,EBX                         ; 0050b1cb
    PUSH EDI                            ; 0050b1cd
        ;   Label: LAB_0050b1cd
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050b1ce
    PUSH EAX                            ; 0050b1d1
    MOV EDX,dword ptr [EBP + 0x28]      ; 0050b1d2
    PUSH EDX                            ; 0050b1d5
    PUSH ESI                            ; 0050b1d6
    MOV ECX,dword ptr [EBX + 0x1fba2f0] ; 0050b1d7
    PUSH ECX                            ; 0050b1dd
    CALL core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0 ; 0050b1de
        ;   XREF to: 0044d1f0 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0()
    ADD ESP,0x14                        ; 0050b1e3
    TEST EAX,EAX                        ; 0050b1e6
    JZ 0x0050b205                       ; 0050b1e8
        ;   XREF to: 0050b205 (CONDITIONAL_JUMP)  ; LAB_0050b205
    MOV EDX,dword ptr [0x01fff090]      ; 0050b1ea | DAT_01fff090
    MOV EAX,dword ptr [EBX + 0x1fba2f0] ; 0050b1f0
    MOV dword ptr [EDX*0x4 + 0x1fff094],EAX ; 0050b1f6 | DAT_01fff094
    LEA EAX,[EDX + 0x1]                 ; 0050b1fd
    MOV [0x01fff090],EAX                ; 0050b200 | DAT_01fff090
    MOV EAX,dword ptr [ESP + 0x90]      ; 0050b205
        ;   Label: LAB_0050b205
    MOV EDX,dword ptr [0x01fba2ec]      ; 0050b20c | DAT_01fba2ec
    INC EAX                             ; 0050b212
    ADD EBX,0x4                         ; 0050b213
    MOV dword ptr [ESP + 0x90],EAX      ; 0050b216
    CMP EAX,EDX                         ; 0050b21d
    JL 0x0050b1cd                       ; 0050b21f
        ;   XREF to: 0050b1cd (CONDITIONAL_JUMP)  ; LAB_0050b1cd
    XOR ECX,ECX                         ; 0050b221
        ;   Label: LAB_0050b221
    MOV EBX,dword ptr [0x01fba7a4]      ; 0050b223 | DAT_01fba7a4
    MOV dword ptr [ESP + 0xa0],ECX      ; 0050b229
    TEST EBX,EBX                        ; 0050b230
    JLE 0x0050b289                      ; 0050b232
        ;   XREF to: 0050b289 (CONDITIONAL_JUMP)  ; LAB_0050b289
    XOR EBX,EBX                         ; 0050b234
    PUSH EDI                            ; 0050b236
        ;   Label: LAB_0050b236
    MOV EDX,dword ptr [EBP + 0x20]      ; 0050b237
    PUSH EDX                            ; 0050b23a
    MOV ECX,dword ptr [EBP + 0x28]      ; 0050b23b
    PUSH ECX                            ; 0050b23e
    PUSH ESI                            ; 0050b23f
    MOV EAX,dword ptr [EBX + 0x1fba7a8] ; 0050b240 | DAT_01fba7a8
    PUSH EAX                            ; 0050b246
    CALL core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0 ; 0050b247
        ;   XREF to: 0044d1f0 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0()
    ADD ESP,0x14                        ; 0050b24c
    TEST EAX,EAX                        ; 0050b24f
    JZ 0x0050b26d                       ; 0050b251
        ;   XREF to: 0050b26d (CONDITIONAL_JUMP)  ; LAB_0050b26d
    MOV EDX,dword ptr [0x01fff090]      ; 0050b253 | DAT_01fff090
    INC EDX                             ; 0050b259
    MOV EAX,dword ptr [EBX + 0x1fba7a8] ; 0050b25a | DAT_01fba7a8
    MOV dword ptr [EDX*0x4 + 0x1fff090],EAX ; 0050b260 | DAT_01fff098
    MOV dword ptr [0x01fff090],EDX      ; 0050b267 | DAT_01fff090
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0050b26d
        ;   Label: LAB_0050b26d
    MOV ECX,dword ptr [0x01fba7a4]      ; 0050b274 | DAT_01fba7a4
    INC EDX                             ; 0050b27a
    ADD EBX,0x4                         ; 0050b27b
    MOV dword ptr [ESP + 0xa0],EDX      ; 0050b27e
    CMP EDX,ECX                         ; 0050b285
    JL 0x0050b236                       ; 0050b287
        ;   XREF to: 0050b236 (CONDITIONAL_JUMP)  ; LAB_0050b236
    CMP dword ptr [0x01fff224],0x0      ; 0050b289 | DAT_01fff224
        ;   Label: LAB_0050b289
    JLE 0x0050aff0                      ; 0050b290
        ;   XREF to: 0050aff0 (CONDITIONAL_JUMP)  ; LAB_0050aff0
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050b296
    FLD float ptr [EDI]                 ; 0050b299
    FSUB float ptr [EAX]                ; 0050b29b
    FSTP float ptr [ESP + 0xc]          ; 0050b29d
    FLD float ptr [EDI + 0x4]           ; 0050b2a1
    FSUB float ptr [EAX + 0x4]          ; 0050b2a4
    FSTP float ptr [ESP + 0x10]         ; 0050b2a7
    FLD float ptr [EDI + 0x8]           ; 0050b2ab
    FSUB float ptr [EAX + 0x8]          ; 0050b2ae
    LEA EAX,[ESP + 0xc]                 ; 0050b2b1
    PUSH EAX                            ; 0050b2b5
    LEA EAX,[ESP + 0x64]                ; 0050b2b6
    PUSH EAX                            ; 0050b2ba
    MOV EDI,dword ptr [EBP + 0x28]      ; 0050b2bb
    PUSH EDI                            ; 0050b2be
    FSTP float ptr [ESP + 0x20]         ; 0050b2bf
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0050b2c3
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    FLD float ptr [ESI]                 ; 0050b2c8
    FADD float ptr [EAX]                ; 0050b2ca
    ADD ESP,0xc                         ; 0050b2cc
    FSTP float ptr [ESP + 0x48]         ; 0050b2cf
    FLD float ptr [ESI + 0x4]           ; 0050b2d3
    FADD float ptr [EAX + 0x4]          ; 0050b2d6
    FSTP float ptr [ESP + 0x4c]         ; 0050b2d9
    FLD float ptr [ESI + 0x8]           ; 0050b2dd
    FADD float ptr [EAX + 0x8]          ; 0050b2e0
    XOR EAX,EAX                         ; 0050b2e3
    XOR ESI,ESI                         ; 0050b2e5
    MOV dword ptr [ESP + 0x38],EAX      ; 0050b2e7
    MOV dword ptr [ESP + 0x34],EAX      ; 0050b2eb
    MOV dword ptr [ESP + 0x30],EAX      ; 0050b2ef
    MOV dword ptr [ESP + 0x8],EAX       ; 0050b2f3
    MOV dword ptr [ESP + 0x4],EAX       ; 0050b2f7
    MOV dword ptr [ESP],EAX             ; 0050b2fb
    MOV EAX,[0x01fff224]                ; 0050b2fe | DAT_01fff224
    FSTP float ptr [ESP + 0x50]         ; 0050b303
    TEST EAX,EAX                        ; 0050b307
    JLE 0x0050b39d                      ; 0050b309
        ;   XREF to: 0050b39d (CONDITIONAL_JUMP)  ; LAB_0050b39d
    LEA EDI,[EAX*0x4 + 0x0]             ; 0050b30f
    XOR EBX,EBX                         ; 0050b316
    MOV EDX,dword ptr [EBX + 0x1fff228] ; 0050b318
        ;   Label: LAB_0050b318
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 0050b31e
    JZ 0x0050b4fe                       ; 0050b328
        ;   XREF to: 0050b4fe (CONDITIONAL_JUMP)  ; LAB_0050b4fe
    FLD float ptr [EDX + 0x108]         ; 0050b32e
    FLD float ptr [EDX + 0x104]         ; 0050b334
    FSUB float ptr [ESP + 0x48]         ; 0050b33a
    FXCH                                ; 0050b33e
    FSUB float ptr [ESP + 0x4c]         ; 0050b340
    FXCH                                ; 0050b344
    FST float ptr [ESP + 0x84]          ; 0050b346
    FMUL float ptr [ESP + 0x84]         ; 0050b34d
    FXCH                                ; 0050b354
    FST float ptr [ESP + 0x80]          ; 0050b356
    FMUL float ptr [ESP + 0x80]         ; 0050b35d
    FLD float ptr [EDX + 0x10c]         ; 0050b364
    FSUB float ptr [ESP + 0x50]         ; 0050b36a
    FXCH                                ; 0050b36e
    FADDP ST2,ST0                       ; 0050b370
    FST float ptr [ESP + 0x7c]          ; 0050b372
    FMUL float ptr [ESP + 0x7c]         ; 0050b376
    FADDP                               ; 0050b37a
    FST float ptr [ESP + 0x88]          ; 0050b37c
    FCOMP float ptr [EDX + 0x11d8]      ; 0050b383
    FNSTSW AX                           ; 0050b389
    SAHF                                ; 0050b38b
    JBE 0x0050b52c                      ; 0050b38c
        ;   XREF to: 0050b52c (CONDITIONAL_JUMP)  ; LAB_0050b52c
    ADD EBX,0x4                         ; 0050b392
        ;   Label: LAB_0050b392
    CMP EBX,EDI                         ; 0050b395
    JL 0x0050b318                       ; 0050b397
        ;   XREF to: 0050b318 (CONDITIONAL_JUMP)  ; LAB_0050b318
    TEST ESI,ESI                        ; 0050b39d
        ;   Label: LAB_0050b39d
    JZ 0x0050b5a4                       ; 0050b39f
        ;   XREF to: 0050b5a4 (CONDITIONAL_JUMP)  ; LAB_0050b5a4
    LEA EBX,[ESP + 0x3c]                ; 0050b3a5
    MOV EAX,ESP                         ; 0050b3a9
    FLD float ptr [EAX]                 ; 0050b3ab
    FMUL float ptr [0x005a18f0]         ; 0050b3ad | DAT_005a18f0
    FISTP dword ptr [EBX]               ; 0050b3b3
    FLD float ptr [EAX + 0x4]           ; 0050b3b5
    FMUL float ptr [0x005a18f0]         ; 0050b3b8 | DAT_005a18f0
    FISTP dword ptr [EBX + 0x4]         ; 0050b3be
    FLD float ptr [EAX + 0x8]           ; 0050b3c1
    FMUL float ptr [0x005a18f0]         ; 0050b3c4 | DAT_005a18f0
    FISTP dword ptr [EBX + 0x8]         ; 0050b3ca
    LEA EBX,[ESP + 0x24]                ; 0050b3cd
        ;   Label: LAB_0050b3cd
    LEA EAX,[ESP + 0x30]                ; 0050b3d1
    FLD float ptr [EAX]                 ; 0050b3d5
    FMUL float ptr [0x005a18f0]         ; 0050b3d7 | DAT_005a18f0
    FISTP dword ptr [EBX]               ; 0050b3dd
    FLD float ptr [EAX + 0x4]           ; 0050b3df
    FMUL float ptr [0x005a18f0]         ; 0050b3e2 | DAT_005a18f0
    FISTP dword ptr [EBX + 0x4]         ; 0050b3e8
    FLD float ptr [EAX + 0x8]           ; 0050b3eb
    FMUL float ptr [0x005a18f0]         ; 0050b3ee | DAT_005a18f0
    FISTP dword ptr [EBX + 0x8]         ; 0050b3f4
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050b3f7
    ADD EAX,dword ptr [ESP + 0x3c]      ; 0050b3fb
    MOV EDX,dword ptr [ESP + 0x40]      ; 0050b3ff
    MOV [0x01fff5a4],EAX                ; 0050b403 | DAT_01fff5a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050b408
    ADD EAX,EDX                         ; 0050b40c
    MOV ECX,dword ptr [ESP + 0x44]      ; 0050b40e
    MOV [0x01fff5a8],EAX                ; 0050b412 | DAT_01fff5a8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050b417
    ADD EAX,ECX                         ; 0050b41b
    MOV EBX,dword ptr [0x01fff5a4]      ; 0050b41d | DAT_01fff5a4
    MOV [0x01fff5ac],EAX                ; 0050b423 | DAT_01fff5ac
    CMP EBX,0xffff                      ; 0050b428
    JLE 0x0050b43a                      ; 0050b42e
        ;   XREF to: 0050b43a (CONDITIONAL_JUMP)  ; LAB_0050b43a
    MOV dword ptr [0x01fff5a4],0xffff   ; 0050b430 | DAT_01fff5a4
    CMP dword ptr [0x01fff5a8],0xffff   ; 0050b43a | DAT_01fff5a8
        ;   Label: LAB_0050b43a
    JLE 0x0050b450                      ; 0050b444
        ;   XREF to: 0050b450 (CONDITIONAL_JUMP)  ; LAB_0050b450
    MOV dword ptr [0x01fff5a8],0xffff   ; 0050b446 | DAT_01fff5a8
    CMP dword ptr [0x01fff5ac],0xffff   ; 0050b450 | DAT_01fff5ac
        ;   Label: LAB_0050b450
    JLE 0x0050aff0                      ; 0050b45a
        ;   XREF to: 0050aff0 (CONDITIONAL_JUMP)  ; LAB_0050aff0
    MOV dword ptr [0x01fff5ac],0xffff   ; 0050b460 | DAT_01fff5ac
    MOV ESP,EBP                         ; 0050b46a
    POP EBP                             ; 0050b46c
    POP EDI                             ; 0050b46d
    POP ESI                             ; 0050b46e
    POP EBX                             ; 0050b46f
    RET                                 ; 0050b470
    FLD float ptr [ESP + 0x58]          ; 0050b471
        ;   Label: LAB_0050b471
    FADD float ptr [EBX + 0x11d4]       ; 0050b475
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050b47b
    FCOMP float ptr [EAX + 0x4]         ; 0050b47e
    FNSTSW AX                           ; 0050b481
    SAHF                                ; 0050b483
    JC 0x0050b185                       ; 0050b484
        ;   XREF to: 0050b185 (CONDITIONAL_JUMP)  ; LAB_0050b185
    FLD float ptr [ESP + 0x5c]          ; 0050b48a
    FADD float ptr [EBX + 0x11d4]       ; 0050b48e
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050b494
    FCOMP float ptr [EAX + 0x8]         ; 0050b497
    FNSTSW AX                           ; 0050b49a
    SAHF                                ; 0050b49c
    JC 0x0050b185                       ; 0050b49d
        ;   XREF to: 0050b185 (CONDITIONAL_JUMP)  ; LAB_0050b185
    FLD float ptr [ESP + 0x54]          ; 0050b4a3
    FSUB float ptr [EBX + 0x11d4]       ; 0050b4a7
    FCOMP float ptr [EDI]               ; 0050b4ad
    FNSTSW AX                           ; 0050b4af
    SAHF                                ; 0050b4b1
    JA 0x0050b185                       ; 0050b4b2
        ;   XREF to: 0050b185 (CONDITIONAL_JUMP)  ; LAB_0050b185
    FLD float ptr [ESP + 0x58]          ; 0050b4b8
    FSUB float ptr [EBX + 0x11d4]       ; 0050b4bc
    FCOMP float ptr [EDI + 0x4]         ; 0050b4c2
    FNSTSW AX                           ; 0050b4c5
    SAHF                                ; 0050b4c7
    JA 0x0050b185                       ; 0050b4c8
        ;   XREF to: 0050b185 (CONDITIONAL_JUMP)  ; LAB_0050b185
    FLD float ptr [ESP + 0x5c]          ; 0050b4ce
    FSUB float ptr [EBX + 0x11d4]       ; 0050b4d2
    FCOMP float ptr [EDI + 0x8]         ; 0050b4d8
    FNSTSW AX                           ; 0050b4db
    SAHF                                ; 0050b4dd
    JA 0x0050b185                       ; 0050b4de
        ;   XREF to: 0050b185 (CONDITIONAL_JUMP)  ; LAB_0050b185
    MOV EAX,[0x01fff224]                ; 0050b4e4 | DAT_01fff224
    MOV dword ptr [EAX*0x4 + 0x1fff228],EBX ; 0050b4e9 | DAT_01fff228
    LEA EBX,[EAX + 0x1]                 ; 0050b4f0
    MOV dword ptr [0x01fff224],EBX      ; 0050b4f3 | DAT_01fff224
    JMP 0x0050b185                      ; 0050b4f9
        ;   XREF to: 0050b185 (UNCONDITIONAL_JUMP)  ; LAB_0050b185
    FLD float ptr [EDX + 0x11c4]        ; 0050b4fe
        ;   Label: LAB_0050b4fe
    FADD float ptr [ESP]                ; 0050b504
    FSTP float ptr [ESP]                ; 0050b507
    FLD float ptr [EDX + 0x11c8]        ; 0050b50a
    FADD float ptr [ESP + 0x4]          ; 0050b510
    FSTP float ptr [ESP + 0x4]          ; 0050b514
    FLD float ptr [EDX + 0x11cc]        ; 0050b518
    FADD float ptr [ESP + 0x8]          ; 0050b51e
    INC ESI                             ; 0050b522
    FSTP float ptr [ESP + 0x8]          ; 0050b523
    JMP 0x0050b392                      ; 0050b527
        ;   XREF to: 0050b392 (UNCONDITIONAL_JUMP)  ; LAB_0050b392
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050b52c
        ;   Label: LAB_0050b52c
    MOV ECX,dword ptr [0x01c7070c]      ; 0050b533 | DAT_01c7070c
    SAR EAX,0x1                         ; 0050b539
    ADD EAX,ECX                         ; 0050b53b
    MOV dword ptr [ESP + 0x78],EAX      ; 0050b53d
    FLD float ptr [ESP + 0x78]          ; 0050b541
    FMUL float ptr [EDX + 0x11dc]       ; 0050b545
    FLD1                                ; 0050b54b
    FSUBRP                              ; 0050b54d
    FLD ST0                             ; 0050b54f
    FMUL float ptr [0x005905da]         ; 0050b551 | DAT_005905da
    FST ST1                             ; 0050b557
    FMUL float ptr [EDX + 0x11c4]       ; 0050b559
    FLD double ptr [0x005905e2]         ; 0050b55f | DAT_005905e2
    FXCH                                ; 0050b565
    FMUL ST1                            ; 0050b567
    FLD float ptr [ESP + 0x30]          ; 0050b569
    FXCH                                ; 0050b56d
    FADD ST0,ST1                        ; 0050b56f
    FLD ST3                             ; 0050b571
    FXCH                                ; 0050b573
    FSTP ST2                            ; 0050b575
    FXCH                                ; 0050b577
    FSTP float ptr [ESP + 0x30]         ; 0050b579
    FMUL float ptr [EDX + 0x11c8]       ; 0050b57d
    FMUL ST1                            ; 0050b583
    FADD float ptr [ESP + 0x34]         ; 0050b585
    FSTP float ptr [ESP + 0x34]         ; 0050b589
    FXCH                                ; 0050b58d
    FMUL float ptr [EDX + 0x11cc]       ; 0050b58f
    FMULP                               ; 0050b595
    FADD float ptr [ESP + 0x38]         ; 0050b597
    FSTP float ptr [ESP + 0x38]         ; 0050b59b
    JMP 0x0050b392                      ; 0050b59f
        ;   XREF to: 0050b392 (UNCONDITIONAL_JUMP)  ; LAB_0050b392
    MOV ECX,0xaaaa                      ; 0050b5a4
        ;   Label: LAB_0050b5a4
    MOV dword ptr [ESP + 0x40],ECX      ; 0050b5a9
    MOV dword ptr [ESP + 0x44],ECX      ; 0050b5ad
    MOV dword ptr [ESP + 0x3c],ECX      ; 0050b5b1
    JMP 0x0050b3cd                      ; 0050b5b5
        ;   XREF to: 0050b3cd (UNCONDITIONAL_JUMP)  ; LAB_0050b3cd

