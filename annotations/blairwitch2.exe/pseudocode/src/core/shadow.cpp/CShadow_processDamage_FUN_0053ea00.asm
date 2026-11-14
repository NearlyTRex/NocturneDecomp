; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadow_cpp_CShadow_processDamage_FUN_0053ea00(CShadow *this_ptr,SDamageInfo *param_2)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_005e6795
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_shadow.cpp_FUN_0053df40
;   core_shadow.cpp_FUN_0053e000
;   core_shadow.cpp_FUN_0053e040
;   core_shadow.cpp_FUN_0053e9a0
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ea00
        ;   Label: core_shadow.cpp_CShadow_processDamage_FUN_0053ea00
    PUSH ESI                            ; 0053ea01
    PUSH EDI                            ; 0053ea02
    PUSH EBP                            ; 0053ea03
    SUB ESP,0x34                        ; 0053ea04
    MOV EBX,dword ptr [ESP + 0x48]      ; 0053ea07
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0053ea0b
    PUSH EBP                            ; 0053ea0f
    PUSH EBX                            ; 0053ea10
    CALL core_shadow.cpp_FUN_0053e9a0   ; 0053ea11
        ;   XREF to: 0053e9a0 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053e9a0()
    ADD ESP,0x8                         ; 0053ea16
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 0053ea19
    PUSH EDX                            ; 0053ea1f
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0053ea20
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    MOV ECX,dword ptr [EBP + 0x30]      ; 0053ea25
    ADD ESP,0x4                         ; 0053ea28
    CMP ECX,0x6c                        ; 0053ea2b
    JZ 0x0053eaea                       ; 0053ea2e
        ;   XREF to: 0053eaea (CONDITIONAL_JUMP)  ; LAB_0053eaea
    FLD float ptr [EBP + 0x4]           ; 0053ea34
        ;   Label: LAB_0053ea34
    LEA EAX,[EBX + 0x2b4]               ; 0053ea37
    FSUBR float ptr [EBX + 0x25a8]      ; 0053ea3d
    MOV dword ptr [ESP + 0x2c],EAX      ; 0053ea43
    FST float ptr [EBX + 0x25a8]        ; 0053ea47
    FLDZ                                ; 0053ea4d
    FCOMPP                              ; 0053ea4f
    FNSTSW AX                           ; 0053ea51
    SAHF                                ; 0053ea53
    JNC 0x0053eb35                      ; 0053ea54
        ;   XREF to: 0053eb35 (CONDITIONAL_JUMP)  ; LAB_0053eb35
    CMP dword ptr [EBX + 0x10af8],0x2   ; 0053ea5a
    JZ 0x0053eacf                       ; 0053ea61
        ;   XREF to: 0053eacf (CONDITIONAL_JUMP)  ; LAB_0053eacf
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053ea63
    PUSH EDI                            ; 0053ea67
    CALL core_motion.cpp_FUN_005035c0   ; 0053ea68
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053ea6d
    ADD ESP,0x4                         ; 0053ea70
    TEST EAX,EAX                        ; 0053ea73
    JNZ 0x0053ebda                      ; 0053ea75
        ;   XREF to: 0053ebda (CONDITIONAL_JUMP)  ; LAB_0053ebda
    PUSH 0x2                            ; 0053ea7b
        ;   Label: LAB_0053ea7b
    PUSH 0x0                            ; 0053ea7d
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0053ea7f
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0053ea84
    MOV ESI,EAX                         ; 0053ea87
    TEST EAX,EAX                        ; 0053ea89
    JNZ 0x0053eaa0                      ; 0053ea8b
        ;   XREF to: 0053eaa0 (CONDITIONAL_JUMP)  ; LAB_0053eaa0
    PUSH 0x1                            ; 0053ea8d
    PUSH 0x11                           ; 0053ea8f
    LEA EAX,[EBX + 0x2b4]               ; 0053ea91
    PUSH EAX                            ; 0053ea97
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053ea98
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053ea9d
    CMP ESI,0x1                         ; 0053eaa0
        ;   Label: LAB_0053eaa0
    JNZ 0x0053eab7                      ; 0053eaa3
        ;   XREF to: 0053eab7 (CONDITIONAL_JUMP)  ; LAB_0053eab7
    PUSH ESI                            ; 0053eaa5
    PUSH 0x12                           ; 0053eaa6
    LEA EAX,[EBX + 0x2b4]               ; 0053eaa8
    PUSH EAX                            ; 0053eaae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053eaaf
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053eab4
    CMP ESI,0x2                         ; 0053eab7
        ;   Label: LAB_0053eab7
    JNZ 0x0053eacf                      ; 0053eaba
        ;   XREF to: 0053eacf (CONDITIONAL_JUMP)  ; LAB_0053eacf
    PUSH 0x1                            ; 0053eabc
    PUSH 0x13                           ; 0053eabe
    LEA EAX,[EBX + 0x2b4]               ; 0053eac0
    PUSH EAX                            ; 0053eac6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053eac7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053eacc
    PUSH EBX                            ; 0053eacf
        ;   Label: LAB_0053eacf
    CALL core_shadow.cpp_FUN_0053e000   ; 0053ead0
        ;   XREF to: 0053e000 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053e000()
    ADD ESP,0x4                         ; 0053ead5
        ;   Label: LAB_0053ead5
    PUSH EBP                            ; 0053ead8
        ;   Label: LAB_0053ead8
    PUSH EBX                            ; 0053ead9
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0053eada
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0053eadf
    ADD ESP,0x34                        ; 0053eae2
    POP EBP                             ; 0053eae5
    POP EDI                             ; 0053eae6
    POP ESI                             ; 0053eae7
    POP EBX                             ; 0053eae8
    RET                                 ; 0053eae9
    PUSH EBX                            ; 0053eaea
        ;   Label: LAB_0053eaea
    CALL core_shadow.cpp_FUN_0053df40   ; 0053eaeb
        ;   XREF to: 0053df40 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053df40()
    ADD ESP,0x4                         ; 0053eaf0
    PUSH 0x41f00000                     ; 0053eaf3
    PUSH 0x41700000                     ; 0053eaf8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0053eafd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 0053eb02
    FLD float ptr [ESP + 0x38]          ; 0053eb06
    FMUL double ptr [0x005e6795]        ; 0053eb0a | DAT_005e6795
    LEA EAX,[EBP + 0x1c]                ; 0053eb10
    ADD ESP,0x8                         ; 0053eb13
    FLD float ptr [EBP + 0x4]           ; 0053eb16
    FXCH                                ; 0053eb19
    FMUL ST1                            ; 0053eb1b
    PUSH EAX                            ; 0053eb1d
    LEA ESI,[ESP + 0x1c]                ; 0053eb1e
    PUSH EBX                            ; 0053eb22
    FSTP ST1                            ; 0053eb23
    FSTP float ptr [EBP + 0x4]          ; 0053eb25
    CALL core_actor.cpp_FUN_00408d70    ; 0053eb28
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0053eb2d
    JMP 0x0053ea34                      ; 0053eb30
        ;   XREF to: 0053ea34 (UNCONDITIONAL_JUMP)  ; LAB_0053ea34
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053eb35
        ;   Label: LAB_0053eb35
    PUSH EAX                            ; 0053eb39
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0053eb3a
    CALL core_motion.cpp_FUN_005035c0   ; 0053eb44
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0053eb49
    ADD ESP,0x4                         ; 0053eb4c
    CMP EAX,0xf                         ; 0053eb4f
    JZ 0x0053ead8                       ; 0053eb52
        ;   XREF to: 0053ead8 (CONDITIONAL_JUMP)  ; LAB_0053ead8
    CMP EAX,0xd                         ; 0053eb54
    JZ 0x0053ead8                       ; 0053eb57
        ;   XREF to: 0053ead8 (CONDITIONAL_JUMP)  ; LAB_0053ead8
    CMP EAX,0x10                        ; 0053eb5d
    JZ 0x0053ead8                       ; 0053eb60
        ;   XREF to: 0053ead8 (CONDITIONAL_JUMP)  ; LAB_0053ead8
    CMP EAX,0xe                         ; 0053eb66
    JZ 0x0053ead8                       ; 0053eb69
        ;   XREF to: 0053ead8 (CONDITIONAL_JUMP)  ; LAB_0053ead8
    MOV EAX,[0x01cedef4]                ; 0053eb6f | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0053eb74
    ADD EAX,0x20                        ; 0053eb7b
    PUSH EAX                            ; 0053eb7e
    PUSH EBX                            ; 0053eb7f
    LEA ESI,[ESP + 0x8]                 ; 0053eb80
    LEA EDI,[ESP + 0x14]                ; 0053eb84
    CALL core_actor.cpp_FUN_00408de0    ; 0053eb88
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x8]                 ; 0053eb8d
    ADD ESP,0x8                         ; 0053eb91
    MOVSD ES:EDI,ESI                    ; 0053eb94
    MOVSD ES:EDI,ESI                    ; 0053eb95
    MOVSD ES:EDI,ESI                    ; 0053eb96
    FLDZ                                ; 0053eb97
    FCOMP float ptr [ESP + 0x14]        ; 0053eb99
    FNSTSW AX                           ; 0053eb9d
    SAHF                                ; 0053eb9f
    JC 0x0053ebbe                       ; 0053eba0
        ;   XREF to: 0053ebbe (CONDITIONAL_JUMP)  ; LAB_0053ebbe
    PUSH 0x1                            ; 0053eba2
    PUSH 0xe                            ; 0053eba4
    MOV EDX,dword ptr [ESP + 0x34]      ; 0053eba6
    PUSH EDX                            ; 0053ebaa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053ebab
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053ebb0
    PUSH EBX                            ; 0053ebb3
    CALL core_shadow.cpp_FUN_0053e040   ; 0053ebb4
        ;   XREF to: 0053e040 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053e040()
    JMP 0x0053ead5                      ; 0053ebb9
        ;   XREF to: 0053ead5 (UNCONDITIONAL_JUMP)  ; LAB_0053ead5
    PUSH 0x1                            ; 0053ebbe
        ;   Label: LAB_0053ebbe
    PUSH 0xd                            ; 0053ebc0
    MOV ECX,dword ptr [ESP + 0x34]      ; 0053ebc2
    PUSH ECX                            ; 0053ebc6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0053ebc7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053ebcc
    PUSH EBX                            ; 0053ebcf
    CALL core_shadow.cpp_FUN_0053e040   ; 0053ebd0
        ;   XREF to: 0053e040 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_0053e040()
    JMP 0x0053ead5                      ; 0053ebd5
        ;   XREF to: 0053ead5 (UNCONDITIONAL_JUMP)  ; LAB_0053ead5
    CMP EAX,0x5                         ; 0053ebda
        ;   Label: LAB_0053ebda
    JZ 0x0053ea7b                       ; 0053ebdd
        ;   XREF to: 0053ea7b (CONDITIONAL_JUMP)  ; LAB_0053ea7b
    CMP EAX,0xc                         ; 0053ebe3
    JZ 0x0053ea7b                       ; 0053ebe6
        ;   XREF to: 0053ea7b (CONDITIONAL_JUMP)  ; LAB_0053ea7b
    CMP EAX,0x6                         ; 0053ebec
    JZ 0x0053ea7b                       ; 0053ebef
        ;   XREF to: 0053ea7b (CONDITIONAL_JUMP)  ; LAB_0053ea7b
    CMP EAX,0x7                         ; 0053ebf5
    JZ 0x0053ea7b                       ; 0053ebf8
        ;   XREF to: 0053ea7b (CONDITIONAL_JUMP)  ; LAB_0053ea7b
    CMP EAX,0x8                         ; 0053ebfe
    JZ 0x0053ea7b                       ; 0053ec01
        ;   XREF to: 0053ea7b (CONDITIONAL_JUMP)  ; LAB_0053ea7b
    CMP EAX,0x9                         ; 0053ec07
    JZ 0x0053ea7b                       ; 0053ec0a
        ;   XREF to: 0053ea7b (CONDITIONAL_JUMP)  ; LAB_0053ea7b
    JMP 0x0053eacf                      ; 0053ec10
        ;   XREF to: 0053eacf (UNCONDITIONAL_JUMP)  ; LAB_0053eacf

