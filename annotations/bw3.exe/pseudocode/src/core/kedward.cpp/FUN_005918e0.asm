; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_kedward_cpp_FUN_005918e0(int param_1,int param_2)
;
;
; Called Functions:
;   core_enemy.cpp_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   unkafter_enemy.cpp_FUN_0048a1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005918e0
        ;   Label: core_kedward.cpp_FUN_005918e0
    PUSH ESI                            ; 005918e1
    PUSH EDI                            ; 005918e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005918e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005918e7
    FLD float ptr [EDI + 0x4]           ; 005918eb
    MOV dword ptr [EBX + 0xcde0],0x3f99999a ; 005918ee
    FSUBR float ptr [EBX + 0x2538]      ; 005918f8
    LEA ESI,[EBX + 0x158]               ; 005918fe
    FST float ptr [EBX + 0x2538]        ; 00591904
    FLDZ                                ; 0059190a
    FCOMPP                              ; 0059190c
    FNSTSW AX                           ; 0059190e
    SAHF                                ; 00591910
    JC 0x0059196f                       ; 00591911
        ;   XREF to: 0059196f (CONDITIONAL_JUMP)  ; LAB_0059196f
    MOV dword ptr [EBX + 0x2540],0x0    ; 00591913
    PUSH ESI                            ; 0059191d
    MOV dword ptr [EBX + 0x2538],0x0    ; 0059191e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00591928
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059192d
    ADD ESP,0x4                         ; 00591930
    CMP EAX,0x8                         ; 00591933
    JZ 0x00591961                       ; 00591936
        ;   XREF to: 00591961 (CONDITIONAL_JUMP)  ; LAB_00591961
    CMP EAX,0x7                         ; 00591938
    JZ 0x00591961                       ; 0059193b
        ;   XREF to: 00591961 (CONDITIONAL_JUMP)  ; LAB_00591961
    PUSH 0x1                            ; 0059193d
    PUSH 0x7                            ; 0059193f
    PUSH ESI                            ; 00591941
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00591942
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00591947
    PUSH 0x41c80000                     ; 0059194a
    PUSH 0x32                           ; 0059194f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00591951
    PUSH EBX                            ; 00591957
    CALL dword ptr [EAX + 0xa8]         ; 00591958
    ADD ESP,0xc                         ; 0059195e
    PUSH EDI                            ; 00591961
        ;   Label: LAB_00591961
    PUSH EBX                            ; 00591962
    CALL core_enemy.cpp_FUN_00489b80    ; 00591963
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 00591968
    POP EDI                             ; 0059196b
    POP ESI                             ; 0059196c
    POP EBX                             ; 0059196d
    RET                                 ; 0059196e
    PUSH dword ptr [EDI + 0x4]          ; 0059196f
        ;   Label: LAB_0059196f
    PUSH EBX                            ; 00591972
    CALL unkafter_enemy.cpp_FUN_0048a1b0 ; 00591973
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 00591978
    TEST EAX,EAX                        ; 0059197b
    JZ 0x00591961                       ; 0059197d
        ;   XREF to: 00591961 (CONDITIONAL_JUMP)  ; LAB_00591961
    PUSH 0x1                            ; 0059197f
    PUSH 0x6                            ; 00591981
    PUSH ESI                            ; 00591983
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00591984
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00591989
    PUSH EDI                            ; 0059198c
    PUSH EBX                            ; 0059198d
    CALL core_enemy.cpp_FUN_00489b80    ; 0059198e
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 00591993
    POP EDI                             ; 00591996
    POP ESI                             ; 00591997
    POP EBX                             ; 00591998
    RET                                 ; 00591999

