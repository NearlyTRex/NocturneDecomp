; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_1000b720(uint param_1,char *param_2,DWORD param_3)
;
; Local Variables:
; undefined        Stack[-0xd]:1  local_d
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   FUN_100093f0 at 10009767
;   FUN_1000b6a0 at 1000b6e2
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_ReadFile_1024225c = 00242692
;
; Called Functions:
;   __dosmaperr
;   __lseek_lk
;   FUN_10008a20
;   FUN_10008a30
;   GetLastError
;   ReadFile
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 1000b720
        ;   Label: FUN_1000b720
    SUB ESP,0x10                        ; 1000b724
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000b727
    PUSH EBX                            ; 1000b72b
    PUSH ESI                            ; 1000b72c
    TEST ECX,ECX                        ; 1000b72d
    MOV dword ptr [ESP + 0xc],0x0       ; 1000b72f
    PUSH EDI                            ; 1000b737
    PUSH EBP                            ; 1000b738
    JZ 0x1000b946                       ; 1000b739
        ;   XREF to: 1000b946 (CONDITIONAL_JUMP)  ; LAB_1000b946
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000b73f
    AND EAX,0xffffffe7                  ; 1000b743
    SAR EAX,0x3                         ; 1000b746
    LEA EBP,[EAX + 0x10241870]          ; 1000b749 | DAT_10241870
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000b74f
    AND EAX,0x1f                        ; 1000b753
    SHL EAX,0x2                         ; 1000b756
    LEA EBX,[EAX + EAX*0x8]             ; 1000b759
    MOV EAX,dword ptr [EBP]             ; 1000b75c | DAT_10241870
    ADD EAX,EBX                         ; 1000b75f
    TEST byte ptr [EAX + 0x4],0x2       ; 1000b761
    JNZ 0x1000b946                      ; 1000b765
        ;   XREF to: 1000b946 (CONDITIONAL_JUMP)  ; LAB_1000b946
    TEST byte ptr [EAX + 0x4],0x48      ; 1000b76b
    JZ 0x1000b78c                       ; 1000b76f
        ;   XREF to: 1000b78c (CONDITIONAL_JUMP)  ; LAB_1000b78c
    MOV AL,byte ptr [EAX + 0x5]         ; 1000b771
    CMP AL,0xa                          ; 1000b774
    JZ 0x1000b78c                       ; 1000b776
        ;   XREF to: 1000b78c (CONDITIONAL_JUMP)  ; LAB_1000b78c
    MOV byte ptr [EDX],AL               ; 1000b778
    INC EDX                             ; 1000b77a
    DEC ECX                             ; 1000b77b
    MOV EAX,dword ptr [EBP]             ; 1000b77c | DAT_10241870
    MOV dword ptr [ESP + 0x14],0x1      ; 1000b77f
    MOV byte ptr [EAX + EBX*0x1 + 0x5],0xa ; 1000b787
    LEA EAX,[ESP + 0x18]                ; 1000b78c
        ;   Label: LAB_1000b78c
    PUSH 0x0                            ; 1000b790
    PUSH EAX                            ; 1000b792
    PUSH ECX                            ; 1000b793
    PUSH EDX                            ; 1000b794
    MOV ECX,dword ptr [EBP]             ; 1000b795 | DAT_10241870
    MOV EDX,dword ptr [ECX + EBX*0x1]   ; 1000b798
    PUSH EDX                            ; 1000b79b
    CALL dword ptr [0x1024225c]         ; 1000b79c | PTR_ReadFile_1024225c
    TEST EAX,EAX                        ; 1000b7a2
    JNZ 0x1000b7f7                      ; 1000b7a4
        ;   XREF to: 1000b7f7 (CONDITIONAL_JUMP)  ; LAB_1000b7f7
    CALL dword ptr [0x102421c8]         ; 1000b7a6 | PTR_GetLastError_102421c8
    CMP EAX,0x5                         ; 1000b7ac
    MOV ESI,EAX                         ; 1000b7af
    JNZ 0x1000b7d2                      ; 1000b7b1
        ;   XREF to: 1000b7d2 (CONDITIONAL_JUMP)  ; LAB_1000b7d2
    CALL FUN_10008a20                   ; 1000b7b3
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
    MOV dword ptr [EAX],0x9             ; 1000b7b8
    CALL FUN_10008a30                   ; 1000b7be
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    POP EBP                             ; 1000b7c3
    MOV dword ptr [EAX],ESI             ; 1000b7c4
    MOV EAX,0xffffffff                  ; 1000b7c6
    POP EDI                             ; 1000b7cb
    POP ESI                             ; 1000b7cc
    POP EBX                             ; 1000b7cd
    ADD ESP,0x10                        ; 1000b7ce
    RET                                 ; 1000b7d1
    CMP ESI,0x6d                        ; 1000b7d2
        ;   Label: LAB_1000b7d2
    JNZ 0x1000b7e1                      ; 1000b7d5
        ;   XREF to: 1000b7e1 (CONDITIONAL_JUMP)  ; LAB_1000b7e1
    XOR EAX,EAX                         ; 1000b7d7
    POP EBP                             ; 1000b7d9
    POP EDI                             ; 1000b7da
    POP ESI                             ; 1000b7db
    POP EBX                             ; 1000b7dc
    ADD ESP,0x10                        ; 1000b7dd
    RET                                 ; 1000b7e0
    PUSH ESI                            ; 1000b7e1
        ;   Label: LAB_1000b7e1
    CALL __dosmaperr                    ; 1000b7e2
        ;   XREF to: 100089a0 (UNCONDITIONAL_CALL)  ; void __dosmaperr(ulong param_1)
    ADD ESP,0x4                         ; 1000b7e7
    MOV EAX,0xffffffff                  ; 1000b7ea
    POP EBP                             ; 1000b7ef
    POP EDI                             ; 1000b7f0
    POP ESI                             ; 1000b7f1
    POP EBX                             ; 1000b7f2
    ADD ESP,0x10                        ; 1000b7f3
    RET                                 ; 1000b7f6
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000b7f7
        ;   Label: LAB_1000b7f7
    MOV ECX,dword ptr [EBP]             ; 1000b7fb | DAT_10241870
    ADD dword ptr [ESP + 0x14],EAX      ; 1000b7fe
    LEA EAX,[ECX + EBX*0x1 + 0x4]       ; 1000b802
    MOV CL,byte ptr [EAX]               ; 1000b806
    TEST CL,0x80                        ; 1000b808
    JZ 0x1000b93a                       ; 1000b80b
        ;   XREF to: 1000b93a (CONDITIONAL_JUMP)  ; LAB_1000b93a
    CMP dword ptr [ESP + 0x18],0x0      ; 1000b811
    JZ 0x1000b826                       ; 1000b816
        ;   XREF to: 1000b826 (CONDITIONAL_JUMP)  ; LAB_1000b826
    MOV EDX,dword ptr [ESP + 0x28]      ; 1000b818
    CMP byte ptr [EDX],0xa              ; 1000b81c
    JNZ 0x1000b826                      ; 1000b81f
        ;   XREF to: 1000b826 (CONDITIONAL_JUMP)  ; LAB_1000b826
    OR CL,0x4                           ; 1000b821
    JMP 0x1000b829                      ; 1000b824
        ;   XREF to: 1000b829 (UNCONDITIONAL_JUMP)  ; LAB_1000b829
    AND CL,0xfb                         ; 1000b826
        ;   Label: LAB_1000b826
    MOV EDI,dword ptr [ESP + 0x28]      ; 1000b829
        ;   Label: LAB_1000b829
    MOV byte ptr [EAX],CL               ; 1000b82d
    MOV ESI,EDI                         ; 1000b82f
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000b831
    ADD EAX,EDI                         ; 1000b835
    MOV dword ptr [ESP + 0x1c],EAX      ; 1000b837
    CMP EDI,EAX                         ; 1000b83b
    JNC 0x1000b932                      ; 1000b83d
        ;   XREF to: 1000b932 (CONDITIONAL_JUMP)  ; LAB_1000b932
    MOV AL,byte ptr [ESI]               ; 1000b843
        ;   Label: LAB_1000b843
    CMP AL,0x1a                         ; 1000b845
    JZ 0x1000b91f                       ; 1000b847
        ;   XREF to: 1000b91f (CONDITIONAL_JUMP)  ; LAB_1000b91f
    CMP AL,0xd                          ; 1000b84d
    JZ 0x1000b859                       ; 1000b84f
        ;   XREF to: 1000b859 (CONDITIONAL_JUMP)  ; LAB_1000b859
    INC ESI                             ; 1000b851
    MOV byte ptr [EDI],AL               ; 1000b852
    JMP 0x1000b912                      ; 1000b854
        ;   XREF to: 1000b912 (UNCONDITIONAL_JUMP)  ; LAB_1000b912
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000b859
        ;   Label: LAB_1000b859
    DEC ECX                             ; 1000b85d
    CMP ECX,ESI                         ; 1000b85e
    JBE 0x1000b87e                      ; 1000b860
        ;   XREF to: 1000b87e (CONDITIONAL_JUMP)  ; LAB_1000b87e
    LEA ECX,[ESI + 0x1]                 ; 1000b862
    CMP byte ptr [ECX],0xa              ; 1000b865
    JNZ 0x1000b875                      ; 1000b868
        ;   XREF to: 1000b875 (CONDITIONAL_JUMP)  ; LAB_1000b875
    ADD ESI,0x2                         ; 1000b86a
    MOV byte ptr [EDI],0xa              ; 1000b86d
    JMP 0x1000b912                      ; 1000b870
        ;   XREF to: 1000b912 (UNCONDITIONAL_JUMP)  ; LAB_1000b912
    MOV ESI,ECX                         ; 1000b875
        ;   Label: LAB_1000b875
    MOV byte ptr [EDI],AL               ; 1000b877
    JMP 0x1000b912                      ; 1000b879
        ;   XREF to: 1000b912 (UNCONDITIONAL_JUMP)  ; LAB_1000b912
    INC ESI                             ; 1000b87e
        ;   Label: LAB_1000b87e
    PUSH 0x0                            ; 1000b87f
    LEA EAX,[ESP + 0x1c]                ; 1000b881
    LEA ECX,[ESP + 0x17]                ; 1000b885
    PUSH EAX                            ; 1000b889
    MOV EDX,dword ptr [EBP]             ; 1000b88a | DAT_10241870
    MOV dword ptr [ESP + 0x1c],0x0      ; 1000b88d
    PUSH 0x1                            ; 1000b895
    MOV EAX,dword ptr [EDX + EBX*0x1]   ; 1000b897
    PUSH ECX                            ; 1000b89a
    PUSH EAX                            ; 1000b89b
    CALL dword ptr [0x1024225c]         ; 1000b89c | PTR_ReadFile_1024225c
    TEST EAX,EAX                        ; 1000b8a2
    JNZ 0x1000b8b0                      ; 1000b8a4
        ;   XREF to: 1000b8b0 (CONDITIONAL_JUMP)  ; LAB_1000b8b0
    CALL dword ptr [0x102421c8]         ; 1000b8a6 | PTR_GetLastError_102421c8
    MOV dword ptr [ESP + 0x14],EAX      ; 1000b8ac
    CMP dword ptr [ESP + 0x14],0x0      ; 1000b8b0
        ;   Label: LAB_1000b8b0
    JNZ 0x1000b90f                      ; 1000b8b5
        ;   XREF to: 1000b90f (CONDITIONAL_JUMP)  ; LAB_1000b90f
    CMP dword ptr [ESP + 0x18],0x0      ; 1000b8b7
    JZ 0x1000b90f                       ; 1000b8bc
        ;   XREF to: 1000b90f (CONDITIONAL_JUMP)  ; LAB_1000b90f
    MOV EAX,dword ptr [EBP]             ; 1000b8be | DAT_10241870
    TEST byte ptr [EAX + EBX*0x1 + 0x4],0x48 ; 1000b8c1
    JZ 0x1000b8e5                       ; 1000b8c6
        ;   XREF to: 1000b8e5 (CONDITIONAL_JUMP)  ; LAB_1000b8e5
    CMP byte ptr [ESP + 0x13],0xa       ; 1000b8c8
    JNZ 0x1000b8d4                      ; 1000b8cd
        ;   XREF to: 1000b8d4 (CONDITIONAL_JUMP)  ; LAB_1000b8d4
    MOV byte ptr [EDI],0xa              ; 1000b8cf
    JMP 0x1000b912                      ; 1000b8d2
        ;   XREF to: 1000b912 (UNCONDITIONAL_JUMP)  ; LAB_1000b912
    MOV byte ptr [EDI],0xd              ; 1000b8d4
        ;   Label: LAB_1000b8d4
    INC EDI                             ; 1000b8d7
    MOV AL,byte ptr [ESP + 0x13]        ; 1000b8d8
    MOV ECX,dword ptr [EBP]             ; 1000b8dc | DAT_10241870
    MOV byte ptr [ECX + EBX*0x1 + 0x5],AL ; 1000b8df
    JMP 0x1000b913                      ; 1000b8e3
        ;   XREF to: 1000b913 (UNCONDITIONAL_JUMP)  ; LAB_1000b913
    CMP dword ptr [ESP + 0x28],EDI      ; 1000b8e5
        ;   Label: LAB_1000b8e5
    JNZ 0x1000b8f7                      ; 1000b8e9
        ;   XREF to: 1000b8f7 (CONDITIONAL_JUMP)  ; LAB_1000b8f7
    CMP byte ptr [ESP + 0x13],0xa       ; 1000b8eb
    JNZ 0x1000b8f7                      ; 1000b8f0
        ;   XREF to: 1000b8f7 (CONDITIONAL_JUMP)  ; LAB_1000b8f7
    MOV byte ptr [EDI],0xa              ; 1000b8f2
    JMP 0x1000b912                      ; 1000b8f5
        ;   XREF to: 1000b912 (UNCONDITIONAL_JUMP)  ; LAB_1000b912
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000b8f7
        ;   Label: LAB_1000b8f7
    PUSH 0x1                            ; 1000b8fb
    PUSH -0x1                           ; 1000b8fd
    PUSH EAX                            ; 1000b8ff
    CALL __lseek_lk                     ; 1000b900
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; undefined __lseek_lk()
    ADD ESP,0xc                         ; 1000b905
    CMP byte ptr [ESP + 0x13],0xa       ; 1000b908
    JZ 0x1000b913                       ; 1000b90d
        ;   XREF to: 1000b913 (CONDITIONAL_JUMP)  ; LAB_1000b913
    MOV byte ptr [EDI],0xd              ; 1000b90f
        ;   Label: LAB_1000b90f
    INC EDI                             ; 1000b912
        ;   Label: LAB_1000b912
    CMP dword ptr [ESP + 0x1c],ESI      ; 1000b913
        ;   Label: LAB_1000b913
    JA 0x1000b843                       ; 1000b917
        ;   XREF to: 1000b843 (CONDITIONAL_JUMP)  ; LAB_1000b843
    JMP 0x1000b932                      ; 1000b91d
        ;   XREF to: 1000b932 (UNCONDITIONAL_JUMP)  ; LAB_1000b932
    MOV EAX,dword ptr [EBP]             ; 1000b91f | DAT_10241870
        ;   Label: LAB_1000b91f
    LEA EAX,[EAX + EBX*0x1 + 0x4]       ; 1000b922
    MOV CL,byte ptr [EAX]               ; 1000b926
    TEST CL,0x40                        ; 1000b928
    JNZ 0x1000b932                      ; 1000b92b
        ;   XREF to: 1000b932 (CONDITIONAL_JUMP)  ; LAB_1000b932
    OR CL,0x2                           ; 1000b92d
    MOV byte ptr [EAX],CL               ; 1000b930
    SUB EDI,dword ptr [ESP + 0x28]      ; 1000b932
        ;   Label: LAB_1000b932
    MOV dword ptr [ESP + 0x14],EDI      ; 1000b936
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000b93a
        ;   Label: LAB_1000b93a
    POP EBP                             ; 1000b93e
    POP EDI                             ; 1000b93f
    POP ESI                             ; 1000b940
    POP EBX                             ; 1000b941
    ADD ESP,0x10                        ; 1000b942
    RET                                 ; 1000b945
    XOR EAX,EAX                         ; 1000b946
        ;   Label: LAB_1000b946
    POP EBP                             ; 1000b948
    POP EDI                             ; 1000b949
    POP ESI                             ; 1000b94a
    POP EBX                             ; 1000b94b
    ADD ESP,0x10                        ; 1000b94c
    RET                                 ; 1000b94f

