; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_updateWeaponState_FUN_00558060(CScat *this_ptr,float delta_time)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_005571f0 at 00557435
;
; Referenced Globals:
;   void* switchdataD_00558038 = 00558106
;
; Called Functions:
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558060
        ;   Label: core_scat.cpp_CScat_updateWeaponState_FUN_00558060
    PUSH ESI                            ; 00558061
    PUSH EDI                            ; 00558062
    PUSH EBP                            ; 00558063
    MOV EBP,ESP                         ; 00558064
    SUB ESP,0x10                        ; 00558066
    AND ESP,0xfffffff8                  ; 00558069
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055806c
    LEA ESI,[EBX + 0x158]               ; 0055806f
    PUSH ESI                            ; 00558075
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00558076
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0055807b
    ADD ESP,0x4                         ; 0055807e
    CMP EAX,0xc                         ; 00558081
    JNZ 0x0055808d                      ; 00558084
        ;   XREF to: 0055808d (CONDITIONAL_JUMP)  ; LAB_0055808d
    MOV ESP,EBP                         ; 00558086
        ;   Label: LAB_00558086
    POP EBP                             ; 00558088
    POP EDI                             ; 00558089
    POP ESI                             ; 0055808a
    POP EBX                             ; 0055808b
    RET                                 ; 0055808c
    PUSH ESI                            ; 0055808d
        ;   Label: LAB_0055808d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0055808e
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00558093
    ADD ESP,0x4                         ; 00558096
    CMP EAX,0xd                         ; 00558099
    JZ 0x00558086                       ; 0055809c
        ;   XREF to: 00558086 (CONDITIONAL_JUMP)  ; LAB_00558086
    LEA EAX,[EBX + 0x1f738]             ; 0055809e
    MOV EDX,dword ptr [EBX + 0x1fbd4]   ; 005580a4
    MOV ESI,dword ptr [EAX + 0x330]     ; 005580aa
    TEST EDX,EDX                        ; 005580b0
    JZ 0x005581f4                       ; 005580b2
        ;   XREF to: 005581f4 (CONDITIONAL_JUMP)  ; LAB_005581f4
    MOV ECX,dword ptr [EBX + 0x1fbe8]   ; 005580b8
        ;   Label: LAB_005580b8
    TEST ECX,ECX                        ; 005580be
    JNZ 0x005581fb                      ; 005580c0
        ;   XREF to: 005581fb (CONDITIONAL_JUMP)  ; LAB_005581fb
    XOR ECX,ECX                         ; 005580c6
        ;   Label: LAB_005580c6
    LEA EAX,[EBX + 0x158]               ; 005580c8
    MOV dword ptr [ESP + 0xc],ECX       ; 005580ce
    MOV dword ptr [ESP + 0x4],EAX       ; 005580d2
    FLD float ptr [EBP + 0x18]          ; 005580d6
        ;   Label: LAB_005580d6
    FLDZ                                ; 005580d9
    FCOMPP                              ; 005580db
    FNSTSW AX                           ; 005580dd
    SAHF                                ; 005580df
    JNC 0x00558086                      ; 005580e0
        ;   XREF to: 00558086 (CONDITIONAL_JUMP)  ; LAB_00558086
    MOV EDI,dword ptr [EBX + 0x1fbe8]   ; 005580e2
    CMP ESI,EDI                         ; 005580e8
    JNZ 0x0055824a                      ; 005580ea
        ;   XREF to: 0055824a (CONDITIONAL_JUMP)  ; LAB_0055824a
    TEST EDI,EDI                        ; 005580f0
    JZ 0x0055810b                       ; 005580f2
        ;   XREF to: 0055810b (CONDITIONAL_JUMP)  ; LAB_0055810b
    MOV EAX,dword ptr [EDI + 0x2e0]     ; 005580f4
    CMP EAX,0x8                         ; 005580fa
    JA 0x00558106                       ; 005580fd
        ;   XREF to: 00558106 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EAX*0x4 + 0x558038]  ; 005580ff | caseD_7 | caseD_8 | switchdataD_00558038
        ;   Label: switchD
    MOV EDI,0x2                         ; 00558106
        ;   Label: caseD_0
    PUSH EDI                            ; 0055810b
        ;   Label: LAB_0055810b
    LEA EAX,[EBP + 0x18]                ; 0055810c
    PUSH EAX                            ; 0055810f
    PUSH EBX                            ; 00558110
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370 ; 00558111
        ;   XREF to: 0042e370 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 00558116
    ADD ESP,0xc                         ; 0055811a
    MOV dword ptr [ESP + 0x8],EAX       ; 0055811d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00558121
    PUSH EAX                            ; 00558125
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 00558126
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0055812b
    CMP dword ptr [ESP],0x0             ; 0055812e
    JL 0x005581db                       ; 00558132
        ;   XREF to: 005581db (CONDITIONAL_JUMP)  ; LAB_005581db
    MOV ECX,dword ptr [EBX + 0x1fbe8]   ; 00558138
    CMP ESI,ECX                         ; 0055813e
    JZ 0x005581d1                       ; 00558140
        ;   XREF to: 005581d1 (CONDITIONAL_JUMP)  ; LAB_005581d1
    TEST ECX,ECX                        ; 00558146
    JZ 0x0055817a                       ; 00558148
        ;   XREF to: 0055817a (CONDITIONAL_JUMP)  ; LAB_0055817a
    MOV EAX,ECX                         ; 0055814a
    JNZ 0x00558285                      ; 0055814c
        ;   XREF to: 00558285 (CONDITIONAL_JUMP)  ; LAB_00558285
    CMP EAX,dword ptr [ESP + 0x8]       ; 00558152
        ;   Label: LAB_00558152
    JNZ 0x0055817a                      ; 00558156
        ;   XREF to: 0055817a (CONDITIONAL_JUMP)  ; LAB_0055817a
    PUSH 0x1                            ; 00558158
    MOV EAX,dword ptr [EBX + 0x1fbe8]   ; 0055815a
    PUSH EAX                            ; 00558160
    MOV EDX,dword ptr [EAX + 0x154]     ; 00558161
    CALL dword ptr [EDX + 0xf0]         ; 00558167
    ADD ESP,0x8                         ; 0055816d
    MOV dword ptr [EBX + 0x1fbe8],0x0   ; 00558170
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 0055817a
        ;   Label: LAB_0055817a
    JZ 0x005581d1                       ; 00558181
        ;   XREF to: 005581d1 (CONDITIONAL_JUMP)  ; LAB_005581d1
    TEST ESI,ESI                        ; 00558183
    JNZ 0x0055829f                      ; 00558185
        ;   XREF to: 0055829f (CONDITIONAL_JUMP)  ; LAB_0055829f
    XOR EAX,EAX                         ; 0055818b
        ;   Label: LAB_0055818b
    CMP EAX,dword ptr [ESP + 0x8]       ; 0055818d
        ;   Label: LAB_0055818d
    JNZ 0x005581d1                      ; 00558191
        ;   XREF to: 005581d1 (CONDITIONAL_JUMP)  ; LAB_005581d1
    MOV dword ptr [EBX + 0x1fbe8],ESI   ; 00558193
    TEST ESI,ESI                        ; 00558199
    JZ 0x005581d1                       ; 0055819b
        ;   XREF to: 005581d1 (CONDITIONAL_JUMP)  ; LAB_005581d1
    PUSH 0x2                            ; 0055819d
    MOV EDX,dword ptr [ESI + 0x154]     ; 0055819f
    PUSH ESI                            ; 005581a5
    CALL dword ptr [EDX + 0xf0]         ; 005581a6
    MOV EAX,dword ptr [EBX + 0x1fbe8]   ; 005581ac
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 005581b2
    ADD ESP,0x8                         ; 005581b8
    CMP EDX,0x8                         ; 005581bb
    JNZ 0x005581d1                      ; 005581be
        ;   XREF to: 005581d1 (CONDITIONAL_JUMP)  ; LAB_005581d1
    PUSH 0x1                            ; 005581c0
    PUSH 0x6                            ; 005581c2
    MOV ECX,dword ptr [ESP + 0xc]       ; 005581c4
    PUSH ECX                            ; 005581c8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005581c9
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005581ce
    PUSH EDI                            ; 005581d1
        ;   Label: LAB_005581d1
    PUSH EBX                            ; 005581d2
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0 ; 005581d3
        ;   XREF to: 0042e8c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 005581d8
    MOV EDI,dword ptr [ESP + 0xc]       ; 005581db
        ;   Label: LAB_005581db
    INC EDI                             ; 005581df
    MOV dword ptr [ESP + 0xc],EDI       ; 005581e0
    CMP EDI,0x2                         ; 005581e4
    JL 0x005580d6                       ; 005581e7
        ;   XREF to: 005580d6 (CONDITIONAL_JUMP)  ; LAB_005580d6
    MOV ESP,EBP                         ; 005581ed
    POP EBP                             ; 005581ef
    POP EDI                             ; 005581f0
    POP ESI                             ; 005581f1
    POP EBX                             ; 005581f2
    RET                                 ; 005581f3
    XOR ESI,ESI                         ; 005581f4
        ;   Label: LAB_005581f4
    JMP 0x005580b8                      ; 005581f6
        ;   XREF to: 005580b8 (UNCONDITIONAL_JUMP)  ; LAB_005580b8
    CMP ESI,ECX                         ; 005581fb
        ;   Label: LAB_005581fb
    JZ 0x005580c6                       ; 005581fd
        ;   XREF to: 005580c6 (CONDITIONAL_JUMP)  ; LAB_005580c6
    CMP dword ptr [ECX + 0x2e0],0x8     ; 00558203
    JNZ 0x005580c6                      ; 0055820a
        ;   XREF to: 005580c6 (CONDITIONAL_JUMP)  ; LAB_005580c6
    LEA EDI,[EBX + 0x158]               ; 00558210
    PUSH EDI                            ; 00558216
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00558217
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0055821c
    ADD ESP,0x4                         ; 0055821f
    TEST EAX,EAX                        ; 00558222
    JNZ 0x00558231                      ; 00558224
        ;   XREF to: 00558231 (CONDITIONAL_JUMP)  ; LAB_00558231
    MOV dword ptr [EBX + 0x1fbe8],EAX   ; 00558226
    JMP 0x005580c6                      ; 0055822c
        ;   XREF to: 005580c6 (UNCONDITIONAL_JUMP)  ; LAB_005580c6
    PUSH 0x1                            ; 00558231
        ;   Label: LAB_00558231
    PUSH 0x0                            ; 00558233
    PUSH EDI                            ; 00558235
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00558236
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0055823b
    JMP 0x005580c6                      ; 0055823e
        ;   XREF to: 005580c6 (UNCONDITIONAL_JUMP)  ; LAB_005580c6
    XOR EDI,EDI                         ; 00558243
        ;   Label: caseD_8
    JMP 0x0055810b                      ; 00558245
        ;   XREF to: 0055810b (UNCONDITIONAL_JUMP)  ; LAB_0055810b
    TEST EDI,EDI                        ; 0055824a
        ;   Label: LAB_0055824a
    JNZ 0x0055826d                      ; 0055824c
        ;   XREF to: 0055826d (CONDITIONAL_JUMP)  ; LAB_0055826d
    TEST ESI,ESI                        ; 0055824e
    JZ 0x0055810b                       ; 00558250
        ;   XREF to: 0055810b (CONDITIONAL_JUMP)  ; LAB_0055810b
    CMP dword ptr [ESI + 0x2e0],0x8     ; 00558256
    JZ 0x0055810b                       ; 0055825d
        ;   XREF to: 0055810b (CONDITIONAL_JUMP)  ; LAB_0055810b
    MOV EDI,0x1                         ; 00558263
        ;   Label: LAB_00558263
    JMP 0x0055810b                      ; 00558268
        ;   XREF to: 0055810b (UNCONDITIONAL_JUMP)  ; LAB_0055810b
    MOV EAX,EDI                         ; 0055826d
        ;   Label: LAB_0055826d
    JZ 0x0055810b                       ; 0055826f
        ;   XREF to: 0055810b (CONDITIONAL_JUMP)  ; LAB_0055810b
    CMP dword ptr [EDI + 0x2e0],0x8     ; 00558275
    JNZ 0x00558263                      ; 0055827c
        ;   XREF to: 00558263 (CONDITIONAL_JUMP)  ; LAB_00558263
    XOR EDI,EDI                         ; 0055827e
    JMP 0x0055810b                      ; 00558280
        ;   XREF to: 0055810b (UNCONDITIONAL_JUMP)  ; LAB_0055810b
    CMP dword ptr [ECX + 0x2e0],0x8     ; 00558285
        ;   Label: LAB_00558285
    JNZ 0x00558295                      ; 0055828c
        ;   XREF to: 00558295 (CONDITIONAL_JUMP)  ; LAB_00558295
    XOR EAX,ECX                         ; 0055828e
    JMP 0x00558152                      ; 00558290
        ;   XREF to: 00558152 (UNCONDITIONAL_JUMP)  ; LAB_00558152
    MOV EAX,0x1                         ; 00558295
        ;   Label: LAB_00558295
    JMP 0x00558152                      ; 0055829a
        ;   XREF to: 00558152 (UNCONDITIONAL_JUMP)  ; LAB_00558152
    CMP dword ptr [ESI + 0x2e0],0x8     ; 0055829f
        ;   Label: LAB_0055829f
    JZ 0x0055818b                       ; 005582a6
        ;   XREF to: 0055818b (CONDITIONAL_JUMP)  ; LAB_0055818b
    MOV EAX,0x1                         ; 005582ac
    JMP 0x0055818d                      ; 005582b1
        ;   XREF to: 0055818d (UNCONDITIONAL_JUMP)  ; LAB_0055818d

