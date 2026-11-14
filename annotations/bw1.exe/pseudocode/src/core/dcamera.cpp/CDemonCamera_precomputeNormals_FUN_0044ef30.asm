; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044ef30(CDemonCamera *this_ptr)
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
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f79d
;   core_set.cpp_FUN_0054e6a0 at 0054e9d9
;
; Referenced Globals:
;   undefined4 DAT_005d7717
;   undefined4 DAT_005d771f
;   undefined4 DAT_0061123c
;   undefined4 DAT_00611240
;   undefined4 DAT_0061125c
;   undefined4 DAT_00611260
;   undefined4 DAT_00858be4
;   undefined4 DAT_00858be8
;   undefined4 DAT_00858bec
;   undefined4 DAT_0093aae4
;   undefined4 DAT_0093aae8
;   undefined4 DAT_0093aaec
;   undefined4 DAT_00a1c9e4
;   undefined4 DAT_00a1c9e8
;   undefined4 DAT_00a1c9ec
;   ... and 7 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_004546d0
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40
;   core_dcamera.cpp_FUN_0044dd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ef30
        ;   Label: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044ef30
    PUSH ESI                            ; 0044ef31
    PUSH EDI                            ; 0044ef32
    PUSH EBP                            ; 0044ef33
    MOV EBP,ESP                         ; 0044ef34
    SUB ESP,0x78                        ; 0044ef36
    AND ESP,0xfffffff8                  ; 0044ef39
    MOV ECX,0x1                         ; 0044ef3c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ef41
    XOR EDX,EDX                         ; 0044ef44
    MOV dword ptr [ESP + 0x50],ECX      ; 0044ef46
    MOV EBX,dword ptr [EAX + 0x154]     ; 0044ef4a
    MOV dword ptr [ESP],EDX             ; 0044ef50
    CMP EBX,ECX                         ; 0044ef53
    JLE 0x0044f158                      ; 0044ef55
        ;   XREF to: 0044f158 (CONDITIONAL_JUMP)  ; LAB_0044f158
    MOV EBX,0x500                       ; 0044ef5b
    MOV ECX,0xf00                       ; 0044ef60
    MOV dword ptr [ESP + 0x48],EBX      ; 0044ef65
    MOV dword ptr [ESP + 0x44],ECX      ; 0044ef69
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044ef6d
        ;   Label: LAB_0044ef6d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044ef70
    IMUL EAX,dword ptr [EDX + 0x14c]    ; 0044ef74
    MOV EDI,0x1                         ; 0044ef7b
    MOV dword ptr [ESP + 0x60],EDI      ; 0044ef80
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4354c] ; 0044ef84 | DAT_01c4354c
    MOV EDX,dword ptr [EDX + 0x150]     ; 0044ef8b
    MOV dword ptr [ESP + 0x64],EAX      ; 0044ef91
    CMP EDX,EDI                         ; 0044ef95
    JLE 0x0044f122                      ; 0044ef97
        ;   XREF to: 0044f122 (CONDITIONAL_JUMP)  ; LAB_0044f122
    MOV EBX,dword ptr [ESP + 0x44]      ; 0044ef9d
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044efa1
    ADD EBX,0xc                         ; 0044efa5
    ADD EAX,0x4                         ; 0044efa8
    MOV dword ptr [ESP + 0x58],EBX      ; 0044efab
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044efaf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044efb3
        ;   Label: LAB_0044efb3
    MOV ESI,dword ptr [ESP + 0x64]      ; 0044efb6
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044efba
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044efc0
    SHL EAX,0x2                         ; 0044efc3
    MOV EDI,dword ptr [EDX + 0x14c]     ; 0044efc6
    ADD ESI,EAX                         ; 0044efcc
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044efce
    IMUL EAX,EDI                        ; 0044efd2
    PUSH EAX                            ; 0044efd5
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044efd6
    IMUL EAX,EDI                        ; 0044efda
    PUSH EAX                            ; 0044efdd
    MOV dword ptr [ESP + 0x6c],ESI      ; 0044efde
    PUSH EDX                            ; 0044efe2
    LEA ESI,[ESP + 0x10]                ; 0044efe3
    LEA EDI,[ESP + 0x34]                ; 0044efe7
    CALL core_dcamera.cpp_FUN_0044dd70  ; 0044efeb
        ;   XREF to: 0044dd70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0044dd70()
    LEA ESI,[ESP + 0x10]                ; 0044eff0
    ADD ESP,0xc                         ; 0044eff4
    MOVSD ES:EDI,ESI                    ; 0044eff7
    MOVSD ES:EDI,ESI                    ; 0044eff8
    MOVSD ES:EDI,ESI                    ; 0044eff9
    MOV EDI,dword ptr [ESP + 0x30]      ; 0044effa
    CMP EDI,0x7fffffff                  ; 0044effe
    JZ 0x0044f00e                       ; 0044f004
        ;   XREF to: 0044f00e (CONDITIONAL_JUMP)  ; LAB_0044f00e
    CMP EDI,dword ptr [ESP]             ; 0044f006
    JLE 0x0044f00e                      ; 0044f009
        ;   XREF to: 0044f00e (CONDITIONAL_JUMP)  ; LAB_0044f00e
    MOV dword ptr [ESP],EDI             ; 0044f00b
    LEA EAX,[ESP + 0x28]                ; 0044f00e
        ;   Label: LAB_0044f00e
    PUSH EAX                            ; 0044f012
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044f013
    PUSH ECX                            ; 0044f016
    LEA ESI,[ESP + 0x3c]                ; 0044f017
    LEA EDI,[ESP + 0x24]                ; 0044f01b
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40 ; 0044f01f
        ;   XREF to: 0044de40 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044de40(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x3c]                ; 0044f024
    ADD ESP,0x8                         ; 0044f028
    MOVSD ES:EDI,ESI                    ; 0044f02b
    MOVSD ES:EDI,ESI                    ; 0044f02c
    MOVSD ES:EDI,ESI                    ; 0044f02d
    MOV EDI,dword ptr [ESP + 0x58]      ; 0044f02e
    LEA ESI,[ESP + 0x34]                ; 0044f032
    LEA EDI,[EDI + 0x939bd8]            ; 0044f036
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044f03c
    MOVSD ES:EDI,ESI                    ; 0044f040 | DAT_0093aae4
    MOVSD ES:EDI,ESI                    ; 0044f041 | DAT_0093aae8
    MOVSD ES:EDI,ESI                    ; 0044f042 | DAT_0093aaec
    MOV EAX,dword ptr [EAX]             ; 0044f043
    SHR EAX,0x18                        ; 0044f045
    TEST EAX,EAX                        ; 0044f048
    JZ 0x0044f06d                       ; 0044f04a
        ;   XREF to: 0044f06d (CONDITIONAL_JUMP)  ; LAB_0044f06d
    PUSH EAX                            ; 0044f04c
    LEA EAX,[ESP + 0x2c]                ; 0044f04d
    PUSH EAX                            ; 0044f051
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044f052
    PUSH ESI                            ; 0044f055
    LEA ESI,[ESP + 0x1c]                ; 0044f056
    LEA EDI,[ESP + 0x28]                ; 0044f05a
    CALL core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_004546d0 ; 0044f05e
        ;   XREF to: 004546d0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_004546d0(CDemonCamera * this_ptr, CVector3i * screen_pos, int alpha_index, CVector3i * world_pos)
    LEA ESI,[ESP + 0x1c]                ; 0044f063
    ADD ESP,0xc                         ; 0044f067
    MOVSD ES:EDI,ESI                    ; 0044f06a
    MOVSD ES:EDI,ESI                    ; 0044f06b
    MOVSD ES:EDI,ESI                    ; 0044f06c
    LEA ESI,[ESP + 0x1c]                ; 0044f06d
        ;   Label: LAB_0044f06d
    LEA EDI,[EBX + 0x857cd8]            ; 0044f071 | DAT_00858be4
    MOVSD ES:EDI,ESI                    ; 0044f077 | DAT_00858be4
    MOVSD ES:EDI,ESI                    ; 0044f078 | DAT_00858be8
    MOVSD ES:EDI,ESI                    ; 0044f079 | DAT_00858bec
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0044f07a
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044f07e
    MOV dword ptr [EDX + 0xb36198],EAX  ; 0044f082 | DAT_00b3669c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044f088
    MOV ESI,dword ptr [ESP + 0x64]      ; 0044f08c
    MOV EAX,dword ptr [EAX]             ; 0044f090
    MOV EDX,dword ptr [ESP + 0x64]      ; 0044f092
    SHR EAX,0x10                        ; 0044f096
    MOV EDX,dword ptr [EDX]             ; 0044f099
    AND EAX,0xff                        ; 0044f09b
    SHR EDX,0x8                         ; 0044f0a0
    CBW                                 ; 0044f0a3
    AND EDX,0xff                        ; 0044f0a5
    MOV dword ptr [ESP + 0x74],EAX      ; 0044f0ab
    MOV DH,byte ptr [ESI]               ; 0044f0af
    FILD word ptr [ESP + 0x74]          ; 0044f0b1
    MOVSX AX,DL                         ; 0044f0b5
    FLD double ptr [0x005d771f]         ; 0044f0b9 | DAT_005d771f
    FXCH                                ; 0044f0bf
    FMUL ST1                            ; 0044f0c1
    MOV dword ptr [ESP + 0x74],EAX      ; 0044f0c3
    MOVSX AX,DH                         ; 0044f0c7
    FILD word ptr [ESP + 0x74]          ; 0044f0cb
    MOV dword ptr [ESP + 0x74],EAX      ; 0044f0cf
    FMUL ST2                            ; 0044f0d3
    FILD word ptr [ESP + 0x74]          ; 0044f0d5
    FMULP ST3                           ; 0044f0d9
    MOV ECX,dword ptr [ESP + 0x58]      ; 0044f0db
    ADD EBX,0xc                         ; 0044f0df
    ADD ECX,0xc                         ; 0044f0e2
    MOV EDI,dword ptr [ESP + 0x60]      ; 0044f0e5
    MOV dword ptr [ESP + 0x58],ECX      ; 0044f0e9
    INC EDI                             ; 0044f0ed
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0044f0ee
    MOV dword ptr [ESP + 0x60],EDI      ; 0044f0f2
    ADD ESI,0x4                         ; 0044f0f6
    FXCH                                ; 0044f0f9
    FSTP float ptr [EBX + 0xa1bacc]     ; 0044f0fb | DAT_00a1c9e4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f101
    FSTP float ptr [EBX + 0xa1bad0]     ; 0044f104 | DAT_00a1c9e8
    FSTP float ptr [EBX + 0xa1bad4]     ; 0044f10a | DAT_00a1c9ec
    MOV ECX,dword ptr [EDX + 0x150]     ; 0044f110
    MOV dword ptr [ESP + 0x5c],ESI      ; 0044f116
    CMP EDI,ECX                         ; 0044f11a
    JL 0x0044efb3                       ; 0044f11c
        ;   XREF to: 0044efb3 (CONDITIONAL_JUMP)  ; LAB_0044efb3
    MOV ESI,dword ptr [ESP + 0x44]      ; 0044f122
        ;   Label: LAB_0044f122
    MOV EDI,dword ptr [ESP + 0x48]      ; 0044f126
    MOV EAX,dword ptr [ESP + 0x50]      ; 0044f12a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f12e
    ADD ESI,0xf00                       ; 0044f131
    ADD EDI,0x500                       ; 0044f137
    INC EAX                             ; 0044f13d
    MOV ECX,dword ptr [EDX + 0x154]     ; 0044f13e
    MOV dword ptr [ESP + 0x44],ESI      ; 0044f144
    MOV dword ptr [ESP + 0x48],EDI      ; 0044f148
    MOV dword ptr [ESP + 0x50],EAX      ; 0044f14c
    CMP EAX,ECX                         ; 0044f150
    JL 0x0044ef6d                       ; 0044f152
        ;   XREF to: 0044ef6d (CONDITIONAL_JUMP)  ; LAB_0044ef6d
    MOV EAX,dword ptr [ESP]             ; 0044f158
        ;   Label: LAB_0044f158
    MOV dword ptr [ESP + 0x70],EAX      ; 0044f15b
    FILD dword ptr [ESP + 0x70]         ; 0044f15f
    FMUL double ptr [0x005d7717]        ; 0044f163 | DAT_005d7717
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f169
    XOR ESI,ESI                         ; 0044f16c
    MOV EBX,EAX                         ; 0044f16e
    PUSH EAX                            ; 0044f170
    FSTP float ptr [EAX + 0x140]        ; 0044f171
    CALL core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 ; 0044f177
        ;   XREF to: 00453610 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044f17c
    MOV EAX,EBX                         ; 0044f17f
    MOV dword ptr [0x00b81ca4],ESI      ; 0044f181 | DAT_00b81ca4
    MOV dword ptr [0x01289ca8],ESI      ; 0044f187 | DAT_01289ca8
    MOV EDX,dword ptr [EAX + 0x148]     ; 0044f18d
    MOV dword ptr [0x01323d04],ESI      ; 0044f193 | DAT_01323d04
    CMP EDX,0x1e0                       ; 0044f199
    JL 0x0044eef9                       ; 0044f19f
        ;   XREF to: 0044eef9 (CONDITIONAL_JUMP)  ; LAB_0044eef9
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044f1a5
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044f1ab
    SHL EAX,0x2                         ; 0044f1af
    MOV dword ptr [ESP + 0x40],EAX      ; 0044f1b2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f1b6
        ;   Label: LAB_0044f1b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f1b9
    MOV EDI,dword ptr [EDX + 0x14c]     ; 0044f1bc
    MOV EAX,dword ptr [EAX + 0x148]     ; 0044f1c2
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0044f1c8
    SUB EAX,EDI                         ; 0044f1cc
    CMP EAX,EDX                         ; 0044f1ce
    JLE 0x0044eef9                      ; 0044f1d0
        ;   XREF to: 0044eef9 (CONDITIONAL_JUMP)  ; LAB_0044eef9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044f1d6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044f1d9
    MOV EDI,dword ptr [EDI + 0x14c]     ; 0044f1dd
    MOV dword ptr [ESP + 0x4c],EAX      ; 0044f1e3
    LEA EAX,[EDI*0x4 + 0x0]             ; 0044f1e7
    MOV dword ptr [ESP + 0x54],EAX      ; 0044f1ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f1f2
        ;   Label: LAB_0044f1f2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f1f5
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0044f1f8
    MOV EDX,dword ptr [EDX + 0x144]     ; 0044f1fe
    ADD EAX,EAX                         ; 0044f204
    SUB EDX,EAX                         ; 0044f206
    CMP EDI,EDX                         ; 0044f208
    JL 0x0044f222                       ; 0044f20a
        ;   XREF to: 0044f222 (CONDITIONAL_JUMP)  ; LAB_0044f222
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0044f20c
    MOV ECX,dword ptr [ESP + 0x40]      ; 0044f210
    INC EBX                             ; 0044f214
    ADD ECX,0x4                         ; 0044f215
    MOV dword ptr [ESP + 0x6c],EBX      ; 0044f218
    MOV dword ptr [ESP + 0x40],ECX      ; 0044f21c
    JMP 0x0044f1b6                      ; 0044f220
        ;   XREF to: 0044f1b6 (UNCONDITIONAL_JUMP)  ; LAB_0044f1b6
    CMP dword ptr [0x01323d04],0x2710   ; 0044f222 | DAT_01323d04
        ;   Label: LAB_0044f222
    JGE 0x0044f339                      ; 0044f22c
        ;   XREF to: 0044f339 (CONDITIONAL_JUMP)  ; LAB_0044f339
    TEST DI,0x1                         ; 0044f232
    JZ 0x0044f32e                       ; 0044f237
        ;   XREF to: 0044f32e (CONDITIONAL_JUMP)  ; LAB_0044f32e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044f23d
        ;   Label: LAB_0044f23d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044f241
    MOV EAX,dword ptr [EAX + 0x1c4480c] ; 0044f245 | DAT_01c4480c
    ADD EAX,EDX                         ; 0044f24b
    MOV EBX,dword ptr [EAX]             ; 0044f24d
    MOV ESI,0x7fffffff                  ; 0044f24f
    TEST EBX,EBX                        ; 0044f254
    JNZ 0x0044f34a                      ; 0044f256
        ;   XREF to: 0044f34a (CONDITIONAL_JUMP)  ; LAB_0044f34a
    MOV EBX,ESI                         ; 0044f25c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044f25e
        ;   Label: LAB_0044f25e
    MOV CL,byte ptr [0x01323d00]        ; 0044f262 | DAT_01323d00
    SAR EAX,CL                          ; 0044f268
    IMUL EDX,EAX,0x500                  ; 0044f26a
    MOV EAX,EDI                         ; 0044f270
    SAR EAX,CL                          ; 0044f272
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xb36198] ; 0044f274
    MOV dword ptr [ESP + 0x68],EBX      ; 0044f27b
    SUB EBX,EAX                         ; 0044f27f
    MOV EAX,EBX                         ; 0044f281
    CDQ                                 ; 0044f283
    XOR EAX,EDX                         ; 0044f284
    SUB EAX,EDX                         ; 0044f286
    CMP EAX,0x400                       ; 0044f288
    JLE 0x0044f339                      ; 0044f28d
        ;   XREF to: 0044f339 (CONDITIONAL_JUMP)  ; LAB_0044f339
    XOR EBX,EBX                         ; 0044f293
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044f295
        ;   Label: LAB_0044f295
    MOV CL,byte ptr [0x01323d00]        ; 0044f299 | DAT_01323d00
    SAR EAX,CL                          ; 0044f29f
    ADD EAX,dword ptr [EBX + 0x61125c]  ; 0044f2a1 | DAT_0061125c | DAT_00611260
    IMUL EDX,EAX,0x500                  ; 0044f2a7
    MOV CL,byte ptr [0x01323d00]        ; 0044f2ad | DAT_01323d00
    MOV EAX,EDI                         ; 0044f2b3
    SAR EAX,CL                          ; 0044f2b5
    ADD EAX,dword ptr [EBX + 0x61123c]  ; 0044f2b7 | DAT_0061123c | DAT_00611240
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xb36198] ; 0044f2bd
    MOV EDX,dword ptr [ESP + 0x68]      ; 0044f2c4
    SUB EDX,EAX                         ; 0044f2c8
    MOV EAX,EDX                         ; 0044f2ca
    CDQ                                 ; 0044f2cc
    XOR EAX,EDX                         ; 0044f2cd
    SUB EAX,EDX                         ; 0044f2cf
    CMP EAX,ESI                         ; 0044f2d1
    JGE 0x0044f2fa                      ; 0044f2d3
        ;   XREF to: 0044f2fa (CONDITIONAL_JUMP)  ; LAB_0044f2fa
    MOV EDX,dword ptr [EBX + 0x61125c]  ; 0044f2d5 | DAT_0061125c
    MOV ESI,EAX                         ; 0044f2db
    IMUL EAX,EDX,0x140                  ; 0044f2dd
    MOV EDX,dword ptr [EBX + 0x61123c]  ; 0044f2e3 | DAT_0061123c
    MOV ECX,dword ptr [0x01323d04]      ; 0044f2e9 | DAT_01323d04
    ADD EDX,EAX                         ; 0044f2ef
    IMUL EAX,ECX,0xc                    ; 0044f2f1
    MOV dword ptr [EAX + 0x1323d08],EDX ; 0044f2f4
    ADD EBX,0x4                         ; 0044f2fa
        ;   Label: LAB_0044f2fa
    CMP EBX,0x20                        ; 0044f2fd
    JNZ 0x0044f295                      ; 0044f300
        ;   XREF to: 0044f295 (CONDITIONAL_JUMP)  ; LAB_0044f295
    MOV EBX,dword ptr [0x01323d04]      ; 0044f302 | DAT_01323d04
    IMUL EAX,EBX,0xc                    ; 0044f308
    CMP dword ptr [EAX + 0x1323d08],0x0 ; 0044f30b
    JZ 0x0044f339                       ; 0044f312
        ;   XREF to: 0044f339 (CONDITIONAL_JUMP)  ; LAB_0044f339
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0044f314
    MOV dword ptr [EAX + 0x1323d0c],EDI ; 0044f318
    MOV dword ptr [EAX + 0x1323d10],EDX ; 0044f31e
    LEA EAX,[EBX + 0x1]                 ; 0044f324
    MOV [0x01323d04],EAX                ; 0044f327 | DAT_01323d04
    JMP 0x0044f339                      ; 0044f32c
        ;   XREF to: 0044f339 (UNCONDITIONAL_JUMP)  ; LAB_0044f339
    TEST byte ptr [ESP + 0x6c],0x1      ; 0044f32e
        ;   Label: LAB_0044f32e
    JNZ 0x0044f23d                      ; 0044f333
        ;   XREF to: 0044f23d (CONDITIONAL_JUMP)  ; LAB_0044f23d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044f339
        ;   Label: LAB_0044f339
    ADD EDX,0x4                         ; 0044f33d
    INC EDI                             ; 0044f340
    MOV dword ptr [ESP + 0x54],EDX      ; 0044f341
    JMP 0x0044f1f2                      ; 0044f345
        ;   XREF to: 0044f1f2 (UNCONDITIONAL_JUMP)  ; LAB_0044f1f2
    MOV EDX,ESI                         ; 0044f34a
        ;   Label: LAB_0044f34a
    MOV EAX,ESI                         ; 0044f34c
    SAR EDX,0x1f                        ; 0044f34e
    IDIV EBX                            ; 0044f351
    MOV EBX,EAX                         ; 0044f353
    JMP 0x0044f25e                      ; 0044f355
        ;   XREF to: 0044f25e (UNCONDITIONAL_JUMP)  ; LAB_0044f25e

