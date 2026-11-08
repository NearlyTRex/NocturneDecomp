; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552710(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00552a70 at 00552a8d
;   FUN_00553440 at 00553537
;   FUN_005557a0 at 005557ee
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005f09a6
;   TerminatedCString s_CDemonSet_lightVertexCol_005f09b6
;   undefined4 DAT_00629014
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629040
;   undefined4 DAT_01c51cac
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d40
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01fe49d4
;   undefined4 DAT_02026340
;   undefined4 DAT_0202a51c
;   ... and 3 more
;
; Called Functions:
;   FUN_005030e0
;   FUN_00552490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552710
        ;   Label: FUN_00552710
    PUSH ESI                            ; 00552711
    PUSH EDI                            ; 00552712
    PUSH EBP                            ; 00552713
    SUB ESP,0xc                         ; 00552714
    MOV EBX,dword ptr [ESP + 0x20]      ; 00552717
    MOV EDI,dword ptr [ESP + 0x28]      ; 0055271b
    MOV EDX,dword ptr [EBX + 0x15ae84]  ; 0055271f
    TEST EDX,EDX                        ; 00552725
    JZ 0x005527fc                       ; 00552727
        ;   XREF to: 005527fc (CONDITIONAL_JUMP)  ; LAB_005527fc
    TEST EDI,EDI                        ; 0055272d
    JNZ 0x00552754                      ; 0055272f
        ;   XREF to: 00552754 (CONDITIONAL_JUMP)  ; LAB_00552754
    MOV ESI,0x5f09a6                    ; 00552731 | = "..\\core\\set.cpp"
    MOV EBP,0xca0                       ; 00552736
    PUSH 0x5f09b6                       ; 0055273b | = "CDemonSet::lightVertexColor - Quick l..."
    MOV dword ptr [0x01d1d400],ESI      ; 00552740 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00552746 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0055274c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00552751
    MOV EAX,dword ptr [EBX + 0x15ae88]  ; 00552754
        ;   Label: LAB_00552754
    MOV EDX,dword ptr [EDI]             ; 0055275a
    IMUL EDX                            ; 0055275c
    SHRD EAX,EDX,0x10                   ; 0055275e
    MOV ECX,EAX                         ; 00552762
    MOV EDX,dword ptr [EDI + 0x4]       ; 00552764
    MOV EAX,dword ptr [EBX + 0x15ae8c]  ; 00552767
    IMUL EDX                            ; 0055276d
    SHRD EAX,EDX,0x10                   ; 0055276f
    MOV EDX,dword ptr [EDI + 0x8]       ; 00552773
    ADD ECX,EAX                         ; 00552776
    MOV EAX,dword ptr [EBX + 0x15ae90]  ; 00552778
    IMUL EDX                            ; 0055277e
    SHRD EAX,EDX,0x10                   ; 00552780
    ADD ECX,EAX                         ; 00552784
    NEG ECX                             ; 00552786
    TEST ECX,ECX                        ; 00552788
    JL 0x005527f8                       ; 0055278a
        ;   XREF to: 005527f8 (CONDITIONAL_JUMP)  ; LAB_005527f8
    ADD ECX,dword ptr [EBX + 0x15ae94]  ; 0055278c
        ;   Label: LAB_0055278c
    CMP ECX,0xffff                      ; 00552792
    JLE 0x0055279f                      ; 00552798
        ;   XREF to: 0055279f (CONDITIONAL_JUMP)  ; LAB_0055279f
    MOV ECX,0xffff                      ; 0055279a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0055279f
        ;   Label: LAB_0055279f
    LEA ESI,[EAX*0x4 + 0x0]             ; 005527a3
    SUB ESI,EAX                         ; 005527aa
    MOV EDX,ECX                         ; 005527ac
    SHL ESI,0x4                         ; 005527ae
    MOV EAX,dword ptr [EBX + 0x15ae9c]  ; 005527b1
    ADD ESI,0x629014                    ; 005527b7 | DAT_00629014
    IMUL EDX                            ; 005527bd
    SHRD EAX,EDX,0x10                   ; 005527bf
    MOV dword ptr [ESI + 0x20],EAX      ; 005527c3 | DAT_00629034
    MOV EDX,ECX                         ; 005527c6
    MOV EAX,dword ptr [EBX + 0x15aea0]  ; 005527c8
    IMUL EDX                            ; 005527ce
    SHRD EAX,EDX,0x10                   ; 005527d0
    MOV dword ptr [ESI + 0x24],EAX      ; 005527d4 | DAT_00629038
    MOV EDX,ECX                         ; 005527d7
    MOV EAX,dword ptr [EBX + 0x15aea4]  ; 005527d9
    IMUL EDX                            ; 005527df
    SHRD EAX,EDX,0x10                   ; 005527e1
    MOV dword ptr [ESI + 0x28],EAX      ; 005527e5 | DAT_0062903c
    MOV EAX,[0x01c51cac]                ; 005527e8 | DAT_01c51cac
    MOV dword ptr [ESI + 0x2c],EAX      ; 005527ed | DAT_00629040
    ADD ESP,0xc                         ; 005527f0
    POP EBP                             ; 005527f3
    POP EDI                             ; 005527f4
    POP ESI                             ; 005527f5
    POP EBX                             ; 005527f6
    RET                                 ; 005527f7
    XOR ECX,ECX                         ; 005527f8
        ;   Label: LAB_005527f8
    JMP 0x0055278c                      ; 005527fa
        ;   XREF to: 0055278c (UNCONDITIONAL_JUMP)  ; LAB_0055278c
    CMP dword ptr [ESP + 0x30],0x0      ; 005527fc
        ;   Label: LAB_005527fc
    JZ 0x0055299c                       ; 00552801
        ;   XREF to: 0055299c (CONDITIONAL_JUMP)  ; LAB_0055299c
    MOV ECX,0xffff                      ; 00552807
    MOV dword ptr [ESP + 0x4],EDX       ; 0055280c
    CMP dword ptr [0x0202a51c],0x0      ; 00552810 | DAT_0202a51c
        ;   Label: LAB_00552810
    JLE 0x00552a3a                      ; 00552817
        ;   XREF to: 00552a3a (CONDITIONAL_JUMP)  ; LAB_00552a3a
    MOV EDX,dword ptr [0x0202a89c]      ; 0055281d | DAT_0202a89c
    MOV EAX,ECX                         ; 00552823
    MOV EBP,dword ptr [ESP + 0x4]       ; 00552825
    IMUL EDX                            ; 00552829
    SHRD EAX,EDX,0x10                   ; 0055282b
    MOV EDX,dword ptr [EBX + 0x15ae9c]  ; 0055282f
    ADD EAX,EBP                         ; 00552835
    IMUL EDX                            ; 00552837
    SHRD EAX,EDX,0x10                   ; 00552839
    MOV EDX,dword ptr [0x0202a8a0]      ; 0055283d | DAT_0202a8a0
    MOV dword ptr [ESP + 0x8],EAX       ; 00552843
    MOV EAX,ECX                         ; 00552847
    IMUL EDX                            ; 00552849
    SHRD EAX,EDX,0x10                   ; 0055284b
    MOV EDX,dword ptr [EBX + 0x15aea0]  ; 0055284f
    ADD EAX,EBP                         ; 00552855
    IMUL EDX                            ; 00552857
    SHRD EAX,EDX,0x10                   ; 00552859
    MOV EDX,dword ptr [0x0202a8a4]      ; 0055285d | DAT_0202a8a4
    MOV EDI,EAX                         ; 00552863
    MOV EAX,ECX                         ; 00552865
    IMUL EDX                            ; 00552867
    SHRD EAX,EDX,0x10                   ; 00552869
    MOV EDX,dword ptr [EBX + 0x15aea4]  ; 0055286d
    ADD EAX,EBP                         ; 00552873
    IMUL EDX                            ; 00552875
        ;   Label: LAB_00552875
    SHRD EAX,EDX,0x10                   ; 00552877
    MOV EBP,EAX                         ; 0055287b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0055287d
    LEA ECX,[EAX*0x4 + 0x0]             ; 00552881
    SUB ECX,EAX                         ; 00552888
    MOV EAX,0x629014                    ; 0055288a | DAT_00629014
    SHL ECX,0x4                         ; 0055288f
    ADD EAX,ECX                         ; 00552892
    MOV ESI,dword ptr [EBX + 0x15f6f8]  ; 00552894
    MOV dword ptr [ESP],EAX             ; 0055289a
    TEST ESI,ESI                        ; 0055289d
    JZ 0x00552943                       ; 0055289f
        ;   XREF to: 00552943 (CONDITIONAL_JUMP)  ; LAB_00552943
    MOV EAX,dword ptr [ESP + 0x30]      ; 005528a5
    TEST EAX,EAX                        ; 005528a9
    JNZ 0x00552943                      ; 005528ab
        ;   XREF to: 00552943 (CONDITIONAL_JUMP)  ; LAB_00552943
    PUSH EAX                            ; 005528b1
    MOV EDX,dword ptr [ESP + 0x28]      ; 005528b2
    PUSH EDX                            ; 005528b6
    PUSH EBX                            ; 005528b7
    CALL FUN_00552490                   ; 005528b8
        ;   XREF to: 00552490 (UNCONDITIONAL_CALL)  ; undefined FUN_00552490()
    ADD ESP,0xc                         ; 005528bd
    MOV ESI,dword ptr [ESP + 0x4]       ; 005528c0
    ADD ESI,EAX                         ; 005528c4
    TEST ESI,ESI                        ; 005528c6
    JLE 0x00552943                      ; 005528c8
        ;   XREF to: 00552943 (CONDITIONAL_JUMP)  ; LAB_00552943
    MOV EAX,dword ptr [ESP + 0x8]       ; 005528ca
    MOV EBX,ESI                         ; 005528ce
    CDQ                                 ; 005528d0
    MOV ECX,EDX                         ; 005528d1
    XOR EAX,EDX                         ; 005528d3
    XOR EDX,EDX                         ; 005528d5
    DIV EBX                             ; 005528d7
    CMP EAX,0x7fff                      ; 005528d9
    JC 0x005528e5                       ; 005528de
        ;   XREF to: 005528e5 (CONDITIONAL_JUMP)  ; LAB_005528e5
    MOV EAX,0x7fff                      ; 005528e0
    PUSH EAX                            ; 005528e5
        ;   Label: LAB_005528e5
    XOR EAX,EAX                         ; 005528e6
    DIV EBX                             ; 005528e8
    POP EDX                             ; 005528ea
    SHRD EAX,EDX,0x10                   ; 005528eb
    XOR EAX,ECX                         ; 005528ef
    MOV dword ptr [ESP + 0x8],EAX       ; 005528f1
    MOV EBX,ESI                         ; 005528f5
    MOV EAX,EDI                         ; 005528f7
    CDQ                                 ; 005528f9
    MOV ECX,EDX                         ; 005528fa
    XOR EAX,EDX                         ; 005528fc
    XOR EDX,EDX                         ; 005528fe
    DIV EBX                             ; 00552900
    CMP EAX,0x7fff                      ; 00552902
    JC 0x0055290e                       ; 00552907
        ;   XREF to: 0055290e (CONDITIONAL_JUMP)  ; LAB_0055290e
    MOV EAX,0x7fff                      ; 00552909
    PUSH EAX                            ; 0055290e
        ;   Label: LAB_0055290e
    XOR EAX,EAX                         ; 0055290f
    DIV EBX                             ; 00552911
    POP EDX                             ; 00552913
    SHRD EAX,EDX,0x10                   ; 00552914
    XOR EAX,ECX                         ; 00552918
    MOV EDI,EAX                         ; 0055291a
    MOV EBX,ESI                         ; 0055291c
    MOV EAX,EBP                         ; 0055291e
    CDQ                                 ; 00552920
    MOV ECX,EDX                         ; 00552921
    XOR EAX,EDX                         ; 00552923
    XOR EDX,EDX                         ; 00552925
    DIV EBX                             ; 00552927
    CMP EAX,0x7fff                      ; 00552929
    JC 0x00552935                       ; 0055292e
        ;   XREF to: 00552935 (CONDITIONAL_JUMP)  ; LAB_00552935
    MOV EAX,0x7fff                      ; 00552930
    PUSH EAX                            ; 00552935
        ;   Label: LAB_00552935
    XOR EAX,EAX                         ; 00552936
    DIV EBX                             ; 00552938
    POP EDX                             ; 0055293a
    SHRD EAX,EDX,0x10                   ; 0055293b
    XOR EAX,ECX                         ; 0055293f
    MOV EBP,EAX                         ; 00552941
    CMP dword ptr [ESP + 0x8],0xffff    ; 00552943
        ;   Label: LAB_00552943
    JLE 0x00552955                      ; 0055294b
        ;   XREF to: 00552955 (CONDITIONAL_JUMP)  ; LAB_00552955
    MOV dword ptr [ESP + 0x8],0xffff    ; 0055294d
    CMP EDI,0xffff                      ; 00552955
        ;   Label: LAB_00552955
    JLE 0x00552962                      ; 0055295b
        ;   XREF to: 00552962 (CONDITIONAL_JUMP)  ; LAB_00552962
    MOV EDI,0xffff                      ; 0055295d
    CMP EBP,0xffff                      ; 00552962
        ;   Label: LAB_00552962
    JLE 0x0055296f                      ; 00552968
        ;   XREF to: 0055296f (CONDITIONAL_JUMP)  ; LAB_0055296f
    MOV EBP,0xffff                      ; 0055296a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055296f
        ;   Label: LAB_0055296f
    MOV EDX,dword ptr [ESP]             ; 00552973
    MOV EAX,dword ptr [EAX*0x4 + 0x1fe6344] ; 00552976 | DAT_02026340
    MOV dword ptr [EDX + 0x20],EAX      ; 0055297d | DAT_00629034
    MOV EAX,dword ptr [EDI*0x4 + 0x1fe6344] ; 00552980 | DAT_02026340
    MOV dword ptr [EDX + 0x24],EAX      ; 00552987 | DAT_00629038
    MOV EAX,dword ptr [EBP*0x4 + 0x1fe6344] ; 0055298a | DAT_02026340
    MOV dword ptr [EDX + 0x28],EAX      ; 00552991 | DAT_0062903c
    ADD ESP,0xc                         ; 00552994
    POP EBP                             ; 00552997
    POP EDI                             ; 00552998
    POP ESI                             ; 00552999
    POP EBX                             ; 0055299a
    RET                                 ; 0055299b
    PUSH EDI                            ; 0055299c
        ;   Label: LAB_0055299c
    MOV ESI,dword ptr [ESP + 0x28]      ; 0055299d
    PUSH ESI                            ; 005529a1
    PUSH EBX                            ; 005529a2
    CALL FUN_00552490                   ; 005529a3
        ;   XREF to: 00552490 (UNCONDITIONAL_CALL)  ; undefined FUN_00552490()
    MOV EBP,dword ptr [0x01fe49d4]      ; 005529a8 | DAT_01fe49d4
    ADD ESP,0xc                         ; 005529ae
    MOV ECX,EAX                         ; 005529b1
    MOV dword ptr [ESP + 0x4],EBP       ; 005529b3
    TEST EBP,EBP                        ; 005529b7
    JLE 0x00552810                      ; 005529b9
        ;   XREF to: 00552810 (CONDITIONAL_JUMP)  ; LAB_00552810
    TEST EDI,EDI                        ; 005529bf
    JZ 0x00552810                       ; 005529c1
        ;   XREF to: 00552810 (CONDITIONAL_JUMP)  ; LAB_00552810
    MOV ESI,EBP                         ; 005529c7
    CMP EBP,0x1000                      ; 005529c9
    JLE 0x005529d6                      ; 005529cf
        ;   XREF to: 005529d6 (CONDITIONAL_JUMP)  ; LAB_005529d6
    MOV ESI,0x1000                      ; 005529d1
    CMP dword ptr [0x01c51d38],0x0      ; 005529d6 | DAT_01c51d38
        ;   Label: LAB_005529d6
    JL 0x00552a10                       ; 005529dd
        ;   XREF to: 00552a10 (CONDITIONAL_JUMP)  ; LAB_00552a10
    MOV EAX,ESI                         ; 005529df
    MOV EDX,dword ptr [EDI]             ; 005529e1
    IMUL EDX                            ; 005529e3
    SHRD EAX,EDX,0x10                   ; 005529e5
    ADD ECX,EAX                         ; 005529e9
    CMP dword ptr [0x01c51d40],0x0      ; 005529eb | DAT_01c51d40
        ;   Label: LAB_005529eb
    JL 0x00552a1e                       ; 005529f2
        ;   XREF to: 00552a1e (CONDITIONAL_JUMP)  ; LAB_00552a1e
    MOV EAX,ESI                         ; 005529f4
    MOV EDX,dword ptr [EDI + 0x8]       ; 005529f6
    IMUL EDX                            ; 005529f9
    SHRD EAX,EDX,0x10                   ; 005529fb
    ADD ECX,EAX                         ; 005529ff
    TEST ECX,ECX                        ; 00552a01
    JGE 0x00552810                      ; 00552a03
        ;   XREF to: 00552810 (CONDITIONAL_JUMP)  ; LAB_00552810
    XOR ECX,ECX                         ; 00552a09
    JMP 0x00552810                      ; 00552a0b
        ;   XREF to: 00552810 (UNCONDITIONAL_JUMP)  ; LAB_00552810
    MOV EAX,ESI                         ; 00552a10
        ;   Label: LAB_00552a10
    MOV EDX,dword ptr [EDI]             ; 00552a12
    IMUL EDX                            ; 00552a14
    SHRD EAX,EDX,0x10                   ; 00552a16
    SUB ECX,EAX                         ; 00552a1a
    JMP 0x005529eb                      ; 00552a1c
        ;   XREF to: 005529eb (UNCONDITIONAL_JUMP)  ; LAB_005529eb
    MOV EAX,ESI                         ; 00552a1e
        ;   Label: LAB_00552a1e
    MOV EDX,dword ptr [EDI + 0x8]       ; 00552a20
    IMUL EDX                            ; 00552a23
    SHRD EAX,EDX,0x10                   ; 00552a25
    SUB ECX,EAX                         ; 00552a29
    TEST ECX,ECX                        ; 00552a2b
    JGE 0x00552810                      ; 00552a2d
        ;   XREF to: 00552810 (CONDITIONAL_JUMP)  ; LAB_00552810
    XOR ECX,ECX                         ; 00552a33
    JMP 0x00552810                      ; 00552a35
        ;   XREF to: 00552810 (UNCONDITIONAL_JUMP)  ; LAB_00552810
    ADD ECX,dword ptr [ESP + 0x4]       ; 00552a3a
        ;   Label: LAB_00552a3a
    MOV EDX,dword ptr [EBX + 0x15ae9c]  ; 00552a3e
    MOV EAX,ECX                         ; 00552a44
    IMUL EDX                            ; 00552a46
    SHRD EAX,EDX,0x10                   ; 00552a48
    MOV dword ptr [ESP + 0x8],EAX       ; 00552a4c
    MOV EDX,dword ptr [EBX + 0x15aea0]  ; 00552a50
    MOV EAX,ECX                         ; 00552a56
    IMUL EDX                            ; 00552a58
    SHRD EAX,EDX,0x10                   ; 00552a5a
    MOV EDI,EAX                         ; 00552a5e
    MOV EDX,dword ptr [EBX + 0x15aea4]  ; 00552a60
    MOV EAX,ECX                         ; 00552a66
    JMP 0x00552875                      ; 00552a68
        ;   XREF to: 00552875 (UNCONDITIONAL_JUMP)  ; LAB_00552875

