; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_makeDrawDecision_FUN_0046ea80(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xfc]:4  local_fc
; undefined8       Stack[-0xf8]:8  local_f8
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
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
;   core_doc.cpp_FUN_0046caa0 at 0046cb83
;
; Referenced Globals:
;   TerminatedCString s_core_doc_cpp_005da024
;   TerminatedCString s_CDoc_makeDrawDecision_dr_005da034
;   undefined4 DAT_005da06c
;   undefined4 DAT_005da074
;   undefined4 DAT_005da07c
;   undefined4 DAT_005da084
;   undefined4 DAT_005da08c
;   undefined4 DAT_005da090
;   undefined4 DAT_005fecd0
;   undefined4 DAT_005fecd4
;   undefined4 DAT_01b68828
;   undefined4 DAT_01b6882c
;   undefined4 DAT_01b68848
;   undefined4 DAT_01b6884c
;   undefined4 DAT_01b68858
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_doc.cpp_FUN_0046f200
;   core_main.c_FUN_005030e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;   core_motion.cpp_FUN_00524a40
;   core_motion.cpp_FUN_00525020
;   core_motion.cpp_FUN_00525110
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_xform.cpp_quaternionFromAngleX_FUN_005b7af0
;   core_xform.cpp_quaternionFromAngleY_FUN_005b7b30
;   core_xform.cpp_slerpQuaternion_FUN_005b7940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ea80
        ;   Label: core_doc.cpp_CDoc_makeDrawDecision_FUN_0046ea80
    PUSH ESI                            ; 0046ea81
    PUSH EDI                            ; 0046ea82
    PUSH EBP                            ; 0046ea83
    MOV EBP,ESP                         ; 0046ea84
    SUB ESP,0xe4                        ; 0046ea86
    AND ESP,0xfffffff8                  ; 0046ea8c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046ea8f
    MOV EDX,dword ptr [EBX + 0x2c98]    ; 0046ea92
    TEST EDX,EDX                        ; 0046ea98
    JL 0x0046eaa1                       ; 0046ea9a
        ;   XREF to: 0046eaa1 (CONDITIONAL_JUMP)  ; LAB_0046eaa1
    CMP EDX,0x16                        ; 0046ea9c
    JL 0x0046eac4                       ; 0046ea9f
        ;   XREF to: 0046eac4 (CONDITIONAL_JUMP)  ; LAB_0046eac4
    MOV ESI,0x5da024                    ; 0046eaa1 | = "..\\core\\doc.cpp"
        ;   Label: LAB_0046eaa1
    MOV EDI,0xc50                       ; 0046eaa6
    PUSH 0x5da034                       ; 0046eaab | = "CDoc::makeDrawDecision - draw motion ..."
    MOV dword ptr [0x01d1d400],ESI      ; 0046eab0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0046eab6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0046eabc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0046eac1
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0046eac4
        ;   Label: LAB_0046eac4
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0046eacc
    SHL EAX,0x3                         ; 0046ead2
    MOV ESI,EAX                         ; 0046ead5
    SHL EAX,0x3                         ; 0046ead7
    SUB EAX,ESI                         ; 0046eada
    CMP dword ptr [EBX + EAX*0x1 + 0x27c8],0x0 ; 0046eadc
    JNZ 0x0046eaf0                      ; 0046eae4
        ;   XREF to: 0046eaf0 (CONDITIONAL_JUMP)  ; LAB_0046eaf0
    MOV EAX,dword ptr [EBX + 0x2c9c]    ; 0046eae6
    MOV dword ptr [ESP + 0x8],EAX       ; 0046eaec
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0046eaf0
        ;   Label: LAB_0046eaf0
    SHL EAX,0x3                         ; 0046eaf6
    MOV ESI,EAX                         ; 0046eaf9
    SHL EAX,0x3                         ; 0046eafb
    SUB EAX,ESI                         ; 0046eafe
    CMP dword ptr [EBX + EAX*0x1 + 0x27cc],0x0 ; 0046eb00
    JNZ 0x0046eb1c                      ; 0046eb08
        ;   XREF to: 0046eb1c (CONDITIONAL_JUMP)  ; LAB_0046eb1c
    FLD float ptr [EBX + 0x2c9c]        ; 0046eb0a
    FLD1                                ; 0046eb10
    FSUBRP                              ; 0046eb12
    FMUL float ptr [ESP + 0x8]          ; 0046eb14
    FSTP float ptr [ESP + 0x8]          ; 0046eb18
    PUSH 0x2d                           ; 0046eb1c
        ;   Label: LAB_0046eb1c
    LEA ESI,[EBX + 0x158]               ; 0046eb1e
    PUSH ESI                            ; 0046eb24
    CALL core_motion.cpp_FUN_00524a40   ; 0046eb25
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xd0],EAX      ; 0046eb2a
    ADD ESP,0x8                         ; 0046eb31
    PUSH 0x2e                           ; 0046eb34
    PUSH ESI                            ; 0046eb36
    CALL core_motion.cpp_FUN_00524a40   ; 0046eb37
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046eb3c
    FLD float ptr [ESP + 0xe8]          ; 0046eb43
    ADD ESP,0x8                         ; 0046eb4a
    PUSH 0x29                           ; 0046eb4d
    FADD float ptr [ESP + 0xcc]         ; 0046eb4f
    PUSH ESI                            ; 0046eb56
    FSTP float ptr [ESP + 0xd0]         ; 0046eb57
    CALL core_motion.cpp_FUN_00524a40   ; 0046eb5e
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046eb63
    FLD float ptr [ESP + 0xe8]          ; 0046eb6a
    ADD ESP,0x8                         ; 0046eb71
    PUSH 0x7e                           ; 0046eb74
    FADD float ptr [ESP + 0xcc]         ; 0046eb76
    PUSH ESI                            ; 0046eb7d
    FSTP float ptr [ESP + 0xd0]         ; 0046eb7e
    CALL core_motion.cpp_FUN_00524a40   ; 0046eb85
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046eb8a
    FLD float ptr [ESP + 0xe8]          ; 0046eb91
    ADD ESP,0x8                         ; 0046eb98
    PUSH 0x80                           ; 0046eb9b
    FADD float ptr [ESP + 0xcc]         ; 0046eba0
    PUSH ESI                            ; 0046eba7
    FSTP float ptr [ESP + 0xd0]         ; 0046eba8
    CALL core_motion.cpp_FUN_00524a40   ; 0046ebaf
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046ebb4
    FLD float ptr [ESP + 0xe8]          ; 0046ebbb
    ADD ESP,0x8                         ; 0046ebc2
    PUSH 0x6f                           ; 0046ebc5
    FADD float ptr [ESP + 0xcc]         ; 0046ebc7
    PUSH ESI                            ; 0046ebce
    FSTP float ptr [ESP + 0xd0]         ; 0046ebcf
    CALL core_motion.cpp_FUN_00524a40   ; 0046ebd6
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046ebdb
    FLD float ptr [ESP + 0xe8]          ; 0046ebe2
    ADD ESP,0x8                         ; 0046ebe9
    PUSH 0x27                           ; 0046ebec
    FADD float ptr [ESP + 0xcc]         ; 0046ebee
    PUSH ESI                            ; 0046ebf5
    FSTP float ptr [ESP + 0xd0]         ; 0046ebf6
    CALL core_motion.cpp_FUN_00524a40   ; 0046ebfd
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046ec02
    FLD float ptr [ESP + 0xe8]          ; 0046ec09
    ADD ESP,0x8                         ; 0046ec10
    FADD float ptr [ESP + 0xc8]         ; 0046ec13
    FLD1                                ; 0046ec1a
    FSUBRP                              ; 0046ec1c
    FLD float ptr [ESP + 0x8]           ; 0046ec1e
    FXCH                                ; 0046ec22
    FMUL ST1                            ; 0046ec24
    FLDZ                                ; 0046ec26
    FXCH                                ; 0046ec28
    FSTP ST2                            ; 0046ec2a
    FXCH                                ; 0046ec2c
    FSTP float ptr [ESP + 0x8]          ; 0046ec2e
    FCOMP float ptr [ESP + 0x8]         ; 0046ec32
    FNSTSW AX                           ; 0046ec36
    SAHF                                ; 0046ec38
    JBE 0x0046ec41                      ; 0046ec39
        ;   XREF to: 0046ec41 (CONDITIONAL_JUMP)  ; LAB_0046ec41
    XOR ESI,ESI                         ; 0046ec3b
    MOV dword ptr [ESP + 0x8],ESI       ; 0046ec3d
    CMP dword ptr [EBX + 0x2c98],0xe    ; 0046ec41
        ;   Label: LAB_0046ec41
    JNZ 0x0046ecd2                      ; 0046ec48
        ;   XREF to: 0046ecd2 (CONDITIONAL_JUMP)  ; LAB_0046ecd2
    LEA ESI,[EBX + 0x158]               ; 0046ec4e
    PUSH ESI                            ; 0046ec54
    CALL core_motion.cpp_FUN_00525020   ; 0046ec55
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0xe4],EAX      ; 0046ec5a
    FLD float ptr [ESP + 0xe4]          ; 0046ec61
    ADD ESP,0x4                         ; 0046ec68
    MOV EAX,0x3f800000                  ; 0046ec6b
    PUSH ESI                            ; 0046ec70
    FSTP float ptr [ESP + 0x18]         ; 0046ec71
    MOV dword ptr [ESP + 0xe0],EAX      ; 0046ec75
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0046ec7c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0046ec81
    ADD ESP,0x4                         ; 0046ec84
    CMP EAX,0x1a                        ; 0046ec87
    JNZ 0x0046f0dc                      ; 0046ec8a
        ;   XREF to: 0046f0dc (CONDITIONAL_JUMP)  ; LAB_0046f0dc
    FLD float ptr [ESP + 0x14]          ; 0046ec90
        ;   Label: LAB_0046ec90
    FADD double ptr [0x005da07c]        ; 0046ec94 | DAT_005da07c
    FMUL double ptr [0x005da074]        ; 0046ec9a | DAT_005da074
        ;   Label: LAB_0046ec9a
    FSTP float ptr [ESP + 0xdc]         ; 0046eca0
    CMP dword ptr [ESP + 0xdc],0x3f800000 ; 0046eca7
        ;   Label: LAB_0046eca7
    JLE 0x0046f103                      ; 0046ecb2
        ;   XREF to: 0046f103 (CONDITIONAL_JUMP)  ; LAB_0046f103
    MOV dword ptr [ESP + 0xdc],0x3f800000 ; 0046ecb8
    FLD float ptr [ESP + 0x8]           ; 0046ecc3
        ;   Label: LAB_0046ecc3
    FMUL float ptr [ESP + 0xdc]         ; 0046ecc7
    FSTP float ptr [ESP + 0x8]          ; 0046ecce
    FLD float ptr [ESP + 0x8]           ; 0046ecd2
        ;   Label: LAB_0046ecd2
    FST double ptr [ESP]                ; 0046ecd6
    FCOMP double ptr [0x005da084]       ; 0046ecd9 | DAT_005da084
    FNSTSW AX                           ; 0046ecdf
    SAHF                                ; 0046ece1
    JBE 0x0046f0d5                      ; 0046ece2
        ;   XREF to: 0046f0d5 (CONDITIONAL_JUMP)  ; LAB_0046f0d5
    FLD1                                ; 0046ece8
    FCOMP double ptr [ESP]              ; 0046ecea
    FNSTSW AX                           ; 0046eced
    SAHF                                ; 0046ecef
    JNC 0x0046ecfa                      ; 0046ecf0
        ;   XREF to: 0046ecfa (CONDITIONAL_JUMP)  ; LAB_0046ecfa
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0046ecf2
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0046ecfa
        ;   Label: LAB_0046ecfa
    SHL EAX,0x3                         ; 0046ed00
    MOV ESI,EAX                         ; 0046ed03
    SHL EAX,0x3                         ; 0046ed05
    SUB EAX,ESI                         ; 0046ed08
    LEA ESI,[EBX + 0x27c8]              ; 0046ed0a
    ADD EAX,ESI                         ; 0046ed10
    PUSH 0x1                            ; 0046ed12
    ADD EAX,0x8                         ; 0046ed14
    PUSH EAX                            ; 0046ed17
    LEA ESI,[EBX + 0x158]               ; 0046ed18
    PUSH ESI                            ; 0046ed1e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0046ed1f
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046ed24
    PUSH EAX                            ; 0046ed27
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0046ed28
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0046ed2d
    PUSH dword ptr [EBX + 0x2c9c]       ; 0046ed30
    PUSH EAX                            ; 0046ed36
    PUSH ESI                            ; 0046ed37
    MOV dword ptr [ESP + 0xe0],EAX      ; 0046ed38
    CALL core_motion.cpp_FUN_00525110   ; 0046ed3f
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    MOV dword ptr [ESP + 0xec],EAX      ; 0046ed44
    FLD float ptr [ESP + 0xec]          ; 0046ed4b
    ADD ESP,0xc                         ; 0046ed52
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0046ed55
    FSTP float ptr [ESP + 0xd0]         ; 0046ed5b
    CMP EAX,0x9                         ; 0046ed62
    JNZ 0x0046ede9                      ; 0046ed65
        ;   XREF to: 0046ede9 (CONDITIONAL_JUMP)  ; LAB_0046ede9
    FLD float ptr [EBX + 0x2c9c]        ; 0046ed6b
    FLD1                                ; 0046ed71
    FCOMPP                              ; 0046ed73
    FNSTSW AX                           ; 0046ed75
    SAHF                                ; 0046ed77
    JA 0x0046ede9                       ; 0046ed78
        ;   XREF to: 0046ede9 (CONDITIONAL_JUMP)  ; LAB_0046ede9
    CMP dword ptr [EBX + 0x2000c],0x0   ; 0046ed7a
    JZ 0x0046ede9                       ; 0046ed81
        ;   XREF to: 0046ede9 (CONDITIONAL_JUMP)  ; LAB_0046ede9
    PUSH 0x1                            ; 0046ed83
    LEA EAX,[EBX + 0x2a00]              ; 0046ed85
    PUSH EAX                            ; 0046ed8b
    PUSH ESI                            ; 0046ed8c
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0046ed8d
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046ed92
    PUSH EAX                            ; 0046ed95
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 0046ed96
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0046ed9b
    PUSH 0x3f800000                     ; 0046ed9e
    MOV EDI,EAX                         ; 0046eda3
    PUSH 0x0                            ; 0046eda5
    MOV dword ptr [ESP + 0xdc],EAX      ; 0046eda7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0046edae
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046edb3
    FLD float ptr [ESP + 0xe8]          ; 0046edba
    ADD ESP,0x8                         ; 0046edc1
    SUB ESP,0x4                         ; 0046edc4
    FSTP float ptr [ESP]                ; 0046edc7
    PUSH EDI                            ; 0046edca
    PUSH ESI                            ; 0046edcb
    CALL core_motion.cpp_FUN_00525110   ; 0046edcc
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    MOV dword ptr [ESP + 0xec],EAX      ; 0046edd1
    FLD float ptr [ESP + 0xec]          ; 0046edd8
    ADD ESP,0xc                         ; 0046eddf
    FSTP float ptr [ESP + 0xd0]         ; 0046ede2
    PUSH 0x567360                       ; 0046ede9
        ;   Label: LAB_0046ede9
    MOV ECX,dword ptr [0x01b68858]      ; 0046edee | DAT_01b68858
    PUSH ECX                            ; 0046edf4
    PUSH dword ptr [ESP + 0x10]         ; 0046edf5
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0046edf9
    PUSH dword ptr [ESP + 0xdc]         ; 0046ee00
    PUSH ESI                            ; 0046ee07
    LEA EAX,[EBX + 0x158]               ; 0046ee08
    PUSH EAX                            ; 0046ee0e
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100 ; 0046ee0f
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00568100(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    MOV EDI,dword ptr [EBX + 0x2c98]    ; 0046ee14
    ADD ESP,0x18                        ; 0046ee1a
    TEST EDI,EDI                        ; 0046ee1d
    JNZ 0x0046eebe                      ; 0046ee1f
        ;   XREF to: 0046eebe (CONDITIONAL_JUMP)  ; LAB_0046eebe
    MOV EAX,[0x01b6882c]                ; 0046ee25 | DAT_01b6882c
    LEA ESI,[EBX + 0x808]               ; 0046ee2a
    SHL EAX,0x4                         ; 0046ee30
    ADD EAX,ESI                         ; 0046ee33
    PUSH dword ptr [EBX + 0x2c9c]       ; 0046ee35
    PUSH EAX                            ; 0046ee3b
    MOV EAX,[0x01b6884c]                ; 0046ee3c | DAT_01b6884c
    SHL EAX,0x4                         ; 0046ee41
    ADD EAX,ESI                         ; 0046ee44
    PUSH EAX                            ; 0046ee46
    MOV dword ptr [ESP + 0xd4],ESI      ; 0046ee47
    LEA ESI,[ESP + 0xb4]                ; 0046ee4e
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0046ee55
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    MOV ESI,dword ptr [0x01b6884c]      ; 0046ee5a | DAT_01b6884c
    SHL ESI,0x4                         ; 0046ee60
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 0046ee63
    LEA ESI,[ESP + 0xb4]                ; 0046ee6a
    ADD ESP,0xc                         ; 0046ee71
    MOV EAX,[0x01b68828]                ; 0046ee74 | DAT_01b68828
    MOVSD ES:EDI,ESI                    ; 0046ee79
    MOVSD ES:EDI,ESI                    ; 0046ee7a
    MOVSD ES:EDI,ESI                    ; 0046ee7b
    MOVSD ES:EDI,ESI                    ; 0046ee7c
    SHL EAX,0x4                         ; 0046ee7d
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0046ee80
    ADD EAX,ESI                         ; 0046ee87
    PUSH dword ptr [EBX + 0x2c9c]       ; 0046ee89
    PUSH EAX                            ; 0046ee8f
    MOV EAX,[0x01b68848]                ; 0046ee90 | DAT_01b68848
    SHL EAX,0x4                         ; 0046ee95
    ADD EAX,ESI                         ; 0046ee98
    PUSH EAX                            ; 0046ee9a
    LEA ESI,[ESP + 0x34]                ; 0046ee9b
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 0046ee9f
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    MOV EAX,[0x01b68848]                ; 0046eea4 | DAT_01b68848
    SHL EAX,0x4                         ; 0046eea9
    LEA ESI,[ESP + 0x34]                ; 0046eeac
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 0046eeb0
    ADD ESP,0xc                         ; 0046eeb7
    MOVSD ES:EDI,ESI                    ; 0046eeba
    MOVSD ES:EDI,ESI                    ; 0046eebb
    MOVSD ES:EDI,ESI                    ; 0046eebc
    MOVSD ES:EDI,ESI                    ; 0046eebd
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 0046eebe
        ;   Label: LAB_0046eebe
    CMP EAX,0x1                         ; 0046eec4
    JNZ 0x0046f123                      ; 0046eec7
        ;   XREF to: 0046f123 (CONDITIONAL_JUMP)  ; LAB_0046f123
    MOV ESI,0x3e860a92                  ; 0046eecd
        ;   Label: LAB_0046eecd
    MOV EDI,0x3f19999a                  ; 0046eed2
    MOV EAX,dword ptr [EBX + 0x1ffc8]   ; 0046eed7
    XOR ECX,ECX                         ; 0046eedd
    MOV dword ptr [ESP + 0x10],EAX      ; 0046eedf
    MOV dword ptr [ESP + 0xc],ECX       ; 0046eee3
    MOV dword ptr [ESP + 0xd8],ESI      ; 0046eee7
    MOV dword ptr [ESP + 0xcc],EDI      ; 0046eeee
    FLD float ptr [ESP + 0x10]          ; 0046eef5
    FLDZ                                ; 0046eef9
    FCOMPP                              ; 0046eefb
    FNSTSW AX                           ; 0046eefd
    SAHF                                ; 0046eeff
    JBE 0x0046ef22                      ; 0046ef00
        ;   XREF to: 0046ef22 (CONDITIONAL_JUMP)  ; LAB_0046ef22
    FLD float ptr [0x005da08c]          ; 0046ef02 | DAT_005da08c
    FLD float ptr [ESP + 0x10]          ; 0046ef08
    FADD ST0,ST1                        ; 0046ef0c
    FLD float ptr [0x005fecd0]          ; 0046ef0e | DAT_005fecd0
    FADDP ST2,ST0                       ; 0046ef14
    FDIVRP                              ; 0046ef16
    FMUL float ptr [0x005da090]         ; 0046ef18 | DAT_005da090
    FSTP float ptr [ESP + 0xc]          ; 0046ef1e
    FLD float ptr [ESP + 0x10]          ; 0046ef22
        ;   Label: LAB_0046ef22
    FLDZ                                ; 0046ef26
    FCOMPP                              ; 0046ef28
    FNSTSW AX                           ; 0046ef2a
    SAHF                                ; 0046ef2c
    JNC 0x0046ef51                      ; 0046ef2d
        ;   XREF to: 0046ef51 (CONDITIONAL_JUMP)  ; LAB_0046ef51
    FLD float ptr [ESP + 0xd8]          ; 0046ef2f
    FLD float ptr [ESP + 0x10]          ; 0046ef36
    FSUB ST0,ST1                        ; 0046ef3a
    FLD float ptr [0x005fecd4]          ; 0046ef3c | DAT_005fecd4
    FSUBRP ST2,ST0                      ; 0046ef42
    FDIVRP                              ; 0046ef44
    FMUL float ptr [ESP + 0xcc]         ; 0046ef46
    FSTP float ptr [ESP + 0xc]          ; 0046ef4d
    PUSH 0x3                            ; 0046ef51
        ;   Label: LAB_0046ef51
    PUSH EBX                            ; 0046ef53
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0046ef54
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046ef59
    FLD float ptr [ESP + 0xe8]          ; 0046ef60
    FLD1                                ; 0046ef67
    FSUBRP                              ; 0046ef69
    ADD ESP,0x8                         ; 0046ef6b
    FMUL float ptr [ESP + 0x8]          ; 0046ef6e
    FMUL float ptr [ESP + 0xc]          ; 0046ef72
    FST float ptr [ESP + 0xc]           ; 0046ef76
    FLDZ                                ; 0046ef7a
    FCOMPP                              ; 0046ef7c
    FNSTSW AX                           ; 0046ef7e
    SAHF                                ; 0046ef80
    JNC 0x0046efce                      ; 0046ef81
        ;   XREF to: 0046efce (CONDITIONAL_JUMP)  ; LAB_0046efce
    PUSH 0x468a20                       ; 0046ef83
    MOV EAX,[0x01b68858]                ; 0046ef88 | DAT_01b68858
    PUSH EAX                            ; 0046ef8d
    PUSH dword ptr [ESP + 0x14]         ; 0046ef8e
    LEA ESI,[ESP + 0x94]                ; 0046ef92
    PUSH dword ptr [ESP + 0x1c]         ; 0046ef99
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005b7af0 ; 0046ef9d
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_005b7af0()
    ADD ESP,0x4                         ; 0046efa2
    LEA EAX,[ESP + 0x84]                ; 0046efa5
    LEA EDI,[ESP + 0x84]                ; 0046efac
    PUSH EAX                            ; 0046efb3
    LEA EAX,[EBX + 0x158]               ; 0046efb4
    LEA ESI,[ESP + 0x98]                ; 0046efba
    PUSH EAX                            ; 0046efc1
    MOVSD ES:EDI,ESI                    ; 0046efc2
    MOVSD ES:EDI,ESI                    ; 0046efc3
    MOVSD ES:EDI,ESI                    ; 0046efc4
    MOVSD ES:EDI,ESI                    ; 0046efc5
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0046efc6
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0046efcb
    PUSH 0x3                            ; 0046efce
        ;   Label: LAB_0046efce
    PUSH EBX                            ; 0046efd0
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0046efd1
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046efd6
    FLD float ptr [ESP + 0xe8]          ; 0046efdd
    FLD1                                ; 0046efe4
    FSUBRP                              ; 0046efe6
    ADD ESP,0x8                         ; 0046efe8
    FMUL float ptr [ESP + 0x8]          ; 0046efeb
    LEA ESI,[ESP + 0x98]                ; 0046efef
    PUSH dword ptr [EBX + 0x1ffcc]      ; 0046eff6
    FSTP float ptr [ESP + 0xc4]         ; 0046effc
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0046f003
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    ADD ESP,0x4                         ; 0046f008
    PUSH 0x468a20                       ; 0046f00b
    MOV EDX,dword ptr [0x01b68858]      ; 0046f010 | DAT_01b68858
    PUSH EDX                            ; 0046f016
    LEA EAX,[ESP + 0x50]                ; 0046f017
    PUSH dword ptr [ESP + 0xc8]         ; 0046f01b
    LEA EDI,[ESP + 0x54]                ; 0046f022
    PUSH EAX                            ; 0046f026
    LEA EAX,[EBX + 0x158]               ; 0046f027
    LEA ESI,[ESP + 0xa8]                ; 0046f02d
    PUSH EAX                            ; 0046f034
    MOVSD ES:EDI,ESI                    ; 0046f035
    MOVSD ES:EDI,ESI                    ; 0046f036
    MOVSD ES:EDI,ESI                    ; 0046f037
    MOVSD ES:EDI,ESI                    ; 0046f038
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0046f039
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0046f03e
    PUSH 0x1                            ; 0046f041
    PUSH EBX                            ; 0046f043
    CALL core_doc.cpp_FUN_0046f200      ; 0046f044
        ;   XREF to: 0046f200 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046f200()
    MOV ESI,dword ptr [0x01b6884c]      ; 0046f049 | DAT_01b6884c
    MOV EAX,[0x01b6882c]                ; 0046f04f | DAT_01b6882c
    SHL ESI,0x4                         ; 0046f054
    SHL EAX,0x4                         ; 0046f057
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 0046f05a
    LEA ESI,[EBX + EAX*0x1 + 0x808]     ; 0046f061
    MOV EAX,[0x01b68828]                ; 0046f068 | DAT_01b68828
    MOVSD ES:EDI,ESI                    ; 0046f06d
    MOVSD ES:EDI,ESI                    ; 0046f06e
    MOVSD ES:EDI,ESI                    ; 0046f06f
    MOVSD ES:EDI,ESI                    ; 0046f070
    SHL EAX,0x4                         ; 0046f071
    LEA ESI,[EBX + EAX*0x1]             ; 0046f074
    MOV EAX,[0x01b68848]                ; 0046f077 | DAT_01b68848
    SHL EAX,0x4                         ; 0046f07c
    LEA ESI,[ESI + 0x808]               ; 0046f07f
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 0046f085
    ADD ESP,0x8                         ; 0046f08c
    MOVSD ES:EDI,ESI                    ; 0046f08f
    MOVSD ES:EDI,ESI                    ; 0046f090
    MOVSD ES:EDI,ESI                    ; 0046f091
    MOVSD ES:EDI,ESI                    ; 0046f092
    MOV ECX,dword ptr [EBX + 0x2c98]    ; 0046f093
        ;   Label: LAB_0046f093
    CMP ECX,0x3                         ; 0046f099
    JZ 0x0046f131                       ; 0046f09c
        ;   XREF to: 0046f131 (CONDITIONAL_JUMP)  ; LAB_0046f131
    CMP ECX,0x4                         ; 0046f0a2
    JZ 0x0046f131                       ; 0046f0a5
        ;   XREF to: 0046f131 (CONDITIONAL_JUMP)  ; LAB_0046f131
    CMP ECX,0x9                         ; 0046f0ab
    JZ 0x0046f131                       ; 0046f0ae
        ;   XREF to: 0046f131 (CONDITIONAL_JUMP)  ; LAB_0046f131
    CMP ECX,0x6                         ; 0046f0b4
    JZ 0x0046f131                       ; 0046f0b7
        ;   XREF to: 0046f131 (CONDITIONAL_JUMP)  ; LAB_0046f131
    CMP ECX,0x7                         ; 0046f0bd
    JZ 0x0046f131                       ; 0046f0c0
        ;   XREF to: 0046f131 (CONDITIONAL_JUMP)  ; LAB_0046f131
    CMP ECX,0x11                        ; 0046f0c6
    JZ 0x0046f131                       ; 0046f0c9
        ;   XREF to: 0046f131 (CONDITIONAL_JUMP)  ; LAB_0046f131
    CMP ECX,0x12                        ; 0046f0cb
    JZ 0x0046f131                       ; 0046f0ce
        ;   XREF to: 0046f131 (CONDITIONAL_JUMP)  ; LAB_0046f131
    CMP ECX,0x8                         ; 0046f0d0
    JZ 0x0046f131                       ; 0046f0d3
        ;   XREF to: 0046f131 (CONDITIONAL_JUMP)  ; LAB_0046f131
    MOV ESP,EBP                         ; 0046f0d5
        ;   Label: LAB_0046f0d5
    POP EBP                             ; 0046f0d7
    POP EDI                             ; 0046f0d8
    POP ESI                             ; 0046f0d9
    POP EBX                             ; 0046f0da
    RET                                 ; 0046f0db
    CMP EAX,0x1b                        ; 0046f0dc
        ;   Label: LAB_0046f0dc
    JZ 0x0046ec90                       ; 0046f0df
        ;   XREF to: 0046ec90 (CONDITIONAL_JUMP)  ; LAB_0046ec90
    CMP EAX,0x1c                        ; 0046f0e5
    JNZ 0x0046f0f9                      ; 0046f0e8
        ;   XREF to: 0046f0f9 (CONDITIONAL_JUMP)  ; LAB_0046f0f9
    FLD float ptr [ESP + 0x14]          ; 0046f0ea
        ;   Label: LAB_0046f0ea
    FSUBR double ptr [0x005da06c]       ; 0046f0ee | DAT_005da06c
    JMP 0x0046ec9a                      ; 0046f0f4
        ;   XREF to: 0046ec9a (UNCONDITIONAL_JUMP)  ; LAB_0046ec9a
    CMP EAX,0x1d                        ; 0046f0f9
        ;   Label: LAB_0046f0f9
    JZ 0x0046f0ea                       ; 0046f0fc
        ;   XREF to: 0046f0ea (CONDITIONAL_JUMP)  ; LAB_0046f0ea
    JMP 0x0046eca7                      ; 0046f0fe
        ;   XREF to: 0046eca7 (UNCONDITIONAL_JUMP)  ; LAB_0046eca7
    FLDZ                                ; 0046f103
        ;   Label: LAB_0046f103
    FCOMP float ptr [ESP + 0xdc]        ; 0046f105
    FNSTSW AX                           ; 0046f10c
    SAHF                                ; 0046f10e
    JBE 0x0046ecc3                      ; 0046f10f
        ;   XREF to: 0046ecc3 (CONDITIONAL_JUMP)  ; LAB_0046ecc3
    XOR ECX,ECX                         ; 0046f115
    MOV dword ptr [ESP + 0xdc],ECX      ; 0046f117
    JMP 0x0046ecc3                      ; 0046f11e
        ;   XREF to: 0046ecc3 (UNCONDITIONAL_JUMP)  ; LAB_0046ecc3
    CMP EAX,0x13                        ; 0046f123
        ;   Label: LAB_0046f123
    JZ 0x0046eecd                       ; 0046f126
        ;   XREF to: 0046eecd (CONDITIONAL_JUMP)  ; LAB_0046eecd
    JMP 0x0046f093                      ; 0046f12c
        ;   XREF to: 0046f093 (UNCONDITIONAL_JUMP)  ; LAB_0046f093
    PUSH 0x3                            ; 0046f131
        ;   Label: LAB_0046f131
    PUSH EBX                            ; 0046f133
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0046f134
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xe8],EAX      ; 0046f139
    FLD float ptr [ESP + 0xe8]          ; 0046f140
    FLD1                                ; 0046f147
    FSUBRP                              ; 0046f149
    ADD ESP,0x8                         ; 0046f14b
    FMUL float ptr [ESP + 0x8]          ; 0046f14e
    LEA ESI,[ESP + 0x38]                ; 0046f152
    PUSH dword ptr [EBX + 0x1ffc8]      ; 0046f156
    FSTP float ptr [ESP + 0xc8]         ; 0046f15c
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005b7af0 ; 0046f163
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_005b7af0()
    ADD ESP,0x4                         ; 0046f168
    PUSH 0x468a20                       ; 0046f16b
    MOV EAX,[0x01b68858]                ; 0046f170 | DAT_01b68858
    PUSH EAX                            ; 0046f175
    PUSH dword ptr [ESP + 0xcc]         ; 0046f176
    LEA EAX,[ESP + 0x74]                ; 0046f17d
    LEA EDI,[ESP + 0x74]                ; 0046f181
    PUSH EAX                            ; 0046f185
    LEA EAX,[EBX + 0x158]               ; 0046f186
    LEA ESI,[ESP + 0x48]                ; 0046f18c
    PUSH EAX                            ; 0046f190
    MOVSD ES:EDI,ESI                    ; 0046f191
    MOVSD ES:EDI,ESI                    ; 0046f192
    MOVSD ES:EDI,ESI                    ; 0046f193
    MOVSD ES:EDI,ESI                    ; 0046f194
    MOV dword ptr [ESP + 0xdc],EAX      ; 0046f195
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0046f19c
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0046f1a1
    LEA ESI,[ESP + 0x58]                ; 0046f1a4
    PUSH dword ptr [EBX + 0x1ffcc]      ; 0046f1a8
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 0046f1ae
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    ADD ESP,0x4                         ; 0046f1b3
    PUSH 0x468a20                       ; 0046f1b6
    MOV ECX,dword ptr [0x01b68858]      ; 0046f1bb | DAT_01b68858
    PUSH ECX                            ; 0046f1c1
    LEA EAX,[ESP + 0x20]                ; 0046f1c2
    PUSH dword ptr [ESP + 0xcc]         ; 0046f1c6
    LEA EDI,[ESP + 0x24]                ; 0046f1cd
    PUSH EAX                            ; 0046f1d1
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0046f1d2
    LEA ESI,[ESP + 0x68]                ; 0046f1d9
    PUSH EBX                            ; 0046f1dd
    MOVSD ES:EDI,ESI                    ; 0046f1de
    MOVSD ES:EDI,ESI                    ; 0046f1df
    MOVSD ES:EDI,ESI                    ; 0046f1e0
    MOVSD ES:EDI,ESI                    ; 0046f1e1
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 ; 0046f1e2
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0046f1e7
    MOV ESP,EBP                         ; 0046f1ea
    POP EBP                             ; 0046f1ec
    POP EDI                             ; 0046f1ed
    POP ESI                             ; 0046f1ee
    POP EBX                             ; 0046f1ef
    RET                                 ; 0046f1f0

