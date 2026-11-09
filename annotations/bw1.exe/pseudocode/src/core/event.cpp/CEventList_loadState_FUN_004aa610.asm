; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_loadState_FUN_004aa610(CEventList *this_ptr,_FILE *file_handle)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004d6990 at 004d7048
;
; Referenced Globals:
;   undefined4 DAT_005dedd5
;   TerminatedCString s_core_event_cpp_005dedd9
;   TerminatedCString s_CEventList_loadState_fil_005dedeb
;   undefined4 DAT_005dee4e
;   TerminatedCString s_anon_005dee52
;   undefined4 DAT_005dee59
;   TerminatedCString s_anon_005dee5d
;   undefined4 DAT_005dee64
;   TerminatedCString s_anon_005dee68
;   undefined4 DAT_005dee6f
;   TerminatedCString s_f_005dee73
;   undefined4 DAT_005dee7e
;   TerminatedCString s_d_005dee82
;   undefined4 DAT_005dee8d
;   TerminatedCString s_anon_005dee91
;   ... and 4 more
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_004a19f0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa610
        ;   Label: core_event.cpp_CEventList_loadState_FUN_004aa610
    PUSH ESI                            ; 004aa611
    PUSH EDI                            ; 004aa612
    PUSH EBP                            ; 004aa613
    SUB ESP,0x110                       ; 004aa614
    MOV EBX,dword ptr [ESP + 0x124]     ; 004aa61a
    MOV ESI,dword ptr [ESP + 0x128]     ; 004aa621
    PUSH EBX                            ; 004aa628
    CALL core_event.cpp_CEventList_reset_FUN_004a19f0 ; 004aa629
        ;   XREF to: 004a19f0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_004a19f0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004aa62e
    PUSH ESI                            ; 004aa631
    PUSH 0xff                           ; 004aa632
    LEA EAX,[ESP + 0x8]                 ; 004aa637
    PUSH EAX                            ; 004aa63b
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004aa63c
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004aa641
    LEA EAX,[ESP + 0x100]               ; 004aa644
    PUSH EAX                            ; 004aa64b
    PUSH 0x5dedd5                       ; 004aa64c | DAT_005dedd5
    PUSH ESI                            ; 004aa651
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa652
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 004aa657
    MOV EDX,dword ptr [ESP + 0x100]     ; 004aa65a
    CMP EDX,0x5                         ; 004aa661
    JG 0x004aa93b                       ; 004aa664
        ;   XREF to: 004aa93b (CONDITIONAL_JUMP)  ; LAB_004aa93b
    PUSH ESI                            ; 004aa66a
        ;   Label: LAB_004aa66a
    PUSH 0xff                           ; 004aa66b
    LEA EAX,[ESP + 0x8]                 ; 004aa670
    PUSH EAX                            ; 004aa674
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004aa675
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004aa67a
    PUSH EBX                            ; 004aa67d
    PUSH 0x5dee4e                       ; 004aa67e | DAT_005dee4e
    PUSH ESI                            ; 004aa683
    XOR EBP,EBP                         ; 004aa684
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa686
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [EBX]             ; 004aa68b
    ADD ESP,0xc                         ; 004aa68d
    TEST EAX,EAX                        ; 004aa690
    JLE 0x004aa6b0                      ; 004aa692
        ;   XREF to: 004aa6b0 (CONDITIONAL_JUMP)  ; LAB_004aa6b0
    LEA EDI,[EBX + 0x4]                 ; 004aa694
    PUSH EDI                            ; 004aa697
        ;   Label: LAB_004aa697
    PUSH 0x5dee52                       ; 004aa698 | = "%[^\n]\n"
    PUSH ESI                            ; 004aa69d
    INC EBP                             ; 004aa69e
    ADD EDI,0x20                        ; 004aa69f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa6a2
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EDX,dword ptr [EBX]             ; 004aa6a7
    ADD ESP,0xc                         ; 004aa6a9
    CMP EBP,EDX                         ; 004aa6ac
    JL 0x004aa697                       ; 004aa6ae
        ;   XREF to: 004aa697 (CONDITIONAL_JUMP)  ; LAB_004aa697
    PUSH ESI                            ; 004aa6b0
        ;   Label: LAB_004aa6b0
    PUSH 0xff                           ; 004aa6b1
    LEA EDI,[ESP + 0x8]                 ; 004aa6b6
    PUSH EDI                            ; 004aa6ba
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004aa6bb
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004aa6c0
    LEA EDI,[EBX + 0xc84]               ; 004aa6c3
    PUSH EDI                            ; 004aa6c9
    PUSH 0x5dee59                       ; 004aa6ca | DAT_005dee59
    PUSH ESI                            ; 004aa6cf
    XOR EBP,EBP                         ; 004aa6d0
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa6d2
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV ECX,dword ptr [EBX + 0xc84]     ; 004aa6d7
    ADD ESP,0xc                         ; 004aa6dd
    TEST ECX,ECX                        ; 004aa6e0
    JLE 0x004aa710                      ; 004aa6e2
        ;   XREF to: 004aa710 (CONDITIONAL_JUMP)  ; LAB_004aa710
    LEA EDI,[EBX + 0xc88]               ; 004aa6e4
    PUSH EDI                            ; 004aa6ea
        ;   Label: LAB_004aa6ea
    PUSH 0x5dee5d                       ; 004aa6eb | = "%[^\n]\n"
    PUSH ESI                            ; 004aa6f0
    INC EBP                             ; 004aa6f1
    ADD EDI,0x20                        ; 004aa6f2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa6f5
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [EBX + 0xc84]     ; 004aa6fa
    ADD ESP,0xc                         ; 004aa700
    CMP EBP,EAX                         ; 004aa703
    JL 0x004aa6ea                       ; 004aa705
        ;   XREF to: 004aa6ea (CONDITIONAL_JUMP)  ; LAB_004aa6ea
    LEA EAX,[EAX]                       ; 004aa707
    LEA EDX,[EDX]                       ; 004aa70d
    PUSH ESI                            ; 004aa710
        ;   Label: LAB_004aa710
    PUSH 0xff                           ; 004aa711
    LEA EDI,[ESP + 0x8]                 ; 004aa716
    PUSH EDI                            ; 004aa71a
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004aa71b
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004aa720
    LEA EDI,[EBX + 0x258c]              ; 004aa723
    PUSH EDI                            ; 004aa729
    PUSH 0x5dee64                       ; 004aa72a | DAT_005dee64
    PUSH ESI                            ; 004aa72f
    XOR EBP,EBP                         ; 004aa730
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa732
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EDX,dword ptr [EBX + 0x258c]    ; 004aa737
    ADD ESP,0xc                         ; 004aa73d
    TEST EDX,EDX                        ; 004aa740
    JLE 0x004aa770                      ; 004aa742
        ;   XREF to: 004aa770 (CONDITIONAL_JUMP)  ; LAB_004aa770
    LEA EDI,[EBX + 0x2590]              ; 004aa744
    PUSH EDI                            ; 004aa74a
        ;   Label: LAB_004aa74a
    PUSH 0x5dee68                       ; 004aa74b | = "%[^\n]\n"
    PUSH ESI                            ; 004aa750
    INC EBP                             ; 004aa751
    ADD EDI,0x20                        ; 004aa752
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa755
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV ECX,dword ptr [EBX + 0x258c]    ; 004aa75a
    ADD ESP,0xc                         ; 004aa760
    CMP EBP,ECX                         ; 004aa763
    JL 0x004aa74a                       ; 004aa765
        ;   XREF to: 004aa74a (CONDITIONAL_JUMP)  ; LAB_004aa74a
    LEA EAX,[EAX]                       ; 004aa767
    LEA EDX,[EDX]                       ; 004aa76d
    CMP dword ptr [ESP + 0x100],0x2     ; 004aa770
        ;   Label: LAB_004aa770
    JL 0x004aa800                       ; 004aa778
        ;   XREF to: 004aa800 (CONDITIONAL_JUMP)  ; LAB_004aa800
    PUSH ESI                            ; 004aa77e
    PUSH 0xff                           ; 004aa77f
    LEA EDI,[ESP + 0x8]                 ; 004aa784
    PUSH EDI                            ; 004aa788
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004aa789
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004aa78e
    LEA EDI,[EBX + 0x3210]              ; 004aa791
    PUSH EDI                            ; 004aa797
    PUSH 0x5dee6f                       ; 004aa798 | DAT_005dee6f
    PUSH ESI                            ; 004aa79d
    XOR EBP,EBP                         ; 004aa79e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa7a0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 004aa7a5
    MOV EAX,dword ptr [EBX + 0x3210]    ; 004aa7a8
    MOV dword ptr [ESP + 0x10c],EBP     ; 004aa7ae
    TEST EAX,EAX                        ; 004aa7b5
    JLE 0x004aa800                      ; 004aa7b7
        ;   XREF to: 004aa800 (CONDITIONAL_JUMP)  ; LAB_004aa800
    LEA EDI,[EBX + 0x3214]              ; 004aa7b9
    LEA EBP,[EBX + 0x3354]              ; 004aa7bf
    PUSH EDI                            ; 004aa7c5
        ;   Label: LAB_004aa7c5
    PUSH EBP                            ; 004aa7c6
    PUSH 0x5dee73                       ; 004aa7c7 | = "%f, %[^\n]\n"
    PUSH ESI                            ; 004aa7cc
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa7cd
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 004aa7d2
    ADD EDI,0x20                        ; 004aa7d5
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004aa7d8
    ADD EBP,0x4                         ; 004aa7df
    INC EDX                             ; 004aa7e2
    MOV ECX,dword ptr [EBX + 0x3210]    ; 004aa7e3
    MOV dword ptr [ESP + 0x10c],EDX     ; 004aa7e9
    CMP EDX,ECX                         ; 004aa7f0
    JL 0x004aa7c5                       ; 004aa7f2
        ;   XREF to: 004aa7c5 (CONDITIONAL_JUMP)  ; LAB_004aa7c5
    LEA EAX,[EAX]                       ; 004aa7f4
    LEA EDX,[EDX]                       ; 004aa7fa
    CMP dword ptr [ESP + 0x100],0x3     ; 004aa800
        ;   Label: LAB_004aa800
    JL 0x004aa890                       ; 004aa808
        ;   XREF to: 004aa890 (CONDITIONAL_JUMP)  ; LAB_004aa890
    PUSH ESI                            ; 004aa80e
    PUSH 0xff                           ; 004aa80f
    LEA EDI,[ESP + 0x8]                 ; 004aa814
    PUSH EDI                            ; 004aa818
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004aa819
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004aa81e
    LEA EDI,[EBX + 0x337c]              ; 004aa821
    PUSH EDI                            ; 004aa827
    PUSH 0x5dee7e                       ; 004aa828 | DAT_005dee7e
    PUSH ESI                            ; 004aa82d
    XOR EBP,EBP                         ; 004aa82e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa830
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004aa835
    ADD ESP,0xc                         ; 004aa83b
    TEST EAX,EAX                        ; 004aa83e
    JLE 0x004aa890                      ; 004aa840
        ;   XREF to: 004aa890 (CONDITIONAL_JUMP)  ; LAB_004aa890
    LEA EAX,[EBX + 0x3380]              ; 004aa842
    LEA EDI,[EBX + 0x34c0]              ; 004aa848
    MOV dword ptr [ESP + 0x108],EAX     ; 004aa84e
    MOV EDX,dword ptr [ESP + 0x108]     ; 004aa855
        ;   Label: LAB_004aa855
    PUSH EDX                            ; 004aa85c
    PUSH EDI                            ; 004aa85d
    PUSH 0x5dee82                       ; 004aa85e | = "%d, %[^\n]\n"
    PUSH ESI                            ; 004aa863
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa864
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 004aa869
    INC EBP                             ; 004aa86c
    MOV ECX,dword ptr [ESP + 0x108]     ; 004aa86d
    ADD EDI,0x4                         ; 004aa874
    ADD ECX,0x20                        ; 004aa877
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004aa87a
    MOV dword ptr [ESP + 0x108],ECX     ; 004aa880
    CMP EBP,EAX                         ; 004aa887
    JL 0x004aa855                       ; 004aa889
        ;   XREF to: 004aa855 (CONDITIONAL_JUMP)  ; LAB_004aa855
    LEA EAX,[EAX]                       ; 004aa88b
    MOV ECX,ECX                         ; 004aa88e
    CMP dword ptr [ESP + 0x100],0x4     ; 004aa890
        ;   Label: LAB_004aa890
    JL 0x004aa920                       ; 004aa898
        ;   XREF to: 004aa920 (CONDITIONAL_JUMP)  ; LAB_004aa920
    PUSH ESI                            ; 004aa89e
    PUSH 0xff                           ; 004aa89f
    LEA EDI,[ESP + 0x8]                 ; 004aa8a4
    PUSH EDI                            ; 004aa8a8
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004aa8a9
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004aa8ae
    LEA EDI,[EBX + 0x34e8]              ; 004aa8b1
    PUSH EDI                            ; 004aa8b7
    PUSH 0x5dee8d                       ; 004aa8b8 | DAT_005dee8d
    PUSH ESI                            ; 004aa8bd
    XOR EBP,EBP                         ; 004aa8be
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa8c0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 004aa8c5
    ADD ESP,0xc                         ; 004aa8cb
    TEST ECX,ECX                        ; 004aa8ce
    JLE 0x004aa920                      ; 004aa8d0
        ;   XREF to: 004aa920 (CONDITIONAL_JUMP)  ; LAB_004aa920
    LEA EAX,[EBX + 0x37da]              ; 004aa8d2
    LEA EDI,[EBX + 0x34ec]              ; 004aa8d8
    MOV dword ptr [ESP + 0x104],EAX     ; 004aa8de
    MOV EAX,dword ptr [ESP + 0x104]     ; 004aa8e5
        ;   Label: LAB_004aa8e5
    PUSH EAX                            ; 004aa8ec
    PUSH EDI                            ; 004aa8ed
    PUSH 0x5dee91                       ; 004aa8ee | = "\"%[^\"]\" , \"%[^\"]\"\n"
    PUSH ESI                            ; 004aa8f3
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa8f4
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 004aa8f9
    INC EBP                             ; 004aa8fc
    MOV EDX,dword ptr [ESP + 0x104]     ; 004aa8fd
    ADD EDI,0x1e                        ; 004aa904
    ADD EDX,0x1e                        ; 004aa907
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 004aa90a
    MOV dword ptr [ESP + 0x104],EDX     ; 004aa910
    CMP EBP,ECX                         ; 004aa917
    JL 0x004aa8e5                       ; 004aa919
        ;   XREF to: 004aa8e5 (CONDITIONAL_JUMP)  ; LAB_004aa8e5
    LEA EAX,[EAX]                       ; 004aa91b
    MOV ECX,ECX                         ; 004aa91e
    CMP dword ptr [ESP + 0x100],0x5     ; 004aa920
        ;   Label: LAB_004aa920
    JGE 0x004aa966                      ; 004aa928
        ;   XREF to: 004aa966 (CONDITIONAL_JUMP)  ; LAB_004aa966
    LEA EAX,[EAX]                       ; 004aa92a
    ADD ESP,0x110                       ; 004aa930
        ;   Label: LAB_004aa930
    POP EBP                             ; 004aa936
    POP EDI                             ; 004aa937
    POP ESI                             ; 004aa938
    POP EBX                             ; 004aa939
    RET                                 ; 004aa93a
    PUSH 0x5                            ; 004aa93b
        ;   Label: LAB_004aa93b
    PUSH EDX                            ; 004aa93d
    MOV ECX,0x5dedd9                    ; 004aa93e | = "..\\core\\event.cpp"
    MOV EDI,0xf83                       ; 004aa943
    PUSH 0x5dedeb                       ; 004aa948 | = "CEventList::loadState - file version ..."
    MOV dword ptr [0x01d1d400],ECX      ; 004aa94d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004aa953 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004aa959
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004aa95e
    JMP 0x004aa66a                      ; 004aa961
        ;   XREF to: 004aa66a (UNCONDITIONAL_JUMP)  ; LAB_004aa66a
    PUSH ESI                            ; 004aa966
        ;   Label: LAB_004aa966
    PUSH 0xff                           ; 004aa967
    LEA EDI,[ESP + 0x8]                 ; 004aa96c
    PUSH EDI                            ; 004aa970
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004aa971
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004aa976
    LEA EDI,[EBX + 0x1908]              ; 004aa979
    PUSH EDI                            ; 004aa97f
    PUSH 0x5deea4                       ; 004aa980 | DAT_005deea4
    PUSH ESI                            ; 004aa985
    XOR EDI,EDI                         ; 004aa986
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa988
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EBP,dword ptr [EBX + 0x1908]    ; 004aa98d
    ADD ESP,0xc                         ; 004aa993
    TEST EBP,EBP                        ; 004aa996
    JLE 0x004aa930                      ; 004aa998
        ;   XREF to: 004aa930 (CONDITIONAL_JUMP)  ; LAB_004aa930
    LEA EBP,[EBX + 0x190c]              ; 004aa99a
    PUSH EBP                            ; 004aa9a0
        ;   Label: LAB_004aa9a0
    PUSH 0x5deea8                       ; 004aa9a1 | = "%[^\n]\n"
    PUSH ESI                            ; 004aa9a6
    INC EDI                             ; 004aa9a7
    ADD EBP,0x20                        ; 004aa9a8
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004aa9ab
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [EBX + 0x1908]    ; 004aa9b0
    ADD ESP,0xc                         ; 004aa9b6
    CMP EDI,EAX                         ; 004aa9b9
    JL 0x004aa9a0                       ; 004aa9bb
        ;   XREF to: 004aa9a0 (CONDITIONAL_JUMP)  ; LAB_004aa9a0
    ADD ESP,0x110                       ; 004aa9bd
    POP EBP                             ; 004aa9c3
    POP EDI                             ; 004aa9c4
    POP ESI                             ; 004aa9c5
    POP EBX                             ; 004aa9c6
    RET                                 ; 004aa9c7

