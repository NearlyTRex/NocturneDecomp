; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_00531cc0(CNPC *this_ptr,char *motion_name)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
;
; XREF[1]:
;   core_npc.cpp_CNPC_processDamage_FUN_00531da0 at 00531dfb
;
; Referenced Globals:
;   TerminatedCString s_s_d_005ec7d0
;   TerminatedCString s_s_d_005ec7d6
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_00524150
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531cc0
        ;   Label: core_npc.cpp_CNPC_setRandomMotionVariant_FUN_00531cc0
    PUSH ESI                            ; 00531cc1
    PUSH EDI                            ; 00531cc2
    PUSH EBP                            ; 00531cc3
    SUB ESP,0xc8                        ; 00531cc4
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00531cca
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00531cd1
    PUSH EDX                            ; 00531cd8
    XOR EBX,EBX                         ; 00531cd9
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00531cdb
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00531ce0
    MOV EBP,EAX                         ; 00531ce3
    XOR EDI,EDI                         ; 00531ce5
    LEA EAX,[EBX + 0x1]                 ; 00531ce7
        ;   Label: LAB_00531ce7
    PUSH EAX                            ; 00531cea
    PUSH ESI                            ; 00531ceb
    PUSH 0x5ec7d0                       ; 00531cec | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00531cf1
    PUSH EAX                            ; 00531cf5
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00531cf6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00531cfb
    PUSH EDI                            ; 00531cfe
    LEA EAX,[ESP + 0x4]                 ; 00531cff
    PUSH EAX                            ; 00531d03
    PUSH EBP                            ; 00531d04
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00524150 ; 00531d05
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00531d0a
    TEST EAX,EAX                        ; 00531d0d
    JL 0x00531d14                       ; 00531d0f
        ;   XREF to: 00531d14 (CONDITIONAL_JUMP)  ; LAB_00531d14
    INC EBX                             ; 00531d11
    JMP 0x00531ce7                      ; 00531d12
        ;   XREF to: 00531ce7 (UNCONDITIONAL_JUMP)  ; LAB_00531ce7
    TEST EBX,EBX                        ; 00531d14
        ;   Label: LAB_00531d14
    JZ 0x00531d58                       ; 00531d16
        ;   XREF to: 00531d58 (CONDITIONAL_JUMP)  ; LAB_00531d58
    PUSH EBX                            ; 00531d18
    PUSH 0x1                            ; 00531d19
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00531d1b
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00531d20
    PUSH EAX                            ; 00531d23
    PUSH ESI                            ; 00531d24
    PUSH 0x5ec7d6                       ; 00531d25 | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00531d2a
    PUSH EAX                            ; 00531d2e
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00531d2f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00531d34
    PUSH 0x0                            ; 00531d37
        ;   Label: LAB_00531d37
    LEA EAX,[ESP + 0x4]                 ; 00531d39
    PUSH EAX                            ; 00531d3d
    PUSH EBP                            ; 00531d3e
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00524150 ; 00531d3f
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00531d44
    TEST EAX,EAX                        ; 00531d47
    JGE 0x00531d76                      ; 00531d49
        ;   XREF to: 00531d76 (CONDITIONAL_JUMP)  ; LAB_00531d76
    XOR EAX,EAX                         ; 00531d4b
    ADD ESP,0xc8                        ; 00531d4d
    POP EBP                             ; 00531d53
    POP EDI                             ; 00531d54
    POP ESI                             ; 00531d55
    POP EBX                             ; 00531d56
    RET                                 ; 00531d57
    MOV EDI,ESP                         ; 00531d58
        ;   Label: LAB_00531d58
    PUSH EDI                            ; 00531d5a
    MOV AL,byte ptr [ESI]               ; 00531d5b
        ;   Label: LAB_00531d5b
    MOV byte ptr [EDI],AL               ; 00531d5d
    CMP AL,0x0                          ; 00531d5f
    JZ 0x00531d73                       ; 00531d61
        ;   XREF to: 00531d73 (CONDITIONAL_JUMP)  ; LAB_00531d73
    MOV AL,byte ptr [ESI + 0x1]         ; 00531d63
    ADD ESI,0x2                         ; 00531d66
    MOV byte ptr [EDI + 0x1],AL         ; 00531d69
    ADD EDI,0x2                         ; 00531d6c
    CMP AL,0x0                          ; 00531d6f
    JNZ 0x00531d5b                      ; 00531d71
        ;   XREF to: 00531d5b (CONDITIONAL_JUMP)  ; LAB_00531d5b
    POP EDI                             ; 00531d73
        ;   Label: LAB_00531d73
    JMP 0x00531d37                      ; 00531d74
        ;   XREF to: 00531d37 (UNCONDITIONAL_JUMP)  ; LAB_00531d37
    PUSH 0x1                            ; 00531d76
        ;   Label: LAB_00531d76
    PUSH EAX                            ; 00531d78
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00531d79
    PUSH ECX                            ; 00531d80
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00531d81
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 00531d86
    ADD ESP,0xc                         ; 00531d8b
    ADD ESP,0xc8                        ; 00531d8e
    POP EBP                             ; 00531d94
    POP EDI                             ; 00531d95
    POP ESI                             ; 00531d96
    POP EBX                             ; 00531d97
    RET                                 ; 00531d98

