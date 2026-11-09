; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_FUN_00546db0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_ShotShadowWithLead_005d1519
;   undefined4 DAT_005d152e
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_0040ce40
;   core_enemy.cpp_FUN_00489b80
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546db0
        ;   Label: core_shotgun.cpp_FUN_00546db0
    PUSH EDI                            ; 00546db1
    SUB ESP,0x18                        ; 00546db2
    MOV EDI,dword ptr [ESP + 0x24]      ; 00546db5
    MOV EBX,dword ptr [ESP + 0x28]      ; 00546db9
    MOV EDX,dword ptr [EBX + 0x30]      ; 00546dbd
    CMP EDX,0x64                        ; 00546dc0
    JZ 0x00546e66                       ; 00546dc3
        ;   XREF to: 00546e66 (CONDITIONAL_JUMP)  ; LAB_00546e66
    CMP EDX,0x65                        ; 00546dc9
    JZ 0x00546e66                       ; 00546dcc
        ;   XREF to: 00546e66 (CONDITIONAL_JUMP)  ; LAB_00546e66
    CMP EDX,0x66                        ; 00546dd2
    JZ 0x00546e66                       ; 00546dd5
        ;   XREF to: 00546e66 (CONDITIONAL_JUMP)  ; LAB_00546e66
    CMP EDX,0x67                        ; 00546ddb
    JZ 0x00546e66                       ; 00546dde
        ;   XREF to: 00546e66 (CONDITIONAL_JUMP)  ; LAB_00546e66
    CMP EDX,0x68                        ; 00546de4
    JZ 0x00546e66                       ; 00546de7
        ;   XREF to: 00546e66 (CONDITIONAL_JUMP)  ; LAB_00546e66
    CMP EDX,0x69                        ; 00546ded
    JZ 0x00546e66                       ; 00546df0
        ;   XREF to: 00546e66 (CONDITIONAL_JUMP)  ; LAB_00546e66
    CMP EDX,0x6a                        ; 00546df6
    JZ 0x00546e66                       ; 00546df9
        ;   XREF to: 00546e66 (CONDITIONAL_JUMP)  ; LAB_00546e66
    CMP EDX,0x6b                        ; 00546dfb
    JZ 0x00546e66                       ; 00546dfe
        ;   XREF to: 00546e66 (CONDITIONAL_JUMP)  ; LAB_00546e66
    PUSH ESI                            ; 00546e00
    CMP EDX,0x6c                        ; 00546e01
    JZ 0x00546e86                       ; 00546e04
        ;   XREF to: 00546e86 (CONDITIONAL_JUMP)  ; LAB_00546e86
    FLD float ptr [EBX + 0x4]           ; 00546e0a
        ;   Label: LAB_00546e0a
    FSUBR float ptr [EDI + 0x2538]      ; 00546e0d
    FST float ptr [EDI + 0x2538]        ; 00546e13
    FLDZ                                ; 00546e19
    FCOMPP                              ; 00546e1b
    FNSTSW AX                           ; 00546e1d
    SAHF                                ; 00546e1f
    JC 0x00546e55                       ; 00546e20
        ;   XREF to: 00546e55 (CONDITIONAL_JUMP)  ; LAB_00546e55
    LEA ESI,[EDI + 0x158]               ; 00546e22
    PUSH ESI                            ; 00546e28
    MOV dword ptr [EDI + 0x2538],0x0    ; 00546e29
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00546e33
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00546e38
    ADD ESP,0x4                         ; 00546e3b
    CMP EAX,0x7                         ; 00546e3e
    JZ 0x00546e55                       ; 00546e41
        ;   XREF to: 00546e55 (CONDITIONAL_JUMP)  ; LAB_00546e55
    CMP EAX,0x6                         ; 00546e43
    JZ 0x00546e55                       ; 00546e46
        ;   XREF to: 00546e55 (CONDITIONAL_JUMP)  ; LAB_00546e55
    PUSH 0x1                            ; 00546e48
    PUSH 0x6                            ; 00546e4a
    PUSH ESI                            ; 00546e4c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00546e4d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00546e52
    PUSH EBX                            ; 00546e55
        ;   Label: LAB_00546e55
    PUSH EDI                            ; 00546e56
    CALL core_enemy.cpp_FUN_00489b80    ; 00546e57
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 00546e5c
    POP ESI                             ; 00546e5f
    ADD ESP,0x18                        ; 00546e60
    POP EDI                             ; 00546e63
    POP EBX                             ; 00546e64
    RET                                 ; 00546e65
    PUSH 0x5d1519                       ; 00546e66 | = "ShotShadowWithLead"
        ;   Label: LAB_00546e66
    MOV EAX,[0x005fba60]                ; 00546e6b | DAT_005fba60
    PUSH EAX                            ; 00546e70
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00546e71
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00546e76
    MOV dword ptr [EBX + 0x4],0x0       ; 00546e79
    ADD ESP,0x18                        ; 00546e80
    POP EDI                             ; 00546e83
    POP EBX                             ; 00546e84
    RET                                 ; 00546e85
    PUSH 0x41f00000                     ; 00546e86
        ;   Label: LAB_00546e86
    PUSH 0x41700000                     ; 00546e8b
    CALL core_actor.cpp_FUN_0040ce40    ; 00546e90
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x20],EAX      ; 00546e95
    FLD float ptr [ESP + 0x20]          ; 00546e99
    FMUL double ptr [0x005d152e]        ; 00546e9d | DAT_005d152e
    LEA EAX,[EBX + 0x1c]                ; 00546ea3
    ADD ESP,0x8                         ; 00546ea6
    FLD float ptr [EBX + 0x4]           ; 00546ea9
    FXCH                                ; 00546eac
    FMUL ST1                            ; 00546eae
    PUSH EAX                            ; 00546eb0
    LEA ESI,[ESP + 0x8]                 ; 00546eb1
    PUSH EDI                            ; 00546eb5
    FSTP ST1                            ; 00546eb6
    FSTP float ptr [EBX + 0x4]          ; 00546eb8
    CALL core_actor.cpp_FUN_00408b80    ; 00546ebb
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00546ec0
    JMP 0x00546e0a                      ; 00546ec3
        ;   XREF to: 00546e0a (UNCONDITIONAL_JUMP)  ; LAB_00546e0a

