; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mattnntt_cpp_CMattanntote_processDamage_FUN_005939b0(CMattanntote *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CMattanntote *   Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   unkafter_enemy.cpp_FUN_0048a1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005939b0
        ;   Label: core_mattnntt.cpp_CMattanntote_processDamage_FUN_005939b0
    PUSH EDI                            ; 005939b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005939b2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005939b6
    CMP dword ptr [EBX + 0x33a0],0x0    ; 005939ba
    JLE 0x005939c6                      ; 005939c1
        ;   XREF to: 005939c6 (CONDITIONAL_JUMP)  ; LAB_005939c6
    POP EDI                             ; 005939c3
    POP EBX                             ; 005939c4
    RET                                 ; 005939c5
    PUSH ESI                            ; 005939c6
        ;   Label: LAB_005939c6
    FLD float ptr [EDI + 0x4]           ; 005939c7
    MOV dword ptr [EBX + 0xcde0],0x3f99999a ; 005939ca
    FSUBR float ptr [EBX + 0x2538]      ; 005939d4
    LEA ESI,[EBX + 0x158]               ; 005939da
    FST float ptr [EBX + 0x2538]        ; 005939e0
    FLDZ                                ; 005939e6
    FCOMPP                              ; 005939e8
    FNSTSW AX                           ; 005939ea
    SAHF                                ; 005939ec
    JNC 0x00593a33                      ; 005939ed
        ;   XREF to: 00593a33 (CONDITIONAL_JUMP)  ; LAB_00593a33
    PUSH dword ptr [EDI + 0x4]          ; 005939ef
    PUSH EBX                            ; 005939f2
    CALL unkafter_enemy.cpp_FUN_0048a1b0 ; 005939f3
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 005939f8
    TEST EAX,EAX                        ; 005939fb
    JZ 0x00593a0c                       ; 005939fd
        ;   XREF to: 00593a0c (CONDITIONAL_JUMP)  ; LAB_00593a0c
    PUSH 0x1                            ; 005939ff
    PUSH 0x7                            ; 00593a01
    PUSH ESI                            ; 00593a03
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00593a04
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00593a09
    FLD float ptr [EBX + 0xd054]        ; 00593a0c
        ;   Label: LAB_00593a0c
    FLDZ                                ; 00593a12
    FCOMPP                              ; 00593a14
    FNSTSW AX                           ; 00593a16
    SAHF                                ; 00593a18
    JC 0x00593a25                       ; 00593a19
        ;   XREF to: 00593a25 (CONDITIONAL_JUMP)  ; LAB_00593a25
    MOV dword ptr [EBX + 0xd054],0x40000000 ; 00593a1b
    PUSH EDI                            ; 00593a25
        ;   Label: LAB_00593a25
    PUSH EBX                            ; 00593a26
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00593a27
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00593a2c
    POP ESI                             ; 00593a2f
    POP EDI                             ; 00593a30
    POP EBX                             ; 00593a31
    RET                                 ; 00593a32
    MOV dword ptr [EBX + 0x2540],0x0    ; 00593a33
        ;   Label: LAB_00593a33
    PUSH ESI                            ; 00593a3d
    MOV dword ptr [EBX + 0x2538],0x0    ; 00593a3e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00593a48
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00593a4d
    ADD ESP,0x4                         ; 00593a50
    CMP EAX,0x9                         ; 00593a53
    JZ 0x00593a25                       ; 00593a56
        ;   XREF to: 00593a25 (CONDITIONAL_JUMP)  ; LAB_00593a25
    CMP EAX,0x8                         ; 00593a58
    JZ 0x00593a25                       ; 00593a5b
        ;   XREF to: 00593a25 (CONDITIONAL_JUMP)  ; LAB_00593a25
    PUSH 0x1                            ; 00593a5d
    PUSH 0x8                            ; 00593a5f
    PUSH ESI                            ; 00593a61
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00593a62
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00593a67
    PUSH 0x41c80000                     ; 00593a6a
    PUSH 0x32                           ; 00593a6f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00593a71
    PUSH EBX                            ; 00593a77
    CALL dword ptr [EAX + 0xa8]         ; 00593a78
    ADD ESP,0xc                         ; 00593a7e
    PUSH EDI                            ; 00593a81
    PUSH EBX                            ; 00593a82
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00593a83
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00593a88
    POP ESI                             ; 00593a8b
    POP EDI                             ; 00593a8c
    POP EBX                             ; 00593a8d
    RET                                 ; 00593a8e

