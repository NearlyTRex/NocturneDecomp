; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_fwrite_FUN_005a48e0(undefined4 *param_1,uint param_2,int param_3,int *param_4)
;
;
; XREF[6]:
;   cockpit_pkbitmap.cpp_FUN_0050fe90 at 0050feed
;   cockpit_pkbitmap.cpp_FUN_00510230 at 00510267
;   core_setdir.cpp_FUN_00540c40 at 00540c97
;   engine_pcx.c_FUN_0050da60 at 0050db74
;   engine_pod.cpp_FUN_005149bc at 00514b31
;   support_trstream.cpp_FUN_005748e0 at 00574904
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_stdio.c_fputc_FUN_005a5d70
;   crt_unknown.c_FUN_005a7f3c
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a9310
;   crt_unknown.c_FUN_005a9bc0
;   crt_unknown.c_FUN_005aac30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a48e0
        ;   Label: crt_stdio.c_fwrite_FUN_005a48e0
    PUSH ESI                            ; 005a48e1
    PUSH EDI                            ; 005a48e2
    PUSH EBP                            ; 005a48e3
    SUB ESP,0x10                        ; 005a48e4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005a48e7
    MOV EBX,dword ptr [ESP + 0x30]      ; 005a48eb
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a48ef
    PUSH EDX                            ; 005a48f2
    CALL dword ptr [0x006079a4]         ; 005a48f3 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV AH,byte ptr [EBX + 0xc]         ; 005a48f9
    ADD ESP,0x4                         ; 005a48fc
    TEST AH,0x2                         ; 005a48ff
    JNZ 0x005a492b                      ; 005a4902
        ;   XREF to: 005a492b (CONDITIONAL_JUMP)  ; LAB_005a492b
    PUSH 0x4                            ; 005a4904
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a4906
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005a490b
    MOV AH,byte ptr [EBX + 0xc]         ; 005a490e
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a4911
    OR AH,0x20                          ; 005a4914
    PUSH EDX                            ; 005a4917
    MOV byte ptr [EBX + 0xc],AH         ; 005a4918
    CALL dword ptr [0x006079a8]         ; 005a491b | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a4921
    XOR EAX,EAX                         ; 005a4924
    JMP 0x005a4b11                      ; 005a4926
        ;   XREF to: 005a4b11 (UNCONDITIONAL_JUMP)  ; LAB_005a4b11
    IMUL EDI,dword ptr [ESP + 0x28]     ; 005a492b
        ;   Label: LAB_005a492b
    TEST EDI,EDI                        ; 005a4930
    JNZ 0x005a494b                      ; 005a4932
        ;   XREF to: 005a494b (CONDITIONAL_JUMP)  ; LAB_005a494b
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a4934
    PUSH EAX                            ; 005a4937
    CALL dword ptr [0x006079a8]         ; 005a4938 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a493e
    MOV EAX,EDI                         ; 005a4941
    ADD ESP,0x10                        ; 005a4943
    POP EBP                             ; 005a4946
    POP EDI                             ; 005a4947
    POP ESI                             ; 005a4948
    POP EBX                             ; 005a4949
    RET                                 ; 005a494a
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a494b
        ;   Label: LAB_005a494b
    CMP dword ptr [EAX + 0x8],0x0       ; 005a494e
    JNZ 0x005a495d                      ; 005a4952
        ;   XREF to: 005a495d (CONDITIONAL_JUMP)  ; LAB_005a495d
    PUSH EBX                            ; 005a4954
    CALL crt_unknown.c_FUN_005a9310     ; 005a4955
        ;   XREF to: 005a9310 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9310()
    ADD ESP,0x4                         ; 005a495a
    MOV EAX,dword ptr [EBX + 0xc]       ; 005a495d
        ;   Label: LAB_005a495d
    MOV DL,byte ptr [EBX + 0xc]         ; 005a4960
    XOR EBP,EBP                         ; 005a4963
    AND EAX,0x30                        ; 005a4965
    AND DL,0xcf                         ; 005a4968
    MOV dword ptr [ESP + 0x8],EBP       ; 005a496b
    MOV dword ptr [ESP],EAX             ; 005a496f
    MOV byte ptr [EBX + 0xc],DL         ; 005a4972
    TEST DL,0x40                        ; 005a4975
    JZ 0x005a4a63                       ; 005a4978
        ;   XREF to: 005a4a63 (CONDITIONAL_JUMP)  ; LAB_005a4a63
    MOV dword ptr [ESP + 0xc],EDI       ; 005a497e
    CMP dword ptr [EBX + 0x4],0x0       ; 005a4982
        ;   Label: LAB_005a4982
    JNZ 0x005a49d2                      ; 005a4986
        ;   XREF to: 005a49d2 (CONDITIONAL_JUMP)  ; LAB_005a49d2
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a4988
    CMP EAX,dword ptr [EBX + 0x14]      ; 005a498c
    JC 0x005a49d2                       ; 005a498f
        ;   XREF to: 005a49d2 (CONDITIONAL_JUMP)  ; LAB_005a49d2
    XOR AL,AL                           ; 005a4991
    AND AH,0xfe                         ; 005a4993
    TEST EAX,EAX                        ; 005a4996
    JNZ 0x005a499e                      ; 005a4998
        ;   XREF to: 005a499e (CONDITIONAL_JUMP)  ; LAB_005a499e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a499a
    PUSH EAX                            ; 005a499e
        ;   Label: LAB_005a499e
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a499f
    PUSH ESI                            ; 005a49a3
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a49a4
    PUSH EDI                            ; 005a49a7
    CALL crt_unknown.c_FUN_005aac30     ; 005a49a8
        ;   XREF to: 005aac30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aac30()
    ADD ESP,0xc                         ; 005a49ad
    MOV EBP,EAX                         ; 005a49b0
    CMP EAX,-0x1                        ; 005a49b2
    JZ 0x005a49cc                       ; 005a49b5
        ;   XREF to: 005a49cc (CONDITIONAL_JUMP)  ; LAB_005a49cc
    TEST EAX,EAX                        ; 005a49b7
    JNZ 0x005a4a30                      ; 005a49b9
        ;   XREF to: 005a4a30 (CONDITIONAL_JUMP)  ; LAB_005a4a30
    CALL dword ptr [0x006079a0]         ; 005a49bf | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
    MOV dword ptr [EAX + 0x4],0xc       ; 005a49c5
    OR byte ptr [EBX + 0xc],0x20        ; 005a49cc
        ;   Label: LAB_005a49cc
    JMP 0x005a4a30                      ; 005a49d0
        ;   XREF to: 005a4a30 (UNCONDITIONAL_JUMP)  ; LAB_005a4a30
    MOV EBP,dword ptr [EBX + 0x14]      ; 005a49d2
        ;   Label: LAB_005a49d2
    MOV ESI,dword ptr [EBX + 0x4]       ; 005a49d5
    MOV EDI,dword ptr [ESP + 0xc]       ; 005a49d8
    SUB EBP,ESI                         ; 005a49dc
    CMP EBP,EDI                         ; 005a49de
    JBE 0x005a49e4                      ; 005a49e0
        ;   XREF to: 005a49e4 (CONDITIONAL_JUMP)  ; LAB_005a49e4
    MOV EBP,EDI                         ; 005a49e2
    MOV ESI,dword ptr [ESP + 0x24]      ; 005a49e4
        ;   Label: LAB_005a49e4
    MOV ECX,EBP                         ; 005a49e8
    MOV EDI,dword ptr [EBX]             ; 005a49ea
    PUSH ES                             ; 005a49ec
    MOV AX,DS                           ; 005a49ed
    MOV ES,AX                           ; 005a49ef
    PUSH EDI                            ; 005a49f1
    MOV EAX,ECX                         ; 005a49f2
    SHR ECX,0x2                         ; 005a49f4
    MOVSD.REP ES:EDI,ESI                ; 005a49f7
    MOV CL,AL                           ; 005a49f9
    AND CL,0x3                          ; 005a49fb
    MOVSB.REP ES:EDI,ESI                ; 005a49fe
    POP EDI                             ; 005a4a00
    POP ES                              ; 005a4a01
    MOV EAX,dword ptr [EBX]             ; 005a4a02
    MOV EDX,dword ptr [EBX + 0x4]       ; 005a4a04
    MOV CH,byte ptr [EBX + 0xd]         ; 005a4a07
    ADD EAX,EBP                         ; 005a4a0a
    ADD EDX,EBP                         ; 005a4a0c
    MOV dword ptr [EBX],EAX             ; 005a4a0e
    OR CH,0x10                          ; 005a4a10
    MOV dword ptr [EBX + 0x4],EDX       ; 005a4a13
    MOV byte ptr [EBX + 0xd],CH         ; 005a4a16
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a4a19
    CMP EAX,dword ptr [EBX + 0x14]      ; 005a4a1c
    JZ 0x005a4a27                       ; 005a4a1f
        ;   XREF to: 005a4a27 (CONDITIONAL_JUMP)  ; LAB_005a4a27
    TEST byte ptr [EBX + 0xd],0x4       ; 005a4a21
    JZ 0x005a4a30                       ; 005a4a25
        ;   XREF to: 005a4a30 (CONDITIONAL_JUMP)  ; LAB_005a4a30
    PUSH EBX                            ; 005a4a27
        ;   Label: LAB_005a4a27
    CALL crt_unknown.c_FUN_005a9bc0     ; 005a4a28
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9bc0()
    ADD ESP,0x4                         ; 005a4a2d
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a4a30
        ;   Label: LAB_005a4a30
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a4a34
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a4a38
    ADD EAX,EBP                         ; 005a4a3c
    ADD EDX,EBP                         ; 005a4a3e
    MOV dword ptr [ESP + 0x24],EAX      ; 005a4a40
    MOV dword ptr [ESP + 0x8],EDX       ; 005a4a44
    SUB ECX,EBP                         ; 005a4a48
    MOV dword ptr [ESP + 0xc],ECX       ; 005a4a4a
    JZ 0x005a4ae3                       ; 005a4a4e
        ;   XREF to: 005a4ae3 (CONDITIONAL_JUMP)  ; LAB_005a4ae3
    TEST byte ptr [EBX + 0xc],0x20      ; 005a4a54
    JZ 0x005a4982                       ; 005a4a58
        ;   XREF to: 005a4982 (CONDITIONAL_JUMP)  ; LAB_005a4982
    JMP 0x005a4ae3                      ; 005a4a5e
        ;   XREF to: 005a4ae3 (UNCONDITIONAL_JUMP)  ; LAB_005a4ae3
    MOV CL,byte ptr [EBX + 0xd]         ; 005a4a63
        ;   Label: LAB_005a4a63
    XOR ESI,ESI                         ; 005a4a66
    TEST CL,0x4                         ; 005a4a68
    JZ 0x005a4a81                       ; 005a4a6b
        ;   XREF to: 005a4a81 (CONDITIONAL_JUMP)  ; LAB_005a4a81
    MOV CH,CL                           ; 005a4a6d
    AND CH,0xfa                         ; 005a4a6f
    MOV AL,CH                           ; 005a4a72
    MOV byte ptr [EBX + 0xd],CH         ; 005a4a74
    OR AL,0x1                           ; 005a4a77
    MOV ESI,0x1                         ; 005a4a79
    MOV byte ptr [EBX + 0xd],AL         ; 005a4a7e
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a4a81
        ;   Label: LAB_005a4a81
    MOV EBP,dword ptr [EAX + 0xc]       ; 005a4a84
    MOV dword ptr [ESP + 0x4],EBP       ; 005a4a87
    MOV dword ptr [EAX + 0xc],0x1       ; 005a4a8b
    MOV EBP,dword ptr [ESP + 0x24]      ; 005a4a92
    XOR EAX,EAX                         ; 005a4a96
        ;   Label: LAB_005a4a96
    PUSH EBX                            ; 005a4a98
    MOV AL,byte ptr [EBP]               ; 005a4a99
    PUSH EAX                            ; 005a4a9c
    INC EBP                             ; 005a4a9d
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 005a4a9e
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005a5d70()
    MOV DL,byte ptr [EBX + 0xc]         ; 005a4aa3
    ADD ESP,0x8                         ; 005a4aa6
    TEST DL,0x30                        ; 005a4aa9
    JNZ 0x005a4abb                      ; 005a4aac
        ;   XREF to: 005a4abb (CONDITIONAL_JUMP)  ; LAB_005a4abb
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a4aae
    INC ECX                             ; 005a4ab2
    MOV dword ptr [ESP + 0x8],ECX       ; 005a4ab3
    CMP EDI,ECX                         ; 005a4ab7
    JNZ 0x005a4a96                      ; 005a4ab9
        ;   XREF to: 005a4a96 (CONDITIONAL_JUMP)  ; LAB_005a4a96
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a4abb
        ;   Label: LAB_005a4abb
    MOV EDI,dword ptr [ESP + 0x4]       ; 005a4abe
    MOV dword ptr [EAX + 0xc],EDI       ; 005a4ac2
    TEST ESI,ESI                        ; 005a4ac5
    JZ 0x005a4ae3                       ; 005a4ac7
        ;   XREF to: 005a4ae3 (CONDITIONAL_JUMP)  ; LAB_005a4ae3
    MOV DH,byte ptr [EBX + 0xd]         ; 005a4ac9
    AND DH,0xfa                         ; 005a4acc
    MOV CL,DH                           ; 005a4acf
    MOV byte ptr [EBX + 0xd],DH         ; 005a4ad1
    OR CL,0x4                           ; 005a4ad4
    PUSH EBX                            ; 005a4ad7
    MOV byte ptr [EBX + 0xd],CL         ; 005a4ad8
    CALL crt_unknown.c_FUN_005a9bc0     ; 005a4adb
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9bc0()
    ADD ESP,0x4                         ; 005a4ae0
    TEST byte ptr [EBX + 0xc],0x20      ; 005a4ae3
        ;   Label: LAB_005a4ae3
    JZ 0x005a4aef                       ; 005a4ae7
        ;   XREF to: 005a4aef (CONDITIONAL_JUMP)  ; LAB_005a4aef
    XOR EDI,EDI                         ; 005a4ae9
    MOV dword ptr [ESP + 0x8],EDI       ; 005a4aeb
    MOV EAX,dword ptr [ESP]             ; 005a4aef
        ;   Label: LAB_005a4aef
    MOV EBP,dword ptr [EBX + 0xc]       ; 005a4af2
    OR EBP,EAX                          ; 005a4af5
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a4af7
    PUSH EAX                            ; 005a4afa
    MOV dword ptr [EBX + 0xc],EBP       ; 005a4afb
    CALL dword ptr [0x006079a8]         ; 005a4afe | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a4b04
    XOR EDX,EDX                         ; 005a4b07
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a4b09
    DIV dword ptr [ESP + 0x28]          ; 005a4b0d
    ADD ESP,0x10                        ; 005a4b11
        ;   Label: LAB_005a4b11
    POP EBP                             ; 005a4b14
    POP EDI                             ; 005a4b15
    POP ESI                             ; 005a4b16
    POP EBX                             ; 005a4b17
    RET                                 ; 005a4b18

