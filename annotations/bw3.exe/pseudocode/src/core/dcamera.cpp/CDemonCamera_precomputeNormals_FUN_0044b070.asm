; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044b070(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
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
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534f5d
;   core_set.cpp_FUN_00533e5e at 00534199
;
; Referenced Globals:
;   undefined4 DAT_005b9d7e
;   undefined4 DAT_005b9d86
;   undefined4 DAT_005f17f0
;   undefined4 DAT_005f17f4
;   undefined4 DAT_005f1810
;   undefined4 DAT_005f1814
;   undefined4 DAT_00875494
;   undefined4 DAT_00875498
;   undefined4 DAT_0087549c
;   undefined4 DAT_00957394
;   undefined4 DAT_00957398
;   undefined4 DAT_0095739c
;   undefined4 DAT_00a39294
;   undefined4 DAT_00a39298
;   undefined4 DAT_00a3929c
;   ... and 7 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00450820
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
;   core_dcamera.cpp_FUN_00449eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b070
        ;   Label: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044b070
    PUSH ESI                            ; 0044b071
    PUSH EDI                            ; 0044b072
    PUSH EBP                            ; 0044b073
    MOV EBP,ESP                         ; 0044b074
    SUB ESP,0x78                        ; 0044b076
    AND ESP,0xfffffff8                  ; 0044b079
    MOV ECX,0x1                         ; 0044b07c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b081
    XOR EDX,EDX                         ; 0044b084
    MOV dword ptr [ESP + 0x50],ECX      ; 0044b086
    MOV EBX,dword ptr [EAX + 0x154]     ; 0044b08a
    MOV dword ptr [ESP],EDX             ; 0044b090
    CMP EBX,ECX                         ; 0044b093
    JLE 0x0044b298                      ; 0044b095
        ;   XREF to: 0044b298 (CONDITIONAL_JUMP)  ; LAB_0044b298
    MOV EBX,0x500                       ; 0044b09b
    MOV ECX,0xf00                       ; 0044b0a0
    MOV dword ptr [ESP + 0x48],EBX      ; 0044b0a5
    MOV dword ptr [ESP + 0x44],ECX      ; 0044b0a9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b0ad
        ;   Label: LAB_0044b0ad
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044b0b0
    IMUL EAX,dword ptr [EDX + 0x14c]    ; 0044b0b4
    MOV EDI,0x1                         ; 0044b0bb
    MOV dword ptr [ESP + 0x60],EDI      ; 0044b0c0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c5faec] ; 0044b0c4 | DAT_01c5faec
    MOV EDX,dword ptr [EDX + 0x150]     ; 0044b0cb
    MOV dword ptr [ESP + 0x64],EAX      ; 0044b0d1
    CMP EDX,EDI                         ; 0044b0d5
    JLE 0x0044b262                      ; 0044b0d7
        ;   XREF to: 0044b262 (CONDITIONAL_JUMP)  ; LAB_0044b262
    MOV EBX,dword ptr [ESP + 0x44]      ; 0044b0dd
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044b0e1
    ADD EBX,0xc                         ; 0044b0e5
    ADD EAX,0x4                         ; 0044b0e8
    MOV dword ptr [ESP + 0x58],EBX      ; 0044b0eb
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044b0ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b0f3
        ;   Label: LAB_0044b0f3
    MOV ESI,dword ptr [ESP + 0x64]      ; 0044b0f6
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044b0fa
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b100
    SHL EAX,0x2                         ; 0044b103
    MOV EDI,dword ptr [EDX + 0x14c]     ; 0044b106
    ADD ESI,EAX                         ; 0044b10c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044b10e
    IMUL EAX,EDI                        ; 0044b112
    PUSH EAX                            ; 0044b115
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044b116
    IMUL EAX,EDI                        ; 0044b11a
    PUSH EAX                            ; 0044b11d
    MOV dword ptr [ESP + 0x6c],ESI      ; 0044b11e
    PUSH EDX                            ; 0044b122
    LEA ESI,[ESP + 0x10]                ; 0044b123
    LEA EDI,[ESP + 0x34]                ; 0044b127
    CALL core_dcamera.cpp_FUN_00449eb0  ; 0044b12b
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    LEA ESI,[ESP + 0x10]                ; 0044b130
    ADD ESP,0xc                         ; 0044b134
    MOVSD ES:EDI,ESI                    ; 0044b137
    MOVSD ES:EDI,ESI                    ; 0044b138
    MOVSD ES:EDI,ESI                    ; 0044b139
    MOV EDI,dword ptr [ESP + 0x30]      ; 0044b13a
    CMP EDI,0x7fffffff                  ; 0044b13e
    JZ 0x0044b14e                       ; 0044b144
        ;   XREF to: 0044b14e (CONDITIONAL_JUMP)  ; LAB_0044b14e
    CMP EDI,dword ptr [ESP]             ; 0044b146
    JLE 0x0044b14e                      ; 0044b149
        ;   XREF to: 0044b14e (CONDITIONAL_JUMP)  ; LAB_0044b14e
    MOV dword ptr [ESP],EDI             ; 0044b14b
    LEA EAX,[ESP + 0x28]                ; 0044b14e
        ;   Label: LAB_0044b14e
    PUSH EAX                            ; 0044b152
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044b153
    PUSH ECX                            ; 0044b156
    LEA ESI,[ESP + 0x3c]                ; 0044b157
    LEA EDI,[ESP + 0x24]                ; 0044b15b
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80 ; 0044b15f
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x3c]                ; 0044b164
    ADD ESP,0x8                         ; 0044b168
    MOVSD ES:EDI,ESI                    ; 0044b16b
    MOVSD ES:EDI,ESI                    ; 0044b16c
    MOVSD ES:EDI,ESI                    ; 0044b16d
    MOV EDI,dword ptr [ESP + 0x58]      ; 0044b16e
    LEA ESI,[ESP + 0x34]                ; 0044b172
    LEA EDI,[EDI + 0x956488]            ; 0044b176
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044b17c
    MOVSD ES:EDI,ESI                    ; 0044b180 | DAT_00957394
    MOVSD ES:EDI,ESI                    ; 0044b181 | DAT_00957398
    MOVSD ES:EDI,ESI                    ; 0044b182 | DAT_0095739c
    MOV EAX,dword ptr [EAX]             ; 0044b183
    SHR EAX,0x18                        ; 0044b185
    TEST EAX,EAX                        ; 0044b188
    JZ 0x0044b1ad                       ; 0044b18a
        ;   XREF to: 0044b1ad (CONDITIONAL_JUMP)  ; LAB_0044b1ad
    PUSH EAX                            ; 0044b18c
    LEA EAX,[ESP + 0x2c]                ; 0044b18d
    PUSH EAX                            ; 0044b191
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044b192
    PUSH ESI                            ; 0044b195
    LEA ESI,[ESP + 0x1c]                ; 0044b196
    LEA EDI,[ESP + 0x28]                ; 0044b19a
    CALL core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00450820 ; 0044b19e
        ;   XREF to: 00450820 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00450820(CDemonCamera * this_ptr, CVector3i * screen_pos, int alpha_index, CVector3i * world_pos)
    LEA ESI,[ESP + 0x1c]                ; 0044b1a3
    ADD ESP,0xc                         ; 0044b1a7
    MOVSD ES:EDI,ESI                    ; 0044b1aa
    MOVSD ES:EDI,ESI                    ; 0044b1ab
    MOVSD ES:EDI,ESI                    ; 0044b1ac
    LEA ESI,[ESP + 0x1c]                ; 0044b1ad
        ;   Label: LAB_0044b1ad
    LEA EDI,[EBX + 0x874588]            ; 0044b1b1
    MOVSD ES:EDI,ESI                    ; 0044b1b7 | DAT_00875494
    MOVSD ES:EDI,ESI                    ; 0044b1b8 | DAT_00875498
    MOVSD ES:EDI,ESI                    ; 0044b1b9 | DAT_0087549c
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0044b1ba
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044b1be
    MOV dword ptr [EDX + 0xb52a48],EAX  ; 0044b1c2 | DAT_00b52f4c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044b1c8
    MOV ESI,dword ptr [ESP + 0x64]      ; 0044b1cc
    MOV EAX,dword ptr [EAX]             ; 0044b1d0
    MOV EDX,dword ptr [ESP + 0x64]      ; 0044b1d2
    SHR EAX,0x10                        ; 0044b1d6
    MOV EDX,dword ptr [EDX]             ; 0044b1d9
    AND EAX,0xff                        ; 0044b1db
    SHR EDX,0x8                         ; 0044b1e0
    CBW                                 ; 0044b1e3
    AND EDX,0xff                        ; 0044b1e5
    MOV dword ptr [ESP + 0x74],EAX      ; 0044b1eb
    MOV DH,byte ptr [ESI]               ; 0044b1ef
    FILD word ptr [ESP + 0x74]          ; 0044b1f1
    MOVSX AX,DL                         ; 0044b1f5
    FLD double ptr [0x005b9d86]         ; 0044b1f9 | DAT_005b9d86
    FXCH                                ; 0044b1ff
    FMUL ST1                            ; 0044b201
    MOV dword ptr [ESP + 0x74],EAX      ; 0044b203
    MOVSX AX,DH                         ; 0044b207
    FILD word ptr [ESP + 0x74]          ; 0044b20b
    MOV dword ptr [ESP + 0x74],EAX      ; 0044b20f
    FMUL ST2                            ; 0044b213
    FILD word ptr [ESP + 0x74]          ; 0044b215
    FMULP ST3                           ; 0044b219
    MOV ECX,dword ptr [ESP + 0x58]      ; 0044b21b
    ADD EBX,0xc                         ; 0044b21f
    ADD ECX,0xc                         ; 0044b222
    MOV EDI,dword ptr [ESP + 0x60]      ; 0044b225
    MOV dword ptr [ESP + 0x58],ECX      ; 0044b229
    INC EDI                             ; 0044b22d
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0044b22e
    MOV dword ptr [ESP + 0x60],EDI      ; 0044b232
    ADD ESI,0x4                         ; 0044b236
    FXCH                                ; 0044b239
    FSTP float ptr [EBX + 0xa3837c]     ; 0044b23b | DAT_00a39294
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b241
    FSTP float ptr [EBX + 0xa38380]     ; 0044b244 | DAT_00a39298
    FSTP float ptr [EBX + 0xa38384]     ; 0044b24a | DAT_00a3929c
    MOV ECX,dword ptr [EDX + 0x150]     ; 0044b250
    MOV dword ptr [ESP + 0x5c],ESI      ; 0044b256
    CMP EDI,ECX                         ; 0044b25a
    JL 0x0044b0f3                       ; 0044b25c
        ;   XREF to: 0044b0f3 (CONDITIONAL_JUMP)  ; LAB_0044b0f3
    MOV ESI,dword ptr [ESP + 0x44]      ; 0044b262
        ;   Label: LAB_0044b262
    MOV EDI,dword ptr [ESP + 0x48]      ; 0044b266
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044b26a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b26e
    ADD ESI,0xf00                       ; 0044b271
    ADD EDI,0x500                       ; 0044b277
    INC EAX                             ; 0044b27d
    MOV ECX,dword ptr [EDX + 0x154]     ; 0044b27e
    MOV dword ptr [ESP + 0x44],ESI      ; 0044b284
    MOV dword ptr [ESP + 0x48],EDI      ; 0044b288
    MOV dword ptr [ESP + 0x50],EAX      ; 0044b28c
    CMP EAX,ECX                         ; 0044b290
    JL 0x0044b0ad                       ; 0044b292
        ;   XREF to: 0044b0ad (CONDITIONAL_JUMP)  ; LAB_0044b0ad
    MOV EAX,dword ptr [ESP]             ; 0044b298
        ;   Label: LAB_0044b298
    MOV dword ptr [ESP + 0x70],EAX      ; 0044b29b
    FILD dword ptr [ESP + 0x70]         ; 0044b29f
    FMUL double ptr [0x005b9d7e]        ; 0044b2a3 | DAT_005b9d7e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b2a9
    XOR ESI,ESI                         ; 0044b2ac
    MOV EBX,EAX                         ; 0044b2ae
    PUSH EAX                            ; 0044b2b0
    FSTP float ptr [EAX + 0x140]        ; 0044b2b1
    CALL core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 ; 0044b2b7
        ;   XREF to: 0044f750 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044b2bc
    MOV EAX,EBX                         ; 0044b2bf
    MOV dword ptr [0x00b9e554],ESI      ; 0044b2c1 | DAT_00b9e554
    MOV dword ptr [0x012a6558],ESI      ; 0044b2c7 | DAT_012a6558
    MOV EDX,dword ptr [EAX + 0x148]     ; 0044b2cd
    MOV dword ptr [0x013405b4],ESI      ; 0044b2d3 | DAT_013405b4
    CMP EDX,0x1e0                       ; 0044b2d9
    JL 0x0044b039                       ; 0044b2df
        ;   XREF to: 0044b039 (CONDITIONAL_JUMP)  ; LAB_0044b039
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044b2e5
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044b2eb
    SHL EAX,0x2                         ; 0044b2ef
    MOV dword ptr [ESP + 0x40],EAX      ; 0044b2f2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b2f6
        ;   Label: LAB_0044b2f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b2f9
    MOV EDI,dword ptr [EDX + 0x14c]     ; 0044b2fc
    MOV EAX,dword ptr [EAX + 0x148]     ; 0044b302
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0044b308
    SUB EAX,EDI                         ; 0044b30c
    CMP EAX,EDX                         ; 0044b30e
    JLE 0x0044b039                      ; 0044b310
        ;   XREF to: 0044b039 (CONDITIONAL_JUMP)  ; LAB_0044b039
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044b316
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044b319
    MOV EDI,dword ptr [EDI + 0x14c]     ; 0044b31d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044b323
    LEA EAX,[EDI*0x4 + 0x0]             ; 0044b327
    MOV dword ptr [ESP + 0x54],EAX      ; 0044b32e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b332
        ;   Label: LAB_0044b332
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b335
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044b338
    MOV EDX,dword ptr [EDX + 0x144]     ; 0044b33e
    ADD EAX,EAX                         ; 0044b344
    SUB EDX,EAX                         ; 0044b346
    CMP EDI,EDX                         ; 0044b348
    JL 0x0044b362                       ; 0044b34a
        ;   XREF to: 0044b362 (CONDITIONAL_JUMP)  ; LAB_0044b362
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0044b34c
    MOV ECX,dword ptr [ESP + 0x40]      ; 0044b350
    INC EBX                             ; 0044b354
    ADD ECX,0x4                         ; 0044b355
    MOV dword ptr [ESP + 0x6c],EBX      ; 0044b358
    MOV dword ptr [ESP + 0x40],ECX      ; 0044b35c
    JMP 0x0044b2f6                      ; 0044b360
        ;   XREF to: 0044b2f6 (UNCONDITIONAL_JUMP)  ; LAB_0044b2f6
    CMP dword ptr [0x013405b4],0x2710   ; 0044b362 | DAT_013405b4
        ;   Label: LAB_0044b362
    JGE 0x0044b479                      ; 0044b36c
        ;   XREF to: 0044b479 (CONDITIONAL_JUMP)  ; LAB_0044b479
    TEST DI,0x1                         ; 0044b372
    JZ 0x0044b46e                       ; 0044b377
        ;   XREF to: 0044b46e (CONDITIONAL_JUMP)  ; LAB_0044b46e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044b37d
        ;   Label: LAB_0044b37d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044b381
    MOV EAX,dword ptr [EAX + 0x1c60dac] ; 0044b385 | DAT_01c60dac
    ADD EAX,EDX                         ; 0044b38b
    MOV EBX,dword ptr [EAX]             ; 0044b38d
    MOV ESI,0x7fffffff                  ; 0044b38f
    TEST EBX,EBX                        ; 0044b394
    JNZ 0x0044b48a                      ; 0044b396
        ;   XREF to: 0044b48a (CONDITIONAL_JUMP)  ; LAB_0044b48a
    MOV EBX,ESI                         ; 0044b39c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044b39e
        ;   Label: LAB_0044b39e
    MOV CL,byte ptr [0x013405b0]        ; 0044b3a2 | DAT_013405b0
    SAR EAX,CL                          ; 0044b3a8
    IMUL EDX,EAX,0x500                  ; 0044b3aa
    MOV EAX,EDI                         ; 0044b3b0
    SAR EAX,CL                          ; 0044b3b2
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xb52a48] ; 0044b3b4
    MOV dword ptr [ESP + 0x68],EBX      ; 0044b3bb
    SUB EBX,EAX                         ; 0044b3bf
    MOV EAX,EBX                         ; 0044b3c1
    CDQ                                 ; 0044b3c3
    XOR EAX,EDX                         ; 0044b3c4
    SUB EAX,EDX                         ; 0044b3c6
    CMP EAX,0x400                       ; 0044b3c8
    JLE 0x0044b479                      ; 0044b3cd
        ;   XREF to: 0044b479 (CONDITIONAL_JUMP)  ; LAB_0044b479
    XOR EBX,EBX                         ; 0044b3d3
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044b3d5
        ;   Label: LAB_0044b3d5
    MOV CL,byte ptr [0x013405b0]        ; 0044b3d9 | DAT_013405b0
    SAR EAX,CL                          ; 0044b3df
    ADD EAX,dword ptr [EBX + 0x5f1810]  ; 0044b3e1 | DAT_005f1810 | DAT_005f1814
    IMUL EDX,EAX,0x500                  ; 0044b3e7
    MOV CL,byte ptr [0x013405b0]        ; 0044b3ed | DAT_013405b0
    MOV EAX,EDI                         ; 0044b3f3
    SAR EAX,CL                          ; 0044b3f5
    ADD EAX,dword ptr [EBX + 0x5f17f0]  ; 0044b3f7 | DAT_005f17f0 | DAT_005f17f4
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xb52a48] ; 0044b3fd
    MOV EDX,dword ptr [ESP + 0x68]      ; 0044b404
    SUB EDX,EAX                         ; 0044b408
    MOV EAX,EDX                         ; 0044b40a
    CDQ                                 ; 0044b40c
    XOR EAX,EDX                         ; 0044b40d
    SUB EAX,EDX                         ; 0044b40f
    CMP EAX,ESI                         ; 0044b411
    JGE 0x0044b43a                      ; 0044b413
        ;   XREF to: 0044b43a (CONDITIONAL_JUMP)  ; LAB_0044b43a
    MOV EDX,dword ptr [EBX + 0x5f1810]  ; 0044b415 | DAT_005f1810
    MOV ESI,EAX                         ; 0044b41b
    IMUL EAX,EDX,0x140                  ; 0044b41d
    MOV EDX,dword ptr [EBX + 0x5f17f0]  ; 0044b423 | DAT_005f17f0
    MOV ECX,dword ptr [0x013405b4]      ; 0044b429 | DAT_013405b4
    ADD EDX,EAX                         ; 0044b42f
    IMUL EAX,ECX,0xc                    ; 0044b431
    MOV dword ptr [EAX + 0x13405b8],EDX ; 0044b434
    ADD EBX,0x4                         ; 0044b43a
        ;   Label: LAB_0044b43a
    CMP EBX,0x20                        ; 0044b43d
    JNZ 0x0044b3d5                      ; 0044b440
        ;   XREF to: 0044b3d5 (CONDITIONAL_JUMP)  ; LAB_0044b3d5
    MOV EBX,dword ptr [0x013405b4]      ; 0044b442 | DAT_013405b4
    IMUL EAX,EBX,0xc                    ; 0044b448
    CMP dword ptr [EAX + 0x13405b8],0x0 ; 0044b44b
    JZ 0x0044b479                       ; 0044b452
        ;   XREF to: 0044b479 (CONDITIONAL_JUMP)  ; LAB_0044b479
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0044b454
    MOV dword ptr [EAX + 0x13405bc],EDI ; 0044b458
    MOV dword ptr [EAX + 0x13405c0],EDX ; 0044b45e
    LEA EAX,[EBX + 0x1]                 ; 0044b464
    MOV [0x013405b4],EAX                ; 0044b467 | DAT_013405b4
    JMP 0x0044b479                      ; 0044b46c
        ;   XREF to: 0044b479 (UNCONDITIONAL_JUMP)  ; LAB_0044b479
    TEST byte ptr [ESP + 0x6c],0x1      ; 0044b46e
        ;   Label: LAB_0044b46e
    JNZ 0x0044b37d                      ; 0044b473
        ;   XREF to: 0044b37d (CONDITIONAL_JUMP)  ; LAB_0044b37d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044b479
        ;   Label: LAB_0044b479
    ADD EDX,0x4                         ; 0044b47d
    INC EDI                             ; 0044b480
    MOV dword ptr [ESP + 0x54],EDX      ; 0044b481
    JMP 0x0044b332                      ; 0044b485
        ;   XREF to: 0044b332 (UNCONDITIONAL_JUMP)  ; LAB_0044b332
    MOV EDX,ESI                         ; 0044b48a
        ;   Label: LAB_0044b48a
    MOV EAX,ESI                         ; 0044b48c
    SAR EDX,0x1f                        ; 0044b48e
    IDIV EBX                            ; 0044b491
    MOV EBX,EAX                         ; 0044b493
    JMP 0x0044b39e                      ; 0044b495
        ;   XREF to: 0044b39e (UNCONDITIONAL_JUMP)  ; LAB_0044b39e

