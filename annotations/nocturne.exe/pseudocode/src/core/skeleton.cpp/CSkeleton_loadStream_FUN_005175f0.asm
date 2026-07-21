; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_load_FUN_00517560 at 005175ac
;
; Referenced Globals:
;   undefined4 DAT_00591228
;   string s_..\\core\\skeleton.cpp_0059122c
;   string s_Invalid_skeleton_version_00591241
;   string s_..\\core\\skeleton.cpp_0059125a
;   string s_Old_skeleton_version_%d_not_supp_0059126f
;   string s_..\\core\\skeleton.cpp_00591295
;   string s_Skeleton_version_%d_is_newer_tha_005912aa
;   string s_%d,%d_005912fa
;   string s_\"%[^\"]\",%d_00591301
;   string s_%f,%f,%f,%f_0059130d
;   string s_%f,%f,%f_0059131a
;   string s_%f,%f,%f_00591324
;   string s_..\\core\\skeleton.cpp_0059132e
;   string s_CSkeleton::loadStream_-_error_re_00591343
;   string s_..\\core\\skeleton.cpp_0059136f
;   ... and 4 more
;
; Called Functions:
;   core_motion.cpp_CMotionList_load_FUN_004e0920
;   core_skeleton.cpp_CSkeleton_allocMemory_FUN_005173c0
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fscanf_FUN_00563350
;   FUN_004c8440
;   FUN_005174e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005175f0
        ;   Label: core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0
    PUSH ESI                            ; 005175f1
    PUSH EDI                            ; 005175f2
    PUSH EBP                            ; 005175f3
    SUB ESP,0x14                        ; 005175f4
    MOV EDX,dword ptr [ESP + 0x28]      ; 005175f7
    PUSH EDX                            ; 005175fb
    CALL FUN_005174e0                   ; 005175fc
        ;   XREF to: 005174e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005174e0()
    ADD ESP,0x4                         ; 00517601
    MOV ECX,0xffffffff                  ; 00517604
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00517609
    MOV dword ptr [ESP],ECX             ; 0051760d
    PUSH EBX                            ; 00517610
        ;   Label: LAB_00517610
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00517611
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00517616
    TEST EAX,EAX                        ; 00517619
    JL 0x00517622                       ; 0051761b
        ;   XREF to: 00517622 (CONDITIONAL_JUMP)  ; LAB_00517622
    CMP EAX,0xa                         ; 0051761d
    JNZ 0x00517610                      ; 00517620
        ;   XREF to: 00517610 (CONDITIONAL_JUMP)  ; LAB_00517610
    MOV EAX,ESP                         ; 00517622
        ;   Label: LAB_00517622
    PUSH EAX                            ; 00517624
    PUSH 0x591228                       ; 00517625 | DAT_00591228
    MOV EBX,dword ptr [ESP + 0x34]      ; 0051762a
    PUSH EBX                            ; 0051762e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0051762f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00517634
    CMP dword ptr [ESP],0x1             ; 00517637
    JGE 0x00517660                      ; 0051763b
        ;   XREF to: 00517660 (CONDITIONAL_JUMP)  ; LAB_00517660
    MOV EDI,0x59122c                    ; 0051763d | = "..\\core\\skeleton.cpp"
    MOV EBP,0x10d                       ; 00517642
    PUSH 0x591241                       ; 00517647 | = "Invalid skeleton version"
    MOV dword ptr [0x01cc4800],EDI      ; 0051764c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00517652 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00517658
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0051765d
    MOV EAX,dword ptr [ESP]             ; 00517660
        ;   Label: LAB_00517660
    CMP EAX,0x2                         ; 00517663
    JGE 0x0051768c                      ; 00517666
        ;   XREF to: 0051768c (CONDITIONAL_JUMP)  ; LAB_0051768c
    PUSH EAX                            ; 00517668
    MOV EDX,0x59125a                    ; 00517669 | = "..\\core\\skeleton.cpp"
    MOV ECX,0x10e                       ; 0051766e
    PUSH 0x59126f                       ; 00517673 | = "Old skeleton version %d not supported"
    MOV dword ptr [0x01cc4800],EDX      ; 00517678 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0051767e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00517684
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00517689
    MOV EAX,dword ptr [ESP]             ; 0051768c
        ;   Label: LAB_0051768c
    MOV ESI,dword ptr [0x005be978]      ; 0051768f | DAT_005be978
    CMP EAX,ESI                         ; 00517695
    JG 0x0051796f                       ; 00517697
        ;   XREF to: 0051796f (CONDITIONAL_JUMP)  ; LAB_0051796f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051769d
        ;   Label: LAB_0051769d
    PUSH EBX                            ; 005176a1
        ;   Label: LAB_005176a1
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 005176a2
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 005176a7
    TEST EAX,EAX                        ; 005176aa
    JL 0x005176b3                       ; 005176ac
        ;   XREF to: 005176b3 (CONDITIONAL_JUMP)  ; LAB_005176b3
    CMP EAX,0xa                         ; 005176ae
    JNZ 0x005176a1                      ; 005176b1
        ;   XREF to: 005176a1 (CONDITIONAL_JUMP)  ; LAB_005176a1
    LEA EAX,[ESP + 0x8]                 ; 005176b3
        ;   Label: LAB_005176b3
    PUSH EAX                            ; 005176b7
    LEA EAX,[ESP + 0x8]                 ; 005176b8
    PUSH EAX                            ; 005176bc
    PUSH 0x5912fa                       ; 005176bd | = "%d,%d\n"
    MOV ECX,dword ptr [ESP + 0x38]      ; 005176c2
    PUSH ECX                            ; 005176c6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005176c7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 005176cc
    MOV EBX,dword ptr [ESP + 0x8]       ; 005176cf
    PUSH EBX                            ; 005176d3
    MOV ESI,dword ptr [ESP + 0x8]       ; 005176d4
    PUSH ESI                            ; 005176d8
    MOV EDI,dword ptr [ESP + 0x30]      ; 005176d9
    PUSH EDI                            ; 005176dd
    CALL core_skeleton.cpp_CSkeleton_allocMemory_FUN_005173c0 ; 005176de
        ;   XREF to: 005173c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_allocMemory_FUN_005173c0()
    ADD ESP,0xc                         ; 005176e3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005176e6
    PUSH EBX                            ; 005176ea
        ;   Label: LAB_005176ea
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 005176eb
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 005176f0
    TEST EAX,EAX                        ; 005176f3
    JL 0x005176fc                       ; 005176f5
        ;   XREF to: 005176fc (CONDITIONAL_JUMP)  ; LAB_005176fc
    CMP EAX,0xa                         ; 005176f7
    JNZ 0x005176ea                      ; 005176fa
        ;   XREF to: 005176ea (CONDITIONAL_JUMP)  ; LAB_005176ea
    MOV EAX,dword ptr [ESP + 0x28]      ; 005176fc
        ;   Label: LAB_005176fc
    MOV EBP,dword ptr [EAX + 0x28558]   ; 00517700
    XOR EBX,EBX                         ; 00517706
    TEST EBP,EBP                        ; 00517708
    JLE 0x00517750                      ; 0051770a
        ;   XREF to: 00517750 (CONDITIONAL_JUMP)  ; LAB_00517750
    LEA EDI,[EAX + 0x2855c]             ; 0051770c
    LEA ESI,[EAX + 0x2857c]             ; 00517712
    IMUL EAX,EBX,0x24                   ; 00517718
        ;   Label: LAB_00517718
    PUSH ESI                            ; 0051771b
    ADD EAX,EDI                         ; 0051771c
    PUSH EAX                            ; 0051771e
    PUSH 0x591301                       ; 0051771f | = "\"%[^\"]\",%d\n"
    MOV EAX,dword ptr [ESP + 0x38]      ; 00517724
    PUSH EAX                            ; 00517728
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00517729
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 0051772e
    MOV EAX,dword ptr [ESP + 0x28]      ; 00517731
    INC EBX                             ; 00517735
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00517736
    ADD ESI,0x24                        ; 0051773c
    CMP EBX,EDX                         ; 0051773f
    JL 0x00517718                       ; 00517741
        ;   XREF to: 00517718 (CONDITIONAL_JUMP)  ; LAB_00517718
    LEA EAX,[EAX]                       ; 00517743
    LEA EDX,[EDX]                       ; 00517749
    NOP                                 ; 0051774f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00517750
        ;   Label: LAB_00517750
    PUSH ESI                            ; 00517754
        ;   Label: LAB_00517754
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00517755
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051775a
    TEST EAX,EAX                        ; 0051775d
    JL 0x00517766                       ; 0051775f
        ;   XREF to: 00517766 (CONDITIONAL_JUMP)  ; LAB_00517766
    CMP EAX,0xa                         ; 00517761
    JNZ 0x00517754                      ; 00517764
        ;   XREF to: 00517754 (CONDITIONAL_JUMP)  ; LAB_00517754
    MOV EAX,dword ptr [ESP + 0x28]      ; 00517766
        ;   Label: LAB_00517766
    XOR ECX,ECX                         ; 0051776a
    MOV EBX,dword ptr [ESP + 0x28]      ; 0051776c
    MOV dword ptr [ESP + 0xc],ECX       ; 00517770
    MOV ESI,dword ptr [EAX + 0x2936c]   ; 00517774
    MOV EBX,dword ptr [EBX + 0x29370]   ; 0051777a
    TEST ESI,ESI                        ; 00517780
    JLE 0x005177f5                      ; 00517782
        ;   XREF to: 005177f5 (CONDITIONAL_JUMP)  ; LAB_005177f5
    MOV EAX,dword ptr [ESP + 0x28]      ; 00517784
        ;   Label: LAB_00517784
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00517788
    XOR EDI,EDI                         ; 0051778e
    TEST EDX,EDX                        ; 00517790
    JLE 0x005177de                      ; 00517792
        ;   XREF to: 005177de (CONDITIONAL_JUMP)  ; LAB_005177de
    LEA EAX,[EBX + 0x4]                 ; 00517794
    LEA ESI,[EBX + 0x8]                 ; 00517797
    MOV dword ptr [ESP + 0x10],EAX      ; 0051779a
    LEA EBP,[EBX + 0xc]                 ; 0051779e
    PUSH EBP                            ; 005177a1
        ;   Label: LAB_005177a1
    PUSH ESI                            ; 005177a2
    MOV EAX,dword ptr [ESP + 0x18]      ; 005177a3
    PUSH EAX                            ; 005177a7
    PUSH EBX                            ; 005177a8
    PUSH 0x59130d                       ; 005177a9 | = "%f,%f,%f,%f\n"
    MOV EDX,dword ptr [ESP + 0x40]      ; 005177ae
    PUSH EDX                            ; 005177b2
    INC EDI                             ; 005177b3
    ADD EBP,0x10                        ; 005177b4
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005177b7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x18                        ; 005177bc
    ADD ESI,0x10                        ; 005177bf
    MOV ECX,dword ptr [ESP + 0x10]      ; 005177c2
    MOV EAX,dword ptr [ESP + 0x28]      ; 005177c6
    ADD EBX,0x10                        ; 005177ca
    ADD ECX,0x10                        ; 005177cd
    MOV EDX,dword ptr [EAX + 0x28558]   ; 005177d0
    MOV dword ptr [ESP + 0x10],ECX      ; 005177d6
    CMP EDI,EDX                         ; 005177da
    JL 0x005177a1                       ; 005177dc
        ;   XREF to: 005177a1 (CONDITIONAL_JUMP)  ; LAB_005177a1
    MOV EDI,dword ptr [ESP + 0xc]       ; 005177de
        ;   Label: LAB_005177de
    MOV ESI,dword ptr [ESP + 0x28]      ; 005177e2
    INC EDI                             ; 005177e6
    MOV EBP,dword ptr [ESI + 0x2936c]   ; 005177e7
    MOV dword ptr [ESP + 0xc],EDI       ; 005177ed
    CMP EDI,EBP                         ; 005177f1
    JL 0x00517784                       ; 005177f3
        ;   XREF to: 00517784 (CONDITIONAL_JUMP)  ; LAB_00517784
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005177f5
        ;   Label: LAB_005177f5
    PUSH EDI                            ; 005177f9
        ;   Label: LAB_005177f9
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 005177fa
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 005177ff
    TEST EAX,EAX                        ; 00517802
    JL 0x0051780b                       ; 00517804
        ;   XREF to: 0051780b (CONDITIONAL_JUMP)  ; LAB_0051780b
    CMP EAX,0xa                         ; 00517806
    JNZ 0x005177f9                      ; 00517809
        ;   XREF to: 005177f9 (CONDITIONAL_JUMP)  ; LAB_005177f9
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051780b
        ;   Label: LAB_0051780b
    MOV ECX,dword ptr [EAX + 0x2936c]   ; 0051780f
    XOR EBX,EBX                         ; 00517815
    TEST ECX,ECX                        ; 00517817
    JLE 0x00517860                      ; 00517819
        ;   XREF to: 00517860 (CONDITIONAL_JUMP)  ; LAB_00517860
    XOR ESI,ESI                         ; 0051781b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051781d
        ;   Label: LAB_0051781d
    MOV EAX,dword ptr [EAX + 0x29374]   ; 00517821
    ADD EAX,ESI                         ; 00517827
    LEA EDI,[EAX + 0x8]                 ; 00517829
    PUSH EDI                            ; 0051782c
    LEA EDI,[EAX + 0x4]                 ; 0051782d
    PUSH EDI                            ; 00517830
    PUSH EAX                            ; 00517831
    PUSH 0x59131a                       ; 00517832 | = "%f,%f,%f\n"
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00517837
    PUSH EDI                            ; 0051783b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0051783c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00517841
    MOV EAX,dword ptr [ESP + 0x28]      ; 00517844
    INC EBX                             ; 00517848
    MOV EBP,dword ptr [EAX + 0x2936c]   ; 00517849
    ADD ESI,0xc                         ; 0051784f
    CMP EBX,EBP                         ; 00517852
    JL 0x0051781d                       ; 00517854
        ;   XREF to: 0051781d (CONDITIONAL_JUMP)  ; LAB_0051781d
    LEA EAX,[EAX]                       ; 00517856
    LEA EDX,[EDX]                       ; 0051785c
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00517860
        ;   Label: LAB_00517860
    PUSH ESI                            ; 00517864
        ;   Label: LAB_00517864
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00517865
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051786a
    TEST EAX,EAX                        ; 0051786d
    JL 0x00517876                       ; 0051786f
        ;   XREF to: 00517876 (CONDITIONAL_JUMP)  ; LAB_00517876
    CMP EAX,0xa                         ; 00517871
    JNZ 0x00517864                      ; 00517874
        ;   XREF to: 00517864 (CONDITIONAL_JUMP)  ; LAB_00517864
    MOV EAX,dword ptr [ESP + 0x28]      ; 00517876
        ;   Label: LAB_00517876
    MOV EDX,dword ptr [EAX + 0x2936c]   ; 0051787a
    XOR EBX,EBX                         ; 00517880
    TEST EDX,EDX                        ; 00517882
    JLE 0x005178d0                      ; 00517884
        ;   XREF to: 005178d0 (CONDITIONAL_JUMP)  ; LAB_005178d0
    XOR ESI,ESI                         ; 00517886
    MOV EAX,dword ptr [ESP + 0x28]      ; 00517888
        ;   Label: LAB_00517888
    MOV EAX,dword ptr [EAX + 0x29378]   ; 0051788c
    ADD EAX,ESI                         ; 00517892
    LEA EDI,[EAX + 0x8]                 ; 00517894
    PUSH EDI                            ; 00517897
    LEA EDI,[EAX + 0x4]                 ; 00517898
    PUSH EDI                            ; 0051789b
    PUSH EAX                            ; 0051789c
    PUSH 0x591324                       ; 0051789d | = "%f,%f,%f\n"
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005178a2
    PUSH ECX                            ; 005178a6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005178a7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 005178ac
    MOV EAX,dword ptr [ESP + 0x28]      ; 005178af
    INC EBX                             ; 005178b3
    MOV EDI,dword ptr [EAX + 0x2936c]   ; 005178b4
    ADD ESI,0xc                         ; 005178ba
    CMP EBX,EDI                         ; 005178bd
    JL 0x00517888                       ; 005178bf
        ;   XREF to: 00517888 (CONDITIONAL_JUMP)  ; LAB_00517888
    LEA EAX,[EAX]                       ; 005178c1
    LEA EDX,[EDX]                       ; 005178c7
    LEA EAX,[EAX]                       ; 005178cd
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005178d0
        ;   Label: LAB_005178d0
    TEST byte ptr [EAX + 0xc],0x20      ; 005178d4
    JZ 0x005178fc                       ; 005178d8
        ;   XREF to: 005178fc (CONDITIONAL_JUMP)  ; LAB_005178fc
    MOV EBP,0x59132e                    ; 005178da | = "..\\core\\skeleton.cpp"
    MOV EAX,0x144                       ; 005178df
    PUSH 0x591343                       ; 005178e4 | = "CSkeleton::loadStream - error reading..."
    MOV dword ptr [0x01cc4800],EBP      ; 005178e9 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 005178ef | DAT_01cc4804
    CALL FUN_004c8440                   ; 005178f4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005178f9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005178fc
        ;   Label: LAB_005178fc
    PUSH EDX                            ; 00517900
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00517901
    PUSH ECX                            ; 00517905
    CALL core_motion.cpp_CMotionList_load_FUN_004e0920 ; 00517906
        ;   XREF to: 004e0920 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_load_FUN_004e0920()
    ADD ESP,0x8                         ; 0051790b
    CMP dword ptr [ESP],0x3             ; 0051790e
    JL 0x0051795d                       ; 00517912
        ;   XREF to: 0051795d (CONDITIONAL_JUMP)  ; LAB_0051795d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00517914
    PUSH ESI                            ; 00517918
        ;   Label: LAB_00517918
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00517919
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051791e
    TEST EAX,EAX                        ; 00517921
    JL 0x0051792a                       ; 00517923
        ;   XREF to: 0051792a (CONDITIONAL_JUMP)  ; LAB_0051792a
    CMP EAX,0xa                         ; 00517925
    JNZ 0x00517918                      ; 00517928
        ;   XREF to: 00517918 (CONDITIONAL_JUMP)  ; LAB_00517918
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051792a
        ;   Label: LAB_0051792a
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0051792e
    XOR ESI,ESI                         ; 00517934
    TEST EDI,EDI                        ; 00517936
    JLE 0x0051795d                      ; 00517938
        ;   XREF to: 0051795d (CONDITIONAL_JUMP)  ; LAB_0051795d
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051793a
    PUSH EBX                            ; 0051793e
        ;   Label: LAB_0051793e
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0051793f
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00517944
    TEST EAX,EAX                        ; 00517947
    JL 0x00517950                       ; 00517949
        ;   XREF to: 00517950 (CONDITIONAL_JUMP)  ; LAB_00517950
    CMP EAX,0xa                         ; 0051794b
    JNZ 0x0051793e                      ; 0051794e
        ;   XREF to: 0051793e (CONDITIONAL_JUMP)  ; LAB_0051793e
    MOV EAX,dword ptr [ESP + 0x28]      ; 00517950
        ;   Label: LAB_00517950
    INC ESI                             ; 00517954
    CMP ESI,dword ptr [EAX + 0x28558]   ; 00517955
    JL 0x0051793e                       ; 0051795b
        ;   XREF to: 0051793e (CONDITIONAL_JUMP)  ; LAB_0051793e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051795d
        ;   Label: LAB_0051795d
    TEST byte ptr [EAX + 0xc],0x20      ; 00517961
    JNZ 0x00517999                      ; 00517965
        ;   XREF to: 00517999 (CONDITIONAL_JUMP)  ; LAB_00517999
    ADD ESP,0x14                        ; 00517967
    POP EBP                             ; 0051796a
    POP EDI                             ; 0051796b
    POP ESI                             ; 0051796c
    POP EBX                             ; 0051796d
    RET                                 ; 0051796e
    PUSH ESI                            ; 0051796f
        ;   Label: LAB_0051796f
    PUSH EAX                            ; 00517970
    MOV EDI,0x591295                    ; 00517971 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x10f                       ; 00517976
    PUSH 0x5912aa                       ; 0051797b | = "Skeleton version %d is newer than .EX..."
    MOV dword ptr [0x01cc4800],EDI      ; 00517980 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00517986 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0051798c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 00517991
    JMP 0x0051769d                      ; 00517994
        ;   XREF to: 0051769d (UNCONDITIONAL_JUMP)  ; LAB_0051769d
    MOV EBX,0x59136f                    ; 00517999 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00517999
    MOV ESI,0x15f                       ; 0051799e
    PUSH 0x591384                       ; 005179a3 | = "CSkeleton::loadStream - error reading..."
    MOV dword ptr [0x01cc4800],EBX      ; 005179a8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005179ae | DAT_01cc4804
    CALL FUN_004c8440                   ; 005179b4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005179b9
    ADD ESP,0x14                        ; 005179bc
    POP EBP                             ; 005179bf
    POP EDI                             ; 005179c0
    POP ESI                             ; 005179c1
    POP EBX                             ; 005179c2
    RET                                 ; 005179c3

