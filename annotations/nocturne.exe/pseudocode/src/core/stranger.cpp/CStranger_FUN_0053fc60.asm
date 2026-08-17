; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_FUN_0053fc60(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00535900 at 005362e4
;
; Referenced Globals:
;   void* switchdataD_0053fc3c = 0053fce7
;   TerminatedCString s_eDoorMoveNone_returned_b_00595e17
;   TerminatedCString s_eDoorMoveNone_returned_b_00595e54
;   TerminatedCString s_CBodyPart_00595e91
;   TerminatedCString s_CBodyPart_00595e9c
;   double DOUBLE_00595ea7 = 0.999900000000000
;   double DOUBLE_00595eaf = 0.990000000000000
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_hero.cpp_CHero_FUN_004b5110
;   core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004b5750
;   core_hero.cpp_CHero_tryInteract_FUN_004b4e90
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270
;   core_hero.cpp_CHero_tryPullLever_FUN_004b52f0
;   core_hero.cpp_CHero_tryPushNearbyBox_FUN_004b54c0
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_stranger.cpp_CStranger_FUN_0053c800
;   core_stranger.cpp_CStranger_tryClimbLadder_FUN_0053bf90
;   core_stranger.cpp_CStranger_tryDescendLadder_FUN_0053c3b0
;   core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630
;   core_stranger.cpp_CStranger_tryThrowDynamite_FUN_0053ff50
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053fc60
        ;   Label: core_stranger.cpp_CStranger_FUN_0053fc60
    PUSH ESI                            ; 0053fc61
    PUSH EDI                            ; 0053fc62
    SUB ESP,0x8                         ; 0053fc63
    MOV EBX,dword ptr [ESP + 0x18]      ; 0053fc66
    CMP dword ptr [EBX + 0xbca0],0x0    ; 0053fc6a
    JZ 0x0053fc7c                       ; 0053fc71
        ;   XREF to: 0053fc7c (CONDITIONAL_JUMP)  ; LAB_0053fc7c
    CMP dword ptr [EBX + 0x1faa0],0x0   ; 0053fc73
    JZ 0x0053fc83                       ; 0053fc7a
        ;   XREF to: 0053fc83 (CONDITIONAL_JUMP)  ; LAB_0053fc83
    ADD ESP,0x8                         ; 0053fc7c
        ;   Label: LAB_0053fc7c
    POP EDI                             ; 0053fc7f
    POP ESI                             ; 0053fc80
    POP EBX                             ; 0053fc81
    RET                                 ; 0053fc82
    PUSH EBX                            ; 0053fc83
        ;   Label: LAB_0053fc83
    CALL core_stranger.cpp_CStranger_tryThrowDynamite_FUN_0053ff50 ; 0053fc84
        ;   XREF to: 0053ff50 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryThrowDynamite_FUN_0053ff50(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0053fc89
    TEST EAX,EAX                        ; 0053fc8c
    JNZ 0x0053fc7c                      ; 0053fc8e
        ;   XREF to: 0053fc7c (CONDITIONAL_JUMP)  ; LAB_0053fc7c
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 0053fc90
    JNZ 0x0053fc7c                      ; 0053fc97
        ;   XREF to: 0053fc7c (CONDITIONAL_JUMP)  ; LAB_0053fc7c
    PUSH EAX                            ; 0053fc99
    LEA ESI,[EBX + 0x150]               ; 0053fc9a
    PUSH ESI                            ; 0053fca0
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 0053fca1
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 0053fca6
    ADD ESP,0x8                         ; 0053fcaa
    PUSH 0x1                            ; 0053fcad
    PUSH ESI                            ; 0053fcaf
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 0053fcb0
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 0053fcb5
    FLD float ptr [ESP + 0xc]           ; 0053fcb9
    ADD ESP,0x8                         ; 0053fcbd
    FADD float ptr [ESP]                ; 0053fcc0
    FCOMP double ptr [0x00595ea7]       ; 0053fcc3 | DOUBLE_00595ea7
    FNSTSW AX                           ; 0053fcc9
    SAHF                                ; 0053fccb
    JBE 0x0053fd06                      ; 0053fccc
        ;   XREF to: 0053fd06 (CONDITIONAL_JUMP)  ; LAB_0053fd06
    PUSH EBX                            ; 0053fcce
    CALL core_hero.cpp_CHero_FUN_004b5110 ; 0053fccf
        ;   XREF to: 004b5110 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004b5110(CHero * this_ptr)
    ADD ESP,0x4                         ; 0053fcd4
    CMP EAX,0x5                         ; 0053fcd7
    JA 0x0053fde6                       ; 0053fcda
        ;   XREF to: 0053fde6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x53fc3c]  ; 0053fce0 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EDX,dword ptr [EBX + 0x1fa04]   ; 0053fce7
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 0053fced
    JZ 0x0053fd06                       ; 0053fcef
        ;   XREF to: 0053fd06 (CONDITIONAL_JUMP)  ; LAB_0053fd06
    PUSH EDX                            ; 0053fcf1
    PUSH 0x595e54                       ; 0053fcf2 | = "eDoorMoveNone returned by checkDoorOp..."
    MOV ESI,dword ptr [0x005b6d50]      ; 0053fcf7 | g_CEditorTools_PTR_005b6d50
    PUSH ESI                            ; 0053fcfd
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0046fcd0 ; 0053fcfe
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0046fcd0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053fd03
    PUSH EBX                            ; 0053fd06
        ;   Label: LAB_0053fd06
    CALL core_stranger.cpp_CStranger_FUN_0053c800 ; 0053fd07
        ;   XREF to: 0053c800 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_FUN_0053c800(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0053fd0c
    TEST EAX,EAX                        ; 0053fd0f
    JZ 0x0053fe00                       ; 0053fd11
        ;   XREF to: 0053fe00 (CONDITIONAL_JUMP)  ; LAB_0053fe00
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fd17
    ADD ESP,0x8                         ; 0053fd21
    POP EDI                             ; 0053fd24
    POP ESI                             ; 0053fd25
    POP EBX                             ; 0053fd26
    RET                                 ; 0053fd27
    MOV EDI,dword ptr [EBX + 0x1fa04]   ; 0053fd28
        ;   Label: caseD_1
    TEST EDI,EDI                        ; 0053fd2e
    JNZ 0x0053fd43                      ; 0053fd30
        ;   XREF to: 0053fd43 (CONDITIONAL_JUMP)  ; LAB_0053fd43
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fd32
    ADD ESP,0x8                         ; 0053fd3c
    POP EDI                             ; 0053fd3f
    POP ESI                             ; 0053fd40
    POP EBX                             ; 0053fd41
    RET                                 ; 0053fd42
    PUSH EDI                            ; 0053fd43
        ;   Label: LAB_0053fd43
    PUSH 0x595e17                       ; 0053fd44 | = "eDoorMoveNone returned by checkDoorOp..."
    MOV EAX,[0x005b6d50]                ; 0053fd49 | g_CEditorTools_PTR_005b6d50
    PUSH EAX                            ; 0053fd4e
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0046fcd0 ; 0053fd4f
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0046fcd0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053fd54
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fd57
    ADD ESP,0x8                         ; 0053fd61
    POP EDI                             ; 0053fd64
    POP ESI                             ; 0053fd65
    POP EBX                             ; 0053fd66
    RET                                 ; 0053fd67
    PUSH 0x1                            ; 0053fd68
        ;   Label: caseD_2
    PUSH 0x1c                           ; 0053fd6a
    LEA EAX,[EBX + 0x150]               ; 0053fd6c
    PUSH EAX                            ; 0053fd72
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053fd73
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1faa0],0x5   ; 0053fd78
    ADD ESP,0xc                         ; 0053fd82
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fd85
    ADD ESP,0x8                         ; 0053fd8f
    POP EDI                             ; 0053fd92
    POP ESI                             ; 0053fd93
    POP EBX                             ; 0053fd94
    RET                                 ; 0053fd95
    PUSH 0x1                            ; 0053fd96
        ;   Label: caseD_4
    PUSH 0x1d                           ; 0053fd98
    PUSH ESI                            ; 0053fd9a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053fd9b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1faa0],0x5   ; 0053fda0
    ADD ESP,0xc                         ; 0053fdaa
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fdad
    ADD ESP,0x8                         ; 0053fdb7
    POP EDI                             ; 0053fdba
    POP ESI                             ; 0053fdbb
    POP EBX                             ; 0053fdbc
    RET                                 ; 0053fdbd
    PUSH 0x1                            ; 0053fdbe
        ;   Label: caseD_5
    PUSH 0x1e                           ; 0053fdc0
    PUSH ESI                            ; 0053fdc2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053fdc3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1faa0],0x5   ; 0053fdc8
    ADD ESP,0xc                         ; 0053fdd2
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fdd5
    ADD ESP,0x8                         ; 0053fddf
    POP EDI                             ; 0053fde2
    POP ESI                             ; 0053fde3
    POP EBX                             ; 0053fde4
    RET                                 ; 0053fde5
    PUSH EBX                            ; 0053fde6
        ;   Label: default
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270 ; 0053fde7
        ;   XREF to: 004b5270 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004b5270(CHero * this_ptr)
    ADD ESP,0x4                         ; 0053fdec
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fdef
    ADD ESP,0x8                         ; 0053fdf9
    POP EDI                             ; 0053fdfc
    POP ESI                             ; 0053fdfd
    POP EBX                             ; 0053fdfe
    RET                                 ; 0053fdff
    PUSH 0x595e91                       ; 0053fe00 | = "!CBodyPart"
        ;   Label: LAB_0053fe00
    PUSH EBX                            ; 0053fe05
    CALL core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630 ; 0053fe06
        ;   XREF to: 0053b630 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630(CStranger * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 0053fe0b
    TEST EAX,EAX                        ; 0053fe0e
    JZ 0x0053fe23                       ; 0053fe10
        ;   XREF to: 0053fe23 (CONDITIONAL_JUMP)  ; LAB_0053fe23
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fe12
    ADD ESP,0x8                         ; 0053fe1c
    POP EDI                             ; 0053fe1f
    POP ESI                             ; 0053fe20
    POP EBX                             ; 0053fe21
    RET                                 ; 0053fe22
    PUSH EBX                            ; 0053fe23
        ;   Label: LAB_0053fe23
    CALL core_hero.cpp_CHero_tryInteract_FUN_004b4e90 ; 0053fe24
        ;   XREF to: 004b4e90 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004b4e90(CHero * this_ptr)
    ADD ESP,0x4                         ; 0053fe29
    TEST EAX,EAX                        ; 0053fe2c
    JNZ 0x0053fc7c                      ; 0053fe2e
        ;   XREF to: 0053fc7c (CONDITIONAL_JUMP)  ; LAB_0053fc7c
    PUSH EBX                            ; 0053fe34
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0 ; 0053fe35
        ;   XREF to: 004b4fe0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0053fe3a
    TEST EAX,EAX                        ; 0053fe3d
    JZ 0x0053fe52                       ; 0053fe3f
        ;   XREF to: 0053fe52 (CONDITIONAL_JUMP)  ; LAB_0053fe52
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fe41
    ADD ESP,0x8                         ; 0053fe4b
    POP EDI                             ; 0053fe4e
    POP ESI                             ; 0053fe4f
    POP EBX                             ; 0053fe50
    RET                                 ; 0053fe51
    PUSH EBX                            ; 0053fe52
        ;   Label: LAB_0053fe52
    CALL core_hero.cpp_CHero_tryPushNearbyBox_FUN_004b54c0 ; 0053fe53
        ;   XREF to: 004b54c0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryPushNearbyBox_FUN_004b54c0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0053fe58
    LEA ESI,[EBX + 0x150]               ; 0053fe5b
    TEST EAX,EAX                        ; 0053fe61
    JNZ 0x0053fe80                      ; 0053fe63
        ;   XREF to: 0053fe80 (CONDITIONAL_JUMP)  ; LAB_0053fe80
    MOV EDI,dword ptr [EBX + 0x24f0]    ; 0053fe65
    TEST EDI,EDI                        ; 0053fe6b
    JZ 0x0053fe94                       ; 0053fe6d
        ;   XREF to: 0053fe94 (CONDITIONAL_JUMP)  ; LAB_0053fe94
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0053fe6f
        ;   Label: LAB_0053fe6f
    ADD ESP,0x8                         ; 0053fe79
    POP EDI                             ; 0053fe7c
    POP ESI                             ; 0053fe7d
    POP EBX                             ; 0053fe7e
    RET                                 ; 0053fe7f
    PUSH 0x1                            ; 0053fe80
        ;   Label: LAB_0053fe80
    PUSH 0x6                            ; 0053fe82
    PUSH ESI                            ; 0053fe84
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053fe85
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053fe8a
    ADD ESP,0x8                         ; 0053fe8d
    POP EDI                             ; 0053fe90
    POP ESI                             ; 0053fe91
    POP EBX                             ; 0053fe92
    RET                                 ; 0053fe93
    PUSH EAX                            ; 0053fe94
        ;   Label: LAB_0053fe94
    PUSH EBX                            ; 0053fe95
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053fe96
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0xc],EAX       ; 0053fe9b
    FLD float ptr [ESP + 0xc]           ; 0053fe9f
    ADD ESP,0x8                         ; 0053fea3
    FCOMP double ptr [0x00595eaf]       ; 0053fea6 | DOUBLE_00595eaf
    FNSTSW AX                           ; 0053feac
    SAHF                                ; 0053feae
    JBE 0x0053fe6f                      ; 0053feaf
        ;   XREF to: 0053fe6f (CONDITIONAL_JUMP)  ; LAB_0053fe6f
    PUSH EBX                            ; 0053feb1
    CALL core_hero.cpp_CHero_tryPullLever_FUN_004b52f0 ; 0053feb2
        ;   XREF to: 004b52f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryPullLever_FUN_004b52f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0053feb7
    TEST EAX,EAX                        ; 0053feba
    JNZ 0x0053fed8                      ; 0053febc
        ;   XREF to: 0053fed8 (CONDITIONAL_JUMP)  ; LAB_0053fed8
    PUSH EBX                            ; 0053febe
    CALL core_stranger.cpp_CStranger_tryClimbLadder_FUN_0053bf90 ; 0053febf
        ;   XREF to: 0053bf90 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryClimbLadder_FUN_0053bf90(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0053fec4
    TEST EAX,EAX                        ; 0053fec7
    JZ 0x0053fef2                       ; 0053fec9
        ;   XREF to: 0053fef2 (CONDITIONAL_JUMP)  ; LAB_0053fef2
    MOV dword ptr [EBX + 0xbca0],EDI    ; 0053fecb
    ADD ESP,0x8                         ; 0053fed1
    POP EDI                             ; 0053fed4
    POP ESI                             ; 0053fed5
    POP EBX                             ; 0053fed6
    RET                                 ; 0053fed7
    PUSH 0x1                            ; 0053fed8
        ;   Label: LAB_0053fed8
    PUSH 0x1f                           ; 0053feda
    PUSH ESI                            ; 0053fedc
    MOV dword ptr [EBX + 0xbca0],EDI    ; 0053fedd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053fee3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053fee8
    ADD ESP,0x8                         ; 0053feeb
    POP EDI                             ; 0053feee
    POP ESI                             ; 0053feef
    POP EBX                             ; 0053fef0
    RET                                 ; 0053fef1
    PUSH EBX                            ; 0053fef2
        ;   Label: LAB_0053fef2
    CALL core_stranger.cpp_CStranger_tryDescendLadder_FUN_0053c3b0 ; 0053fef3
        ;   XREF to: 0053c3b0 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryDescendLadder_FUN_0053c3b0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 0053fef8
    TEST EAX,EAX                        ; 0053fefb
    JZ 0x0053ff0c                       ; 0053fefd
        ;   XREF to: 0053ff0c (CONDITIONAL_JUMP)  ; LAB_0053ff0c
    MOV dword ptr [EBX + 0xbca0],EDI    ; 0053feff
    ADD ESP,0x8                         ; 0053ff05
    POP EDI                             ; 0053ff08
    POP ESI                             ; 0053ff09
    POP EBX                             ; 0053ff0a
    RET                                 ; 0053ff0b
    PUSH EBX                            ; 0053ff0c
        ;   Label: LAB_0053ff0c
    CALL core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004b5750 ; 0053ff0d
        ;   XREF to: 004b5750 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004b5750(CHero * this_ptr)
    ADD ESP,0x4                         ; 0053ff12
    TEST EAX,EAX                        ; 0053ff15
    JZ 0x0053ff26                       ; 0053ff17
        ;   XREF to: 0053ff26 (CONDITIONAL_JUMP)  ; LAB_0053ff26
    MOV dword ptr [EBX + 0xbca0],EDI    ; 0053ff19
    ADD ESP,0x8                         ; 0053ff1f
    POP EDI                             ; 0053ff22
    POP ESI                             ; 0053ff23
    POP EBX                             ; 0053ff24
    RET                                 ; 0053ff25
    PUSH 0x595e9c                       ; 0053ff26 | = "CBodyPart"
        ;   Label: LAB_0053ff26
    PUSH EBX                            ; 0053ff2b
    CALL core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630 ; 0053ff2c
        ;   XREF to: 0053b630 (UNCONDITIONAL_CALL)  ; int core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630(CStranger * this_ptr, char * class_name)
    ADD ESP,0x8                         ; 0053ff31
    TEST EAX,EAX                        ; 0053ff34
    JZ 0x0053fe6f                       ; 0053ff36
        ;   XREF to: 0053fe6f (CONDITIONAL_JUMP)  ; LAB_0053fe6f
    MOV dword ptr [EBX + 0xbca0],EDI    ; 0053ff3c
    ADD ESP,0x8                         ; 0053ff42
    POP EDI                             ; 0053ff45
    POP ESI                             ; 0053ff46
    POP EBX                             ; 0053ff47
    RET                                 ; 0053ff48

