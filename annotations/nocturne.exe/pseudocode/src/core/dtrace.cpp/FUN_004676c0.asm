; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004676c0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00467890 at 004678b6
;
; Referenced Globals:
;   string s_..\\core\\dtrace.cpp_0057e0c0
;   string s_CDemonRaytrace::loadBinary_-_inv_0057e0d3
;   string s_..\\core\\dtrace.cpp_0057e100
;   string s_CDemonRaytrace::loadBinary_-_fil_0057e113
;   string s_..\\core\\dtrace.cpp_0057e149
;   string s_Release_build_doesn't_support_ol_0057e15c
;   string s_..\\core\\dtrace.cpp_0057e187
;   string s_CDemonRaytrace::loadBinary_-_err_0057e19a
;   undefined4 DAT_0057e1ca
;   undefined4 DAT_0057e1ce
;   undefined4 DAT_005b6d00
;   undefined4 DAT_01bc994c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_0044aed0
;   FUN_00467330
;   FUN_004673a0
;   FUN_004c8440
;   FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004676c0
        ;   Label: FUN_004676c0
    PUSH ESI                            ; 004676c1
    PUSH EDI                            ; 004676c2
    PUSH EBP                            ; 004676c3
    SUB ESP,0x10                        ; 004676c4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004676c7
    MOV EBP,dword ptr [ESP + 0x28]      ; 004676cb
    PUSH EBX                            ; 004676cf
    CALL FUN_004673a0                   ; 004676d0
        ;   XREF to: 004673a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004673a0()
    ADD ESP,0x4                         ; 004676d5
    PUSH EBP                            ; 004676d8
    PUSH 0x1                            ; 004676d9
    PUSH 0x4                            ; 004676db
    LEA EAX,[ESP + 0x18]                ; 004676dd
    XOR EDX,EDX                         ; 004676e1
    PUSH EAX                            ; 004676e3
    MOV dword ptr [0x01bc994c],EDX      ; 004676e4 | DAT_01bc994c
    CALL FUN_005636d0                   ; 004676ea
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 004676ef
    CMP dword ptr [ESP + 0xc],0x1       ; 004676f2
    JL 0x00467809                       ; 004676f7
        ;   XREF to: 00467809 (CONDITIONAL_JUMP)  ; LAB_00467809
    MOV EAX,dword ptr [ESP + 0xc]       ; 004676fd
        ;   Label: LAB_004676fd
    CMP EAX,dword ptr [0x005b6d00]      ; 00467701 | DAT_005b6d00
    JLE 0x0046772c                      ; 00467707
        ;   XREF to: 0046772c (CONDITIONAL_JUMP)  ; LAB_0046772c
    MOV ECX,0x57e100                    ; 00467709 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x14b                       ; 0046770e
    PUSH 0x57e113                       ; 00467713 | = "CDemonRaytrace::loadBinary - file is ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00467718 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0046771e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00467724
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00467729
    PUSH EBP                            ; 0046772c
        ;   Label: LAB_0046772c
    PUSH 0x1                            ; 0046772d
    PUSH 0x4                            ; 0046772f
    LEA EAX,[EBX + 0x40]                ; 00467731
    PUSH EAX                            ; 00467734
    CALL FUN_005636d0                   ; 00467735
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 0046773a
    PUSH EBP                            ; 0046773d
    PUSH 0x1                            ; 0046773e
    PUSH 0x4                            ; 00467740
    LEA EAX,[EBX + 0x44]                ; 00467742
    PUSH EAX                            ; 00467745
    CALL FUN_005636d0                   ; 00467746
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 0046774b
    PUSH EBP                            ; 0046774e
    PUSH 0x1                            ; 0046774f
    PUSH 0x4                            ; 00467751
    LEA EAX,[EBX + 0x48]                ; 00467753
    PUSH EAX                            ; 00467756
    CALL FUN_005636d0                   ; 00467757
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 0046775c
    PUSH EBP                            ; 0046775f
    PUSH 0x1                            ; 00467760
    PUSH 0xc                            ; 00467762
    LEA EAX,[EBX + 0x10]                ; 00467764
    PUSH EAX                            ; 00467767
    CALL FUN_005636d0                   ; 00467768
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 0046776d
    PUSH EBP                            ; 00467770
    PUSH 0x1                            ; 00467771
    PUSH 0xc                            ; 00467773
    LEA EAX,[EBX + 0x1c]                ; 00467775
    PUSH EAX                            ; 00467778
    CALL FUN_005636d0                   ; 00467779
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 0046777e
    PUSH EBP                            ; 00467781
    PUSH 0x1                            ; 00467782
    PUSH 0xc                            ; 00467784
    LEA ESI,[EBX + 0x28]                ; 00467786
    PUSH ESI                            ; 00467789
    CALL FUN_005636d0                   ; 0046778a
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    FLD float ptr [ESI]                 ; 0046778f
    FDIV float ptr [0x0057e1ca]         ; 00467791 | DAT_0057e1ca
    ADD ESP,0x10                        ; 00467797
    FSTP float ptr [ESP]                ; 0046779a
    FLD float ptr [0x0057e1ce]          ; 0046779d | DAT_0057e1ce
    FLD float ptr [ESI + 0x4]           ; 004677a3
    FMUL ST1                            ; 004677a6
    FSTP float ptr [ESP + 0x4]          ; 004677a8
    FMUL float ptr [ESI + 0x8]          ; 004677ac
    MOV EAX,ESP                         ; 004677af
    LEA ESI,[EBX + 0x34]                ; 004677b1
    FSTP float ptr [ESP + 0x8]          ; 004677b4
    CMP ESI,EAX                         ; 004677b8
    JZ 0x004677cf                       ; 004677ba
        ;   XREF to: 004677cf (CONDITIONAL_JUMP)  ; LAB_004677cf
    MOV EAX,dword ptr [ESP]             ; 004677bc
    MOV dword ptr [ESI],EAX             ; 004677bf
    MOV EAX,dword ptr [ESP + 0x4]       ; 004677c1
    MOV dword ptr [ESI + 0x4],EAX       ; 004677c5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004677c8
    MOV dword ptr [ESI + 0x8],EAX       ; 004677cc
    CMP dword ptr [ESP + 0xc],0x4       ; 004677cf
        ;   Label: LAB_004677cf
    JL 0x00467831                       ; 004677d4
        ;   XREF to: 00467831 (CONDITIONAL_JUMP)  ; LAB_00467831
    PUSH EBX                            ; 004677d6
    CALL FUN_00467330                   ; 004677d7
        ;   XREF to: 00467330 (UNCONDITIONAL_CALL)  ; undefined FUN_00467330()
    XOR ESI,ESI                         ; 004677dc
    XOR EDI,EDI                         ; 004677de
    ADD ESP,0x4                         ; 004677e0
    MOV ECX,dword ptr [EBX + 0x44]      ; 004677e3
        ;   Label: LAB_004677e3
    MOV EAX,dword ptr [EBX + 0x40]      ; 004677e6
    IMUL EAX,ECX                        ; 004677e9
    IMUL EAX,dword ptr [EBX + 0x48]     ; 004677ec
    CMP ESI,EAX                         ; 004677f0
    JGE 0x00467853                      ; 004677f2
        ;   XREF to: 00467853 (CONDITIONAL_JUMP)  ; LAB_00467853
    MOV EAX,dword ptr [EBX + 0x50]      ; 004677f4
    PUSH EBP                            ; 004677f7
    ADD EAX,EDI                         ; 004677f8
    PUSH EAX                            ; 004677fa
    INC ESI                             ; 004677fb
    CALL FUN_0044aed0                   ; 004677fc
        ;   XREF to: 0044aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044aed0()
    ADD EDI,0x34                        ; 00467801
    ADD ESP,0x8                         ; 00467804
    JMP 0x004677e3                      ; 00467807
        ;   XREF to: 004677e3 (UNCONDITIONAL_JUMP)  ; LAB_004677e3
    MOV ESI,0x57e0c0                    ; 00467809 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00467809
    MOV EDI,0x148                       ; 0046780e
    PUSH 0x57e0d3                       ; 00467813 | = "CDemonRaytrace::loadBinary - invalid ..."
    MOV dword ptr [0x01cc4800],ESI      ; 00467818 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0046781e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00467824
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00467829
    JMP 0x004676fd                      ; 0046782c
        ;   XREF to: 004676fd (UNCONDITIONAL_JUMP)  ; LAB_004676fd
    MOV EAX,0x57e149                    ; 00467831 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00467831
    MOV EDX,0x1e2                       ; 00467836
    PUSH 0x57e15c                       ; 0046783b | = "Release build doesn't support old geo..."
    MOV [0x01cc4800],EAX                ; 00467840 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00467845 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0046784b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00467850
    TEST byte ptr [EBP + 0xc],0x20      ; 00467853
        ;   Label: LAB_00467853
    JNZ 0x00467861                      ; 00467857
        ;   XREF to: 00467861 (CONDITIONAL_JUMP)  ; LAB_00467861
    ADD ESP,0x10                        ; 00467859
    POP EBP                             ; 0046785c
    POP EDI                             ; 0046785d
    POP ESI                             ; 0046785e
    POP EBX                             ; 0046785f
    RET                                 ; 00467860
    MOV ECX,0x57e187                    ; 00467861 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00467861
    MOV EBX,0x1ff                       ; 00467866
    PUSH 0x57e19a                       ; 0046786b | = "CDemonRaytrace::loadBinary - error re..."
    MOV dword ptr [0x01cc4800],ECX      ; 00467870 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00467876 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0046787c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00467881
    ADD ESP,0x10                        ; 00467884
    POP EBP                             ; 00467887
    POP EDI                             ; 00467888
    POP ESI                             ; 00467889
    POP EBX                             ; 0046788a
    RET                                 ; 0046788b

