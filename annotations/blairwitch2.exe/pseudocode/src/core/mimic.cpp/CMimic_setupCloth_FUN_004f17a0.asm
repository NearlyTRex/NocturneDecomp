; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_004f17a0(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_mimic.cpp_CMimic_process_FUN_004f08a0 at 004f09fb
;
; Referenced Globals:
;   undefined4 s_s_attacking_hero_005dd977+2
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 g_CGabriellaClassInfo.name_hash
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_cloth.cpp_FUN_005ae680
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f17a0
        ;   Label: core_mimic.cpp_CMimic_setupCloth_FUN_004f17a0
    PUSH ESI                            ; 004f17a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f17a2
    LEA EAX,[EBX + 0x2b4]               ; 004f17a6
    PUSH EAX                            ; 004f17ac
    LEA EAX,[EBX + 0x30]                ; 004f17ad
    PUSH EAX                            ; 004f17b0
    LEA EAX,[EBX + 0x20]                ; 004f17b1
    PUSH EAX                            ; 004f17b4
    LEA ESI,[EBX + 0x10bc0]             ; 004f17b5
    PUSH ESI                            ; 004f17bb
    MOV dword ptr [EBX + 0x4b6f0],0x2   ; 004f17bc
    CALL core_cloth.cpp_FUN_005ae680    ; 004f17c6
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_005ae680(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 004f17cb
    MOV EDX,dword ptr [0x01cb0700]      ; 004f17ce | g_CGabriellaClassInfo.name_hash
    MOV EAX,[0x01cedef4]                ; 004f17d4 | DAT_01cedef4
    PUSH EDX                            ; 004f17d9
    MOV ECX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f17da
    PUSH ECX                            ; 004f17e1
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004f17e2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,EAX                         ; 004f17e7
    ADD ESP,0x8                         ; 004f17e9
    TEST EAX,EAX                        ; 004f17ec
    JNZ 0x004f184b                      ; 004f17ee
        ;   XREF to: 004f184b (CONDITIONAL_JUMP)  ; LAB_004f184b
    MOV EAX,[0x01cedef4]                ; 004f17f0 | DAT_01cedef4
        ;   Label: LAB_004f17f0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f17f5
    SUB ESP,0x4                         ; 004f17fc
    FLD float ptr [EAX + 0x2bc]         ; 004f17ff
    ADD EAX,0x2b4                       ; 004f1805
    FSTP float ptr [ESP]                ; 004f180a
    PUSH EAX                            ; 004f180d
    CALL core_motion.cpp_FUN_005035c0   ; 004f180e
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004f1813
    PUSH EAX                            ; 004f1816
    LEA ESI,[EBX + 0x2b4]               ; 004f1817
    PUSH ESI                            ; 004f181d
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950 ; 004f181e
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 004f1823
    PUSH 0x1                            ; 004f1826
    PUSH 0x1                            ; 004f1828
    PUSH ESI                            ; 004f182a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004f182b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f1830
    PUSH EBX                            ; 004f1833
    PUSH 0x5dd979                       ; 004f1834 | s_s_attacking_hero_005dd977+2
    MOV EBX,dword ptr [0x00609ed0]      ; 004f1839 | g_CConsolePtr
    PUSH EBX                            ; 004f183f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004f1840
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f1845
    POP ESI                             ; 004f1848
    POP EBX                             ; 004f1849
    RET                                 ; 004f184a
    PUSH EDI                            ; 004f184b
        ;   Label: LAB_004f184b
    MOV ECX,dword ptr [ESI + 0x104]     ; 004f184c
    LEA EAX,[ECX*0x8 + 0x0]             ; 004f1852
    ADD EAX,ECX                         ; 004f1859
    SHL EAX,0x3                         ; 004f185b
    LEA EDI,[EBX + 0x10f58]             ; 004f185e
    SUB EAX,ECX                         ; 004f1864
    LEA ESI,[EDX + 0x25a18]             ; 004f1866
    LEA ECX,[EAX*0x4 + 0x0]             ; 004f186c
    PUSH EDI                            ; 004f1873
    MOV EAX,ECX                         ; 004f1874
    SHR ECX,0x2                         ; 004f1876
    MOVSD.REP ES:EDI,ESI                ; 004f1879
    MOV CL,AL                           ; 004f187b
    AND CL,0x3                          ; 004f187d
    MOVSB.REP ES:EDI,ESI                ; 004f1880
    POP EDI                             ; 004f1882
    POP EDI                             ; 004f1883
    JMP 0x004f17f0                      ; 004f1884
        ;   XREF to: 004f17f0 (UNCONDITIONAL_JUMP)  ; LAB_004f17f0

