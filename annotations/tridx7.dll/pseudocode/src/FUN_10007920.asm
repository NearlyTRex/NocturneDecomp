; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10007920(void)
;
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
; undefined2       Stack[-0x12]:2  local_12
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_100056a0 at 1000576e
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241874
;   undefined4 DAT_10241970
;   void* PTR_GetStartupInfoA_10242188 = 00242516
;   void* PTR_SetHandleCount_102421fc = 002424e6
;   void* PTR_GetFileType_10242200 = 002424f8
;   void* PTR_GetStdHandle_10242204 = 00242506
;
; Called Functions:
;   __amsg_exit
;   FUN_10008830
;   GetFileType
;   GetStartupInfoA
;   GetStdHandle
;   SetHandleCount
;
; *****************************************************************************

section .text

    SUB ESP,0x44                        ; 10007920
        ;   Label: FUN_10007920
    PUSH EBX                            ; 10007923
    PUSH ESI                            ; 10007924
    PUSH EDI                            ; 10007925
    PUSH EBP                            ; 10007926
    PUSH 0x480                          ; 10007927
    CALL FUN_10008830                   ; 1000792c
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 10007931
    MOV ESI,EAX                         ; 10007934
    TEST ESI,ESI                        ; 10007936
    JNZ 0x10007944                      ; 10007938
        ;   XREF to: 10007944 (CONDITIONAL_JUMP)  ; LAB_10007944
    PUSH 0x1b                           ; 1000793a
    CALL __amsg_exit                    ; 1000793c
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void __amsg_exit(int param_1)
    ADD ESP,0x4                         ; 10007941
    LEA EAX,[ESI + 0x480]               ; 10007944
        ;   Label: LAB_10007944
    MOV dword ptr [0x10241870],ESI      ; 1000794a | DAT_10241870
    MOV dword ptr [0x10241970],0x20     ; 10007950 | DAT_10241970
    CMP EAX,ESI                         ; 1000795a
    JBE 0x10007986                      ; 1000795c
        ;   XREF to: 10007986 (CONDITIONAL_JUMP)  ; LAB_10007986
    XOR ECX,ECX                         ; 1000795e
    MOV EDX,0xa                         ; 10007960
    MOV byte ptr [ESI + 0x4],CL         ; 10007965
        ;   Label: LAB_10007965
    ADD ESI,0x24                        ; 10007968
    MOV dword ptr [ESI + -0x24],0xffffffff ; 1000796b
    MOV byte ptr [ESI + -0x1f],DL       ; 10007972
    MOV dword ptr [ESI + -0x1c],ECX     ; 10007975
    MOV EAX,[0x10241870]                ; 10007978 | DAT_10241870
    ADD EAX,0x480                       ; 1000797d
    CMP EAX,ESI                         ; 10007982
    JA 0x10007965                       ; 10007984
        ;   XREF to: 10007965 (CONDITIONAL_JUMP)  ; LAB_10007965
    LEA EAX,[ESP + 0x10]                ; 10007986
        ;   Label: LAB_10007986
    PUSH EAX                            ; 1000798a
    CALL dword ptr [0x10242188]         ; 1000798b | PTR_GetStartupInfoA_10242188
    CMP word ptr [ESP + 0x42],0x0       ; 10007991
    JZ 0x10007a71                       ; 10007997
        ;   XREF to: 10007a71 (CONDITIONAL_JUMP)  ; LAB_10007a71
    CMP dword ptr [ESP + 0x44],0x0      ; 1000799d
    JZ 0x10007a71                       ; 100079a2
        ;   XREF to: 10007a71 (CONDITIONAL_JUMP)  ; LAB_10007a71
    MOV EAX,dword ptr [ESP + 0x44]      ; 100079a8
    MOV EBP,dword ptr [EAX]             ; 100079ac
    LEA EDI,[EAX + 0x4]                 ; 100079ae
    CMP EBP,0x800                       ; 100079b1
    LEA EBX,[EDI + EBP*0x1]             ; 100079b7
    JL 0x100079c1                       ; 100079ba
        ;   XREF to: 100079c1 (CONDITIONAL_JUMP)  ; LAB_100079c1
    MOV EBP,0x800                       ; 100079bc
    CMP EBP,dword ptr [0x10241970]      ; 100079c1 | DAT_10241970
        ;   Label: LAB_100079c1
    JLE 0x10007a27                      ; 100079c7
        ;   XREF to: 10007a27 (CONDITIONAL_JUMP)  ; LAB_10007a27
    MOV ESI,0x10241874                  ; 100079c9 | DAT_10241874
    PUSH 0x480                          ; 100079ce
        ;   Label: LAB_100079ce
    CALL FUN_10008830                   ; 100079d3
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 100079d8
    TEST EAX,EAX                        ; 100079db
    JZ 0x10007a21                       ; 100079dd
        ;   XREF to: 10007a21 (CONDITIONAL_JUMP)  ; LAB_10007a21
    LEA ECX,[EAX + 0x480]               ; 100079df
    MOV dword ptr [ESI],EAX             ; 100079e5 | DAT_10241874
    ADD dword ptr [0x10241970],0x20     ; 100079e7 | DAT_10241970
    CMP ECX,EAX                         ; 100079ee
    JBE 0x10007a14                      ; 100079f0
        ;   XREF to: 10007a14 (CONDITIONAL_JUMP)  ; LAB_10007a14
    XOR ECX,ECX                         ; 100079f2
    MOV byte ptr [EAX + 0x4],CL         ; 100079f4
        ;   Label: LAB_100079f4
    ADD EAX,0x24                        ; 100079f7
    MOV dword ptr [EAX + -0x24],0xffffffff ; 100079fa
    MOV byte ptr [EAX + -0x1f],0xa      ; 10007a01
    MOV dword ptr [EAX + -0x1c],ECX     ; 10007a05
    MOV EDX,dword ptr [ESI]             ; 10007a08 | DAT_10241874
    ADD EDX,0x480                       ; 10007a0a
    CMP EDX,EAX                         ; 10007a10
    JA 0x100079f4                       ; 10007a12
        ;   XREF to: 100079f4 (CONDITIONAL_JUMP)  ; LAB_100079f4
    ADD ESI,0x4                         ; 10007a14
        ;   Label: LAB_10007a14
    CMP EBP,dword ptr [0x10241970]      ; 10007a17 | DAT_10241970
    JG 0x100079ce                       ; 10007a1d
        ;   XREF to: 100079ce (CONDITIONAL_JUMP)  ; LAB_100079ce
    JMP 0x10007a27                      ; 10007a1f
        ;   XREF to: 10007a27 (UNCONDITIONAL_JUMP)  ; LAB_10007a27
    MOV EBP,dword ptr [0x10241970]      ; 10007a21 | DAT_10241970
        ;   Label: LAB_10007a21
    XOR ESI,ESI                         ; 10007a27
        ;   Label: LAB_10007a27
    TEST EBP,EBP                        ; 10007a29
    JLE 0x10007a71                      ; 10007a2b
        ;   XREF to: 10007a71 (CONDITIONAL_JUMP)  ; LAB_10007a71
    MOV EAX,dword ptr [EBX]             ; 10007a2d
        ;   Label: LAB_10007a2d
    CMP EAX,-0x1                        ; 10007a2f
    JZ 0x10007a68                       ; 10007a32
        ;   XREF to: 10007a68 (CONDITIONAL_JUMP)  ; LAB_10007a68
    TEST byte ptr [EDI],0x1             ; 10007a34
    JZ 0x10007a68                       ; 10007a37
        ;   XREF to: 10007a68 (CONDITIONAL_JUMP)  ; LAB_10007a68
    PUSH EAX                            ; 10007a39
    CALL dword ptr [0x10242200]         ; 10007a3a | PTR_GetFileType_10242200
    TEST EAX,EAX                        ; 10007a40
    JZ 0x10007a68                       ; 10007a42
        ;   XREF to: 10007a68 (CONDITIONAL_JUMP)  ; LAB_10007a68
    MOV EAX,ESI                         ; 10007a44
    MOV ECX,ESI                         ; 10007a46
    AND EAX,0xffffffe7                  ; 10007a48
    AND ECX,0x1f                        ; 10007a4b
    SAR EAX,0x3                         ; 10007a4e
    SHL ECX,0x2                         ; 10007a51
    MOV EDX,dword ptr [EAX + 0x10241870] ; 10007a54 | DAT_10241870
    MOV EAX,dword ptr [EBX]             ; 10007a5a
    LEA ECX,[ECX + ECX*0x8]             ; 10007a5c
    ADD ECX,EDX                         ; 10007a5f
    MOV dword ptr [ECX],EAX             ; 10007a61
    MOV DL,byte ptr [EDI]               ; 10007a63
    MOV byte ptr [ECX + 0x4],DL         ; 10007a65
    INC ESI                             ; 10007a68
        ;   Label: LAB_10007a68
    INC EDI                             ; 10007a69
    ADD EBX,0x4                         ; 10007a6a
    CMP EBP,ESI                         ; 10007a6d
    JG 0x10007a2d                       ; 10007a6f
        ;   XREF to: 10007a2d (CONDITIONAL_JUMP)  ; LAB_10007a2d
    XOR ESI,ESI                         ; 10007a71
        ;   Label: LAB_10007a71
    XOR EDI,EDI                         ; 10007a73
    MOV EBX,dword ptr [0x10241870]      ; 10007a75 | DAT_10241870
        ;   Label: LAB_10007a75
    ADD EBX,ESI                         ; 10007a7b
    CMP dword ptr [EBX],-0x1            ; 10007a7d
    JNZ 0x10007ad9                      ; 10007a80
        ;   XREF to: 10007ad9 (CONDITIONAL_JUMP)  ; LAB_10007ad9
    MOV EAX,0xfffffff6                  ; 10007a82
    TEST ESI,ESI                        ; 10007a87
    MOV byte ptr [EBX + 0x4],0x81       ; 10007a89
    JZ 0x10007a9d                       ; 10007a8d
        ;   XREF to: 10007a9d (CONDITIONAL_JUMP)  ; LAB_10007a9d
    LEA EAX,[EDI + -0x1]                ; 10007a8f
    CMP EAX,0x1                         ; 10007a92
    MOV EAX,0xfffffff5                  ; 10007a95
    ADC EAX,-0x1                        ; 10007a9a
    PUSH EAX                            ; 10007a9d
        ;   Label: LAB_10007a9d
    CALL dword ptr [0x10242204]         ; 10007a9e | PTR_GetStdHandle_10242204
    CMP EAX,-0x1                        ; 10007aa4
    MOV EBP,EAX                         ; 10007aa7
    JZ 0x10007ad3                       ; 10007aa9
        ;   XREF to: 10007ad3 (CONDITIONAL_JUMP)  ; LAB_10007ad3
    PUSH EBP                            ; 10007aab
    CALL dword ptr [0x10242200]         ; 10007aac | PTR_GetFileType_10242200
    TEST EAX,EAX                        ; 10007ab2
    JZ 0x10007ad3                       ; 10007ab4
        ;   XREF to: 10007ad3 (CONDITIONAL_JUMP)  ; LAB_10007ad3
    AND EAX,0xff                        ; 10007ab6
    MOV dword ptr [EBX],EBP             ; 10007abb
    CMP EAX,0x2                         ; 10007abd
    JNZ 0x10007ac8                      ; 10007ac0
        ;   XREF to: 10007ac8 (CONDITIONAL_JUMP)  ; LAB_10007ac8
    OR byte ptr [EBX + 0x4],0x40        ; 10007ac2
    JMP 0x10007add                      ; 10007ac6
        ;   XREF to: 10007add (UNCONDITIONAL_JUMP)  ; LAB_10007add
    CMP EAX,0x3                         ; 10007ac8
        ;   Label: LAB_10007ac8
    JNZ 0x10007add                      ; 10007acb
        ;   XREF to: 10007add (CONDITIONAL_JUMP)  ; LAB_10007add
    OR byte ptr [EBX + 0x4],0x8         ; 10007acd
    JMP 0x10007add                      ; 10007ad1
        ;   XREF to: 10007add (UNCONDITIONAL_JUMP)  ; LAB_10007add
    OR byte ptr [EBX + 0x4],0x40        ; 10007ad3
        ;   Label: LAB_10007ad3
    JMP 0x10007add                      ; 10007ad7
        ;   XREF to: 10007add (UNCONDITIONAL_JUMP)  ; LAB_10007add
    OR byte ptr [EBX + 0x4],0x80        ; 10007ad9
        ;   Label: LAB_10007ad9
    ADD ESI,0x24                        ; 10007add
        ;   Label: LAB_10007add
    INC EDI                             ; 10007ae0
    CMP ESI,0x6c                        ; 10007ae1
    JL 0x10007a75                       ; 10007ae4
        ;   XREF to: 10007a75 (CONDITIONAL_JUMP)  ; LAB_10007a75
    MOV EAX,[0x10241970]                ; 10007ae6 | DAT_10241970
    PUSH EAX                            ; 10007aeb
    CALL dword ptr [0x102421fc]         ; 10007aec | PTR_SetHandleCount_102421fc
    POP EBP                             ; 10007af2
    POP EDI                             ; 10007af3
    POP ESI                             ; 10007af4
    POP EBX                             ; 10007af5
    ADD ESP,0x44                        ; 10007af6
    RET                                 ; 10007af9

