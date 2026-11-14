; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_004320d0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 at 00433356
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005b85d7
;   TerminatedCString s_CCharacter_applyGesture_005b85ec
;   TerminatedCString s_Bip01_spine1_005b8630
;   undefined4 DAT_005b863e
;   undefined4 DAT_005b8642
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004320d0
        ;   Label: core_charactr.cpp_CCharacter_applyGesture_FUN_004320d0
    PUSH EBP                            ; 004320d1
    SUB ESP,0x10                        ; 004320d2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004320d5
    CMP dword ptr [EBX + 0x2754],0x0    ; 004320d9
    JL 0x004321da                       ; 004320e0
        ;   XREF to: 004321da (CONDITIONAL_JUMP)  ; LAB_004321da
    PUSH EDI                            ; 004320e6
    PUSH ESI                            ; 004320e7
    CMP dword ptr [EBX + 0x2750],-0x1   ; 004320e8
    JL 0x004321e0                       ; 004320ef
        ;   XREF to: 004321e0 (CONDITIONAL_JUMP)  ; LAB_004321e0
    PUSH 0x0                            ; 004320f5
        ;   Label: LAB_004320f5
    PUSH 0x5b8630                       ; 004320f7 | = "Bip01 spine1"
    LEA ESI,[EBX + 0x158]               ; 004320fc
    PUSH ESI                            ; 00432102
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00432103
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00432108
    PUSH EAX                            ; 0043210b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0043210c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00432111
    MOV EDX,dword ptr [EBX + 0x2754]    ; 00432114
    MOV EBP,0x3f59999a                  ; 0043211a
    LEA EDI,[EDX*0x8 + 0x0]             ; 0043211f
    PUSH ESI                            ; 00432126
    MOV dword ptr [EBX + 0x2750],EAX    ; 00432127
    ADD EDI,EDX                         ; 0043212d
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0043212f
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    SHL EDI,0x5                         ; 00432134
    ADD ESP,0x4                         ; 00432137
    ADD EAX,0x1c28                      ; 0043213a
    MOV EDX,dword ptr [EBX + 0x275c]    ; 0043213f
    MOV dword ptr [ESP + 0x14],EBP      ; 00432145
    ADD EAX,EDI                         ; 00432149
    CMP EDX,0x1                         ; 0043214b
    JZ 0x00432209                       ; 0043214e
        ;   XREF to: 00432209 (CONDITIONAL_JUMP)  ; LAB_00432209
    FLD float ptr [EAX + 0x20]          ; 00432154
    FMUL float ptr [0x005b863e]         ; 00432157 | DAT_005b863e
    FLD float ptr [EBX + 0x2758]        ; 0043215d
    FILD dword ptr [EAX + 0x64]         ; 00432163
    FSUB float ptr [EBX + 0x2758]       ; 00432166
    FLD1                                ; 0043216c
    FDIVRP ST3,ST0                      ; 0043216e
    FXCH                                ; 00432170
    FMUL ST2                            ; 00432172
    FXCH                                ; 00432174
    FMULP ST2                           ; 00432176
    FSTP float ptr [ESP + 0x10]         ; 00432178
    FSTP float ptr [ESP + 0xc]          ; 0043217c
    FLD float ptr [ESP + 0x10]          ; 00432180
    FCOMP float ptr [0x005b8642]        ; 00432184 | DAT_005b8642
    FNSTSW AX                           ; 0043218a
    SAHF                                ; 0043218c
    JNC 0x00432197                      ; 0043218d
        ;   XREF to: 00432197 (CONDITIONAL_JUMP)  ; LAB_00432197
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043218f
    MOV dword ptr [ESP + 0x14],EAX      ; 00432193
    FLD float ptr [ESP + 0xc]           ; 00432197
        ;   Label: LAB_00432197
    FCOMP float ptr [ESP + 0x14]        ; 0043219b
    FNSTSW AX                           ; 0043219f
    SAHF                                ; 004321a1
    JNC 0x004321ac                      ; 004321a2
        ;   XREF to: 004321ac (CONDITIONAL_JUMP)  ; LAB_004321ac
    MOV EAX,dword ptr [ESP + 0xc]       ; 004321a4
    MOV dword ptr [ESP + 0x14],EAX      ; 004321a8
    PUSH 0x54bef0                       ; 004321ac
        ;   Label: LAB_004321ac
    MOV ESI,dword ptr [EBX + 0x2750]    ; 004321b1
    PUSH ESI                            ; 004321b7
    PUSH dword ptr [ESP + 0x1c]         ; 004321b8
    MOV EDI,dword ptr [EBX + 0x2754]    ; 004321bc
    PUSH dword ptr [EBX + 0x2758]       ; 004321c2
    PUSH EDI                            ; 004321c8
    ADD EBX,0x158                       ; 004321c9
    PUSH EBX                            ; 004321cf
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 ; 004321d0
        ;   XREF to: 0054cc90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 004321d5
    POP ESI                             ; 004321d8
    POP EDI                             ; 004321d9
    ADD ESP,0x10                        ; 004321da
        ;   Label: LAB_004321da
    POP EBP                             ; 004321dd
    POP EBX                             ; 004321de
    RET                                 ; 004321df
    PUSH EBX                            ; 004321e0
        ;   Label: LAB_004321e0
    MOV ESI,0x5b85d7                    ; 004321e1 | = "..\\core\\charactr.cpp"
    MOV EDI,0xff7                       ; 004321e6
    PUSH 0x5b85ec                       ; 004321eb | = "CCharacter::applyGesture - never set ..."
    MOV dword ptr [0x01d71de0],ESI      ; 004321f0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004321f6 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004321fc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00432201
    JMP 0x004320f5                      ; 00432204
        ;   XREF to: 004320f5 (UNCONDITIONAL_JUMP)  ; LAB_004320f5
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 00432209
        ;   Label: LAB_00432209
    JMP 0x004321ac                      ; 00432211
        ;   XREF to: 004321ac (UNCONDITIONAL_JUMP)  ; LAB_004321ac

