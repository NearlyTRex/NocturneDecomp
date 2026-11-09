; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_batcreat_cpp_FUN_00412500(CBatCreature *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_batcreat.cpp_FUN_00412760 at 00412806
;
; Referenced Globals:
;   undefined1* switchdataD_004124e8 = 0041253d
;   TerminatedCString s_limb_wav_005cb923
;   undefined4 DAT_005cb92e
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field20_0x14
;   undefined4 g_CGameInstance.field508_0x1fc
;
; Called Functions:
;   core_actor.cpp_FUN_0040d060
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
;   core_bodypart.cpp_FUN_004154f0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0
;   core_charactr.cpp_FUN_00427770
;   core_charactr.cpp_FUN_0042b260
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412500
        ;   Label: core_batcreat.cpp_FUN_00412500
    PUSH ESI                            ; 00412501
    PUSH EDI                            ; 00412502
    PUSH EBP                            ; 00412503
    SUB ESP,0xc                         ; 00412504
    MOV EBX,dword ptr [ESP + 0x20]      ; 00412507
    MOV ESI,dword ptr [ESP + 0x24]      ; 0041250b
    FLD float ptr [ESI + 0x2c]          ; 0041250f
    FLDZ                                ; 00412512
    FCOMPP                              ; 00412514
    FNSTSW AX                           ; 00412516
    SAHF                                ; 00412518
    JNC 0x00412545                      ; 00412519
        ;   XREF to: 00412545 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0041251b
    JNZ 0x00412545                      ; 0041251e
        ;   XREF to: 00412545 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005b849c ; 00412520
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 00412525
    MOV EDI,0x6                         ; 00412527
    SAR EDX,0x1f                        ; 0041252c
    IDIV EDI                            ; 0041252f
    CMP EDX,0x5                         ; 00412531
    JA 0x00412545                       ; 00412534
        ;   XREF to: 00412545 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4124e8]  ; 00412536 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10b18]   ; 0041253d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 00412543
        ;   Label: LAB_00412543
    MOV ECX,dword ptr [EBX + 0x10b18]   ; 00412545
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0041254b
    CMP EAX,ECX                         ; 0041254d
    JNZ 0x004125f9                      ; 0041254f
        ;   XREF to: 004125f9 (CONDITIONAL_JUMP)  ; LAB_004125f9
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00412555
        ;   Label: LAB_00412555
    MOV EBP,dword ptr [EBX + 0x10af8]   ; 00412558
    MOV dword ptr [ESP + 0x8],EAX       ; 0041255e
    CMP EBP,dword ptr [ESI]             ; 00412562
    JNZ 0x0041256e                      ; 00412564
        ;   XREF to: 0041256e (CONDITIONAL_JUMP)  ; LAB_0041256e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 00412566
    MOV EDX,dword ptr [EBX + 0x10afc]   ; 0041256e
        ;   Label: LAB_0041256e
    CMP EDX,dword ptr [ESI]             ; 00412574
    JNZ 0x00412580                      ; 00412576
        ;   XREF to: 00412580 (CONDITIONAL_JUMP)  ; LAB_00412580
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 00412578
    MOV EAX,[0x00616494]                ; 00412580 | g_CGamePtr
        ;   Label: LAB_00412580
    CMP dword ptr [EAX + 0x1fc],0x0     ; 00412585 | g_CGameInstance.field508_0x1fc
    JZ 0x00412596                       ; 0041258c
        ;   XREF to: 00412596 (CONDITIONAL_JUMP)  ; LAB_00412596
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0041258e
    MOV EAX,[0x00616494]                ; 00412596 | g_CGamePtr
        ;   Label: LAB_00412596
    MOV EDX,dword ptr [EAX + 0x14]      ; 0041259b | g_CGameInstance.field20_0x14
    TEST EDX,EDX                        ; 0041259e
    JNZ 0x004125a6                      ; 004125a0
        ;   XREF to: 004125a6 (CONDITIONAL_JUMP)  ; LAB_004125a6
    MOV dword ptr [ESP + 0x8],EDX       ; 004125a2
    PUSH dword ptr [ESP + 0x8]          ; 004125a6
        ;   Label: LAB_004125a6
    CALL core_actor.cpp_FUN_0040d060    ; 004125aa
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004125af
    TEST EAX,EAX                        ; 004125b2
    JNZ 0x0041263d                      ; 004125b4
        ;   XREF to: 0041263d (CONDITIONAL_JUMP)  ; LAB_0041263d
    ADD ESP,0xc                         ; 004125ba
    POP EBP                             ; 004125bd
    POP EDI                             ; 004125be
    POP ESI                             ; 004125bf
    POP EBX                             ; 004125c0
    RET                                 ; 004125c1
    MOV EAX,dword ptr [EBX + 0x10b1c]   ; 004125c2
        ;   Label: caseD_1
    JMP 0x00412543                      ; 004125c8
        ;   XREF to: 00412543 (UNCONDITIONAL_JUMP)  ; LAB_00412543
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 004125cd
        ;   Label: caseD_2
    JMP 0x00412543                      ; 004125d3
        ;   XREF to: 00412543 (UNCONDITIONAL_JUMP)  ; LAB_00412543
    MOV EAX,dword ptr [EBX + 0x10b24]   ; 004125d8
        ;   Label: caseD_3
    JMP 0x00412543                      ; 004125de
        ;   XREF to: 00412543 (UNCONDITIONAL_JUMP)  ; LAB_00412543
    MOV EAX,dword ptr [EBX + 0x10af8]   ; 004125e3
        ;   Label: caseD_4
    JMP 0x00412543                      ; 004125e9
        ;   XREF to: 00412543 (UNCONDITIONAL_JUMP)  ; LAB_00412543
    MOV EAX,dword ptr [EBX + 0x10afc]   ; 004125ee
        ;   Label: caseD_5
    JMP 0x00412543                      ; 004125f4
        ;   XREF to: 00412543 (UNCONDITIONAL_JUMP)  ; LAB_00412543
    CMP EAX,dword ptr [EBX + 0x10b1c]   ; 004125f9
        ;   Label: LAB_004125f9
    JZ 0x00412555                       ; 004125ff
        ;   XREF to: 00412555 (CONDITIONAL_JUMP)  ; LAB_00412555
    CMP EAX,dword ptr [EBX + 0x10b20]   ; 00412605
    JZ 0x00412555                       ; 0041260b
        ;   XREF to: 00412555 (CONDITIONAL_JUMP)  ; LAB_00412555
    CMP EAX,dword ptr [EBX + 0x10b24]   ; 00412611
    JZ 0x00412555                       ; 00412617
        ;   XREF to: 00412555 (CONDITIONAL_JUMP)  ; LAB_00412555
    CMP EAX,dword ptr [EBX + 0x10afc]   ; 0041261d
    JZ 0x00412555                       ; 00412623
        ;   XREF to: 00412555 (CONDITIONAL_JUMP)  ; LAB_00412555
    CMP EAX,dword ptr [EBX + 0x10af8]   ; 00412629
    JZ 0x00412555                       ; 0041262f
        ;   XREF to: 00412555 (CONDITIONAL_JUMP)  ; LAB_00412555
    ADD ESP,0xc                         ; 00412635
    POP EBP                             ; 00412638
    POP EDI                             ; 00412639
    POP ESI                             ; 0041263a
    POP EBX                             ; 0041263b
    RET                                 ; 0041263c
    MOV EDI,dword ptr [EBX + 0x280c]    ; 0041263d
        ;   Label: LAB_0041263d
    PUSH EDI                            ; 00412643
    PUSH 0x0                            ; 00412644
    PUSH 0x0                            ; 00412646
    PUSH EBX                            ; 00412648
    LEA EAX,[ESI + 0xc]                 ; 00412649
    PUSH EAX                            ; 0041264c
    LEA EAX,[EBX + 0x30]                ; 0041264d
    PUSH EAX                            ; 00412650
    LEA EAX,[EBX + 0x20]                ; 00412651
    PUSH EAX                            ; 00412654
    CALL core_bodypart.cpp_FUN_004154f0 ; 00412655
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0041265a
    MOV EDI,EAX                         ; 0041265d
    PUSH 0x0                            ; 0041265f
    MOV EBP,EAX                         ; 00412661
    MOV EAX,dword ptr [ESI]             ; 00412663
    PUSH EAX                            ; 00412665
    PUSH EDI                            ; 00412666
    PUSH EBX                            ; 00412667
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 00412668
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 0041266d
    MOV EDX,dword ptr [EBX + 0x10b18]   ; 0041266f
    ADD ESP,0x10                        ; 00412675
    CMP EAX,EDX                         ; 00412678
    JNZ 0x0041268f                      ; 0041267a
        ;   XREF to: 0041268f (CONDITIONAL_JUMP)  ; LAB_0041268f
    PUSH 0x0                            ; 0041267c
    MOV ECX,dword ptr [EBX + 0x10b1c]   ; 0041267e
    PUSH ECX                            ; 00412684
    PUSH EDI                            ; 00412685
    PUSH EBX                            ; 00412686
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 00412687
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0041268c
    MOV EDI,dword ptr [EBX + 0x10b20]   ; 0041268f
        ;   Label: LAB_0041268f
    CMP EDI,dword ptr [ESI]             ; 00412695
    JNZ 0x004126ac                      ; 00412697
        ;   XREF to: 004126ac (CONDITIONAL_JUMP)  ; LAB_004126ac
    PUSH 0x0                            ; 00412699
    MOV EAX,dword ptr [EBX + 0x10b24]   ; 0041269b
    PUSH EAX                            ; 004126a1
    PUSH EBP                            ; 004126a2
    PUSH EBX                            ; 004126a3
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004126a4
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004126a9
    MOV EDX,dword ptr [EBX + 0x10afc]   ; 004126ac
        ;   Label: LAB_004126ac
    CMP EDX,dword ptr [ESI]             ; 004126b2
    JNZ 0x00412718                      ; 004126b4
        ;   XREF to: 00412718 (CONDITIONAL_JUMP)  ; LAB_00412718
    PUSH 0x0                            ; 004126b6
    LEA EDI,[ESI + 0xc]                 ; 004126b8
    PUSH EDI                            ; 004126bb
    MOV ECX,dword ptr [EBX + 0x10b20]   ; 004126bc
    PUSH ECX                            ; 004126c2
    PUSH EBX                            ; 004126c3
    CALL core_charactr.cpp_FUN_00427770 ; 004126c4
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004126c9
    PUSH 0x0                            ; 004126cc
    PUSH EDI                            ; 004126ce
    MOV EAX,dword ptr [EBX + 0x10b24]   ; 004126cf
    PUSH EAX                            ; 004126d5
    PUSH EBX                            ; 004126d6
    CALL core_charactr.cpp_FUN_00427770 ; 004126d7
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004126dc
    PUSH 0x0                            ; 004126df
    PUSH EDI                            ; 004126e1
    MOV EDX,dword ptr [EBX + 0x10b18]   ; 004126e2
    PUSH EDX                            ; 004126e8
    PUSH EBX                            ; 004126e9
    CALL core_charactr.cpp_FUN_00427770 ; 004126ea
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004126ef
    PUSH 0x0                            ; 004126f2
    PUSH EDI                            ; 004126f4
    MOV ECX,dword ptr [EBX + 0x10b1c]   ; 004126f5
    PUSH ECX                            ; 004126fb
    PUSH EBX                            ; 004126fc
    CALL core_charactr.cpp_FUN_00427770 ; 004126fd
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00412702
    PUSH 0x0                            ; 00412705
    PUSH EDI                            ; 00412707
    MOV EDI,dword ptr [EBX + 0x10af8]   ; 00412708
    PUSH EDI                            ; 0041270e
    PUSH EBX                            ; 0041270f
    CALL core_charactr.cpp_FUN_00427770 ; 00412710
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00412715
    PUSH 0x5cb923                       ; 00412718 | = "limb?.wav"
        ;   Label: LAB_00412718
    PUSH EBX                            ; 0041271d
    CALL core_charactr.cpp_FUN_0042b260 ; 0041271e
        ;   XREF to: 0042b260 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042b260(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 00412723
    PUSH EBP                            ; 00412726
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 00412727
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0x10af8]   ; 0041272c
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 00412732
    ADD ESP,0x4                         ; 00412739
    TEST EBP,EBP                        ; 0041273c
    JNZ 0x00412747                      ; 0041273e
        ;   XREF to: 00412747 (CONDITIONAL_JUMP)  ; LAB_00412747
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 00412740
    FLD float ptr [ESI + 0x8]           ; 00412747
        ;   Label: LAB_00412747
    FLD ST0                             ; 0041274a
    FMUL double ptr [0x005cb92e]        ; 0041274c | DAT_005cb92e
    FSTP ST1                            ; 00412752
    FSTP float ptr [ESI + 0x8]          ; 00412754
    ADD ESP,0xc                         ; 00412757
    POP EBP                             ; 0041275a
    POP EDI                             ; 0041275b
    POP ESI                             ; 0041275c
    POP EBX                             ; 0041275d
    RET                                 ; 0041275e

