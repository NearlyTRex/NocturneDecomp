; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920(int param_1,int param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x1870]:4  local_1870
; undefined        Stack[-0x186c]:1  local_186c
; undefined        Stack[-0x122c]:1  local_122c
; undefined        Stack[-0xbec]:1  local_bec
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x27c]:1  local_27c
; undefined        Stack[-0x26c]:1  local_26c
; undefined        Stack[-0x25c]:1  local_25c
; undefined        Stack[-0x24c]:1  local_24c
; undefined        Stack[-0x23c]:1  local_23c
; undefined        Stack[-0x22c]:1  local_22c
; undefined        Stack[-0x21c]:1  local_21c
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0x1ec]:1  local_1ec
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x15c]:1  local_15c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
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
;
; XREF[4]:
;   FUN_00497900 at 00497d82
;   FUN_005396d0 at 0053970e
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 at 0051b8af
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0 at 0051b901
;
; Called Functions:
;   core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;   FUN_0055d0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b920
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
    PUSH ESI                            ; 0051b921
    PUSH EDI                            ; 0051b922
    PUSH EBP                            ; 0051b923
    MOV EBP,ESP                         ; 0051b924
    SUB ESP,0x185c                      ; 0051b926
    AND ESP,0xfffffff8                  ; 0051b92c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0051b92f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051b932
    PUSH EDX                            ; 0051b935
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051b936
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    MOV ESI,EAX                         ; 0051b93b
    ADD ESP,0x4                         ; 0051b93d
    MOV EBX,EAX                         ; 0051b940
    MOV EAX,ESP                         ; 0051b942
    PUSH EAX                            ; 0051b944
    LEA EAX,[ESP + 0x17ec]              ; 0051b945
    PUSH EAX                            ; 0051b94c
    LEA EAX,[ESP + 0x17f4]              ; 0051b94d
    PUSH EAX                            ; 0051b954
    PUSH dword ptr [EBP + 0x1c]         ; 0051b955
    PUSH EDI                            ; 0051b958
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051b959
    PUSH ECX                            ; 0051b95c
    CALL core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070 ; 0051b95d
        ;   XREF to: 004e2070 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070()
    ADD ESP,0x18                        ; 0051b962
    CMP dword ptr [EBP + 0x20],0x0      ; 0051b965
    JL 0x0051b9f5                       ; 0051b969
        ;   XREF to: 0051b9f5 (CONDITIONAL_JUMP)  ; LAB_0051b9f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051b96f
    MOV EDX,dword ptr [EAX + 0x2250]    ; 0051b972
    CMP EDX,0x1                         ; 0051b978
    JZ 0x0051bc02                       ; 0051b97b
        ;   XREF to: 0051bc02 (CONDITIONAL_JUMP)  ; LAB_0051bc02
    CMP EDX,0x2                         ; 0051b981
    JZ 0x0051beb3                       ; 0051b984
        ;   XREF to: 0051beb3 (CONDITIONAL_JUMP)  ; LAB_0051beb3
    XOR EDI,EDI                         ; 0051b98a
    MOV EAX,dword ptr [ESI + 0x28558]   ; 0051b98c
    MOV dword ptr [ESP + 0x184c],EDI    ; 0051b992
    TEST EAX,EAX                        ; 0051b999
    JLE 0x0051b9ee                      ; 0051b99b
        ;   XREF to: 0051b9ee (CONDITIONAL_JUMP)  ; LAB_0051b9ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051b99d
    MOV dword ptr [ESP + 0x1810],EAX    ; 0051b9a0
    MOV ESI,dword ptr [EBP + 0x20]      ; 0051b9a7
        ;   Label: LAB_0051b9a7
    PUSH ESI                            ; 0051b9aa
    MOV EDI,dword ptr [ESP + 0x1850]    ; 0051b9ab
    PUSH EDI                            ; 0051b9b2
    PUSH EBX                            ; 0051b9b3
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051b9b4
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10()
    ADD ESP,0xc                         ; 0051b9b9
    TEST EAX,EAX                        ; 0051b9bc
    JGE 0x0051c383                      ; 0051b9be
        ;   XREF to: 0051c383 (CONDITIONAL_JUMP)  ; LAB_0051c383
    MOV EAX,dword ptr [ESP + 0x1810]    ; 0051b9c4
        ;   Label: LAB_0051b9c4
    MOV EDX,dword ptr [ESP + 0x184c]    ; 0051b9cb
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0051b9d2
    ADD EAX,0x10                        ; 0051b9d8
    INC EDX                             ; 0051b9db
    MOV dword ptr [ESP + 0x1810],EAX    ; 0051b9dc
    MOV dword ptr [ESP + 0x184c],EDX    ; 0051b9e3
    CMP EDX,ECX                         ; 0051b9ea
    JL 0x0051b9a7                       ; 0051b9ec
        ;   XREF to: 0051b9a7 (CONDITIONAL_JUMP)  ; LAB_0051b9a7
    MOV ESP,EBP                         ; 0051b9ee
        ;   Label: LAB_0051b9ee
    POP EBP                             ; 0051b9f0
    POP EDI                             ; 0051b9f1
    POP ESI                             ; 0051b9f2
    POP EBX                             ; 0051b9f3
    RET                                 ; 0051b9f4
    XOR ECX,ECX                         ; 0051b9f5
        ;   Label: LAB_0051b9f5
    MOV EDI,dword ptr [ESI + 0x28558]   ; 0051b9f7
    MOV dword ptr [ESP + 0x183c],ECX    ; 0051b9fd
    TEST EDI,EDI                        ; 0051ba04
    JLE 0x0051bab0                      ; 0051ba06
        ;   XREF to: 0051bab0 (CONDITIONAL_JUMP)  ; LAB_0051bab0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051ba0c
    MOV dword ptr [ESP + 0x1814],EAX    ; 0051ba0f
    MOV dword ptr [ESP + 0x1834],EAX    ; 0051ba16
    MOV ESI,dword ptr [ESP + 0x17e8]    ; 0051ba1d
        ;   Label: LAB_0051ba1d
    PUSH dword ptr [ESP]                ; 0051ba24
    PUSH ESI                            ; 0051ba27
    MOV EDI,dword ptr [ESP + 0x17f4]    ; 0051ba28
    PUSH EDI                            ; 0051ba2f
    MOV EAX,dword ptr [ESP + 0x1848]    ; 0051ba30
    PUSH EAX                            ; 0051ba37
    PUSH EBX                            ; 0051ba38
    LEA ESI,[ESP + 0x1638]              ; 0051ba39
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051ba40
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80()
    ADD ESP,0x14                        ; 0051ba45
    LEA ESI,[ESP + 0x1624]              ; 0051ba48
    MOV EDI,dword ptr [ESP + 0x1814]    ; 0051ba4f
    MOV EAX,dword ptr [ESP + 0x1834]    ; 0051ba56
    MOV ECX,dword ptr [ESP + 0x1814]    ; 0051ba5d
    LEA EDX,[EAX + 0x4]                 ; 0051ba64
    LEA EDI,[EDI + 0x6b0]               ; 0051ba67
    ADD ECX,0x10                        ; 0051ba6d
    MOV dword ptr [ESP + 0x1834],EDX    ; 0051ba70
    MOVSD ES:EDI,ESI                    ; 0051ba77
    MOVSD ES:EDI,ESI                    ; 0051ba78
    MOVSD ES:EDI,ESI                    ; 0051ba79
    MOVSD ES:EDI,ESI                    ; 0051ba7a
    MOV dword ptr [ESP + 0x1814],ECX    ; 0051ba7b
    FLD float ptr [EAX + 0x514]         ; 0051ba82
    MOV ESI,dword ptr [ESP + 0x183c]    ; 0051ba88
    FSTP float ptr [EAX + 0xcf0]        ; 0051ba8f
    INC ESI                             ; 0051ba95
    MOV EDI,dword ptr [EBX + 0x28558]   ; 0051ba96
    MOV dword ptr [ESP + 0x183c],ESI    ; 0051ba9c
    CMP ESI,EDI                         ; 0051baa3
    JL 0x0051ba1d                       ; 0051baa5
        ;   XREF to: 0051ba1d (CONDITIONAL_JUMP)  ; LAB_0051ba1d
    LEA EAX,[EAX]                       ; 0051baab
    MOV ECX,ECX                         ; 0051baae
    MOV ESI,dword ptr [ESP + 0x17e8]    ; 0051bab0
        ;   Label: LAB_0051bab0
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051bab7
    SUB EAX,ESI                         ; 0051babe
    MOV ESI,dword ptr [EBX + 0x29374]   ; 0051bac0
    FLD float ptr [ESI + EAX*0x4]       ; 0051bac6
    FMUL float ptr [ESP]                ; 0051bac9
    FSTP float ptr [ESP + 0x17c4]       ; 0051bacc
    FLD float ptr [ESI + EAX*0x4 + 0x4] ; 0051bad3
    FMUL float ptr [ESP]                ; 0051bad7
    FSTP float ptr [ESP + 0x17c8]       ; 0051bada
    FLD float ptr [ESI + EAX*0x4 + 0x8] ; 0051bae1
    FMUL float ptr [ESP]                ; 0051bae5
    MOV ESI,dword ptr [ESP + 0x17ec]    ; 0051bae8
    FLD float ptr [ESP]                 ; 0051baef
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051baf2
    FLD1                                ; 0051baf9
    SUB EAX,ESI                         ; 0051bafb
    FSUBRP                              ; 0051bafd
    LEA ESI,[EAX*0x4 + 0x0]             ; 0051baff
    FXCH                                ; 0051bb06
    FSTP float ptr [ESP + 0x17cc]       ; 0051bb08
    MOV EAX,dword ptr [EBX + 0x29374]   ; 0051bb0f
    FSTP float ptr [ESP + 0x17f4]       ; 0051bb15
    FLD float ptr [ESI + EAX*0x1]       ; 0051bb1c
    FMUL float ptr [ESP + 0x17f4]       ; 0051bb1f
    FSTP float ptr [ESP + 0x17d0]       ; 0051bb26
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 0051bb2d
    FMUL float ptr [ESP + 0x17f4]       ; 0051bb31
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051bb38
    FSTP float ptr [ESP + 0x17d4]       ; 0051bb3b
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 0051bb42
    FMUL float ptr [ESP + 0x17f4]       ; 0051bb46
    ADD EBX,0x6a4                       ; 0051bb4d
    FLD float ptr [ESP + 0x17d0]        ; 0051bb53
    FADD float ptr [ESP + 0x17c4]       ; 0051bb5a
    FLD float ptr [ESP + 0x17d4]        ; 0051bb61
    FXCH                                ; 0051bb68
    FSTP float ptr [ESP + 0x17dc]       ; 0051bb6a
    LEA EAX,[ESP + 0x17dc]              ; 0051bb71
    FADD float ptr [ESP + 0x17c8]       ; 0051bb78
    FXCH                                ; 0051bb7f
    FST float ptr [ESP + 0x17d8]        ; 0051bb81
    FADD float ptr [ESP + 0x17cc]       ; 0051bb88
    FXCH                                ; 0051bb8f
    FSTP float ptr [ESP + 0x17e0]       ; 0051bb91
    FSTP float ptr [ESP + 0x17e4]       ; 0051bb98
    CMP EBX,EAX                         ; 0051bb9f
    JZ 0x0051bbc0                       ; 0051bba1
        ;   XREF to: 0051bbc0 (CONDITIONAL_JUMP)  ; LAB_0051bbc0
    MOV EAX,dword ptr [ESP + 0x17dc]    ; 0051bba3
    MOV dword ptr [EBX],EAX             ; 0051bbaa
    MOV EAX,dword ptr [ESP + 0x17e0]    ; 0051bbac
    MOV dword ptr [EBX + 0x4],EAX       ; 0051bbb3
    MOV EAX,dword ptr [ESP + 0x17e4]    ; 0051bbb6
    MOV dword ptr [EBX + 0x8],EAX       ; 0051bbbd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051bbc0
        ;   Label: LAB_0051bbc0
    FLD float ptr [EAX + 0x508]         ; 0051bbc3
    FMUL float ptr [EAX + 0x6a4]        ; 0051bbc9
    FLD float ptr [EAX + 0x50c]         ; 0051bbcf
    FMUL float ptr [EAX + 0x6a8]        ; 0051bbd5
    FLD float ptr [EAX + 0x510]         ; 0051bbdb
    FMUL float ptr [EAX + 0x6ac]        ; 0051bbe1
    FXCH                                ; 0051bbe7
    FSTP float ptr [EAX + 0x6a8]        ; 0051bbe9
    FSTP float ptr [EAX + 0x6ac]        ; 0051bbef
    FSTP float ptr [EAX + 0x6a4]        ; 0051bbf5
    MOV ESP,EBP                         ; 0051bbfb
    POP EBP                             ; 0051bbfd
    POP EDI                             ; 0051bbfe
    POP ESI                             ; 0051bbff
    POP EBX                             ; 0051bc00
    RET                                 ; 0051bc01
    XOR EAX,EAX                         ; 0051bc02
        ;   Label: LAB_0051bc02
    MOV EDX,dword ptr [ESI + 0x28558]   ; 0051bc04
    MOV dword ptr [ESP + 0x1854],EAX    ; 0051bc0a
    TEST EDX,EDX                        ; 0051bc11
    JLE 0x0051bcd1                      ; 0051bc13
        ;   XREF to: 0051bcd1 (CONDITIONAL_JUMP)  ; LAB_0051bcd1
    MOV dword ptr [ESP + 0x181c],EAX    ; 0051bc19
    MOV dword ptr [ESP + 0x1838],EAX    ; 0051bc20
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051bc27
        ;   Label: LAB_0051bc27
    PUSH EAX                            ; 0051bc2a
    MOV EDX,dword ptr [ESP + 0x1858]    ; 0051bc2b
    PUSH EDX                            ; 0051bc32
    PUSH EBX                            ; 0051bc33
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051bc34
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10()
    ADD ESP,0xc                         ; 0051bc39
    MOV ESI,dword ptr [ESP + 0x1838]    ; 0051bc3c
    MOV dword ptr [ESP + ESI*0x1 + 0x12c4],EAX ; 0051bc43
    TEST EAX,EAX                        ; 0051bc4a
    JL 0x0051bc92                       ; 0051bc4c
        ;   XREF to: 0051bc92 (CONDITIONAL_JUMP)  ; LAB_0051bc92
    MOV ESI,dword ptr [ESP + 0x17e8]    ; 0051bc4e
    PUSH dword ptr [ESP]                ; 0051bc55
    PUSH ESI                            ; 0051bc58
    MOV EDI,dword ptr [ESP + 0x17f4]    ; 0051bc59
    PUSH EDI                            ; 0051bc60
    MOV EAX,dword ptr [ESP + 0x1860]    ; 0051bc61
    PUSH EAX                            ; 0051bc68
    PUSH EBX                            ; 0051bc69
    LEA ESI,[ESP + 0x17b8]              ; 0051bc6a
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051bc71
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80()
    ADD ESP,0x14                        ; 0051bc76
    MOV EDI,dword ptr [ESP + 0x181c]    ; 0051bc79
    LEA ESI,[ESP + 0x17a4]              ; 0051bc80
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 0051bc87
    MOVSD ES:EDI,ESI                    ; 0051bc8e
    MOVSD ES:EDI,ESI                    ; 0051bc8f
    MOVSD ES:EDI,ESI                    ; 0051bc90
    MOVSD ES:EDI,ESI                    ; 0051bc91
    MOV EDI,dword ptr [ESP + 0x1838]    ; 0051bc92
        ;   Label: LAB_0051bc92
    MOV EAX,dword ptr [ESP + 0x181c]    ; 0051bc99
    MOV EDX,dword ptr [ESP + 0x1854]    ; 0051bca0
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0051bca7
    ADD EDI,0x4                         ; 0051bcad
    ADD EAX,0x10                        ; 0051bcb0
    INC EDX                             ; 0051bcb3
    MOV dword ptr [ESP + 0x1838],EDI    ; 0051bcb4
    MOV dword ptr [ESP + 0x181c],EAX    ; 0051bcbb
    MOV dword ptr [ESP + 0x1854],EDX    ; 0051bcc2
    CMP EDX,ECX                         ; 0051bcc9
    JL 0x0051bc27                       ; 0051bccb
        ;   XREF to: 0051bc27 (CONDITIONAL_JUMP)  ; LAB_0051bc27
    MOV ESI,dword ptr [EBP + 0x20]      ; 0051bcd1
        ;   Label: LAB_0051bcd1
    LEA EAX,[ESI*0x8 + 0x0]             ; 0051bcd4
    ADD EAX,ESI                         ; 0051bcdb
    SHL EAX,0x2                         ; 0051bcdd
    LEA EDI,[EBX + EAX*0x1]             ; 0051bce0
    MOV EDI,dword ptr [EDI + 0x2857c]   ; 0051bce3
    TEST EDI,EDI                        ; 0051bce9
    JL 0x0051bd26                       ; 0051bceb
        ;   XREF to: 0051bd26 (CONDITIONAL_JUMP)  ; LAB_0051bd26
    MOV ESI,dword ptr [ESP + 0x17e8]    ; 0051bced
    PUSH dword ptr [ESP]                ; 0051bcf4
    PUSH ESI                            ; 0051bcf7
    MOV EAX,dword ptr [ESP + 0x17f4]    ; 0051bcf8
    PUSH EAX                            ; 0051bcff
    PUSH EDI                            ; 0051bd00
    PUSH EBX                            ; 0051bd01
    LEA ESI,[ESP + 0x16c8]              ; 0051bd02
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051bd09
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80()
    SHL EDI,0x4                         ; 0051bd0e
    ADD ESP,0x14                        ; 0051bd11
    LEA ESI,[ESP + 0x16b4]              ; 0051bd14
    LEA EDI,[ESP + EDI*0x1 + 0xc84]     ; 0051bd1b
    MOVSD ES:EDI,ESI                    ; 0051bd22
    MOVSD ES:EDI,ESI                    ; 0051bd23
    MOVSD ES:EDI,ESI                    ; 0051bd24
    MOVSD ES:EDI,ESI                    ; 0051bd25
    XOR EDX,EDX                         ; 0051bd26
        ;   Label: LAB_0051bd26
    MOV ECX,dword ptr [EBX + 0x28558]   ; 0051bd28
    MOV dword ptr [ESP + 0x1844],EDX    ; 0051bd2e
    TEST ECX,ECX                        ; 0051bd35
    JLE 0x0051b9ee                      ; 0051bd37
        ;   XREF to: 0051b9ee (CONDITIONAL_JUMP)  ; LAB_0051b9ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051bd3d
    ADD EAX,0x6b0                       ; 0051bd40
    MOV dword ptr [ESP + 0x1818],EDX    ; 0051bd45
    MOV dword ptr [ESP + 0x17fc],EAX    ; 0051bd4c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051bd53
    MOV dword ptr [ESP + 0x1824],EBX    ; 0051bd56
    MOV dword ptr [ESP + 0x1828],EAX    ; 0051bd5d
    MOV EAX,dword ptr [ESP + 0x1818]    ; 0051bd64
        ;   Label: LAB_0051bd64
    CMP dword ptr [ESP + EAX*0x1 + 0x12c4],0x0 ; 0051bd6b
    JL 0x0051bdaf                       ; 0051bd73
        ;   XREF to: 0051bdaf (CONDITIONAL_JUMP)  ; LAB_0051bdaf
    MOV ESI,dword ptr [ESP + 0x1844]    ; 0051bd75
    MOV EAX,dword ptr [ESP + 0x1824]    ; 0051bd7c
    SHL ESI,0x4                         ; 0051bd83
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0051bd86
    MOV dword ptr [ESP + 0x1808],ESI    ; 0051bd8c
    TEST EAX,EAX                        ; 0051bd93
    JGE 0x0051be04                      ; 0051bd95
        ;   XREF to: 0051be04 (CONDITIONAL_JUMP)  ; LAB_0051be04
    MOV EDI,dword ptr [ESP + 0x1828]    ; 0051bd97
    LEA ESI,[ESP + ESI*0x1 + 0xc84]     ; 0051bd9e
    LEA EDI,[EDI + 0x6b0]               ; 0051bda5
        ;   Label: LAB_0051bda5
    MOVSD ES:EDI,ESI                    ; 0051bdab
    MOVSD ES:EDI,ESI                    ; 0051bdac
    MOVSD ES:EDI,ESI                    ; 0051bdad
    MOVSD ES:EDI,ESI                    ; 0051bdae
    MOV EDX,dword ptr [ESP + 0x1818]    ; 0051bdaf
        ;   Label: LAB_0051bdaf
    MOV ECX,dword ptr [ESP + 0x1828]    ; 0051bdb6
    MOV ESI,dword ptr [ESP + 0x1824]    ; 0051bdbd
    MOV EDI,dword ptr [ESP + 0x1844]    ; 0051bdc4
    ADD EDX,0x4                         ; 0051bdcb
    ADD ECX,0x10                        ; 0051bdce
    ADD ESI,0x24                        ; 0051bdd1
    INC EDI                             ; 0051bdd4
    MOV dword ptr [ESP + 0x1818],EDX    ; 0051bdd5
    MOV dword ptr [ESP + 0x1828],ECX    ; 0051bddc
    MOV dword ptr [ESP + 0x1824],ESI    ; 0051bde3
    MOV EDX,dword ptr [EBX + 0x28558]   ; 0051bdea
    MOV dword ptr [ESP + 0x1844],EDI    ; 0051bdf0
    CMP EDI,EDX                         ; 0051bdf7
    JGE 0x0051b9ee                      ; 0051bdf9
        ;   XREF to: 0051b9ee (CONDITIONAL_JUMP)  ; LAB_0051b9ee
    JMP 0x0051bd64                      ; 0051bdff
        ;   XREF to: 0051bd64 (UNCONDITIONAL_JUMP)  ; LAB_0051bd64
    SHL EAX,0x4                         ; 0051be04
        ;   Label: LAB_0051be04
    MOV dword ptr [ESP + 0x17f0],EAX    ; 0051be07
    LEA EAX,[ESP + 0xc84]               ; 0051be0e
    ADD EAX,dword ptr [ESP + 0x17f0]    ; 0051be15
    PUSH EAX                            ; 0051be1c
    LEA ESI,[ESP + 0x1718]              ; 0051be1d
    LEA EDI,[ESP + 0x1668]              ; 0051be24
    CALL FUN_0055d0d0                   ; 0051be2b
        ;   XREF to: 0055d0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d0d0()
    ADD ESP,0x4                         ; 0051be30
    LEA EAX,[ESP + 0x1664]              ; 0051be33
    MOV EDX,dword ptr [ESP + 0x1808]    ; 0051be3a
    PUSH EAX                            ; 0051be41
    LEA EAX,[ESP + 0xc88]               ; 0051be42
    LEA ESI,[ESP + 0x1718]              ; 0051be49
    ADD EAX,EDX                         ; 0051be50
    MOVSD ES:EDI,ESI                    ; 0051be52
    MOVSD ES:EDI,ESI                    ; 0051be53
    MOVSD ES:EDI,ESI                    ; 0051be54
    MOVSD ES:EDI,ESI                    ; 0051be55
    PUSH EAX                            ; 0051be56
    LEA ESI,[ESP + 0x172c]              ; 0051be57
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051be5e
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 0051be63
    MOV EAX,dword ptr [ESP + 0x17fc]    ; 0051be66
    MOV ECX,dword ptr [ESP + 0x17f0]    ; 0051be6d
    LEA EDI,[ESP + 0x17b4]              ; 0051be74
    ADD EAX,ECX                         ; 0051be7b
    LEA ESI,[ESP + 0x1724]              ; 0051be7d
    PUSH EAX                            ; 0051be84
    LEA EAX,[ESP + 0x17b8]              ; 0051be85
    MOVSD ES:EDI,ESI                    ; 0051be8c
    MOVSD ES:EDI,ESI                    ; 0051be8d
    MOVSD ES:EDI,ESI                    ; 0051be8e
    MOVSD ES:EDI,ESI                    ; 0051be8f
    PUSH EAX                            ; 0051be90
    LEA ESI,[ESP + 0x163c]              ; 0051be91
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051be98
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 0051be9d
    MOV EDI,dword ptr [ESP + 0x1828]    ; 0051bea0
    LEA ESI,[ESP + 0x1634]              ; 0051bea7
    JMP 0x0051bda5                      ; 0051beae
        ;   XREF to: 0051bda5 (UNCONDITIONAL_JUMP)  ; LAB_0051bda5
    IMUL EDI,EDI,0x54c                  ; 0051beb3
        ;   Label: LAB_0051beb3
    PUSH EAX                            ; 0051beb9
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051beba
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051bebf
    XOR ECX,ECX                         ; 0051bec2
    MOV dword ptr [ESP + 0x1858],ECX    ; 0051bec4
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x9c8] ; 0051becb
    MOV EDI,dword ptr [ESI + 0x28558]   ; 0051bed2
    MOV dword ptr [ESP + 0x1800],EAX    ; 0051bed8
    TEST EDI,EDI                        ; 0051bedf
    JLE 0x0051bfc9                      ; 0051bee1
        ;   XREF to: 0051bfc9 (CONDITIONAL_JUMP)  ; LAB_0051bfc9
    MOV dword ptr [ESP + 0x182c],ECX    ; 0051bee7
    MOV dword ptr [ESP + 0x1830],ECX    ; 0051beee
    MOV ECX,dword ptr [EBP + 0x20]      ; 0051bef5
        ;   Label: LAB_0051bef5
    PUSH ECX                            ; 0051bef8
    MOV ESI,dword ptr [ESP + 0x185c]    ; 0051bef9
    PUSH ESI                            ; 0051bf00
    PUSH EBX                            ; 0051bf01
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051bf02
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10()
    ADD ESP,0xc                         ; 0051bf07
    MOV ESI,dword ptr [ESP + 0x1830]    ; 0051bf0a
    MOV dword ptr [ESP + ESI*0x1 + 0x1454],EAX ; 0051bf11
    TEST EAX,EAX                        ; 0051bf18
    JL 0x0051bf8a                       ; 0051bf1a
        ;   XREF to: 0051bf8a (CONDITIONAL_JUMP)  ; LAB_0051bf8a
    MOV EAX,dword ptr [ESP + 0x1800]    ; 0051bf1c
    PUSH EAX                            ; 0051bf23
    MOV EDX,dword ptr [ESP + 0x185c]    ; 0051bf24
    PUSH EDX                            ; 0051bf2b
    PUSH EBX                            ; 0051bf2c
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60 ; 0051bf2d
        ;   XREF to: 00517a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60()
    ADD ESP,0xc                         ; 0051bf32
    MOV EDI,dword ptr [ESP + 0x182c]    ; 0051bf35
    MOV ESI,EAX                         ; 0051bf3c
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 0051bf3e
    MOVSD ES:EDI,ESI                    ; 0051bf45
    MOVSD ES:EDI,ESI                    ; 0051bf46
    MOVSD ES:EDI,ESI                    ; 0051bf47
    MOVSD ES:EDI,ESI                    ; 0051bf48
    MOV ECX,dword ptr [ESP + 0x17e8]    ; 0051bf49
    PUSH dword ptr [ESP]                ; 0051bf50
    PUSH ECX                            ; 0051bf53
    MOV ESI,dword ptr [ESP + 0x17f4]    ; 0051bf54
    PUSH ESI                            ; 0051bf5b
    MOV EDI,dword ptr [ESP + 0x1864]    ; 0051bf5c
    PUSH EDI                            ; 0051bf63
    PUSH EBX                            ; 0051bf64
    LEA ESI,[ESP + 0x1718]              ; 0051bf65
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051bf6c
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80()
    ADD ESP,0x14                        ; 0051bf71
    MOV EDI,dword ptr [ESP + 0x182c]    ; 0051bf74
    LEA ESI,[ESP + 0x1704]              ; 0051bf7b
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0051bf82
    MOVSD ES:EDI,ESI                    ; 0051bf86
    MOVSD ES:EDI,ESI                    ; 0051bf87
    MOVSD ES:EDI,ESI                    ; 0051bf88
    MOVSD ES:EDI,ESI                    ; 0051bf89
    MOV ESI,dword ptr [ESP + 0x1830]    ; 0051bf8a
        ;   Label: LAB_0051bf8a
    MOV EDI,dword ptr [ESP + 0x182c]    ; 0051bf91
    MOV EAX,dword ptr [ESP + 0x1858]    ; 0051bf98
    MOV EDX,dword ptr [EBX + 0x28558]   ; 0051bf9f
    ADD ESI,0x4                         ; 0051bfa5
    ADD EDI,0x10                        ; 0051bfa8
    INC EAX                             ; 0051bfab
    MOV dword ptr [ESP + 0x1830],ESI    ; 0051bfac
    MOV dword ptr [ESP + 0x182c],EDI    ; 0051bfb3
    MOV dword ptr [ESP + 0x1858],EAX    ; 0051bfba
    CMP EAX,EDX                         ; 0051bfc1
    JL 0x0051bef5                       ; 0051bfc3
        ;   XREF to: 0051bef5 (CONDITIONAL_JUMP)  ; LAB_0051bef5
    MOV ESI,dword ptr [EBP + 0x20]      ; 0051bfc9
        ;   Label: LAB_0051bfc9
    LEA EAX,[ESI*0x8 + 0x0]             ; 0051bfcc
    ADD EAX,ESI                         ; 0051bfd3
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2857c] ; 0051bfd5
    MOV dword ptr [ESP + 0x17f8],EAX    ; 0051bfdc
    TEST EAX,EAX                        ; 0051bfe3
    JL 0x0051c057                       ; 0051bfe5
        ;   XREF to: 0051c057 (CONDITIONAL_JUMP)  ; LAB_0051c057
    MOV ESI,dword ptr [ESP + 0x1800]    ; 0051bfe7
    MOV EDI,EAX                         ; 0051bfee
    PUSH ESI                            ; 0051bff0
    MOV ESI,EDI                         ; 0051bff1
    PUSH EAX                            ; 0051bff3
    SHL ESI,0x4                         ; 0051bff4
    PUSH EBX                            ; 0051bff7
    MOV EDI,ESI                         ; 0051bff8
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60 ; 0051bffa
        ;   XREF to: 00517a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60()
    ADD ESP,0xc                         ; 0051bfff
    LEA EDI,[ESP + EDI*0x1 + 0x644]     ; 0051c002
    MOV dword ptr [ESP + 0x17f0],ESI    ; 0051c009
    MOV ESI,EAX                         ; 0051c010
    MOVSD ES:EDI,ESI                    ; 0051c012
    MOVSD ES:EDI,ESI                    ; 0051c013
    MOVSD ES:EDI,ESI                    ; 0051c014
    MOVSD ES:EDI,ESI                    ; 0051c015
    MOV EAX,dword ptr [ESP + 0x17e8]    ; 0051c016
    PUSH dword ptr [ESP]                ; 0051c01d
    PUSH EAX                            ; 0051c020
    MOV EDX,dword ptr [ESP + 0x17f4]    ; 0051c021
    PUSH EDX                            ; 0051c028
    MOV ECX,dword ptr [ESP + 0x1804]    ; 0051c029
    PUSH ECX                            ; 0051c030
    PUSH EBX                            ; 0051c031
    LEA ESI,[ESP + 0x1658]              ; 0051c032
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051c039
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80()
    ADD ESP,0x14                        ; 0051c03e
    MOV EDI,dword ptr [ESP + 0x17f0]    ; 0051c041
    LEA ESI,[ESP + 0x1644]              ; 0051c048
    LEA EDI,[ESP + EDI*0x1 + 0x4]       ; 0051c04f
    MOVSD ES:EDI,ESI                    ; 0051c053
    MOVSD ES:EDI,ESI                    ; 0051c054
    MOVSD ES:EDI,ESI                    ; 0051c055
    MOVSD ES:EDI,ESI                    ; 0051c056
    XOR ESI,ESI                         ; 0051c057
        ;   Label: LAB_0051c057
    MOV EDI,dword ptr [EBX + 0x28558]   ; 0051c059
    MOV dword ptr [ESP + 0x1840],ESI    ; 0051c05f
    TEST EDI,EDI                        ; 0051c066
    JLE 0x0051b9ee                      ; 0051c068
        ;   XREF to: 0051b9ee (CONDITIONAL_JUMP)  ; LAB_0051b9ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051c06e
    ADD EAX,0x6b0                       ; 0051c071
    MOV dword ptr [ESP + 0x180c],ESI    ; 0051c076
    MOV dword ptr [ESP + 0x1804],EAX    ; 0051c07d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051c084
    MOV dword ptr [ESP + 0x1820],EBX    ; 0051c087
    MOV dword ptr [ESP + 0x1850],EAX    ; 0051c08e
    MOV EAX,dword ptr [ESP + 0x180c]    ; 0051c095
        ;   Label: LAB_0051c095
    CMP dword ptr [ESP + EAX*0x1 + 0x1454],0x0 ; 0051c09c
    JL 0x0051c1e8                       ; 0051c0a4
        ;   XREF to: 0051c1e8 (CONDITIONAL_JUMP)  ; LAB_0051c1e8
    MOV EAX,dword ptr [ESP + 0x1820]    ; 0051c0aa
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0051c0b1
    MOV dword ptr [ESP + 0x1848],EAX    ; 0051c0b7
    MOV EAX,dword ptr [ESP + 0x1840]    ; 0051c0be
    SHL EAX,0x4                         ; 0051c0c5
    LEA EDI,[ESP + 0x16a4]              ; 0051c0c8
    LEA ESI,[ESP + EAX*0x1 + 0x644]     ; 0051c0cf
    MOVSD ES:EDI,ESI                    ; 0051c0d6
    MOVSD ES:EDI,ESI                    ; 0051c0d7
    MOVSD ES:EDI,ESI                    ; 0051c0d8
    MOVSD ES:EDI,ESI                    ; 0051c0d9
    LEA EDI,[ESP + 0x1794]              ; 0051c0da
    LEA ESI,[ESP + EAX*0x1 + 0x4]       ; 0051c0e1
    MOVSD ES:EDI,ESI                    ; 0051c0e5
    MOVSD ES:EDI,ESI                    ; 0051c0e6
    MOVSD ES:EDI,ESI                    ; 0051c0e7
    MOVSD ES:EDI,ESI                    ; 0051c0e8
    MOV ESI,dword ptr [ESP + 0x1850]    ; 0051c0e9
    LEA EDI,[ESP + 0x1784]              ; 0051c0f0
    LEA ESI,[ESI + 0x6b0]               ; 0051c0f7
    MOV ECX,dword ptr [ESP + 0x1848]    ; 0051c0fd
    MOVSD ES:EDI,ESI                    ; 0051c104
    MOVSD ES:EDI,ESI                    ; 0051c105
    MOVSD ES:EDI,ESI                    ; 0051c106
    MOVSD ES:EDI,ESI                    ; 0051c107
    TEST ECX,ECX                        ; 0051c108
    JGE 0x0051c23d                      ; 0051c10a
        ;   XREF to: 0051c23d (CONDITIONAL_JUMP)  ; LAB_0051c23d
    LEA EAX,[ESP + 0x16a4]              ; 0051c110
        ;   Label: LAB_0051c110
    PUSH EAX                            ; 0051c117
    LEA ESI,[ESP + 0x1748]              ; 0051c118
    LEA EDI,[ESP + 0x1698]              ; 0051c11f
    CALL FUN_0055d0d0                   ; 0051c126
        ;   XREF to: 0055d0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d0d0()
    ADD ESP,0x4                         ; 0051c12b
    LEA EAX,[ESP + 0x1694]              ; 0051c12e
    LEA ESI,[ESP + 0x1744]              ; 0051c135
    PUSH EAX                            ; 0051c13c
    LEA EAX,[ESP + 0x1798]              ; 0051c13d
    MOVSD ES:EDI,ESI                    ; 0051c144
    MOVSD ES:EDI,ESI                    ; 0051c145
    MOVSD ES:EDI,ESI                    ; 0051c146
    MOVSD ES:EDI,ESI                    ; 0051c147
    PUSH EAX                            ; 0051c148
    LEA ESI,[ESP + 0x15fc]              ; 0051c149
    LEA EDI,[ESP + 0x168c]              ; 0051c150
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051c157
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 0051c15c
    LEA EAX,[ESP + 0x1684]              ; 0051c15f
    LEA ESI,[ESP + 0x15f4]              ; 0051c166
    PUSH EAX                            ; 0051c16d
    LEA EAX,[ESP + 0x1788]              ; 0051c16e
    MOVSD ES:EDI,ESI                    ; 0051c175
    MOVSD ES:EDI,ESI                    ; 0051c176
    MOVSD ES:EDI,ESI                    ; 0051c177
    MOVSD ES:EDI,ESI                    ; 0051c178
    PUSH EAX                            ; 0051c179
    LEA ESI,[ESP + 0x160c]              ; 0051c17a
    LEA EDI,[ESP + 0x16fc]              ; 0051c181
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051c188
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 0051c18d
    LEA ESI,[ESP + 0x1604]              ; 0051c190
    MOV ECX,dword ptr [ESP + 0x1848]    ; 0051c197
    MOVSD ES:EDI,ESI                    ; 0051c19e
    MOVSD ES:EDI,ESI                    ; 0051c19f
    MOVSD ES:EDI,ESI                    ; 0051c1a0
    MOVSD ES:EDI,ESI                    ; 0051c1a1
    TEST ECX,ECX                        ; 0051c1a2
    JL 0x0051c370                       ; 0051c1a4
        ;   XREF to: 0051c370 (CONDITIONAL_JUMP)  ; LAB_0051c370
    MOV EAX,ECX                         ; 0051c1aa
    MOV ESI,dword ptr [ESP + 0x1804]    ; 0051c1ac
    SHL EAX,0x4                         ; 0051c1b3
    ADD EAX,ESI                         ; 0051c1b6
    PUSH EAX                            ; 0051c1b8
    LEA EAX,[ESP + 0x16f8]              ; 0051c1b9
    PUSH EAX                            ; 0051c1c0
    LEA ESI,[ESP + 0x175c]              ; 0051c1c1
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051c1c8
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 0051c1cd
    MOV EDI,dword ptr [ESP + 0x1850]    ; 0051c1d0
    LEA ESI,[ESP + 0x1754]              ; 0051c1d7
    LEA EDI,[EDI + 0x6b0]               ; 0051c1de
        ;   Label: LAB_0051c1de
    MOVSD ES:EDI,ESI                    ; 0051c1e4
    MOVSD ES:EDI,ESI                    ; 0051c1e5
    MOVSD ES:EDI,ESI                    ; 0051c1e6
    MOVSD ES:EDI,ESI                    ; 0051c1e7
    MOV EAX,dword ptr [ESP + 0x180c]    ; 0051c1e8
        ;   Label: LAB_0051c1e8
    MOV EDX,dword ptr [ESP + 0x1820]    ; 0051c1ef
    MOV ECX,dword ptr [ESP + 0x1850]    ; 0051c1f6
    MOV ESI,dword ptr [ESP + 0x1840]    ; 0051c1fd
    MOV EDI,dword ptr [EBX + 0x28558]   ; 0051c204
    ADD EAX,0x4                         ; 0051c20a
    ADD EDX,0x24                        ; 0051c20d
    ADD ECX,0x10                        ; 0051c210
    INC ESI                             ; 0051c213
    MOV dword ptr [ESP + 0x180c],EAX    ; 0051c214
    MOV dword ptr [ESP + 0x1820],EDX    ; 0051c21b
    MOV dword ptr [ESP + 0x1850],ECX    ; 0051c222
    MOV dword ptr [ESP + 0x1840],ESI    ; 0051c229
    CMP ESI,EDI                         ; 0051c230
    JGE 0x0051b9ee                      ; 0051c232
        ;   XREF to: 0051b9ee (CONDITIONAL_JUMP)  ; LAB_0051b9ee
    JMP 0x0051c095                      ; 0051c238
        ;   XREF to: 0051c095 (UNCONDITIONAL_JUMP)  ; LAB_0051c095
    MOV EAX,ECX                         ; 0051c23d
        ;   Label: LAB_0051c23d
    SHL EAX,0x4                         ; 0051c23f
    MOV dword ptr [ESP + 0x17f0],EAX    ; 0051c242
    LEA EAX,[ESP + 0x644]               ; 0051c249
    ADD EAX,dword ptr [ESP + 0x17f0]    ; 0051c250
    PUSH EAX                            ; 0051c257
    LEA ESI,[ESP + 0x1778]              ; 0051c258
    LEA EDI,[ESP + 0x16c8]              ; 0051c25f
    CALL FUN_0055d0d0                   ; 0051c266
        ;   XREF to: 0055d0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d0d0()
    ADD ESP,0x4                         ; 0051c26b
    LEA EAX,[ESP + 0x16c4]              ; 0051c26e
    LEA ESI,[ESP + 0x1774]              ; 0051c275
    PUSH EAX                            ; 0051c27c
    LEA EAX,[ESP + 0x16a8]              ; 0051c27d
    MOVSD ES:EDI,ESI                    ; 0051c284
    MOVSD ES:EDI,ESI                    ; 0051c285
    MOVSD ES:EDI,ESI                    ; 0051c286
    MOVSD ES:EDI,ESI                    ; 0051c287
    PUSH EAX                            ; 0051c288
    LEA ESI,[ESP + 0x161c]              ; 0051c289
    LEA EDI,[ESP + 0x16ac]              ; 0051c290
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051c297
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    LEA ESI,[ESP + 0x161c]              ; 0051c29c
    ADD ESP,0x8                         ; 0051c2a3
    MOVSD ES:EDI,ESI                    ; 0051c2a6
    MOVSD ES:EDI,ESI                    ; 0051c2a7
    MOVSD ES:EDI,ESI                    ; 0051c2a8
    MOVSD ES:EDI,ESI                    ; 0051c2a9
    LEA EAX,[ESP + 0x4]                 ; 0051c2aa
    ADD EAX,dword ptr [ESP + 0x17f0]    ; 0051c2ae
    PUSH EAX                            ; 0051c2b5
    LEA ESI,[ESP + 0x1678]              ; 0051c2b6
    LEA EDI,[ESP + 0x15e8]              ; 0051c2bd
    CALL FUN_0055d0d0                   ; 0051c2c4
        ;   XREF to: 0055d0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d0d0()
    ADD ESP,0x4                         ; 0051c2c9
    LEA EAX,[ESP + 0x15e4]              ; 0051c2cc
    LEA ESI,[ESP + 0x1674]              ; 0051c2d3
    PUSH EAX                            ; 0051c2da
    LEA EAX,[ESP + 0x1798]              ; 0051c2db
    MOVSD ES:EDI,ESI                    ; 0051c2e2
    MOVSD ES:EDI,ESI                    ; 0051c2e3
    MOVSD ES:EDI,ESI                    ; 0051c2e4
    MOVSD ES:EDI,ESI                    ; 0051c2e5
    PUSH EAX                            ; 0051c2e6
    LEA ESI,[ESP + 0x16dc]              ; 0051c2e7
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051c2ee
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 0051c2f3
    LEA EDI,[ESP + 0x1794]              ; 0051c2f6
    MOV EAX,dword ptr [ESP + 0x1804]    ; 0051c2fd
    MOV EDX,dword ptr [ESP + 0x17f0]    ; 0051c304
    LEA ESI,[ESP + 0x16d4]              ; 0051c30b
    ADD EAX,EDX                         ; 0051c312
    MOVSD ES:EDI,ESI                    ; 0051c314
    MOVSD ES:EDI,ESI                    ; 0051c315
    MOVSD ES:EDI,ESI                    ; 0051c316
    MOVSD ES:EDI,ESI                    ; 0051c317
    PUSH EAX                            ; 0051c318
    LEA ESI,[ESP + 0x1768]              ; 0051c319
    LEA EDI,[ESP + 0x16e8]              ; 0051c320
    CALL FUN_0055d0d0                   ; 0051c327
        ;   XREF to: 0055d0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d0d0()
    ADD ESP,0x4                         ; 0051c32c
    LEA EAX,[ESP + 0x16e4]              ; 0051c32f
    LEA ESI,[ESP + 0x1764]              ; 0051c336
    PUSH EAX                            ; 0051c33d
    LEA EAX,[ESP + 0x1788]              ; 0051c33e
    MOVSD ES:EDI,ESI                    ; 0051c345
    MOVSD ES:EDI,ESI                    ; 0051c346
    MOVSD ES:EDI,ESI                    ; 0051c347
    MOVSD ES:EDI,ESI                    ; 0051c348
    PUSH EAX                            ; 0051c349
    LEA ESI,[ESP + 0x173c]              ; 0051c34a
    LEA EDI,[ESP + 0x178c]              ; 0051c351
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051c358
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    LEA ESI,[ESP + 0x173c]              ; 0051c35d
    ADD ESP,0x8                         ; 0051c364
    MOVSD ES:EDI,ESI                    ; 0051c367
    MOVSD ES:EDI,ESI                    ; 0051c368
    MOVSD ES:EDI,ESI                    ; 0051c369
    MOVSD ES:EDI,ESI                    ; 0051c36a
    JMP 0x0051c110                      ; 0051c36b
        ;   XREF to: 0051c110 (UNCONDITIONAL_JUMP)  ; LAB_0051c110
    MOV EDI,dword ptr [ESP + 0x1850]    ; 0051c370
        ;   Label: LAB_0051c370
    LEA ESI,[ESP + 0x1604]              ; 0051c377
    JMP 0x0051c1de                      ; 0051c37e
        ;   XREF to: 0051c1de (UNCONDITIONAL_JUMP)  ; LAB_0051c1de
    MOV EAX,dword ptr [ESP + 0x17e8]    ; 0051c383
        ;   Label: LAB_0051c383
    PUSH dword ptr [ESP]                ; 0051c38a
    PUSH EAX                            ; 0051c38d
    MOV EDX,dword ptr [ESP + 0x17f4]    ; 0051c38e
    PUSH EDX                            ; 0051c395
    PUSH EDI                            ; 0051c396
    PUSH EBX                            ; 0051c397
    LEA ESI,[ESP + 0x1668]              ; 0051c398
    CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80 ; 0051c39f
        ;   XREF to: 00517a80 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80()
    ADD ESP,0x14                        ; 0051c3a4
    MOV EDI,dword ptr [ESP + 0x1810]    ; 0051c3a7
    LEA ESI,[ESP + 0x1654]              ; 0051c3ae
    LEA EDI,[EDI + 0x6b0]               ; 0051c3b5
    MOVSD ES:EDI,ESI                    ; 0051c3bb
    MOVSD ES:EDI,ESI                    ; 0051c3bc
    MOVSD ES:EDI,ESI                    ; 0051c3bd
    MOVSD ES:EDI,ESI                    ; 0051c3be
    JMP 0x0051b9c4                      ; 0051c3bf
        ;   XREF to: 0051b9c4 (UNCONDITIONAL_JUMP)  ; LAB_0051b9c4

