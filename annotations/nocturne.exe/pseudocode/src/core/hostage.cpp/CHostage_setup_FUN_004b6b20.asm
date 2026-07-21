; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hostage_cpp_CHostage_setup_FUN_004b6b20(int param_1)
;
;
; Referenced Globals:
;   string s_hickboy.dfm_00585a04
;   string s_depute.dfm_00585a10
;   string s_hickho.dfm_00585a1b
;   string s_hickgirl.dfm_00585a26
;   string s_hickdad.dfm_00585a33
;   string s_preacher.dfm_00585a3f
;   string s_Bip01_R_UpperArm_00585a4c
;   string s_Bip01_Head_00585a5d
;   string s_Bip01_L_Foot_00585a68
;   string s_Bip01_R_Foot_00585a75
;   string s_Bip01_R_Hand_00585a82
;   string s_Bip01_L_Hand_00585a8f
;   string s_Bip01_Spine1_00585a9c
;   string s_gunup_00585aa9
;   undefined4 DAT_01cae1a0
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   crt_string.c__stricmp_FUN_00564520
;   FUN_004ee9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6b20
        ;   Label: core_hostage.cpp_CHostage_setup_FUN_004b6b20
    PUSH ESI                            ; 004b6b21
    PUSH EDI                            ; 004b6b22
    PUSH EBP                            ; 004b6b23
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b6b24
    LEA EAX,[EBX + 0x150]               ; 004b6b28
    PUSH EAX                            ; 004b6b2e
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004b6b2f
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 004b6b34
    PUSH 0x585a04                       ; 004b6b37 | = "hickboy.dfm"
    LEA EAX,[EBX + 0x23b0]              ; 004b6b3c
    PUSH EAX                            ; 004b6b42
    MOV dword ptr [EBX + 0x1f920],0x6   ; 004b6b43
    MOV ESI,EAX                         ; 004b6b4d
    CALL crt_string.c__stricmp_FUN_00564520 ; 004b6b4f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004b6b54
    TEST EAX,EAX                        ; 004b6b57
    JNZ 0x004b6b61                      ; 004b6b59
        ;   XREF to: 004b6b61 (CONDITIONAL_JUMP)  ; LAB_004b6b61
    MOV dword ptr [EBX + 0x1f920],EAX   ; 004b6b5b
    PUSH 0x585a10                       ; 004b6b61 | = "depute.dfm"
        ;   Label: LAB_004b6b61
    PUSH ESI                            ; 004b6b66
    CALL crt_string.c__stricmp_FUN_00564520 ; 004b6b67
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004b6b6c
    TEST EAX,EAX                        ; 004b6b6f
    JNZ 0x004b6b7d                      ; 004b6b71
        ;   XREF to: 004b6b7d (CONDITIONAL_JUMP)  ; LAB_004b6b7d
    MOV dword ptr [EBX + 0x1f920],0x1   ; 004b6b73
    PUSH 0x585a1b                       ; 004b6b7d | = "hickho.dfm"
        ;   Label: LAB_004b6b7d
    PUSH ESI                            ; 004b6b82
    CALL crt_string.c__stricmp_FUN_00564520 ; 004b6b83
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004b6b88
    TEST EAX,EAX                        ; 004b6b8b
    JNZ 0x004b6b99                      ; 004b6b8d
        ;   XREF to: 004b6b99 (CONDITIONAL_JUMP)  ; LAB_004b6b99
    MOV dword ptr [EBX + 0x1f920],0x2   ; 004b6b8f
    PUSH 0x585a26                       ; 004b6b99 | = "hickgirl.dfm"
        ;   Label: LAB_004b6b99
    PUSH ESI                            ; 004b6b9e
    CALL crt_string.c__stricmp_FUN_00564520 ; 004b6b9f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004b6ba4
    TEST EAX,EAX                        ; 004b6ba7
    JNZ 0x004b6bb5                      ; 004b6ba9
        ;   XREF to: 004b6bb5 (CONDITIONAL_JUMP)  ; LAB_004b6bb5
    MOV dword ptr [EBX + 0x1f920],0x4   ; 004b6bab
    PUSH 0x585a33                       ; 004b6bb5 | = "hickdad.dfm"
        ;   Label: LAB_004b6bb5
    PUSH ESI                            ; 004b6bba
    CALL crt_string.c__stricmp_FUN_00564520 ; 004b6bbb
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004b6bc0
    TEST EAX,EAX                        ; 004b6bc3
    JNZ 0x004b6bd1                      ; 004b6bc5
        ;   XREF to: 004b6bd1 (CONDITIONAL_JUMP)  ; LAB_004b6bd1
    MOV dword ptr [EBX + 0x1f920],0x5   ; 004b6bc7
    PUSH 0x585a3f                       ; 004b6bd1 | = "preacher.dfm"
        ;   Label: LAB_004b6bd1
    PUSH ESI                            ; 004b6bd6
    CALL crt_string.c__stricmp_FUN_00564520 ; 004b6bd7
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004b6bdc
    TEST EAX,EAX                        ; 004b6bdf
    JNZ 0x004b6bed                      ; 004b6be1
        ;   XREF to: 004b6bed (CONDITIONAL_JUMP)  ; LAB_004b6bed
    MOV dword ptr [EBX + 0x1f920],0x3   ; 004b6be3
    LEA EDI,[EBX + 0x150]               ; 004b6bed
        ;   Label: LAB_004b6bed
    PUSH EDI                            ; 004b6bf3
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004b6bf4
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 004b6bf9
    PUSH EDI                            ; 004b6bfc
    MOV ESI,EAX                         ; 004b6bfd
    MOV EBP,EAX                         ; 004b6bff
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004b6c01
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    ADD ESP,0x4                         ; 004b6c06
    PUSH 0x1                            ; 004b6c09
    PUSH 0x585a4c                       ; 004b6c0b | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004b6c10
    MOV EDI,EAX                         ; 004b6c11
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b6c13
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b6c18
    PUSH 0x1                            ; 004b6c1b
    PUSH 0x585a5d                       ; 004b6c1d | = "Bip01 Head"
    PUSH ESI                            ; 004b6c22
    MOV dword ptr [EBX + 0x1f938],EAX   ; 004b6c23
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b6c29
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b6c2e
    PUSH 0x1                            ; 004b6c31
    PUSH 0x585a68                       ; 004b6c33 | = "Bip01 L Foot"
    PUSH ESI                            ; 004b6c38
    MOV dword ptr [EBX + 0x1f934],EAX   ; 004b6c39
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b6c3f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b6c44
    PUSH 0x1                            ; 004b6c47
    PUSH 0x585a75                       ; 004b6c49 | = "Bip01 R Foot"
    PUSH ESI                            ; 004b6c4e
    MOV dword ptr [EBX + 0x1f93c],EAX   ; 004b6c4f
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b6c55
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b6c5a
    PUSH 0x1                            ; 004b6c5d
    PUSH 0x585a82                       ; 004b6c5f | = "Bip01 R Hand"
    PUSH ESI                            ; 004b6c64
    MOV dword ptr [EBX + 0x1f940],EAX   ; 004b6c65
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b6c6b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b6c70
    MOV EDX,dword ptr [EBX + 0x1f920]   ; 004b6c73
    MOV dword ptr [EBX + 0x24e8],EAX    ; 004b6c79
    CMP EDX,0x1                         ; 004b6c7f
    JZ 0x004b6c9a                       ; 004b6c82
        ;   XREF to: 004b6c9a (CONDITIONAL_JUMP)  ; LAB_004b6c9a
    PUSH 0x1                            ; 004b6c84
    PUSH 0x585a8f                       ; 004b6c86 | = "Bip01 L Hand"
    PUSH ESI                            ; 004b6c8b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b6c8c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b6c91
    MOV dword ptr [EBX + 0x24a4],EAX    ; 004b6c94
    PUSH 0x1                            ; 004b6c9a
        ;   Label: LAB_004b6c9a
    PUSH 0x585a9c                       ; 004b6c9c | = "Bip01 Spine1"
    PUSH EBP                            ; 004b6ca1
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b6ca2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b6ca7
    MOV ECX,dword ptr [EBX + 0x1f920]   ; 004b6caa
    MOV dword ptr [EBX + 0x25bc],EAX    ; 004b6cb0
    CMP ECX,0x1                         ; 004b6cb6
    JZ 0x004b6cd3                       ; 004b6cb9
        ;   XREF to: 004b6cd3 (CONDITIONAL_JUMP)  ; LAB_004b6cd3
    PUSH EBX                            ; 004b6cbb
        ;   Label: LAB_004b6cbb
    CALL FUN_004ee9e0                   ; 004b6cbc
        ;   XREF to: 004ee9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee9e0()
    ADD ESP,0x4                         ; 004b6cc1
    MOV dword ptr [EBX + 0x1f918],0x0   ; 004b6cc4
    POP EBP                             ; 004b6cce
    POP EDI                             ; 004b6ccf
    POP ESI                             ; 004b6cd0
    POP EBX                             ; 004b6cd1
    RET                                 ; 004b6cd2
    PUSH ECX                            ; 004b6cd3
        ;   Label: LAB_004b6cd3
    PUSH 0x585aa9                       ; 004b6cd4 | = "gunup"
    PUSH EDI                            ; 004b6cd9
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 004b6cda
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010()
    ADD ESP,0xc                         ; 004b6cdf
    MOV [0x01cae1a0],EAX                ; 004b6ce2 | DAT_01cae1a0
    JMP 0x004b6cbb                      ; 004b6ce7
        ;   XREF to: 004b6cbb (UNCONDITIONAL_JUMP)  ; LAB_004b6cbb

