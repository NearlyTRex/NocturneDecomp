; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_CBodyPart_archive_FUN_00416570(CBodyPart *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_vertexCount_00578f7a
;   TerminatedCString s_triCount_00578f86
;   TerminatedCString s_textureCount_00578f8f
;   TerminatedCString s_d_d_d_00578f9c
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_00578fa6
;   TerminatedCString s_anon_00578fca
;   TerminatedCString s_d_d_d_00578fd4
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_00578fdf
;   TerminatedCString s_s_00579002
;   TerminatedCString s_simBox_00579009
;   TerminatedCString s_carriedByActor_00579010
;   TerminatedCString s_bloodType_0057901f
;   TerminatedCString s_dontUseNormals_00579029
;   TerminatedCString s_transparentGeometryFlag_00579038
;   TerminatedCString s_renderInBackground_00579050
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveBox_FUN_0040ce80
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416570
        ;   Label: core_bodypart.cpp_CBodyPart_archive_FUN_00416570
    PUSH ESI                            ; 00416571
    PUSH EDI                            ; 00416572
    PUSH EBP                            ; 00416573
    SUB ESP,0x8                         ; 00416574
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00416577
    PUSH EBX                            ; 0041657b
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0041657c
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00416581
    PUSH 0x578f7a                       ; 00416584 | = "vertexCount"
    LEA EAX,[EBX + 0x16c]               ; 00416589
    PUSH EAX                            ; 0041658f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00416590
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00416595
    PUSH 0x578f86                       ; 00416598 | = "triCount"
    LEA EAX,[EBX + 0x178]               ; 0041659d
    PUSH EAX                            ; 004165a3
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004165a4
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004165a9
    PUSH 0x578f8f                       ; 004165ac | = "textureCount"
    LEA EAX,[EBX + 0x184]               ; 004165b1
    PUSH EAX                            ; 004165b7
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004165b8
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00763e88]      ; 004165bd | DAT_00763e88
    ADD ESP,0x8                         ; 004165c3
    CMP EDX,0x1                         ; 004165c6
    JZ 0x00416788                       ; 004165c9
        ;   XREF to: 00416788 (CONDITIONAL_JUMP)  ; LAB_00416788
    MOV ECX,dword ptr [EBX + 0x16c]     ; 004165cf
    XOR EBP,EBP                         ; 004165d5
    TEST ECX,ECX                        ; 004165d7
    JLE 0x00416620                      ; 004165d9
        ;   XREF to: 00416620 (CONDITIONAL_JUMP)  ; LAB_00416620
    XOR EDI,EDI                         ; 004165db
    MOV ESI,dword ptr [EBX + 0x170]     ; 004165dd
        ;   Label: LAB_004165dd
    MOV EAX,dword ptr [EDI + ESI*0x1 + 0x8] ; 004165e3
    PUSH EAX                            ; 004165e7
    MOV EDX,dword ptr [EDI + ESI*0x1 + 0x4] ; 004165e8
    PUSH EDX                            ; 004165ec
    MOV ECX,dword ptr [EDI + ESI*0x1]   ; 004165ed
    PUSH ECX                            ; 004165f0
    PUSH 0x578fd4                       ; 004165f1 | = "\t%d,%d,%d\n"
    MOV ESI,dword ptr [0x00763e84]      ; 004165f6 | DAT_00763e84
    PUSH ESI                            ; 004165fc
    ADD EDI,0xc                         ; 004165fd
    INC EBP                             ; 00416600
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00416601
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EAX,dword ptr [EBX + 0x16c]     ; 00416606
    ADD ESP,0x14                        ; 0041660c
    CMP EBP,EAX                         ; 0041660f
    JL 0x004165dd                       ; 00416611
        ;   XREF to: 004165dd (CONDITIONAL_JUMP)  ; LAB_004165dd
    LEA EAX,[EAX]                       ; 00416613
    LEA EDX,[EDX]                       ; 00416619
    NOP                                 ; 0041661f
    MOV EDX,dword ptr [EBX + 0x178]     ; 00416620
        ;   Label: LAB_00416620
    XOR EBP,EBP                         ; 00416626
    TEST EDX,EDX                        ; 00416628
    JLE 0x004166a0                      ; 0041662a
        ;   XREF to: 004166a0 (CONDITIONAL_JUMP)  ; LAB_004166a0
    MOV dword ptr [ESP],EBP             ; 0041662c
    XOR EDI,EDI                         ; 0041662f
    MOV ECX,dword ptr [ESP]             ; 00416631
        ;   Label: LAB_00416631
    MOV ESI,dword ptr [EBX + 0x17c]     ; 00416634
    ADD ESI,ECX                         ; 0041663a
    MOV EAX,dword ptr [ESI + 0x38]      ; 0041663c
    PUSH EAX                            ; 0041663f
    MOV EDX,dword ptr [ESI + 0x34]      ; 00416640
    PUSH EDX                            ; 00416643
    MOV ECX,dword ptr [ESI + 0x30]      ; 00416644
    PUSH ECX                            ; 00416647
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00416648
    PUSH EAX                            ; 0041664b
    MOV EDX,dword ptr [ESI + 0x28]      ; 0041664c
    PUSH EDX                            ; 0041664f
    MOV ECX,dword ptr [ESI + 0x24]      ; 00416650
    PUSH ECX                            ; 00416653
    MOV EAX,dword ptr [ESI + 0x20]      ; 00416654
    PUSH EAX                            ; 00416657
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00416658
    PUSH EDX                            ; 0041665b
    MOV ECX,dword ptr [ESI + 0x18]      ; 0041665c
    MOV EAX,dword ptr [EBX + 0x180]     ; 0041665f
    PUSH ECX                            ; 00416665
    MOV ESI,dword ptr [EDI + EAX*0x1]   ; 00416666
    PUSH ESI                            ; 00416669
    PUSH 0x578fdf                       ; 0041666a | = "\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV EAX,[0x00763e84]                ; 0041666f | DAT_00763e84
    PUSH EAX                            ; 00416674
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 00416675
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x30                        ; 0041667a
    ADD EDI,0x4                         ; 0041667d
    MOV EDX,dword ptr [ESP]             ; 00416680
    INC EBP                             ; 00416683
    ADD EDX,0x3c                        ; 00416684
    MOV ECX,dword ptr [EBX + 0x178]     ; 00416687
    MOV dword ptr [ESP],EDX             ; 0041668d
    CMP EBP,ECX                         ; 00416690
    JL 0x00416631                       ; 00416692
        ;   XREF to: 00416631 (CONDITIONAL_JUMP)  ; LAB_00416631
    LEA EAX,[EAX]                       ; 00416694
    LEA EDX,[EDX]                       ; 0041669a
    MOV ESI,dword ptr [EBX + 0x184]     ; 004166a0
        ;   Label: LAB_004166a0
    XOR EDI,EDI                         ; 004166a6
    TEST ESI,ESI                        ; 004166a8
    JLE 0x004166e0                      ; 004166aa
        ;   XREF to: 004166e0 (CONDITIONAL_JUMP)  ; LAB_004166e0
    LEA ESI,[EBX + 0x190]               ; 004166ac
    PUSH ESI                            ; 004166b2
        ;   Label: LAB_004166b2
    PUSH 0x579002                       ; 004166b3 | = "\t\"%s\"\n"
    MOV EDX,dword ptr [0x00763e84]      ; 004166b8 | DAT_00763e84
    PUSH EDX                            ; 004166be
    INC EDI                             ; 004166bf
    ADD ESI,0x18                        ; 004166c0
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004166c3
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [EBX + 0x184]     ; 004166c8
    ADD ESP,0xc                         ; 004166ce
    CMP EDI,ECX                         ; 004166d1
    JL 0x004166b2                       ; 004166d3
        ;   XREF to: 004166b2 (CONDITIONAL_JUMP)  ; LAB_004166b2
    LEA EAX,[EAX]                       ; 004166d5
    LEA EDX,[EDX]                       ; 004166db
    MOV EBX,EBX                         ; 004166de
    CMP dword ptr [0x005ad00c],0x2      ; 004166e0 | g_INT_005ad00c
        ;   Label: LAB_004166e0
    JL 0x00416711                       ; 004166e7
        ;   XREF to: 00416711 (CONDITIONAL_JUMP)  ; LAB_00416711
    PUSH 0x579009                       ; 004166e9 | = "simBox"
    LEA EAX,[EBX + 0xcb4]               ; 004166ee
    PUSH EAX                            ; 004166f4
    CALL core_actor.cpp_archiveBox_FUN_0040ce80 ; 004166f5
        ;   XREF to: 0040ce80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveBox_FUN_0040ce80(CBox * box_ptr, char * property_name)
    ADD ESP,0x8                         ; 004166fa
    PUSH 0x579010                       ; 004166fd | = "carriedByActor"
    LEA EAX,[EBX + 0xf10]               ; 00416702
    PUSH EAX                            ; 00416708
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00416709
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041670e
    CMP dword ptr [0x005ad00c],0x3      ; 00416711 | g_INT_005ad00c
        ;   Label: LAB_00416711
    JL 0x00416756                       ; 00416718
        ;   XREF to: 00416756 (CONDITIONAL_JUMP)  ; LAB_00416756
    PUSH 0x57901f                       ; 0041671a | = "bloodType"
    LEA EAX,[EBX + 0xca0]               ; 0041671f
    PUSH EAX                            ; 00416725
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00416726
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041672b
    PUSH 0x579029                       ; 0041672e | = "dontUseNormals"
    LEA EAX,[EBX + 0xc98]               ; 00416733
    PUSH EAX                            ; 00416739
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0041673a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041673f
    PUSH 0x579038                       ; 00416742 | = "transparentGeometryFlag"
    LEA EAX,[EBX + 0xc9c]               ; 00416747
    PUSH EAX                            ; 0041674d
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0041674e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00416753
    CMP dword ptr [0x005ad00c],0x4      ; 00416756 | g_INT_005ad00c
        ;   Label: LAB_00416756
    JL 0x00416773                       ; 0041675d
        ;   XREF to: 00416773 (CONDITIONAL_JUMP)  ; LAB_00416773
    PUSH 0x579050                       ; 0041675f | = "renderInBackground"
    LEA EAX,[EBX + 0x150]               ; 00416764
    PUSH EAX                            ; 0041676a
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0041676b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00416770
    CMP dword ptr [0x005ad00c],0x5      ; 00416773 | g_INT_005ad00c
        ;   Label: LAB_00416773
    JGE 0x004168ae                      ; 0041677a
        ;   XREF to: 004168ae (CONDITIONAL_JUMP)  ; LAB_004168ae
    ADD ESP,0x8                         ; 00416780
    POP EBP                             ; 00416783
    POP EDI                             ; 00416784
    POP ESI                             ; 00416785
    POP EBX                             ; 00416786
    RET                                 ; 00416787
    MOV ESI,dword ptr [EBX + 0x178]     ; 00416788
        ;   Label: LAB_00416788
    PUSH ESI                            ; 0041678e
    MOV EDI,dword ptr [EBX + 0x16c]     ; 0041678f
    PUSH EDI                            ; 00416795
    PUSH EBX                            ; 00416796
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0 ; 00416797
        ;   XREF to: 00415ee0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0()
    XOR EDI,EDI                         ; 0041679c
    MOV EBP,dword ptr [EBX + 0x16c]     ; 0041679e
    ADD ESP,0xc                         ; 004167a4
    TEST EBP,EBP                        ; 004167a7
    JLE 0x004167e0                      ; 004167a9
        ;   XREF to: 004167e0 (CONDITIONAL_JUMP)  ; LAB_004167e0
    XOR EBP,EBP                         ; 004167ab
    MOV ESI,dword ptr [EBX + 0x170]     ; 004167ad
        ;   Label: LAB_004167ad
    ADD ESI,EBP                         ; 004167b3
    LEA EAX,[ESI + 0x8]                 ; 004167b5
    PUSH EAX                            ; 004167b8
    LEA EAX,[ESI + 0x4]                 ; 004167b9
    PUSH EAX                            ; 004167bc
    PUSH ESI                            ; 004167bd
    PUSH 0x578f9c                       ; 004167be | = "%d,%d,%d\n"
    MOV ESI,dword ptr [0x00763e84]      ; 004167c3 | DAT_00763e84
    PUSH ESI                            ; 004167c9
    INC EDI                             ; 004167ca
    ADD EBP,0xc                         ; 004167cb
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004167ce
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,dword ptr [EBX + 0x16c]     ; 004167d3
    ADD ESP,0x14                        ; 004167d9
    CMP EDI,EAX                         ; 004167dc
    JL 0x004167ad                       ; 004167de
        ;   XREF to: 004167ad (CONDITIONAL_JUMP)  ; LAB_004167ad
    XOR EDX,EDX                         ; 004167e0
        ;   Label: LAB_004167e0
    MOV ECX,dword ptr [EBX + 0x178]     ; 004167e2
    MOV dword ptr [ESP + 0x4],EDX       ; 004167e8
    TEST ECX,ECX                        ; 004167ec
    JLE 0x00416860                      ; 004167ee
        ;   XREF to: 00416860 (CONDITIONAL_JUMP)  ; LAB_00416860
    XOR EBP,EBP                         ; 004167f4
    XOR EDI,EDI                         ; 004167f6
    MOV ESI,dword ptr [EBX + 0x17c]     ; 004167f8
        ;   Label: LAB_004167f8
    ADD ESI,EBP                         ; 004167fe
    LEA EAX,[ESI + 0x38]                ; 00416800
    PUSH EAX                            ; 00416803
    LEA EAX,[ESI + 0x34]                ; 00416804
    PUSH EAX                            ; 00416807
    LEA EAX,[ESI + 0x30]                ; 00416808
    PUSH EAX                            ; 0041680b
    LEA EAX,[ESI + 0x2c]                ; 0041680c
    PUSH EAX                            ; 0041680f
    LEA EAX,[ESI + 0x28]                ; 00416810
    PUSH EAX                            ; 00416813
    LEA EAX,[ESI + 0x24]                ; 00416814
    PUSH EAX                            ; 00416817
    LEA EAX,[ESI + 0x20]                ; 00416818
    PUSH EAX                            ; 0041681b
    LEA EAX,[ESI + 0x1c]                ; 0041681c
    PUSH EAX                            ; 0041681f
    LEA EAX,[ESI + 0x18]                ; 00416820
    PUSH EAX                            ; 00416823
    MOV EAX,dword ptr [EBX + 0x180]     ; 00416824
    ADD EAX,EDI                         ; 0041682a
    PUSH EAX                            ; 0041682c
    PUSH 0x578fa6                       ; 0041682d | = "\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV EAX,[0x00763e84]                ; 00416832 | DAT_00763e84
    PUSH EAX                            ; 00416837
    ADD EBP,0x3c                        ; 00416838
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0041683b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x30                        ; 00416840
    ADD EDI,0x4                         ; 00416843
    MOV EDX,dword ptr [ESP + 0x4]       ; 00416846
    MOV dword ptr [ESI + 0x4],0x3       ; 0041684a
    INC EDX                             ; 00416851
    MOV ECX,dword ptr [EBX + 0x178]     ; 00416852
    MOV dword ptr [ESP + 0x4],EDX       ; 00416858
    CMP EDX,ECX                         ; 0041685c
    JL 0x004167f8                       ; 0041685e
        ;   XREF to: 004167f8 (CONDITIONAL_JUMP)  ; LAB_004167f8
    MOV ESI,dword ptr [EBX + 0x184]     ; 00416860
        ;   Label: LAB_00416860
    XOR EDI,EDI                         ; 00416866
    TEST ESI,ESI                        ; 00416868
    JLE 0x004168a0                      ; 0041686a
        ;   XREF to: 004168a0 (CONDITIONAL_JUMP)  ; LAB_004168a0
    LEA ESI,[EBX + 0x190]               ; 0041686c
    PUSH ESI                            ; 00416872
        ;   Label: LAB_00416872
    PUSH 0x578fca                       ; 00416873 | = " \"%[^\"]\"\n"
    MOV EBP,dword ptr [0x00763e84]      ; 00416878 | DAT_00763e84
    PUSH EBP                            ; 0041687e
    INC EDI                             ; 0041687f
    ADD ESI,0x18                        ; 00416880
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00416883
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,dword ptr [EBX + 0x184]     ; 00416888
    ADD ESP,0xc                         ; 0041688e
    CMP EDI,EAX                         ; 00416891
    JL 0x00416872                       ; 00416893
        ;   XREF to: 00416872 (CONDITIONAL_JUMP)  ; LAB_00416872
    LEA EAX,[EAX]                       ; 00416895
    LEA EDX,[EDX]                       ; 0041689b
    MOV EBX,EBX                         ; 0041689e
    PUSH EBX                            ; 004168a0
        ;   Label: LAB_004168a0
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 004168a1
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 004168a6
    JMP 0x004166e0                      ; 004168a9
        ;   XREF to: 004166e0 (UNCONDITIONAL_JUMP)  ; LAB_004166e0
    PUSH 0x579063                       ; 004168ae | = "dontPickMeUp"
        ;   Label: LAB_004168ae
    ADD EBX,0xcac                       ; 004168b3
    PUSH EBX                            ; 004168b9
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004168ba
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004168bf
    ADD ESP,0x8                         ; 004168c2
    POP EBP                             ; 004168c5
    POP EDI                             ; 004168c6
    POP ESI                             ; 004168c7
    POP EBX                             ; 004168c8
    RET                                 ; 004168c9

