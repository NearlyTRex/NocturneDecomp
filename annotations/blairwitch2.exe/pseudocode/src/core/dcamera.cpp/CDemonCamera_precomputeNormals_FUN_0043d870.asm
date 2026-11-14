; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0043d870(CDemonCamera *this_ptr)
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
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e4bd
;   core_set.cpp_FUN_0052d3c0 at 0052d6f9
;
; Referenced Globals:
;   undefined4 DAT_005ce44e
;   undefined4 DAT_005ce456
;   undefined4 DAT_00609fb0
;   undefined4 DAT_00609fb4
;   undefined4 DAT_00609fd0
;   undefined4 DAT_00609fd4
;   undefined4 DAT_0083d6e0
;   undefined4 DAT_0083d6e4
;   undefined4 DAT_0083d6e8
;   undefined4 DAT_0091f5e0
;   undefined4 DAT_0091f5e4
;   undefined4 DAT_0091f5e8
;   undefined4 DAT_00a014e0
;   undefined4 DAT_00a014e4
;   undefined4 DAT_00a014e8
;   ... and 7 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00443020
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
;   core_dcamera.cpp_FUN_0043c6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d870
        ;   Label: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870
    PUSH ESI                            ; 0043d871
    PUSH EDI                            ; 0043d872
    PUSH EBP                            ; 0043d873
    MOV EBP,ESP                         ; 0043d874
    SUB ESP,0x78                        ; 0043d876
    AND ESP,0xfffffff8                  ; 0043d879
    MOV ECX,0x1                         ; 0043d87c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d881
    XOR EDX,EDX                         ; 0043d884
    MOV dword ptr [ESP + 0x50],ECX      ; 0043d886
    MOV EBX,dword ptr [EAX + 0x154]     ; 0043d88a
    MOV dword ptr [ESP],EDX             ; 0043d890
    CMP EBX,ECX                         ; 0043d893
    JLE 0x0043da98                      ; 0043d895
        ;   XREF to: 0043da98 (CONDITIONAL_JUMP)  ; LAB_0043da98
    MOV EBX,0x500                       ; 0043d89b
    MOV ECX,0xf00                       ; 0043d8a0
    MOV dword ptr [ESP + 0x48],EBX      ; 0043d8a5
    MOV dword ptr [ESP + 0x44],ECX      ; 0043d8a9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043d8ad
        ;   Label: LAB_0043d8ad
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043d8b0
    IMUL EAX,dword ptr [EDX + 0x14c]    ; 0043d8b4
    MOV EDI,0x1                         ; 0043d8bb
    MOV dword ptr [ESP + 0x60],EDI      ; 0043d8c0
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2a38c] ; 0043d8c4 | DAT_01c2a38c
    MOV EDX,dword ptr [EDX + 0x150]     ; 0043d8cb
    MOV dword ptr [ESP + 0x64],EAX      ; 0043d8d1
    CMP EDX,EDI                         ; 0043d8d5
    JLE 0x0043da62                      ; 0043d8d7
        ;   XREF to: 0043da62 (CONDITIONAL_JUMP)  ; LAB_0043da62
    MOV EBX,dword ptr [ESP + 0x44]      ; 0043d8dd
    MOV EAX,dword ptr [ESP + 0x48]      ; 0043d8e1
    ADD EBX,0xc                         ; 0043d8e5
    ADD EAX,0x4                         ; 0043d8e8
    MOV dword ptr [ESP + 0x58],EBX      ; 0043d8eb
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043d8ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d8f3
        ;   Label: LAB_0043d8f3
    MOV ESI,dword ptr [ESP + 0x64]      ; 0043d8f6
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0043d8fa
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043d900
    SHL EAX,0x2                         ; 0043d903
    MOV EDI,dword ptr [EDX + 0x14c]     ; 0043d906
    ADD ESI,EAX                         ; 0043d90c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043d90e
    IMUL EAX,EDI                        ; 0043d912
    PUSH EAX                            ; 0043d915
    MOV EAX,dword ptr [ESP + 0x64]      ; 0043d916
    IMUL EAX,EDI                        ; 0043d91a
    PUSH EAX                            ; 0043d91d
    MOV dword ptr [ESP + 0x6c],ESI      ; 0043d91e
    PUSH EDX                            ; 0043d922
    LEA ESI,[ESP + 0x10]                ; 0043d923
    LEA EDI,[ESP + 0x34]                ; 0043d927
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 0043d92b
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[ESP + 0x10]                ; 0043d930
    ADD ESP,0xc                         ; 0043d934
    MOVSD ES:EDI,ESI                    ; 0043d937
    MOVSD ES:EDI,ESI                    ; 0043d938
    MOVSD ES:EDI,ESI                    ; 0043d939
    MOV EDI,dword ptr [ESP + 0x30]      ; 0043d93a
    CMP EDI,0x7fffffff                  ; 0043d93e
    JZ 0x0043d94e                       ; 0043d944
        ;   XREF to: 0043d94e (CONDITIONAL_JUMP)  ; LAB_0043d94e
    CMP EDI,dword ptr [ESP]             ; 0043d946
    JLE 0x0043d94e                      ; 0043d949
        ;   XREF to: 0043d94e (CONDITIONAL_JUMP)  ; LAB_0043d94e
    MOV dword ptr [ESP],EDI             ; 0043d94b
    LEA EAX,[ESP + 0x28]                ; 0043d94e
        ;   Label: LAB_0043d94e
    PUSH EAX                            ; 0043d952
    MOV ECX,dword ptr [EBP + 0x14]      ; 0043d953
    PUSH ECX                            ; 0043d956
    LEA ESI,[ESP + 0x3c]                ; 0043d957
    LEA EDI,[ESP + 0x24]                ; 0043d95b
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780 ; 0043d95f
        ;   XREF to: 0043c780 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x3c]                ; 0043d964
    ADD ESP,0x8                         ; 0043d968
    MOVSD ES:EDI,ESI                    ; 0043d96b
    MOVSD ES:EDI,ESI                    ; 0043d96c
    MOVSD ES:EDI,ESI                    ; 0043d96d
    MOV EDI,dword ptr [ESP + 0x58]      ; 0043d96e
    LEA ESI,[ESP + 0x34]                ; 0043d972
    LEA EDI,[EDI + 0x91e6d4]            ; 0043d976
    MOV EAX,dword ptr [ESP + 0x64]      ; 0043d97c
    MOVSD ES:EDI,ESI                    ; 0043d980 | DAT_0091f5e0
    MOVSD ES:EDI,ESI                    ; 0043d981 | DAT_0091f5e4
    MOVSD ES:EDI,ESI                    ; 0043d982 | DAT_0091f5e8
    MOV EAX,dword ptr [EAX]             ; 0043d983
    SHR EAX,0x18                        ; 0043d985
    TEST EAX,EAX                        ; 0043d988
    JZ 0x0043d9ad                       ; 0043d98a
        ;   XREF to: 0043d9ad (CONDITIONAL_JUMP)  ; LAB_0043d9ad
    PUSH EAX                            ; 0043d98c
    LEA EAX,[ESP + 0x2c]                ; 0043d98d
    PUSH EAX                            ; 0043d991
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043d992
    PUSH ESI                            ; 0043d995
    LEA ESI,[ESP + 0x1c]                ; 0043d996
    LEA EDI,[ESP + 0x28]                ; 0043d99a
    CALL core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00443020 ; 0043d99e
        ;   XREF to: 00443020 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00443020(CDemonCamera * this_ptr, CVector3i * screen_pos, int alpha_index, CVector3i * world_pos)
    LEA ESI,[ESP + 0x1c]                ; 0043d9a3
    ADD ESP,0xc                         ; 0043d9a7
    MOVSD ES:EDI,ESI                    ; 0043d9aa
    MOVSD ES:EDI,ESI                    ; 0043d9ab
    MOVSD ES:EDI,ESI                    ; 0043d9ac
    LEA ESI,[ESP + 0x1c]                ; 0043d9ad
        ;   Label: LAB_0043d9ad
    LEA EDI,[EBX + 0x83c7d4]            ; 0043d9b1 | DAT_0083d6e0
    MOVSD ES:EDI,ESI                    ; 0043d9b7 | DAT_0083d6e0
    MOVSD ES:EDI,ESI                    ; 0043d9b8 | DAT_0083d6e4
    MOVSD ES:EDI,ESI                    ; 0043d9b9 | DAT_0083d6e8
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0043d9ba
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043d9be
    MOV dword ptr [EDX + 0xb1ac98],EAX  ; 0043d9c2 | DAT_00b1b19c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0043d9c8
    MOV ESI,dword ptr [ESP + 0x64]      ; 0043d9cc
    MOV EAX,dword ptr [EAX]             ; 0043d9d0
    MOV EDX,dword ptr [ESP + 0x64]      ; 0043d9d2
    SHR EAX,0x10                        ; 0043d9d6
    MOV EDX,dword ptr [EDX]             ; 0043d9d9
    AND EAX,0xff                        ; 0043d9db
    SHR EDX,0x8                         ; 0043d9e0
    CBW                                 ; 0043d9e3
    AND EDX,0xff                        ; 0043d9e5
    MOV dword ptr [ESP + 0x74],EAX      ; 0043d9eb
    MOV DH,byte ptr [ESI]               ; 0043d9ef
    FILD word ptr [ESP + 0x74]          ; 0043d9f1
    MOVSX AX,DL                         ; 0043d9f5
    FLD double ptr [0x005ce456]         ; 0043d9f9 | DAT_005ce456
    FXCH                                ; 0043d9ff
    FMUL ST1                            ; 0043da01
    MOV dword ptr [ESP + 0x74],EAX      ; 0043da03
    MOVSX AX,DH                         ; 0043da07
    FILD word ptr [ESP + 0x74]          ; 0043da0b
    MOV dword ptr [ESP + 0x74],EAX      ; 0043da0f
    FMUL ST2                            ; 0043da13
    FILD word ptr [ESP + 0x74]          ; 0043da15
    FMULP ST3                           ; 0043da19
    MOV ECX,dword ptr [ESP + 0x58]      ; 0043da1b
    ADD EBX,0xc                         ; 0043da1f
    ADD ECX,0xc                         ; 0043da22
    MOV EDI,dword ptr [ESP + 0x60]      ; 0043da25
    MOV dword ptr [ESP + 0x58],ECX      ; 0043da29
    INC EDI                             ; 0043da2d
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0043da2e
    MOV dword ptr [ESP + 0x60],EDI      ; 0043da32
    ADD ESI,0x4                         ; 0043da36
    FXCH                                ; 0043da39
    FSTP float ptr [EBX + 0xa005c8]     ; 0043da3b | DAT_00a014e0
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043da41
    FSTP float ptr [EBX + 0xa005cc]     ; 0043da44 | DAT_00a014e4
    FSTP float ptr [EBX + 0xa005d0]     ; 0043da4a | DAT_00a014e8
    MOV ECX,dword ptr [EDX + 0x150]     ; 0043da50
    MOV dword ptr [ESP + 0x5c],ESI      ; 0043da56
    CMP EDI,ECX                         ; 0043da5a
    JL 0x0043d8f3                       ; 0043da5c
        ;   XREF to: 0043d8f3 (CONDITIONAL_JUMP)  ; LAB_0043d8f3
    MOV ESI,dword ptr [ESP + 0x44]      ; 0043da62
        ;   Label: LAB_0043da62
    MOV EDI,dword ptr [ESP + 0x48]      ; 0043da66
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043da6a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043da6e
    ADD ESI,0xf00                       ; 0043da71
    ADD EDI,0x500                       ; 0043da77
    INC EAX                             ; 0043da7d
    MOV ECX,dword ptr [EDX + 0x154]     ; 0043da7e
    MOV dword ptr [ESP + 0x44],ESI      ; 0043da84
    MOV dword ptr [ESP + 0x48],EDI      ; 0043da88
    MOV dword ptr [ESP + 0x50],EAX      ; 0043da8c
    CMP EAX,ECX                         ; 0043da90
    JL 0x0043d8ad                       ; 0043da92
        ;   XREF to: 0043d8ad (CONDITIONAL_JUMP)  ; LAB_0043d8ad
    MOV EAX,dword ptr [ESP]             ; 0043da98
        ;   Label: LAB_0043da98
    MOV dword ptr [ESP + 0x70],EAX      ; 0043da9b
    FILD dword ptr [ESP + 0x70]         ; 0043da9f
    FMUL double ptr [0x005ce44e]        ; 0043daa3 | DAT_005ce44e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043daa9
    XOR ESI,ESI                         ; 0043daac
    MOV EBX,EAX                         ; 0043daae
    PUSH EAX                            ; 0043dab0
    FSTP float ptr [EAX + 0x140]        ; 0043dab1
    CALL core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 ; 0043dab7
        ;   XREF to: 00441f50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0043dabc
    MOV EAX,EBX                         ; 0043dabf
    MOV dword ptr [0x00b667a4],ESI      ; 0043dac1 | DAT_00b667a4
    MOV dword ptr [0x0126e7a8],ESI      ; 0043dac7 | DAT_0126e7a8
    MOV EDX,dword ptr [EAX + 0x148]     ; 0043dacd
    MOV dword ptr [0x01308804],ESI      ; 0043dad3 | DAT_01308804
    CMP EDX,0x1e0                       ; 0043dad9
    JL 0x0043d839                       ; 0043dadf
        ;   XREF to: 0043d839 (CONDITIONAL_JUMP)  ; LAB_0043d839
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0043dae5
    MOV dword ptr [ESP + 0x6c],EAX      ; 0043daeb
    SHL EAX,0x2                         ; 0043daef
    MOV dword ptr [ESP + 0x40],EAX      ; 0043daf2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043daf6
        ;   Label: LAB_0043daf6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043daf9
    MOV EDI,dword ptr [EDX + 0x14c]     ; 0043dafc
    MOV EAX,dword ptr [EAX + 0x148]     ; 0043db02
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0043db08
    SUB EAX,EDI                         ; 0043db0c
    CMP EAX,EDX                         ; 0043db0e
    JLE 0x0043d839                      ; 0043db10
        ;   XREF to: 0043d839 (CONDITIONAL_JUMP)  ; LAB_0043d839
    MOV EDI,dword ptr [EBP + 0x14]      ; 0043db16
    MOV EAX,dword ptr [ESP + 0x40]      ; 0043db19
    MOV EDI,dword ptr [EDI + 0x14c]     ; 0043db1d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0043db23
    LEA EAX,[EDI*0x4 + 0x0]             ; 0043db27
    MOV dword ptr [ESP + 0x54],EAX      ; 0043db2e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043db32
        ;   Label: LAB_0043db32
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043db35
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0043db38
    MOV EDX,dword ptr [EDX + 0x144]     ; 0043db3e
    ADD EAX,EAX                         ; 0043db44
    SUB EDX,EAX                         ; 0043db46
    CMP EDI,EDX                         ; 0043db48
    JL 0x0043db62                       ; 0043db4a
        ;   XREF to: 0043db62 (CONDITIONAL_JUMP)  ; LAB_0043db62
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0043db4c
    MOV ECX,dword ptr [ESP + 0x40]      ; 0043db50
    INC EBX                             ; 0043db54
    ADD ECX,0x4                         ; 0043db55
    MOV dword ptr [ESP + 0x6c],EBX      ; 0043db58
    MOV dword ptr [ESP + 0x40],ECX      ; 0043db5c
    JMP 0x0043daf6                      ; 0043db60
        ;   XREF to: 0043daf6 (UNCONDITIONAL_JUMP)  ; LAB_0043daf6
    CMP dword ptr [0x01308804],0x2710   ; 0043db62 | DAT_01308804
        ;   Label: LAB_0043db62
    JGE 0x0043dc79                      ; 0043db6c
        ;   XREF to: 0043dc79 (CONDITIONAL_JUMP)  ; LAB_0043dc79
    TEST DI,0x1                         ; 0043db72
    JZ 0x0043dc6e                       ; 0043db77
        ;   XREF to: 0043dc6e (CONDITIONAL_JUMP)  ; LAB_0043dc6e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0043db7d
        ;   Label: LAB_0043db7d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0043db81
    MOV EAX,dword ptr [EAX + 0x1c2b64c] ; 0043db85 | DAT_01c2b64c
    ADD EAX,EDX                         ; 0043db8b
    MOV EBX,dword ptr [EAX]             ; 0043db8d
    MOV ESI,0x7fffffff                  ; 0043db8f
    TEST EBX,EBX                        ; 0043db94
    JNZ 0x0043dc8a                      ; 0043db96
        ;   XREF to: 0043dc8a (CONDITIONAL_JUMP)  ; LAB_0043dc8a
    MOV EBX,ESI                         ; 0043db9c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0043db9e
        ;   Label: LAB_0043db9e
    MOV CL,byte ptr [0x01308800]        ; 0043dba2 | DAT_01308800
    SAR EAX,CL                          ; 0043dba8
    IMUL EDX,EAX,0x500                  ; 0043dbaa
    MOV EAX,EDI                         ; 0043dbb0
    SAR EAX,CL                          ; 0043dbb2
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xb1ac98] ; 0043dbb4
    MOV dword ptr [ESP + 0x68],EBX      ; 0043dbbb
    SUB EBX,EAX                         ; 0043dbbf
    MOV EAX,EBX                         ; 0043dbc1
    CDQ                                 ; 0043dbc3
    XOR EAX,EDX                         ; 0043dbc4
    SUB EAX,EDX                         ; 0043dbc6
    CMP EAX,0x400                       ; 0043dbc8
    JLE 0x0043dc79                      ; 0043dbcd
        ;   XREF to: 0043dc79 (CONDITIONAL_JUMP)  ; LAB_0043dc79
    XOR EBX,EBX                         ; 0043dbd3
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0043dbd5
        ;   Label: LAB_0043dbd5
    MOV CL,byte ptr [0x01308800]        ; 0043dbd9 | DAT_01308800
    SAR EAX,CL                          ; 0043dbdf
    ADD EAX,dword ptr [EBX + 0x609fd0]  ; 0043dbe1 | DAT_00609fd0 | DAT_00609fd4
    IMUL EDX,EAX,0x500                  ; 0043dbe7
    MOV CL,byte ptr [0x01308800]        ; 0043dbed | DAT_01308800
    MOV EAX,EDI                         ; 0043dbf3
    SAR EAX,CL                          ; 0043dbf5
    ADD EAX,dword ptr [EBX + 0x609fb0]  ; 0043dbf7 | DAT_00609fb0 | DAT_00609fb4
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0xb1ac98] ; 0043dbfd
    MOV EDX,dword ptr [ESP + 0x68]      ; 0043dc04
    SUB EDX,EAX                         ; 0043dc08
    MOV EAX,EDX                         ; 0043dc0a
    CDQ                                 ; 0043dc0c
    XOR EAX,EDX                         ; 0043dc0d
    SUB EAX,EDX                         ; 0043dc0f
    CMP EAX,ESI                         ; 0043dc11
    JGE 0x0043dc3a                      ; 0043dc13
        ;   XREF to: 0043dc3a (CONDITIONAL_JUMP)  ; LAB_0043dc3a
    MOV EDX,dword ptr [EBX + 0x609fd0]  ; 0043dc15 | DAT_00609fd0
    MOV ESI,EAX                         ; 0043dc1b
    IMUL EAX,EDX,0x140                  ; 0043dc1d
    MOV EDX,dword ptr [EBX + 0x609fb0]  ; 0043dc23 | DAT_00609fb0
    MOV ECX,dword ptr [0x01308804]      ; 0043dc29 | DAT_01308804
    ADD EDX,EAX                         ; 0043dc2f
    IMUL EAX,ECX,0xc                    ; 0043dc31
    MOV dword ptr [EAX + 0x1308808],EDX ; 0043dc34
    ADD EBX,0x4                         ; 0043dc3a
        ;   Label: LAB_0043dc3a
    CMP EBX,0x20                        ; 0043dc3d
    JNZ 0x0043dbd5                      ; 0043dc40
        ;   XREF to: 0043dbd5 (CONDITIONAL_JUMP)  ; LAB_0043dbd5
    MOV EBX,dword ptr [0x01308804]      ; 0043dc42 | DAT_01308804
    IMUL EAX,EBX,0xc                    ; 0043dc48
    CMP dword ptr [EAX + 0x1308808],0x0 ; 0043dc4b
    JZ 0x0043dc79                       ; 0043dc52
        ;   XREF to: 0043dc79 (CONDITIONAL_JUMP)  ; LAB_0043dc79
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0043dc54
    MOV dword ptr [EAX + 0x130880c],EDI ; 0043dc58
    MOV dword ptr [EAX + 0x1308810],EDX ; 0043dc5e
    LEA EAX,[EBX + 0x1]                 ; 0043dc64
    MOV [0x01308804],EAX                ; 0043dc67 | DAT_01308804
    JMP 0x0043dc79                      ; 0043dc6c
        ;   XREF to: 0043dc79 (UNCONDITIONAL_JUMP)  ; LAB_0043dc79
    TEST byte ptr [ESP + 0x6c],0x1      ; 0043dc6e
        ;   Label: LAB_0043dc6e
    JNZ 0x0043db7d                      ; 0043dc73
        ;   XREF to: 0043db7d (CONDITIONAL_JUMP)  ; LAB_0043db7d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0043dc79
        ;   Label: LAB_0043dc79
    ADD EDX,0x4                         ; 0043dc7d
    INC EDI                             ; 0043dc80
    MOV dword ptr [ESP + 0x54],EDX      ; 0043dc81
    JMP 0x0043db32                      ; 0043dc85
        ;   XREF to: 0043db32 (UNCONDITIONAL_JUMP)  ; LAB_0043db32
    MOV EDX,ESI                         ; 0043dc8a
        ;   Label: LAB_0043dc8a
    MOV EAX,ESI                         ; 0043dc8c
    SAR EDX,0x1f                        ; 0043dc8e
    IDIV EBX                            ; 0043dc91
    MOV EBX,EAX                         ; 0043dc93
    JMP 0x0043db9e                      ; 0043dc95
        ;   XREF to: 0043db9e (UNCONDITIONAL_JUMP)  ; LAB_0043db9e

