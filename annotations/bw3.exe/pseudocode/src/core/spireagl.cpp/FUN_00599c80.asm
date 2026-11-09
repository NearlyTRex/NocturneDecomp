; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_spireagl_cpp_FUN_00599c80(CMotionController *param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
;
; XREF[1]:
;   core_spireagl.cpp_FUN_00599d60 at 00599dbb
;
; Referenced Globals:
;   TerminatedCString s_s_d_005d9a05
;   TerminatedCString s_s_d_005d9a0b
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_motion.cpp_FUN_004fba50
;   core_motion.cpp_FUN_004fc310
;   crt_unknown.c_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599c80
        ;   Label: core_spireagl.cpp_FUN_00599c80
    PUSH ESI                            ; 00599c81
    PUSH EDI                            ; 00599c82
    PUSH EBP                            ; 00599c83
    SUB ESP,0xc8                        ; 00599c84
    MOV ESI,dword ptr [ESP + 0xe0]      ; 00599c8a
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00599c91
    PUSH EDX                            ; 00599c98
    XOR EBX,EBX                         ; 00599c99
    CALL core_motion.cpp_FUN_004fc310   ; 00599c9b
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00599ca0
    MOV EBP,EAX                         ; 00599ca3
    XOR EDI,EDI                         ; 00599ca5
    LEA EAX,[EBX + 0x1]                 ; 00599ca7
        ;   Label: LAB_00599ca7
    PUSH EAX                            ; 00599caa
    PUSH ESI                            ; 00599cab
    PUSH 0x5d9a05                       ; 00599cac | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00599cb1
    PUSH EAX                            ; 00599cb5
    CALL crt_unknown.c_FUN_005a28c0     ; 00599cb6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00599cbb
    PUSH EDI                            ; 00599cbe
    LEA EAX,[ESP + 0x4]                 ; 00599cbf
    PUSH EAX                            ; 00599cc3
    PUSH EBP                            ; 00599cc4
    CALL core_motion.cpp_FUN_004fba50   ; 00599cc5
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00599cca
    TEST EAX,EAX                        ; 00599ccd
    JL 0x00599cd4                       ; 00599ccf
        ;   XREF to: 00599cd4 (CONDITIONAL_JUMP)  ; LAB_00599cd4
    INC EBX                             ; 00599cd1
    JMP 0x00599ca7                      ; 00599cd2
        ;   XREF to: 00599ca7 (UNCONDITIONAL_JUMP)  ; LAB_00599ca7
    TEST EBX,EBX                        ; 00599cd4
        ;   Label: LAB_00599cd4
    JZ 0x00599d18                       ; 00599cd6
        ;   XREF to: 00599d18 (CONDITIONAL_JUMP)  ; LAB_00599d18
    PUSH EBX                            ; 00599cd8
    PUSH 0x1                            ; 00599cd9
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00599cdb
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00599ce0
    PUSH EAX                            ; 00599ce3
    PUSH ESI                            ; 00599ce4
    PUSH 0x5d9a0b                       ; 00599ce5 | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00599cea
    PUSH EAX                            ; 00599cee
    CALL crt_unknown.c_FUN_005a28c0     ; 00599cef
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00599cf4
    PUSH 0x0                            ; 00599cf7
        ;   Label: LAB_00599cf7
    LEA EAX,[ESP + 0x4]                 ; 00599cf9
    PUSH EAX                            ; 00599cfd
    PUSH EBP                            ; 00599cfe
    CALL core_motion.cpp_FUN_004fba50   ; 00599cff
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00599d04
    TEST EAX,EAX                        ; 00599d07
    JGE 0x00599d36                      ; 00599d09
        ;   XREF to: 00599d36 (CONDITIONAL_JUMP)  ; LAB_00599d36
    XOR EAX,EAX                         ; 00599d0b
    ADD ESP,0xc8                        ; 00599d0d
    POP EBP                             ; 00599d13
    POP EDI                             ; 00599d14
    POP ESI                             ; 00599d15
    POP EBX                             ; 00599d16
    RET                                 ; 00599d17
    MOV EDI,ESP                         ; 00599d18
        ;   Label: LAB_00599d18
    PUSH EDI                            ; 00599d1a
    MOV AL,byte ptr [ESI]               ; 00599d1b
        ;   Label: LAB_00599d1b
    MOV byte ptr [EDI],AL               ; 00599d1d
    CMP AL,0x0                          ; 00599d1f
    JZ 0x00599d33                       ; 00599d21
        ;   XREF to: 00599d33 (CONDITIONAL_JUMP)  ; LAB_00599d33
    MOV AL,byte ptr [ESI + 0x1]         ; 00599d23
    ADD ESI,0x2                         ; 00599d26
    MOV byte ptr [EDI + 0x1],AL         ; 00599d29
    ADD EDI,0x2                         ; 00599d2c
    CMP AL,0x0                          ; 00599d2f
    JNZ 0x00599d1b                      ; 00599d31
        ;   XREF to: 00599d1b (CONDITIONAL_JUMP)  ; LAB_00599d1b
    POP EDI                             ; 00599d33
        ;   Label: LAB_00599d33
    JMP 0x00599cf7                      ; 00599d34
        ;   XREF to: 00599cf7 (UNCONDITIONAL_JUMP)  ; LAB_00599cf7
    PUSH 0x1                            ; 00599d36
        ;   Label: LAB_00599d36
    PUSH EAX                            ; 00599d38
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00599d39
    PUSH ECX                            ; 00599d40
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00599d41
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 00599d46
    ADD ESP,0xc                         ; 00599d4b
    ADD ESP,0xc8                        ; 00599d4e
    POP EBP                             ; 00599d54
    POP EDI                             ; 00599d55
    POP ESI                             ; 00599d56
    POP EBX                             ; 00599d57
    RET                                 ; 00599d58

