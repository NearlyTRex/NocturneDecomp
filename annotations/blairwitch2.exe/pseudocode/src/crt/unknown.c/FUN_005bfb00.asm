; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005bfb00(uint param_1,LPCVOID param_2,DWORD param_3)
;
;
; XREF[2]:
;   crt_stdio.c_fwrite_FUN_005b9690 at 005b9758
;   crt_unknown.c_FUN_005bea80 at 005beae2
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005c862c = 001c9182
;   void* PTR_WriteFile_005c8678 = 001c92cc
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;   undefined4 DAT_0061f414
;   undefined4 DAT_0061f440
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005c036c
;   crt_unknown.c_FUN_005c0820
;   SetFilePointer
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb00
        ;   Label: crt_unknown.c_FUN_005bfb00
    PUSH ESI                            ; 005bfb01
    PUSH EDI                            ; 005bfb02
    PUSH EBP                            ; 005bfb03
    SUB ESP,0x4                         ; 005bfb04
    MOV EBX,dword ptr [ESP + 0x18]      ; 005bfb07
    MOV EDI,dword ptr [ESP + 0x20]      ; 005bfb0b
    TEST EBX,EBX                        ; 005bfb0f
    JL 0x005bfb1b                       ; 005bfb11
        ;   XREF to: 005bfb1b (CONDITIONAL_JUMP)  ; LAB_005bfb1b
    CMP EBX,dword ptr [0x0061f480]      ; 005bfb13 | DAT_0061f480
    JBE 0x005bfb2f                      ; 005bfb19
        ;   XREF to: 005bfb2f (CONDITIONAL_JUMP)  ; LAB_005bfb2f
    PUSH 0x4                            ; 005bfb1b
        ;   Label: LAB_005bfb1b
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005bfb1d
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005bfb22
    ADD ESP,0x4                         ; 005bfb27
    JMP 0x005bfc02                      ; 005bfb2a
        ;   XREF to: 005bfc02 (UNCONDITIONAL_JUMP)  ; LAB_005bfc02
    MOV ESI,dword ptr [0x0061f4d8]      ; 005bfb2f | DAT_0061f4d8
        ;   Label: LAB_005bfb2f
    PUSH EBX                            ; 005bfb35
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 005bfb36
    CALL dword ptr [0x0061f2a8]         ; 005bfb39 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    ADD ESP,0x4                         ; 005bfb3f
    PUSH EBX                            ; 005bfb42
    CALL crt_unknown.c_FUN_005c0820     ; 005bfb43
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0820()
    ADD ESP,0x4                         ; 005bfb48
    TEST AL,0x80                        ; 005bfb4b
    JZ 0x005bfb79                       ; 005bfb4d
        ;   XREF to: 005bfb79 (CONDITIONAL_JUMP)  ; LAB_005bfb79
    PUSH 0x2                            ; 005bfb4f
    PUSH 0x0                            ; 005bfb51
    PUSH 0x0                            ; 005bfb53
    PUSH ESI                            ; 005bfb55
    CALL dword ptr CS:[0x5c862c]        ; 005bfb56 | PTR_SetFilePointer_005c862c
    CMP EAX,-0x1                        ; 005bfb5d
    JNZ 0x005bfb79                      ; 005bfb60
        ;   XREF to: 005bfb79 (CONDITIONAL_JUMP)  ; LAB_005bfb79
    PUSH EBX                            ; 005bfb62
    CALL dword ptr [0x0061f2ac]         ; 005bfb63 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005bfb69
    CALL crt_unknown.c_FUN_005c036c     ; 005bfb6c
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    ADD ESP,0x4                         ; 005bfb71
    POP EBP                             ; 005bfb74
    POP EDI                             ; 005bfb75
    POP ESI                             ; 005bfb76
    POP EBX                             ; 005bfb77
    RET                                 ; 005bfb78
    CMP dword ptr [0x0061f440],0x0      ; 005bfb79 | DAT_0061f440
        ;   Label: LAB_005bfb79
    JZ 0x005bfbb6                       ; 005bfb80
        ;   XREF to: 005bfbb6 (CONDITIONAL_JUMP)  ; LAB_005bfbb6
    PUSH EBX                            ; 005bfb82
    CALL dword ptr [0x0061f414]         ; 005bfb83 | DAT_0061f414
    ADD ESP,0x4                         ; 005bfb89
    TEST EAX,EAX                        ; 005bfb8c
    JZ 0x005bfbb6                       ; 005bfb8e
        ;   XREF to: 005bfbb6 (CONDITIONAL_JUMP)  ; LAB_005bfbb6
    PUSH EDI                            ; 005bfb90
    MOV EDX,dword ptr [ESP + 0x20]      ; 005bfb91
    PUSH EDX                            ; 005bfb95
    PUSH EAX                            ; 005bfb96
    CALL dword ptr [0x0061f440]         ; 005bfb97 | DAT_0061f440
    ADD ESP,0xc                         ; 005bfb9d
    PUSH EBX                            ; 005bfba0
    MOV ESI,EAX                         ; 005bfba1
    CALL dword ptr [0x0061f2ac]         ; 005bfba3 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005bfba9
    MOV EAX,ESI                         ; 005bfbac
    ADD ESP,0x4                         ; 005bfbae
    POP EBP                             ; 005bfbb1
    POP EDI                             ; 005bfbb2
    POP ESI                             ; 005bfbb3
    POP EBX                             ; 005bfbb4
    RET                                 ; 005bfbb5
    PUSH 0x0                            ; 005bfbb6
        ;   Label: LAB_005bfbb6
    LEA EAX,[ESP + 0x4]                 ; 005bfbb8
    PUSH EAX                            ; 005bfbbc
    PUSH EDI                            ; 005bfbbd
    MOV EBP,dword ptr [ESP + 0x28]      ; 005bfbbe
    PUSH EBP                            ; 005bfbc2
    PUSH ESI                            ; 005bfbc3
    CALL dword ptr CS:[0x5c8678]        ; 005bfbc4 | PTR_WriteFile_005c8678
    TEST EAX,EAX                        ; 005bfbcb
    JNZ 0x005bfbe6                      ; 005bfbcd
        ;   XREF to: 005bfbe6 (CONDITIONAL_JUMP)  ; LAB_005bfbe6
    PUSH EBX                            ; 005bfbcf
    CALL dword ptr [0x0061f2ac]         ; 005bfbd0 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005bfbd6
    CALL crt_unknown.c_FUN_005c036c     ; 005bfbd9
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    ADD ESP,0x4                         ; 005bfbde
    POP EBP                             ; 005bfbe1
    POP EDI                             ; 005bfbe2
    POP ESI                             ; 005bfbe3
    POP EBX                             ; 005bfbe4
    RET                                 ; 005bfbe5
    CMP EDI,dword ptr [ESP]             ; 005bfbe6
        ;   Label: LAB_005bfbe6
    JZ 0x005bfbf5                       ; 005bfbe9
        ;   XREF to: 005bfbf5 (CONDITIONAL_JUMP)  ; LAB_005bfbf5
    PUSH 0xc                            ; 005bfbeb
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005bfbed
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005bfbf2
    PUSH EBX                            ; 005bfbf5
        ;   Label: LAB_005bfbf5
    CALL dword ptr [0x0061f2ac]         ; 005bfbf6 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005bfbfc
    MOV EAX,dword ptr [ESP]             ; 005bfbff
    ADD ESP,0x4                         ; 005bfc02
        ;   Label: LAB_005bfc02
    POP EBP                             ; 005bfc05
    POP EDI                             ; 005bfc06
    POP ESI                             ; 005bfc07
    POP EBX                             ; 005bfc08
    RET                                 ; 005bfc09

