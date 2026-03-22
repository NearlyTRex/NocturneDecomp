; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; float[1515]      Stack[-0x18cc]:6060  afStackY_18cc
; undefined4       Stack[-0x10c]:4  local_10c
; float            Stack[-0x100]:4  local_100
; float            Stack[-0xf8]:4  local_f8
; CQuaternion4f    Stack[-0xf0]:16  local_f0
; CQuaternion4f    Stack[-0xe0]:16  local_e0
; CQuaternion4f    Stack[-0xd0]:16  local_d0
; CQuaternion4f    Stack[-0xc0]:16  local_c0
; CQuaternion4f    Stack[-0xb0]:16  local_b0
; CQuaternion4f    Stack[-0xa0]:16  local_a0
; CQuaternion4f    Stack[-0x90]:16  local_90
; CQuaternion4f    Stack[-0x80]:16  local_80
; CQuaternion4f    Stack[-0x70]:16  local_70
; CQuaternion4f    Stack[-0x60]:16  local_60
; CQuaternion4f    Stack[-0x50]:16  local_50
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; CDeformableModelInstance * Stack[-0x30]:4  local_30
; float            Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520 at 005be603
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_006538c4
;   TerminatedCString s_CStranger_makeDrawDecisi_006538d9
;   double DOUBLE_00653914 = 0.25
;   double DOUBLE_0065391c = 4
;   double DOUBLE_00653924 = -0.75
;   double DOUBLE_0065392c = 0.000100000000000000
;   double DOUBLE_00653934 = 0.5
;   float FLOAT_0065393c = 0.3490658
;   float FLOAT_00653940 = 0.6000000
;   float FLOAT_00663770 = -1.047198
;   float FLOAT_00663774 = 1.221730
;   float FLOAT_00663778 = 2.700000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 g_StrangerIndices[3]
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0
;   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
;   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb60
        ;   Label: core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60
    PUSH ESI                            ; 005bfb61
    PUSH EDI                            ; 005bfb62
    PUSH EBP                            ; 005bfb63
    MOV EBP,ESP                         ; 005bfb64
    SUB ESP,0xf4                        ; 005bfb66
    AND ESP,0xfffffff8                  ; 005bfb6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bfb6f
    MOV EDX,dword ptr [EBX + 0x2a8c]    ; 005bfb72
    TEST EDX,EDX                        ; 005bfb78
    JL 0x005bfb81                       ; 005bfb7a
        ;   XREF to: 005bfb81 (CONDITIONAL_JUMP)  ; LAB_005bfb81
    CMP EDX,0x11                        ; 005bfb7c
    JL 0x005bfba4                       ; 005bfb7f
        ;   XREF to: 005bfba4 (CONDITIONAL_JUMP)  ; LAB_005bfba4
    MOV ESI,0x6538c4                    ; 005bfb81 | = "..\\core\\stranger.cpp"
        ;   Label: LAB_005bfb81
    MOV EDI,0xa85                       ; 005bfb86
    PUSH 0x6538d9                       ; 005bfb8b | = "CStranger::makeDrawDecision - draw mo..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005bfb90 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005bfb96 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005bfb9c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005bfba1
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 005bfba4
        ;   Label: LAB_005bfba4
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005bfbac
    SHL EAX,0x3                         ; 005bfbb2
    MOV ESI,EAX                         ; 005bfbb5
    SHL EAX,0x3                         ; 005bfbb7
    SUB EAX,ESI                         ; 005bfbba
    CMP dword ptr [EBX + EAX*0x1 + 0x262c],0x0 ; 005bfbbc
    JNZ 0x005bfbd0                      ; 005bfbc4
        ;   XREF to: 005bfbd0 (CONDITIONAL_JUMP)  ; LAB_005bfbd0
    MOV EAX,dword ptr [EBX + 0x2a90]    ; 005bfbc6
    MOV dword ptr [ESP + 0x10],EAX      ; 005bfbcc
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005bfbd0
        ;   Label: LAB_005bfbd0
    SHL EAX,0x3                         ; 005bfbd6
    MOV ESI,EAX                         ; 005bfbd9
    SHL EAX,0x3                         ; 005bfbdb
    SUB EAX,ESI                         ; 005bfbde
    CMP dword ptr [EBX + EAX*0x1 + 0x2630],0x0 ; 005bfbe0
    JNZ 0x005bfbfc                      ; 005bfbe8
        ;   XREF to: 005bfbfc (CONDITIONAL_JUMP)  ; LAB_005bfbfc
    FLD float ptr [EBX + 0x2a90]        ; 005bfbea
    FLD1                                ; 005bfbf0
    FSUBRP                              ; 005bfbf2
    FMUL float ptr [ESP + 0x10]         ; 005bfbf4
    FSTP float ptr [ESP + 0x10]         ; 005bfbf8
    PUSH 0x28                           ; 005bfbfc
        ;   Label: LAB_005bfbfc
    LEA ESI,[EBX + 0x158]               ; 005bfbfe
    PUSH ESI                            ; 005bfc04
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bfc05
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xe0],EAX      ; 005bfc0a
    ADD ESP,0x8                         ; 005bfc11
    PUSH 0x29                           ; 005bfc14
    PUSH ESI                            ; 005bfc16
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bfc17
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005bfc1c
    FLD float ptr [ESP + 0xf8]          ; 005bfc23
    ADD ESP,0x8                         ; 005bfc2a
    PUSH 0x24                           ; 005bfc2d
    FADD float ptr [ESP + 0xdc]         ; 005bfc2f
    PUSH ESI                            ; 005bfc36
    FSTP float ptr [ESP + 0xe0]         ; 005bfc37
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bfc3e
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005bfc43
    FLD float ptr [ESP + 0xf8]          ; 005bfc4a
    ADD ESP,0x8                         ; 005bfc51
    PUSH 0x22                           ; 005bfc54
    FADD float ptr [ESP + 0xdc]         ; 005bfc56
    PUSH ESI                            ; 005bfc5d
    FSTP float ptr [ESP + 0xe0]         ; 005bfc5e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bfc65
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005bfc6a
    FLD float ptr [ESP + 0xf8]          ; 005bfc71
    ADD ESP,0x8                         ; 005bfc78
    FADD float ptr [ESP + 0xd8]         ; 005bfc7b
    FLD1                                ; 005bfc82
    FSUBRP                              ; 005bfc84
    FLD float ptr [ESP + 0x10]          ; 005bfc86
    FXCH                                ; 005bfc8a
    FMUL ST1                            ; 005bfc8c
    FLDZ                                ; 005bfc8e
    FXCH                                ; 005bfc90
    FSTP ST2                            ; 005bfc92
    FXCH                                ; 005bfc94
    FSTP float ptr [ESP + 0x10]         ; 005bfc96
    FCOMP float ptr [ESP + 0x10]        ; 005bfc9a
    FNSTSW AX                           ; 005bfc9e
    SAHF                                ; 005bfca0
    JBE 0x005bfca9                      ; 005bfca1
        ;   XREF to: 005bfca9 (CONDITIONAL_JUMP)  ; LAB_005bfca9
    XOR ESI,ESI                         ; 005bfca3
    MOV dword ptr [ESP + 0x10],ESI      ; 005bfca5
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005bfca9
        ;   Label: LAB_005bfca9
    JNZ 0x005bfd3a                      ; 005bfcb0
        ;   XREF to: 005bfd3a (CONDITIONAL_JUMP)  ; LAB_005bfd3a
    LEA ESI,[EBX + 0x158]               ; 005bfcb6
    PUSH ESI                            ; 005bfcbc
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 005bfcbd
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0xf4],EAX      ; 005bfcc2
    FLD float ptr [ESP + 0xf4]          ; 005bfcc9
    ADD ESP,0x4                         ; 005bfcd0
    MOV EAX,0x3f800000                  ; 005bfcd3
    PUSH ESI                            ; 005bfcd8
    FSTP float ptr [ESP + 0x18]         ; 005bfcd9
    MOV dword ptr [ESP + 0xf0],EAX      ; 005bfcdd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005bfce4
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bfce9
    ADD ESP,0x4                         ; 005bfcec
    CMP EAX,0x17                        ; 005bfcef
    JNZ 0x005c0183                      ; 005bfcf2
        ;   XREF to: 005c0183 (CONDITIONAL_JUMP)  ; LAB_005c0183
    FLD float ptr [ESP + 0x14]          ; 005bfcf8
        ;   Label: LAB_005bfcf8
    FADD double ptr [0x00653924]        ; 005bfcfc | DOUBLE_00653924
    FMUL double ptr [0x0065391c]        ; 005bfd02 | DOUBLE_0065391c
        ;   Label: LAB_005bfd02
    FSTP float ptr [ESP + 0xec]         ; 005bfd08
    CMP dword ptr [ESP + 0xec],0x3f800000 ; 005bfd0f
        ;   Label: LAB_005bfd0f
    JLE 0x005c01aa                      ; 005bfd1a
        ;   XREF to: 005c01aa (CONDITIONAL_JUMP)  ; LAB_005c01aa
    MOV dword ptr [ESP + 0xec],0x3f800000 ; 005bfd20
    FLD float ptr [ESP + 0x10]          ; 005bfd2b
        ;   Label: LAB_005bfd2b
    FMUL float ptr [ESP + 0xec]         ; 005bfd2f
    FSTP float ptr [ESP + 0x10]         ; 005bfd36
    FLD float ptr [ESP + 0x10]          ; 005bfd3a
        ;   Label: LAB_005bfd3a
    FST double ptr [ESP]                ; 005bfd3e
    FCOMP double ptr [0x0065392c]       ; 005bfd41 | DOUBLE_0065392c
    FNSTSW AX                           ; 005bfd47
    SAHF                                ; 005bfd49
    JBE 0x005c017c                      ; 005bfd4a
        ;   XREF to: 005c017c (CONDITIONAL_JUMP)  ; LAB_005c017c
    FLD1                                ; 005bfd50
    FCOMP double ptr [ESP]              ; 005bfd52
    FNSTSW AX                           ; 005bfd55
    SAHF                                ; 005bfd57
    JNC 0x005bfd62                      ; 005bfd58
        ;   XREF to: 005bfd62 (CONDITIONAL_JUMP)  ; LAB_005bfd62
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 005bfd5a
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005bfd62
        ;   Label: LAB_005bfd62
    SHL EAX,0x3                         ; 005bfd68
    MOV ESI,EAX                         ; 005bfd6b
    SHL EAX,0x3                         ; 005bfd6d
    SUB EAX,ESI                         ; 005bfd70
    MOV ESI,EAX                         ; 005bfd72
    LEA EAX,[EBX + 0x262c]              ; 005bfd74
    ADD EAX,ESI                         ; 005bfd7a
    PUSH 0x1                            ; 005bfd7c
    ADD EAX,0x8                         ; 005bfd7e
    PUSH EAX                            ; 005bfd81
    LEA ESI,[EBX + 0x158]               ; 005bfd82
    PUSH ESI                            ; 005bfd88
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005bfd89
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bfd8e
    PUSH EAX                            ; 005bfd91
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005bfd92
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005bfd97
    PUSH dword ptr [EBX + 0x2a90]       ; 005bfd9a
    PUSH EAX                            ; 005bfda0
    PUSH ESI                            ; 005bfda1
    MOV dword ptr [ESP + 0xf4],EAX      ; 005bfda2
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 005bfda9
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV dword ptr [ESP + 0xfc],EAX      ; 005bfdae
    FLD float ptr [ESP + 0xfc]          ; 005bfdb5
    ADD ESP,0xc                         ; 005bfdbc
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005bfdbf
    FSTP float ptr [ESP + 0xe4]         ; 005bfdc5
    CMP EAX,0x9                         ; 005bfdcc
    JNZ 0x005bfe53                      ; 005bfdcf
        ;   XREF to: 005bfe53 (CONDITIONAL_JUMP)  ; LAB_005bfe53
    FLD float ptr [EBX + 0x2a90]        ; 005bfdd5
    FLD1                                ; 005bfddb
    FCOMPP                              ; 005bfddd
    FNSTSW AX                           ; 005bfddf
    SAHF                                ; 005bfde1
    JA 0x005bfe53                       ; 005bfde2
        ;   XREF to: 005bfe53 (CONDITIONAL_JUMP)  ; LAB_005bfe53
    CMP dword ptr [EBX + 0x1fc34],0x0   ; 005bfde4
    JZ 0x005bfe53                       ; 005bfdeb
        ;   XREF to: 005bfe53 (CONDITIONAL_JUMP)  ; LAB_005bfe53
    PUSH 0x1                            ; 005bfded
    LEA EAX,[EBX + 0x2864]              ; 005bfdef
    PUSH EAX                            ; 005bfdf5
    PUSH ESI                            ; 005bfdf6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005bfdf7
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bfdfc
    PUSH EAX                            ; 005bfdff
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005bfe00
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005bfe05
    PUSH 0x3f800000                     ; 005bfe08
    MOV EDI,EAX                         ; 005bfe0d
    PUSH 0x0                            ; 005bfe0f
    MOV dword ptr [ESP + 0xf0],EAX      ; 005bfe11
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005bfe18
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    PUSH 0x59ddb0                       ; 005bfe53
        ;   Label: LAB_005bfe53
    MOV ECX,dword ptr [0x03f6bb10]      ; 005bfe58 | g_StrangerIndices[17]
    PUSH ECX                            ; 005bfe5e
    PUSH dword ptr [ESP + 0x18]         ; 005bfe5f
    MOV ESI,dword ptr [ESP + 0xf4]      ; 005bfe63
    PUSH dword ptr [ESP + 0xf0]         ; 005bfe6a
    PUSH ESI                            ; 005bfe71
    LEA EAX,[EBX + 0x158]               ; 005bfe72
    PUSH EAX                            ; 005bfe78
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 005bfe79
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    MOV EDI,dword ptr [EBX + 0x2a8c]    ; 005bfe7e
    ADD ESP,0x18                        ; 005bfe84
    TEST EDI,EDI                        ; 005bfe87
    JNZ 0x005bff21                      ; 005bfe89
        ;   XREF to: 005bff21 (CONDITIONAL_JUMP)  ; LAB_005bff21
    MOV EAX,[0x03f6bae4]                ; 005bfe8f | g_StrangerIndices[6]
    LEA ESI,[EBX + 0x808]               ; 005bfe94
    SHL EAX,0x4                         ; 005bfe9a
    ADD EAX,ESI                         ; 005bfe9d
    PUSH dword ptr [EBX + 0x2a90]       ; 005bfe9f
    PUSH EAX                            ; 005bfea5
    MOV EAX,[0x03f6bb04]                ; 005bfea6 | g_StrangerIndices[14]
    SHL EAX,0x4                         ; 005bfeab
    ADD EAX,ESI                         ; 005bfeae
    PUSH EAX                            ; 005bfeb0
    MOV dword ptr [ESP + 0xe4],ESI      ; 005bfeb1
    LEA ESI,[ESP + 0x54]                ; 005bfeb8
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005bfebc
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    MOV EAX,[0x03f6bb04]                ; 005bfec1 | g_StrangerIndices[14]
    SHL EAX,0x4                         ; 005bfec6
    LEA ESI,[ESP + 0x54]                ; 005bfec9
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 005bfecd
    ADD ESP,0xc                         ; 005bfed4
    JMP 0x0060538d                      ; 005bfed7
        ;   XREF to: 0060538d (UNCONDITIONAL_JUMP)  ; LAB_0060538d
    MOV ESI,dword ptr [ESP + 0xd8]      ; 005bfee0
        ;   Label: LAB_005bfee0
    SHL EAX,0x4                         ; 005bfee7
    ADD EAX,ESI                         ; 005bfeea
    PUSH dword ptr [EBX + 0x2a90]       ; 005bfeec
    PUSH EAX                            ; 005bfef2
    MOV EAX,[0x03f6bb00]                ; 005bfef3 | g_StrangerIndices[13]
    SHL EAX,0x4                         ; 005bfef8
    ADD EAX,ESI                         ; 005bfefb
    PUSH EAX                            ; 005bfefd
    LEA ESI,[ESP + 0x24]                ; 005bfefe
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005bff02
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    MOV EAX,[0x03f6bb00]                ; 005bff07 | g_StrangerIndices[13]
    SHL EAX,0x4                         ; 005bff0c
    LEA ESI,[ESP + 0x24]                ; 005bff0f
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 005bff13
    JMP 0x0060fba0                      ; 005bff1a
        ;   XREF to: 0060fba0 (UNCONDITIONAL_JUMP)  ; LAB_0060fba0
    CMP dword ptr [EBX + 0x2a8c],0x1    ; 005bff21
        ;   Label: LAB_005bff21
    JNZ 0x005c0094                      ; 005bff28
        ;   XREF to: 005c0094 (CONDITIONAL_JUMP)  ; LAB_005c0094
    FLD float ptr [EBX + 0x1fbf0]       ; 005bff2e
    FADD float ptr [EBX + 0x1fc10]      ; 005bff34
    FMUL double ptr [0x00653934]        ; 005bff3a | DOUBLE_00653934
    MOV ECX,0x3e860a92                  ; 005bff40
    XOR EDX,EDX                         ; 005bff45
    MOV ESI,0x3f19999a                  ; 005bff47
    MOV dword ptr [ESP + 0x8],EDX       ; 005bff4c
    MOV dword ptr [ESP + 0xe0],ECX      ; 005bff50
    MOV dword ptr [ESP + 0xdc],ESI      ; 005bff57
    FST float ptr [ESP + 0xc]           ; 005bff5e
    FLDZ                                ; 005bff62
    FCOMPP                              ; 005bff64
    FNSTSW AX                           ; 005bff66
    SAHF                                ; 005bff68
    JBE 0x005bff8b                      ; 005bff69
        ;   XREF to: 005bff8b (CONDITIONAL_JUMP)  ; LAB_005bff8b
    FLD float ptr [0x0065393c]          ; 005bff6b | FLOAT_0065393c
    FLD float ptr [ESP + 0xc]           ; 005bff71
    FADD ST0,ST1                        ; 005bff75
    FLD float ptr [0x00663770]          ; 005bff77 | FLOAT_00663770
    FADDP ST2,ST0                       ; 005bff7d
    FDIVRP                              ; 005bff7f
    FMUL float ptr [0x00653940]         ; 005bff81 | FLOAT_00653940
    FSTP float ptr [ESP + 0x8]          ; 005bff87
    FLD float ptr [ESP + 0xc]           ; 005bff8b
        ;   Label: LAB_005bff8b
    FLDZ                                ; 005bff8f
    FCOMPP                              ; 005bff91
    FNSTSW AX                           ; 005bff93
    SAHF                                ; 005bff95
    JNC 0x005bffba                      ; 005bff96
        ;   XREF to: 005bffba (CONDITIONAL_JUMP)  ; LAB_005bffba
    FLD float ptr [ESP + 0xe0]          ; 005bff98
    FLD float ptr [ESP + 0xc]           ; 005bff9f
    FSUB ST0,ST1                        ; 005bffa3
    FLD float ptr [0x00663774]          ; 005bffa5 | FLOAT_00663774
    FSUBRP ST2,ST0                      ; 005bffab
    FDIVRP                              ; 005bffad
    FMUL float ptr [ESP + 0xdc]         ; 005bffaf
    FSTP float ptr [ESP + 0x8]          ; 005bffb6
    PUSH 0x3                            ; 005bffba
        ;   Label: LAB_005bffba
    PUSH EBX                            ; 005bffbc
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005bffbd
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005bffc2
    FLD float ptr [ESP + 0xf8]          ; 005bffc9
    FLD1                                ; 005bffd0
    FSUBRP                              ; 005bffd2
    ADD ESP,0x8                         ; 005bffd4
    FMUL float ptr [ESP + 0x10]         ; 005bffd7
    FMUL float ptr [ESP + 0x8]          ; 005bffdb
    FST float ptr [ESP + 0x8]           ; 005bffdf
    FLDZ                                ; 005bffe3
    FCOMPP                              ; 005bffe5
    FNSTSW AX                           ; 005bffe7
    SAHF                                ; 005bffe9
    JNC 0x005c0038                      ; 005bffea
        ;   XREF to: 005c0038 (CONDITIONAL_JUMP)  ; LAB_005c0038
    PUSH 0x5baee0                       ; 005bffec
    MOV EDI,dword ptr [0x03f6bb10]      ; 005bfff1 | g_StrangerIndices[17]
    PUSH EDI                            ; 005bfff7
    PUSH dword ptr [ESP + 0x10]         ; 005bfff8
    LEA ESI,[ESP + 0x84]                ; 005bfffc
    PUSH dword ptr [ESP + 0x18]         ; 005c0003
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005c0007
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005c000c
    LEA EAX,[ESP + 0xa4]                ; 005c000f
    LEA EDI,[ESP + 0xa4]                ; 005c0016
    PUSH EAX                            ; 005c001d
    LEA EAX,[EBX + 0x158]               ; 005c001e
    LEA ESI,[ESP + 0x88]                ; 005c0024
    JMP 0x0060f5af                      ; 005c002b
        ;   XREF to: 0060f5af (UNCONDITIONAL_JUMP)  ; LAB_0060f5af
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c0030
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   Label: LAB_005c0030
    ADD ESP,0x14                        ; 005c0035
    PUSH 0x0                            ; 005c0038
        ;   Label: LAB_005c0038
    PUSH EBX                            ; 005c003a
    CALL core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0 ; 005c003b
        ;   XREF to: 005c02b0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0(CStranger * this_ptr, int arm_side)
    ADD ESP,0x8                         ; 005c0040
    PUSH 0x1                            ; 005c0043
    PUSH EBX                            ; 005c0045
    CALL core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0 ; 005c0046
        ;   XREF to: 005c02b0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0(CStranger * this_ptr, int arm_side)
    MOV EAX,[0x03f6bb04]                ; 005c004b | g_StrangerIndices[14]
    MOV ESI,dword ptr [0x03f6bae4]      ; 005c0050 | g_StrangerIndices[6]
    SHL EAX,0x4                         ; 005c0056
    SHL ESI,0x4                         ; 005c0059
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 005c005c
    LEA ESI,[ESI + EBX*0x1 + 0x808]     ; 005c0063
    JMP 0x006053b3                      ; 005c006a
        ;   XREF to: 006053b3 (UNCONDITIONAL_JUMP)  ; LAB_006053b3
    MOV EAX,[0x03f6bae0]                ; 005c0074 | g_StrangerIndices[5]
        ;   Label: LAB_005c0074
    SHL ESI,0x4                         ; 005c0079
    SHL EAX,0x4                         ; 005c007c
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 005c007f
    LEA ESI,[EBX + EAX*0x1 + 0x808]     ; 005c0086
    JMP 0x0060fbc4                      ; 005c008d
        ;   XREF to: 0060fbc4 (UNCONDITIONAL_JUMP)  ; LAB_0060fbc4
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005c0094
        ;   Label: LAB_005c0094
    CMP EAX,0x3                         ; 005c009a
    JNZ 0x005c01ca                      ; 005c009d
        ;   XREF to: 005c01ca (CONDITIONAL_JUMP)  ; LAB_005c01ca
    PUSH 0x3                            ; 005c00a3
        ;   Label: LAB_005c00a3
    PUSH EBX                            ; 005c00a5
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c00a6
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005c00ab
    FLD float ptr [ESP + 0xf8]          ; 005c00b2
    FLD1                                ; 005c00b9
    FSUBRP                              ; 005c00bb
    ADD ESP,0x8                         ; 005c00bd
    FMUL float ptr [ESP + 0x10]         ; 005c00c0
    LEA ESI,[ESP + 0x88]                ; 005c00c4
    PUSH dword ptr [EBX + 0x1fbf0]      ; 005c00cb
    FSTP float ptr [ESP + 0xd4]         ; 005c00d1
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005c00d8
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005c00dd
    PUSH 0x5baee0                       ; 005c00e0
    MOV EDX,dword ptr [0x03f6bb10]      ; 005c00e5 | g_StrangerIndices[17]
    PUSH EDX                            ; 005c00eb
    LEA EAX,[ESP + 0x30]                ; 005c00ec
    PUSH dword ptr [ESP + 0xd8]         ; 005c00f0
    LEA EDI,[ESP + 0x34]                ; 005c00f7
    PUSH EAX                            ; 005c00fb
    LEA EAX,[EBX + 0x158]               ; 005c00fc
    LEA ESI,[ESP + 0x98]                ; 005c0102
    PUSH EAX                            ; 005c0109
    JMP 0x006053da                      ; 005c010a
        ;   XREF to: 006053da (UNCONDITIONAL_JUMP)  ; LAB_006053da
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c0115
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   Label: LAB_005c0115
    ADD ESP,0x14                        ; 005c011a
    LEA ESI,[ESP + 0xa8]                ; 005c011d
    PUSH dword ptr [EBX + 0x1fbf4]      ; 005c0124
    LEA EDI,[ESP + 0xbc]                ; 005c012a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005c0131
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xac]                ; 005c0136
    ADD ESP,0x4                         ; 005c013d
    JMP 0x0060f5d1                      ; 005c0140
        ;   XREF to: 0060f5d1 (UNCONDITIONAL_JUMP)  ; LAB_0060f5d1
    MOV ESI,dword ptr [0x03f6bb10]      ; 005c0149 | g_StrangerIndices[17]
        ;   Label: LAB_005c0149
    PUSH ESI                            ; 005c014f
    LEA EAX,[ESP + 0xc0]                ; 005c0150
    PUSH dword ptr [ESP + 0xd8]         ; 005c0157
    PUSH EAX                            ; 005c015e
    MOV EDI,dword ptr [ESP + 0xe8]      ; 005c015f
    PUSH EDI                            ; 005c0166
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c0167
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005c016c
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005c016f
    JZ 0x005c0207                       ; 005c0176
        ;   XREF to: 005c0207 (CONDITIONAL_JUMP)  ; LAB_005c0207
    MOV ESP,EBP                         ; 005c017c
        ;   Label: LAB_005c017c
    POP EBP                             ; 005c017e
    POP EDI                             ; 005c017f
    POP ESI                             ; 005c0180
    POP EBX                             ; 005c0181
    RET                                 ; 005c0182
    CMP EAX,0x18                        ; 005c0183
        ;   Label: LAB_005c0183
    JZ 0x005bfcf8                       ; 005c0186
        ;   XREF to: 005bfcf8 (CONDITIONAL_JUMP)  ; LAB_005bfcf8
    CMP EAX,0x19                        ; 005c018c
    JNZ 0x005c01a0                      ; 005c018f
        ;   XREF to: 005c01a0 (CONDITIONAL_JUMP)  ; LAB_005c01a0
    FLD float ptr [ESP + 0x14]          ; 005c0191
        ;   Label: LAB_005c0191
    FSUBR double ptr [0x00653914]       ; 005c0195 | DOUBLE_00653914
    JMP 0x005bfd02                      ; 005c019b
        ;   XREF to: 005bfd02 (UNCONDITIONAL_JUMP)  ; LAB_005bfd02
    CMP EAX,0x1a                        ; 005c01a0
        ;   Label: LAB_005c01a0
    JZ 0x005c0191                       ; 005c01a3
        ;   XREF to: 005c0191 (CONDITIONAL_JUMP)  ; LAB_005c0191
    JMP 0x005bfd0f                      ; 005c01a5
        ;   XREF to: 005bfd0f (UNCONDITIONAL_JUMP)  ; LAB_005bfd0f
    FLDZ                                ; 005c01aa
        ;   Label: LAB_005c01aa
    FCOMP float ptr [ESP + 0xec]        ; 005c01ac
    FNSTSW AX                           ; 005c01b3
    SAHF                                ; 005c01b5
    JBE 0x005bfd2b                      ; 005c01b6
        ;   XREF to: 005bfd2b (CONDITIONAL_JUMP)  ; LAB_005bfd2b
    XOR ECX,ECX                         ; 005c01bc
    MOV dword ptr [ESP + 0xec],ECX      ; 005c01be
    JMP 0x005bfd2b                      ; 005c01c5
        ;   XREF to: 005bfd2b (UNCONDITIONAL_JUMP)  ; LAB_005bfd2b
    CMP EAX,0x4                         ; 005c01ca
        ;   Label: LAB_005c01ca
    JZ 0x005c00a3                       ; 005c01cd
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)  ; LAB_005c00a3
    CMP EAX,0x9                         ; 005c01d3
    JZ 0x005c00a3                       ; 005c01d6
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)  ; LAB_005c00a3
    CMP EAX,0x6                         ; 005c01dc
    JZ 0x005c00a3                       ; 005c01df
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)  ; LAB_005c00a3
    CMP EAX,0x7                         ; 005c01e5
    JZ 0x005c00a3                       ; 005c01e8
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)  ; LAB_005c00a3
    CMP EAX,0x8                         ; 005c01ee
    JZ 0x005c00a3                       ; 005c01f1
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)  ; LAB_005c00a3
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005c01f7
    JZ 0x005c0207                       ; 005c01fe
        ;   XREF to: 005c0207 (CONDITIONAL_JUMP)  ; LAB_005c0207
    MOV ESP,EBP                         ; 005c0200
    POP EBP                             ; 005c0202
    POP EDI                             ; 005c0203
    POP ESI                             ; 005c0204
    POP EBX                             ; 005c0205
    RET                                 ; 005c0206
    FLD float ptr [EBX + 0x1fcb0]       ; 005c0207
        ;   Label: LAB_005c0207
    FDIV float ptr [0x00663778]         ; 005c020d | FLOAT_00663778
    FLD1                                ; 005c0213
    FPATAN                              ; 005c0215
    LEA ESI,[ESP + 0x38]                ; 005c0217
    FSTP float ptr [ESP + 0xd4]         ; 005c021b
    PUSH dword ptr [ESP + 0xd4]         ; 005c0222
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005c0229
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005c022e
    PUSH 0x59ddb0                       ; 005c0231
    MOV EDX,dword ptr [0x03f6badc]      ; 005c0236 | g_StrangerIndices[4]
    PUSH EDX                            ; 005c023c
    LEA EAX,[ESP + 0x70]                ; 005c023d
    PUSH 0x3f800000                     ; 005c0241
    LEA EDI,[ESP + 0x74]                ; 005c0246
    PUSH EAX                            ; 005c024a
    ADD EBX,0x158                       ; 005c024b
    LEA ESI,[ESP + 0x48]                ; 005c0251
    JMP 0x0060f5f7                      ; 005c0255
        ;   XREF to: 0060f5f7 (UNCONDITIONAL_JUMP)  ; LAB_0060f5f7
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c025a
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   Label: LAB_005c025a
    ADD ESP,0x14                        ; 005c025f
    LEA ESI,[ESP + 0x58]                ; 005c0262
    FLD float ptr [ESP + 0xd4]          ; 005c0266
    SUB ESP,0x4                         ; 005c026d
    FCHS                                ; 005c0270
    FSTP float ptr [ESP]                ; 005c0272
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005c0275
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 005c027a
    PUSH 0x59ddb0                       ; 005c027d
    MOV ECX,dword ptr [0x03f6bad8]      ; 005c0282 | g_StrangerIndices[3]
    PUSH ECX                            ; 005c0288
    LEA EAX,[ESP + 0x70]                ; 005c0289
    PUSH 0x3f800000                     ; 005c028d
    PUSH EAX                            ; 005c0292
    LEA EDI,[ESP + 0x78]                ; 005c0293
    LEA ESI,[ESP + 0x68]                ; 005c0297
    JMP 0x0060f619                      ; 005c029b
        ;   XREF to: 0060f619 (UNCONDITIONAL_JUMP)  ; LAB_0060f619
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c02a0
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   Label: LAB_005c02a0
    ADD ESP,0x14                        ; 005c02a5
    MOV ESP,EBP                         ; 005c02a8
    POP EBP                             ; 005c02aa
    POP EDI                             ; 005c02ab
    POP ESI                             ; 005c02ac
    POP EBX                             ; 005c02ad
    RET                                 ; 005c02ae
    MOV ECX,dword ptr [ESI]             ; 0060538d
        ;   Label: LAB_0060538d
    MOV dword ptr [EDI],ECX             ; 0060538f
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605391
    MOV dword ptr [EDI + 0x4],ECX       ; 00605394
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605397
    MOV dword ptr [EDI + 0x8],ECX       ; 0060539a
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060539d
    MOV dword ptr [EDI + 0xc],ECX       ; 006053a0
    ADD ESI,0x10                        ; 006053a3
    ADD EDI,0x10                        ; 006053a6
    MOV EAX,[0x03f6bae0]                ; 006053a9 | g_StrangerIndices[5]
    JMP 0x005bfee0                      ; 006053ae
        ;   XREF to: 005bfee0 (UNCONDITIONAL_JUMP)  ; LAB_005bfee0
    MOV ECX,dword ptr [ESI]             ; 006053b3
        ;   Label: LAB_006053b3
    MOV dword ptr [EDI],ECX             ; 006053b5
    MOV ECX,dword ptr [ESI + 0x4]       ; 006053b7
    MOV dword ptr [EDI + 0x4],ECX       ; 006053ba
    MOV ECX,dword ptr [ESI + 0x8]       ; 006053bd
    MOV dword ptr [EDI + 0x8],ECX       ; 006053c0
    MOV ECX,dword ptr [ESI + 0xc]       ; 006053c3
    MOV dword ptr [EDI + 0xc],ECX       ; 006053c6
    ADD ESI,0x10                        ; 006053c9
    ADD EDI,0x10                        ; 006053cc
    MOV ESI,dword ptr [0x03f6bb00]      ; 006053cf | g_StrangerIndices[13]
    JMP 0x005c0074                      ; 006053d5
        ;   XREF to: 005c0074 (UNCONDITIONAL_JUMP)  ; LAB_005c0074
    MOV ECX,dword ptr [ESI]             ; 006053da
        ;   Label: LAB_006053da
    MOV dword ptr [EDI],ECX             ; 006053dc
    MOV ECX,dword ptr [ESI + 0x4]       ; 006053de
    MOV dword ptr [EDI + 0x4],ECX       ; 006053e1
    MOV ECX,dword ptr [ESI + 0x8]       ; 006053e4
    MOV dword ptr [EDI + 0x8],ECX       ; 006053e7
    MOV ECX,dword ptr [ESI + 0xc]       ; 006053ea
    MOV dword ptr [EDI + 0xc],ECX       ; 006053ed
    ADD ESI,0x10                        ; 006053f0
    ADD EDI,0x10                        ; 006053f3
    MOV dword ptr [ESP + 0xec],EAX      ; 006053f6
    JMP 0x005c0115                      ; 006053fd
        ;   XREF to: 005c0115 (UNCONDITIONAL_JUMP)  ; LAB_005c0115
    PUSH EAX                            ; 0060f5af
        ;   Label: LAB_0060f5af
    MOV ECX,dword ptr [ESI]             ; 0060f5b0
    MOV dword ptr [EDI],ECX             ; 0060f5b2
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f5b4
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f5b7
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f5ba
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f5bd
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f5c0
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f5c3
    ADD ESI,0x10                        ; 0060f5c6
    ADD EDI,0x10                        ; 0060f5c9
    JMP 0x005c0030                      ; 0060f5cc
        ;   XREF to: 005c0030 (UNCONDITIONAL_JUMP)  ; LAB_005c0030
    MOV ECX,dword ptr [ESI]             ; 0060f5d1
        ;   Label: LAB_0060f5d1
    MOV dword ptr [EDI],ECX             ; 0060f5d3
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f5d5
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f5d8
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f5db
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f5de
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f5e1
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f5e4
    ADD ESI,0x10                        ; 0060f5e7
    ADD EDI,0x10                        ; 0060f5ea
    PUSH 0x5baee0                       ; 0060f5ed
    JMP 0x005c0149                      ; 0060f5f2
        ;   XREF to: 005c0149 (UNCONDITIONAL_JUMP)  ; LAB_005c0149
    PUSH EBX                            ; 0060f5f7
        ;   Label: LAB_0060f5f7
    MOV ECX,dword ptr [ESI]             ; 0060f5f8
    MOV dword ptr [EDI],ECX             ; 0060f5fa
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f5fc
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f5ff
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f602
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f605
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f608
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f60b
    ADD ESI,0x10                        ; 0060f60e
    ADD EDI,0x10                        ; 0060f611
    JMP 0x005c025a                      ; 0060f614
        ;   XREF to: 005c025a (UNCONDITIONAL_JUMP)  ; LAB_005c025a
    PUSH EBX                            ; 0060f619
        ;   Label: LAB_0060f619
    MOV ECX,dword ptr [ESI]             ; 0060f61a
    MOV dword ptr [EDI],ECX             ; 0060f61c
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f61e
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f621
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f624
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f627
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f62a
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f62d
    ADD ESI,0x10                        ; 0060f630
    ADD EDI,0x10                        ; 0060f633
    JMP 0x005c02a0                      ; 0060f636
        ;   XREF to: 005c02a0 (UNCONDITIONAL_JUMP)  ; LAB_005c02a0
    ADD ESP,0xc                         ; 0060fba0
        ;   Label: LAB_0060fba0
    MOV ECX,dword ptr [ESI]             ; 0060fba3
    MOV dword ptr [EDI],ECX             ; 0060fba5
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060fba7
    MOV dword ptr [EDI + 0x4],ECX       ; 0060fbaa
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060fbad
    MOV dword ptr [EDI + 0x8],ECX       ; 0060fbb0
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060fbb3
    MOV dword ptr [EDI + 0xc],ECX       ; 0060fbb6
    ADD ESI,0x10                        ; 0060fbb9
    ADD EDI,0x10                        ; 0060fbbc
    JMP 0x005bff21                      ; 0060fbbf
        ;   XREF to: 005bff21 (UNCONDITIONAL_JUMP)  ; LAB_005bff21
    ADD ESP,0x8                         ; 0060fbc4
        ;   Label: LAB_0060fbc4
    MOV ECX,dword ptr [ESI]             ; 0060fbc7
    MOV dword ptr [EDI],ECX             ; 0060fbc9
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060fbcb
    MOV dword ptr [EDI + 0x4],ECX       ; 0060fbce
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060fbd1
    MOV dword ptr [EDI + 0x8],ECX       ; 0060fbd4
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060fbd7
    MOV dword ptr [EDI + 0xc],ECX       ; 0060fbda
    ADD ESI,0x10                        ; 0060fbdd
    ADD EDI,0x10                        ; 0060fbe0
    JMP 0x005c0094                      ; 0060fbe3
        ;   XREF to: 005c0094 (UNCONDITIONAL_JUMP)  ; LAB_005c0094

