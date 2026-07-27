; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(char *param_1,char *param_2)
;
;
; XREF[5]:
;   core_cloth.cpp_CCloth_load_FUN_00435240 at 00435310
;   core_dmodel.cpp_loadModel_FUN_004543b0 at 0045443a
;   core_level.cpp_CLevelLoader_show_FUN_004c5640 at 004c56ca
;   core_moon.cpp_CMoon_init_FUN_004de860 at 004de991
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 00507907
;
; Referenced Globals:
;   TerminatedCString s_rb_0057c956
;   TerminatedCString s_models_0057c959
;   TerminatedCString s_core_dmodel_cpp_0057c960
;   TerminatedCString s_Can_t_open_keyframed_mod_0057c973
;   TerminatedCString s_rt_0057c991
;   TerminatedCString s_models_0057c994
;   TerminatedCString s_core_dmodel_cpp_0057c99b
;   TerminatedCString s_Can_t_open_keyframed_mod_0057c9ae
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00453620
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0
;   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990
;   core_dmodel.cpp_FUN_00452f10
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_ungetc_FUN_00564740
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452650
        ;   Label: core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650
    PUSH ESI                            ; 00452651
    PUSH EDI                            ; 00452652
    PUSH EBP                            ; 00452653
    MOV EBX,dword ptr [ESP + 0x14]      ; 00452654
    PUSH EBX                            ; 00452658
    CALL core_dmodel.cpp_FUN_00452f10   ; 00452659
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00452f10()
    ADD ESP,0x4                         ; 0045265e
    PUSH 0x57c956                       ; 00452661 | = "rb"
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00452666
    PUSH EDX                            ; 0045266a
    PUSH 0x57c959                       ; 0045266b | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00452670
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 00452675
    MOV EBP,EAX                         ; 00452678
    TEST EAX,EAX                        ; 0045267a
    JZ 0x0045275e                       ; 0045267c
        ;   XREF to: 0045275e (CONDITIONAL_JUMP)  ; LAB_0045275e
    MOV ESI,dword ptr [ESP + 0x18]      ; 00452682
        ;   Label: LAB_00452682
    MOV EDI,EBX                         ; 00452686
    PUSH EDI                            ; 00452688
    MOV AL,byte ptr [ESI]               ; 00452689
        ;   Label: LAB_00452689
    MOV byte ptr [EDI],AL               ; 0045268b
    CMP AL,0x0                          ; 0045268d
    JZ 0x004526a1                       ; 0045268f
        ;   XREF to: 004526a1 (CONDITIONAL_JUMP)  ; LAB_004526a1
    MOV AL,byte ptr [ESI + 0x1]         ; 00452691
    ADD ESI,0x2                         ; 00452694
    MOV byte ptr [EDI + 0x1],AL         ; 00452697
    ADD EDI,0x2                         ; 0045269a
    CMP AL,0x0                          ; 0045269d
    JNZ 0x00452689                      ; 0045269f
        ;   XREF to: 00452689 (CONDITIONAL_JUMP)  ; LAB_00452689
    POP EDI                             ; 004526a1
        ;   Label: LAB_004526a1
    PUSH EBP                            ; 004526a2
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004526a3
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004526a8
    PUSH EBP                            ; 004526ab
    PUSH EAX                            ; 004526ac
    MOV ESI,EAX                         ; 004526ad
    CALL crt_stdio.c_ungetc_FUN_00564740 ; 004526af
        ;   XREF to: 00564740 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_00564740()
    ADD ESP,0x8                         ; 004526b4
    CMP ESI,0x2f                        ; 004526b7
    JNZ 0x0045278b                      ; 004526ba
        ;   XREF to: 0045278b (CONDITIONAL_JUMP)  ; LAB_0045278b
    PUSH EBP                            ; 004526c0
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004526c1
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004526c6
    PUSH 0x57c991                       ; 004526c9 | = "rt"
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004526ce
    PUSH EBP                            ; 004526d2
    PUSH 0x57c994                       ; 004526d3 | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004526d8
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004526dd
    MOV EBP,EAX                         ; 004526e0
    TEST EAX,EAX                        ; 004526e2
    JNZ 0x0045270d                      ; 004526e4
        ;   XREF to: 0045270d (CONDITIONAL_JUMP)  ; LAB_0045270d
    MOV ECX,dword ptr [ESP + 0x18]      ; 004526e6
    PUSH ECX                            ; 004526ea
    MOV EAX,0x57c99b                    ; 004526eb | = "..\\core\\dmodel.cpp"
    MOV EDX,0xc5                        ; 004526f0
    PUSH 0x57c9ae                       ; 004526f5 | = "Can't open keyframed model %s"
    MOV [0x01cc4800],EAX                ; 004526fa | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004526ff | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00452705
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0045270a
    PUSH EBP                            ; 0045270d
        ;   Label: LAB_0045270d
    PUSH EBX                            ; 0045270e
    CALL core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990 ; 0045270f
        ;   XREF to: 00452990 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990()
    ADD ESP,0x8                         ; 00452714
        ;   Label: LAB_00452714
    PUSH EBP                            ; 00452717
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00452718
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0045271d
    PUSH EBX                            ; 00452720
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0 ; 00452721
        ;   XREF to: 004537d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0()
    ADD ESP,0x4                         ; 00452726
    MOV ESI,dword ptr [EBX + 0x120]     ; 00452729
    XOR EDX,EDX                         ; 0045272f
    TEST ESI,ESI                        ; 00452731
    JLE 0x00452750                      ; 00452733
        ;   XREF to: 00452750 (CONDITIONAL_JUMP)  ; LAB_00452750
    MOV EAX,EBX                         ; 00452735
    MOV dword ptr [EAX + 0x128],0x0     ; 00452737
        ;   Label: LAB_00452737
    INC EDX                             ; 00452741
    MOV EDI,dword ptr [EBX + 0x120]     ; 00452742
    ADD EAX,0x48                        ; 00452748
    CMP EDX,EDI                         ; 0045274b
    JL 0x00452737                       ; 0045274d
        ;   XREF to: 00452737 (CONDITIONAL_JUMP)  ; LAB_00452737
    NOP                                 ; 0045274f
    PUSH EBX                            ; 00452750
        ;   Label: LAB_00452750
    CALL core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00453620 ; 00452751
        ;   XREF to: 00453620 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00453620()
    ADD ESP,0x4                         ; 00452756
    POP EBP                             ; 00452759
    POP EDI                             ; 0045275a
    POP ESI                             ; 0045275b
    POP EBX                             ; 0045275c
    RET                                 ; 0045275d
    MOV EDI,dword ptr [ESP + 0x18]      ; 0045275e
        ;   Label: LAB_0045275e
    PUSH EDI                            ; 00452762
    MOV ECX,0x57c960                    ; 00452763 | = "..\\core\\dmodel.cpp"
    MOV ESI,0xb8                        ; 00452768
    PUSH 0x57c973                       ; 0045276d | = "Can't open keyframed model %s"
    MOV dword ptr [0x01cc4800],ECX      ; 00452772 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00452778 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045277e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00452783
    JMP 0x00452682                      ; 00452786
        ;   XREF to: 00452682 (UNCONDITIONAL_JUMP)  ; LAB_00452682
    PUSH EBP                            ; 0045278b
        ;   Label: LAB_0045278b
    PUSH EBX                            ; 0045278c
    CALL core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0 ; 0045278d
        ;   XREF to: 004527a0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0()
    JMP 0x00452714                      ; 00452792
        ;   XREF to: 00452714 (UNCONDITIONAL_JUMP)  ; LAB_00452714

