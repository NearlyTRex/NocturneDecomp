; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005656f0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00563060 at 00563306
;
; Referenced Globals:
;   undefined4 s_actionPending_d_stranger_005eb660+1
;   TerminatedCString s_actionPending_d_stranger_005eb689
;   TerminatedCString s_Object_to_pick_up_is_now_005eb6b1
;   TerminatedCString s_actionPending_d_stranger_005eb6e4
;   TerminatedCString s_actionPending_d_stranger_005eb70c
;   TerminatedCString s_kick1_wav_005eb734
;   TerminatedCString s_hit_gh_4_7_wav_005eb73e
;   TerminatedCString s_fall_1_wav_005eb74e
;   TerminatedCString s_actionPending_d_stranger_005eb759
;   TerminatedCString s_doorToOpen_NULL_stranger_005eb781
;   undefined4 DAT_005eb7ad
;   undefined4 DAT_005eb7b5
;   undefined4 DAT_005fc1e0
;   undefined4 DAT_005fc1e8
;   undefined4 DAT_006138e0
;   ... and 5 more
;
; Called Functions:
;   FUN_00408d70
;   FUN_00408de0
;   FUN_0040c8f0
;   FUN_0040cf60
;   FUN_004222d0
;   FUN_0042aa00
;   FUN_0047bdf0
;   FUN_004c9850
;   FUN_004cf230
;   FUN_004cf440
;   FUN_004cff50
;   FUN_004cff90
;   FUN_005030c0
;   FUN_00503620
;   FUN_005038a0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005656f0
        ;   Label: FUN_005656f0
    PUSH ESI                            ; 005656f1
    PUSH EDI                            ; 005656f2
    PUSH EBP                            ; 005656f3
    MOV EBP,ESP                         ; 005656f4
    SUB ESP,0x104                       ; 005656f6
    AND ESP,0xfffffff8                  ; 005656fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005656ff
    LEA EAX,[EBX + 0x2b4]               ; 00565702
    MOV dword ptr [ESP + 0xfc],EAX      ; 00565708
    LEA EAX,[EBX + 0x2562c]             ; 0056570f
    MOV dword ptr [ESP + 0xf0],EAX      ; 00565715
    LEA EAX,[EBX + 0x25620]             ; 0056571c
    MOV dword ptr [ESP + 0xec],EAX      ; 00565722
    LEA EAX,[EBP + 0x18]                ; 00565729
        ;   Label: LAB_00565729
    PUSH EAX                            ; 0056572c
    MOV EDX,dword ptr [ESP + 0x100]     ; 0056572d
    PUSH EDX                            ; 00565734
    CALL FUN_005030c0                   ; 00565735
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 0056573a
    MOV ESI,EAX                         ; 0056573d
    CMP EAX,0x12                        ; 0056573f
    JNC 0x00565dc4                      ; 00565742
        ;   XREF to: 00565dc4 (CONDITIONAL_JUMP)  ; LAB_00565dc4
    CMP EAX,0x6                         ; 00565748
    JNC 0x00565e6d                      ; 0056574b
        ;   XREF to: 00565e6d (CONDITIONAL_JUMP)  ; LAB_00565e6d
    CMP EAX,0x2                         ; 00565751
    JNC 0x00565eae                      ; 00565754
        ;   XREF to: 00565eae (CONDITIONAL_JUMP)  ; LAB_00565eae
    CMP EAX,0x1                         ; 0056575a
    JNZ 0x00565ebd                      ; 0056575d
        ;   XREF to: 00565ebd (CONDITIONAL_JUMP)  ; LAB_00565ebd
    CMP ESI,0x7                         ; 00565763
        ;   Label: LAB_00565763
    JNZ 0x00565a1d                      ; 00565766
        ;   XREF to: 00565a1d (CONDITIONAL_JUMP)  ; LAB_00565a1d
    MOV EAX,[0x0264be50]                ; 0056576c | DAT_0264be50
    PUSH EAX                            ; 00565771
        ;   Label: LAB_00565771
    MOV EDI,dword ptr [ESP + 0x100]     ; 00565772
    PUSH EDI                            ; 00565779
    LEA ESI,[ESP + 0x7c]                ; 0056577a
    CALL FUN_005469a0                   ; 0056577e
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    LEA EDI,[ESP + 0xac]                ; 00565783
    LEA ESI,[ESP + 0x7c]                ; 0056578a
    ADD ESP,0x8                         ; 0056578e
    MOVSD ES:EDI,ESI                    ; 00565791
    MOVSD ES:EDI,ESI                    ; 00565792
    MOVSD ES:EDI,ESI                    ; 00565793
    CMP dword ptr [EBX + 0x25614],0x0   ; 00565794
    JZ 0x00565a27                       ; 0056579b
        ;   XREF to: 00565a27 (CONDITIONAL_JUMP)  ; LAB_00565a27
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005657a1
    MOV dword ptr [ESP + 0x100],EAX     ; 005657a7
    MOV EAX,dword ptr [EBX + 0x25614]   ; 005657ae
    PUSH 0x3f800000                     ; 005657b4
    PUSH EAX                            ; 005657b9
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005657ba
    CALL dword ptr [ESI + 0x4c]         ; 005657c0
    ADD ESP,0x4                         ; 005657c3
    PUSH EAX                            ; 005657c6
    LEA EAX,[ESP + 0xac]                ; 005657c7
    PUSH EAX                            ; 005657ce
    PUSH EBX                            ; 005657cf
    LEA ESI,[ESP + 0xc0]                ; 005657d0
    CALL FUN_00408d70                   ; 005657d7
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 005657dc
    LEA EAX,[ESP + 0x88]                ; 005657df
    LEA EDI,[ESP + 0x88]                ; 005657e6
    PUSH EAX                            ; 005657ed
    LEA ESI,[ESP + 0xbc]                ; 005657ee
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005657f5
        ;   Label: LAB_005657f5
    PUSH EBX                            ; 005657fc
    MOVSD ES:EDI,ESI                    ; 005657fd
    MOVSD ES:EDI,ESI                    ; 005657fe
    MOVSD ES:EDI,ESI                    ; 005657ff
    CALL dword ptr [EAX + 0x30]         ; 00565800
    ADD ESP,0x10                        ; 00565803
        ;   Label: LAB_00565803
    FLD float ptr [EBP + 0x18]          ; 00565806
        ;   Label: LAB_00565806
    FLDZ                                ; 00565809
    FCOMPP                              ; 0056580b
    FNSTSW AX                           ; 0056580d
    SAHF                                ; 0056580f
    JC 0x00565729                       ; 00565810
        ;   XREF to: 00565729 (CONDITIONAL_JUMP)  ; LAB_00565729
    MOV ESP,EBP                         ; 00565816
    POP EBP                             ; 00565818
    POP EDI                             ; 00565819
    POP ESI                             ; 0056581a
    POP EBX                             ; 0056581b
    RET                                 ; 0056581c
    PUSH EBX                            ; 0056581d
        ;   Label: LAB_0056581d
    MOV ESI,dword ptr [EBX + 0x2698]    ; 0056581e
    CALL FUN_0056a1e0                   ; 00565824
        ;   XREF to: 0056a1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a1e0()
    MOV EDX,dword ptr [EBX + 0x256a4]   ; 00565829
    ADD ESP,0x4                         ; 0056582f
    CMP EDX,0x2                         ; 00565832
    JNZ 0x005658a6                      ; 00565835
        ;   XREF to: 005658a6 (CONDITIONAL_JUMP)  ; LAB_005658a6
    TEST ESI,ESI                        ; 00565837
    JZ 0x00565858                       ; 00565839
        ;   XREF to: 00565858 (CONDITIONAL_JUMP)  ; LAB_00565858
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0056583b
    PUSH EDX                            ; 00565842
    MOV ECX,dword ptr [ESP + 0xf0]      ; 00565843
    PUSH ECX                            ; 0056584a
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0056584b
    PUSH ESI                            ; 00565851
    CALL dword ptr [EAX + 0x70]         ; 00565852
    ADD ESP,0xc                         ; 00565855
    MOV dword ptr [EBX + 0x256a4],0x0   ; 00565858
        ;   Label: LAB_00565858
    MOV EDI,dword ptr [EBX + 0x2d04]    ; 00565862
        ;   Label: LAB_00565862
    MOV dword ptr [EBX + 0x2561c],0x0   ; 00565868
    CMP EDI,0xe                         ; 00565872
    JNZ 0x0056588b                      ; 00565875
        ;   XREF to: 0056588b (CONDITIONAL_JUMP)  ; LAB_0056588b
    MOV dword ptr [EBX + 0x2d08],0x0    ; 00565877
    MOV dword ptr [EBX + 0x2d04],0x0    ; 00565881
    CMP ESI,dword ptr [EBX + 0x25698]   ; 0056588b
        ;   Label: LAB_0056588b
    JNZ 0x00565806                      ; 00565891
        ;   XREF to: 00565806 (CONDITIONAL_JUMP)  ; LAB_00565806
    MOV dword ptr [EBX + 0x25698],0x0   ; 00565897
    JMP 0x00565806                      ; 005658a1
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    CMP EDX,0x6                         ; 005658a6
        ;   Label: LAB_005658a6
    JZ 0x00565858                       ; 005658a9
        ;   XREF to: 00565858 (CONDITIONAL_JUMP)  ; LAB_00565858
    PUSH 0x75a                          ; 005658ab
    PUSH EDX                            ; 005658b0
    MOV EAX,0x5eb661                    ; 005658b1 | s_actionPending_d_stranger_005eb660+1
    PUSH EAX                            ; 005658b6 | s_actionPending_d_stranger_005eb660+1
    MOV EAX,[0x006138e0]                ; 005658b7 | DAT_006138e0
    PUSH EAX                            ; 005658bc
    CALL FUN_0047bdf0                   ; 005658bd
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bdf0()
    ADD ESP,0x10                        ; 005658c2
    JMP 0x00565862                      ; 005658c5
        ;   XREF to: 00565862 (UNCONDITIONAL_JUMP)  ; LAB_00565862
    MOV EDX,dword ptr [EBX + 0x256a4]   ; 005658c7
        ;   Label: LAB_005658c7
    CMP EDX,0x4                         ; 005658cd
    JNZ 0x00565908                      ; 005658d0
        ;   XREF to: 00565908 (CONDITIONAL_JUMP)  ; LAB_00565908
    MOV dword ptr [EBX + 0x256a4],0x0   ; 005658d2
    MOV EDI,dword ptr [EBX + 0x25608]   ; 005658dc
        ;   Label: LAB_005658dc
    TEST EDI,EDI                        ; 005658e2
    JZ 0x00565925                       ; 005658e4
        ;   XREF to: 00565925 (CONDITIONAL_JUMP)  ; LAB_00565925
    PUSH EBX                            ; 005658e6
    MOV ESI,dword ptr [EDI + 0x2b0]     ; 005658e7
    PUSH EDI                            ; 005658ed
    CALL dword ptr [ESI + 0x8c]         ; 005658ee
    ADD ESP,0x8                         ; 005658f4
    MOV ESI,EAX                         ; 005658f7
    TEST EAX,EAX                        ; 005658f9
    JNZ 0x00565943                      ; 005658fb
        ;   XREF to: 00565943 (CONDITIONAL_JUMP)  ; LAB_00565943
    MOV dword ptr [EBX + 0x25608],EAX   ; 005658fd
    JMP 0x00565806                      ; 00565903
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    PUSH 0x778                          ; 00565908
        ;   Label: LAB_00565908
    PUSH EDX                            ; 0056590d
    MOV EAX,0x5eb689                    ; 0056590e | = "actionPending = %d\nstranger.cpp line %d"
    PUSH EAX                            ; 00565913 | = "actionPending = %d\nstranger.cpp line %d"
    MOV ESI,dword ptr [0x006138e0]      ; 00565914 | DAT_006138e0
    PUSH ESI                            ; 0056591a
    CALL FUN_0047bdf0                   ; 0056591b
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bdf0()
    ADD ESP,0x10                        ; 00565920
    JMP 0x005658dc                      ; 00565923
        ;   XREF to: 005658dc (UNCONDITIONAL_JUMP)  ; LAB_005658dc
    PUSH 0x77e                          ; 00565925
        ;   Label: LAB_00565925
    PUSH 0x5eb6b1                       ; 0056592a | = "Object to pick up is now NULL\nstrang..."
    MOV ESI,dword ptr [0x006138e0]      ; 0056592f | DAT_006138e0
    PUSH ESI                            ; 00565935
    CALL FUN_0047bdf0                   ; 00565936
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bdf0()
    ADD ESP,0xc                         ; 0056593b
    JMP 0x00565806                      ; 0056593e
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    MOV EAX,dword ptr [EBX + 0x25608]   ; 00565943
        ;   Label: LAB_00565943
    TEST EAX,EAX                        ; 00565949
    JNZ 0x00565990                      ; 0056594b
        ;   XREF to: 00565990 (CONDITIONAL_JUMP)  ; LAB_00565990
    CMP ESI,0x2                         ; 0056594d
        ;   Label: LAB_0056594d
    JNZ 0x00565980                      ; 00565950
        ;   XREF to: 00565980 (CONDITIONAL_JUMP)  ; LAB_00565980
    MOV EAX,dword ptr [EBX + 0x256a4]   ; 00565952
    TEST EAX,EAX                        ; 00565958
    JZ 0x00565976                       ; 0056595a
        ;   XREF to: 00565976 (CONDITIONAL_JUMP)  ; LAB_00565976
    PUSH 0x79c                          ; 0056595c
    PUSH EAX                            ; 00565961
    PUSH 0x5eb6e4                       ; 00565962 | = "actionPending = %d\nstranger.cpp line %d"
    MOV ECX,dword ptr [0x006138e0]      ; 00565967 | DAT_006138e0
    PUSH ECX                            ; 0056596d
    CALL FUN_0047bdf0                   ; 0056596e
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bdf0()
    ADD ESP,0x10                        ; 00565973
    MOV dword ptr [EBX + 0x256a4],0x1   ; 00565976
        ;   Label: LAB_00565976
    PUSH 0x1                            ; 00565980
        ;   Label: LAB_00565980
    PUSH EBX                            ; 00565982
    CALL FUN_004cff50                   ; 00565983
        ;   XREF to: 004cff50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cff50()
    ADD ESP,0x8                         ; 00565988
    JMP 0x00565806                      ; 0056598b
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    PUSH EBX                            ; 00565990
        ;   Label: LAB_00565990
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00565991
    PUSH EAX                            ; 00565997
    CALL dword ptr [EDX + 0x8c]         ; 00565998
    ADD ESP,0x8                         ; 0056599e
    CMP EAX,0x4                         ; 005659a1
    SETZ AL                             ; 005659a4
    AND EAX,0xff                        ; 005659a7
    JZ 0x0056594d                       ; 005659ac
        ;   XREF to: 0056594d (CONDITIONAL_JUMP)  ; LAB_0056594d
    MOV dword ptr [EBX + 0x2d08],0x0    ; 005659ae
    MOV dword ptr [EBX + 0x2d04],0xe    ; 005659b8
    JMP 0x0056594d                      ; 005659c2
        ;   XREF to: 0056594d (UNCONDITIONAL_JUMP)  ; LAB_0056594d
    MOV ESI,dword ptr [EBX + 0x2698]    ; 005659c4
        ;   Label: LAB_005659c4
    CMP ESI,dword ptr [EBX + 0x25698]   ; 005659ca
    JNZ 0x005659dc                      ; 005659d0
        ;   XREF to: 005659dc (CONDITIONAL_JUMP)  ; LAB_005659dc
    MOV dword ptr [EBX + 0x25698],0x0   ; 005659d2
    PUSH 0x1                            ; 005659dc
        ;   Label: LAB_005659dc
    PUSH EBX                            ; 005659de
    CALL FUN_004cff90                   ; 005659df
        ;   XREF to: 004cff90 (UNCONDITIONAL_CALL)  ; undefined FUN_004cff90()
    MOV EDI,dword ptr [EBX + 0x256a4]   ; 005659e4
    ADD ESP,0x8                         ; 005659ea
    CMP EDI,0x1                         ; 005659ed
    JNZ 0x00565a01                      ; 005659f0
        ;   XREF to: 00565a01 (CONDITIONAL_JUMP)  ; LAB_00565a01
    MOV dword ptr [EBX + 0x256a4],0x0   ; 005659f2
    JMP 0x00565806                      ; 005659fc
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    PUSH 0x7bc                          ; 00565a01
        ;   Label: LAB_00565a01
    PUSH EDI                            ; 00565a06
    PUSH 0x5eb70c                       ; 00565a07 | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x006138e0]      ; 00565a0c | DAT_006138e0
    PUSH EDX                            ; 00565a12
    CALL FUN_0047bdf0                   ; 00565a13
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bdf0()
    JMP 0x00565803                      ; 00565a18
        ;   XREF to: 00565803 (UNCONDITIONAL_JUMP)  ; LAB_00565803
    MOV EAX,[0x0264be4c]                ; 00565a1d | DAT_0264be4c
        ;   Label: LAB_00565a1d
    JMP 0x00565771                      ; 00565a22
        ;   XREF to: 00565771 (UNCONDITIONAL_JUMP)  ; LAB_00565771
    MOV EDX,dword ptr [EBX + 0x25694]   ; 00565a27
        ;   Label: LAB_00565a27
    TEST EDX,EDX                        ; 00565a2d
    JNZ 0x00565ab8                      ; 00565a2f
        ;   XREF to: 00565ab8 (CONDITIONAL_JUMP)  ; LAB_00565ab8
    CMP dword ptr [EBX + 0x2570],0x0    ; 00565a35
    JZ 0x00565806                       ; 00565a3c
        ;   XREF to: 00565806 (CONDITIONAL_JUMP)  ; LAB_00565806
    PUSH 0x3                            ; 00565a42
    MOV ESI,dword ptr [ESP + 0x100]     ; 00565a44
    PUSH ESI                            ; 00565a4b
    CALL FUN_005038a0                   ; 00565a4c
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x108],EAX     ; 00565a51
    FLD float ptr [ESP + 0x108]         ; 00565a58
    ADD ESP,0x8                         ; 00565a5f
    FCOMP double ptr [0x005eb7b5]       ; 00565a62 | DAT_005eb7b5
    FNSTSW AX                           ; 00565a68
    SAHF                                ; 00565a6a
    JA 0x00565b05                       ; 00565a6b
        ;   XREF to: 00565b05 (CONDITIONAL_JUMP)  ; LAB_00565b05
    PUSH 0x1                            ; 00565a71
    PUSH ESI                            ; 00565a73
    CALL FUN_005038a0                   ; 00565a74
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x108],EAX     ; 00565a79
    FLD float ptr [ESP + 0x108]         ; 00565a80
    ADD ESP,0x8                         ; 00565a87
    FCOMP double ptr [0x005eb7b5]       ; 00565a8a | DAT_005eb7b5
    FNSTSW AX                           ; 00565a90
    SAHF                                ; 00565a92
    JBE 0x00565b24                      ; 00565a93
        ;   XREF to: 00565b24 (CONDITIONAL_JUMP)  ; LAB_00565b24
    LEA EAX,[ESP + 0xa4]                ; 00565a99
    PUSH 0x3f800000                     ; 00565aa0
    PUSH EAX                            ; 00565aa5
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00565aa6
    PUSH EBX                            ; 00565aac
    CALL dword ptr [EDX + 0x2c]         ; 00565aad
    ADD ESP,0xc                         ; 00565ab0
    JMP 0x00565806                      ; 00565ab3
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    PUSH 0x3f800000                     ; 00565ab8
        ;   Label: LAB_00565ab8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00565abd
    MOV ESI,dword ptr [EDX + 0x2b0]     ; 00565ac3
    PUSH EDX                            ; 00565ac9
    MOV dword ptr [ESP + 0x108],EAX     ; 00565aca
    CALL dword ptr [ESI + 0x4c]         ; 00565ad1
    ADD ESP,0x4                         ; 00565ad4
    PUSH EAX                            ; 00565ad7
    LEA EAX,[ESP + 0xac]                ; 00565ad8
    PUSH EAX                            ; 00565adf
    PUSH EBX                            ; 00565ae0
    LEA ESI,[ESP + 0x9c]                ; 00565ae1
    CALL FUN_00408d70                   ; 00565ae8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00565aed
    LEA EAX,[ESP + 0x70]                ; 00565af0
    LEA EDI,[ESP + 0x70]                ; 00565af4
    PUSH EAX                            ; 00565af8
    LEA ESI,[ESP + 0x98]                ; 00565af9
    JMP 0x005657f5                      ; 00565b00
        ;   XREF to: 005657f5 (UNCONDITIONAL_JUMP)  ; LAB_005657f5
    LEA ESI,[ESP + 0xa4]                ; 00565b05
        ;   Label: LAB_00565b05
    PUSH 0x3fd9999a                     ; 00565b0c
    PUSH ESI                            ; 00565b11
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00565b12
    PUSH EBX                            ; 00565b18
    CALL dword ptr [EAX + 0x2c]         ; 00565b19
    ADD ESP,0xc                         ; 00565b1c
    JMP 0x00565806                      ; 00565b1f
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    PUSH 0x2                            ; 00565b24
        ;   Label: LAB_00565b24
    PUSH ESI                            ; 00565b26
    CALL FUN_005038a0                   ; 00565b27
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x108],EAX     ; 00565b2c
    FLD float ptr [ESP + 0x108]         ; 00565b33
    ADD ESP,0x8                         ; 00565b3a
    FCOMP double ptr [0x005eb7b5]       ; 00565b3d | DAT_005eb7b5
    FNSTSW AX                           ; 00565b43
    SAHF                                ; 00565b45
    JBE 0x00565806                      ; 00565b46
        ;   XREF to: 00565806 (CONDITIONAL_JUMP)  ; LAB_00565806
    LEA EAX,[ESP + 0xa4]                ; 00565b4c
    PUSH 0x3f800000                     ; 00565b53
    PUSH EAX                            ; 00565b58
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00565b59
    PUSH EBX                            ; 00565b5f
    CALL dword ptr [EDX + 0x2c]         ; 00565b60
    ADD ESP,0xc                         ; 00565b63
    JMP 0x00565806                      ; 00565b66
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    MOV ESI,dword ptr [0x01c264e0]      ; 00565b6b | DAT_01c264e0
        ;   Label: LAB_00565b6b
    PUSH ESI                            ; 00565b71
    MOV EDI,dword ptr [EBX + 0x276c]    ; 00565b72
    PUSH EDI                            ; 00565b78
    CALL FUN_0040c8f0                   ; 00565b79
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV dword ptr [ESP + 0x100],EAX     ; 00565b7e
    ADD ESP,0x8                         ; 00565b85
    MOV dword ptr [ESP + 0xf4],EAX      ; 00565b88
    TEST EAX,EAX                        ; 00565b8f
    JZ 0x00565ce7                       ; 00565b91
        ;   XREF to: 00565ce7 (CONDITIONAL_JUMP)  ; LAB_00565ce7
    MOV EDX,dword ptr [0x0264be60]      ; 00565b97 | DAT_0264be60
    PUSH EDX                            ; 00565b9d
    MOV ECX,dword ptr [ESP + 0x100]     ; 00565b9e
    PUSH ECX                            ; 00565ba5
    LEA ESI,[ESP + 0x4c]                ; 00565ba6
    LEA EDI,[ESP + 0xd0]                ; 00565baa
    CALL FUN_005469a0                   ; 00565bb1
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 00565bb6
    LEA EAX,[ESP + 0xc8]                ; 00565bb9
    LEA ESI,[ESP + 0x44]                ; 00565bc0
    PUSH EAX                            ; 00565bc4
    MOVSD ES:EDI,ESI                    ; 00565bc5
    MOVSD ES:EDI,ESI                    ; 00565bc6
    MOVSD ES:EDI,ESI                    ; 00565bc7
    PUSH EBX                            ; 00565bc8
    LEA ESI,[ESP + 0x64]                ; 00565bc9
    LEA EDI,[ESP + 0xdc]                ; 00565bcd
    CALL FUN_00408d70                   ; 00565bd4
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00565bd9
    LEA EAX,[ESP + 0x8]                 ; 00565bdc
    LEA ESI,[ESP + 0x5c]                ; 00565be0
    PUSH EAX                            ; 00565be4
    MOVSD ES:EDI,ESI                    ; 00565be5
    MOVSD ES:EDI,ESI                    ; 00565be6
    MOVSD ES:EDI,ESI                    ; 00565be7
    CALL FUN_004222d0                   ; 00565be8
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00565bed
    PUSH 0x41700000                     ; 00565bf0
    PUSH 0x41200000                     ; 00565bf5
    CALL FUN_0040cf60                   ; 00565bfa
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x108],EAX     ; 00565bff
    FLD float ptr [ESP + 0x108]         ; 00565c06
    ADD ESP,0x8                         ; 00565c0d
    LEA EAX,[ESP + 0xd4]                ; 00565c10
    PUSH EAX                            ; 00565c17
    MOV ESI,dword ptr [ESP + 0xfc]      ; 00565c18
    LEA EDI,[ESP + 0x54]                ; 00565c1f
    PUSH ESI                            ; 00565c23
    LEA ESI,[ESP + 0xc4]                ; 00565c24
    FSTP float ptr [ESP + 0x14]         ; 00565c2b
    CALL FUN_00408de0                   ; 00565c2f
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0xc4]                ; 00565c34
    ADD ESP,0x8                         ; 00565c3b
    MOVSD ES:EDI,ESI                    ; 00565c3e
    MOVSD ES:EDI,ESI                    ; 00565c3f
    MOVSD ES:EDI,ESI                    ; 00565c40
    LEA EDX,[ESP + 0x24]                ; 00565c41
    LEA ESI,[ESP + 0x50]                ; 00565c45
    CMP EDX,ESI                         ; 00565c49
    JZ 0x00565c61                       ; 00565c4b
        ;   XREF to: 00565c61 (CONDITIONAL_JUMP)  ; LAB_00565c61
    MOV EAX,dword ptr [ESI]             ; 00565c4d
    MOV dword ptr [ESP + 0x24],EAX      ; 00565c4f
    MOV EAX,dword ptr [ESI + 0x4]       ; 00565c53
    MOV dword ptr [ESP + 0x28],EAX      ; 00565c56
    MOV EAX,dword ptr [ESI + 0x8]       ; 00565c5a
    MOV dword ptr [ESP + 0x2c],EAX      ; 00565c5d
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00565c61
        ;   Label: LAB_00565c61
    LEA EAX,[ESP + 0x8]                 ; 00565c68
    MOV dword ptr [ESP + 0x3c],EBX      ; 00565c6c
    MOV dword ptr [ESP + 0x40],EBX      ; 00565c70
    PUSH EAX                            ; 00565c74
    MOV EDI,dword ptr [ESP + 0xf8]      ; 00565c75
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 00565c7c
    PUSH EDI                            ; 00565c82
    CALL dword ptr [EDX + 0x110]        ; 00565c83
    ADD ESP,0x8                         ; 00565c89
    FLDZ                                ; 00565c8c
    FLD float ptr [ESP + 0xc]           ; 00565c8e
    FSTP double ptr [ESP]               ; 00565c92
    FCOMP double ptr [ESP]              ; 00565c95
    FNSTSW AX                           ; 00565c98
    SAHF                                ; 00565c9a
    JNC 0x00565ce7                      ; 00565c9b
        ;   XREF to: 00565ce7 (CONDITIONAL_JUMP)  ; LAB_00565ce7
    FLD double ptr [ESP]                ; 00565c9d
    FMUL double ptr [0x005eb7ad]        ; 00565ca0 | DAT_005eb7ad
    CALL FUN_005b7ff0                   ; 00565ca6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x100]       ; 00565cab
    MOV EAX,dword ptr [ESP + 0x100]     ; 00565cb2
    PUSH 0x0                            ; 00565cb9
    INC EAX                             ; 00565cbb
    PUSH EAX                            ; 00565cbc
    PUSH 0x0                            ; 00565cbd
    LEA EAX,[ESP + 0xe0]                ; 00565cbf
    PUSH EAX                            ; 00565cc6
    MOV EAX,[0x006167e0]                ; 00565cc7 | DAT_006167e0
    PUSH EAX                            ; 00565ccc
    CALL FUN_004c9850                   ; 00565ccd
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9850()
    ADD ESP,0x14                        ; 00565cd2
    PUSH 0x5eb734                       ; 00565cd5 | = "kick1.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00565cda
    PUSH EBX                            ; 00565ce0
    CALL dword ptr [EAX + 0x34]         ; 00565ce1
    ADD ESP,0x8                         ; 00565ce4
    MOV dword ptr [EBX + 0x276c],0x0    ; 00565ce7
        ;   Label: LAB_00565ce7
    JMP 0x00565806                      ; 00565cf1
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    MOV ECX,dword ptr [EBX + 0x276c]    ; 00565cf6
        ;   Label: LAB_00565cf6
    TEST ECX,ECX                        ; 00565cfc
    JZ 0x00565806                       ; 00565cfe
        ;   XREF to: 00565806 (CONDITIONAL_JUMP)  ; LAB_00565806
    LEA EAX,[ECX + 0x20]                ; 00565d04
    PUSH EAX                            ; 00565d07
    PUSH EBX                            ; 00565d08
    LEA ESI,[ESP + 0xe8]                ; 00565d09
    LEA EDI,[ESP + 0xa0]                ; 00565d10
    CALL FUN_00408de0                   ; 00565d17
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0xe8]                ; 00565d1c
    ADD ESP,0x8                         ; 00565d23
    MOVSD ES:EDI,ESI                    ; 00565d26
    MOVSD ES:EDI,ESI                    ; 00565d27
    MOVSD ES:EDI,ESI                    ; 00565d28
    FLDZ                                ; 00565d29
    FCOMP float ptr [ESP + 0xa0]        ; 00565d2b
    FNSTSW AX                           ; 00565d32
    SAHF                                ; 00565d34
    JNC 0x00565806                      ; 00565d35
        ;   XREF to: 00565806 (CONDITIONAL_JUMP)  ; LAB_00565806
    PUSH 0x5eb73e                       ; 00565d3b | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00565d40
    PUSH EBX                            ; 00565d46
    CALL dword ptr [EAX + 0x34]         ; 00565d47
    ADD ESP,0x8                         ; 00565d4a
    JMP 0x00565806                      ; 00565d4d
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    PUSH 0x5eb74e                       ; 00565d52 | = "fall-1.wav"
        ;   Label: LAB_00565d52
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00565d57
    PUSH EBX                            ; 00565d5d
    CALL dword ptr [EAX + 0x34]         ; 00565d5e
    ADD ESP,0x8                         ; 00565d61
    JMP 0x00565806                      ; 00565d64
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    PUSH EBX                            ; 00565d69
        ;   Label: LAB_00565d69
    CALL FUN_0056a160                   ; 00565d6a
        ;   XREF to: 0056a160 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a160()
    ADD ESP,0x4                         ; 00565d6f
    JMP 0x00565806                      ; 00565d72
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    PUSH 0x80f                          ; 00565d77
        ;   Label: LAB_00565d77
    PUSH ECX                            ; 00565d7c
    PUSH 0x5eb759                       ; 00565d7d | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDI,dword ptr [0x006138e0]      ; 00565d82 | DAT_006138e0
    PUSH EDI                            ; 00565d88
    CALL FUN_0047bdf0                   ; 00565d89
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bdf0()
    ADD ESP,0x10                        ; 00565d8e
    JMP 0x00565e22                      ; 00565d91
        ;   XREF to: 00565e22 (UNCONDITIONAL_JUMP)  ; LAB_00565e22
    PUSH EBX                            ; 00565d96
        ;   Label: LAB_00565d96
    CALL FUN_004cf440                   ; 00565d97
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf440()
    ADD ESP,0x4                         ; 00565d9c
    JMP 0x00565806                      ; 00565d9f
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    MOV EAX,[0x005fc1e0]                ; 00565da4 | DAT_005fc1e0
        ;   Label: LAB_00565da4
    MOV dword ptr [EBX + 0x258c],EAX    ; 00565da9
    JMP 0x00565806                      ; 00565daf
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    MOV EAX,[0x005fc1e8]                ; 00565db4 | DAT_005fc1e8
        ;   Label: LAB_00565db4
    MOV dword ptr [EBX + 0x258c],EAX    ; 00565db9
    JMP 0x00565806                      ; 00565dbf
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    JBE 0x00565806                      ; 00565dc4
        ;   XREF to: 00565806 (CONDITIONAL_JUMP)  ; LAB_00565806
        ;   Label: LAB_00565dc4
    CMP EAX,0x17                        ; 00565dca
    JNC 0x00565dde                      ; 00565dcd
        ;   XREF to: 00565dde (CONDITIONAL_JUMP)  ; LAB_00565dde
    CMP EAX,0x15                        ; 00565dcf
    JNC 0x00565e03                      ; 00565dd2
        ;   XREF to: 00565e03 (CONDITIONAL_JUMP)  ; LAB_00565e03
    CMP EAX,0x13                        ; 00565dd4
    JZ 0x00565d69                       ; 00565dd7
        ;   XREF to: 00565d69 (CONDITIONAL_JUMP)  ; LAB_00565d69
    JMP 0x00565ebd                      ; 00565dd9
        ;   XREF to: 00565ebd (UNCONDITIONAL_JUMP)  ; LAB_00565ebd
    JBE 0x00565d96                      ; 00565dde
        ;   XREF to: 00565d96 (CONDITIONAL_JUMP)  ; LAB_00565d96
        ;   Label: LAB_00565dde
    CMP EAX,0x29a                       ; 00565de0
    JNC 0x00565df5                      ; 00565de5
        ;   XREF to: 00565df5 (CONDITIONAL_JUMP)  ; LAB_00565df5
    CMP EAX,0x18                        ; 00565de7
    JZ 0x00565806                       ; 00565dea
        ;   XREF to: 00565806 (CONDITIONAL_JUMP)  ; LAB_00565806
    JMP 0x00565ebd                      ; 00565df0
        ;   XREF to: 00565ebd (UNCONDITIONAL_JUMP)  ; LAB_00565ebd
    JBE 0x00565da4                      ; 00565df5
        ;   XREF to: 00565da4 (CONDITIONAL_JUMP)  ; LAB_00565da4
        ;   Label: LAB_00565df5
    CMP EAX,0x29b                       ; 00565df7
    JZ 0x00565db4                       ; 00565dfc
        ;   XREF to: 00565db4 (CONDITIONAL_JUMP)  ; LAB_00565db4
    JMP 0x00565ebd                      ; 00565dfe
        ;   XREF to: 00565ebd (UNCONDITIONAL_JUMP)  ; LAB_00565ebd
    JBE 0x005659c4                      ; 00565e03
        ;   XREF to: 005659c4 (CONDITIONAL_JUMP)  ; LAB_005659c4
        ;   Label: LAB_00565e03
    MOV ECX,dword ptr [EBX + 0x256a4]   ; 00565e09
    CMP ECX,0x5                         ; 00565e0f
    JNZ 0x00565d77                      ; 00565e12
        ;   XREF to: 00565d77 (CONDITIONAL_JUMP)  ; LAB_00565d77
    MOV dword ptr [EBX + 0x256a4],0x0   ; 00565e18
    CMP dword ptr [EBX + 0x25604],0x0   ; 00565e22
        ;   Label: LAB_00565e22
    JNZ 0x00565e44                      ; 00565e29
        ;   XREF to: 00565e44 (CONDITIONAL_JUMP)  ; LAB_00565e44
    PUSH 0x815                          ; 00565e2b
    PUSH 0x5eb781                       ; 00565e30 | = "doorToOpen == NULL\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x006138e0]      ; 00565e35 | DAT_006138e0
    PUSH EDX                            ; 00565e3b
    CALL FUN_0047bdf0                   ; 00565e3c
        ;   XREF to: 0047bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bdf0()
    ADD ESP,0xc                         ; 00565e41
    PUSH EBX                            ; 00565e44
        ;   Label: LAB_00565e44
    CALL FUN_004cf230                   ; 00565e45
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf230()
    ADD ESP,0x4                         ; 00565e4a
    TEST EAX,EAX                        ; 00565e4d
    JNZ 0x00565806                      ; 00565e4f
        ;   XREF to: 00565806 (CONDITIONAL_JUMP)  ; LAB_00565806
    PUSH 0x1                            ; 00565e55
    PUSH EAX                            ; 00565e57
    MOV ECX,dword ptr [ESP + 0x104]     ; 00565e58
    PUSH ECX                            ; 00565e5f
    CALL FUN_00503620                   ; 00565e60
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00565e65
    JMP 0x00565806                      ; 00565e68
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    JBE 0x00565b6b                      ; 00565e6d
        ;   XREF to: 00565b6b (CONDITIONAL_JUMP)  ; LAB_00565b6b
        ;   Label: LAB_00565e6d
    CMP EAX,0xf                         ; 00565e73
    JNC 0x00565e90                      ; 00565e76
        ;   XREF to: 00565e90 (CONDITIONAL_JUMP)  ; LAB_00565e90
    CMP EAX,0x7                         ; 00565e78
    JZ 0x00565763                       ; 00565e7b
        ;   XREF to: 00565763 (CONDITIONAL_JUMP)  ; LAB_00565763
    PUSH ESI                            ; 00565e81
    PUSH EBX                            ; 00565e82
    CALL FUN_0042aa00                   ; 00565e83
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 00565e88
    JMP 0x00565806                      ; 00565e8b
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    JBE 0x00565cf6                      ; 00565e90
        ;   XREF to: 00565cf6 (CONDITIONAL_JUMP)  ; LAB_00565cf6
        ;   Label: LAB_00565e90
    CMP EAX,0x11                        ; 00565e96
    JZ 0x00565d52                       ; 00565e99
        ;   XREF to: 00565d52 (CONDITIONAL_JUMP)  ; LAB_00565d52
    PUSH ESI                            ; 00565e9f
    PUSH EBX                            ; 00565ea0
    CALL FUN_0042aa00                   ; 00565ea1
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 00565ea6
    JMP 0x00565806                      ; 00565ea9
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806
    JBE 0x005658c7                      ; 00565eae
        ;   XREF to: 005658c7 (CONDITIONAL_JUMP)  ; LAB_005658c7
        ;   Label: LAB_00565eae
    CMP EAX,0x3                         ; 00565eb4
    JZ 0x0056581d                       ; 00565eb7
        ;   XREF to: 0056581d (CONDITIONAL_JUMP)  ; LAB_0056581d
    PUSH ESI                            ; 00565ebd
        ;   Label: LAB_00565ebd
    PUSH EBX                            ; 00565ebe
    CALL FUN_0042aa00                   ; 00565ebf
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 00565ec4
    JMP 0x00565806                      ; 00565ec7
        ;   XREF to: 00565806 (UNCONDITIONAL_JUMP)  ; LAB_00565806

