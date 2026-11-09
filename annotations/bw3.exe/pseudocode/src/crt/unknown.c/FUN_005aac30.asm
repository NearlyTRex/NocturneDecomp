; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005aac30(uint param_1,LPCVOID param_2,DWORD param_3)
;
;
; XREF[2]:
;   crt_stdio.c_fwrite_FUN_005a48e0 at 005a49a8
;   crt_unknown.c_FUN_005a9bc0 at 005a9c22
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005b3640 = 001b41c4
;   void* PTR_WriteFile_005b368c = 001b430e
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;   undefined4 DAT_00607b18
;   undefined4 DAT_00607b44
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005ab46c
;   crt_unknown.c_FUN_005ab920
;   SetFilePointer
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aac30
        ;   Label: crt_unknown.c_FUN_005aac30
    PUSH ESI                            ; 005aac31
    PUSH EDI                            ; 005aac32
    PUSH EBP                            ; 005aac33
    SUB ESP,0x4                         ; 005aac34
    MOV EBX,dword ptr [ESP + 0x18]      ; 005aac37
    MOV EDI,dword ptr [ESP + 0x20]      ; 005aac3b
    TEST EBX,EBX                        ; 005aac3f
    JL 0x005aac4b                       ; 005aac41
        ;   XREF to: 005aac4b (CONDITIONAL_JUMP)  ; LAB_005aac4b
    CMP EBX,dword ptr [0x00607b84]      ; 005aac43 | DAT_00607b84
    JBE 0x005aac5f                      ; 005aac49
        ;   XREF to: 005aac5f (CONDITIONAL_JUMP)  ; LAB_005aac5f
    PUSH 0x4                            ; 005aac4b
        ;   Label: LAB_005aac4b
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005aac4d
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005aac52
    ADD ESP,0x4                         ; 005aac57
    JMP 0x005aad32                      ; 005aac5a
        ;   XREF to: 005aad32 (UNCONDITIONAL_JUMP)  ; LAB_005aad32
    MOV ESI,dword ptr [0x00607bdc]      ; 005aac5f | DAT_00607bdc
        ;   Label: LAB_005aac5f
    PUSH EBX                            ; 005aac65
    MOV ESI,dword ptr [ESI + EBX*0x4]   ; 005aac66
    CALL dword ptr [0x006079a4]         ; 005aac69 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    ADD ESP,0x4                         ; 005aac6f
    PUSH EBX                            ; 005aac72
    CALL crt_unknown.c_FUN_005ab920     ; 005aac73
        ;   XREF to: 005ab920 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab920()
    ADD ESP,0x4                         ; 005aac78
    TEST AL,0x80                        ; 005aac7b
    JZ 0x005aaca9                       ; 005aac7d
        ;   XREF to: 005aaca9 (CONDITIONAL_JUMP)  ; LAB_005aaca9
    PUSH 0x2                            ; 005aac7f
    PUSH 0x0                            ; 005aac81
    PUSH 0x0                            ; 005aac83
    PUSH ESI                            ; 005aac85
    CALL dword ptr CS:[0x5b3640]        ; 005aac86 | PTR_SetFilePointer_005b3640
    CMP EAX,-0x1                        ; 005aac8d
    JNZ 0x005aaca9                      ; 005aac90
        ;   XREF to: 005aaca9 (CONDITIONAL_JUMP)  ; LAB_005aaca9
    PUSH EBX                            ; 005aac92
    CALL dword ptr [0x006079a8]         ; 005aac93 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005aac99
    CALL crt_unknown.c_FUN_005ab46c     ; 005aac9c
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    ADD ESP,0x4                         ; 005aaca1
    POP EBP                             ; 005aaca4
    POP EDI                             ; 005aaca5
    POP ESI                             ; 005aaca6
    POP EBX                             ; 005aaca7
    RET                                 ; 005aaca8
    CMP dword ptr [0x00607b44],0x0      ; 005aaca9 | DAT_00607b44
        ;   Label: LAB_005aaca9
    JZ 0x005aace6                       ; 005aacb0
        ;   XREF to: 005aace6 (CONDITIONAL_JUMP)  ; LAB_005aace6
    PUSH EBX                            ; 005aacb2
    CALL dword ptr [0x00607b18]         ; 005aacb3 | DAT_00607b18
    ADD ESP,0x4                         ; 005aacb9
    TEST EAX,EAX                        ; 005aacbc
    JZ 0x005aace6                       ; 005aacbe
        ;   XREF to: 005aace6 (CONDITIONAL_JUMP)  ; LAB_005aace6
    PUSH EDI                            ; 005aacc0
    MOV EDX,dword ptr [ESP + 0x20]      ; 005aacc1
    PUSH EDX                            ; 005aacc5
    PUSH EAX                            ; 005aacc6
    CALL dword ptr [0x00607b44]         ; 005aacc7 | DAT_00607b44
    ADD ESP,0xc                         ; 005aaccd
    PUSH EBX                            ; 005aacd0
    MOV ESI,EAX                         ; 005aacd1
    CALL dword ptr [0x006079a8]         ; 005aacd3 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005aacd9
    MOV EAX,ESI                         ; 005aacdc
    ADD ESP,0x4                         ; 005aacde
    POP EBP                             ; 005aace1
    POP EDI                             ; 005aace2
    POP ESI                             ; 005aace3
    POP EBX                             ; 005aace4
    RET                                 ; 005aace5
    PUSH 0x0                            ; 005aace6
        ;   Label: LAB_005aace6
    LEA EAX,[ESP + 0x4]                 ; 005aace8
    PUSH EAX                            ; 005aacec
    PUSH EDI                            ; 005aaced
    MOV EBP,dword ptr [ESP + 0x28]      ; 005aacee
    PUSH EBP                            ; 005aacf2
    PUSH ESI                            ; 005aacf3
    CALL dword ptr CS:[0x5b368c]        ; 005aacf4 | PTR_WriteFile_005b368c
    TEST EAX,EAX                        ; 005aacfb
    JNZ 0x005aad16                      ; 005aacfd
        ;   XREF to: 005aad16 (CONDITIONAL_JUMP)  ; LAB_005aad16
    PUSH EBX                            ; 005aacff
    CALL dword ptr [0x006079a8]         ; 005aad00 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005aad06
    CALL crt_unknown.c_FUN_005ab46c     ; 005aad09
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    ADD ESP,0x4                         ; 005aad0e
    POP EBP                             ; 005aad11
    POP EDI                             ; 005aad12
    POP ESI                             ; 005aad13
    POP EBX                             ; 005aad14
    RET                                 ; 005aad15
    CMP EDI,dword ptr [ESP]             ; 005aad16
        ;   Label: LAB_005aad16
    JZ 0x005aad25                       ; 005aad19
        ;   XREF to: 005aad25 (CONDITIONAL_JUMP)  ; LAB_005aad25
    PUSH 0xc                            ; 005aad1b
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005aad1d
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005aad22
    PUSH EBX                            ; 005aad25
        ;   Label: LAB_005aad25
    CALL dword ptr [0x006079a8]         ; 005aad26 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005aad2c
    MOV EAX,dword ptr [ESP]             ; 005aad2f
    ADD ESP,0x4                         ; 005aad32
        ;   Label: LAB_005aad32
    POP EBP                             ; 005aad35
    POP EDI                             ; 005aad36
    POP ESI                             ; 005aad37
    POP EBX                             ; 005aad38
    RET                                 ; 005aad39

