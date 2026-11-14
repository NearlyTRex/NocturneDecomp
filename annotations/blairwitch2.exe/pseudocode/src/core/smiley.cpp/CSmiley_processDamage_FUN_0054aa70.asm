; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_0054aa70(CSmiley *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_smiley_die_wav_005e785c+1
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_smiley.cpp_CSmiley_processDismemberment_FUN_0054a790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054aa70
        ;   Label: core_smiley.cpp_CSmiley_processDamage_FUN_0054aa70
    PUSH ESI                            ; 0054aa71
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054aa72
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054aa76
    CMP dword ptr [EBX + 0x10b38],0x1   ; 0054aa7a
    JNZ 0x0054ab3e                      ; 0054aa81
        ;   XREF to: 0054ab3e (CONDITIONAL_JUMP)  ; LAB_0054ab3e
    MOV ECX,dword ptr [ESI + 0x30]      ; 0054aa87
    CMP ECX,0x4                         ; 0054aa8a
    JZ 0x0054ab4f                       ; 0054aa8d
        ;   XREF to: 0054ab4f (CONDITIONAL_JUMP)  ; LAB_0054ab4f
    CMP ECX,0xb                         ; 0054aa93
    JLE 0x0054aaa4                      ; 0054aa96
        ;   XREF to: 0054aaa4 (CONDITIONAL_JUMP)  ; LAB_0054aaa4
    CMP ECX,0x6b                        ; 0054aa98
    JZ 0x0054aaa4                       ; 0054aa9b
        ;   XREF to: 0054aaa4 (CONDITIONAL_JUMP)  ; LAB_0054aaa4
    MOV dword ptr [ESI + 0x4],0x0       ; 0054aa9d
        ;   Label: LAB_0054aa9d
    FLD float ptr [ESI + 0x4]           ; 0054aaa4
        ;   Label: LAB_0054aaa4
    FLDZ                                ; 0054aaa7
    FCOMPP                              ; 0054aaa9
    FNSTSW AX                           ; 0054aaab
    SAHF                                ; 0054aaad
    JNC 0x0054aaba                      ; 0054aaae
        ;   XREF to: 0054aaba (CONDITIONAL_JUMP)  ; LAB_0054aaba
    PUSH ESI                            ; 0054aab0
    PUSH EBX                            ; 0054aab1
    CALL core_smiley.cpp_CSmiley_processDismemberment_FUN_0054a790 ; 0054aab2
        ;   XREF to: 0054a790 (UNCONDITIONAL_CALL)  ; void core_smiley.cpp_CSmiley_processDismemberment_FUN_0054a790(CSmiley * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0054aab7
    PUSH EDI                            ; 0054aaba
        ;   Label: LAB_0054aaba
    FLD float ptr [ESI + 0x4]           ; 0054aabb
    FSUBR float ptr [EBX + 0x25a8]      ; 0054aabe
    LEA EDI,[EBX + 0x2b4]               ; 0054aac4
    FST float ptr [EBX + 0x25a8]        ; 0054aaca
    FLDZ                                ; 0054aad0
    FCOMPP                              ; 0054aad2
    FNSTSW AX                           ; 0054aad4
    SAHF                                ; 0054aad6
    JC 0x0054ab5b                       ; 0054aad7
        ;   XREF to: 0054ab5b (CONDITIONAL_JUMP)  ; LAB_0054ab5b
    PUSH EDI                            ; 0054aadd
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0054aade
    CALL core_motion.cpp_FUN_005035c0   ; 0054aae8
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0054aaed
    ADD ESP,0x4                         ; 0054aaf0
    CMP EAX,0x8                         ; 0054aaf3
    JZ 0x0054ab30                       ; 0054aaf6
        ;   XREF to: 0054ab30 (CONDITIONAL_JUMP)  ; LAB_0054ab30
    CMP EAX,0x7                         ; 0054aaf8
    JZ 0x0054ab30                       ; 0054aafb
        ;   XREF to: 0054ab30 (CONDITIONAL_JUMP)  ; LAB_0054ab30
    PUSH 0x1                            ; 0054aafd
    PUSH 0x7                            ; 0054aaff
    PUSH EDI                            ; 0054ab01
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054ab02
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054ab07
    PUSH 0x0                            ; 0054ab0a
    PUSH 0x1                            ; 0054ab0c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0054ab0e
    PUSH EBX                            ; 0054ab14
    CALL dword ptr [EAX + 0x130]        ; 0054ab15
    ADD ESP,0xc                         ; 0054ab1b
    PUSH 0x5e785d                       ; 0054ab1e | s_smiley_die_wav_005e785c+1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0054ab23
    PUSH EBX                            ; 0054ab29
    CALL dword ptr [EAX + 0x34]         ; 0054ab2a
    ADD ESP,0x8                         ; 0054ab2d
    PUSH ESI                            ; 0054ab30
        ;   Label: LAB_0054ab30
    PUSH EBX                            ; 0054ab31
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0054ab32
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0054ab37
    POP EDI                             ; 0054ab3a
    POP ESI                             ; 0054ab3b
    POP EBX                             ; 0054ab3c
    RET                                 ; 0054ab3d
    MOV dword ptr [ESI + 0x30],0x64     ; 0054ab3e
        ;   Label: LAB_0054ab3e
    MOV dword ptr [ESI + 0x4],0x0       ; 0054ab45
    POP ESI                             ; 0054ab4c
    POP EBX                             ; 0054ab4d
    RET                                 ; 0054ab4e
    MOV dword ptr [ESI + 0x30],0x64     ; 0054ab4f
        ;   Label: LAB_0054ab4f
    JMP 0x0054aa9d                      ; 0054ab56
        ;   XREF to: 0054aa9d (UNCONDITIONAL_JUMP)  ; LAB_0054aa9d
    PUSH 0x1                            ; 0054ab5b
        ;   Label: LAB_0054ab5b
    PUSH 0x3                            ; 0054ab5d
    PUSH EDI                            ; 0054ab5f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0054ab60
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054ab65
    PUSH ESI                            ; 0054ab68
    PUSH EBX                            ; 0054ab69
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0054ab6a
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0054ab6f
    POP EDI                             ; 0054ab72
    POP ESI                             ; 0054ab73
    POP EBX                             ; 0054ab74
    RET                                 ; 0054ab75

