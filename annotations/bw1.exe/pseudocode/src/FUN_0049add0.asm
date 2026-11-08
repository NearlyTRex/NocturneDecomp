; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049add0(int *param_1)
;
;
; XREF[2]:
;   FUN_0049a8b0 at 0049a936
;   FUN_004cf5e0 at 004cfb88
;
; Referenced Globals:
;   undefined4 DAT_005dc690
;   undefined4 DAT_01c3f5c8
;   undefined4 DAT_01c3f5cc
;   undefined4 DAT_01c3f5d0
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c43544
;   undefined4 DAT_02c9be70
;
; Called Functions:
;   FUN_0049be50
;   FUN_0049bfb0
;   FUN_0049c100
;   FUN_0049cf60
;   FUN_0049d8a0
;   FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049add0
        ;   Label: FUN_0049add0
    PUSH ESI                            ; 0049add1
    PUSH EDI                            ; 0049add2
    PUSH EBP                            ; 0049add3
    MOV EBP,ESP                         ; 0049add4
    SUB ESP,0x4                         ; 0049add6
    AND ESP,0xfffffff8                  ; 0049add9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049addc
    PUSH EBX                            ; 0049addf
    CALL FUN_0049be50                   ; 0049ade0
        ;   XREF to: 0049be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0049be50()
    MOV EDX,dword ptr [EBX + 0x188]     ; 0049ade5
    ADD ESP,0x4                         ; 0049adeb
    TEST EDX,EDX                        ; 0049adee
    JNZ 0x0049ae07                      ; 0049adf0
        ;   XREF to: 0049ae07 (CONDITIONAL_JUMP)  ; LAB_0049ae07
    CMP dword ptr [0x02c9be70],0x0      ; 0049adf2 | DAT_02c9be70
        ;   Label: LAB_0049adf2
    JZ 0x0049ae2b                       ; 0049adf9
        ;   XREF to: 0049ae2b (CONDITIONAL_JUMP)  ; LAB_0049ae2b
    MOV EAX,0xffffffff                  ; 0049adfb
        ;   Label: LAB_0049adfb
    MOV ESP,EBP                         ; 0049ae00
        ;   Label: LAB_0049ae00
    POP EBP                             ; 0049ae02
    POP EDI                             ; 0049ae03
    POP ESI                             ; 0049ae04
    POP EBX                             ; 0049ae05
    RET                                 ; 0049ae06
    MOV ECX,dword ptr [EBX + 0x194]     ; 0049ae07
        ;   Label: LAB_0049ae07
    PUSH ECX                            ; 0049ae0d
    PUSH EBX                            ; 0049ae0e
    CALL FUN_0049c100                   ; 0049ae0f
        ;   XREF to: 0049c100 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c100()
    ADD ESP,0x8                         ; 0049ae14
    TEST EAX,EAX                        ; 0049ae17
    JNZ 0x0049ae23                      ; 0049ae19
        ;   XREF to: 0049ae23 (CONDITIONAL_JUMP)  ; LAB_0049ae23
    MOV dword ptr [EBX + 0x188],EAX     ; 0049ae1b
    JMP 0x0049adf2                      ; 0049ae21
        ;   XREF to: 0049adf2 (UNCONDITIONAL_JUMP)  ; LAB_0049adf2
    MOV EAX,dword ptr [EBX + 0x194]     ; 0049ae23
        ;   Label: LAB_0049ae23
    JMP 0x0049ae00                      ; 0049ae29
        ;   XREF to: 0049ae00 (UNCONDITIONAL_JUMP)  ; LAB_0049ae00
    PUSH EBX                            ; 0049ae2b
        ;   Label: LAB_0049ae2b
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049ae2c
    CALL dword ptr [EAX + 0x18]         ; 0049ae2f
    ADD ESP,0x4                         ; 0049ae32
    TEST EAX,EAX                        ; 0049ae35
    JL 0x0049adfb                       ; 0049ae37
        ;   XREF to: 0049adfb (CONDITIONAL_JUMP)  ; LAB_0049adfb
    PUSH EBX                            ; 0049ae39
    CALL FUN_0049be50                   ; 0049ae3a
        ;   XREF to: 0049be50 (UNCONDITIONAL_CALL)  ; undefined FUN_0049be50()
    MOV EDI,dword ptr [EBX + 0x58]      ; 0049ae3f
    ADD ESP,0x4                         ; 0049ae42
    TEST EDI,EDI                        ; 0049ae45
    JNZ 0x0049afbb                      ; 0049ae47
        ;   XREF to: 0049afbb (CONDITIONAL_JUMP)  ; LAB_0049afbb
    MOV EAX,dword ptr [EBX + 0x1f0]     ; 0049ae4d
    LEA ECX,[EBX + 0x1bc]               ; 0049ae53
    CMP EAX,0x1                         ; 0049ae59
    JNZ 0x0049afc7                      ; 0049ae5c
        ;   XREF to: 0049afc7 (CONDITIONAL_JUMP)  ; LAB_0049afc7
    MOV EAX,dword ptr [EBX + 0x198]     ; 0049ae62
    MOV dword ptr [EBX + 0x1bc],EAX     ; 0049ae68
    MOV EAX,dword ptr [EBX]             ; 0049ae6e
    MOV dword ptr [EBX + 0x1c0],EAX     ; 0049ae70
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0049ae76
    PUSH ECX                            ; 0049ae7c
    MOV dword ptr [EBX + 0x1c4],EAX     ; 0049ae7d
    CALL FUN_0049cf60                   ; 0049ae83
        ;   XREF to: 0049cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0049cf60()
    MOV EAX,dword ptr [EBX + 0x1bc]     ; 0049ae88
    ADD ESP,0x4                         ; 0049ae8e
        ;   Label: LAB_0049ae8e
    MOV dword ptr [EBX + 0x198],EAX     ; 0049ae91
    MOV ECX,dword ptr [EBX + 0x1a8]     ; 0049ae97
        ;   Label: LAB_0049ae97
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0049ae9d
    IMUL EAX,ECX                        ; 0049aea3
    MOV ESI,dword ptr [EBX + 0x198]     ; 0049aea6
    MOV EDI,dword ptr [EBX + 0x194]     ; 0049aeac
    ADD EAX,ESI                         ; 0049aeb2
    CMP EAX,EDI                         ; 0049aeb4
    JG 0x0049aebf                       ; 0049aeb6
        ;   XREF to: 0049aebf (CONDITIONAL_JUMP)  ; LAB_0049aebf
    DEC EAX                             ; 0049aeb8
    MOV dword ptr [EBX + 0x194],EAX     ; 0049aeb9
    MOV EDX,dword ptr [EBX + 0x198]     ; 0049aebf
        ;   Label: LAB_0049aebf
    CMP EDX,dword ptr [EBX + 0x194]     ; 0049aec5
    JLE 0x0049aed3                      ; 0049aecb
        ;   XREF to: 0049aed3 (CONDITIONAL_JUMP)  ; LAB_0049aed3
    MOV dword ptr [EBX + 0x194],EDX     ; 0049aecd
    CMP byte ptr [EBX + 0x5c],0x0       ; 0049aed3
        ;   Label: LAB_0049aed3
    JZ 0x0049af10                       ; 0049aed7
        ;   XREF to: 0049af10 (CONDITIONAL_JUMP)  ; LAB_0049af10
    LEA EAX,[EBX + 0x1f4]               ; 0049aed9
    PUSH EAX                            ; 0049aedf
    CALL FUN_0049d8a0                   ; 0049aee0
        ;   XREF to: 0049d8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d8a0()
    ADD ESP,0x4                         ; 0049aee5
    TEST EAX,EAX                        ; 0049aee8
    JZ 0x0049aef6                       ; 0049aeea
        ;   XREF to: 0049aef6 (CONDITIONAL_JUMP)  ; LAB_0049aef6
    MOV dword ptr [EBX + 0x188],0x1     ; 0049aeec
    MOV ECX,dword ptr [0x01c3f5d0]      ; 0049aef6 | DAT_01c3f5d0
        ;   Label: LAB_0049aef6
    LEA EAX,[EBX + 0x1f4]               ; 0049aefc
    CMP EAX,ECX                         ; 0049af02
    JNZ 0x0049af10                      ; 0049af04
        ;   XREF to: 0049af10 (CONDITIONAL_JUMP)  ; LAB_0049af10
    MOV dword ptr [EBX + 0x3bc],0x0     ; 0049af06
    CMP byte ptr [EBX + 0xc0],0x0       ; 0049af10
        ;   Label: LAB_0049af10
    JNZ 0x0049b027                      ; 0049af17
        ;   XREF to: 0049b027 (CONDITIONAL_JUMP)  ; LAB_0049b027
    TEST byte ptr [0x01c43544],0x1      ; 0049af1d | DAT_01c43544
        ;   Label: LAB_0049af1d
    JZ 0x0049afbb                       ; 0049af24
        ;   XREF to: 0049afbb (CONDITIONAL_JUMP)  ; LAB_0049afbb
    CMP dword ptr [0x01c3f5d0],0x0      ; 0049af2a | DAT_01c3f5d0
    JNZ 0x0049afbb                      ; 0049af31
        ;   XREF to: 0049afbb (CONDITIONAL_JUMP)  ; LAB_0049afbb
    MOV EDX,dword ptr [0x01c43540]      ; 0049af37 | DAT_01c43540
    PUSH EDX                            ; 0049af3d
    MOV ECX,dword ptr [0x01c4353c]      ; 0049af3e | DAT_01c4353c
    PUSH ECX                            ; 0049af44
    PUSH EBX                            ; 0049af45
    CALL FUN_0049bfb0                   ; 0049af46
        ;   XREF to: 0049bfb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049bfb0()
    ADD ESP,0xc                         ; 0049af4b
    MOV ESI,EAX                         ; 0049af4e
    TEST EAX,EAX                        ; 0049af50
    JL 0x0049afb5                       ; 0049af52
        ;   XREF to: 0049afb5 (CONDITIONAL_JUMP)  ; LAB_0049afb5
    MOV CL,byte ptr [0x01c43544]        ; 0049af54 | DAT_01c43544
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 0049af5a
    AND CL,0xfe                         ; 0049af64
    MOV dword ptr [EBX + 0x194],EAX     ; 0049af67
    MOV byte ptr [0x01c43544],CL        ; 0049af6d | DAT_01c43544
    CALL FUN_005b2420                   ; 0049af73
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EDI,dword ptr [0x01c3f5c8]      ; 0049af78 | DAT_01c3f5c8
    MOV EDX,EAX                         ; 0049af7e
    SUB EAX,EDI                         ; 0049af80
    TEST EAX,EAX                        ; 0049af82
    JLE 0x0049afaf                      ; 0049af84
        ;   XREF to: 0049afaf (CONDITIONAL_JUMP)  ; LAB_0049afaf
    MOV dword ptr [ESP],EAX             ; 0049af86
    FILD dword ptr [ESP]                ; 0049af89
    FCOMP double ptr [0x005dc690]       ; 0049af8c | DAT_005dc690
    FNSTSW AX                           ; 0049af92
    SAHF                                ; 0049af94
    JNC 0x0049afaf                      ; 0049af95
        ;   XREF to: 0049afaf (CONDITIONAL_JUMP)  ; LAB_0049afaf
    MOV ECX,dword ptr [0x01c3f5cc]      ; 0049af97 | DAT_01c3f5cc
    CMP ECX,dword ptr [EBX + 0x194]     ; 0049af9d
    JNZ 0x0049afaf                      ; 0049afa3
        ;   XREF to: 0049afaf (CONDITIONAL_JUMP)  ; LAB_0049afaf
    MOV dword ptr [EBX + 0x188],0x1     ; 0049afa5
    MOV dword ptr [0x01c3f5c8],EDX      ; 0049afaf | DAT_01c3f5c8
        ;   Label: LAB_0049afaf
    MOV dword ptr [0x01c3f5cc],ESI      ; 0049afb5 | DAT_01c3f5cc
        ;   Label: LAB_0049afb5
    MOV EAX,0xfffffffe                  ; 0049afbb
        ;   Label: LAB_0049afbb
    MOV ESP,EBP                         ; 0049afc0
    POP EBP                             ; 0049afc2
    POP EDI                             ; 0049afc3
    POP ESI                             ; 0049afc4
    POP EBX                             ; 0049afc5
    RET                                 ; 0049afc6
    CMP EAX,0x2                         ; 0049afc7
        ;   Label: LAB_0049afc7
    JNZ 0x0049ae97                      ; 0049afca
        ;   XREF to: 0049ae97 (CONDITIONAL_JUMP)  ; LAB_0049ae97
    MOV EDX,dword ptr [EBX + 0x198]     ; 0049afd0
    MOV ESI,dword ptr [EBX + 0x1a0]     ; 0049afd6
    MOV EAX,EDX                         ; 0049afdc
    SAR EDX,0x1f                        ; 0049afde
    IDIV ESI                            ; 0049afe1
    MOV dword ptr [EBX + 0x1bc],EAX     ; 0049afe3
    MOV EDI,dword ptr [EBX + 0x1a0]     ; 0049afe9
    MOV EAX,dword ptr [EBX]             ; 0049afef
    ADD EAX,EDI                         ; 0049aff1
    LEA EDX,[EAX + -0x1]                ; 0049aff3
    MOV EAX,EDX                         ; 0049aff6
    SAR EDX,0x1f                        ; 0049aff8
    IDIV EDI                            ; 0049affb
    MOV dword ptr [EBX + 0x1c0],EAX     ; 0049affd
    MOV EAX,dword ptr [EBX + 0x1a8]     ; 0049b003
    PUSH ECX                            ; 0049b009
    MOV dword ptr [EBX + 0x1c4],EAX     ; 0049b00a
    CALL FUN_0049cf60                   ; 0049b010
        ;   XREF to: 0049cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0049cf60()
    MOV EAX,dword ptr [EBX + 0x1bc]     ; 0049b015
    IMUL EAX,dword ptr [EBX + 0x1a0]    ; 0049b01b
    JMP 0x0049ae8e                      ; 0049b022
        ;   XREF to: 0049ae8e (UNCONDITIONAL_JUMP)  ; LAB_0049ae8e
    LEA ESI,[EBX + 0x2d8]               ; 0049b027
        ;   Label: LAB_0049b027
    PUSH ESI                            ; 0049b02d
    CALL FUN_0049d8a0                   ; 0049b02e
        ;   XREF to: 0049d8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d8a0()
    ADD ESP,0x4                         ; 0049b033
    TEST EAX,EAX                        ; 0049b036
    JNZ 0x0049adfb                      ; 0049b038
        ;   XREF to: 0049adfb (CONDITIONAL_JUMP)  ; LAB_0049adfb
    CMP ESI,dword ptr [0x01c3f5d0]      ; 0049b03e | DAT_01c3f5d0
    JNZ 0x0049af1d                      ; 0049b044
        ;   XREF to: 0049af1d (CONDITIONAL_JUMP)  ; LAB_0049af1d
    MOV dword ptr [EBX + 0x3bc],0x1     ; 0049b04a
    JMP 0x0049af1d                      ; 0049b054
        ;   XREF to: 0049af1d (UNCONDITIONAL_JUMP)  ; LAB_0049af1d

