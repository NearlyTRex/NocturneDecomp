; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051bcc0(int param_1,undefined4 param_2,char *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0051bd60 at 0051bd8d
;
; Referenced Globals:
;   TerminatedCString s_d_005e9938
;   TerminatedCString s_s_d_005e993b
;
; Called Functions:
;   FUN_0051b6c0
;   FUN_005bfb40
;   FUN_005c1210
;   FUN_005c2cac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051bcc0
        ;   Label: FUN_0051bcc0
    PUSH ESI                            ; 0051bcc1
    PUSH EDI                            ; 0051bcc2
    PUSH EBP                            ; 0051bcc3
    SUB ESP,0x4                         ; 0051bcc4
    MOV EBP,dword ptr [ESP + 0x20]      ; 0051bcc7
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051bccb
    MOV EDI,EBP                         ; 0051bccf
    MOV ESI,0xffffffff                  ; 0051bcd1
    SUB ECX,ECX                         ; 0051bcd6
    DEC ECX                             ; 0051bcd8
    XOR EAX,EAX                         ; 0051bcd9
    SCASB.REPNE ES:EDI                  ; 0051bcdb
    NOT ECX                             ; 0051bcdd
    DEC ECX                             ; 0051bcdf
    MOV EBX,dword ptr [EBX + 0x1118]    ; 0051bce0
    MOV EDI,ECX                         ; 0051bce6
    TEST EBX,EBX                        ; 0051bce8
    JZ 0x0051bd05                       ; 0051bcea
        ;   XREF to: 0051bd05 (CONDITIONAL_JUMP)  ; LAB_0051bd05
    PUSH EDI                            ; 0051bcec
        ;   Label: LAB_0051bcec
    PUSH EBP                            ; 0051bced
    PUSH EBX                            ; 0051bcee
    CALL FUN_005c1210                   ; 0051bcef
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1210()
    ADD ESP,0xc                         ; 0051bcf4
    TEST EAX,EAX                        ; 0051bcf7
    JZ 0x0051bd38                       ; 0051bcf9
        ;   XREF to: 0051bd38 (CONDITIONAL_JUMP)  ; LAB_0051bd38
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0051bcfb
        ;   Label: LAB_0051bcfb
    TEST EBX,EBX                        ; 0051bd01
    JNZ 0x0051bcec                      ; 0051bd03
        ;   XREF to: 0051bcec (CONDITIONAL_JUMP)  ; LAB_0051bcec
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0051bd05
        ;   Label: LAB_0051bd05
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051bd09
    INC ESI                             ; 0051bd0d
        ;   Label: LAB_0051bd0d
    PUSH ESI                            ; 0051bd0e
    PUSH EBP                            ; 0051bd0f
    PUSH 0x5e993b                       ; 0051bd10 | = "%s%d"
    MOV ECX,dword ptr [ESP + 0x28]      ; 0051bd15
    PUSH ECX                            ; 0051bd19
    CALL FUN_005bfb40                   ; 0051bd1a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0051bd1f
    PUSH EBX                            ; 0051bd22
    PUSH EDI                            ; 0051bd23
    CALL FUN_0051b6c0                   ; 0051bd24
        ;   XREF to: 0051b6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6c0()
    ADD ESP,0x8                         ; 0051bd29
    TEST EAX,EAX                        ; 0051bd2c
    JNZ 0x0051bd0d                      ; 0051bd2e
        ;   XREF to: 0051bd0d (CONDITIONAL_JUMP)  ; LAB_0051bd0d
    ADD ESP,0x4                         ; 0051bd30
    POP EBP                             ; 0051bd33
    POP EDI                             ; 0051bd34
    POP ESI                             ; 0051bd35
    POP EBX                             ; 0051bd36
    RET                                 ; 0051bd37
    MOV EAX,ESP                         ; 0051bd38
        ;   Label: LAB_0051bd38
    PUSH EAX                            ; 0051bd3a
    PUSH 0x5e9938                       ; 0051bd3b | = "%d"
    LEA EAX,[EBX + EDI*0x1]             ; 0051bd40
    PUSH EAX                            ; 0051bd43
    CALL FUN_005c2cac                   ; 0051bd44
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; undefined FUN_005c2cac()
    ADD ESP,0xc                         ; 0051bd49
    CMP EAX,0x1                         ; 0051bd4c
    JNZ 0x0051bcfb                      ; 0051bd4f
        ;   XREF to: 0051bcfb (CONDITIONAL_JUMP)  ; LAB_0051bcfb
    MOV EDX,dword ptr [ESP]             ; 0051bd51
    CMP ESI,EDX                         ; 0051bd54
    JGE 0x0051bcfb                      ; 0051bd56
        ;   XREF to: 0051bcfb (CONDITIONAL_JUMP)  ; LAB_0051bcfb
    MOV ESI,EDX                         ; 0051bd58
    JMP 0x0051bcfb                      ; 0051bd5a
        ;   XREF to: 0051bcfb (UNCONDITIONAL_JUMP)  ; LAB_0051bcfb

