; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f4720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5)
;
; Local Variables:
; undefined        Stack[-0x314]:1  local_314
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f4ad0 at 004f4aeb
;
; Referenced Globals:
;   TerminatedCString s_rt_005e573b
;   TerminatedCString s_engine_ini_cpp_005e573e
;   TerminatedCString s_cIni_writeProfileString_005e5750
;   TerminatedCString s_wt_005e577f
;   TerminatedCString s_engine_ini_cpp_005e5782
;   TerminatedCString s_cIni_writeProfileString_005e5794
;   TerminatedCString s_s_005e57c4
;   TerminatedCString s_s_s_005e57ca
;   TerminatedCString s_s_s_005e57d1
;   TerminatedCString s_s_s_005e57d8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004f4550
;   FUN_005030e0
;   FUN_005bfb40
;   FUN_005c03c0
;   FUN_005c0d10
;   FUN_005c0f80
;   FUN_005c1180
;   FUN_005c157c
;   FUN_005c25c0
;   FUN_005c30b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4720
        ;   Label: FUN_004f4720
    PUSH ESI                            ; 004f4721
    PUSH EDI                            ; 004f4722
    PUSH EBP                            ; 004f4723
    SUB ESP,0x304                       ; 004f4724
    MOV EBX,dword ptr [ESP + 0x318]     ; 004f472a
    MOV ECX,dword ptr [ESP + 0x324]     ; 004f4731
    PUSH ECX                            ; 004f4738
    MOV ESI,dword ptr [ESP + 0x32c]     ; 004f4739
    PUSH ESI                            ; 004f4740
    MOV EDI,dword ptr [ESP + 0x328]     ; 004f4741
    PUSH EDI                            ; 004f4748
    MOV EBP,dword ptr [ESP + 0x328]     ; 004f4749
    PUSH EBP                            ; 004f4750
    XOR EDX,EDX                         ; 004f4751
    PUSH EBX                            ; 004f4753
    MOV dword ptr [ESP + 0x314],EDX     ; 004f4754
    CALL FUN_004f4550                   ; 004f475b
        ;   XREF to: 004f4550 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4550()
    MOV EBP,EAX                         ; 004f4760
    MOV EAX,dword ptr [EBX]             ; 004f4762
    ADD ESP,0x14                        ; 004f4764
    TEST EAX,EAX                        ; 004f4767
    JNZ 0x004f477b                      ; 004f4769
        ;   XREF to: 004f477b (CONDITIONAL_JUMP)  ; LAB_004f477b
    MOV EAX,0x1                         ; 004f476b
    ADD ESP,0x304                       ; 004f4770
    POP EBP                             ; 004f4776
    POP EDI                             ; 004f4777
    POP ESI                             ; 004f4778
    POP EBX                             ; 004f4779
    RET                                 ; 004f477a
    PUSH 0x5e573b                       ; 004f477b | = "rt"
        ;   Label: LAB_004f477b
    PUSH ESI                            ; 004f4780
    CALL FUN_005c157c                   ; 004f4781
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    ADD ESP,0x8                         ; 004f4786
    MOV EBX,EAX                         ; 004f4789
    TEST EAX,EAX                        ; 004f478b
    JNZ 0x004f47b2                      ; 004f478d
        ;   XREF to: 004f47b2 (CONDITIONAL_JUMP)  ; LAB_004f47b2
    MOV ECX,0x5e573e                    ; 004f478f | = "..\\engine\\ini.cpp"
    MOV ESI,0x18b                       ; 004f4794
    PUSH 0x5e5750                       ; 004f4799 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x01d1d400],ECX      ; 004f479e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004f47a4 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004f47aa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004f47af
    MOV ESI,dword ptr [ESP + 0x328]     ; 004f47b2
        ;   Label: LAB_004f47b2
    LEA EDI,[ESP + 0x100]               ; 004f47b9
    PUSH EDI                            ; 004f47c0
    MOV AL,byte ptr [ESI]               ; 004f47c1
        ;   Label: LAB_004f47c1
    MOV byte ptr [EDI],AL               ; 004f47c3
    CMP AL,0x0                          ; 004f47c5
    JZ 0x004f47d9                       ; 004f47c7
        ;   XREF to: 004f47d9 (CONDITIONAL_JUMP)  ; LAB_004f47d9
    MOV AL,byte ptr [ESI + 0x1]         ; 004f47c9
    ADD ESI,0x2                         ; 004f47cc
    MOV byte ptr [EDI + 0x1],AL         ; 004f47cf
    ADD EDI,0x2                         ; 004f47d2
    CMP AL,0x0                          ; 004f47d5
    JNZ 0x004f47c1                      ; 004f47d7
        ;   XREF to: 004f47c1 (CONDITIONAL_JUMP)  ; LAB_004f47c1
    POP EDI                             ; 004f47d9
        ;   Label: LAB_004f47d9
    MOV EDI,dword ptr [ESP + 0x328]     ; 004f47da
    SUB ECX,ECX                         ; 004f47e1
    DEC ECX                             ; 004f47e3
    XOR EAX,EAX                         ; 004f47e4
    SCASB.REPNE ES:EDI                  ; 004f47e6
    NOT ECX                             ; 004f47e8
    DEC ECX                             ; 004f47ea
    MOV AH,0x78                         ; 004f47eb
    PUSH 0x5e577f                       ; 004f47ed | = "wt"
    MOV byte ptr [ESP + ECX*0x1 + 0x103],AH ; 004f47f2
    LEA EAX,[ESP + 0x104]               ; 004f47f9
    PUSH EAX                            ; 004f4800
    CALL FUN_005c157c                   ; 004f4801
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined FUN_005c157c()
    ADD ESP,0x8                         ; 004f4806
    MOV ESI,EAX                         ; 004f4809
    TEST EAX,EAX                        ; 004f480b
    JNZ 0x004f4831                      ; 004f480d
        ;   XREF to: 004f4831 (CONDITIONAL_JUMP)  ; LAB_004f4831
    MOV EDI,0x5e5782                    ; 004f480f | = "..\\engine\\ini.cpp"
    MOV EAX,0x18f                       ; 004f4814
    PUSH 0x5e5794                       ; 004f4819 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x01d1d400],EDI      ; 004f481e | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004f4824 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004f4829
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004f482e
    TEST EBP,EBP                        ; 004f4831
        ;   Label: LAB_004f4831
    JZ 0x004f485f                       ; 004f4833
        ;   XREF to: 004f485f (CONDITIONAL_JUMP)  ; LAB_004f485f
    TEST EBP,EBP                        ; 004f4835
        ;   Label: LAB_004f4835
    JL 0x004f497e                       ; 004f4837
        ;   XREF to: 004f497e (CONDITIONAL_JUMP)  ; LAB_004f497e
    PUSH EBX                            ; 004f483d
    PUSH 0xff                           ; 004f483e
    LEA EAX,[ESP + 0x8]                 ; 004f4843
    PUSH EAX                            ; 004f4847
    CALL FUN_005c1180                   ; 004f4848
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f484d
    MOV EAX,ESP                         ; 004f4850
    PUSH EAX                            ; 004f4852
    PUSH ESI                            ; 004f4853
    DEC EBP                             ; 004f4854
    CALL FUN_005c03c0                   ; 004f4855
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004f485a
    JMP 0x004f4835                      ; 004f485d
        ;   XREF to: 004f4835 (UNCONDITIONAL_JUMP)  ; LAB_004f4835
    MOV EDX,dword ptr [ESP + 0x31c]     ; 004f485f
        ;   Label: LAB_004f485f
    PUSH EDX                            ; 004f4866
    PUSH 0x5e57c4                       ; 004f4867 | = "[%s]\n"
    LEA EAX,[ESP + 0x208]               ; 004f486c
    PUSH EAX                            ; 004f4873
    CALL FUN_005bfb40                   ; 004f4874
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV DL,byte ptr [EBX + 0xc]         ; 004f4879
    ADD ESP,0xc                         ; 004f487c
    TEST DL,0x10                        ; 004f487f
    JNZ 0x004f48a6                      ; 004f4882
        ;   XREF to: 004f48a6 (CONDITIONAL_JUMP)  ; LAB_004f48a6
    MOV EBP,dword ptr [ESP + 0x324]     ; 004f4884
    PUSH EBX                            ; 004f488b
        ;   Label: LAB_004f488b
    PUSH 0xff                           ; 004f488c
    LEA EAX,[ESP + 0x8]                 ; 004f4891
    PUSH EAX                            ; 004f4895
    CALL FUN_005c1180                   ; 004f4896
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f489b
    TEST EAX,EAX                        ; 004f489e
    JNZ 0x004f4929                      ; 004f48a0
        ;   XREF to: 004f4929 (CONDITIONAL_JUMP)  ; LAB_004f4929
    CMP dword ptr [ESP + 0x300],0x0     ; 004f48a6
        ;   Label: LAB_004f48a6
    JNZ 0x004f48df                      ; 004f48ae
        ;   XREF to: 004f48df (CONDITIONAL_JUMP)  ; LAB_004f48df
    LEA EAX,[ESP + 0x200]               ; 004f48b0
    PUSH EAX                            ; 004f48b7
    PUSH ESI                            ; 004f48b8
    CALL FUN_005c03c0                   ; 004f48b9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004f48be
    MOV EDI,dword ptr [ESP + 0x324]     ; 004f48c1
    PUSH EDI                            ; 004f48c8
    MOV EBP,dword ptr [ESP + 0x324]     ; 004f48c9
    PUSH EBP                            ; 004f48d0
    PUSH 0x5e57d1                       ; 004f48d1 | = "%s=%s\n"
    PUSH ESI                            ; 004f48d6
    CALL FUN_005c03c0                   ; 004f48d7
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x10                        ; 004f48dc
    PUSH EBX                            ; 004f48df
        ;   Label: LAB_004f48df
    CALL FUN_005c0d10                   ; 004f48e0
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 004f48e5
    PUSH ESI                            ; 004f48e8
    CALL FUN_005c0d10                   ; 004f48e9
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 004f48ee
    MOV EAX,dword ptr [ESP + 0x328]     ; 004f48f1
    PUSH EAX                            ; 004f48f8
    CALL FUN_005c25c0                   ; 004f48f9
        ;   XREF to: 005c25c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25c0()
    ADD ESP,0x4                         ; 004f48fe
    MOV EDX,dword ptr [ESP + 0x328]     ; 004f4901
    PUSH EDX                            ; 004f4908
    LEA EAX,[ESP + 0x104]               ; 004f4909
    PUSH EAX                            ; 004f4910
    CALL FUN_005c30b0                   ; 004f4911
        ;   XREF to: 005c30b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c30b0()
    MOV EAX,0x1                         ; 004f4916
    ADD ESP,0x8                         ; 004f491b
    ADD ESP,0x304                       ; 004f491e
    POP EBP                             ; 004f4924
    POP EDI                             ; 004f4925
    POP ESI                             ; 004f4926
    POP EBX                             ; 004f4927
    RET                                 ; 004f4928
    MOV EAX,ESP                         ; 004f4929
        ;   Label: LAB_004f4929
    PUSH EAX                            ; 004f492b
    PUSH ESI                            ; 004f492c
    CALL FUN_005c03c0                   ; 004f492d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004f4932
    MOV EAX,ESP                         ; 004f4935
    PUSH EAX                            ; 004f4937
    LEA EAX,[ESP + 0x204]               ; 004f4938
    PUSH EAX                            ; 004f493f
    CALL FUN_005c0f80                   ; 004f4940
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 004f4945
    TEST EAX,EAX                        ; 004f4948
    JNZ 0x004f496f                      ; 004f494a
        ;   XREF to: 004f496f (CONDITIONAL_JUMP)  ; LAB_004f496f
    PUSH EBP                            ; 004f494c
    MOV EAX,dword ptr [ESP + 0x324]     ; 004f494d
    PUSH EAX                            ; 004f4954
    PUSH 0x5e57ca                       ; 004f4955 | = "%s=%s\n"
    PUSH ESI                            ; 004f495a
    CALL FUN_005c03c0                   ; 004f495b
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EDX,0x1                         ; 004f4960
    ADD ESP,0x10                        ; 004f4965
    MOV dword ptr [ESP + 0x300],EDX     ; 004f4968
    TEST byte ptr [EBX + 0xc],0x10      ; 004f496f
        ;   Label: LAB_004f496f
    JNZ 0x004f48a6                      ; 004f4973
        ;   XREF to: 004f48a6 (CONDITIONAL_JUMP)  ; LAB_004f48a6
    JMP 0x004f488b                      ; 004f4979
        ;   XREF to: 004f488b (UNCONDITIONAL_JUMP)  ; LAB_004f488b
    MOV ECX,dword ptr [ESP + 0x324]     ; 004f497e
        ;   Label: LAB_004f497e
    PUSH ECX                            ; 004f4985
    MOV EDI,dword ptr [ESP + 0x324]     ; 004f4986
    PUSH EDI                            ; 004f498d
    PUSH 0x5e57d8                       ; 004f498e | = "%s=%s\n"
    PUSH ESI                            ; 004f4993
    CALL FUN_005c03c0                   ; 004f4994
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x10                        ; 004f4999
    PUSH EBX                            ; 004f499c
    PUSH 0xff                           ; 004f499d
    LEA EAX,[ESP + 0x8]                 ; 004f49a2
    PUSH EAX                            ; 004f49a6
    CALL FUN_005c1180                   ; 004f49a7
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    MOV DH,byte ptr [EBX + 0xc]         ; 004f49ac
    ADD ESP,0xc                         ; 004f49af
    TEST DH,0x10                        ; 004f49b2
    JNZ 0x004f48df                      ; 004f49b5
        ;   XREF to: 004f48df (CONDITIONAL_JUMP)  ; LAB_004f48df
        ;   Label: LAB_004f49b5
    PUSH EBX                            ; 004f49bb
    PUSH 0xff                           ; 004f49bc
    LEA EAX,[ESP + 0x8]                 ; 004f49c1
    PUSH EAX                            ; 004f49c5
    CALL FUN_005c1180                   ; 004f49c6
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 004f49cb
    TEST EAX,EAX                        ; 004f49ce
    JZ 0x004f48df                       ; 004f49d0
        ;   XREF to: 004f48df (CONDITIONAL_JUMP)  ; LAB_004f48df
    MOV EAX,ESP                         ; 004f49d6
    PUSH EAX                            ; 004f49d8
    PUSH ESI                            ; 004f49d9
    CALL FUN_005c03c0                   ; 004f49da
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV CL,byte ptr [EBX + 0xc]         ; 004f49df
    ADD ESP,0x8                         ; 004f49e2
    TEST CL,0x10                        ; 004f49e5
    JMP 0x004f49b5                      ; 004f49e8
        ;   XREF to: 004f49b5 (UNCONDITIONAL_JUMP)  ; LAB_004f49b5

