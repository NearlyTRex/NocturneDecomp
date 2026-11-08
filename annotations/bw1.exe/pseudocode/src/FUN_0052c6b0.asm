; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0052c6b0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_004d7e90 at 004d7ee6
;
; Referenced Globals:
;   undefined4 DAT_005eb790
;   undefined4 DAT_005eb798
;   undefined4 DAT_005eb7a0
;   undefined4 DAT_0061abc0
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_006260e8
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d51da4
;   undefined4 DAT_02c8ae4c
;
; Called Functions:
;   FUN_004943a0
;   FUN_00494400
;   FUN_0052c970
;   FUN_0052cab0
;   FUN_0052d360
;   FUN_0052df50
;   FUN_0052e040
;   FUN_0059c740
;   FUN_005acff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c6b0
        ;   Label: FUN_0052c6b0
    PUSH ESI                            ; 0052c6b1
    PUSH EDI                            ; 0052c6b2
    PUSH EBP                            ; 0052c6b3
    MOV EBP,ESP                         ; 0052c6b4
    SUB ESP,0x4c                        ; 0052c6b6
    AND ESP,0xfffffff8                  ; 0052c6b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052c6bc
    PUSH 0x0                            ; 0052c6bf
    PUSH EBX                            ; 0052c6c1
    CALL FUN_0052cab0                   ; 0052c6c2
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    MOV EAX,[0x0061d95c]                ; 0052c6c7 | DAT_0061d95c
    MOV dword ptr [EBX + 0x1c],0x0      ; 0052c6cc
    ADD ESP,0x8                         ; 0052c6d3
    MOV EDX,dword ptr [EAX + 0xd8]      ; 0052c6d6
    PUSH EDX                            ; 0052c6dc
    MOV ECX,dword ptr [EAX + 0xd4]      ; 0052c6dd
    PUSH ECX                            ; 0052c6e3
    LEA ESI,[EBX + 0x8]                 ; 0052c6e4
    PUSH ESI                            ; 0052c6e7
    PUSH 0x1ddf                         ; 0052c6e8
    MOV EDI,dword ptr [0x02c8ae4c]      ; 0052c6ed | DAT_02c8ae4c
    PUSH EDI                            ; 0052c6f3
    LEA EAX,[ESP + 0x44]                ; 0052c6f4
    PUSH EAX                            ; 0052c6f8
    CALL FUN_0059c740                   ; 0052c6f9
        ;   XREF to: 0059c740 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c740()
    ADD ESP,0xc                         ; 0052c6fe
    PUSH EAX                            ; 0052c701
    PUSH EBX                            ; 0052c702
    CALL FUN_0052e040                   ; 0052c703
        ;   XREF to: 0052e040 (UNCONDITIONAL_CALL)  ; undefined FUN_0052e040()
    ADD ESP,0x14                        ; 0052c708
    PUSH EBX                            ; 0052c70b
    MOV dword ptr [EBX + 0x11c],EAX     ; 0052c70c
    CALL FUN_0052c970                   ; 0052c712
        ;   XREF to: 0052c970 (UNCONDITIONAL_CALL)  ; undefined FUN_0052c970()
    ADD ESP,0x4                         ; 0052c717
    TEST EAX,EAX                        ; 0052c71a
    JNZ 0x0052c725                      ; 0052c71c
        ;   XREF to: 0052c725 (CONDITIONAL_JUMP)  ; LAB_0052c725
    MOV ESP,EBP                         ; 0052c71e
    POP EBP                             ; 0052c720
    POP EDI                             ; 0052c721
    POP ESI                             ; 0052c722
    POP EBX                             ; 0052c723
    RET                                 ; 0052c724
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052c725
        ;   Label: LAB_0052c725
    PUSH 0x1ddf                         ; 0052c728
    MOV EDX,dword ptr [EAX]             ; 0052c72d
    PUSH EDX                            ; 0052c72f
    LEA EAX,[ESP + 0x40]                ; 0052c730
    PUSH EAX                            ; 0052c734
    CALL FUN_0059c740                   ; 0052c735
        ;   XREF to: 0059c740 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c740()
    ADD ESP,0xc                         ; 0052c73a
    PUSH 0x0                            ; 0052c73d
    PUSH 0x0                            ; 0052c73f
    PUSH 0x5eb6e1                       ; 0052c741
    LEA EAX,[ESP + 0x44]                ; 0052c746
    PUSH EAX                            ; 0052c74a
    PUSH EBX                            ; 0052c74b
    CALL FUN_0052e040                   ; 0052c74c
        ;   XREF to: 0052e040 (UNCONDITIONAL_CALL)  ; undefined FUN_0052e040()
    MOV dword ptr [EBX],0x2             ; 0052c751
    ADD ESP,0x14                        ; 0052c757
    MOV dword ptr [EBX + 0x4],0x1       ; 0052c75a
    MOV EDI,dword ptr [0x01d51da0]      ; 0052c761 | DAT_01d51da0
    MOV dword ptr [EBX + 0x118],EAX     ; 0052c767
    PUSH 0x5eb6eb                       ; 0052c76d
    MOV EAX,[0x0061abc0]                ; 0052c772 | DAT_0061abc0
    XOR ECX,ECX                         ; 0052c777
    PUSH EAX                            ; 0052c779
    MOV dword ptr [0x01d51da4],ECX      ; 0052c77a | DAT_01d51da4
    SUB EDI,0x50000                     ; 0052c780
    CALL FUN_00494400                   ; 0052c786
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; undefined FUN_00494400()
    MOV EAX,[0x006260e8]                ; 0052c78b | DAT_006260e8
    ADD ESP,0x8                         ; 0052c790
    MOV ECX,dword ptr [EBX + 0x118]     ; 0052c793
    XOR EDX,EDX                         ; 0052c799
    MOV dword ptr [ESP + 0x44],EAX      ; 0052c79b
    MOV dword ptr [0x006260e8],EDX      ; 0052c79f | DAT_006260e8
    TEST ECX,ECX                        ; 0052c7a5
    JL 0x0052c8c0                       ; 0052c7a7
        ;   XREF to: 0052c8c0 (CONDITIONAL_JUMP)  ; LAB_0052c8c0
    MOV dword ptr [ESP + 0x48],ESI      ; 0052c7ad
    MOV EAX,[0x01d51da0]                ; 0052c7b1 | DAT_01d51da0
        ;   Label: LAB_0052c7b1
    SUB EAX,EDI                         ; 0052c7b6
    MOV dword ptr [ESP + 0x40],EAX      ; 0052c7b8
    FILD dword ptr [ESP + 0x40]         ; 0052c7bc
    FMUL double ptr [0x005eb790]        ; 0052c7c0 | DAT_005eb790
    FST float ptr [ESP]                 ; 0052c7c6
    FLDZ                                ; 0052c7c9
    FCOMPP                              ; 0052c7cb
    FNSTSW AX                           ; 0052c7cd
    SAHF                                ; 0052c7cf
    JBE 0x0052c7d7                      ; 0052c7d0
        ;   XREF to: 0052c7d7 (CONDITIONAL_JUMP)  ; LAB_0052c7d7
    XOR EAX,EAX                         ; 0052c7d2
    MOV dword ptr [ESP],EAX             ; 0052c7d4
    FLD float ptr [ESP]                 ; 0052c7d7
        ;   Label: LAB_0052c7d7
    FCOMP double ptr [0x005eb798]       ; 0052c7da | DAT_005eb798
    FNSTSW AX                           ; 0052c7e0
    SAHF                                ; 0052c7e2
    JBE 0x0052c7ec                      ; 0052c7e3
        ;   XREF to: 0052c7ec (CONDITIONAL_JUMP)  ; LAB_0052c7ec
    MOV dword ptr [ESP],0x41f00000      ; 0052c7e5
    FLD float ptr [ESP]                 ; 0052c7ec
        ;   Label: LAB_0052c7ec
    FCOMP double ptr [0x005eb7a0]       ; 0052c7ef | DAT_005eb7a0
    FNSTSW AX                           ; 0052c7f5
    SAHF                                ; 0052c7f7
    JBE 0x0052c86e                      ; 0052c7f8
        ;   XREF to: 0052c86e (CONDITIONAL_JUMP)  ; LAB_0052c86e
    MOV ECX,0x29                        ; 0052c7fa
    MOV AH,0x1                          ; 0052c7ff
    LEA EDI,[ESP + 0x9]                 ; 0052c801
    LEA ESI,[ESP + 0x38]                ; 0052c805
    MOV dword ptr [ESP + 0x4],ECX       ; 0052c809
    MOV byte ptr [ESP + 0x8],AH         ; 0052c80d
    MOVSD ES:EDI,ESI                    ; 0052c811
    MOVSD ES:EDI,ESI                    ; 0052c812
    IMUL EAX,dword ptr [EBX + 0x11c],0x7c ; 0052c813
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 0052c81a
    MOV dword ptr [ESP + 0x25],EAX      ; 0052c81e
    IMUL EAX,dword ptr [EBX + 0x11c],0x7c ; 0052c822
    MOV ESI,dword ptr [ESP + 0x48]      ; 0052c829
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 0052c82d
    LEA EDI,[ESP + 0x11]                ; 0052c831
    MOV dword ptr [ESP + 0x29],EAX      ; 0052c835
    PUSH EDI                            ; 0052c839
    MOV AL,byte ptr [ESI]               ; 0052c83a
        ;   Label: LAB_0052c83a
    MOV byte ptr [EDI],AL               ; 0052c83c
    CMP AL,0x0                          ; 0052c83e
    JZ 0x0052c852                       ; 0052c840
        ;   XREF to: 0052c852 (CONDITIONAL_JUMP)  ; LAB_0052c852
    MOV AL,byte ptr [ESI + 0x1]         ; 0052c842
    ADD ESI,0x2                         ; 0052c845
    MOV byte ptr [EDI + 0x1],AL         ; 0052c848
    ADD EDI,0x2                         ; 0052c84b
    CMP AL,0x0                          ; 0052c84e
    JNZ 0x0052c83a                      ; 0052c850
        ;   XREF to: 0052c83a (CONDITIONAL_JUMP)  ; LAB_0052c83a
    POP EDI                             ; 0052c852
        ;   Label: LAB_0052c852
    LEA EAX,[ESP + 0x4]                 ; 0052c853
    PUSH EAX                            ; 0052c857
    MOV EAX,dword ptr [EBX + 0x118]     ; 0052c858
    PUSH EAX                            ; 0052c85e
    PUSH EBX                            ; 0052c85f
    CALL FUN_0052df50                   ; 0052c860
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; undefined FUN_0052df50()
    MOV EDI,dword ptr [0x01d51da0]      ; 0052c865 | DAT_01d51da0
    ADD ESP,0xc                         ; 0052c86b
    CALL FUN_005acff0                   ; 0052c86e
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
        ;   Label: LAB_0052c86e
    PUSH EBX                            ; 0052c873
    CALL FUN_0052d360                   ; 0052c874
        ;   XREF to: 0052d360 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d360()
    MOV EDX,dword ptr [0x01d51da4]      ; 0052c879 | DAT_01d51da4
    ADD ESP,0x4                         ; 0052c87f
    CMP EDX,0x1                         ; 0052c882
    JZ 0x0052c958                       ; 0052c885
        ;   XREF to: 0052c958 (CONDITIONAL_JUMP)  ; LAB_0052c958
    MOV EAX,EDX                         ; 0052c88b
    CMP EDX,0x3                         ; 0052c88d
    JNC 0x0052c94c                      ; 0052c890
        ;   XREF to: 0052c94c (CONDITIONAL_JUMP)  ; LAB_0052c94c
    CMP EDX,0x2                         ; 0052c896
    JZ 0x0052c8d4                       ; 0052c899
        ;   XREF to: 0052c8d4 (CONDITIONAL_JUMP)  ; LAB_0052c8d4
    PUSH 0x1                            ; 0052c89b
        ;   Label: LAB_0052c89b
    MOV EAX,[0x0061f2a4]                ; 0052c89d | DAT_0061f2a4
    PUSH EAX                            ; 0052c8a2
    MOV EDX,dword ptr [EAX]             ; 0052c8a3
    CALL dword ptr [EDX + 0x4]          ; 0052c8a5
    ADD ESP,0x8                         ; 0052c8a8
    TEST EAX,EAX                        ; 0052c8ab
    JNZ 0x0052c938                      ; 0052c8ad
        ;   XREF to: 0052c938 (CONDITIONAL_JUMP)  ; LAB_0052c938
    CMP dword ptr [EBX + 0x118],0x0     ; 0052c8b3
    JGE 0x0052c7b1                      ; 0052c8ba
        ;   XREF to: 0052c7b1 (CONDITIONAL_JUMP)  ; LAB_0052c7b1
    PUSH 0x1                            ; 0052c8c0
        ;   Label: LAB_0052c8c0
    PUSH EBX                            ; 0052c8c2
    CALL FUN_0052cab0                   ; 0052c8c3
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    ADD ESP,0x8                         ; 0052c8c8
    XOR EAX,EAX                         ; 0052c8cb
    MOV ESP,EBP                         ; 0052c8cd
    POP EBP                             ; 0052c8cf
    POP EDI                             ; 0052c8d0
    POP ESI                             ; 0052c8d1
    POP EBX                             ; 0052c8d2
    RET                                 ; 0052c8d3
    PUSH 0x5eb717                       ; 0052c8d4
        ;   Label: LAB_0052c8d4
    MOV EDI,dword ptr [0x0061abc0]      ; 0052c8d9 | DAT_0061abc0
    PUSH EDI                            ; 0052c8df
    CALL FUN_004943a0                   ; 0052c8e0
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0x8                         ; 0052c8e5
    PUSH 0x0                            ; 0052c8e8
    PUSH EBX                            ; 0052c8ea
    CALL FUN_0052cab0                   ; 0052c8eb
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    ADD ESP,0x8                         ; 0052c8f0
    XOR EAX,EAX                         ; 0052c8f3
    MOV ESP,EBP                         ; 0052c8f5
    POP EBP                             ; 0052c8f7
    POP EDI                             ; 0052c8f8
    POP ESI                             ; 0052c8f9
    POP EBX                             ; 0052c8fa
    RET                                 ; 0052c8fb
    PUSH 0x5eb745                       ; 0052c8fc
        ;   Label: LAB_0052c8fc
    MOV ESI,dword ptr [0x0061abc0]      ; 0052c901 | DAT_0061abc0
    PUSH ESI                            ; 0052c907
    CALL FUN_004943a0                   ; 0052c908
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0x8                         ; 0052c90d
    PUSH 0x0                            ; 0052c910
    PUSH EBX                            ; 0052c912
    CALL FUN_0052cab0                   ; 0052c913
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    ADD ESP,0x8                         ; 0052c918
    XOR EAX,EAX                         ; 0052c91b
    MOV ESP,EBP                         ; 0052c91d
    POP EBP                             ; 0052c91f
    POP EDI                             ; 0052c920
    POP ESI                             ; 0052c921
    POP EBX                             ; 0052c922
    RET                                 ; 0052c923
    PUSH 0x5eb767                       ; 0052c924
        ;   Label: LAB_0052c924
    MOV ECX,dword ptr [0x0061abc0]      ; 0052c929 | DAT_0061abc0
    PUSH ECX                            ; 0052c92f
    CALL FUN_004943a0                   ; 0052c930
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0x8                         ; 0052c935
    PUSH 0x0                            ; 0052c938
        ;   Label: LAB_0052c938
    PUSH EBX                            ; 0052c93a
    CALL FUN_0052cab0                   ; 0052c93b
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    ADD ESP,0x8                         ; 0052c940
    XOR EAX,EAX                         ; 0052c943
    MOV ESP,EBP                         ; 0052c945
    POP EBP                             ; 0052c947
    POP EDI                             ; 0052c948
    POP ESI                             ; 0052c949
    POP EBX                             ; 0052c94a
    RET                                 ; 0052c94b
    JBE 0x0052c8fc                      ; 0052c94c
        ;   XREF to: 0052c8fc (CONDITIONAL_JUMP)  ; LAB_0052c8fc
        ;   Label: LAB_0052c94c
    CMP EDX,0x4                         ; 0052c94e
    JZ 0x0052c924                       ; 0052c951
        ;   XREF to: 0052c924 (CONDITIONAL_JUMP)  ; LAB_0052c924
    JMP 0x0052c89b                      ; 0052c953
        ;   XREF to: 0052c89b (UNCONDITIONAL_JUMP)  ; LAB_0052c89b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0052c958
        ;   Label: LAB_0052c958
    MOV [0x006260e8],EAX                ; 0052c95c | DAT_006260e8
    MOV EAX,EDX                         ; 0052c961
    MOV ESP,EBP                         ; 0052c963
    POP EBP                             ; 0052c965
    POP EDI                             ; 0052c966
    POP ESI                             ; 0052c967
    POP EBX                             ; 0052c968
    RET                                 ; 0052c969

