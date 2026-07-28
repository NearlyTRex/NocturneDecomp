; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * cockpit_ckptutil_c_FUN_00430630(int param_1,int *param_2,void *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int param_9)
;
; Local Variables:
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Reached_max_trace_edges_0057aafb
;   TerminatedCString s_cockpit_ckptutil_c_0057ab2a
;   TerminatedCString s_Reached_max_trace_edges_0057ab40
;   TerminatedCString s_cockpit_ckptutil_c_0057ab6f
;   TerminatedCString s_Unable_to_allocate_u_byt_0057ab85
;   TerminatedCString s_cockpit_ckptutil_c_0057abb0
;   undefined2 DAT_00765c6c
;   undefined2 DAT_00765c6e
;   undefined2 DAT_00765c70
;   undefined2 DAT_00765c72
;   undefined4 DAT_00765c72+1
;   undefined2 DAT_00765c74
;   undefined2 DAT_00765c76
;   undefined2 DAT_00765c78
;   undefined2 DAT_00765c7a
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_realloc_FUN_00564a70
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430630
        ;   Label: cockpit_ckptutil.c_FUN_00430630
    PUSH ESI                            ; 00430631
    PUSH EDI                            ; 00430632
    PUSH EBP                            ; 00430633
    SUB ESP,0x1e4                       ; 00430634
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 0043063a
    XOR EBX,EBX                         ; 00430641
    TEST EDX,EDX                        ; 00430643
    JZ 0x0043095e                       ; 00430645
        ;   XREF to: 0043095e (CONDITIONAL_JUMP)  ; LAB_0043095e
    MOV EAX,dword ptr [ESP + 0x208]     ; 0043064b
    DEC EAX                             ; 00430652
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00430653
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0043065a
    DEC EAX                             ; 00430661
    XOR EBP,EBP                         ; 00430662
    MOV dword ptr [ESP + 0x108],EAX     ; 00430664
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0043066b
    MOV ECX,dword ptr [ESP + 0x108]     ; 00430672
    MOV dword ptr [ESP + 0x10c],EAX     ; 00430679
    TEST ECX,ECX                        ; 00430680
    JLE 0x00430991                      ; 00430682
        ;   XREF to: 00430991 (CONDITIONAL_JUMP)  ; LAB_00430991
    LEA EAX,[EBP + 0x1]                 ; 00430688
        ;   Label: LAB_00430688
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0043068b
    MOV dword ptr [ESP + 0x18c],EAX     ; 00430692
    IMUL EAX,EBP,0x84                   ; 00430699
    MOV dword ptr [ESP + 0x128],EAX     ; 0043069f
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 004306a6
    MOV dword ptr [ESP + 0x184],EAX     ; 004306ad
    MOV dword ptr [ESP + 0x174],EAX     ; 004306b4
    MOV EDI,EAX                         ; 004306bb
    IMUL EAX,EAX,0x84                   ; 004306bd
    XOR ESI,ESI                         ; 004306c3
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 004306c5
    MOV dword ptr [ESP + 0x114],ESI     ; 004306cc
    ADD EDX,EAX                         ; 004306d3
    MOV EAX,EDI                         ; 004306d5
    MOV dword ptr [ESP + 0x1d4],ESI     ; 004306d7
    MOV dword ptr [ESP + 0x118],EAX     ; 004306de
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004306e5
    MOV dword ptr [ESP + 0x1c0],EDX     ; 004306ec
    MOV dword ptr [ESP + 0x110],EAX     ; 004306f3
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 004306fa
        ;   Label: LAB_004306fa
    ADD EAX,dword ptr [ESP + 0x128]     ; 00430701
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 00430708
    CMP EDX,dword ptr [EAX]             ; 0043070f
    JGE 0x0043096d                      ; 00430711
        ;   XREF to: 0043096d (CONDITIONAL_JUMP)  ; LAB_0043096d
    ADD EAX,dword ptr [ESP + 0x114]     ; 00430717
    MOV ESI,dword ptr [EAX + 0x4]       ; 0043071e
    MOV EDI,dword ptr [EAX + 0x44]      ; 00430721
    ADD EDI,ESI                         ; 00430724
    DEC EDI                             ; 00430726
    CMP EBX,0x200                       ; 00430727
    JL 0x00430763                       ; 0043072d
        ;   XREF to: 00430763 (CONDITIONAL_JUMP)  ; LAB_00430763
    PUSH EBP                            ; 0043072f
    PUSH EBX                            ; 00430730
    PUSH 0x57aafb                       ; 00430731 | = "Reached max trace edges: edges %d, sc..."
    LEA EAX,[ESP + 0xc]                 ; 00430736
    PUSH EAX                            ; 0043073a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0043073b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x57ab2a                    ; 00430740 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 00430745
    MOV [0x01cc4800],EAX                ; 00430748 | PTR_01cc4800
    MOV EAX,ESP                         ; 0043074d
    MOV EDX,0x87e                       ; 0043074f
    PUSH EAX                            ; 00430754
    MOV dword ptr [0x01cc4804],EDX      ; 00430755 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0043075b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00430760
    TEST ESI,ESI                        ; 00430763
        ;   Label: LAB_00430763
    JLE 0x00430cdb                      ; 00430765
        ;   XREF to: 00430cdb (CONDITIONAL_JUMP)  ; LAB_00430cdb
    LEA EAX,[ESI + 0x1]                 ; 0043076b
    MOV dword ptr [ESP + 0x120],EAX     ; 0043076e
    LEA EAX,[ESI + -0x1]                ; 00430775
    XOR ECX,ECX                         ; 00430778
    MOV dword ptr [ESP + 0x11c],EAX     ; 0043077a
    MOV EAX,dword ptr [ESP + 0x110]     ; 00430781
    MOV dword ptr [ESP + 0x130],ECX     ; 00430788
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0043078f
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00430796
    MOV dword ptr [ESP + 0x148],ECX     ; 0043079d
        ;   Label: LAB_0043079d
    MOV dword ptr [ESP + 0x14c],EAX     ; 004307a4
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 004307ab
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 004307b6
    MOV EDX,dword ptr [ESP + 0x148]     ; 004307bd
    CMP EDX,dword ptr [EAX]             ; 004307c4
    JGE 0x00430cdb                      ; 004307c6
        ;   XREF to: 00430cdb (CONDITIONAL_JUMP)  ; LAB_00430cdb
    ADD EAX,dword ptr [ESP + 0x130]     ; 004307cc
    MOV EDX,dword ptr [EAX + 0x4]       ; 004307d3
    MOV EAX,dword ptr [EAX + 0x44]      ; 004307d6
    ADD EAX,EDX                         ; 004307d9
    DEC EAX                             ; 004307db
    XOR ECX,ECX                         ; 004307dc
    MOV dword ptr [ESP + 0x180],EAX     ; 004307de
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004307e5
    MOV dword ptr [ESP + 0x1bc],ECX     ; 004307ec
    TEST EAX,EAX                        ; 004307f3
    JLE 0x00430833                      ; 004307f5
        ;   XREF to: 00430833 (CONDITIONAL_JUMP)  ; LAB_00430833
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 004307f7
    MOV EAX,dword ptr [EAX]             ; 004307fe
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00430800
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00430807
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0043080e
    MOV EAX,dword ptr [EAX + 0x40]      ; 00430815
    ADD ECX,EAX                         ; 00430818
    LEA EAX,[ECX + -0x1]                ; 0043081a
    MOV dword ptr [ESP + 0x19c],EAX     ; 0043081d
    CMP EDX,EAX                         ; 00430824
    JGE 0x00430833                      ; 00430826
        ;   XREF to: 00430833 (CONDITIONAL_JUMP)  ; LAB_00430833
    MOV dword ptr [ESP + 0x1bc],0x1     ; 00430828
    CMP EDX,dword ptr [ESP + 0x11c]     ; 00430833
        ;   Label: LAB_00430833
    JGE 0x00430aa0                      ; 0043083a
        ;   XREF to: 00430aa0 (CONDITIONAL_JUMP)  ; LAB_00430aa0
    CMP ESI,dword ptr [ESP + 0x180]     ; 00430840
    JG 0x00430aa0                       ; 00430847
        ;   XREF to: 00430aa0 (CONDITIONAL_JUMP)  ; LAB_00430aa0
    LEA EAX,[EBX*0x8 + 0x0]             ; 0043084d
    LEA ECX,[EBX + 0x1]                 ; 00430854
    MOV dword ptr [ESP + 0x1d8],ECX     ; 00430857
    MOV ECX,dword ptr [ESP + 0x1bc]     ; 0043085e
    ADD EAX,0x765c6c                    ; 00430865 | DAT_00765c6c
    TEST ECX,ECX                        ; 0043086a
    JZ 0x004309f6                       ; 0043086c
        ;   XREF to: 004309f6 (CONDITIONAL_JUMP)  ; LAB_004309f6
    MOV ECX,ESI                         ; 00430872
    SUB ECX,dword ptr [ESP + 0x19c]     ; 00430874
    DEC ECX                             ; 0043087b
    CMP ECX,dword ptr [ESP + 0x210]     ; 0043087c
    JG 0x00430aa0                       ; 00430883
        ;   XREF to: 00430aa0 (CONDITIONAL_JUMP)  ; LAB_00430aa0
    XOR EBX,EBX                         ; 00430889
    MOV EDX,dword ptr [ESP + 0x19c]     ; 0043088b
    MOV dword ptr [ESP + 0x15c],EBX     ; 00430892
    MOV BX,word ptr [EAX]               ; 00430899 | DAT_00765c6c
    MOV ECX,EBP                         ; 0043089c
    AND EBX,0xffff0000                  ; 0043089e
    MOV dword ptr [ESP + 0x154],ESI     ; 004308a4
    MOV word ptr [EAX],BX               ; 004308ab | DAT_00765c6c
    OR EBX,EDX                          ; 004308ae
    MOV DX,word ptr [EAX + 0x2]         ; 004308b0 | DAT_00765c6e
    MOV dword ptr [ESP + 0x158],EBP     ; 004308b4
    AND EDX,0xffff0000                  ; 004308bb
    MOV word ptr [EAX],BX               ; 004308c1 | DAT_00765c6c
    MOV EBX,EDX                         ; 004308c4
    MOV word ptr [EAX + 0x2],DX         ; 004308c6 | DAT_00765c6e
    OR EBX,ECX                          ; 004308ca
    MOV CX,word ptr [EAX + 0x4]         ; 004308cc | DAT_00765c70
    MOV word ptr [EAX + 0x2],BX         ; 004308d0 | DAT_00765c6e
    AND ECX,0xffff0000                  ; 004308d4
    MOV EDX,dword ptr [ESP + 0x154]     ; 004308da
    MOV word ptr [EAX + 0x4],CX         ; 004308e1 | DAT_00765c70
    MOV EBX,ECX                         ; 004308e5
    MOV CX,word ptr [EAX + 0x6]         ; 004308e7 | DAT_00765c72
    OR EBX,EDX                          ; 004308eb
    MOV EDX,dword ptr [ESP + 0x158]     ; 004308ed
    AND ECX,0xffff8000                  ; 004308f4
    MOV word ptr [EAX + 0x4],BX         ; 004308fa | DAT_00765c70
    AND DH,0x7f                         ; 004308fe
    MOV EBX,ECX                         ; 00430901
    MOV word ptr [EAX + 0x6],CX         ; 00430903 | DAT_00765c72
    OR EBX,EDX                          ; 00430907
    MOV word ptr [EAX + 0x6],BX         ; 00430909 | DAT_00765c72
    MOV EDX,dword ptr [ESP + 0x15c]     ; 0043090d
    MOV BL,byte ptr [EAX + 0x7]         ; 00430914 | DAT_00765c72+1
    XOR DH,DH                           ; 00430917
    AND BL,0x7f                         ; 00430919
    AND DL,0x1                          ; 0043091c
    MOV byte ptr [EAX + 0x7],BL         ; 0043091f | DAT_00765c72+1
    SHL EDX,0xf                         ; 00430922
    MOV CX,word ptr [EAX + 0x6]         ; 00430925 | DAT_00765c72
    OR ECX,EDX                          ; 00430929
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 0043092b
    MOV word ptr [EAX + 0x6],CX         ; 00430932 | DAT_00765c72
        ;   Label: LAB_00430932
    MOV EDX,dword ptr [ESP + 0x130]     ; 00430936
        ;   Label: LAB_00430936
    MOV ECX,dword ptr [ESP + 0x148]     ; 0043093d
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00430944
    ADD EDX,0x4                         ; 0043094b
    INC ECX                             ; 0043094e
    ADD EAX,0x4                         ; 0043094f
    MOV dword ptr [ESP + 0x130],EDX     ; 00430952
    JMP 0x0043079d                      ; 00430959
        ;   XREF to: 0043079d (UNCONDITIONAL_JUMP)  ; LAB_0043079d
    XOR ESI,ESI                         ; 0043095e
        ;   Label: LAB_0043095e
    MOV EAX,ESI                         ; 00430960
    ADD ESP,0x1e4                       ; 00430962
    POP EBP                             ; 00430968
    POP EDI                             ; 00430969
    POP ESI                             ; 0043096a
    POP EBX                             ; 0043096b
    RET                                 ; 0043096c
    MOV ESI,dword ptr [ESP + 0x10c]     ; 0043096d
        ;   Label: LAB_0043096d
    MOV EDI,dword ptr [ESP + 0x108]     ; 00430974
    ADD ESI,0x84                        ; 0043097b
    INC EBP                             ; 00430981
    MOV dword ptr [ESP + 0x10c],ESI     ; 00430982
    CMP EBP,EDI                         ; 00430989
    JL 0x00430688                       ; 0043098b
        ;   XREF to: 00430688 (CONDITIONAL_JUMP)  ; LAB_00430688
    TEST EBX,EBX                        ; 00430991
        ;   Label: LAB_00430991
    JNZ 0x0043102d                      ; 00430993
        ;   XREF to: 0043102d (CONDITIONAL_JUMP)  ; LAB_0043102d
    CMP dword ptr [ESP + 0x200],0x0     ; 00430999
    JNZ 0x004309ac                      ; 004309a1
        ;   XREF to: 004309ac (CONDITIONAL_JUMP)  ; LAB_004309ac
    MOV EAX,dword ptr [ESP + 0x204]     ; 004309a3
    MOV dword ptr [EAX],EBX             ; 004309aa
    MOV ESI,dword ptr [ESP + 0x200]     ; 004309ac
        ;   Label: LAB_004309ac
    MOV EAX,ESI                         ; 004309b3
    ADD ESP,0x1e4                       ; 004309b5
    POP EBP                             ; 004309bb
    POP EDI                             ; 004309bc
    POP ESI                             ; 004309bd
    POP EBX                             ; 004309be
    RET                                 ; 004309bf
    MOV EDI,dword ptr [ESP + 0x114]     ; 004309c0
        ;   Label: LAB_004309c0
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004309c7
    MOV ESI,dword ptr [ESP + 0x110]     ; 004309ce
    ADD EDI,0x4                         ; 004309d5
    INC EAX                             ; 004309d8
    ADD ESI,0x4                         ; 004309d9
    MOV dword ptr [ESP + 0x114],EDI     ; 004309dc
    MOV dword ptr [ESP + 0x1d4],EAX     ; 004309e3
    MOV dword ptr [ESP + 0x110],ESI     ; 004309ea
    JMP 0x004306fa                      ; 004309f1
        ;   XREF to: 004306fa (UNCONDITIONAL_JUMP)  ; LAB_004306fa
    MOV dword ptr [ESP + 0x134],EDX     ; 004309f6
        ;   Label: LAB_004309f6
    MOV EDX,dword ptr [ESP + 0x118]     ; 004309fd
    MOV EBX,EBP                         ; 00430a04
    MOV dword ptr [ESP + 0x13c],EDX     ; 00430a06
    MOV DX,word ptr [EAX]               ; 00430a0d | DAT_00765c6c
    MOV dword ptr [ESP + 0x144],ECX     ; 00430a10
    AND EDX,0xffff0000                  ; 00430a17
    MOV CX,word ptr [EAX + 0x2]         ; 00430a1d | DAT_00765c6e
    MOV word ptr [EAX],DX               ; 00430a21 | DAT_00765c6c
    OR EDX,ESI                          ; 00430a24
    AND ECX,0xffff0000                  ; 00430a26
    MOV word ptr [EAX],DX               ; 00430a2c | DAT_00765c6c
    MOV EDX,ECX                         ; 00430a2f
    MOV word ptr [EAX + 0x2],CX         ; 00430a31 | DAT_00765c6e
    OR EDX,EBX                          ; 00430a35
    MOV BX,word ptr [EAX + 0x4]         ; 00430a37 | DAT_00765c70
    MOV word ptr [EAX + 0x2],DX         ; 00430a3b | DAT_00765c6e
    AND EBX,0xffff0000                  ; 00430a3f
    MOV EDX,dword ptr [ESP + 0x134]     ; 00430a45
    MOV word ptr [EAX + 0x4],BX         ; 00430a4c | DAT_00765c70
    MOV ECX,EBX                         ; 00430a50
    MOV BX,word ptr [EAX + 0x6]         ; 00430a52 | DAT_00765c72
    OR ECX,EDX                          ; 00430a56
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00430a58
    AND EBX,0xffff8000                  ; 00430a5f
    MOV word ptr [EAX + 0x4],CX         ; 00430a65 | DAT_00765c70
    AND DH,0x7f                         ; 00430a69
    MOV ECX,EBX                         ; 00430a6c
    MOV word ptr [EAX + 0x6],BX         ; 00430a6e | DAT_00765c72
    OR ECX,EDX                          ; 00430a72
    MOV word ptr [EAX + 0x6],CX         ; 00430a74 | DAT_00765c72
    MOV EDX,dword ptr [ESP + 0x144]     ; 00430a78
    MOV BL,byte ptr [EAX + 0x7]         ; 00430a7f | DAT_00765c72+1
    XOR DH,DH                           ; 00430a82
    AND BL,0x7f                         ; 00430a84
    AND DL,0x1                          ; 00430a87
    MOV byte ptr [EAX + 0x7],BL         ; 00430a8a | DAT_00765c72+1
    SHL EDX,0xf                         ; 00430a8d
    OR word ptr [EAX + 0x6],DX          ; 00430a90 | DAT_00765c72
    MOV EBX,dword ptr [ESP + 0x1d8]     ; 00430a94
    JMP 0x00430936                      ; 00430a9b
        ;   XREF to: 00430936 (UNCONDITIONAL_JUMP)  ; LAB_00430936
    XOR ECX,ECX                         ; 00430aa0
        ;   Label: LAB_00430aa0
    MOV EAX,dword ptr [ESP + 0x148]     ; 00430aa2
    MOV dword ptr [ESP + 0x138],ECX     ; 00430aa9
    TEST EAX,EAX                        ; 00430ab0
    JLE 0x00430af0                      ; 00430ab2
        ;   XREF to: 00430af0 (CONDITIONAL_JUMP)  ; LAB_00430af0
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00430ab4
    MOV EAX,dword ptr [EAX]             ; 00430abb
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00430abd
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00430ac4
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 00430acb
    MOV EAX,dword ptr [EAX + 0x40]      ; 00430ad2
    ADD ECX,EAX                         ; 00430ad5
    LEA EAX,[ECX + -0x1]                ; 00430ad7
    MOV dword ptr [ESP + 0x1dc],EAX     ; 00430ada
    CMP ESI,EAX                         ; 00430ae1
    JGE 0x00430af0                      ; 00430ae3
        ;   XREF to: 00430af0 (CONDITIONAL_JUMP)  ; LAB_00430af0
    MOV dword ptr [ESP + 0x138],0x1     ; 00430ae5
    CMP EDX,dword ptr [ESP + 0x120]     ; 00430af0
        ;   Label: LAB_00430af0
    JLE 0x00430936                      ; 00430af7
        ;   XREF to: 00430936 (CONDITIONAL_JUMP)  ; LAB_00430936
    CMP EDX,EDI                         ; 00430afd
    JG 0x00430936                       ; 00430aff
        ;   XREF to: 00430936 (CONDITIONAL_JUMP)  ; LAB_00430936
    CMP dword ptr [ESP + 0x138],0x0     ; 00430b05
    JZ 0x00430c0b                       ; 00430b0d
        ;   XREF to: 00430c0b (CONDITIONAL_JUMP)  ; LAB_00430c0b
    CMP dword ptr [ESP + 0x138],0x0     ; 00430b13
        ;   Label: LAB_00430b13
    JZ 0x00430936                       ; 00430b1b
        ;   XREF to: 00430936 (CONDITIONAL_JUMP)  ; LAB_00430936
    MOV ECX,dword ptr [ESP + 0x1dc]     ; 00430b21
    MOV EAX,EDX                         ; 00430b28
    SUB EAX,ECX                         ; 00430b2a
    MOV ECX,dword ptr [ESP + 0x214]     ; 00430b2c
    DEC EAX                             ; 00430b33
    CMP EAX,ECX                         ; 00430b34
    JG 0x00430936                       ; 00430b36
        ;   XREF to: 00430936 (CONDITIONAL_JUMP)  ; LAB_00430936
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00430b3c
    MOV dword ptr [ESP + 0x170],EAX     ; 00430b43
    MOV EAX,dword ptr [ESP + 0x184]     ; 00430b4a
    MOV dword ptr [ESP + 0x178],EDX     ; 00430b51
    MOV dword ptr [ESP + 0x150],EAX     ; 00430b58
    MOV EDX,EAX                         ; 00430b5f
    MOV dword ptr [ESP + 0x17c],0x1     ; 00430b61
    LEA EAX,[EBX*0x8 + 0x0]             ; 00430b6c
    MOV ECX,dword ptr [ESP + 0x170]     ; 00430b73
    ADD EAX,0x765c6c                    ; 00430b7a | DAT_00765c6c
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00430b7f
    AND word ptr [EAX],0x0              ; 00430b86 | DAT_00765c6c
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00430b8a
    OR word ptr [EAX],CX                ; 00430b91 | DAT_00765c6c
    MOV ECX,dword ptr [ESP + 0x150]     ; 00430b94
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00430b9b
    AND word ptr [EAX + 0x2],0x0        ; 00430ba2 | DAT_00765c6e
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00430ba7
    OR word ptr [EAX + 0x2],CX          ; 00430bae | DAT_00765c6e
    MOV ECX,dword ptr [ESP + 0x178]     ; 00430bb2
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00430bb9
    AND word ptr [EAX + 0x4],0x0        ; 00430bc0 | DAT_00765c70
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00430bc5
    OR word ptr [EAX + 0x4],CX          ; 00430bcc | DAT_00765c70
    MOV CX,word ptr [EAX + 0x6]         ; 00430bd0 | DAT_00765c72
    AND ECX,0xffff8000                  ; 00430bd4
    AND DH,0x7f                         ; 00430bda
    MOV word ptr [EAX + 0x6],CX         ; 00430bdd | DAT_00765c72
    OR ECX,EDX                          ; 00430be1
    MOV word ptr [EAX + 0x6],CX         ; 00430be3 | DAT_00765c72
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00430be7
    MOV CH,byte ptr [EAX + 0x7]         ; 00430bee | DAT_00765c72+1
    XOR DH,DH                           ; 00430bf1
    AND CH,0x7f                         ; 00430bf3
    AND DL,0x1                          ; 00430bf6
    MOV byte ptr [EAX + 0x7],CH         ; 00430bf9 | DAT_00765c72+1
    SHL EDX,0xf                         ; 00430bfc
    MOV CX,word ptr [EAX + 0x6]         ; 00430bff | DAT_00765c72
    OR ECX,EDX                          ; 00430c03
    INC EBX                             ; 00430c05
    JMP 0x00430932                      ; 00430c06
        ;   XREF to: 00430932 (UNCONDITIONAL_JUMP)  ; LAB_00430932
    MOV EAX,EDX                         ; 00430c0b
        ;   Label: LAB_00430c0b
    SUB EAX,ESI                         ; 00430c0d
    MOV ECX,dword ptr [ESP + 0x218]     ; 00430c0f
    INC EAX                             ; 00430c16
    CMP EAX,ECX                         ; 00430c17
    JG 0x00430b13                       ; 00430c19
        ;   XREF to: 00430b13 (CONDITIONAL_JUMP)  ; LAB_00430b13
    MOV EAX,dword ptr [ESP + 0x174]     ; 00430c1f
    MOV dword ptr [ESP + 0x168],EAX     ; 00430c26
    MOV dword ptr [ESP + 0x16c],0x1     ; 00430c2d
    LEA EAX,[EBX*0x8 + 0x0]             ; 00430c38
    ADD EAX,0x765c6c                    ; 00430c3f | DAT_00765c6c
    MOV dword ptr [ESP + 0x164],EDX     ; 00430c44
    MOV DX,word ptr [EAX]               ; 00430c4b | DAT_00765c6c
    MOV dword ptr [ESP + 0x160],EBP     ; 00430c4e
    AND EDX,0xffff0000                  ; 00430c55
    MOV CX,word ptr [EAX + 0x2]         ; 00430c5b | DAT_00765c6e
    MOV word ptr [EAX],DX               ; 00430c5f | DAT_00765c6c
    OR EDX,ESI                          ; 00430c62
    AND ECX,0xffff0000                  ; 00430c64
    MOV word ptr [EAX],DX               ; 00430c6a | DAT_00765c6c
    MOV EDX,dword ptr [ESP + 0x160]     ; 00430c6d
    MOV word ptr [EAX + 0x2],CX         ; 00430c74 | DAT_00765c6e
    OR ECX,EDX                          ; 00430c78
    MOV word ptr [EAX + 0x2],CX         ; 00430c7a | DAT_00765c6e
    MOV CX,word ptr [EAX + 0x4]         ; 00430c7e | DAT_00765c70
    AND ECX,0xffff0000                  ; 00430c82
    MOV EDX,dword ptr [ESP + 0x164]     ; 00430c88
    MOV word ptr [EAX + 0x4],CX         ; 00430c8f | DAT_00765c70
    OR ECX,EDX                          ; 00430c93
    MOV word ptr [EAX + 0x4],CX         ; 00430c95 | DAT_00765c70
    MOV CX,word ptr [EAX + 0x6]         ; 00430c99 | DAT_00765c72
    MOV EDX,dword ptr [ESP + 0x168]     ; 00430c9d
    AND ECX,0xffff8000                  ; 00430ca4
    AND DH,0x7f                         ; 00430caa
    MOV word ptr [EAX + 0x6],CX         ; 00430cad | DAT_00765c72
    OR ECX,EDX                          ; 00430cb1
    MOV word ptr [EAX + 0x6],CX         ; 00430cb3 | DAT_00765c72
    MOV EDX,dword ptr [ESP + 0x16c]     ; 00430cb7
    MOV CL,byte ptr [EAX + 0x7]         ; 00430cbe | DAT_00765c72+1
    XOR DH,DH                           ; 00430cc1
    AND CL,0x7f                         ; 00430cc3
    AND DL,0x1                          ; 00430cc6
    MOV byte ptr [EAX + 0x7],CL         ; 00430cc9 | DAT_00765c72+1
    SHL EDX,0xf                         ; 00430ccc
    MOV CX,word ptr [EAX + 0x6]         ; 00430ccf | DAT_00765c72
    OR ECX,EDX                          ; 00430cd3
    INC EBX                             ; 00430cd5
    JMP 0x00430932                      ; 00430cd6
        ;   XREF to: 00430932 (UNCONDITIONAL_JUMP)  ; LAB_00430932
    CMP EBX,0x200                       ; 00430cdb
        ;   Label: LAB_00430cdb
    JL 0x00430d17                       ; 00430ce1
        ;   XREF to: 00430d17 (CONDITIONAL_JUMP)  ; LAB_00430d17
    PUSH EBP                            ; 00430ce3
    PUSH EBX                            ; 00430ce4
    PUSH 0x57ab40                       ; 00430ce5 | = "Reached max trace edges: edges %d, sc..."
    LEA EAX,[ESP + 0xc]                 ; 00430cea
    PUSH EAX                            ; 00430cee
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00430cef
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x57ab6f                    ; 00430cf4 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 00430cf9
    MOV [0x01cc4800],EAX                ; 00430cfc | PTR_01cc4800
    MOV EAX,ESP                         ; 00430d01
    MOV EDX,0x8b8                       ; 00430d03
    PUSH EAX                            ; 00430d08
    MOV dword ptr [0x01cc4804],EDX      ; 00430d09 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00430d0f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00430d14
    CMP EDI,dword ptr [ESP + 0x1ac]     ; 00430d17
        ;   Label: LAB_00430d17
    JGE 0x004309c0                      ; 00430d1e
        ;   XREF to: 004309c0 (CONDITIONAL_JUMP)  ; LAB_004309c0
    XOR EAX,EAX                         ; 00430d24
    MOV dword ptr [ESP + 0x140],EAX     ; 00430d26
    LEA EAX,[EDI + -0x1]                ; 00430d2d
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00430d30
    LEA EAX,[EDI + 0x1]                 ; 00430d37
    XOR EDX,EDX                         ; 00430d3a
    MOV dword ptr [ESP + 0x124],EAX     ; 00430d3c
    MOV EAX,dword ptr [ESP + 0x114]     ; 00430d43
    MOV dword ptr [ESP + 0x1a4],EDX     ; 00430d4a
    MOV dword ptr [ESP + 0x1cc],EAX     ; 00430d51
    IMUL EAX,dword ptr [ESP + 0x1c8],0x84 ; 00430d58
        ;   Label: LAB_00430d58
    ADD EAX,dword ptr [ESP + 0x1fc]     ; 00430d63
    MOV EDX,dword ptr [ESP + 0x140]     ; 00430d6a
    CMP EDX,dword ptr [EAX]             ; 00430d71
    JGE 0x004309c0                      ; 00430d73
        ;   XREF to: 004309c0 (CONDITIONAL_JUMP)  ; LAB_004309c0
    ADD EAX,dword ptr [ESP + 0x1a4]     ; 00430d79
    MOV EDX,dword ptr [EAX + 0x4]       ; 00430d80
    MOV ECX,dword ptr [EAX + 0x44]      ; 00430d83
    MOV dword ptr [ESP + 0x1b4],EDX     ; 00430d86
    LEA EAX,[EDX + ECX*0x1]             ; 00430d8d
    XOR EDX,EDX                         ; 00430d90
    MOV ECX,dword ptr [ESP + 0x128]     ; 00430d92
    MOV dword ptr [ESP + 0x194],EDX     ; 00430d99
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 00430da0
    ADD EDX,ECX                         ; 00430da7
    MOV ECX,dword ptr [EDX]             ; 00430da9
    DEC ECX                             ; 00430dab
    MOV dword ptr [ESP + 0x1b0],ECX     ; 00430dac
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 00430db3
    DEC EAX                             ; 00430dba
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 00430dbb
    JGE 0x00430ddb                      ; 00430dc2
        ;   XREF to: 00430ddb (CONDITIONAL_JUMP)  ; LAB_00430ddb
    ADD EDX,dword ptr [ESP + 0x1cc]     ; 00430dc4
    CMP EAX,dword ptr [EDX + 0x8]       ; 00430dcb
    JLE 0x00430ddb                      ; 00430dce
        ;   XREF to: 00430ddb (CONDITIONAL_JUMP)  ; LAB_00430ddb
    MOV dword ptr [ESP + 0x194],0x1     ; 00430dd0
    CMP EAX,dword ptr [ESP + 0x124]     ; 00430ddb
        ;   Label: LAB_00430ddb
    JLE 0x00430dfc                      ; 00430de2
        ;   XREF to: 00430dfc (CONDITIONAL_JUMP)  ; LAB_00430dfc
    CMP EDI,dword ptr [ESP + 0x1b4]     ; 00430de4
    JL 0x00430dfc                       ; 00430deb
        ;   XREF to: 00430dfc (CONDITIONAL_JUMP)  ; LAB_00430dfc
    MOV ECX,dword ptr [ESP + 0x194]     ; 00430ded
    TEST ECX,ECX                        ; 00430df4
    JZ 0x00430e7c                       ; 00430df6
        ;   XREF to: 00430e7c (CONDITIONAL_JUMP)  ; LAB_00430e7c
    XOR EDX,EDX                         ; 00430dfc
        ;   Label: LAB_00430dfc
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 00430dfe
    MOV dword ptr [ESP + 0x12c],EDX     ; 00430e05
    IMUL EDX,ECX,0x84                   ; 00430e0c
    ADD EDX,dword ptr [ESP + 0x1fc]     ; 00430e12
    MOV ECX,dword ptr [EDX]             ; 00430e19
    DEC ECX                             ; 00430e1b
    MOV dword ptr [ESP + 0x1b0],ECX     ; 00430e1c
    MOV ECX,dword ptr [ESP + 0x140]     ; 00430e23
    CMP ECX,dword ptr [ESP + 0x1b0]     ; 00430e2a
    JGE 0x00430e4a                      ; 00430e31
        ;   XREF to: 00430e4a (CONDITIONAL_JUMP)  ; LAB_00430e4a
    ADD EDX,dword ptr [ESP + 0x1a4]     ; 00430e33
    CMP EDI,dword ptr [EDX + 0x8]       ; 00430e3a
    JLE 0x00430e4a                      ; 00430e3d
        ;   XREF to: 00430e4a (CONDITIONAL_JUMP)  ; LAB_00430e4a
    MOV dword ptr [ESP + 0x12c],0x1     ; 00430e3f
    CMP EAX,dword ptr [ESP + 0x1c4]     ; 00430e4a
        ;   Label: LAB_00430e4a
    JL 0x00430f38                       ; 00430e51
        ;   XREF to: 00430f38 (CONDITIONAL_JUMP)  ; LAB_00430f38
    MOV ECX,dword ptr [ESP + 0x140]     ; 00430e57
        ;   Label: LAB_00430e57
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 00430e5e
    INC ECX                             ; 00430e65
    ADD EDX,0x4                         ; 00430e66
    MOV dword ptr [ESP + 0x140],ECX     ; 00430e69
    MOV dword ptr [ESP + 0x1a4],EDX     ; 00430e70
    JMP 0x00430d58                      ; 00430e77
        ;   XREF to: 00430d58 (UNCONDITIONAL_JUMP)  ; LAB_00430d58
    MOV dword ptr [ESP + 0x190],EAX     ; 00430e7c
        ;   Label: LAB_00430e7c
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00430e83
    MOV dword ptr [ESP + 0x198],EAX     ; 00430e8a
    LEA EAX,[EBX*0x8 + 0x0]             ; 00430e91
    ADD EAX,0x765c6c                    ; 00430e98 | DAT_00765c6c
    MOV dword ptr [ESP + 0x1a0],ECX     ; 00430e9d
    MOV CX,word ptr [EAX]               ; 00430ea4 | DAT_00765c74
    AND ECX,0xffff0000                  ; 00430ea7
    MOV word ptr [EAX],CX               ; 00430ead | DAT_00765c74
    OR ECX,EDI                          ; 00430eb0
    MOV word ptr [EAX],CX               ; 00430eb2 | DAT_00765c74
    MOV CX,word ptr [EAX + 0x2]         ; 00430eb5 | DAT_00765c76
    MOV dword ptr [ESP + 0x188],EBP     ; 00430eb9
    AND ECX,0xffff0000                  ; 00430ec0
    MOV EDX,dword ptr [ESP + 0x188]     ; 00430ec6
    MOV word ptr [EAX + 0x2],CX         ; 00430ecd | DAT_00765c76
    OR ECX,EDX                          ; 00430ed1
    MOV word ptr [EAX + 0x2],CX         ; 00430ed3 | DAT_00765c76
    MOV CX,word ptr [EAX + 0x4]         ; 00430ed7 | DAT_00765c78
    AND ECX,0xffff0000                  ; 00430edb
    MOV EDX,dword ptr [ESP + 0x190]     ; 00430ee1
    MOV word ptr [EAX + 0x4],CX         ; 00430ee8 | DAT_00765c78
    OR ECX,EDX                          ; 00430eec
    MOV word ptr [EAX + 0x4],CX         ; 00430eee | DAT_00765c78
    MOV CX,word ptr [EAX + 0x6]         ; 00430ef2 | DAT_00765c7a
    MOV EDX,dword ptr [ESP + 0x198]     ; 00430ef6
    AND ECX,0xffff8000                  ; 00430efd
    AND DH,0x7f                         ; 00430f03
    MOV word ptr [EAX + 0x6],CX         ; 00430f06 | DAT_00765c7a
    OR ECX,EDX                          ; 00430f0a
    MOV word ptr [EAX + 0x6],CX         ; 00430f0c | DAT_00765c7a
    MOV EDX,dword ptr [ESP + 0x1a0]     ; 00430f10
    MOV CL,byte ptr [EAX + 0x7]         ; 00430f17 | DAT_00765c7a+1
    XOR DH,DH                           ; 00430f1a
    AND CL,0x7f                         ; 00430f1c
    AND DL,0x1                          ; 00430f1f
    MOV byte ptr [EAX + 0x7],CL         ; 00430f22 | DAT_00765c7a+1
    SHL EDX,0xf                         ; 00430f25
    MOV CX,word ptr [EAX + 0x6]         ; 00430f28 | DAT_00765c7a
    OR ECX,EDX                          ; 00430f2c
    INC EBX                             ; 00430f2e
    MOV word ptr [EAX + 0x6],CX         ; 00430f2f | DAT_00765c7a
    JMP 0x00430e57                      ; 00430f33
        ;   XREF to: 00430e57 (UNCONDITIONAL_JUMP)  ; LAB_00430e57
    CMP EAX,ESI                         ; 00430f38
        ;   Label: LAB_00430f38
    JL 0x00430e57                       ; 00430f3a
        ;   XREF to: 00430e57 (CONDITIONAL_JUMP)  ; LAB_00430e57
    CMP dword ptr [ESP + 0x12c],0x0     ; 00430f40
    JNZ 0x00430e57                      ; 00430f48
        ;   XREF to: 00430e57 (CONDITIONAL_JUMP)  ; LAB_00430e57
    MOV EDX,EDI                         ; 00430f4e
    SUB EDX,EAX                         ; 00430f50
    MOV ECX,dword ptr [ESP + 0x218]     ; 00430f52
    INC EDX                             ; 00430f59
    CMP EDX,ECX                         ; 00430f5a
    JG 0x00430e57                       ; 00430f5c
        ;   XREF to: 00430e57 (CONDITIONAL_JUMP)  ; LAB_00430e57
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00430f62
    MOV EAX,0x1                         ; 00430f69
    MOV dword ptr [ESP + 0x100],EDI     ; 00430f6e
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00430f75
    LEA EAX,[EBX*0x8 + 0x0]             ; 00430f7c
    MOV ECX,dword ptr [ESP + 0x100]     ; 00430f83
    ADD EAX,0x765c6c                    ; 00430f8a | DAT_00765c6c
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00430f8f
    AND word ptr [EAX],0x0              ; 00430f96 | DAT_00765c74
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00430f9a
    MOV dword ptr [ESP + 0x104],EBP     ; 00430fa1
    OR word ptr [EAX],CX                ; 00430fa8 | DAT_00765c74
    MOV ECX,dword ptr [ESP + 0x104]     ; 00430fab
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00430fb2
    AND word ptr [EAX + 0x2],0x0        ; 00430fb9 | DAT_00765c76
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00430fbe
    OR word ptr [EAX + 0x2],CX          ; 00430fc5 | DAT_00765c76
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 00430fc9
    MOV dword ptr [ESP + 0x1e0],ECX     ; 00430fd0
    AND word ptr [EAX + 0x4],0x0        ; 00430fd7 | DAT_00765c78
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 00430fdc
    OR word ptr [EAX + 0x4],CX          ; 00430fe3 | DAT_00765c78
    MOV CX,word ptr [EAX + 0x6]         ; 00430fe7 | DAT_00765c7a
    MOV EDX,dword ptr [ESP + 0x1c8]     ; 00430feb
    AND ECX,0xffff8000                  ; 00430ff2
    AND DH,0x7f                         ; 00430ff8
    MOV word ptr [EAX + 0x6],CX         ; 00430ffb | DAT_00765c7a
    OR ECX,EDX                          ; 00430fff
    MOV word ptr [EAX + 0x6],CX         ; 00431001 | DAT_00765c7a
    MOV EDX,dword ptr [ESP + 0x1b8]     ; 00431005
    MOV CH,byte ptr [EAX + 0x7]         ; 0043100c | DAT_00765c7a+1
    XOR DH,DH                           ; 0043100f
    AND CH,0x7f                         ; 00431011
    AND DL,0x1                          ; 00431014
    MOV byte ptr [EAX + 0x7],CH         ; 00431017 | DAT_00765c7a+1
    SHL EDX,0xf                         ; 0043101a
    MOV CX,word ptr [EAX + 0x6]         ; 0043101d | DAT_00765c7a
    OR ECX,EDX                          ; 00431021
    INC EBX                             ; 00431023
    MOV word ptr [EAX + 0x6],CX         ; 00431024 | DAT_00765c7a
    JMP 0x00430e57                      ; 00431028
        ;   XREF to: 00430e57 (UNCONDITIONAL_JUMP)  ; LAB_00430e57
    MOV EBP,dword ptr [ESP + 0x200]     ; 0043102d
        ;   Label: LAB_0043102d
    TEST EBP,EBP                        ; 00431034
    JNZ 0x00431041                      ; 00431036
        ;   XREF to: 00431041 (CONDITIONAL_JUMP)  ; LAB_00431041
    MOV EAX,dword ptr [ESP + 0x204]     ; 00431038
    MOV dword ptr [EAX],EBP             ; 0043103f
    MOV EDI,dword ptr [ESP + 0x204]     ; 00431041
        ;   Label: LAB_00431041
    MOV EDI,dword ptr [EDI]             ; 00431048
    LEA ESI,[EBX*0x8 + 0x0]             ; 0043104a
    SHL EDI,0x3                         ; 00431051
    ADD EDI,ESI                         ; 00431054
    PUSH EDI                            ; 00431056
    MOV EAX,dword ptr [ESP + 0x204]     ; 00431057
    PUSH EAX                            ; 0043105e
    CALL crt_memory.c_realloc_FUN_00564a70 ; 0043105f
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00564a70(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00431064
    MOV dword ptr [ESP + 0x200],EAX     ; 00431067
    TEST EAX,EAX                        ; 0043106e
    JNZ 0x004310a6                      ; 00431070
        ;   XREF to: 004310a6 (CONDITIONAL_JUMP)  ; LAB_004310a6
    PUSH EDI                            ; 00431072
    PUSH 0x57ab85                       ; 00431073 | = "Unable to allocate %u bytes for edge ..."
    LEA EAX,[ESP + 0x8]                 ; 00431078
    PUSH EAX                            ; 0043107c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0043107d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x57abb0                    ; 00431082 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 00431087
    MOV EAX,ESP                         ; 0043108a
    MOV ECX,0x8f7                       ; 0043108c
    PUSH EAX                            ; 00431091
    MOV dword ptr [0x01cc4800],EDX      ; 00431092 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00431098 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0043109e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004310a3
    MOV EDI,dword ptr [ESP + 0x204]     ; 004310a6
        ;   Label: LAB_004310a6
    MOV EBP,dword ptr [ESP + 0x200]     ; 004310ad
    MOV EDI,dword ptr [EDI]             ; 004310b4
    MOV ECX,ESI                         ; 004310b6
    SHL EDI,0x3                         ; 004310b8
    MOV ESI,0x765c6c                    ; 004310bb | DAT_00765c6c
    ADD EDI,EBP                         ; 004310c0
    PUSH EDI                            ; 004310c2
    MOV EAX,ECX                         ; 004310c3
    SHR ECX,0x2                         ; 004310c5
    MOVSD.REP ES:EDI,ESI                ; 004310c8 | DAT_00765c6c | DAT_00765c70
    MOV CL,AL                           ; 004310ca
    AND CL,0x3                          ; 004310cc
    MOVSB.REP ES:EDI,ESI                ; 004310cf | DAT_00765c70
    POP EDI                             ; 004310d1
    MOV EAX,dword ptr [ESP + 0x204]     ; 004310d2
    MOV EDX,dword ptr [EAX]             ; 004310d9
    ADD EDX,EBX                         ; 004310db
    MOV ESI,EBP                         ; 004310dd
    MOV dword ptr [EAX],EDX             ; 004310df
    MOV EAX,ESI                         ; 004310e1
    ADD ESP,0x1e4                       ; 004310e3
    POP EBP                             ; 004310e9
    POP EDI                             ; 004310ea
    POP ESI                             ; 004310eb
    POP EBX                             ; 004310ec
    RET                                 ; 004310ed

