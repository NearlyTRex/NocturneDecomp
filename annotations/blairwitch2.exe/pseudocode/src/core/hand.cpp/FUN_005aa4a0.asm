; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_hand_cpp_FUN_005aa4a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f0adf
;   TerminatedCString s_sleep_005f0ae4
;   undefined4 DAT_005f0aea
;
; Called Functions:
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_00503e60
;   crt_string.c__strcmp_FUN_005b8c30
;   unkafter_basicene.cpp_FUN_0059f980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa4a0
        ;   Label: core_hand.cpp_FUN_005aa4a0
    PUSH ESI                            ; 005aa4a1
    PUSH EBP                            ; 005aa4a2
    MOV EBP,ESP                         ; 005aa4a3
    SUB ESP,0x4                         ; 005aa4a5
    MOV EBX,dword ptr [EBP + 0x10]      ; 005aa4a8
    LEA ESI,[EBX + 0x2b4]               ; 005aa4ab
    PUSH ESI                            ; 005aa4b1
    MOV dword ptr [EBX + 0x113c4],0x3f800000 ; 005aa4b2
    CALL core_motion.cpp_FUN_005035c0   ; 005aa4bc
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005aa4c1
    ADD ESP,0x4                         ; 005aa4c4
    TEST EAX,EAX                        ; 005aa4c7
    JNZ 0x005aa564                      ; 005aa4c9
        ;   XREF to: 005aa564 (CONDITIONAL_JUMP)  ; LAB_005aa564
    MOV dword ptr [EBX + 0x113c4],0x0   ; 005aa4cf
        ;   Label: LAB_005aa4cf
    PUSH 0x5f0adf                       ; 005aa4d9 | DAT_005f0adf
        ;   Label: LAB_005aa4d9
    LEA ESI,[EBX + 0x2b4]               ; 005aa4de
    PUSH ESI                            ; 005aa4e4
    CALL core_motion.cpp_FUN_005035c0   ; 005aa4e5
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 005aa4ea
    PUSH EAX                            ; 005aa4ed
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 005aa4ee
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 005aa4f3
    TEST EAX,EAX                        ; 005aa4f6
    JNZ 0x005aa50f                      ; 005aa4f8
        ;   XREF to: 005aa50f (CONDITIONAL_JUMP)  ; LAB_005aa50f
    PUSH ESI                            ; 005aa4fa
    CALL core_motion.cpp_FUN_00503e60   ; 005aa4fb
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + -0x4],EAX      ; 005aa500
    ADD ESP,0x4                         ; 005aa503
    MOV EAX,dword ptr [EBP + -0x4]      ; 005aa506
    MOV dword ptr [EBX + 0x113c4],EAX   ; 005aa509
    PUSH 0x5f0ae4                       ; 005aa50f | = "sleep"
        ;   Label: LAB_005aa50f
    LEA ESI,[EBX + 0x2b4]               ; 005aa514
    PUSH ESI                            ; 005aa51a
    CALL core_motion.cpp_FUN_005035c0   ; 005aa51b
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 005aa520
    PUSH EAX                            ; 005aa523
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 005aa524
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 005aa529
    TEST EAX,EAX                        ; 005aa52c
    JZ 0x005aa57e                       ; 005aa52e
        ;   XREF to: 005aa57e (CONDITIONAL_JUMP)  ; LAB_005aa57e
    PUSH 0x5f0aea                       ; 005aa530 | DAT_005f0aea
    PUSH ESI                            ; 005aa535
    CALL core_motion.cpp_FUN_005035c0   ; 005aa536
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 005aa53b
    PUSH EAX                            ; 005aa53e
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 005aa53f
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 005aa544
    TEST EAX,EAX                        ; 005aa547
    JZ 0x005aa57e                       ; 005aa549
        ;   XREF to: 005aa57e (CONDITIONAL_JUMP)  ; LAB_005aa57e
    PUSH EBX                            ; 005aa54b
        ;   Label: LAB_005aa54b
    CALL unkafter_basicene.cpp_FUN_0059f980 ; 005aa54c
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f980()
    ADD ESP,0x4                         ; 005aa551
    TEST EAX,EAX                        ; 005aa554
    SETNZ AL                            ; 005aa556
    AND EAX,0xff                        ; 005aa559
    MOV ESP,EBP                         ; 005aa55e
    POP EBP                             ; 005aa560
    POP ESI                             ; 005aa561
    POP EBX                             ; 005aa562
    RET                                 ; 005aa563
    PUSH ESI                            ; 005aa564
        ;   Label: LAB_005aa564
    CALL core_motion.cpp_FUN_005035c0   ; 005aa565
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005aa56a
    ADD ESP,0x4                         ; 005aa56d
    CMP EAX,0x6                         ; 005aa570
    JZ 0x005aa4cf                       ; 005aa573
        ;   XREF to: 005aa4cf (CONDITIONAL_JUMP)  ; LAB_005aa4cf
    JMP 0x005aa4d9                      ; 005aa579
        ;   XREF to: 005aa4d9 (UNCONDITIONAL_JUMP)  ; LAB_005aa4d9
    LEA EAX,[EBX + 0x2b4]               ; 005aa57e
        ;   Label: LAB_005aa57e
    PUSH EAX                            ; 005aa584
    CALL core_motion.cpp_FUN_00503e60   ; 005aa585
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + -0x4],EAX      ; 005aa58a
    FLD float ptr [EBP + -0x4]          ; 005aa58d
    FLD1                                ; 005aa590
    FSUBRP                              ; 005aa592
    ADD ESP,0x4                         ; 005aa594
    FSTP float ptr [EBX + 0x113c4]      ; 005aa597
    JMP 0x005aa54b                      ; 005aa59d
        ;   XREF to: 005aa54b (UNCONDITIONAL_JUMP)  ; LAB_005aa54b

