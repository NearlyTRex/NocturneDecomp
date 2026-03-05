; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_npc_cpp_CNPC_FUN_00544c50(CNPC *this_ptr)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
;
; XREF[1]:
;   core_npc.cpp_CNPC_processDamage_FUN_00544d30 at 00544de7
;
; Referenced Globals:
;   TerminatedCString s_s_d_0063e3ac
;   TerminatedCString s_s_d_0063e3b2
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544c50
        ;   Label: core_npc.cpp_CNPC_FUN_00544c50
    PUSH ESI                            ; 00544c51
    PUSH EDI                            ; 00544c52
    PUSH EBP                            ; 00544c53
    SUB ESP,0xc8                        ; 00544c54
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00544c5a
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00544c61
    PUSH EDX                            ; 00544c68
    XOR EBX,EBX                         ; 00544c69
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 00544c6b
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00544c70
    MOV EBP,EAX                         ; 00544c73
    XOR EDI,EDI                         ; 00544c75
    LEA EAX,[EBX + 0x1]                 ; 00544c77
        ;   Label: LAB_00544c77
    PUSH EAX                            ; 00544c7a
    PUSH ESI                            ; 00544c7b
    PUSH 0x63e3ac                       ; 00544c7c | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00544c81
    PUSH EAX                            ; 00544c85
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00544c86
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00544c8b
    PUSH EDI                            ; 00544c8e
    LEA EAX,[ESP + 0x4]                 ; 00544c8f
    PUSH EAX                            ; 00544c93
    PUSH EBP                            ; 00544c94
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 00544c95
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00544c9a
    TEST EAX,EAX                        ; 00544c9d
    JL 0x00544ca4                       ; 00544c9f
        ;   XREF to: 00544ca4 (CONDITIONAL_JUMP)  ; LAB_00544ca4
    INC EBX                             ; 00544ca1
    JMP 0x00544c77                      ; 00544ca2
        ;   XREF to: 00544c77 (UNCONDITIONAL_JUMP)  ; LAB_00544c77
    TEST EBX,EBX                        ; 00544ca4
        ;   Label: LAB_00544ca4
    JZ 0x00544ce8                       ; 00544ca6
        ;   XREF to: 00544ce8 (CONDITIONAL_JUMP)  ; LAB_00544ce8
    PUSH EBX                            ; 00544ca8
    PUSH 0x1                            ; 00544ca9
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 00544cab
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 00544cb0
    PUSH EAX                            ; 00544cb3
    PUSH ESI                            ; 00544cb4
    PUSH 0x63e3b2                       ; 00544cb5 | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00544cba
    PUSH EAX                            ; 00544cbe
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00544cbf
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00544cc4
    PUSH 0x0                            ; 00544cc7
        ;   Label: LAB_00544cc7
    LEA EAX,[ESP + 0x4]                 ; 00544cc9
    PUSH EAX                            ; 00544ccd
    PUSH EBP                            ; 00544cce
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 00544ccf
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00544cd4
    TEST EAX,EAX                        ; 00544cd7
    JGE 0x00544d06                      ; 00544cd9
        ;   XREF to: 00544d06 (CONDITIONAL_JUMP)  ; LAB_00544d06
    XOR EAX,EAX                         ; 00544cdb
    ADD ESP,0xc8                        ; 00544cdd
    POP EBP                             ; 00544ce3
    POP EDI                             ; 00544ce4
    POP ESI                             ; 00544ce5
    POP EBX                             ; 00544ce6
    RET                                 ; 00544ce7
    MOV EDI,ESP                         ; 00544ce8
        ;   Label: LAB_00544ce8
    PUSH EDI                            ; 00544cea
    MOV AL,byte ptr [ESI]               ; 00544ceb
        ;   Label: LAB_00544ceb
    MOV byte ptr [EDI],AL               ; 00544ced
    CMP AL,0x0                          ; 00544cef
    JZ 0x00544d03                       ; 00544cf1
        ;   XREF to: 00544d03 (CONDITIONAL_JUMP)  ; LAB_00544d03
    MOV AL,byte ptr [ESI + 0x1]         ; 00544cf3
    ADD ESI,0x2                         ; 00544cf6
    MOV byte ptr [EDI + 0x1],AL         ; 00544cf9
    ADD EDI,0x2                         ; 00544cfc
    CMP AL,0x0                          ; 00544cff
    JNZ 0x00544ceb                      ; 00544d01
        ;   XREF to: 00544ceb (CONDITIONAL_JUMP)  ; LAB_00544ceb
    POP EDI                             ; 00544d03
        ;   Label: LAB_00544d03
    JMP 0x00544cc7                      ; 00544d04
        ;   XREF to: 00544cc7 (UNCONDITIONAL_JUMP)  ; LAB_00544cc7
    PUSH 0x1                            ; 00544d06
        ;   Label: LAB_00544d06
    PUSH EAX                            ; 00544d08
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00544d09
    PUSH ECX                            ; 00544d10
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00544d11
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 00544d16
    ADD ESP,0xc                         ; 00544d1b
    ADD ESP,0xc8                        ; 00544d1e
    POP EBP                             ; 00544d24
    POP EDI                             ; 00544d25
    POP ESI                             ; 00544d26
    POP EBX                             ; 00544d27
    RET                                 ; 00544d28

