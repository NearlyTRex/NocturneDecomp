; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_004333e0(CCharacter *param_1,float param_2,char *param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 at 0048a022
;
; Referenced Globals:
;   undefined4 DAT_005b8746
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_004348b0
;   core_charactr.cpp_FUN_004349d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004333e0
        ;   Label: core_charactr.cpp_FUN_004333e0
    PUSH EDI                            ; 004333e1
    SUB ESP,0x10                        ; 004333e2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004333e5
    MOV ECX,dword ptr [ESP + 0x24]      ; 004333e9
    TEST ECX,ECX                        ; 004333ed
    JZ 0x004334c5                       ; 004333ef
        ;   XREF to: 004334c5 (CONDITIONAL_JUMP)  ; LAB_004334c5
    CMP byte ptr [ECX],0x0              ; 004333f5
    JZ 0x004334c5                       ; 004333f8
        ;   XREF to: 004334c5 (CONDITIONAL_JUMP)  ; LAB_004334c5
    FLD float ptr [EBX + 0x2784]        ; 004333fe
    FSUB float ptr [ESP + 0x20]         ; 00433404
    FST float ptr [EBX + 0x2784]        ; 00433408
    FLDZ                                ; 0043340e
    FCOMPP                              ; 00433410
    FNSTSW AX                           ; 00433412
    SAHF                                ; 00433414
    JC 0x004334b3                       ; 00433415
        ;   XREF to: 004334b3 (CONDITIONAL_JUMP)  ; LAB_004334b3
    MOV EDX,dword ptr [EBX + 0x277c]    ; 0043341b
    TEST EDX,EDX                        ; 00433421
    JZ 0x004334e5                       ; 00433423
        ;   XREF to: 004334e5 (CONDITIONAL_JUMP)  ; LAB_004334e5
    MOV EAX,EDX                         ; 00433429
    LEA EDX,[EBX + 0x20]                ; 0043342b
    FLD float ptr [EAX + 0x20]          ; 0043342e
    FSUB float ptr [EDX]                ; 00433431
    FMUL ST0                            ; 00433433
    FLD float ptr [EAX + 0x24]          ; 00433435
    FSUB float ptr [EDX + 0x4]          ; 00433438
    FMUL ST0                            ; 0043343b
    FLD float ptr [EAX + 0x28]          ; 0043343d
    FXCH                                ; 00433440
    FADDP ST2,ST0                       ; 00433442
    FSUB float ptr [EDX + 0x8]          ; 00433444
    FMUL ST0                            ; 00433447
    FADDP                               ; 00433449
    FSQRT                               ; 0043344b
    FCOMP double ptr [0x005b8746]       ; 0043344d | DAT_005b8746
    FNSTSW AX                           ; 00433453
    SAHF                                ; 00433455
    JNC 0x004334e5                      ; 00433456
        ;   XREF to: 004334e5 (CONDITIONAL_JUMP)  ; LAB_004334e5
    MOV dword ptr [EBX + 0x2780],0x0    ; 0043345c
    MOV dword ptr [EBX + 0x277c],0x0    ; 00433466
        ;   Label: LAB_00433466
    PUSH ECX                            ; 00433470
        ;   Label: LAB_00433470
    PUSH EBX                            ; 00433471
    CALL core_charactr.cpp_FUN_004348b0 ; 00433472
        ;   XREF to: 004348b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004348b0()
    MOV dword ptr [EBX + 0x277c],EAX    ; 00433477
    ADD ESP,0x8                         ; 0043347d
        ;   Label: LAB_0043347d
    MOV dword ptr [EBX + 0x2780],EAX    ; 00433480
    CMP dword ptr [EBX + 0x2780],0x0    ; 00433486
    JZ 0x0043350c                       ; 0043348d
        ;   XREF to: 0043350c (CONDITIONAL_JUMP)  ; LAB_0043350c
    PUSH 0x40000000                     ; 00433493
    PUSH 0x3f800000                     ; 00433498
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0043349d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
        ;   Label: LAB_0043349d
    MOV dword ptr [ESP + 0x14],EAX      ; 004334a2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004334a6
    MOV dword ptr [EBX + 0x2784],EAX    ; 004334aa
    ADD ESP,0x8                         ; 004334b0
    MOV EDX,dword ptr [EBX + 0x2780]    ; 004334b3
        ;   Label: LAB_004334b3
    TEST EDX,EDX                        ; 004334b9
    JNZ 0x00433518                      ; 004334bb
        ;   XREF to: 00433518 (CONDITIONAL_JUMP)  ; LAB_00433518
    XOR EAX,EAX                         ; 004334bd
        ;   Label: LAB_004334bd
    ADD ESP,0x10                        ; 004334bf
    POP EDI                             ; 004334c2
    POP EBX                             ; 004334c3
    RET                                 ; 004334c4
    MOV dword ptr [EBX + 0x2780],0x0    ; 004334c5
        ;   Label: LAB_004334c5
    MOV dword ptr [EBX + 0x2784],0x0    ; 004334cf
    MOV dword ptr [EBX + 0x277c],0x0    ; 004334d9
    JMP 0x004334bd                      ; 004334e3
        ;   XREF to: 004334bd (UNCONDITIONAL_JUMP)  ; LAB_004334bd
    CMP dword ptr [EBX + 0x2780],0x0    ; 004334e5
        ;   Label: LAB_004334e5
    JZ 0x00433466                       ; 004334ec
        ;   XREF to: 00433466 (CONDITIONAL_JUMP)  ; LAB_00433466
    MOV EDI,dword ptr [EBX + 0x277c]    ; 004334f2
    TEST EDI,EDI                        ; 004334f8
    JZ 0x00433470                       ; 004334fa
        ;   XREF to: 00433470 (CONDITIONAL_JUMP)  ; LAB_00433470
    PUSH EDI                            ; 00433500
    PUSH EBX                            ; 00433501
    CALL core_charactr.cpp_FUN_004349d0 ; 00433502
        ;   XREF to: 004349d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004349d0()
    JMP 0x0043347d                      ; 00433507
        ;   XREF to: 0043347d (UNCONDITIONAL_JUMP)  ; LAB_0043347d
    PUSH 0x41200000                     ; 0043350c
        ;   Label: LAB_0043350c
    PUSH 0x40800000                     ; 00433511
    JMP 0x0043349d                      ; 00433516
        ;   XREF to: 0043349d (UNCONDITIONAL_JUMP)  ; LAB_0043349d
    PUSH 0x0                            ; 00433518
        ;   Label: LAB_00433518
    PUSH 0x0                            ; 0043351a
    PUSH 0x2cfd900                      ; 0043351c | DAT_02cfd900
    MOV EAX,EDX                         ; 00433521
    MOV EDX,dword ptr [EDX + 0x154]     ; 00433523
    PUSH EAX                            ; 00433529
    CALL dword ptr [EDX + 0xc4]         ; 0043352a
    ADD ESP,0x4                         ; 00433530
    PUSH EAX                            ; 00433533
    MOV EAX,dword ptr [EBX + 0x2780]    ; 00433534
    ADD EAX,0x20                        ; 0043353a
    PUSH EAX                            ; 0043353d
    PUSH EBX                            ; 0043353e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0043353f
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00433544
    TEST EAX,EAX                        ; 00433547
    JZ 0x00433555                       ; 00433549
        ;   XREF to: 00433555 (CONDITIONAL_JUMP)  ; LAB_00433555
    JL 0x00433560                       ; 0043354b
        ;   XREF to: 00433560 (CONDITIONAL_JUMP)  ; LAB_00433560
    XOR EAX,EAX                         ; 0043354d
    ADD ESP,0x10                        ; 0043354f
    POP EDI                             ; 00433552
    POP EBX                             ; 00433553
    RET                                 ; 00433554
    MOV EAX,0x1                         ; 00433555
        ;   Label: LAB_00433555
    ADD ESP,0x10                        ; 0043355a
    POP EDI                             ; 0043355d
    POP EBX                             ; 0043355e
    RET                                 ; 0043355f
    MOV dword ptr [EBX + 0x2780],0x0    ; 00433560
        ;   Label: LAB_00433560
    XOR EAX,EAX                         ; 0043356a
    ADD ESP,0x10                        ; 0043356c
    POP EDI                             ; 0043356f
    POP EBX                             ; 00433570
    RET                                 ; 00433571

