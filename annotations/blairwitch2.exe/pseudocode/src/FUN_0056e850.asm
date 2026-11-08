; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e850(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00563060 at 00563dcd
;
; Referenced Globals:
;   void* switchdataD_0056e824 = 0056e944
;   undefined4 DAT_005ebe4d
;
; Called Functions:
;   FUN_0042a5a0
;   FUN_005683d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e850
        ;   Label: FUN_0056e850
    PUSH ESI                            ; 0056e851
    PUSH EDI                            ; 0056e852
    PUSH EBP                            ; 0056e853
    SUB ESP,0x4                         ; 0056e854
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056e857
    MOV EDX,dword ptr [EBX + 0x10a74]   ; 0056e85b
    MOV dword ptr [EBX + 0x256a0],0x0   ; 0056e861
    TEST EDX,EDX                        ; 0056e86b
    JZ 0x0056e9a7                       ; 0056e86d
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    CMP dword ptr [EBX + 0x276c],0x0    ; 0056e873
    JNZ 0x0056e9a7                      ; 0056e87a
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    CMP dword ptr [EBX + 0x256a4],0x0   ; 0056e880
    JNZ 0x0056e9a7                      ; 0056e887
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    CMP dword ptr [EBX + 0x25640],0x0   ; 0056e88d
    JZ 0x0056e9a7                       ; 0056e894
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056e89a
    TEST EAX,EAX                        ; 0056e8a0
    JNZ 0x0056e9af                      ; 0056e8a2
        ;   XREF to: 0056e9af (CONDITIONAL_JUMP)  ; LAB_0056e9af
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056e8a8
    TEST EAX,EAX                        ; 0056e8ae
        ;   Label: LAB_0056e8ae
    JNZ 0x0056e9c1                      ; 0056e8b0
        ;   XREF to: 0056e9c1 (CONDITIONAL_JUMP)  ; LAB_0056e9c1
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056e8b6
        ;   Label: LAB_0056e8b6
    TEST EAX,EAX                        ; 0056e8bc
    JZ 0x0056e9a7                       ; 0056e8be
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    MOV EDX,dword ptr [EAX + 0x43c]     ; 0056e8c4
    CMP EDX,0x3                         ; 0056e8ca
    JZ 0x0056e9a7                       ; 0056e8cd
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    CMP dword ptr [EBX + 0x24378],0x0   ; 0056e8d3
    JNZ 0x0056e920                      ; 0056e8da
        ;   XREF to: 0056e920 (CONDITIONAL_JUMP)  ; LAB_0056e920
    TEST EDX,EDX                        ; 0056e8dc
    JNZ 0x0056e920                      ; 0056e8de
        ;   XREF to: 0056e920 (CONDITIONAL_JUMP)  ; LAB_0056e920
    LEA ECX,[EBX + 0x25654]             ; 0056e8e0
    MOV EDI,dword ptr [EBX + 0x2569c]   ; 0056e8e6
    LEA EAX,[EBX + 0x25674]             ; 0056e8ec
    TEST EDI,EDI                        ; 0056e8f2
    JZ 0x0056ea5e                       ; 0056e8f4
        ;   XREF to: 0056ea5e (CONDITIONAL_JUMP)  ; LAB_0056ea5e
    MOV EDX,EAX                         ; 0056e8fa
    MOV EAX,ECX                         ; 0056e8fc
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0056e8fe
        ;   Label: LAB_0056e8fe
    CMP EBP,0x2                         ; 0056e901
    JNZ 0x0056e920                      ; 0056e904
        ;   XREF to: 0056e920 (CONDITIONAL_JUMP)  ; LAB_0056e920
    CMP EBP,dword ptr [EDX + 0x1c]      ; 0056e906
    JZ 0x0056e920                       ; 0056e909
        ;   XREF to: 0056e920 (CONDITIONAL_JUMP)  ; LAB_0056e920
    CMP dword ptr [EBX + 0x2569c],0x0   ; 0056e90b
    SETZ AL                             ; 0056e912
    AND EAX,0xff                        ; 0056e915
    MOV dword ptr [EBX + 0x2569c],EAX   ; 0056e91a
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056e920
        ;   Label: LAB_0056e920
    TEST EAX,EAX                        ; 0056e926
    JZ 0x0056ea8d                       ; 0056e928
        ;   XREF to: 0056ea8d (CONDITIONAL_JUMP)  ; caseD_9
    MOV EAX,dword ptr [EAX + 0x43c]     ; 0056e92e
    CMP EAX,0x9                         ; 0056e934
    JA 0x0056ea8d                       ; 0056e937
        ;   XREF to: 0056ea8d (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x56e824]  ; 0056e93d | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 0056e944
        ;   Label: caseD_0
    PUSH EAX                            ; 0056e949
        ;   Label: LAB_0056e949
    PUSH EBX                            ; 0056e94a
    CALL FUN_0042a5a0                   ; 0056e94b
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a5a0()
    MOV dword ptr [ESP + 0x8],EAX       ; 0056e950
    FLD float ptr [ESP + 0x8]           ; 0056e954
    ADD ESP,0x8                         ; 0056e958
    FCOMP double ptr [0x005ebe4d]       ; 0056e95b | DAT_005ebe4d
    FNSTSW AX                           ; 0056e961
    SAHF                                ; 0056e963
    JC 0x0056e9a7                       ; 0056e964
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    MOV ECX,dword ptr [EBX + 0x2569c]   ; 0056e966
    LEA EDX,[EBX + 0x25654]             ; 0056e96c
    TEST ECX,ECX                        ; 0056e972
    JZ 0x0056e98b                       ; 0056e974
        ;   XREF to: 0056e98b (CONDITIONAL_JUMP)  ; LAB_0056e98b
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056e976
    CMP dword ptr [EAX + 0x43c],0x0     ; 0056e97c
    JNZ 0x0056e98b                      ; 0056e983
        ;   XREF to: 0056e98b (CONDITIONAL_JUMP)  ; LAB_0056e98b
    LEA EDX,[EBX + 0x25674]             ; 0056e985
    FLD float ptr [EDX + 0x14]          ; 0056e98b
        ;   Label: LAB_0056e98b
    FLD1                                ; 0056e98e
    FCOMPP                              ; 0056e990
    FNSTSW AX                           ; 0056e992
    SAHF                                ; 0056e994
    JA 0x0056e9a7                       ; 0056e995
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    FLD float ptr [EDX + 0x10]          ; 0056e997
    FLDZ                                ; 0056e99a
    FCOMPP                              ; 0056e99c
    FNSTSW AX                           ; 0056e99e
    SAHF                                ; 0056e9a0
    JNC 0x0056ea94                      ; 0056e9a1
        ;   XREF to: 0056ea94 (CONDITIONAL_JUMP)  ; LAB_0056ea94
    ADD ESP,0x4                         ; 0056e9a7
        ;   Label: LAB_0056e9a7
    POP EBP                             ; 0056e9aa
    POP EDI                             ; 0056e9ab
    POP ESI                             ; 0056e9ac
    POP EBX                             ; 0056e9ad
    RET                                 ; 0056e9ae
    CMP dword ptr [EAX + 0x43c],0x7     ; 0056e9af
        ;   Label: LAB_0056e9af
    JZ 0x0056e8ae                       ; 0056e9b6
        ;   XREF to: 0056e8ae (CONDITIONAL_JUMP)  ; LAB_0056e8ae
    JMP 0x0056e8b6                      ; 0056e9bc
        ;   XREF to: 0056e8b6 (UNCONDITIONAL_JUMP)  ; LAB_0056e8b6
    PUSH EAX                            ; 0056e9c1
        ;   Label: LAB_0056e9c1
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056e9c2
    CALL dword ptr [EDX + 0x7c]         ; 0056e9c8
    ADD ESP,0x4                         ; 0056e9cb
    MOV ESI,EAX                         ; 0056e9ce
    TEST EAX,EAX                        ; 0056e9d0
    JZ 0x0056e8b6                       ; 0056e9d2
        ;   XREF to: 0056e8b6 (CONDITIONAL_JUMP)  ; LAB_0056e8b6
    XOR ECX,ECX                         ; 0056e9d8
    XOR EDI,EDI                         ; 0056e9da
    MOV EBP,dword ptr [EBX + 0x256a8]   ; 0056e9dc
        ;   Label: LAB_0056e9dc
    INC EBP                             ; 0056e9e2
    MOV dword ptr [EBX + 0x256a8],EBP   ; 0056e9e3
    CMP EDI,EBP                         ; 0056e9e9
    JLE 0x0056ea15                      ; 0056e9eb
        ;   XREF to: 0056ea15 (CONDITIONAL_JUMP)  ; LAB_0056ea15
    MOV dword ptr [EBX + 0x256a8],EDI   ; 0056e9ed
        ;   Label: LAB_0056e9ed
    MOV EDX,dword ptr [EBX + 0x256a8]   ; 0056e9f3
        ;   Label: LAB_0056e9f3
    ADD EDX,0xc                         ; 0056e9f9
    MOV EAX,EDI                         ; 0056e9fc
    CMP EDX,0xc                         ; 0056e9fe
    JNC 0x0056ea2a                      ; 0056ea01
        ;   XREF to: 0056ea2a (CONDITIONAL_JUMP)  ; LAB_0056ea2a
    TEST EAX,ESI                        ; 0056ea03
        ;   Label: LAB_0056ea03
    JNZ 0x0056ea33                      ; 0056ea05
        ;   XREF to: 0056ea33 (CONDITIONAL_JUMP)  ; LAB_0056ea33
    INC ECX                             ; 0056ea07
    CMP ECX,0x14                        ; 0056ea08
    JL 0x0056e9dc                       ; 0056ea0b
        ;   XREF to: 0056e9dc (CONDITIONAL_JUMP)  ; LAB_0056e9dc
    ADD ESP,0x4                         ; 0056ea0d
    POP EBP                             ; 0056ea10
    POP EDI                             ; 0056ea11
    POP ESI                             ; 0056ea12
    POP EBX                             ; 0056ea13
    RET                                 ; 0056ea14
    CMP EBP,0x2                         ; 0056ea15
        ;   Label: LAB_0056ea15
    JL 0x0056e9f3                       ; 0056ea18
        ;   XREF to: 0056e9f3 (CONDITIONAL_JUMP)  ; LAB_0056e9f3
    JMP 0x0056e9ed                      ; 0056ea1a
        ;   XREF to: 0056e9ed (UNCONDITIONAL_JUMP)  ; LAB_0056e9ed
    MOV EAX,0x1                         ; 0056ea1c
        ;   Label: LAB_0056ea1c
    JMP 0x0056ea03                      ; 0056ea21
        ;   XREF to: 0056ea03 (UNCONDITIONAL_JUMP)  ; LAB_0056ea03
    MOV EAX,0x2                         ; 0056ea23
        ;   Label: LAB_0056ea23
    JMP 0x0056ea03                      ; 0056ea28
        ;   XREF to: 0056ea03 (UNCONDITIONAL_JUMP)  ; LAB_0056ea03
    JBE 0x0056ea1c                      ; 0056ea2a
        ;   XREF to: 0056ea1c (CONDITIONAL_JUMP)  ; LAB_0056ea1c
        ;   Label: LAB_0056ea2a
    CMP EDX,0xd                         ; 0056ea2c
    JZ 0x0056ea23                       ; 0056ea2f
        ;   XREF to: 0056ea23 (CONDITIONAL_JUMP)  ; LAB_0056ea23
    JMP 0x0056ea03                      ; 0056ea31
        ;   XREF to: 0056ea03 (UNCONDITIONAL_JUMP)  ; LAB_0056ea03
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0056ea33
        ;   Label: LAB_0056ea33
    MOV EAX,dword ptr [EBX + 0x256a8]   ; 0056ea3d
    MOV dword ptr [EBX + 0x256a4],0x7   ; 0056ea43
    ADD EAX,0xc                         ; 0056ea4d
    MOV dword ptr [EBX + 0x2d04],EAX    ; 0056ea50
    ADD ESP,0x4                         ; 0056ea56
    POP EBP                             ; 0056ea59
    POP EDI                             ; 0056ea5a
    POP ESI                             ; 0056ea5b
    POP EBX                             ; 0056ea5c
    RET                                 ; 0056ea5d
    MOV EDX,ECX                         ; 0056ea5e
        ;   Label: LAB_0056ea5e
    JMP 0x0056e8fe                      ; 0056ea60
        ;   XREF to: 0056e8fe (UNCONDITIONAL_JUMP)  ; LAB_0056e8fe
    MOV EAX,0x4                         ; 0056ea65
        ;   Label: caseD_1
    JMP 0x0056e949                      ; 0056ea6a
        ;   XREF to: 0056e949 (UNCONDITIONAL_JUMP)  ; LAB_0056e949
    MOV EAX,0x7                         ; 0056ea6f
        ;   Label: caseD_4
    JMP 0x0056e949                      ; 0056ea74
        ;   XREF to: 0056e949 (UNCONDITIONAL_JUMP)  ; LAB_0056e949
    MOV EAX,0x5                         ; 0056ea79
        ;   Label: caseD_2
    JMP 0x0056e949                      ; 0056ea7e
        ;   XREF to: 0056e949 (UNCONDITIONAL_JUMP)  ; LAB_0056e949
    MOV EAX,0x8                         ; 0056ea83
        ;   Label: caseD_7
    JMP 0x0056e949                      ; 0056ea88
        ;   XREF to: 0056e949 (UNCONDITIONAL_JUMP)  ; LAB_0056e949
    XOR EAX,EAX                         ; 0056ea8d
        ;   Label: caseD_3
    JMP 0x0056e949                      ; 0056ea8f
        ;   XREF to: 0056e949 (UNCONDITIONAL_JUMP)  ; LAB_0056e949
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056ea94
        ;   Label: LAB_0056ea94
    PUSH EAX                            ; 0056ea9a
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056ea9b
    CALL dword ptr [EDX + 0xf0]         ; 0056eaa1
    ADD ESP,0x4                         ; 0056eaa7
    TEST EAX,EAX                        ; 0056eaaa
    JZ 0x0056e9a7                       ; 0056eaac
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056eab2
    CMP dword ptr [EAX + 0x43c],0x0     ; 0056eab8
    JZ 0x0056eb2b                       ; 0056eabf
        ;   XREF to: 0056eb2b (CONDITIONAL_JUMP)  ; LAB_0056eb2b
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056eac1
        ;   Label: LAB_0056eac1
    MOV dword ptr [EBX + 0x256a0],0x0   ; 0056eac7
    PUSH EAX                            ; 0056ead1
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0056ead2
    CALL dword ptr [EDX + 0xec]         ; 0056ead8
    ADD ESP,0x4                         ; 0056eade
    TEST EAX,EAX                        ; 0056eae1
    JZ 0x0056eaef                       ; 0056eae3
        ;   XREF to: 0056eaef (CONDITIONAL_JUMP)  ; LAB_0056eaef
    MOV dword ptr [EBX + 0x256a0],0x1   ; 0056eae5
    PUSH 0x0                            ; 0056eaef
        ;   Label: LAB_0056eaef
    PUSH EBX                            ; 0056eaf1
    CALL FUN_005683d0                   ; 0056eaf2
        ;   XREF to: 005683d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005683d0()
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056eaf7
    MOV ECX,dword ptr [EAX + 0x438]     ; 0056eafd
    ADD ESP,0x8                         ; 0056eb03
    CMP ECX,0x2                         ; 0056eb06
    JNZ 0x0056e9a7                      ; 0056eb09
        ;   XREF to: 0056e9a7 (CONDITIONAL_JUMP)  ; LAB_0056e9a7
    MOV dword ptr [EBX + 0x2d08],0x0    ; 0056eb0f
    MOV dword ptr [EBX + 0x2d04],0x8    ; 0056eb19
    ADD ESP,0x4                         ; 0056eb23
    POP EBP                             ; 0056eb26
    POP EDI                             ; 0056eb27
    POP ESI                             ; 0056eb28
    POP EBX                             ; 0056eb29
    RET                                 ; 0056eb2a
    MOV EBP,dword ptr [EBX + 0x2569c]   ; 0056eb2b
        ;   Label: LAB_0056eb2b
    PUSH EBP                            ; 0056eb31
    PUSH EBX                            ; 0056eb32
    CALL FUN_005683d0                   ; 0056eb33
        ;   XREF to: 005683d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005683d0()
    MOV EDX,dword ptr [EBX + 0x2569c]   ; 0056eb38
    ADD ESP,0x8                         ; 0056eb3e
    TEST EDX,EDX                        ; 0056eb41
    SETZ AL                             ; 0056eb43
    AND EAX,0xff                        ; 0056eb46
    MOV dword ptr [EBX + 0x2569c],EAX   ; 0056eb4b
    JMP 0x0056eac1                      ; 0056eb51
        ;   XREF to: 0056eac1 (UNCONDITIONAL_JUMP)  ; LAB_0056eac1

