; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054a790(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0054aa70 at 0054aab2
;
; Referenced Globals:
;   undefined1* switchdataD_0054a774 = 0054a820
;   TerminatedCString s_limb_wav_005e7834
;   undefined4 DAT_005e7845
;   undefined4 DAT_005e784d
;   undefined4 DAT_005e7855
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6afc
;
; Called Functions:
;   FUN_0040d060
;   FUN_004154f0
;   FUN_00416700
;   FUN_00427770
;   FUN_004277e0
;   FUN_0042b260
;   FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a790
        ;   Label: FUN_0054a790
    PUSH ESI                            ; 0054a791
    PUSH EDI                            ; 0054a792
    PUSH EBP                            ; 0054a793
    SUB ESP,0xc                         ; 0054a794
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054a797
    MOV ESI,dword ptr [ESP + 0x24]      ; 0054a79b
    MOV EDX,dword ptr [ESI + 0x30]      ; 0054a79f
    CMP EDX,0xb                         ; 0054a7a2
    JLE 0x0054a9a5                      ; 0054a7a5
        ;   XREF to: 0054a9a5 (CONDITIONAL_JUMP)  ; LAB_0054a9a5
    CMP EDX,0x6b                        ; 0054a7ab
    JNZ 0x0054a9ad                      ; 0054a7ae
        ;   XREF to: 0054a9ad (CONDITIONAL_JUMP)  ; LAB_0054a9ad
    FLD float ptr [EBX + 0x10b34]       ; 0054a7b4
    FLDZ                                ; 0054a7ba
    FCOMPP                              ; 0054a7bc
    FNSTSW AX                           ; 0054a7be
    SAHF                                ; 0054a7c0
    JC 0x0054a9ad                       ; 0054a7c1
        ;   XREF to: 0054a9ad (CONDITIONAL_JUMP)  ; LAB_0054a9ad
    FLD1                                ; 0054a7c7
    MOV EDI,dword ptr [EBX + 0x10b30]   ; 0054a7c9
    FADD float ptr [EBX + 0x10b34]      ; 0054a7cf
    INC EDI                             ; 0054a7d5
    FSTP float ptr [EBX + 0x10b34]      ; 0054a7d6
    MOV dword ptr [EBX + 0x10b30],EDI   ; 0054a7dc
    CMP EDI,0x3                         ; 0054a7e2
    JL 0x0054a9ad                       ; 0054a7e5
        ;   XREF to: 0054a9ad (CONDITIONAL_JUMP)  ; LAB_0054a9ad
    MOV dword ptr [ESI + 0x2c],0x3f800000 ; 0054a7eb
    FLD float ptr [ESI + 0x2c]          ; 0054a7f2
    FLDZ                                ; 0054a7f5
    FCOMPP                              ; 0054a7f7
    FNSTSW AX                           ; 0054a7f9
    SAHF                                ; 0054a7fb
    JNC 0x0054a828                      ; 0054a7fc
        ;   XREF to: 0054a828 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0054a7fe
    JNZ 0x0054a828                      ; 0054a801
        ;   XREF to: 0054a828 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005b849c                   ; 0054a803
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
    MOV EDX,EAX                         ; 0054a808
    MOV EDI,0x6                         ; 0054a80a
    SAR EDX,0x1f                        ; 0054a80f
    IDIV EDI                            ; 0054a812
    CMP EDX,0x5                         ; 0054a814
    JA 0x0054a828                       ; 0054a817
        ;   XREF to: 0054a828 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x54a774]  ; 0054a819 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10b00]   ; 0054a820
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 0054a826
        ;   Label: LAB_0054a826
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 0054a828
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0054a82e
    CMP EAX,EDX                         ; 0054a830
    JNZ 0x0054a9f3                      ; 0054a832
        ;   XREF to: 0054a9f3 (CONDITIONAL_JUMP)  ; LAB_0054a9f3
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0054a838
        ;   Label: LAB_0054a838
    MOV dword ptr [ESP + 0x8],EAX       ; 0054a83b
    MOV EAX,[0x00616494]                ; 0054a83f | DAT_00616494
    CMP dword ptr [EAX + 0x1fc],0x0     ; 0054a844 | DAT_01cb6afc
    JZ 0x0054a855                       ; 0054a84b
        ;   XREF to: 0054a855 (CONDITIONAL_JUMP)  ; LAB_0054a855
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0054a84d
    PUSH dword ptr [ESP + 0x8]          ; 0054a855
        ;   Label: LAB_0054a855
    CALL FUN_0040d060                   ; 0054a859
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 0054a85e
    TEST EAX,EAX                        ; 0054a861
    JZ 0x0054a97b                       ; 0054a863
        ;   XREF to: 0054a97b (CONDITIONAL_JUMP)  ; LAB_0054a97b
    PUSH 0x0                            ; 0054a869
    PUSH 0x0                            ; 0054a86b
    PUSH 0x0                            ; 0054a86d
    PUSH EBX                            ; 0054a86f
    LEA EAX,[ESI + 0xc]                 ; 0054a870
    PUSH EAX                            ; 0054a873
    LEA EAX,[EBX + 0x30]                ; 0054a874
    PUSH EAX                            ; 0054a877
    LEA EAX,[EBX + 0x20]                ; 0054a878
    PUSH EAX                            ; 0054a87b
    CALL FUN_004154f0                   ; 0054a87c
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004154f0()
    ADD ESP,0x1c                        ; 0054a881
    MOV EDI,EAX                         ; 0054a884
    PUSH 0x0                            ; 0054a886
    MOV EBP,EAX                         ; 0054a888
    MOV EAX,dword ptr [ESI]             ; 0054a88a
    PUSH EAX                            ; 0054a88c
    PUSH EDI                            ; 0054a88d
    PUSH EBX                            ; 0054a88e
    CALL FUN_004277e0                   ; 0054a88f
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    MOV EAX,dword ptr [ESI]             ; 0054a894
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 0054a896
    ADD ESP,0x10                        ; 0054a89c
    CMP EAX,EDX                         ; 0054a89f
    JNZ 0x0054a8b6                      ; 0054a8a1
        ;   XREF to: 0054a8b6 (CONDITIONAL_JUMP)  ; LAB_0054a8b6
    PUSH 0x0                            ; 0054a8a3
    MOV ECX,dword ptr [EBX + 0x10b04]   ; 0054a8a5
    PUSH ECX                            ; 0054a8ab
    PUSH EDI                            ; 0054a8ac
    PUSH EBX                            ; 0054a8ad
    CALL FUN_004277e0                   ; 0054a8ae
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    ADD ESP,0x10                        ; 0054a8b3
    MOV EDI,dword ptr [EBX + 0x10b08]   ; 0054a8b6
        ;   Label: LAB_0054a8b6
    CMP EDI,dword ptr [ESI]             ; 0054a8bc
    JNZ 0x0054a8d3                      ; 0054a8be
        ;   XREF to: 0054a8d3 (CONDITIONAL_JUMP)  ; LAB_0054a8d3
    PUSH 0x0                            ; 0054a8c0
    MOV EAX,dword ptr [EBX + 0x10b0c]   ; 0054a8c2
    PUSH EAX                            ; 0054a8c8
    PUSH EBP                            ; 0054a8c9
    PUSH EBX                            ; 0054a8ca
    CALL FUN_004277e0                   ; 0054a8cb
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004277e0()
    ADD ESP,0x10                        ; 0054a8d0
    MOV EDX,dword ptr [EBX + 0x10b24]   ; 0054a8d3
        ;   Label: LAB_0054a8d3
    CMP EDX,dword ptr [ESI]             ; 0054a8d9
    JNZ 0x0054a93f                      ; 0054a8db
        ;   XREF to: 0054a93f (CONDITIONAL_JUMP)  ; LAB_0054a93f
    PUSH 0x0                            ; 0054a8dd
    LEA EDI,[ESI + 0xc]                 ; 0054a8df
    PUSH EDI                            ; 0054a8e2
    MOV ECX,dword ptr [EBX + 0x10b08]   ; 0054a8e3
    PUSH ECX                            ; 0054a8e9
    PUSH EBX                            ; 0054a8ea
    CALL FUN_00427770                   ; 0054a8eb
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 0054a8f0
    PUSH 0x0                            ; 0054a8f3
    PUSH EDI                            ; 0054a8f5
    MOV EAX,dword ptr [EBX + 0x10b0c]   ; 0054a8f6
    PUSH EAX                            ; 0054a8fc
    PUSH EBX                            ; 0054a8fd
    CALL FUN_00427770                   ; 0054a8fe
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 0054a903
    PUSH 0x0                            ; 0054a906
    PUSH EDI                            ; 0054a908
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 0054a909
    PUSH EDX                            ; 0054a90f
    PUSH EBX                            ; 0054a910
    CALL FUN_00427770                   ; 0054a911
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 0054a916
    PUSH 0x0                            ; 0054a919
    PUSH EDI                            ; 0054a91b
    MOV ECX,dword ptr [EBX + 0x10b04]   ; 0054a91c
    PUSH ECX                            ; 0054a922
    PUSH EBX                            ; 0054a923
    CALL FUN_00427770                   ; 0054a924
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 0054a929
    PUSH 0x0                            ; 0054a92c
    PUSH EDI                            ; 0054a92e
    MOV EDI,dword ptr [EBX + 0x10b28]   ; 0054a92f
    PUSH EDI                            ; 0054a935
    PUSH EBX                            ; 0054a936
    CALL FUN_00427770                   ; 0054a937
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; undefined FUN_00427770()
    ADD ESP,0x10                        ; 0054a93c
    PUSH 0x5e7834                       ; 0054a93f | = "limb?.wav"
        ;   Label: LAB_0054a93f
    PUSH EBX                            ; 0054a944
    CALL FUN_0042b260                   ; 0054a945
        ;   XREF to: 0042b260 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b260()
    ADD ESP,0x8                         ; 0054a94a
    PUSH EBP                            ; 0054a94d
    CALL FUN_00416700                   ; 0054a94e
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; undefined FUN_00416700()
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 0054a953
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 0054a959
    ADD ESP,0x4                         ; 0054a960
    TEST EBP,EBP                        ; 0054a963
    JZ 0x0054aa34                       ; 0054a965
        ;   XREF to: 0054aa34 (CONDITIONAL_JUMP)  ; LAB_0054aa34
    FLD float ptr [ESI + 0x8]           ; 0054a96b
        ;   Label: LAB_0054a96b
    FLD ST0                             ; 0054a96e
    FMUL double ptr [0x005e7845]        ; 0054a970 | DAT_005e7845
    FSTP ST1                            ; 0054a976
    FSTP float ptr [ESI + 0x8]          ; 0054a978
    MOV EDX,dword ptr [EBX + 0x10b28]   ; 0054a97b
        ;   Label: LAB_0054a97b
    MOV EAX,dword ptr [ESI]             ; 0054a981
    CMP EAX,EDX                         ; 0054a983
    JZ 0x0054aa40                       ; 0054a985
        ;   XREF to: 0054aa40 (CONDITIONAL_JUMP)  ; LAB_0054aa40
    CMP EAX,dword ptr [EBX + 0x10b20]   ; 0054a98b
    JZ 0x0054a99f                       ; 0054a991
        ;   XREF to: 0054a99f (CONDITIONAL_JUMP)  ; LAB_0054a99f
    CMP EAX,dword ptr [EBX + 0x10b24]   ; 0054a993
    JNZ 0x0054aa58                      ; 0054a999
        ;   XREF to: 0054aa58 (CONDITIONAL_JUMP)  ; LAB_0054aa58
    MOV EAX,dword ptr [ESI + 0x4]       ; 0054a99f
        ;   Label: LAB_0054a99f
    MOV dword ptr [ESI + 0x4],EAX       ; 0054a9a2
    ADD ESP,0xc                         ; 0054a9a5
        ;   Label: LAB_0054a9a5
    POP EBP                             ; 0054a9a8
    POP EDI                             ; 0054a9a9
    POP ESI                             ; 0054a9aa
    POP EBX                             ; 0054a9ab
    RET                                 ; 0054a9ac
    MOV dword ptr [ESI + 0x4],0x0       ; 0054a9ad
        ;   Label: LAB_0054a9ad
    ADD ESP,0xc                         ; 0054a9b4
    POP EBP                             ; 0054a9b7
    POP EDI                             ; 0054a9b8
    POP ESI                             ; 0054a9b9
    POP EBX                             ; 0054a9ba
    RET                                 ; 0054a9bb
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 0054a9bc
        ;   Label: caseD_1
    JMP 0x0054a826                      ; 0054a9c2
        ;   XREF to: 0054a826 (UNCONDITIONAL_JUMP)  ; LAB_0054a826
    MOV EAX,dword ptr [EBX + 0x10b08]   ; 0054a9c7
        ;   Label: caseD_2
    JMP 0x0054a826                      ; 0054a9cd
        ;   XREF to: 0054a826 (UNCONDITIONAL_JUMP)  ; LAB_0054a826
    MOV EAX,dword ptr [EBX + 0x10b0c]   ; 0054a9d2
        ;   Label: caseD_3
    JMP 0x0054a826                      ; 0054a9d8
        ;   XREF to: 0054a826 (UNCONDITIONAL_JUMP)  ; LAB_0054a826
    MOV EAX,dword ptr [EBX + 0x10b28]   ; 0054a9dd
        ;   Label: caseD_4
    JMP 0x0054a826                      ; 0054a9e3
        ;   XREF to: 0054a826 (UNCONDITIONAL_JUMP)  ; LAB_0054a826
    MOV EAX,dword ptr [EBX + 0x10b24]   ; 0054a9e8
        ;   Label: caseD_5
    JMP 0x0054a826                      ; 0054a9ee
        ;   XREF to: 0054a826 (UNCONDITIONAL_JUMP)  ; LAB_0054a826
    CMP EAX,dword ptr [EBX + 0x10b04]   ; 0054a9f3
        ;   Label: LAB_0054a9f3
    JZ 0x0054a838                       ; 0054a9f9
        ;   XREF to: 0054a838 (CONDITIONAL_JUMP)  ; LAB_0054a838
    CMP EAX,dword ptr [EBX + 0x10b08]   ; 0054a9ff
    JZ 0x0054a838                       ; 0054aa05
        ;   XREF to: 0054a838 (CONDITIONAL_JUMP)  ; LAB_0054a838
    CMP EAX,dword ptr [EBX + 0x10b0c]   ; 0054aa0b
    JZ 0x0054a838                       ; 0054aa11
        ;   XREF to: 0054a838 (CONDITIONAL_JUMP)  ; LAB_0054a838
    CMP EAX,dword ptr [EBX + 0x10b24]   ; 0054aa17
    JZ 0x0054a838                       ; 0054aa1d
        ;   XREF to: 0054a838 (CONDITIONAL_JUMP)  ; LAB_0054a838
    CMP EAX,dword ptr [EBX + 0x10b28]   ; 0054aa23
    JZ 0x0054a838                       ; 0054aa29
        ;   XREF to: 0054a838 (CONDITIONAL_JUMP)  ; LAB_0054a838
    JMP 0x0054a97b                      ; 0054aa2f
        ;   XREF to: 0054a97b (UNCONDITIONAL_JUMP)  ; LAB_0054a97b
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 0054aa34
        ;   Label: LAB_0054aa34
    JMP 0x0054a96b                      ; 0054aa3b
        ;   XREF to: 0054a96b (UNCONDITIONAL_JUMP)  ; LAB_0054a96b
    FLD float ptr [ESI + 0x4]           ; 0054aa40
        ;   Label: LAB_0054aa40
    FLD ST0                             ; 0054aa43
    FMUL double ptr [0x005e7855]        ; 0054aa45 | DAT_005e7855
    FSTP ST1                            ; 0054aa4b
    FSTP float ptr [ESI + 0x4]          ; 0054aa4d
    ADD ESP,0xc                         ; 0054aa50
    POP EBP                             ; 0054aa53
    POP EDI                             ; 0054aa54
    POP ESI                             ; 0054aa55
    POP EBX                             ; 0054aa56
    RET                                 ; 0054aa57
    FLD float ptr [ESI + 0x4]           ; 0054aa58
        ;   Label: LAB_0054aa58
    FLD ST0                             ; 0054aa5b
    FMUL double ptr [0x005e784d]        ; 0054aa5d | DAT_005e784d
    FSTP ST1                            ; 0054aa63
    FSTP float ptr [ESI + 0x4]          ; 0054aa65
    ADD ESP,0xc                         ; 0054aa68
    POP EBP                             ; 0054aa6b
    POP EDI                             ; 0054aa6c
    POP ESI                             ; 0054aa6d
    POP EBX                             ; 0054aa6e
    RET                                 ; 0054aa6f

