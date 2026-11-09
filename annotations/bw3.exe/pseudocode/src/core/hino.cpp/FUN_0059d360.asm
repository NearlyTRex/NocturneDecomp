; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hino_cpp_FUN_0059d360(int param_1,int param_2)
;
;
; Called Functions:
;   core_enemy.cpp_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   unkafter_enemy.cpp_FUN_0048a1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d360
        ;   Label: core_hino.cpp_FUN_0059d360
    PUSH EDI                            ; 0059d361
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059d362
    MOV EDI,dword ptr [ESP + 0x10]      ; 0059d366
    CMP dword ptr [EDI + 0x30],0x6a     ; 0059d36a
    JNZ 0x0059d373                      ; 0059d36e
        ;   XREF to: 0059d373 (CONDITIONAL_JUMP)  ; LAB_0059d373
    POP EDI                             ; 0059d370
    POP EBX                             ; 0059d371
    RET                                 ; 0059d372
    PUSH ESI                            ; 0059d373
        ;   Label: LAB_0059d373
    MOV ECX,dword ptr [EBX + 0xd054]    ; 0059d374
    PUSH ECX                            ; 0059d37a
    LEA ESI,[EBX + 0x158]               ; 0059d37b
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0059d381
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    FLD float ptr [EDI + 0x4]           ; 0059d386
    FSUBR float ptr [EBX + 0x2538]      ; 0059d389
    ADD ESP,0x4                         ; 0059d38f
    FST float ptr [EBX + 0x2538]        ; 0059d392
    FLDZ                                ; 0059d398
    FCOMPP                              ; 0059d39a
    FNSTSW AX                           ; 0059d39c
    SAHF                                ; 0059d39e
    JC 0x0059d3e6                       ; 0059d39f
        ;   XREF to: 0059d3e6 (CONDITIONAL_JUMP)  ; LAB_0059d3e6
    MOV dword ptr [EBX + 0x2540],0x0    ; 0059d3a1
    PUSH ESI                            ; 0059d3ab
    MOV dword ptr [EBX + 0x2538],0x0    ; 0059d3ac
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059d3b6
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059d3bb
    ADD ESP,0x4                         ; 0059d3be
    CMP EAX,0x7                         ; 0059d3c1
    JZ 0x0059d3d8                       ; 0059d3c4
        ;   XREF to: 0059d3d8 (CONDITIONAL_JUMP)  ; LAB_0059d3d8
    CMP EAX,0x8                         ; 0059d3c6
    JZ 0x0059d3d8                       ; 0059d3c9
        ;   XREF to: 0059d3d8 (CONDITIONAL_JUMP)  ; LAB_0059d3d8
    PUSH 0x1                            ; 0059d3cb
    PUSH 0x7                            ; 0059d3cd
    PUSH ESI                            ; 0059d3cf
        ;   Label: LAB_0059d3cf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059d3d0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059d3d5
    PUSH EDI                            ; 0059d3d8
        ;   Label: LAB_0059d3d8
    PUSH EBX                            ; 0059d3d9
    CALL core_enemy.cpp_FUN_00489b80    ; 0059d3da
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0059d3df
    POP ESI                             ; 0059d3e2
    POP EDI                             ; 0059d3e3
    POP EBX                             ; 0059d3e4
    RET                                 ; 0059d3e5
    PUSH dword ptr [EDI + 0x4]          ; 0059d3e6
        ;   Label: LAB_0059d3e6
    PUSH EBX                            ; 0059d3e9
    CALL unkafter_enemy.cpp_FUN_0048a1b0 ; 0059d3ea
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 0059d3ef
    TEST EAX,EAX                        ; 0059d3f2
    JZ 0x0059d3d8                       ; 0059d3f4
        ;   XREF to: 0059d3d8 (CONDITIONAL_JUMP)  ; LAB_0059d3d8
    PUSH ESI                            ; 0059d3f6
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059d3f7
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059d3fc
    PUSH 0x1                            ; 0059d3ff
    PUSH 0x6                            ; 0059d401
    JMP 0x0059d3cf                      ; 0059d403
        ;   XREF to: 0059d3cf (UNCONDITIONAL_JUMP)  ; LAB_0059d3cf

