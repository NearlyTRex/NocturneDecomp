; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00428510(CCharacter *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[10]:
;   core_baron.cpp_CBaron_processDamage_FUN_004112f0 at 00411301
;   core_colonel.cpp_CColonel_processDamage_FUN_0043aa00 at 0043aa77
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 at 00479f8d
;   core_gabriela.cpp_FUN_004996b0 at 00499808
;   core_haystack.cpp_CHaystack_processDamage_FUN_004b4000 at 004b4090
;   core_icepick.cpp_CIcePick_processDamage_FUN_004bb4e0 at 004bb59d
;   core_npc.cpp_FUN_004eeea0 at 004eef1b
;   core_scat.cpp_CScat_processDamage_FUN_004fcbd0 at 004fcc47
;   core_stranger.cpp_FUN_0053e860 at 0053eb97
;   core_svetlana.cpp_CSvetlana_processDamage_FUN_00542e90 at 00542f3b
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   int INT_005b96c4 = 0x1c78c7c
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0
;   core_charactr.cpp_CCharacter_explode_FUN_00427ab0
;   core_charactr.cpp_FUN_00427730
;   core_charactr.cpp_FUN_00427a60
;   core_charactr.cpp_FUN_004286d0
;   core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428510
        ;   Label: core_charactr.cpp_CCharacter_processDamage_FUN_00428510
    PUSH ESI                            ; 00428511
    PUSH EBP                            ; 00428512
    SUB ESP,0x1c                        ; 00428513
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00428516
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042851a
    FLD float ptr [ESI + 0x4]           ; 0042851e
    FLDZ                                ; 00428521
    FCOMPP                              ; 00428523
    FNSTSW AX                           ; 00428525
    SAHF                                ; 00428527
    JNC 0x00428655                      ; 00428528
        ;   XREF to: 00428655 (CONDITIONAL_JUMP)  ; LAB_00428655
    LEA EDX,[ESI + 0xc]                 ; 0042852e
    FLD float ptr [EDX + 0x4]           ; 00428531
    FMUL ST0                            ; 00428534
    FLD float ptr [EDX]                 ; 00428536
    FMUL ST0                            ; 00428538
    FADDP                               ; 0042853a
    FLD float ptr [EDX + 0x8]           ; 0042853c
    FMUL ST0                            ; 0042853f
    FADDP                               ; 00428541
    FSQRT                               ; 00428543
    XOR ECX,ECX                         ; 00428545
    FLDZ                                ; 00428547
    FCOMPP                              ; 00428549
    FNSTSW AX                           ; 0042854b
    SAHF                                ; 0042854d
    JNC 0x00428552                      ; 0042854e
        ;   XREF to: 00428552 (CONDITIONAL_JUMP)  ; LAB_00428552
    MOV ECX,EDX                         ; 00428550
    MOV EAX,dword ptr [ESI + 0x30]      ; 00428552
        ;   Label: LAB_00428552
    CMP EAX,0x6                         ; 00428555
    JNC 0x00428691                      ; 00428558
        ;   XREF to: 00428691 (CONDITIONAL_JUMP)  ; LAB_00428691
    CMP EAX,0x4                         ; 0042855e
    JNC 0x004286ae                      ; 00428561
        ;   XREF to: 004286ae (CONDITIONAL_JUMP)  ; LAB_004286ae
    CMP EAX,0x3                         ; 00428567
    JNZ 0x00428579                      ; 0042856a
        ;   XREF to: 00428579 (CONDITIONAL_JUMP)  ; LAB_00428579
    PUSH dword ptr [ESI + 0x18]         ; 0042856c
    PUSH ECX                            ; 0042856f
    PUSH EBX                            ; 00428570
    CALL core_charactr.cpp_CCharacter_explode_FUN_00427ab0 ; 00428571
        ;   XREF to: 00427ab0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_explode_FUN_00427ab0(CCharacter * this_ptr, CVector3f * impact_point, float impact_force)
    ADD ESP,0xc                         ; 00428576
    CMP dword ptr [ESI + 0x28],0x5      ; 00428579
        ;   Label: LAB_00428579
    JNZ 0x004285ab                      ; 0042857d
        ;   XREF to: 004285ab (CONDITIONAL_JUMP)  ; LAB_004285ab
    LEA EAX,[ESI + 0x1c]                ; 0042857f
    PUSH EAX                            ; 00428582
    LEA EAX,[ESP + 0x4]                 ; 00428583
    PUSH EAX                            ; 00428587
    PUSH EBX                            ; 00428588
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00428589
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042858e
    PUSH 0x0                            ; 00428591
    PUSH 0x3f800000                     ; 00428593
    PUSH 0x0                            ; 00428598
    MOV ECX,dword ptr [ESI]             ; 0042859a
    PUSH ECX                            ; 0042859c
    LEA EAX,[ESP + 0x10]                ; 0042859d
    PUSH EAX                            ; 004285a1
    PUSH EBX                            ; 004285a2
    CALL core_charactr.cpp_FUN_00427730 ; 004285a3
        ;   XREF to: 00427730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427730(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 004285a8
    FLD float ptr [ESI + 0x8]           ; 004285ab
        ;   Label: LAB_004285ab
    FLDZ                                ; 004285ae
    FCOMPP                              ; 004285b0
    FNSTSW AX                           ; 004285b2
    SAHF                                ; 004285b4
    JNC 0x004285fe                      ; 004285b5
        ;   XREF to: 004285fe (CONDITIONAL_JUMP)  ; LAB_004285fe
    PUSH EDI                            ; 004285b7
    FLD float ptr [ESI + 0x4]           ; 004285b8
    LEA EAX,[ESI + 0x1c]                ; 004285bb
    FMUL float ptr [ESI + 0x8]          ; 004285be
    PUSH EAX                            ; 004285c1
    LEA EAX,[ESP + 0x14]                ; 004285c2
    PUSH EAX                            ; 004285c6
    CALL crt_math.c_round_FUN_00563a30  ; 004285c7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EBX                            ; 004285cc
    FISTP dword ptr [ESP + 0x28]        ; 004285cd
    MOV EDI,dword ptr [ESP + 0x28]      ; 004285d1
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004285d5
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004285da
    MOV EBP,dword ptr [EBX + 0x2608]    ; 004285dd
    PUSH EBP                            ; 004285e3
    INC EDI                             ; 004285e4
    PUSH EDI                            ; 004285e5
    ADD ESI,0xc                         ; 004285e6
    PUSH ESI                            ; 004285e9
    LEA EAX,[ESP + 0x1c]                ; 004285ea
    PUSH EAX                            ; 004285ee
    MOV EAX,[0x005b96c4]                ; 004285ef | INT_005b96c4
    PUSH EAX                            ; 004285f4
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 004285f5
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004285fa
    POP EDI                             ; 004285fd
    CMP dword ptr [EBX + 0x243c],0x1    ; 004285fe
        ;   Label: LAB_004285fe
    JNZ 0x00428642                      ; 00428605
        ;   XREF to: 00428642 (CONDITIONAL_JUMP)  ; LAB_00428642
    MOV EAX,[0x01cae0e8]                ; 00428607 | DAT_01cae0e8
    CMP EBX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0042860c
    JZ 0x00428642                       ; 00428613
        ;   XREF to: 00428642 (CONDITIONAL_JUMP)  ; LAB_00428642
    FLD float ptr [EBX + 0x2434]        ; 00428615
    FDIV float ptr [EBX + 0x2438]       ; 0042861b
    PUSH 0x40a00000                     ; 00428621
    SUB ESP,0x4                         ; 00428626
    LEA EAX,[EBX + 0x2440]              ; 00428629
    FSTP float ptr [ESP]                ; 0042862f
    PUSH EAX                            ; 00428632
    MOV ESI,dword ptr [0x005b9354]      ; 00428633 | DAT_005b9354
    PUSH ESI                            ; 00428639 | DAT_01c775ec
    CALL core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0 ; 0042863a
        ;   XREF to: 004a3ab0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0(CGame * this_ptr, char * name, int value, float duration)
    ADD ESP,0x10                        ; 0042863f
    FLD float ptr [EBX + 0x2434]        ; 00428642
        ;   Label: LAB_00428642
    FLDZ                                ; 00428648
    FCOMPP                              ; 0042864a
    FNSTSW AX                           ; 0042864c
    SAHF                                ; 0042864e
    JNC 0x004286be                      ; 0042864f
        ;   XREF to: 004286be (CONDITIONAL_JUMP)  ; LAB_004286be
    ADD ESP,0x1c                        ; 00428655
        ;   Label: LAB_00428655
    POP EBP                             ; 00428658
    POP ESI                             ; 00428659
    POP EBX                             ; 0042865a
    RET                                 ; 0042865b
    PUSH 0x0                            ; 0042865c
        ;   Label: LAB_0042865c
    PUSH dword ptr [ESI + 0x18]         ; 0042865e
    PUSH ECX                            ; 00428661
    PUSH EBX                            ; 00428662
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427b60 ; 00428663
        ;   XREF to: 00427b60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00427b60(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 00428668
    JMP 0x00428579                      ; 0042866b
        ;   XREF to: 00428579 (UNCONDITIONAL_JUMP)  ; LAB_00428579
    PUSH EBX                            ; 00428670
        ;   Label: LAB_00428670
    CALL core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310 ; 00428671
        ;   XREF to: 00427310 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00428676
    JMP 0x00428579                      ; 00428679
        ;   XREF to: 00428579 (UNCONDITIONAL_JUMP)  ; LAB_00428579
    PUSH 0x40000000                     ; 0042867e
        ;   Label: LAB_0042867e
    PUSH EBX                            ; 00428683
    CALL core_charactr.cpp_FUN_004286d0 ; 00428684
        ;   XREF to: 004286d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004286d0()
    ADD ESP,0x8                         ; 00428689
    JMP 0x00428579                      ; 0042868c
        ;   XREF to: 00428579 (UNCONDITIONAL_JUMP)  ; LAB_00428579
    JBE 0x0042867e                      ; 00428691
        ;   XREF to: 0042867e (CONDITIONAL_JUMP)  ; LAB_0042867e
        ;   Label: LAB_00428691
    CMP EAX,0x68                        ; 00428693
    JNC 0x004286a2                      ; 00428696
        ;   XREF to: 004286a2 (CONDITIONAL_JUMP)  ; LAB_004286a2
    CMP EAX,0x7                         ; 00428698
    JZ 0x0042865c                       ; 0042869b
        ;   XREF to: 0042865c (CONDITIONAL_JUMP)  ; LAB_0042865c
    JMP 0x00428579                      ; 0042869d
        ;   XREF to: 00428579 (UNCONDITIONAL_JUMP)  ; LAB_00428579
    JBE 0x00428670                      ; 004286a2
        ;   XREF to: 00428670 (CONDITIONAL_JUMP)  ; LAB_00428670
        ;   Label: LAB_004286a2
    CMP EAX,0x6a                        ; 004286a4
    JZ 0x0042867e                       ; 004286a7
        ;   XREF to: 0042867e (CONDITIONAL_JUMP)  ; LAB_0042867e
    JMP 0x00428579                      ; 004286a9
        ;   XREF to: 00428579 (UNCONDITIONAL_JUMP)  ; LAB_00428579
    JBE 0x0042865c                      ; 004286ae
        ;   XREF to: 0042865c (CONDITIONAL_JUMP)  ; LAB_0042865c
        ;   Label: LAB_004286ae
    PUSH EBX                            ; 004286b0
    CALL core_charactr.cpp_FUN_00427a60 ; 004286b1
        ;   XREF to: 00427a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427a60(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004286b6
    JMP 0x00428579                      ; 004286b9
        ;   XREF to: 00428579 (UNCONDITIONAL_JUMP)  ; LAB_00428579
    PUSH EBX                            ; 004286be
        ;   Label: LAB_004286be
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0 ; 004286bf
        ;   XREF to: 004291f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004286c4
    ADD ESP,0x1c                        ; 004286c7
    POP EBP                             ; 004286ca
    POP ESI                             ; 004286cb
    POP EBX                             ; 004286cc
    RET                                 ; 004286cd

