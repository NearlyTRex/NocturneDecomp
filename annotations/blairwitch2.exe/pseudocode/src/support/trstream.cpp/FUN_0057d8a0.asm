; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_trstream_cpp_FUN_0057d8a0(int *param_1,byte *param_2,int *param_3)
;
; Local Variables:
; undefined        Stack[-0x91c]:1  local_91c
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined1       Stack[-0x11a]:1  local_11a
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_trstream.cpp_FUN_0057d870 at 0057d88a
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d8a0
        ;   Label: support_trstream.cpp_FUN_0057d8a0
    PUSH ESI                            ; 0057d8a1
    PUSH EDI                            ; 0057d8a2
    PUSH EBP                            ; 0057d8a3
    SUB ESP,0x90c                       ; 0057d8a4
    MOV ESI,dword ptr [ESP + 0x924]     ; 0057d8aa
    MOV EBX,dword ptr [ESP + 0x928]     ; 0057d8b1
    XOR EDX,EDX                         ; 0057d8b8
    MOV AH,byte ptr [ESI]               ; 0057d8ba
    MOV dword ptr [ESP + 0x900],EDX     ; 0057d8bc
    TEST AH,AH                          ; 0057d8c3
    JZ 0x0057d965                       ; 0057d8c5
        ;   XREF to: 0057d965 (CONDITIONAL_JUMP)  ; LAB_0057d965
    LEA EAX,[ESP + 0x800]               ; 0057d8cb
    INC EAX                             ; 0057d8d2
    MOV dword ptr [ESP + 0x908],EAX     ; 0057d8d3
    MOV DH,byte ptr [ESI]               ; 0057d8da
        ;   Label: LAB_0057d8da
    LEA EBP,[ESI + 0x1]                 ; 0057d8dc
    CMP DH,0x25                         ; 0057d8df
    JNZ 0x0057d977                      ; 0057d8e2
        ;   XREF to: 0057d977 (CONDITIONAL_JUMP)  ; LAB_0057d977
    MOV byte ptr [ESP + 0x800],DH       ; 0057d8e8
    MOV CL,0x20                         ; 0057d8ef
    MOV EAX,dword ptr [EBX]             ; 0057d8f1
    MOV EDI,dword ptr [ESP + 0x908]     ; 0057d8f3
    MOV dword ptr [ESP + 0x904],EAX     ; 0057d8fa
    MOV ESI,EBP                         ; 0057d901
    MOV CH,byte ptr [EBP]               ; 0057d903
    XOR EDX,EDX                         ; 0057d906
    TEST CH,CH                          ; 0057d908
    JZ 0x0057d914                       ; 0057d90a
        ;   XREF to: 0057d914 (CONDITIONAL_JUMP)  ; LAB_0057d914
    TEST EDX,EDX                        ; 0057d90c
        ;   Label: LAB_0057d90c
    JZ 0x0057da3e                       ; 0057d90e
        ;   XREF to: 0057da3e (CONDITIONAL_JUMP)  ; LAB_0057da3e
    LEA EAX,[ESP + 0x904]               ; 0057d914
        ;   Label: LAB_0057d914
    PUSH EAX                            ; 0057d91b
    LEA EAX,[ESP + 0x804]               ; 0057d91c
    PUSH EAX                            ; 0057d923
    LEA EAX,[ESP + 0x8]                 ; 0057d924
    PUSH EAX                            ; 0057d928
    MOV byte ptr [EDI],0x0              ; 0057d929
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0057d92c
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 0057d931
    PUSH EAX                            ; 0057d934
    LEA EAX,[ESP + 0x4]                 ; 0057d935
    MOV EDX,dword ptr [ESP + 0x924]     ; 0057d939
    PUSH EAX                            ; 0057d940
    MOV EAX,dword ptr [ESP + 0x928]     ; 0057d941
    MOV EDX,dword ptr [EDX]             ; 0057d948
    PUSH EAX                            ; 0057d94a
    CALL dword ptr [EDX + 0x8]          ; 0057d94b
    ADD ESP,0xc                         ; 0057d94e
    TEST EAX,EAX                        ; 0057d951
    JL 0x0057d96c                       ; 0057d953
        ;   XREF to: 0057d96c (CONDITIONAL_JUMP)  ; LAB_0057d96c
    ADD dword ptr [ESP + 0x900],EAX     ; 0057d955
    CMP byte ptr [ESI],0x0              ; 0057d95c
        ;   Label: LAB_0057d95c
    JNZ 0x0057d8da                      ; 0057d95f
        ;   XREF to: 0057d8da (CONDITIONAL_JUMP)  ; LAB_0057d8da
    MOV EAX,dword ptr [ESP + 0x900]     ; 0057d965
        ;   Label: LAB_0057d965
    ADD ESP,0x90c                       ; 0057d96c
        ;   Label: LAB_0057d96c
    POP EBP                             ; 0057d972
    POP EDI                             ; 0057d973
    POP ESI                             ; 0057d974
    POP EBX                             ; 0057d975
    RET                                 ; 0057d976
    XOR EDX,EDX                         ; 0057d977
        ;   Label: LAB_0057d977
    MOV DL,byte ptr [ESI]               ; 0057d979
    MOV EAX,dword ptr [ESP + 0x920]     ; 0057d97b
    PUSH EDX                            ; 0057d982
    MOV ECX,dword ptr [ESP + 0x924]     ; 0057d983
    MOV EAX,dword ptr [EAX]             ; 0057d98a
    PUSH ECX                            ; 0057d98c
    CALL dword ptr [EAX + 0x4]          ; 0057d98d
    ADD ESP,0x8                         ; 0057d990
    TEST EAX,EAX                        ; 0057d993
    JNZ 0x0057d96c                      ; 0057d995
        ;   XREF to: 0057d96c (CONDITIONAL_JUMP)  ; LAB_0057d96c
    MOV EDI,dword ptr [ESP + 0x900]     ; 0057d997
    INC EDI                             ; 0057d99e
    MOV ESI,EBP                         ; 0057d99f
    MOV dword ptr [ESP + 0x900],EDI     ; 0057d9a1
    JMP 0x0057d95c                      ; 0057d9a8
        ;   XREF to: 0057d95c (UNCONDITIONAL_JUMP)  ; LAB_0057d95c
    MOV CL,byte ptr [ESI]               ; 0057d9aa
        ;   Label: LAB_0057d9aa
    CMP byte ptr [ESI],0x0              ; 0057d9ac
    JNZ 0x0057d90c                      ; 0057d9af
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057d9b5
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    CMP CL,0x6c                         ; 0057d9ba
        ;   Label: LAB_0057d9ba
    JNZ 0x0057d9c4                      ; 0057d9bd
        ;   XREF to: 0057d9c4 (CONDITIONAL_JUMP)  ; LAB_0057d9c4
    ADD dword ptr [EBX],0x4             ; 0057d9bf
    JMP 0x0057da11                      ; 0057d9c2
        ;   XREF to: 0057da11 (UNCONDITIONAL_JUMP)  ; LAB_0057da11
    CMP CL,0x4c                         ; 0057d9c4
        ;   Label: LAB_0057d9c4
    ADD dword ptr [EBX],0x4             ; 0057d9c7
    MOV EDX,0x1                         ; 0057d9ca
    CMP byte ptr [ESI],0x0              ; 0057d9cf
    JNZ 0x0057d90c                      ; 0057d9d2
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057d9d8
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    MOV EBP,dword ptr [EBX]             ; 0057d9dd
        ;   Label: LAB_0057d9dd
    ADD EBP,0x4                         ; 0057d9df
    MOV EDX,0x1                         ; 0057d9e2
    MOV dword ptr [EBX],EBP             ; 0057d9e7
    CMP byte ptr [ESI],0x0              ; 0057d9e9
    JNZ 0x0057d90c                      ; 0057d9ec
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057d9f2
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    MOV EDX,dword ptr [EBX]             ; 0057d9f7
        ;   Label: LAB_0057d9f7
    ADD EDX,0x4                         ; 0057d9f9
    MOV dword ptr [EBX],EDX             ; 0057d9fc
    MOV EAX,dword ptr [EDX + -0x4]      ; 0057d9fe
    MOV EDX,dword ptr [ESP + 0x900]     ; 0057da01
    LEA EDI,[ESP + 0x800]               ; 0057da08
    MOV dword ptr [EAX],EDX             ; 0057da0f
    MOV EDX,0x1                         ; 0057da11
        ;   Label: LAB_0057da11
    CMP byte ptr [ESI],0x0              ; 0057da16
        ;   Label: LAB_0057da16
    JNZ 0x0057d90c                      ; 0057da19
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057da1f
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    MOV EAX,dword ptr [EBX]             ; 0057da24
        ;   Label: LAB_0057da24
    ADD EAX,0x4                         ; 0057da26
    MOV EDX,0x1                         ; 0057da29
    MOV dword ptr [EBX],EAX             ; 0057da2e
    CMP byte ptr [ESI],0x0              ; 0057da30
    JNZ 0x0057d90c                      ; 0057da33
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057da39
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    XOR EAX,EAX                         ; 0057da3e
        ;   Label: LAB_0057da3e
    INC EDI                             ; 0057da40
    MOV AL,byte ptr [ESI]               ; 0057da41
    INC ESI                             ; 0057da43
    MOV byte ptr [EDI + -0x1],AL        ; 0057da44
    CMP EAX,0x64                        ; 0057da47
    JNC 0x0057da71                      ; 0057da4a
        ;   XREF to: 0057da71 (CONDITIONAL_JUMP)  ; LAB_0057da71
    CMP EAX,0x46                        ; 0057da4c
    JNC 0x0057db02                      ; 0057da4f
        ;   XREF to: 0057db02 (CONDITIONAL_JUMP)  ; LAB_0057db02
    CMP EAX,0x43                        ; 0057da55
    JNC 0x0057db51                      ; 0057da58
        ;   XREF to: 0057db51 (CONDITIONAL_JUMP)  ; LAB_0057db51
    CMP EAX,0x25                        ; 0057da5e
    JZ 0x0057da11                       ; 0057da61
        ;   XREF to: 0057da11 (CONDITIONAL_JUMP)  ; LAB_0057da11
    CMP byte ptr [ESI],0x0              ; 0057da63
    JNZ 0x0057d90c                      ; 0057da66
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057da6c
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    JBE 0x0057d9ba                      ; 0057da71
        ;   XREF to: 0057d9ba (CONDITIONAL_JUMP)  ; LAB_0057d9ba
        ;   Label: LAB_0057da71
    CMP EAX,0x6e                        ; 0057da77
    JNC 0x0057daab                      ; 0057da7a
        ;   XREF to: 0057daab (CONDITIONAL_JUMP)  ; LAB_0057daab
    CMP EAX,0x67                        ; 0057da7c
    JC 0x0057db60                       ; 0057da7f
        ;   XREF to: 0057db60 (CONDITIONAL_JUMP)  ; LAB_0057db60
    JBE 0x0057db60                      ; 0057da85
        ;   XREF to: 0057db60 (CONDITIONAL_JUMP)  ; LAB_0057db60
    CMP EAX,0x68                        ; 0057da8b
    JBE 0x0057d9aa                      ; 0057da8e
        ;   XREF to: 0057d9aa (CONDITIONAL_JUMP)  ; LAB_0057d9aa
    CMP EAX,0x6c                        ; 0057da94
    JZ 0x0057d9aa                       ; 0057da97
        ;   XREF to: 0057d9aa (CONDITIONAL_JUMP)  ; LAB_0057d9aa
    CMP byte ptr [ESI],0x0              ; 0057da9d
    JNZ 0x0057d90c                      ; 0057daa0
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057daa6
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    JBE 0x0057d9f7                      ; 0057daab
        ;   XREF to: 0057d9f7 (CONDITIONAL_JUMP)  ; LAB_0057d9f7
        ;   Label: LAB_0057daab
    CMP EAX,0x73                        ; 0057dab1
    JNC 0x0057dad6                      ; 0057dab4
        ;   XREF to: 0057dad6 (CONDITIONAL_JUMP)  ; LAB_0057dad6
    CMP EAX,0x6f                        ; 0057dab6
    JBE 0x0057d9ba                      ; 0057dab9
        ;   XREF to: 0057d9ba (CONDITIONAL_JUMP)  ; LAB_0057d9ba
    CMP EAX,0x70                        ; 0057dabf
    JZ 0x0057da24                       ; 0057dac2
        ;   XREF to: 0057da24 (CONDITIONAL_JUMP)  ; LAB_0057da24
    CMP byte ptr [ESI],0x0              ; 0057dac8
    JNZ 0x0057d90c                      ; 0057dacb
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057dad1
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    JBE 0x0057d9dd                      ; 0057dad6
        ;   XREF to: 0057d9dd (CONDITIONAL_JUMP)  ; LAB_0057d9dd
        ;   Label: LAB_0057dad6
    CMP EAX,0x75                        ; 0057dadc
    JC 0x0057da16                       ; 0057dadf
        ;   XREF to: 0057da16 (CONDITIONAL_JUMP)  ; LAB_0057da16
    JBE 0x0057d9ba                      ; 0057dae5
        ;   XREF to: 0057d9ba (CONDITIONAL_JUMP)  ; LAB_0057d9ba
    CMP EAX,0x78                        ; 0057daeb
    JZ 0x0057d9ba                       ; 0057daee
        ;   XREF to: 0057d9ba (CONDITIONAL_JUMP)  ; LAB_0057d9ba
    CMP byte ptr [ESI],0x0              ; 0057daf4
    JNZ 0x0057d90c                      ; 0057daf7
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057dafd
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    JBE 0x0057db60                      ; 0057db02
        ;   XREF to: 0057db60 (CONDITIONAL_JUMP)  ; LAB_0057db60
        ;   Label: LAB_0057db02
    CMP EAX,0x4f                        ; 0057db04
    JNC 0x0057db25                      ; 0057db07
        ;   XREF to: 0057db25 (CONDITIONAL_JUMP)  ; LAB_0057db25
    CMP EAX,0x47                        ; 0057db09
    JBE 0x0057db60                      ; 0057db0c
        ;   XREF to: 0057db60 (CONDITIONAL_JUMP)  ; LAB_0057db60
    CMP EAX,0x4c                        ; 0057db0e
    JZ 0x0057d9aa                       ; 0057db11
        ;   XREF to: 0057d9aa (CONDITIONAL_JUMP)  ; LAB_0057d9aa
    CMP byte ptr [ESI],0x0              ; 0057db17
    JNZ 0x0057d90c                      ; 0057db1a
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057db20
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    JBE 0x0057d9ba                      ; 0057db25
        ;   XREF to: 0057d9ba (CONDITIONAL_JUMP)  ; LAB_0057d9ba
        ;   Label: LAB_0057db25
    CMP EAX,0x58                        ; 0057db2b
    JC 0x0057da16                       ; 0057db2e
        ;   XREF to: 0057da16 (CONDITIONAL_JUMP)  ; LAB_0057da16
    JBE 0x0057d9ba                      ; 0057db34
        ;   XREF to: 0057d9ba (CONDITIONAL_JUMP)  ; LAB_0057d9ba
    CMP EAX,0x63                        ; 0057db3a
    JZ 0x0057d9dd                       ; 0057db3d
        ;   XREF to: 0057d9dd (CONDITIONAL_JUMP)  ; LAB_0057d9dd
    CMP byte ptr [ESI],0x0              ; 0057db43
    JNZ 0x0057d90c                      ; 0057db46
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057db4c
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914
    JBE 0x0057d9dd                      ; 0057db51
        ;   XREF to: 0057d9dd (CONDITIONAL_JUMP)  ; LAB_0057d9dd
        ;   Label: LAB_0057db51
    CMP EAX,0x44                        ; 0057db57
    JBE 0x0057d9ba                      ; 0057db5a
        ;   XREF to: 0057d9ba (CONDITIONAL_JUMP)  ; LAB_0057d9ba
    CMP CL,0x4c                         ; 0057db60
        ;   Label: LAB_0057db60
    ADD dword ptr [EBX],0x8             ; 0057db63
    MOV EDX,0x1                         ; 0057db66
    CMP byte ptr [ESI],0x0              ; 0057db6b
    JNZ 0x0057d90c                      ; 0057db6e
        ;   XREF to: 0057d90c (CONDITIONAL_JUMP)  ; LAB_0057d90c
    JMP 0x0057d914                      ; 0057db74
        ;   XREF to: 0057d914 (UNCONDITIONAL_JUMP)  ; LAB_0057d914

