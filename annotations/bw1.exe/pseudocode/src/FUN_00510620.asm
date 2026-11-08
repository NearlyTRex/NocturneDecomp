; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00510620(int param_1)
;
; Local Variables:
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_005108d0 at 005108e1
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01bc1224
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d50
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d22424
;   undefined4 DAT_01d39d34
;   undefined4 DAT_02c83694
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_0040c600
;   FUN_004207b0
;   FUN_0042f3c0
;   FUN_00441800
;   FUN_004688a0
;   FUN_00483850
;   FUN_00483e60
;   FUN_00484190
;   FUN_005083b0
;   FUN_005237e0
;   FUN_00524770
;   FUN_005254b0
;   FUN_00569810
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510620
        ;   Label: FUN_00510620
    PUSH ESI                            ; 00510621
    PUSH EDI                            ; 00510622
    PUSH EBP                            ; 00510623
    MOV EBP,ESP                         ; 00510624
    SUB ESP,0x120                       ; 00510626
    SUB EBP,0x7e                        ; 0051062c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0051062f
    CMP dword ptr [EBX + 0x24fc],0x0    ; 00510635
    JZ 0x00510648                       ; 0051063c
        ;   XREF to: 00510648 (CONDITIONAL_JUMP)  ; LAB_00510648
    XOR EAX,EAX                         ; 0051063e
    LEA ESP,[EBP + 0x7e]                ; 00510640
    POP EBP                             ; 00510643
    POP EDI                             ; 00510644
    POP ESI                             ; 00510645
    POP EBX                             ; 00510646
    RET                                 ; 00510647
    PUSH EBX                            ; 00510648
        ;   Label: LAB_00510648
    CALL FUN_004087b0                   ; 00510649
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 0051064e
    PUSH 0x0                            ; 00510651
    MOV EAX,dword ptr [EBX + 0x154]     ; 00510653
    PUSH EBX                            ; 00510659
    LEA ESI,[EBP + 0x6]                 ; 0051065a
    LEA EDI,[EBP + -0x12]               ; 0051065d
    CALL dword ptr [EAX + 0x1c]         ; 00510660
    MOV ECX,0x6                         ; 00510663
    ADD ESP,0x4                         ; 00510668
    LEA EAX,[EBP + -0x12]               ; 0051066b
    LEA ESI,[EBP + 0x6]                 ; 0051066e
    PUSH EAX                            ; 00510671
    MOVSD.REP ES:EDI,ESI                ; 00510672
    CALL FUN_004207b0                   ; 00510674
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 00510679
    MOV dword ptr [EBP + 0x76],EAX      ; 0051067c
    TEST EAX,EAX                        ; 0051067f
    JZ 0x005106a7                       ; 00510681
        ;   XREF to: 005106a7 (CONDITIONAL_JUMP)  ; LAB_005106a7
    FLD float ptr [EBX + 0x47abc]       ; 00510683
    FLDZ                                ; 00510689
    FCOMPP                              ; 0051068b
    FNSTSW AX                           ; 0051068d
    SAHF                                ; 0051068f
    JA 0x005106bb                       ; 00510690
        ;   XREF to: 005106bb (CONDITIONAL_JUMP)  ; LAB_005106bb
    LEA EAX,[EBX + 0x46e90]             ; 00510692
    PUSH dword ptr [EBX + 0x47abc]      ; 00510698
    PUSH EAX                            ; 0051069e
    CALL FUN_005237e0                   ; 0051069f
        ;   XREF to: 005237e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005237e0()
    ADD ESP,0x8                         ; 005106a4
        ;   Label: LAB_005106a4
    PUSH EBX                            ; 005106a7
        ;   Label: LAB_005106a7
    CALL FUN_004087f0                   ; 005106a8
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    MOV EAX,dword ptr [EBP + 0x76]      ; 005106ad
    ADD ESP,0x4                         ; 005106b0
    LEA ESP,[EBP + 0x7e]                ; 005106b3
    POP EBP                             ; 005106b6
    POP EDI                             ; 005106b7
    POP ESI                             ; 005106b8
    POP EBX                             ; 005106b9
    RET                                 ; 005106ba
    MOV EAX,[0x00612560]                ; 005106bb | DAT_00612560
        ;   Label: LAB_005106bb
    MOV EAX,dword ptr [EAX + 0x18]      ; 005106c0 | DAT_01bc1224
    MOV dword ptr [EBP + 0x72],EAX      ; 005106c3
    TEST EAX,EAX                        ; 005106c6
    SETZ AL                             ; 005106c8
    AND EAX,0xff                        ; 005106cb
    PUSH EAX                            ; 005106d0
    MOV ECX,dword ptr [0x00612560]      ; 005106d1 | DAT_00612560
    PUSH ECX                            ; 005106d7 | DAT_01bc120c
    CALL FUN_00484190                   ; 005106d8
        ;   XREF to: 00484190 (UNCONDITIONAL_CALL)  ; undefined FUN_00484190()
    ADD ESP,0x8                         ; 005106dd
    CALL FUN_005083b0                   ; 005106e0
        ;   XREF to: 005083b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005083b0()
    PUSH 0x0                            ; 005106e5
    MOV ESI,dword ptr [0x01c51d2c]      ; 005106e7 | DAT_01c51d2c
    MOV EDI,dword ptr [0x01c51d50]      ; 005106ed | DAT_01c51d50
    MOV EAX,[0x01c51d5c]                ; 005106f3 | DAT_01c51d5c
    MOV EDX,dword ptr [0x01c51d60]      ; 005106f8 | DAT_01c51d60
    MOV ECX,dword ptr [0x01c51d64]      ; 005106fe | DAT_01c51d64
    PUSH 0x1                            ; 00510704
    NEG ESI                             ; 00510706
    NEG EDI                             ; 00510708
    NEG EAX                             ; 0051070a
    NEG EDX                             ; 0051070c
    NEG ECX                             ; 0051070e
    PUSH -0x1                           ; 00510710
    MOV dword ptr [0x01c51d2c],ESI      ; 00510712 | DAT_01c51d2c
    MOV [0x01c51d5c],EAX                ; 00510718 | DAT_01c51d5c
    PUSH -0x1                           ; 0051071d
    LEA EAX,[EBX + 0x158]               ; 0051071f
    MOV dword ptr [0x01c51d50],EDI      ; 00510725 | DAT_01c51d50
    PUSH EAX                            ; 0051072b
    MOV dword ptr [0x01c51d60],EDX      ; 0051072c | DAT_01c51d60
    MOV dword ptr [0x01c51d64],ECX      ; 00510732 | DAT_01c51d64
    CALL FUN_00569810                   ; 00510738
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; undefined FUN_00569810()
    ADD ESP,0x14                        ; 0051073d
    PUSH 0x0                            ; 00510740
    LEA EAX,[EBX + 0xc330]              ; 00510742
    PUSH EAX                            ; 00510748
    CALL FUN_00441800                   ; 00510749
        ;   XREF to: 00441800 (UNCONDITIONAL_CALL)  ; undefined FUN_00441800()
    ADD ESP,0x8                         ; 0051074e
    MOV ESI,dword ptr [0x02c83694]      ; 00510751 | DAT_02c83694
    MOV EAX,[0x01d06ab4]                ; 00510757 | DAT_01d06ab4
    PUSH ESI                            ; 0051075c
    MOV EDI,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0051075d
    PUSH EDI                            ; 00510764
    CALL FUN_0040c600                   ; 00510765
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV dword ptr [EBP + 0x7a],EAX      ; 0051076a
    ADD ESP,0x8                         ; 0051076d
    TEST EAX,EAX                        ; 00510770
    JZ 0x00510865                       ; 00510772
        ;   XREF to: 00510865 (CONDITIONAL_JUMP)  ; LAB_00510865
    MOV ESI,0x40490fdb                  ; 00510778
    LEA EDI,[EBP + 0x66]                ; 0051077d
    XOR EDX,EDX                         ; 00510780
    LEA EAX,[EBP + 0x66]                ; 00510782
    MOV dword ptr [EBP + 0x2a],EDX      ; 00510785
    MOV dword ptr [EBP + 0x32],EDX      ; 00510788
    MOV dword ptr [EBP + 0x2e],ESI      ; 0051078b
    PUSH EAX                            ; 0051078e
    MOV dword ptr [EBP + 0x36],EDX      ; 0051078f
    MOV EAX,0x3f38263b                  ; 00510792
    LEA ESI,[EBP + 0x2a]                ; 00510797
    MOV dword ptr [EBP + 0x3a],EAX      ; 0051079a
    LEA EAX,[EBP + 0x36]                ; 0051079d
    MOV EDX,0x3e3d70a4                  ; 005107a0
    PUSH EAX                            ; 005107a5
    LEA EAX,[EBP + -0x42]               ; 005107a6
    MOV dword ptr [EBP + 0x3e],EDX      ; 005107a9
    PUSH EAX                            ; 005107ac
    MOVSD ES:EDI,ESI                    ; 005107ad
    MOVSD ES:EDI,ESI                    ; 005107ae
    MOVSD ES:EDI,ESI                    ; 005107af
    CALL FUN_005b5760                   ; 005107b0
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    MOV ESI,dword ptr [0x01d22424]      ; 005107b5 | DAT_01d22424
    LEA EAX,[ESI*0x4 + 0x0]             ; 005107bb
    SUB EAX,ESI                         ; 005107c2
    MOV ESI,EAX                         ; 005107c4
    SHL ESI,0x4                         ; 005107c6
    LEA EAX,[EBX + 0xfd8]               ; 005107c9
    ADD ESP,0xc                         ; 005107cf
    ADD EAX,ESI                         ; 005107d2
    PUSH EAX                            ; 005107d4
    LEA EAX,[EBP + -0x42]               ; 005107d5
    PUSH EAX                            ; 005107d8
    LEA ESI,[EBP + -0x72]               ; 005107d9
    LEA EDI,[EBP + 0xffffff5e]          ; 005107dc
    CALL FUN_005b5200                   ; 005107e2
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 005107e7
    LEA ESI,[EBP + -0x72]               ; 005107ec
    LEA EAX,[EBP + 0xffffff5e]          ; 005107ef
    ADD ESP,0x8                         ; 005107f5
    MOVSD.REP ES:EDI,ESI                ; 005107f8
    PUSH EAX                            ; 005107fa
    LEA ESI,[EBP + 0x4e]                ; 005107fb
    LEA EDI,[EBP + 0x5a]                ; 005107fe
    CALL FUN_005b6270                   ; 00510801
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6270()
    LEA ESI,[EBP + 0x4e]                ; 00510806
    LEA EAX,[EBP + 0xffffff5e]          ; 00510809
    ADD ESP,0x4                         ; 0051080f
    MOVSD ES:EDI,ESI                    ; 00510812
    MOVSD ES:EDI,ESI                    ; 00510813
    MOVSD ES:EDI,ESI                    ; 00510814
    PUSH EAX                            ; 00510815
    LEA ESI,[EBP + 0x1e]                ; 00510816
    CALL FUN_005b5930                   ; 00510819
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5930()
    ADD ESP,0x4                         ; 0051081e
    LEA EAX,[EBP + 0x5a]                ; 00510821
    PUSH EAX                            ; 00510824
    LEA EAX,[EBP + 0x42]                ; 00510825
    LEA EDI,[EBP + 0x42]                ; 00510828
    PUSH EAX                            ; 0051082b
    MOV ECX,dword ptr [0x00612560]      ; 0051082c | DAT_00612560
    LEA ESI,[EBP + 0x1e]                ; 00510832
    PUSH ECX                            ; 00510835 | DAT_01bc120c
    MOVSD ES:EDI,ESI                    ; 00510836
    MOVSD ES:EDI,ESI                    ; 00510837
    MOVSD ES:EDI,ESI                    ; 00510838
    CALL FUN_00483850                   ; 00510839
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 0051083e
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00510841
    PUSH -0x1                           ; 00510844
    ADD EAX,0x200ac                     ; 00510846
    PUSH 0x0                            ; 0051084b
    PUSH EAX                            ; 0051084d
    CALL FUN_004688a0                   ; 0051084e
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 00510853
    MOV ESI,dword ptr [0x00612560]      ; 00510856 | DAT_00612560
    PUSH ESI                            ; 0051085c | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 0051085d
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 00510862
    PUSH EBX                            ; 00510865
        ;   Label: LAB_00510865
    CALL FUN_0042f3c0                   ; 00510866
        ;   XREF to: 0042f3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f3c0()
    MOV EDI,dword ptr [0x01d39d34]      ; 0051086b | DAT_01d39d34
    ADD ESP,0x4                         ; 00510871
    TEST EDI,EDI                        ; 00510874
    JZ 0x005108a3                       ; 00510876
        ;   XREF to: 005108a3 (CONDITIONAL_JUMP)  ; LAB_005108a3
    MOV EAX,[0x00612560]                ; 00510878 | DAT_00612560
    PUSH EAX                            ; 0051087d | DAT_01bc120c
    CALL FUN_00483e60                   ; 0051087e
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 00510883
    TEST EAX,EAX                        ; 00510886
    JNZ 0x005108a3                      ; 00510888
        ;   XREF to: 005108a3 (CONDITIONAL_JUMP)  ; LAB_005108a3
    PUSH EBX                            ; 0051088a
    LEA ESI,[EBX + 0x158]               ; 0051088b
    PUSH ESI                            ; 00510891
    CALL FUN_005254b0                   ; 00510892
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005254b0()
    ADD ESP,0x8                         ; 00510897
    PUSH ESI                            ; 0051089a
    CALL FUN_00524770                   ; 0051089b
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 005108a0
    MOV EDX,dword ptr [0x00612560]      ; 005108a3 | DAT_00612560
        ;   Label: LAB_005108a3
    PUSH EDX                            ; 005108a9 | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 005108aa
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 005108af
    MOV ECX,dword ptr [EBP + 0x72]      ; 005108b2
    PUSH ECX                            ; 005108b5
    MOV ESI,dword ptr [0x00612560]      ; 005108b6 | DAT_00612560
    PUSH ESI                            ; 005108bc | DAT_01bc120c
    CALL FUN_00484190                   ; 005108bd
        ;   XREF to: 00484190 (UNCONDITIONAL_CALL)  ; undefined FUN_00484190()
    JMP 0x005106a4                      ; 005108c2
        ;   XREF to: 005106a4 (UNCONDITIONAL_JUMP)  ; LAB_005106a4

