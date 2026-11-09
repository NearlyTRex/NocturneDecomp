; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_motion_cpp_FUN_004fb72e(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004fb72e
        ;   Label: core_motion.cpp_FUN_004fb72e
    PUSH 0x5c98c3                       ; 004fb730
    PUSH EDI                            ; 004fb735
    CALL crt_unknown.c_FUN_005a3140     ; 004fb736
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004fb73b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fb73e
    MOV EDX,dword ptr [EAX + 0x1c24]    ; 004fb742
    PUSH EDX                            ; 004fb748
    PUSH 0x5c98d4                       ; 004fb749
    PUSH EDI                            ; 004fb74e
    CALL crt_unknown.c_FUN_005a3140     ; 004fb74f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb754
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fb757
    XOR ECX,ECX                         ; 004fb75b
    MOV EBX,dword ptr [EAX + 0x1c24]    ; 004fb75d
    MOV dword ptr [ESP],ECX             ; 004fb763
    TEST EBX,EBX                        ; 004fb766
    JLE 0x004fb9b7                      ; 004fb768
        ;   XREF to: 004fb9b7 (CONDITIONAL_JUMP)  ; LAB_004fb9b7
    ADD EAX,0x1c28                      ; 004fb76e
    MOV dword ptr [ESP + 0x4],EAX       ; 004fb773
    MOV ECX,dword ptr [ESP]             ; 004fb777
        ;   Label: LAB_004fb777
    PUSH ECX                            ; 004fb77a
    PUSH 0x5c98d8                       ; 004fb77b
    PUSH EDI                            ; 004fb780
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fb781
    CALL crt_unknown.c_FUN_005a3140     ; 004fb785
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb78a
    MOV ESI,dword ptr [EBX + 0x64]      ; 004fb78d
    PUSH ESI                            ; 004fb790
    MOV EBP,dword ptr [EBX + 0x60]      ; 004fb791
    PUSH EBP                            ; 004fb794
    MOV EDX,dword ptr [EBX + 0x24]      ; 004fb795
    PUSH EDX                            ; 004fb798
    SUB ESP,0x8                         ; 004fb799
    FLD float ptr [EBX + 0x20]          ; 004fb79c
    FSTP double ptr [ESP]               ; 004fb79f
    PUSH EBX                            ; 004fb7a2
    PUSH 0x5c990e                       ; 004fb7a3
    PUSH EDI                            ; 004fb7a8
    CALL crt_unknown.c_FUN_005a3140     ; 004fb7a9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x20                        ; 004fb7ae
    MOV ESI,dword ptr [ESP]             ; 004fb7b1
    PUSH ESI                            ; 004fb7b4
    PUSH 0x5c9920                       ; 004fb7b5
    PUSH EDI                            ; 004fb7ba
    CALL crt_unknown.c_FUN_005a3140     ; 004fb7bb
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb7c0
    SUB ESP,0x8                         ; 004fb7c3
    FLD float ptr [EBX + 0x38]          ; 004fb7c6
    FSTP double ptr [ESP]               ; 004fb7c9
    MOV EBP,dword ptr [EBX + 0x34]      ; 004fb7cc
    PUSH EBP                            ; 004fb7cf
    MOV EDX,dword ptr [EBX + 0x28]      ; 004fb7d0
    PUSH EDX                            ; 004fb7d3
    PUSH 0x5c997d                       ; 004fb7d4
    PUSH EDI                            ; 004fb7d9
    CALL crt_unknown.c_FUN_005a3140     ; 004fb7da
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x18                        ; 004fb7df
    PUSH ESI                            ; 004fb7e2
    PUSH 0x5c9987                       ; 004fb7e3
    PUSH EDI                            ; 004fb7e8
    CALL crt_unknown.c_FUN_005a3140     ; 004fb7e9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb7ee
    MOV ESI,dword ptr [EBX + 0x40]      ; 004fb7f1
    PUSH ESI                            ; 004fb7f4
    SUB ESP,0x8                         ; 004fb7f5
    FLD float ptr [EBX + 0x3c]          ; 004fb7f8
    FSTP double ptr [ESP]               ; 004fb7fb
    MOV EBP,dword ptr [EBX + 0x30]      ; 004fb7fe
    PUSH EBP                            ; 004fb801
    PUSH 0x5c99da                       ; 004fb802
    PUSH EDI                            ; 004fb807
    CALL crt_unknown.c_FUN_005a3140     ; 004fb808
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x18                        ; 004fb80d
    MOV EAX,dword ptr [ESP]             ; 004fb810
    PUSH EAX                            ; 004fb813
    PUSH 0x5c99e4                       ; 004fb814
    PUSH EDI                            ; 004fb819
    CALL crt_unknown.c_FUN_005a3140     ; 004fb81a
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb81f
    SUB ESP,0x8                         ; 004fb822
    FLD float ptr [EBX + 0x54]          ; 004fb825
    FSTP double ptr [ESP]               ; 004fb828
    MOV EDX,dword ptr [EBX + 0x50]      ; 004fb82b
    PUSH EDX                            ; 004fb82e
    PUSH 0x5c9a28                       ; 004fb82f
    PUSH EDI                            ; 004fb834
    CALL crt_unknown.c_FUN_005a3140     ; 004fb835
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x14                        ; 004fb83a
    MOV ECX,dword ptr [ESP]             ; 004fb83d
    PUSH ECX                            ; 004fb840
    PUSH 0x5c9a2f                       ; 004fb841
    PUSH EDI                            ; 004fb846
    CALL crt_unknown.c_FUN_005a3140     ; 004fb847
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb84c
    MOV ESI,dword ptr [EBX + 0x6c]      ; 004fb84f
    PUSH ESI                            ; 004fb852
    MOV EBP,dword ptr [EBX + 0x68]      ; 004fb853
    PUSH EBP                            ; 004fb856
    PUSH 0x5c9a60                       ; 004fb857
    PUSH EDI                            ; 004fb85c
    CALL crt_unknown.c_FUN_005a3140     ; 004fb85d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x10                        ; 004fb862
    MOV EAX,dword ptr [ESP]             ; 004fb865
    PUSH EAX                            ; 004fb868
    PUSH 0x5c9a67                       ; 004fb869
    PUSH EDI                            ; 004fb86e
    CALL crt_unknown.c_FUN_005a3140     ; 004fb86f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb874
    MOV EDX,dword ptr [EBX + 0x70]      ; 004fb877
    PUSH EDX                            ; 004fb87a
    PUSH 0x5c9adf                       ; 004fb87b
    PUSH EDI                            ; 004fb880
    XOR ESI,ESI                         ; 004fb881
    CALL crt_unknown.c_FUN_005a3140     ; 004fb883
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX + 0x70]      ; 004fb888
    ADD ESP,0xc                         ; 004fb88b
    TEST ECX,ECX                        ; 004fb88e
    JLE 0x004fb8d7                      ; 004fb890
        ;   XREF to: 004fb8d7 (CONDITIONAL_JUMP)  ; LAB_004fb8d7
    XOR EBP,EBP                         ; 004fb892
    MOV EAX,dword ptr [EBX + 0x74]      ; 004fb894
        ;   Label: LAB_004fb894
    MOV EDX,dword ptr [EAX + EBP*0x1 + 0x14] ; 004fb897
    PUSH EDX                            ; 004fb89b
    SUB ESP,0x8                         ; 004fb89c
    FLD float ptr [EAX + EBP*0x1 + 0x10] ; 004fb89f
    FSTP double ptr [ESP]               ; 004fb8a3
    SUB ESP,0x8                         ; 004fb8a6
    FLD float ptr [EAX + EBP*0x1 + 0xc] ; 004fb8a9
    FSTP double ptr [ESP]               ; 004fb8ad
    MOV ECX,dword ptr [EAX + EBP*0x1 + 0x8] ; 004fb8b0
    PUSH ECX                            ; 004fb8b4
    MOV EDX,dword ptr [EAX + EBP*0x1 + 0x4] ; 004fb8b5
    PUSH EDX                            ; 004fb8b9
    MOV ECX,dword ptr [EAX + EBP*0x1]   ; 004fb8ba
    PUSH ECX                            ; 004fb8bd
    PUSH 0x5c9ae3                       ; 004fb8be
    PUSH EDI                            ; 004fb8c3
    ADD EBP,0x18                        ; 004fb8c4
    INC ESI                             ; 004fb8c7
    CALL crt_unknown.c_FUN_005a3140     ; 004fb8c8
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX + 0x70]      ; 004fb8cd
    ADD ESP,0x28                        ; 004fb8d0
    CMP ESI,EAX                         ; 004fb8d3
    JL 0x004fb894                       ; 004fb8d5
        ;   XREF to: 004fb894 (CONDITIONAL_JUMP)  ; LAB_004fb894
    MOV EDX,dword ptr [ESP]             ; 004fb8d7
        ;   Label: LAB_004fb8d7
    PUSH EDX                            ; 004fb8da
    PUSH 0x5c9af6                       ; 004fb8db
    PUSH EDI                            ; 004fb8e0
    CALL crt_unknown.c_FUN_005a3140     ; 004fb8e1
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb8e6
    MOV ECX,dword ptr [EBX + 0x78]      ; 004fb8e9
    PUSH ECX                            ; 004fb8ec
    PUSH 0x5c9b2b                       ; 004fb8ed
    PUSH EDI                            ; 004fb8f2
    XOR EBP,EBP                         ; 004fb8f3
    CALL crt_unknown.c_FUN_005a3140     ; 004fb8f5
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ESI,dword ptr [EBX + 0x78]      ; 004fb8fa
    ADD ESP,0xc                         ; 004fb8fd
    TEST ESI,ESI                        ; 004fb900
    JLE 0x004fb92a                      ; 004fb902
        ;   XREF to: 004fb92a (CONDITIONAL_JUMP)  ; LAB_004fb92a
    MOV ESI,EBX                         ; 004fb904
    MOV EAX,dword ptr [ESI + 0x80]      ; 004fb906
        ;   Label: LAB_004fb906
    PUSH EAX                            ; 004fb90c
    MOV EDX,dword ptr [ESI + 0x7c]      ; 004fb90d
    PUSH EDX                            ; 004fb910
    PUSH 0x5c9b2f                       ; 004fb911
    PUSH EDI                            ; 004fb916
    ADD ESI,0x8                         ; 004fb917
    INC EBP                             ; 004fb91a
    CALL crt_unknown.c_FUN_005a3140     ; 004fb91b
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX + 0x78]      ; 004fb920
    ADD ESP,0x10                        ; 004fb923
    CMP EBP,ECX                         ; 004fb926
    JL 0x004fb906                       ; 004fb928
        ;   XREF to: 004fb906 (CONDITIONAL_JUMP)  ; LAB_004fb906
    MOV ESI,dword ptr [ESP]             ; 004fb92a
        ;   Label: LAB_004fb92a
    PUSH ESI                            ; 004fb92d
    PUSH 0x5c9b37                       ; 004fb92e
    PUSH EDI                            ; 004fb933
    CALL crt_unknown.c_FUN_005a3140     ; 004fb934
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004fb939
    MOV EBP,dword ptr [EBX + 0xf4]      ; 004fb93c
    PUSH EBP                            ; 004fb942
    PUSH 0x5c9b58                       ; 004fb943
    PUSH EDI                            ; 004fb948
    XOR ESI,ESI                         ; 004fb949
    CALL crt_unknown.c_FUN_005a3140     ; 004fb94b
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,dword ptr [EBX + 0xf4]      ; 004fb950
    ADD ESP,0xc                         ; 004fb956
    TEST EAX,EAX                        ; 004fb959
    JLE 0x004fb982                      ; 004fb95b
        ;   XREF to: 004fb982 (CONDITIONAL_JUMP)  ; LAB_004fb982
    MOV EBP,EBX                         ; 004fb95d
    MOV EDX,dword ptr [EBP + 0xf8]      ; 004fb95f
        ;   Label: LAB_004fb95f
    PUSH EDX                            ; 004fb965
    PUSH 0x5c9b5b                       ; 004fb966
    PUSH EDI                            ; 004fb96b
    ADD EBP,0x4                         ; 004fb96c
    INC ESI                             ; 004fb96f
    CALL crt_unknown.c_FUN_005a3140     ; 004fb970
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [EBX + 0xf4]      ; 004fb975
    ADD ESP,0xc                         ; 004fb97b
    CMP ESI,ECX                         ; 004fb97e
    JL 0x004fb95f                       ; 004fb980
        ;   XREF to: 004fb95f (CONDITIONAL_JUMP)  ; LAB_004fb95f
    PUSH 0x5c9b5f                       ; 004fb982
        ;   Label: LAB_004fb982
    PUSH EDI                            ; 004fb987
    CALL crt_unknown.c_FUN_005a3140     ; 004fb988
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004fb98d
    MOV ESI,dword ptr [ESP + 0x4]       ; 004fb990
    MOV EBP,dword ptr [ESP]             ; 004fb994
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004fb997
    ADD ESI,0x120                       ; 004fb99b
    INC EBP                             ; 004fb9a1
    MOV EDX,dword ptr [EBX + 0x1c24]    ; 004fb9a2
    MOV dword ptr [ESP + 0x4],ESI       ; 004fb9a8
    MOV dword ptr [ESP],EBP             ; 004fb9ac
    CMP EBP,EDX                         ; 004fb9af
    JL 0x004fb777                       ; 004fb9b1
        ;   XREF to: 004fb777 (CONDITIONAL_JUMP)  ; LAB_004fb777
    ADD ESP,0x8                         ; 004fb9b7
        ;   Label: LAB_004fb9b7
    POP EBP                             ; 004fb9ba
    POP EDI                             ; 004fb9bb
    POP ESI                             ; 004fb9bc
    POP EBX                             ; 004fb9bd
    RET                                 ; 004fb9be

