; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD FUN_005a9cf0(uint param_1,int param_2,DWORD param_3)
;
;
; XREF[3]:
;   FUN_005a3bc0 at 005a3c18
;   FUN_005a457c at 005a4607
;   FUN_005a9bc0 at 005a9c89
;
; Referenced Globals:
;   void* PTR_SetFilePointer_005b3640 = 001b41c4
;   void* PTR_FUN_006079a4 = 005a7f44
;   void* PTR_FUN_006079a8 = 005a7f44
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   FUN_005a7f44
;   FUN_005a92c0
;   FUN_005ab46c
;   FUN_005ab920
;   FUN_005ab978
;   SetFilePointer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9cf0
        ;   Label: FUN_005a9cf0
    PUSH ESI                            ; 005a9cf1
    PUSH EDI                            ; 005a9cf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a9cf3
    TEST EBX,EBX                        ; 005a9cf7
    JL 0x005a9d03                       ; 005a9cf9
        ;   XREF to: 005a9d03 (CONDITIONAL_JUMP)  ; LAB_005a9d03
    CMP EBX,dword ptr [0x00607b84]      ; 005a9cfb | DAT_00607b84
    JBE 0x005a9d16                      ; 005a9d01
        ;   XREF to: 005a9d16 (CONDITIONAL_JUMP)  ; LAB_005a9d16
    PUSH 0x4                            ; 005a9d03
        ;   Label: LAB_005a9d03
    CALL FUN_005a92c0                   ; 005a9d05
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a92c0()
    MOV EAX,0xffffffff                  ; 005a9d0a
    ADD ESP,0x4                         ; 005a9d0f
    POP EDI                             ; 005a9d12
    POP ESI                             ; 005a9d13
    POP EBX                             ; 005a9d14
    RET                                 ; 005a9d15
    PUSH EBX                            ; 005a9d16
        ;   Label: LAB_005a9d16
    CALL dword ptr [0x006079a4]         ; 005a9d17 | PTR_FUN_006079a4
    ADD ESP,0x4                         ; 005a9d1d
    PUSH EBX                            ; 005a9d20
    CALL FUN_005ab920                   ; 005a9d21
        ;   XREF to: 005ab920 (UNCONDITIONAL_CALL)  ; undefined FUN_005ab920()
    ADD ESP,0x4                         ; 005a9d26
    CMP dword ptr [ESP + 0x14],0x0      ; 005a9d29
    JLE 0x005a9d41                      ; 005a9d2e
        ;   XREF to: 005a9d41 (CONDITIONAL_JUMP)  ; LAB_005a9d41
    TEST AL,0x80                        ; 005a9d30
    JNZ 0x005a9d41                      ; 005a9d32
        ;   XREF to: 005a9d41 (CONDITIONAL_JUMP)  ; LAB_005a9d41
    OR AH,0x80                          ; 005a9d34
    PUSH EAX                            ; 005a9d37
    PUSH EBX                            ; 005a9d38
    CALL FUN_005ab978                   ; 005a9d39
        ;   XREF to: 005ab978 (UNCONDITIONAL_CALL)  ; undefined FUN_005ab978()
    ADD ESP,0x8                         ; 005a9d3e
    MOV ESI,dword ptr [0x00607bdc]      ; 005a9d41 | DAT_00607bdc
        ;   Label: LAB_005a9d41
    MOV EAX,dword ptr [ESI + EBX*0x4]   ; 005a9d47
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a9d4a
    PUSH ESI                            ; 005a9d4e
    PUSH 0x0                            ; 005a9d4f
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a9d51
    PUSH EDI                            ; 005a9d55
    PUSH EAX                            ; 005a9d56
    CALL dword ptr CS:[0x5b3640]        ; 005a9d57 | PTR_SetFilePointer_005b3640
    PUSH EBX                            ; 005a9d5e
    MOV ESI,EAX                         ; 005a9d5f
    CALL dword ptr [0x006079a8]         ; 005a9d61 | PTR_FUN_006079a8
    ADD ESP,0x4                         ; 005a9d67
    CMP ESI,-0x1                        ; 005a9d6a
    JNZ 0x005a9d74                      ; 005a9d6d
        ;   XREF to: 005a9d74 (CONDITIONAL_JUMP)  ; LAB_005a9d74
    CALL FUN_005ab46c                   ; 005a9d6f
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined FUN_005ab46c()
    MOV EAX,ESI                         ; 005a9d74
        ;   Label: LAB_005a9d74
    POP EDI                             ; 005a9d76
    POP ESI                             ; 005a9d77
    POP EBX                             ; 005a9d78
    RET                                 ; 005a9d79

