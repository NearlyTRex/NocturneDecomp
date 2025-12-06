; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005bfb60()
;
; Local Variables:
; undefined4       Stack[-0x10c]:4  local_10c
; undefined8       Stack[-0x108]:8  local_108
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined1       Stack[-0xf0]:1  local_f0
; undefined1       Stack[-0xe0]:1  local_e0
; undefined1       Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xc0]:1  local_c0
; undefined1       Stack[-0xb0]:1  local_b0
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x90]:1  local_90
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x50]:1  local_50
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
;   core_stranger.cpp_CStranger_FUN_005be520 at 005be603
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
;   undefined4 DAT_00663770
;   undefined4 DAT_00663774
;   undefined4 DAT_00663778
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_03f6bad8
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_FUN_0042e840
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_stranger.cpp_CStranger_FUN_005c02b0
;   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
;   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb60
        ;   Label: core_stranger.cpp_CStranger_FUN_005bfb60
    PUSH ESI                            ; 005bfb61
    PUSH EDI                            ; 005bfb62
    PUSH EBP                            ; 005bfb63
    MOV EBP,ESP                         ; 005bfb64
    SUB ESP,0xf4                        ; 005bfb66
    AND ESP,0xfffffff8                  ; 005bfb6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bfb6f
    MOV EDX,dword ptr [EBX + 0x2a8c]    ; 005bfb72
    TEST EDX,EDX                        ; 005bfb78
    JL 0x005bfb81                       ; 005bfb7a | LAB_005bfb81
        ;   XREF to: 005bfb81 (CONDITIONAL_JUMP)
    CMP EDX,0x11                        ; 005bfb7c
    JL 0x005bfba4                       ; 005bfb7f | LAB_005bfba4
        ;   XREF to: 005bfba4 (CONDITIONAL_JUMP)
    MOV ESI,0x6538c4                    ; 005bfb81 | = "..\\core\\stranger.cpp" | s_core_stranger_cpp_006538c4 = ..\core\stranger.cpp
        ;   Label: LAB_005bfb81
    MOV EDI,0xa85                       ; 005bfb86
    PUSH 0x6538d9                       ; 005bfb8b | = "CStranger::makeDrawDecision - draw mo..." | s_CStranger_makeDrawDecisi_006538d9 = CStranger::makeDrawDecision - draw motion out of range!
    MOV dword ptr [0x02f0ca48],ESI      ; 005bfb90 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005bfb96 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005bfb9c | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005bfba1
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 005bfba4
        ;   Label: LAB_005bfba4
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005bfbac
    SHL EAX,0x3                         ; 005bfbb2
    MOV ESI,EAX                         ; 005bfbb5
    SHL EAX,0x3                         ; 005bfbb7
    SUB EAX,ESI                         ; 005bfbba
    CMP dword ptr [EBX + EAX*0x1 + 0x262c],0x0 ; 005bfbbc
    JNZ 0x005bfbd0                      ; 005bfbc4 | LAB_005bfbd0
        ;   XREF to: 005bfbd0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2a90]    ; 005bfbc6
    MOV dword ptr [ESP + 0x10],EAX      ; 005bfbcc
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005bfbd0
        ;   Label: LAB_005bfbd0
    SHL EAX,0x3                         ; 005bfbd6
    MOV ESI,EAX                         ; 005bfbd9
    SHL EAX,0x3                         ; 005bfbdb
    SUB EAX,ESI                         ; 005bfbde
    CMP dword ptr [EBX + EAX*0x1 + 0x2630],0x0 ; 005bfbe0
    JNZ 0x005bfbfc                      ; 005bfbe8 | LAB_005bfbfc
        ;   XREF to: 005bfbfc (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2a90]        ; 005bfbea
    FLD1                                ; 005bfbf0
    FSUBRP                              ; 005bfbf2
    FMUL float ptr [ESP + 0x10]         ; 005bfbf4
    FSTP float ptr [ESP + 0x10]         ; 005bfbf8
    PUSH 0x28                           ; 005bfbfc
        ;   Label: LAB_005bfbfc
    LEA ESI,[EBX + 0x158]               ; 005bfbfe
    PUSH ESI                            ; 005bfc04
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bfc05 | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xe0],EAX      ; 005bfc0a
    ADD ESP,0x8                         ; 005bfc11
    PUSH 0x29                           ; 005bfc14
    PUSH ESI                            ; 005bfc16
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bfc17 | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005bfc1c
    FLD float ptr [ESP + 0xf8]          ; 005bfc23
    ADD ESP,0x8                         ; 005bfc2a
    PUSH 0x24                           ; 005bfc2d
    FADD float ptr [ESP + 0xdc]         ; 005bfc2f
    PUSH ESI                            ; 005bfc36
    FSTP float ptr [ESP + 0xe0]         ; 005bfc37
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bfc3e | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005bfc43
    FLD float ptr [ESP + 0xf8]          ; 005bfc4a
    ADD ESP,0x8                         ; 005bfc51
    PUSH 0x22                           ; 005bfc54
    FADD float ptr [ESP + 0xdc]         ; 005bfc56
    PUSH ESI                            ; 005bfc5d
    FSTP float ptr [ESP + 0xe0]         ; 005bfc5e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bfc65 | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
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
    JBE 0x005bfca9                      ; 005bfca1 | LAB_005bfca9
        ;   XREF to: 005bfca9 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005bfca3
    MOV dword ptr [ESP + 0x10],ESI      ; 005bfca5
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005bfca9
        ;   Label: LAB_005bfca9
    JNZ 0x005bfd3a                      ; 005bfcb0 | LAB_005bfd3a
        ;   XREF to: 005bfd3a (CONDITIONAL_JUMP)
    LEA ESI,[EBX + 0x158]               ; 005bfcb6
    PUSH ESI                            ; 005bfcbc
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 005bfcbd | float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xf4],EAX      ; 005bfcc2
    FLD float ptr [ESP + 0xf4]          ; 005bfcc9
    ADD ESP,0x4                         ; 005bfcd0
    MOV EAX,0x3f800000                  ; 005bfcd3
    PUSH ESI                            ; 005bfcd8
    FSTP float ptr [ESP + 0x18]         ; 005bfcd9
    MOV dword ptr [ESP + 0xf0],EAX      ; 005bfcdd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005bfce4 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bfce9
    ADD ESP,0x4                         ; 005bfcec
    CMP EAX,0x17                        ; 005bfcef
    JNZ 0x005c0183                      ; 005bfcf2 | LAB_005c0183
        ;   XREF to: 005c0183 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x14]          ; 005bfcf8
        ;   Label: LAB_005bfcf8
    FADD double ptr [0x00653924]        ; 005bfcfc | double DOUBLE_00653924
    FMUL double ptr [0x0065391c]        ; 005bfd02 | double DOUBLE_0065391c
        ;   Label: LAB_005bfd02
    FSTP float ptr [ESP + 0xec]         ; 005bfd08
    CMP dword ptr [ESP + 0xec],0x3f800000 ; 005bfd0f
        ;   Label: LAB_005bfd0f
    JLE 0x005c01aa                      ; 005bfd1a | LAB_005c01aa
        ;   XREF to: 005c01aa (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xec],0x3f800000 ; 005bfd20
    FLD float ptr [ESP + 0x10]          ; 005bfd2b
        ;   Label: LAB_005bfd2b
    FMUL float ptr [ESP + 0xec]         ; 005bfd2f
    FSTP float ptr [ESP + 0x10]         ; 005bfd36
    FLD float ptr [ESP + 0x10]          ; 005bfd3a
        ;   Label: LAB_005bfd3a
    FST double ptr [ESP]                ; 005bfd3e
    FCOMP double ptr [0x0065392c]       ; 005bfd41 | double DOUBLE_0065392c
    FNSTSW AX                           ; 005bfd47
    SAHF                                ; 005bfd49
    JBE 0x005c017c                      ; 005bfd4a | LAB_005c017c
        ;   XREF to: 005c017c (CONDITIONAL_JUMP)
    FLD1                                ; 005bfd50
    FCOMP double ptr [ESP]              ; 005bfd52
    FNSTSW AX                           ; 005bfd55
    SAHF                                ; 005bfd57
    JNC 0x005bfd62                      ; 005bfd58 | LAB_005bfd62
        ;   XREF to: 005bfd62 (CONDITIONAL_JUMP)
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
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005bfd89 | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005bfd8e
    PUSH EAX                            ; 005bfd91
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005bfd92 | int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005bfd97
    PUSH dword ptr [EBX + 0x2a90]       ; 005bfd9a
    PUSH EAX                            ; 005bfda0
    PUSH ESI                            ; 005bfda1
    MOV dword ptr [ESP + 0xf4],EAX      ; 005bfda2
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 005bfda9 | float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xfc],EAX      ; 005bfdae
    FLD float ptr [ESP + 0xfc]          ; 005bfdb5
    ADD ESP,0xc                         ; 005bfdbc
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005bfdbf
    FSTP float ptr [ESP + 0xe4]         ; 005bfdc5
    CMP EAX,0x9                         ; 005bfdcc
    JNZ 0x005bfe53                      ; 005bfdcf | LAB_005bfe53
        ;   XREF to: 005bfe53 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2a90]        ; 005bfdd5
    FLD1                                ; 005bfddb
    FCOMPP                              ; 005bfddd
    FNSTSW AX                           ; 005bfddf
    SAHF                                ; 005bfde1
    JA 0x005bfe53                       ; 005bfde2 | LAB_005bfe53
        ;   XREF to: 005bfe53 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fc34],0x0   ; 005bfde4
    JZ 0x005bfe53                       ; 005bfdeb | LAB_005bfe53
        ;   XREF to: 005bfe53 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005bfded
    LEA EAX,[EBX + 0x2864]              ; 005bfdef
    PUSH EAX                            ; 005bfdf5
    PUSH ESI                            ; 005bfdf6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005bfdf7 | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005bfdfc
    PUSH EAX                            ; 005bfdff
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 005bfe00 | int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005bfe05
    PUSH 0x3f800000                     ; 005bfe08
    MOV EDI,EAX                         ; 005bfe0d
    PUSH 0x0                            ; 005bfe0f
    MOV dword ptr [ESP + 0xf0],EAX      ; 005bfe11
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005bfe18 | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    PUSH 0x59ddb0                       ; 005bfe53
        ;   Label: LAB_005bfe53
    MOV ECX,dword ptr [0x03f6bb10]      ; 005bfe58 | undefined4 DAT_03f6bb10
    PUSH ECX                            ; 005bfe5e
    PUSH dword ptr [ESP + 0x18]         ; 005bfe5f
    MOV ESI,dword ptr [ESP + 0xf4]      ; 005bfe63
    PUSH dword ptr [ESP + 0xf0]         ; 005bfe6a
    PUSH ESI                            ; 005bfe71
    LEA EAX,[EBX + 0x158]               ; 005bfe72
    PUSH EAX                            ; 005bfe78
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 005bfe79 | void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBX + 0x2a8c]    ; 005bfe7e
    ADD ESP,0x18                        ; 005bfe84
    TEST EDI,EDI                        ; 005bfe87
    JNZ 0x005bff21                      ; 005bfe89 | LAB_005bff21
        ;   XREF to: 005bff21 (CONDITIONAL_JUMP)
    MOV EAX,[0x03f6bae4]                ; 005bfe8f | undefined4 DAT_03f6bae4
    LEA ESI,[EBX + 0x808]               ; 005bfe94
    SHL EAX,0x4                         ; 005bfe9a
    ADD EAX,ESI                         ; 005bfe9d
    PUSH dword ptr [EBX + 0x2a90]       ; 005bfe9f
    PUSH EAX                            ; 005bfea5
    MOV EAX,[0x03f6bb04]                ; 005bfea6 | undefined4 DAT_03f6bb04
    SHL EAX,0x4                         ; 005bfeab
    ADD EAX,ESI                         ; 005bfeae
    PUSH EAX                            ; 005bfeb0
    MOV dword ptr [ESP + 0xe4],ESI      ; 005bfeb1
    LEA ESI,[ESP + 0x54]                ; 005bfeb8
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005bfebc | CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03f6bb04]                ; 005bfec1 | undefined4 DAT_03f6bb04
    SHL EAX,0x4                         ; 005bfec6
    LEA ESI,[ESP + 0x54]                ; 005bfec9
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 005bfecd
    ADD ESP,0xc                         ; 005bfed4
    MOVSD ES:EDI,ESI                    ; 005bfed7
    MOVSD ES:EDI,ESI                    ; 005bfed8
    MOVSD ES:EDI,ESI                    ; 005bfed9
    MOVSD ES:EDI,ESI                    ; 005bfeda
    MOV EAX,[0x03f6bae0]                ; 005bfedb | undefined4 DAT_03f6bae0
    MOV ESI,dword ptr [ESP + 0xd8]      ; 005bfee0
    SHL EAX,0x4                         ; 005bfee7
    ADD EAX,ESI                         ; 005bfeea
    PUSH dword ptr [EBX + 0x2a90]       ; 005bfeec
    PUSH EAX                            ; 005bfef2
    MOV EAX,[0x03f6bb00]                ; 005bfef3 | undefined4 DAT_03f6bb00
    SHL EAX,0x4                         ; 005bfef8
    ADD EAX,ESI                         ; 005bfefb
    PUSH EAX                            ; 005bfefd
    LEA ESI,[ESP + 0x24]                ; 005bfefe
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005bff02 | CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03f6bb00]                ; 005bff07 | undefined4 DAT_03f6bb00
    SHL EAX,0x4                         ; 005bff0c
    LEA ESI,[ESP + 0x24]                ; 005bff0f
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 005bff13
    ADD ESP,0xc                         ; 005bff1a
    MOVSD ES:EDI,ESI                    ; 005bff1d
    MOVSD ES:EDI,ESI                    ; 005bff1e
    MOVSD ES:EDI,ESI                    ; 005bff1f
    MOVSD ES:EDI,ESI                    ; 005bff20
    CMP dword ptr [EBX + 0x2a8c],0x1    ; 005bff21
        ;   Label: LAB_005bff21
    JNZ 0x005c0094                      ; 005bff28 | LAB_005c0094
        ;   XREF to: 005c0094 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x1fbf0]       ; 005bff2e
    FADD float ptr [EBX + 0x1fc10]      ; 005bff34
    FMUL double ptr [0x00653934]        ; 005bff3a | double DOUBLE_00653934
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
    JBE 0x005bff8b                      ; 005bff69 | LAB_005bff8b
        ;   XREF to: 005bff8b (CONDITIONAL_JUMP)
    FLD float ptr [0x0065393c]          ; 005bff6b | float FLOAT_0065393c
    FLD float ptr [ESP + 0xc]           ; 005bff71
    FADD ST0,ST1                        ; 005bff75
    FLD float ptr [0x00663770]          ; 005bff77 | undefined4 DAT_00663770
    FADDP ST2,ST0                       ; 005bff7d
    FDIVRP                              ; 005bff7f
    FMUL float ptr [0x00653940]         ; 005bff81 | float FLOAT_00653940
    FSTP float ptr [ESP + 0x8]          ; 005bff87
    FLD float ptr [ESP + 0xc]           ; 005bff8b
        ;   Label: LAB_005bff8b
    FLDZ                                ; 005bff8f
    FCOMPP                              ; 005bff91
    FNSTSW AX                           ; 005bff93
    SAHF                                ; 005bff95
    JNC 0x005bffba                      ; 005bff96 | LAB_005bffba
        ;   XREF to: 005bffba (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0xe0]          ; 005bff98
    FLD float ptr [ESP + 0xc]           ; 005bff9f
    FSUB ST0,ST1                        ; 005bffa3
    FLD float ptr [0x00663774]          ; 005bffa5 | undefined4 DAT_00663774
    FSUBRP ST2,ST0                      ; 005bffab
    FDIVRP                              ; 005bffad
    FMUL float ptr [ESP + 0xdc]         ; 005bffaf
    FSTP float ptr [ESP + 0x8]          ; 005bffb6
    PUSH 0x3                            ; 005bffba
        ;   Label: LAB_005bffba
    PUSH EBX                            ; 005bffbc
    CALL core_charactr.cpp_CCharacter_FUN_0042e840 ; 005bffbd | undefined core_charactr.cpp_CCharacter_FUN_0042e840()
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)
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
    JNC 0x005c0038                      ; 005bffea | LAB_005c0038
        ;   XREF to: 005c0038 (CONDITIONAL_JUMP)
    PUSH 0x5baee0                       ; 005bffec
    MOV EDI,dword ptr [0x03f6bb10]      ; 005bfff1 | undefined4 DAT_03f6bb10
    PUSH EDI                            ; 005bfff7
    PUSH dword ptr [ESP + 0x10]         ; 005bfff8
    LEA ESI,[ESP + 0x84]                ; 005bfffc
    PUSH dword ptr [ESP + 0x18]         ; 005c0003
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005c0007 | void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c000c
    LEA EAX,[ESP + 0xa4]                ; 005c000f
    LEA EDI,[ESP + 0xa4]                ; 005c0016
    PUSH EAX                            ; 005c001d
    LEA EAX,[EBX + 0x158]               ; 005c001e
    LEA ESI,[ESP + 0x88]                ; 005c0024
    PUSH EAX                            ; 005c002b
    MOVSD ES:EDI,ESI                    ; 005c002c
    MOVSD ES:EDI,ESI                    ; 005c002d
    MOVSD ES:EDI,ESI                    ; 005c002e
    MOVSD ES:EDI,ESI                    ; 005c002f
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c0030 | void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005c0035
    PUSH 0x0                            ; 005c0038
        ;   Label: LAB_005c0038
    PUSH EBX                            ; 005c003a
    CALL core_stranger.cpp_CStranger_FUN_005c02b0 ; 005c003b | undefined core_stranger.cpp_CStranger_FUN_005c02b0()
        ;   XREF to: 005c02b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c0040
    PUSH 0x1                            ; 005c0043
    PUSH EBX                            ; 005c0045
    CALL core_stranger.cpp_CStranger_FUN_005c02b0 ; 005c0046 | undefined core_stranger.cpp_CStranger_FUN_005c02b0()
        ;   XREF to: 005c02b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x03f6bb04]                ; 005c004b | undefined4 DAT_03f6bb04
    MOV ESI,dword ptr [0x03f6bae4]      ; 005c0050 | undefined4 DAT_03f6bae4
    SHL EAX,0x4                         ; 005c0056
    SHL ESI,0x4                         ; 005c0059
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 005c005c
    LEA ESI,[ESI + EBX*0x1 + 0x808]     ; 005c0063
    MOVSD ES:EDI,ESI                    ; 005c006a
    MOVSD ES:EDI,ESI                    ; 005c006b
    MOVSD ES:EDI,ESI                    ; 005c006c
    MOVSD ES:EDI,ESI                    ; 005c006d
    MOV ESI,dword ptr [0x03f6bb00]      ; 005c006e | undefined4 DAT_03f6bb00
    MOV EAX,[0x03f6bae0]                ; 005c0074 | undefined4 DAT_03f6bae0
    SHL ESI,0x4                         ; 005c0079
    SHL EAX,0x4                         ; 005c007c
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 005c007f
    LEA ESI,[EBX + EAX*0x1 + 0x808]     ; 005c0086
    ADD ESP,0x8                         ; 005c008d
    MOVSD ES:EDI,ESI                    ; 005c0090
    MOVSD ES:EDI,ESI                    ; 005c0091
    MOVSD ES:EDI,ESI                    ; 005c0092
    MOVSD ES:EDI,ESI                    ; 005c0093
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 005c0094
        ;   Label: LAB_005c0094
    CMP EAX,0x3                         ; 005c009a
    JNZ 0x005c01ca                      ; 005c009d | LAB_005c01ca
        ;   XREF to: 005c01ca (CONDITIONAL_JUMP)
    PUSH 0x3                            ; 005c00a3
        ;   Label: LAB_005c00a3
    PUSH EBX                            ; 005c00a5
    CALL core_charactr.cpp_CCharacter_FUN_0042e840 ; 005c00a6 | undefined core_charactr.cpp_CCharacter_FUN_0042e840()
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005c00ab
    FLD float ptr [ESP + 0xf8]          ; 005c00b2
    FLD1                                ; 005c00b9
    FSUBRP                              ; 005c00bb
    ADD ESP,0x8                         ; 005c00bd
    FMUL float ptr [ESP + 0x10]         ; 005c00c0
    LEA ESI,[ESP + 0x88]                ; 005c00c4
    PUSH dword ptr [EBX + 0x1fbf0]      ; 005c00cb
    FSTP float ptr [ESP + 0xd4]         ; 005c00d1
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 005c00d8 | void core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c00dd
    PUSH 0x5baee0                       ; 005c00e0
    MOV EDX,dword ptr [0x03f6bb10]      ; 005c00e5 | undefined4 DAT_03f6bb10
    PUSH EDX                            ; 005c00eb
    LEA EAX,[ESP + 0x30]                ; 005c00ec
    PUSH dword ptr [ESP + 0xd8]         ; 005c00f0
    LEA EDI,[ESP + 0x34]                ; 005c00f7
    PUSH EAX                            ; 005c00fb
    LEA EAX,[EBX + 0x158]               ; 005c00fc
    LEA ESI,[ESP + 0x98]                ; 005c0102
    PUSH EAX                            ; 005c0109
    MOVSD ES:EDI,ESI                    ; 005c010a
    MOVSD ES:EDI,ESI                    ; 005c010b
    MOVSD ES:EDI,ESI                    ; 005c010c
    MOVSD ES:EDI,ESI                    ; 005c010d
    MOV dword ptr [ESP + 0xec],EAX      ; 005c010e
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c0115 | void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005c011a
    LEA ESI,[ESP + 0xa8]                ; 005c011d
    PUSH dword ptr [EBX + 0x1fbf4]      ; 005c0124
    LEA EDI,[ESP + 0xbc]                ; 005c012a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005c0131 | void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0xac]                ; 005c0136
    ADD ESP,0x4                         ; 005c013d
    MOVSD ES:EDI,ESI                    ; 005c0140
    MOVSD ES:EDI,ESI                    ; 005c0141
    MOVSD ES:EDI,ESI                    ; 005c0142
    MOVSD ES:EDI,ESI                    ; 005c0143
    PUSH 0x5baee0                       ; 005c0144
    MOV ESI,dword ptr [0x03f6bb10]      ; 005c0149 | undefined4 DAT_03f6bb10
    PUSH ESI                            ; 005c014f
    LEA EAX,[ESP + 0xc0]                ; 005c0150
    PUSH dword ptr [ESP + 0xd8]         ; 005c0157
    PUSH EAX                            ; 005c015e
    MOV EDI,dword ptr [ESP + 0xe8]      ; 005c015f
    PUSH EDI                            ; 005c0166
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c0167 | void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005c016c
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005c016f
    JZ 0x005c0207                       ; 005c0176 | LAB_005c0207
        ;   XREF to: 005c0207 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 005c017c
        ;   Label: LAB_005c017c
    POP EBP                             ; 005c017e
    POP EDI                             ; 005c017f
    POP ESI                             ; 005c0180
    POP EBX                             ; 005c0181
    RET                                 ; 005c0182
    CMP EAX,0x18                        ; 005c0183
        ;   Label: LAB_005c0183
    JZ 0x005bfcf8                       ; 005c0186 | LAB_005bfcf8
        ;   XREF to: 005bfcf8 (CONDITIONAL_JUMP)
    CMP EAX,0x19                        ; 005c018c
    JNZ 0x005c01a0                      ; 005c018f | LAB_005c01a0
        ;   XREF to: 005c01a0 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x14]          ; 005c0191
        ;   Label: LAB_005c0191
    FSUBR double ptr [0x00653914]       ; 005c0195 | double DOUBLE_00653914
    JMP 0x005bfd02                      ; 005c019b | LAB_005bfd02
        ;   XREF to: 005bfd02 (UNCONDITIONAL_JUMP)
    CMP EAX,0x1a                        ; 005c01a0
        ;   Label: LAB_005c01a0
    JZ 0x005c0191                       ; 005c01a3 | LAB_005c0191
        ;   XREF to: 005c0191 (CONDITIONAL_JUMP)
    JMP 0x005bfd0f                      ; 005c01a5 | LAB_005bfd0f
        ;   XREF to: 005bfd0f (UNCONDITIONAL_JUMP)
    FLDZ                                ; 005c01aa
        ;   Label: LAB_005c01aa
    FCOMP float ptr [ESP + 0xec]        ; 005c01ac
    FNSTSW AX                           ; 005c01b3
    SAHF                                ; 005c01b5
    JBE 0x005bfd2b                      ; 005c01b6 | LAB_005bfd2b
        ;   XREF to: 005bfd2b (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 005c01bc
    MOV dword ptr [ESP + 0xec],ECX      ; 005c01be
    JMP 0x005bfd2b                      ; 005c01c5 | LAB_005bfd2b
        ;   XREF to: 005bfd2b (UNCONDITIONAL_JUMP)
    CMP EAX,0x4                         ; 005c01ca
        ;   Label: LAB_005c01ca
    JZ 0x005c00a3                       ; 005c01cd | LAB_005c00a3
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)
    CMP EAX,0x9                         ; 005c01d3
    JZ 0x005c00a3                       ; 005c01d6 | LAB_005c00a3
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)
    CMP EAX,0x6                         ; 005c01dc
    JZ 0x005c00a3                       ; 005c01df | LAB_005c00a3
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)
    CMP EAX,0x7                         ; 005c01e5
    JZ 0x005c00a3                       ; 005c01e8 | LAB_005c00a3
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)
    CMP EAX,0x8                         ; 005c01ee
    JZ 0x005c00a3                       ; 005c01f1 | LAB_005c00a3
        ;   XREF to: 005c00a3 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005c01f7
    JZ 0x005c0207                       ; 005c01fe | LAB_005c0207
        ;   XREF to: 005c0207 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 005c0200
    POP EBP                             ; 005c0202
    POP EDI                             ; 005c0203
    POP ESI                             ; 005c0204
    POP EBX                             ; 005c0205
    RET                                 ; 005c0206
    FLD float ptr [EBX + 0x1fcb0]       ; 005c0207
        ;   Label: LAB_005c0207
    FDIV float ptr [0x00663778]         ; 005c020d | DAT_00663778
    FLD1                                ; 005c0213
    FPATAN                              ; 005c0215
    LEA ESI,[ESP + 0x38]                ; 005c0217
    FSTP float ptr [ESP + 0xd4]         ; 005c021b
    PUSH dword ptr [ESP + 0xd4]         ; 005c0222
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005c0229 | void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c022e
    PUSH 0x59ddb0                       ; 005c0231
    MOV EDX,dword ptr [0x03f6badc]      ; 005c0236 | undefined4 DAT_03f6badc
    PUSH EDX                            ; 005c023c
    LEA EAX,[ESP + 0x70]                ; 005c023d
    PUSH 0x3f800000                     ; 005c0241
    LEA EDI,[ESP + 0x74]                ; 005c0246
    PUSH EAX                            ; 005c024a
    ADD EBX,0x158                       ; 005c024b
    LEA ESI,[ESP + 0x48]                ; 005c0251
    PUSH EBX                            ; 005c0255
    MOVSD ES:EDI,ESI                    ; 005c0256
    MOVSD ES:EDI,ESI                    ; 005c0257
    MOVSD ES:EDI,ESI                    ; 005c0258
    MOVSD ES:EDI,ESI                    ; 005c0259
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c025a | void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005c025f
    LEA ESI,[ESP + 0x58]                ; 005c0262
    FLD float ptr [ESP + 0xd4]          ; 005c0266
    SUB ESP,0x4                         ; 005c026d
    FCHS                                ; 005c0270
    FSTP float ptr [ESP]                ; 005c0272
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 005c0275 | void core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(CQuaternion4f * quat_ptr, float angle_radians)
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005c027a
    PUSH 0x59ddb0                       ; 005c027d
    MOV ECX,dword ptr [0x03f6bad8]      ; 005c0282 | undefined4 DAT_03f6bad8
    PUSH ECX                            ; 005c0288
    LEA EAX,[ESP + 0x70]                ; 005c0289
    PUSH 0x3f800000                     ; 005c028d
    PUSH EAX                            ; 005c0292
    LEA EDI,[ESP + 0x78]                ; 005c0293
    LEA ESI,[ESP + 0x68]                ; 005c0297
    PUSH EBX                            ; 005c029b
    MOVSD ES:EDI,ESI                    ; 005c029c
    MOVSD ES:EDI,ESI                    ; 005c029d
    MOVSD ES:EDI,ESI                    ; 005c029e
    MOVSD ES:EDI,ESI                    ; 005c029f
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 005c02a0 | void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005c02a5
    MOV ESP,EBP                         ; 005c02a8
    POP EBP                             ; 005c02aa
    POP EDI                             ; 005c02ab
    POP ESI                             ; 005c02ac
    POP EBX                             ; 005c02ad
    RET                                 ; 005c02ae

