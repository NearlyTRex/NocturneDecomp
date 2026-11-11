; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_process_FUN_00518ab0(CPrye *this_ptr,float delta_time)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00518a74 = 00518bf8
;   undefined4 DAT_005cd00b
;   undefined4 DAT_005cd00f
;   undefined4 DAT_005cd017
;   undefined4 DAT_005cd01f
;   undefined4 DAT_005e3504
;   CGame* g_CGamePtr = 01d2130c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.goggles_active
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_charactr.cpp_FUN_0042cd70
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433220
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_game.cpp_CGame_slamDT_FUN_004bf3a0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_prye.cpp_FUN_00518cd0
;   unkafter_prye.cpp_FUN_00526dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518ab0
        ;   Label: core_prye.cpp_CPrye_process_FUN_00518ab0
    PUSH EBP                            ; 00518ab1
    SUB ESP,0x44                        ; 00518ab2
    MOV EBX,dword ptr [ESP + 0x50]      ; 00518ab5
    PUSH dword ptr [ESP + 0x54]         ; 00518ab9
    PUSH EBX                            ; 00518abd
    CALL core_charactr.cpp_FUN_0042cd70 ; 00518abe
        ;   XREF to: 0042cd70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042cd70()
    ADD ESP,0x8                         ; 00518ac3
    TEST EAX,EAX                        ; 00518ac6
    JZ 0x00518c66                       ; 00518ac8
        ;   XREF to: 00518c66 (CONDITIONAL_JUMP)  ; LAB_00518c66
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 00518ace
    TEST EDX,EDX                        ; 00518ad4
    JZ 0x00518c86                       ; 00518ad6
        ;   XREF to: 00518c86 (CONDITIONAL_JUMP)  ; LAB_00518c86
    CMP dword ptr [EDX + 0x57c],0x0     ; 00518adc
    JZ 0x00518c86                       ; 00518ae3
        ;   XREF to: 00518c86 (CONDITIONAL_JUMP)  ; LAB_00518c86
    CMP dword ptr [EBX + 0x20b8c],0x0   ; 00518ae9
        ;   Label: LAB_00518ae9
    JZ 0x00518b08                       ; 00518af0
        ;   XREF to: 00518b08 (CONDITIONAL_JUMP)  ; LAB_00518b08
    FLD float ptr [ESP + 0x54]          ; 00518af2
    FMUL float ptr [0x005cd00b]         ; 00518af6 | DAT_005cd00b
    FADD float ptr [EBX + 0x20b90]      ; 00518afc
    FSTP float ptr [EBX + 0x20b90]      ; 00518b02
    PUSH ESI                            ; 00518b08
        ;   Label: LAB_00518b08
    FLDZ                                ; 00518b09
    FCOMP float ptr [EBX + 0x3254]      ; 00518b0b
    FNSTSW AX                           ; 00518b11
    SAHF                                ; 00518b13
    JNC 0x00518b58                      ; 00518b14
        ;   XREF to: 00518b58 (CONDITIONAL_JUMP)  ; LAB_00518b58
    CMP dword ptr [EBX + 0x3258],0x3    ; 00518b16
    JNZ 0x00518b58                      ; 00518b1d
        ;   XREF to: 00518b58 (CONDITIONAL_JUMP)  ; LAB_00518b58
    LEA EAX,[ESP + 0x4]                 ; 00518b1f
    PUSH EAX                            ; 00518b23
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00518b24
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00518b29
    FLD float ptr [ESP + 0x58]          ; 00518b2c
    FMUL double ptr [0x005cd00f]        ; 00518b30 | DAT_005cd00f
    LEA EAX,[ESP + 0x4]                 ; 00518b36
    MOV EBP,0x69                        ; 00518b3a
    PUSH EAX                            ; 00518b3f
    MOV dword ptr [ESP + 0x38],EBP      ; 00518b40
    PUSH EBX                            ; 00518b44
    FSTP float ptr [ESP + 0x10]         ; 00518b45
    MOV ESI,dword ptr [EBX + 0x154]     ; 00518b49
    CALL dword ptr [ESI + 0x108]        ; 00518b4f
    ADD ESP,0x8                         ; 00518b55
    MOV EAX,[0x005fe9dc]                ; 00518b58 | g_CGamePtr
        ;   Label: LAB_00518b58
    CMP dword ptr [EAX + 0x264],0x0     ; 00518b5d | g_CGameInstance.goggles_active
    SETNZ AL                            ; 00518b64
    MOV ECX,dword ptr [EBX + 0x20cf8]   ; 00518b67
    MOVZX ESI,AL                        ; 00518b6d
    CMP ECX,0x1                         ; 00518b70
    JNZ 0x00518bb8                      ; 00518b73
        ;   XREF to: 00518bb8 (CONDITIONAL_JUMP)  ; LAB_00518bb8
    PUSH ECX                            ; 00518b75
    FLD float ptr [0x005e3504]          ; 00518b76 | DAT_005e3504
    LEA EAX,[EBX + 0x158]               ; 00518b7c
    PUSH 0x7a                           ; 00518b82
    FSUBR float ptr [EBX + 0x20cfc]     ; 00518b84
    PUSH EAX                            ; 00518b8a
    FSTP float ptr [EBX + 0x20cfc]      ; 00518b8b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00518b91
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    FLD float ptr [EBX + 0x20cfc]       ; 00518b96
    ADD ESP,0xc                         ; 00518b9c
    FCOMP double ptr [0x005cd017]       ; 00518b9f | DAT_005cd017
    FNSTSW AX                           ; 00518ba5
    SAHF                                ; 00518ba7
    JNC 0x00518c9f                      ; 00518ba8
        ;   XREF to: 00518c9f (CONDITIONAL_JUMP)  ; LAB_00518c9f
    MOV dword ptr [EBX + 0x20cf8],0x0   ; 00518bae
    PUSH ESI                            ; 00518bb8
        ;   Label: LAB_00518bb8
    PUSH dword ptr [ESP + 0x5c]         ; 00518bb9
    PUSH EBX                            ; 00518bbd
    CALL core_charactr.cpp_FUN_00432330 ; 00518bbe
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    MOV EAX,[0x005fe9dc]                ; 00518bc3 | g_CGamePtr
    ADD ESP,0xc                         ; 00518bc8
    FLD float ptr [EAX + 0x314]         ; 00518bcb | g_CGameInstance.delta_time_float
    LEA EAX,[EBX + 0x158]               ; 00518bd1
    PUSH EAX                            ; 00518bd7
    FSTP float ptr [ESP + 0x48]         ; 00518bd8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00518bdc
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00518be1
    XOR ESI,ESI                         ; 00518be4
    SUB EAX,0x1a                        ; 00518be6
    ADD ESP,0x4                         ; 00518be9
    CMP EAX,0xc                         ; 00518bec
    JA 0x00518bfd                       ; 00518bef
        ;   XREF to: 00518bfd (CONDITIONAL_JUMP)  ; caseD_25
    JMP dword ptr [EAX*0x4 + 0x518a74]  ; 00518bf1 | caseD_26 | caseD_25 | switchdataD_00518a74
        ;   Label: switchD
    MOV ESI,0x1                         ; 00518bf8
        ;   Label: caseD_1a
    CMP dword ptr [EBX + 0x20b64],0x7   ; 00518bfd
        ;   Label: caseD_23
    JNZ 0x00518cbd                      ; 00518c04
        ;   XREF to: 00518cbd (CONDITIONAL_JUMP)  ; LAB_00518cbd
    FLD float ptr [ESP + 0x58]          ; 00518c0a
        ;   Label: LAB_00518c0a
    FMUL double ptr [0x005cd01f]        ; 00518c0e | DAT_005cd01f
    FSTP float ptr [ESP + 0x40]         ; 00518c14
    PUSH dword ptr [ESP + 0x40]         ; 00518c18
    PUSH EBX                            ; 00518c1c
    CALL core_prye.cpp_FUN_00518cd0     ; 00518c1d
        ;   XREF to: 00518cd0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_00518cd0()
    ADD ESP,0x8                         ; 00518c22
    PUSH dword ptr [ESP + 0x40]         ; 00518c25
    PUSH EBX                            ; 00518c29
    CALL core_prye.cpp_FUN_00518cd0     ; 00518c2a
        ;   XREF to: 00518cd0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_00518cd0()
    ADD ESP,0x8                         ; 00518c2f
    PUSH dword ptr [ESP + 0x40]         ; 00518c32
    PUSH EBX                            ; 00518c36
    CALL core_prye.cpp_FUN_00518cd0     ; 00518c37
        ;   XREF to: 00518cd0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_00518cd0()
    ADD ESP,0x8                         ; 00518c3c
    PUSH dword ptr [ESP + 0x40]         ; 00518c3f
    PUSH EBX                            ; 00518c43
        ;   Label: LAB_00518c43
    CALL core_prye.cpp_FUN_00518cd0     ; 00518c44
        ;   XREF to: 00518cd0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_00518cd0()
    ADD ESP,0x8                         ; 00518c49
    MOV EBP,dword ptr [0x005fe9dc]      ; 00518c4c | g_CGamePtr
    PUSH dword ptr [ESP + 0x44]         ; 00518c52
    PUSH EBP                            ; 00518c56 | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004bf3a0 ; 00518c57
        ;   XREF to: 004bf3a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bf3a0(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00518c5c
    POP ESI                             ; 00518c5f
    ADD ESP,0x44                        ; 00518c60
        ;   Label: LAB_00518c60
    POP EBP                             ; 00518c63
    POP EBX                             ; 00518c64
    RET                                 ; 00518c65
    FLDZ                                ; 00518c66
        ;   Label: LAB_00518c66
    FCOMP float ptr [EBX + 0x3254]      ; 00518c68
    FNSTSW AX                           ; 00518c6e
    SAHF                                ; 00518c70
    JNC 0x00518c60                      ; 00518c71
        ;   XREF to: 00518c60 (CONDITIONAL_JUMP)  ; LAB_00518c60
    PUSH dword ptr [ESP + 0x54]         ; 00518c73
    PUSH EBX                            ; 00518c77
    CALL unkafter_prye.cpp_FUN_00526dc0 ; 00518c78
        ;   XREF to: 00526dc0 (UNCONDITIONAL_CALL)  ; undefined unkafter_prye.cpp_FUN_00526dc0()
    ADD ESP,0x8                         ; 00518c7d
    ADD ESP,0x44                        ; 00518c80
    POP EBP                             ; 00518c83
    POP EBX                             ; 00518c84
    RET                                 ; 00518c85
    MOV dword ptr [EBX + 0x20b90],0x0   ; 00518c86
        ;   Label: LAB_00518c86
    MOV dword ptr [EBX + 0x20b8c],0x0   ; 00518c90
    JMP 0x00518ae9                      ; 00518c9a
        ;   XREF to: 00518ae9 (UNCONDITIONAL_JUMP)  ; LAB_00518ae9
    LEA EAX,[EBX + 0x30]                ; 00518c9f
        ;   Label: LAB_00518c9f
    FLD float ptr [0x005e3504]          ; 00518ca2 | DAT_005e3504
    PUSH EAX                            ; 00518ca8
    FADD float ptr [EBX + 0x34]         ; 00518ca9
    PUSH EBX                            ; 00518cac
    FSTP float ptr [EBX + 0x34]         ; 00518cad
    CALL core_charactr.cpp_FUN_00433220 ; 00518cb0
        ;   XREF to: 00433220 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433220()
    ADD ESP,0x8                         ; 00518cb5
    JMP 0x00518bb8                      ; 00518cb8
        ;   XREF to: 00518bb8 (UNCONDITIONAL_JUMP)  ; LAB_00518bb8
    TEST ESI,ESI                        ; 00518cbd
        ;   Label: LAB_00518cbd
    JNZ 0x00518c0a                      ; 00518cbf
        ;   XREF to: 00518c0a (CONDITIONAL_JUMP)  ; LAB_00518c0a
    PUSH dword ptr [ESP + 0x58]         ; 00518cc5
    JMP 0x00518c43                      ; 00518cc9
        ;   XREF to: 00518c43 (UNCONDITIONAL_JUMP)  ; LAB_00518c43

