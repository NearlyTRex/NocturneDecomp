; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_004fbf20 at 004fc262
;
; Referenced Globals:
;   double DOUBLE_0058df46 = 0.000100000000000000
;   undefined4 DAT_01e533c8
;
; Called Functions:
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   core_scat.cpp_CScat_FUN_004fd1d0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcff0
        ;   Label: core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0
    PUSH ESI                            ; 004fcff1
    PUSH EDI                            ; 004fcff2
    PUSH EBP                            ; 004fcff3
    MOV EBP,ESP                         ; 004fcff4
    SUB ESP,0x20                        ; 004fcff6
    AND ESP,0xfffffff8                  ; 004fcff9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fcffc
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 004fcfff
    SHL EAX,0x3                         ; 004fd005
    MOV ESI,EAX                         ; 004fd008
    SHL EAX,0x3                         ; 004fd00a
    SUB EAX,ESI                         ; 004fd00d
    MOV EDX,0x3f800000                  ; 004fd00f
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x2624] ; 004fd014
    MOV dword ptr [ESP + 0x8],EDX       ; 004fd01b
    TEST ECX,ECX                        ; 004fd01f
    JZ 0x004fd1a5                       ; 004fd021
        ;   XREF to: 004fd1a5 (CONDITIONAL_JUMP)  ; LAB_004fd1a5
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 004fd027
        ;   Label: LAB_004fd027
    SHL EAX,0x3                         ; 004fd02d
    MOV ESI,EAX                         ; 004fd030
    SHL EAX,0x3                         ; 004fd032
    SUB EAX,ESI                         ; 004fd035
    CMP dword ptr [EBX + EAX*0x1 + 0x2628],0x0 ; 004fd037
    JNZ 0x004fd053                      ; 004fd03f
        ;   XREF to: 004fd053 (CONDITIONAL_JUMP)  ; LAB_004fd053
    FLD float ptr [EBX + 0x2a88]        ; 004fd041
    FLD1                                ; 004fd047
    FSUBRP                              ; 004fd049
    FMUL float ptr [ESP + 0x8]          ; 004fd04b
    FSTP float ptr [ESP + 0x8]          ; 004fd04f
    PUSH 0x4                            ; 004fd053
        ;   Label: LAB_004fd053
    LEA ESI,[EBX + 0x150]               ; 004fd055
    PUSH ESI                            ; 004fd05b
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004fd05c
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x20],EAX      ; 004fd061
    ADD ESP,0x8                         ; 004fd065
    PUSH 0x5                            ; 004fd068
    PUSH ESI                            ; 004fd06a
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004fd06b
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 004fd070
    FLD float ptr [ESP + 0x24]          ; 004fd074
    ADD ESP,0x8                         ; 004fd078
    PUSH 0xc                            ; 004fd07b
    FADD float ptr [ESP + 0x1c]         ; 004fd07d
    PUSH ESI                            ; 004fd081
    FSTP float ptr [ESP + 0x20]         ; 004fd082
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004fd086
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 004fd08b
    FLD float ptr [ESP + 0x24]          ; 004fd08f
    ADD ESP,0x8                         ; 004fd093
    PUSH 0xd                            ; 004fd096
    FADD float ptr [ESP + 0x1c]         ; 004fd098
    PUSH ESI                            ; 004fd09c
    FSTP float ptr [ESP + 0x20]         ; 004fd09d
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004fd0a1
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 004fd0a6
    FLD float ptr [ESP + 0x24]          ; 004fd0aa
    ADD ESP,0x8                         ; 004fd0ae
    PUSH 0xe                            ; 004fd0b1
    FADD float ptr [ESP + 0x1c]         ; 004fd0b3
    PUSH ESI                            ; 004fd0b7
    FSTP float ptr [ESP + 0x20]         ; 004fd0b8
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004fd0bc
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 004fd0c1
    FLD float ptr [ESP + 0x24]          ; 004fd0c5
    ADD ESP,0x8                         ; 004fd0c9
    FADD float ptr [ESP + 0x18]         ; 004fd0cc
    FLD1                                ; 004fd0d0
    FSUBRP                              ; 004fd0d2
    FLD float ptr [ESP + 0x8]           ; 004fd0d4
    FXCH                                ; 004fd0d8
    FMUL ST1                            ; 004fd0da
    FLDZ                                ; 004fd0dc
    FXCH                                ; 004fd0de
    FSTP ST2                            ; 004fd0e0
    FXCH                                ; 004fd0e2
    FSTP float ptr [ESP + 0x8]          ; 004fd0e4
    FCOMP float ptr [ESP + 0x8]         ; 004fd0e8
    FNSTSW AX                           ; 004fd0ec
    SAHF                                ; 004fd0ee
    JBE 0x004fd0f7                      ; 004fd0ef
        ;   XREF to: 004fd0f7 (CONDITIONAL_JUMP)  ; LAB_004fd0f7
    XOR EDI,EDI                         ; 004fd0f1
    MOV dword ptr [ESP + 0x8],EDI       ; 004fd0f3
    FLD float ptr [ESP + 0x8]           ; 004fd0f7
        ;   Label: LAB_004fd0f7
    FST double ptr [ESP]                ; 004fd0fb
    FCOMP double ptr [0x0058df46]       ; 004fd0fe | DOUBLE_0058df46
    FNSTSW AX                           ; 004fd104
    SAHF                                ; 004fd106
    JBE 0x004fd19e                      ; 004fd107
        ;   XREF to: 004fd19e (CONDITIONAL_JUMP)  ; LAB_004fd19e
    FLD1                                ; 004fd10d
    FCOMP double ptr [ESP]              ; 004fd10f
    FNSTSW AX                           ; 004fd112
    SAHF                                ; 004fd114
    JNC 0x004fd11f                      ; 004fd115
        ;   XREF to: 004fd11f (CONDITIONAL_JUMP)  ; LAB_004fd11f
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004fd117
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 004fd11f
        ;   Label: LAB_004fd11f
    SHL EAX,0x3                         ; 004fd125
    MOV ESI,EAX                         ; 004fd128
    SHL EAX,0x3                         ; 004fd12a
    SUB EAX,ESI                         ; 004fd12d
    MOV ESI,EAX                         ; 004fd12f
    LEA EAX,[EBX + 0x2624]              ; 004fd131
    ADD EAX,ESI                         ; 004fd137
    PUSH 0x1                            ; 004fd139
    ADD EAX,0x8                         ; 004fd13b
    PUSH EAX                            ; 004fd13e
    LEA ESI,[EBX + 0x150]               ; 004fd13f
    PUSH ESI                            ; 004fd145
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004fd146
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fd14b
    PUSH EAX                            ; 004fd14e
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 004fd14f
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004fd154
    PUSH dword ptr [EBX + 0x2a88]       ; 004fd157
    PUSH EAX                            ; 004fd15d
    PUSH ESI                            ; 004fd15e
    MOV EDI,EAX                         ; 004fd15f
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50 ; 004fd161
        ;   XREF to: 004e1f50 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV dword ptr [ESP + 0x28],EAX      ; 004fd166
    FLD float ptr [ESP + 0x28]          ; 004fd16a
    ADD ESP,0xc                         ; 004fd16e
    PUSH 0x51b650                       ; 004fd171
    MOV EDX,dword ptr [0x01e533c8]      ; 004fd176 | DAT_01e533c8
    PUSH EDX                            ; 004fd17c
    PUSH dword ptr [ESP + 0x10]         ; 004fd17d
    FSTP float ptr [ESP + 0x20]         ; 004fd181
    PUSH dword ptr [ESP + 0x20]         ; 004fd185
    PUSH EDI                            ; 004fd189
    PUSH ESI                            ; 004fd18a
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 004fd18b
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    MOV ECX,dword ptr [EBX + 0x2a84]    ; 004fd190
    ADD ESP,0x18                        ; 004fd196
    CMP ECX,0x1                         ; 004fd199
    JZ 0x004fd1b4                       ; 004fd19c
        ;   XREF to: 004fd1b4 (CONDITIONAL_JUMP)  ; LAB_004fd1b4
    MOV ESP,EBP                         ; 004fd19e
        ;   Label: LAB_004fd19e
    POP EBP                             ; 004fd1a0
    POP EDI                             ; 004fd1a1
    POP ESI                             ; 004fd1a2
    POP EBX                             ; 004fd1a3
    RET                                 ; 004fd1a4
    MOV EAX,dword ptr [EBX + 0x2a88]    ; 004fd1a5
        ;   Label: LAB_004fd1a5
    MOV dword ptr [ESP + 0x8],EAX       ; 004fd1ab
    JMP 0x004fd027                      ; 004fd1af
        ;   XREF to: 004fd027 (UNCONDITIONAL_JUMP)  ; LAB_004fd027
    PUSH ECX                            ; 004fd1b4
        ;   Label: LAB_004fd1b4
    PUSH EBX                            ; 004fd1b5
    CALL core_scat.cpp_CScat_FUN_004fd1d0 ; 004fd1b6
        ;   XREF to: 004fd1d0 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_FUN_004fd1d0(CScat * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 004fd1bb
    MOV ESP,EBP                         ; 004fd1be
    POP EBP                             ; 004fd1c0
    POP EDI                             ; 004fd1c1
    POP ESI                             ; 004fd1c2
    POP EBX                             ; 004fd1c3
    RET                                 ; 004fd1c4

