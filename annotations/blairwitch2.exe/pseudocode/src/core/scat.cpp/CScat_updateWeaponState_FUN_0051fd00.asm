; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_updateWeaponState_FUN_0051fd00(CScat *this_ptr,float delta_time)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_0051ecc0 at 0051ef97
;
; Referenced Globals:
;   void* switchdataD_0051fcd8 = 0051fdac
;
; Called Functions:
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051fd00
        ;   Label: core_scat.cpp_CScat_updateWeaponState_FUN_0051fd00
    PUSH ESI                            ; 0051fd01
    PUSH EDI                            ; 0051fd02
    PUSH EBP                            ; 0051fd03
    MOV EBP,ESP                         ; 0051fd04
    SUB ESP,0x10                        ; 0051fd06
    AND ESP,0xfffffff8                  ; 0051fd09
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051fd0c
    LEA ESI,[EBX + 0x2b4]               ; 0051fd0f
    PUSH ESI                            ; 0051fd15
    CALL core_motion.cpp_FUN_005035c0   ; 0051fd16
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051fd1b
    ADD ESP,0x4                         ; 0051fd1e
    CMP EAX,0xc                         ; 0051fd21
    JNZ 0x0051fd2d                      ; 0051fd24
        ;   XREF to: 0051fd2d (CONDITIONAL_JUMP)  ; LAB_0051fd2d
    MOV ESP,EBP                         ; 0051fd26
        ;   Label: LAB_0051fd26
    POP EBP                             ; 0051fd28
    POP EDI                             ; 0051fd29
    POP ESI                             ; 0051fd2a
    POP EBX                             ; 0051fd2b
    RET                                 ; 0051fd2c
    PUSH ESI                            ; 0051fd2d
        ;   Label: LAB_0051fd2d
    CALL core_motion.cpp_FUN_005035c0   ; 0051fd2e
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051fd33
    ADD ESP,0x4                         ; 0051fd36
    CMP EAX,0xd                         ; 0051fd39
    JZ 0x0051fd26                       ; 0051fd3c
        ;   XREF to: 0051fd26 (CONDITIONAL_JUMP)  ; LAB_0051fd26
    LEA EAX,[EBX + 0x2437c]             ; 0051fd3e
    MOV EDX,dword ptr [EAX + 0x468]     ; 0051fd44
    MOV ESI,dword ptr [EAX + EDX*0x4 + 0x610] ; 0051fd4a
    CMP dword ptr [EBX + 0x25640],0x0   ; 0051fd51
    JZ 0x0051fe9a                       ; 0051fd58
        ;   XREF to: 0051fe9a (CONDITIONAL_JUMP)  ; LAB_0051fe9a
    MOV ECX,dword ptr [EBX + 0x25654]   ; 0051fd5e
        ;   Label: LAB_0051fd5e
    TEST ECX,ECX                        ; 0051fd64
    JNZ 0x0051fea1                      ; 0051fd66
        ;   XREF to: 0051fea1 (CONDITIONAL_JUMP)  ; LAB_0051fea1
    XOR ECX,ECX                         ; 0051fd6c
        ;   Label: LAB_0051fd6c
    LEA EAX,[EBX + 0x2b4]               ; 0051fd6e
    MOV dword ptr [ESP + 0xc],ECX       ; 0051fd74
    MOV dword ptr [ESP + 0x4],EAX       ; 0051fd78
    FLD float ptr [EBP + 0x18]          ; 0051fd7c
        ;   Label: LAB_0051fd7c
    FLDZ                                ; 0051fd7f
    FCOMPP                              ; 0051fd81
    FNSTSW AX                           ; 0051fd83
    SAHF                                ; 0051fd85
    JNC 0x0051fd26                      ; 0051fd86
        ;   XREF to: 0051fd26 (CONDITIONAL_JUMP)  ; LAB_0051fd26
    MOV EDI,dword ptr [EBX + 0x25654]   ; 0051fd88
    CMP ESI,EDI                         ; 0051fd8e
    JNZ 0x0051fef0                      ; 0051fd90
        ;   XREF to: 0051fef0 (CONDITIONAL_JUMP)  ; LAB_0051fef0
    TEST EDI,EDI                        ; 0051fd96
    JZ 0x0051fdb1                       ; 0051fd98
        ;   XREF to: 0051fdb1 (CONDITIONAL_JUMP)  ; LAB_0051fdb1
    MOV EAX,dword ptr [EDI + 0x43c]     ; 0051fd9a
    CMP EAX,0x9                         ; 0051fda0
    JA 0x0051fdac                       ; 0051fda3
        ;   XREF to: 0051fdac (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x51fcd8]  ; 0051fda5 | caseD_8 | caseD_9 | switchdataD_0051fcd8
        ;   Label: switchD
    MOV EDI,0x2                         ; 0051fdac
        ;   Label: caseD_0
    PUSH EDI                            ; 0051fdb1
        ;   Label: LAB_0051fdb1
    LEA EAX,[EBP + 0x18]                ; 0051fdb2
    PUSH EAX                            ; 0051fdb5
    PUSH EBX                            ; 0051fdb6
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0 ; 0051fdb7
        ;   XREF to: 0042a0c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 0051fdbc
    ADD ESP,0xc                         ; 0051fdc0
    MOV dword ptr [ESP + 0x8],EAX       ; 0051fdc3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051fdc7
    PUSH EAX                            ; 0051fdcb
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 0051fdcc
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0051fdd1
    CMP dword ptr [ESP],0x0             ; 0051fdd4
    JL 0x0051fe81                       ; 0051fdd8
        ;   XREF to: 0051fe81 (CONDITIONAL_JUMP)  ; LAB_0051fe81
    MOV ECX,dword ptr [EBX + 0x25654]   ; 0051fdde
    CMP ESI,ECX                         ; 0051fde4
    JZ 0x0051fe77                       ; 0051fde6
        ;   XREF to: 0051fe77 (CONDITIONAL_JUMP)  ; LAB_0051fe77
    TEST ECX,ECX                        ; 0051fdec
    JZ 0x0051fe20                       ; 0051fdee
        ;   XREF to: 0051fe20 (CONDITIONAL_JUMP)  ; LAB_0051fe20
    MOV EAX,ECX                         ; 0051fdf0
    JNZ 0x0051ff2b                      ; 0051fdf2
        ;   XREF to: 0051ff2b (CONDITIONAL_JUMP)  ; LAB_0051ff2b
    CMP EAX,dword ptr [ESP + 0x8]       ; 0051fdf8
        ;   Label: LAB_0051fdf8
    JNZ 0x0051fe20                      ; 0051fdfc
        ;   XREF to: 0051fe20 (CONDITIONAL_JUMP)  ; LAB_0051fe20
    PUSH 0x1                            ; 0051fdfe
    MOV EAX,dword ptr [EBX + 0x25654]   ; 0051fe00
    PUSH EAX                            ; 0051fe06
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0051fe07
    CALL dword ptr [EDX + 0xe4]         ; 0051fe0d
    ADD ESP,0x8                         ; 0051fe13
    MOV dword ptr [EBX + 0x25654],0x0   ; 0051fe16
    CMP dword ptr [EBX + 0x25640],0x0   ; 0051fe20
        ;   Label: LAB_0051fe20
    JZ 0x0051fe77                       ; 0051fe27
        ;   XREF to: 0051fe77 (CONDITIONAL_JUMP)  ; LAB_0051fe77
    TEST ESI,ESI                        ; 0051fe29
    JNZ 0x0051ff45                      ; 0051fe2b
        ;   XREF to: 0051ff45 (CONDITIONAL_JUMP)  ; LAB_0051ff45
    XOR EAX,EAX                         ; 0051fe31
        ;   Label: LAB_0051fe31
    CMP EAX,dword ptr [ESP + 0x8]       ; 0051fe33
        ;   Label: LAB_0051fe33
    JNZ 0x0051fe77                      ; 0051fe37
        ;   XREF to: 0051fe77 (CONDITIONAL_JUMP)  ; LAB_0051fe77
    MOV dword ptr [EBX + 0x25654],ESI   ; 0051fe39
    TEST ESI,ESI                        ; 0051fe3f
    JZ 0x0051fe77                       ; 0051fe41
        ;   XREF to: 0051fe77 (CONDITIONAL_JUMP)  ; LAB_0051fe77
    PUSH 0x2                            ; 0051fe43
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 0051fe45
    PUSH ESI                            ; 0051fe4b
    CALL dword ptr [EDX + 0xe4]         ; 0051fe4c
    MOV EAX,dword ptr [EBX + 0x25654]   ; 0051fe52
    MOV EDX,dword ptr [EAX + 0x43c]     ; 0051fe58
    ADD ESP,0x8                         ; 0051fe5e
    CMP EDX,0x9                         ; 0051fe61
    JNZ 0x0051fe77                      ; 0051fe64
        ;   XREF to: 0051fe77 (CONDITIONAL_JUMP)  ; LAB_0051fe77
    PUSH 0x1                            ; 0051fe66
    PUSH 0x6                            ; 0051fe68
    MOV ECX,dword ptr [ESP + 0xc]       ; 0051fe6a
    PUSH ECX                            ; 0051fe6e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0051fe6f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051fe74
    PUSH EDI                            ; 0051fe77
        ;   Label: LAB_0051fe77
    PUSH EBX                            ; 0051fe78
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620 ; 0051fe79
        ;   XREF to: 0042a620 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 0051fe7e
    MOV EDI,dword ptr [ESP + 0xc]       ; 0051fe81
        ;   Label: LAB_0051fe81
    INC EDI                             ; 0051fe85
    MOV dword ptr [ESP + 0xc],EDI       ; 0051fe86
    CMP EDI,0x2                         ; 0051fe8a
    JL 0x0051fd7c                       ; 0051fe8d
        ;   XREF to: 0051fd7c (CONDITIONAL_JUMP)  ; LAB_0051fd7c
    MOV ESP,EBP                         ; 0051fe93
    POP EBP                             ; 0051fe95
    POP EDI                             ; 0051fe96
    POP ESI                             ; 0051fe97
    POP EBX                             ; 0051fe98
    RET                                 ; 0051fe99
    XOR ESI,ESI                         ; 0051fe9a
        ;   Label: LAB_0051fe9a
    JMP 0x0051fd5e                      ; 0051fe9c
        ;   XREF to: 0051fd5e (UNCONDITIONAL_JUMP)  ; LAB_0051fd5e
    CMP ESI,ECX                         ; 0051fea1
        ;   Label: LAB_0051fea1
    JZ 0x0051fd6c                       ; 0051fea3
        ;   XREF to: 0051fd6c (CONDITIONAL_JUMP)  ; LAB_0051fd6c
    CMP dword ptr [ECX + 0x43c],0x9     ; 0051fea9
    JNZ 0x0051fd6c                      ; 0051feb0
        ;   XREF to: 0051fd6c (CONDITIONAL_JUMP)  ; LAB_0051fd6c
    LEA EDI,[EBX + 0x2b4]               ; 0051feb6
    PUSH EDI                            ; 0051febc
    CALL core_motion.cpp_FUN_005035c0   ; 0051febd
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051fec2
    ADD ESP,0x4                         ; 0051fec5
    TEST EAX,EAX                        ; 0051fec8
    JNZ 0x0051fed7                      ; 0051feca
        ;   XREF to: 0051fed7 (CONDITIONAL_JUMP)  ; LAB_0051fed7
    MOV dword ptr [EBX + 0x25654],EAX   ; 0051fecc
    JMP 0x0051fd6c                      ; 0051fed2
        ;   XREF to: 0051fd6c (UNCONDITIONAL_JUMP)  ; LAB_0051fd6c
    PUSH 0x1                            ; 0051fed7
        ;   Label: LAB_0051fed7
    PUSH 0x0                            ; 0051fed9
    PUSH EDI                            ; 0051fedb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0051fedc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051fee1
    JMP 0x0051fd6c                      ; 0051fee4
        ;   XREF to: 0051fd6c (UNCONDITIONAL_JUMP)  ; LAB_0051fd6c
    XOR EDI,EDI                         ; 0051fee9
        ;   Label: caseD_9
    JMP 0x0051fdb1                      ; 0051feeb
        ;   XREF to: 0051fdb1 (UNCONDITIONAL_JUMP)  ; LAB_0051fdb1
    TEST EDI,EDI                        ; 0051fef0
        ;   Label: LAB_0051fef0
    JNZ 0x0051ff13                      ; 0051fef2
        ;   XREF to: 0051ff13 (CONDITIONAL_JUMP)  ; LAB_0051ff13
    TEST ESI,ESI                        ; 0051fef4
    JZ 0x0051fdb1                       ; 0051fef6
        ;   XREF to: 0051fdb1 (CONDITIONAL_JUMP)  ; LAB_0051fdb1
    CMP dword ptr [ESI + 0x43c],0x9     ; 0051fefc
    JZ 0x0051fdb1                       ; 0051ff03
        ;   XREF to: 0051fdb1 (CONDITIONAL_JUMP)  ; LAB_0051fdb1
    MOV EDI,0x1                         ; 0051ff09
        ;   Label: LAB_0051ff09
    JMP 0x0051fdb1                      ; 0051ff0e
        ;   XREF to: 0051fdb1 (UNCONDITIONAL_JUMP)  ; LAB_0051fdb1
    MOV EAX,EDI                         ; 0051ff13
        ;   Label: LAB_0051ff13
    JZ 0x0051fdb1                       ; 0051ff15
        ;   XREF to: 0051fdb1 (CONDITIONAL_JUMP)  ; LAB_0051fdb1
    CMP dword ptr [EDI + 0x43c],0x9     ; 0051ff1b
    JNZ 0x0051ff09                      ; 0051ff22
        ;   XREF to: 0051ff09 (CONDITIONAL_JUMP)  ; LAB_0051ff09
    XOR EDI,EDI                         ; 0051ff24
    JMP 0x0051fdb1                      ; 0051ff26
        ;   XREF to: 0051fdb1 (UNCONDITIONAL_JUMP)  ; LAB_0051fdb1
    CMP dword ptr [ECX + 0x43c],0x9     ; 0051ff2b
        ;   Label: LAB_0051ff2b
    JNZ 0x0051ff3b                      ; 0051ff32
        ;   XREF to: 0051ff3b (CONDITIONAL_JUMP)  ; LAB_0051ff3b
    XOR EAX,ECX                         ; 0051ff34
    JMP 0x0051fdf8                      ; 0051ff36
        ;   XREF to: 0051fdf8 (UNCONDITIONAL_JUMP)  ; LAB_0051fdf8
    MOV EAX,0x1                         ; 0051ff3b
        ;   Label: LAB_0051ff3b
    JMP 0x0051fdf8                      ; 0051ff40
        ;   XREF to: 0051fdf8 (UNCONDITIONAL_JUMP)  ; LAB_0051fdf8
    CMP dword ptr [ESI + 0x43c],0x9     ; 0051ff45
        ;   Label: LAB_0051ff45
    JZ 0x0051fe31                       ; 0051ff4c
        ;   XREF to: 0051fe31 (CONDITIONAL_JUMP)  ; LAB_0051fe31
    MOV EAX,0x1                         ; 0051ff52
    JMP 0x0051fe33                      ; 0051ff57
        ;   XREF to: 0051fe33 (UNCONDITIONAL_JUMP)  ; LAB_0051fe33

