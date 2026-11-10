; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_bird_cpp_FUN_00415830(CMotionController *param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
;
; XREF[1]:
;   core_bird.cpp_CBird_processDamage_FUN_00415910 at 0041596b
;
; Referenced Globals:
;   TerminatedCString s_s_d_005d3d5e
;   TerminatedCString s_s_d_005d3d64
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

    PUSH EBX                            ; 00415830
        ;   Label: unkafter_bird.cpp_FUN_00415830
    PUSH ESI                            ; 00415831
    PUSH EDI                            ; 00415832
    PUSH EBP                            ; 00415833
    SUB ESP,0xc8                        ; 00415834
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0041583a
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00415841
    PUSH EDX                            ; 00415848
    XOR EBX,EBX                         ; 00415849
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 0041584b
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00415850
    MOV EBP,EAX                         ; 00415853
    XOR EDI,EDI                         ; 00415855
    LEA EAX,[EBX + 0x1]                 ; 00415857
        ;   Label: LAB_00415857
    PUSH EAX                            ; 0041585a
    PUSH ESI                            ; 0041585b
    PUSH 0x5d3d5e                       ; 0041585c | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 00415861
    PUSH EAX                            ; 00415865
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00415866
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 0041586b
    PUSH EDI                            ; 0041586e
    LEA EAX,[ESP + 0x4]                 ; 0041586f
    PUSH EAX                            ; 00415873
    PUSH EBP                            ; 00415874
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00524150 ; 00415875
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0041587a
    TEST EAX,EAX                        ; 0041587d
    JL 0x00415884                       ; 0041587f
        ;   XREF to: 00415884 (CONDITIONAL_JUMP)  ; LAB_00415884
    INC EBX                             ; 00415881
    JMP 0x00415857                      ; 00415882
        ;   XREF to: 00415857 (UNCONDITIONAL_JUMP)  ; LAB_00415857
    TEST EBX,EBX                        ; 00415884
        ;   Label: LAB_00415884
    JZ 0x004158c8                       ; 00415886
        ;   XREF to: 004158c8 (CONDITIONAL_JUMP)  ; LAB_004158c8
    PUSH EBX                            ; 00415888
    PUSH 0x1                            ; 00415889
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0041588b
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00415890
    PUSH EAX                            ; 00415893
    PUSH ESI                            ; 00415894
    PUSH 0x5d3d64                       ; 00415895 | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 0041589a
    PUSH EAX                            ; 0041589e
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0041589f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004158a4
    PUSH 0x0                            ; 004158a7
        ;   Label: LAB_004158a7
    LEA EAX,[ESP + 0x4]                 ; 004158a9
    PUSH EAX                            ; 004158ad
    PUSH EBP                            ; 004158ae
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_00524150 ; 004158af
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004158b4
    TEST EAX,EAX                        ; 004158b7
    JGE 0x004158e6                      ; 004158b9
        ;   XREF to: 004158e6 (CONDITIONAL_JUMP)  ; LAB_004158e6
    XOR EAX,EAX                         ; 004158bb
    ADD ESP,0xc8                        ; 004158bd
    POP EBP                             ; 004158c3
    POP EDI                             ; 004158c4
    POP ESI                             ; 004158c5
    POP EBX                             ; 004158c6
    RET                                 ; 004158c7
    MOV EDI,ESP                         ; 004158c8
        ;   Label: LAB_004158c8
    PUSH EDI                            ; 004158ca
    MOV AL,byte ptr [ESI]               ; 004158cb
        ;   Label: LAB_004158cb
    MOV byte ptr [EDI],AL               ; 004158cd
    CMP AL,0x0                          ; 004158cf
    JZ 0x004158e3                       ; 004158d1
        ;   XREF to: 004158e3 (CONDITIONAL_JUMP)  ; LAB_004158e3
    MOV AL,byte ptr [ESI + 0x1]         ; 004158d3
    ADD ESI,0x2                         ; 004158d6
    MOV byte ptr [EDI + 0x1],AL         ; 004158d9
    ADD EDI,0x2                         ; 004158dc
    CMP AL,0x0                          ; 004158df
    JNZ 0x004158cb                      ; 004158e1
        ;   XREF to: 004158cb (CONDITIONAL_JUMP)  ; LAB_004158cb
    POP EDI                             ; 004158e3
        ;   Label: LAB_004158e3
    JMP 0x004158a7                      ; 004158e4
        ;   XREF to: 004158a7 (UNCONDITIONAL_JUMP)  ; LAB_004158a7
    PUSH 0x1                            ; 004158e6
        ;   Label: LAB_004158e6
    PUSH EAX                            ; 004158e8
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004158e9
    PUSH ECX                            ; 004158f0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004158f1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004158f6
    ADD ESP,0xc                         ; 004158fb
    ADD ESP,0xc8                        ; 004158fe
    POP EBP                             ; 00415904
    POP EDI                             ; 00415905
    POP ESI                             ; 00415906
    POP EBX                             ; 00415907
    RET                                 ; 00415908

