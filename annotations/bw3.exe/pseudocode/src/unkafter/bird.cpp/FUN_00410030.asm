; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_bird_cpp_FUN_00410030(CMotionController *param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
;
; XREF[1]:
;   unkafter_bird.cpp_FUN_00410110 at 0041016b
;
; Referenced Globals:
;   TerminatedCString s_s_d_005b6446
;   TerminatedCString s_s_d_005b644c
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

    PUSH EBX                            ; 00410030
        ;   Label: unkafter_bird.cpp_FUN_00410030
    PUSH ESI                            ; 00410031
    PUSH EDI                            ; 00410032
    PUSH EBP                            ; 00410033
    SUB ESP,0xc8                        ; 00410034
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0041003a
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00410041
    PUSH EDX                            ; 00410048
    XOR EBX,EBX                         ; 00410049
    CALL core_motion.cpp_FUN_004fc310   ; 0041004b
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00410050
    MOV EBP,EAX                         ; 00410053
    XOR EDI,EDI                         ; 00410055
    LEA EAX,[EBX + 0x1]                 ; 00410057
        ;   Label: LAB_00410057
    PUSH EAX                            ; 0041005a
    PUSH ESI                            ; 0041005b
    PUSH 0x5b6446                       ; 0041005c | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00410061
    PUSH EAX                            ; 00410065
    CALL crt_unknown.c_FUN_005a28c0     ; 00410066
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 0041006b
    PUSH EDI                            ; 0041006e
    LEA EAX,[ESP + 0x4]                 ; 0041006f
    PUSH EAX                            ; 00410073
    PUSH EBP                            ; 00410074
    CALL core_motion.cpp_FUN_004fba50   ; 00410075
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0041007a
    TEST EAX,EAX                        ; 0041007d
    JL 0x00410084                       ; 0041007f
        ;   XREF to: 00410084 (CONDITIONAL_JUMP)  ; LAB_00410084
    INC EBX                             ; 00410081
    JMP 0x00410057                      ; 00410082
        ;   XREF to: 00410057 (UNCONDITIONAL_JUMP)  ; LAB_00410057
    TEST EBX,EBX                        ; 00410084
        ;   Label: LAB_00410084
    JZ 0x004100c8                       ; 00410086
        ;   XREF to: 004100c8 (CONDITIONAL_JUMP)  ; LAB_004100c8
    PUSH EBX                            ; 00410088
    PUSH 0x1                            ; 00410089
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0041008b
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00410090
    PUSH EAX                            ; 00410093
    PUSH ESI                            ; 00410094
    PUSH 0x5b644c                       ; 00410095 | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 0041009a
    PUSH EAX                            ; 0041009e
    CALL crt_unknown.c_FUN_005a28c0     ; 0041009f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004100a4
    PUSH 0x0                            ; 004100a7
        ;   Label: LAB_004100a7
    LEA EAX,[ESP + 0x4]                 ; 004100a9
    PUSH EAX                            ; 004100ad
    PUSH EBP                            ; 004100ae
    CALL core_motion.cpp_FUN_004fba50   ; 004100af
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004100b4
    TEST EAX,EAX                        ; 004100b7
    JGE 0x004100e6                      ; 004100b9
        ;   XREF to: 004100e6 (CONDITIONAL_JUMP)  ; LAB_004100e6
    XOR EAX,EAX                         ; 004100bb
    ADD ESP,0xc8                        ; 004100bd
    POP EBP                             ; 004100c3
    POP EDI                             ; 004100c4
    POP ESI                             ; 004100c5
    POP EBX                             ; 004100c6
    RET                                 ; 004100c7
    MOV EDI,ESP                         ; 004100c8
        ;   Label: LAB_004100c8
    PUSH EDI                            ; 004100ca
    MOV AL,byte ptr [ESI]               ; 004100cb
        ;   Label: LAB_004100cb
    MOV byte ptr [EDI],AL               ; 004100cd
    CMP AL,0x0                          ; 004100cf
    JZ 0x004100e3                       ; 004100d1
        ;   XREF to: 004100e3 (CONDITIONAL_JUMP)  ; LAB_004100e3
    MOV AL,byte ptr [ESI + 0x1]         ; 004100d3
    ADD ESI,0x2                         ; 004100d6
    MOV byte ptr [EDI + 0x1],AL         ; 004100d9
    ADD EDI,0x2                         ; 004100dc
    CMP AL,0x0                          ; 004100df
    JNZ 0x004100cb                      ; 004100e1
        ;   XREF to: 004100cb (CONDITIONAL_JUMP)  ; LAB_004100cb
    POP EDI                             ; 004100e3
        ;   Label: LAB_004100e3
    JMP 0x004100a7                      ; 004100e4
        ;   XREF to: 004100a7 (UNCONDITIONAL_JUMP)  ; LAB_004100a7
    PUSH 0x1                            ; 004100e6
        ;   Label: LAB_004100e6
    PUSH EAX                            ; 004100e8
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004100e9
    PUSH ECX                            ; 004100f0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004100f1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004100f6
    ADD ESP,0xc                         ; 004100fb
    ADD ESP,0xc8                        ; 004100fe
    POP EBP                             ; 00410104
    POP EDI                             ; 00410105
    POP ESI                             ; 00410106
    POP EBX                             ; 00410107
    RET                                 ; 00410108

