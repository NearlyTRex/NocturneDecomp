; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004996b0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_gb_die_1_6_wav_00582262
;   TerminatedCString s_gb_hit_1_6_wav_00582272
;   float FLOAT_00582282 = 50
;   float FLOAT_0059dcb4 = 0.5
;   undefined4 DAT_005b9354
;   undefined4 DAT_005b96c4
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c776ac
;   undefined4 DAT_01c777bc
;   undefined4 DAT_01c77818
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   FUN_004a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004996b0
        ;   Label: FUN_004996b0
    PUSH ESI                            ; 004996b1
    PUSH EDI                            ; 004996b2
    PUSH EBP                            ; 004996b3
    MOV EBP,ESP                         ; 004996b4
    SUB ESP,0x4                         ; 004996b6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004996b9
    MOV ESI,dword ptr [EBP + 0x18]      ; 004996bc
    TEST dword ptr [EBX + 0xbc8c],0x7fffffff ; 004996bf
    JNZ 0x00499817                      ; 004996c9
        ;   XREF to: 00499817 (CONDITIONAL_JUMP)  ; LAB_00499817
    MOV EAX,[0x005b9354]                ; 004996cf | DAT_005b9354
        ;   Label: LAB_004996cf
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004996d4 | DAT_01c777bc
    JZ 0x004996e4                       ; 004996db
        ;   XREF to: 004996e4 (CONDITIONAL_JUMP)  ; LAB_004996e4
    MOV dword ptr [ESI + 0x4],0x0       ; 004996dd
    MOV EAX,[0x005b9354]                ; 004996e4 | DAT_005b9354
        ;   Label: LAB_004996e4
    MOV EDI,dword ptr [EAX + 0x22c]     ; 004996e9 | DAT_01c77818
    TEST EDI,EDI                        ; 004996ef
    JZ 0x00499823                       ; 004996f1
        ;   XREF to: 00499823 (CONDITIONAL_JUMP)  ; LAB_00499823
    MOV EAX,[0x0059dcb4]                ; 004996f7 | FLOAT_0059dcb4
        ;   Label: LAB_004996f7
    MOV dword ptr [EBX + 0xbc8c],EAX    ; 004996fc
    FLD float ptr [ESI + 0x4]           ; 00499702
    FSUBR float ptr [EBX + 0x2434]      ; 00499705
    LEA EDI,[EBX + 0x150]               ; 0049970b
    FST float ptr [EBX + 0x2434]        ; 00499711
    FLDZ                                ; 00499717
    FCOMPP                              ; 00499719
    FNSTSW AX                           ; 0049971b
    SAHF                                ; 0049971d
    JC 0x0049982b                       ; 0049971e
        ;   XREF to: 0049982b (CONDITIONAL_JUMP)  ; LAB_0049982b
    PUSH EDI                            ; 00499724
    MOV dword ptr [EBX + 0x2434],0x0    ; 00499725
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0049972f
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00499734
    ADD ESP,0x4                         ; 00499737
    CMP EAX,0xc                         ; 0049973a
    JZ 0x004997f6                       ; 0049973d
        ;   XREF to: 004997f6 (CONDITIONAL_JUMP)  ; LAB_004997f6
    PUSH EDI                            ; 00499743
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00499744
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00499749
    ADD ESP,0x4                         ; 0049974c
    CMP EAX,0xb                         ; 0049974f
    JZ 0x004997f6                       ; 00499752
        ;   XREF to: 004997f6 (CONDITIONAL_JUMP)  ; LAB_004997f6
    PUSH 0x1                            ; 00499758
    PUSH 0x42c80000                     ; 0049975a
    PUSH 0x0                            ; 0049975f
    MOV dword ptr [EBX + 0x2590],0x0    ; 00499761
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0049976b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + -0x4],EAX      ; 00499770
    ADD ESP,0x8                         ; 00499773
    FLD float ptr [EBP + -0x4]          ; 00499776
    FCOMP float ptr [0x00582282]        ; 00499779 | FLOAT_00582282
    FNSTSW AX                           ; 0049977f
    SAHF                                ; 00499781
    SETBE AL                            ; 00499782
    AND EAX,0xff                        ; 00499785
    ADD EAX,0x9                         ; 0049978a
    PUSH EAX                            ; 0049978d
    LEA EAX,[EBX + 0x150]               ; 0049978e
    PUSH EAX                            ; 00499794
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00499795
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    MOV EAX,[0x005b9354]                ; 0049979a | DAT_005b9354
    MOV ECX,dword ptr [EAX + 0xc0]      ; 0049979f | DAT_01c776ac
    ADD ESP,0xc                         ; 004997a5
    CMP ECX,0x2                         ; 004997a8
    JZ 0x004997dd                       ; 004997ab
        ;   XREF to: 004997dd (CONDITIONAL_JUMP)  ; LAB_004997dd
    PUSH 0x3ecccccd                     ; 004997ad
    PUSH 0x3e800000                     ; 004997b2
    MOV EDI,dword ptr [EBX + 0x14c]     ; 004997b7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004997bd
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    ADD ESP,0x8                         ; 004997c2
    MOV dword ptr [EBP + -0x4],EAX      ; 004997c5
    SUB ESP,0x4                         ; 004997c8
    MOV EAX,dword ptr [EBP + -0x4]      ; 004997cb
    MOV dword ptr [ESP],EAX             ; 004997ce
    PUSH 0x582262                       ; 004997d1 | = "gb-die[1,6].wav"
    PUSH EBX                            ; 004997d6
    CALL dword ptr [EDI + 0x2c]         ; 004997d7
    ADD ESP,0xc                         ; 004997da
    PUSH 0x0                            ; 004997dd
        ;   Label: LAB_004997dd
    PUSH 0x42480000                     ; 004997df
    PUSH 0x32                           ; 004997e4
    PUSH EBX                            ; 004997e6
    MOV EDI,dword ptr [0x005b96c4]      ; 004997e7 | DAT_005b96c4
    PUSH EDI                            ; 004997ed
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670 ; 004997ee
        ;   XREF to: 004b0670 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670()
    ADD ESP,0x14                        ; 004997f3
    FLD float ptr [ESI + 0x4]           ; 004997f6
        ;   Label: LAB_004997f6
    FLDZ                                ; 004997f9
    FCOMPP                              ; 004997fb
    FNSTSW AX                           ; 004997fd
    SAHF                                ; 004997ff
    JC 0x00499892                       ; 00499800
        ;   XREF to: 00499892 (CONDITIONAL_JUMP)  ; LAB_00499892
    PUSH ESI                            ; 00499806
    PUSH EBX                            ; 00499807
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 00499808
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 0049980d
    MOV ESP,EBP                         ; 00499810
    POP EBP                             ; 00499812
    POP EDI                             ; 00499813
    POP ESI                             ; 00499814
    POP EBX                             ; 00499815
    RET                                 ; 00499816
    MOV dword ptr [ESI + 0x4],0x0       ; 00499817
        ;   Label: LAB_00499817
    JMP 0x004996cf                      ; 0049981e
        ;   XREF to: 004996cf (UNCONDITIONAL_JUMP)  ; LAB_004996cf
    MOV dword ptr [ESI + 0x4],EDI       ; 00499823
        ;   Label: LAB_00499823
    JMP 0x004996f7                      ; 00499826
        ;   XREF to: 004996f7 (UNCONDITIONAL_JUMP)  ; LAB_004996f7
    FLD float ptr [ESI + 0x4]           ; 0049982b
        ;   Label: LAB_0049982b
    FLDZ                                ; 0049982e
    FCOMPP                              ; 00499830
    FNSTSW AX                           ; 00499832
    SAHF                                ; 00499834
    JNC 0x004997f6                      ; 00499835
        ;   XREF to: 004997f6 (CONDITIONAL_JUMP)  ; LAB_004997f6
    CMP dword ptr [EBX + 0x1fa14],0x0   ; 00499837
    JZ 0x00499883                       ; 0049983e
        ;   XREF to: 00499883 (CONDITIONAL_JUMP)  ; LAB_00499883
    MOV EAX,[0x005b9354]                ; 00499840 | DAT_005b9354
        ;   Label: LAB_00499840
    CMP dword ptr [EAX + 0xc0],0x2      ; 00499845 | DAT_01c776ac
    JZ 0x004997f6                       ; 0049984c
        ;   XREF to: 004997f6 (CONDITIONAL_JUMP)  ; LAB_004997f6
    PUSH 0x3ecccccd                     ; 0049984e
    PUSH 0x3e800000                     ; 00499853
    MOV EDI,dword ptr [EBX + 0x14c]     ; 00499858
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0049985e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    ADD ESP,0x8                         ; 00499863
    MOV dword ptr [EBP + -0x4],EAX      ; 00499866
    SUB ESP,0x4                         ; 00499869
    MOV EAX,dword ptr [EBP + -0x4]      ; 0049986c
    MOV dword ptr [ESP],EAX             ; 0049986f
    PUSH 0x582272                       ; 00499872 | = "gb-hit[1,6].wav"
    PUSH EBX                            ; 00499877
    CALL dword ptr [EDI + 0x2c]         ; 00499878
    ADD ESP,0xc                         ; 0049987b
    JMP 0x004997f6                      ; 0049987e
        ;   XREF to: 004997f6 (UNCONDITIONAL_JUMP)  ; LAB_004997f6
    PUSH 0x1                            ; 00499883
        ;   Label: LAB_00499883
    PUSH 0x8                            ; 00499885
    PUSH EDI                            ; 00499887
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00499888
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0049988d
    JMP 0x00499840                      ; 00499890
        ;   XREF to: 00499840 (UNCONDITIONAL_JUMP)  ; LAB_00499840
    MOV EAX,[0x005b9354]                ; 00499892 | DAT_005b9354
        ;   Label: LAB_00499892
    PUSH EAX                            ; 00499897 | DAT_01c775ec
    CALL FUN_004a3a90                   ; 00499898
        ;   XREF to: 004a3a90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3a90()
    ADD ESP,0x4                         ; 0049989d
    PUSH ESI                            ; 004998a0
    PUSH EBX                            ; 004998a1
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004998a2
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 004998a7
    MOV ESP,EBP                         ; 004998aa
    POP EBP                             ; 004998ac
    POP EDI                             ; 004998ad
    POP ESI                             ; 004998ae
    POP EBX                             ; 004998af
    RET                                 ; 004998b0

