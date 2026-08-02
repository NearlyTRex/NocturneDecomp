; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00567c74(int param_1,int *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_00567560 at 00567774
;
; Referenced Globals:
;   undefined4 DAT_005c1b08
;
; Called Functions:
;   crt_unknown.c_FUN_00567540
;   crt_unknown.c_FUN_0056754c
;   crt_unknown.c_FUN_00567c2c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567c74
        ;   Label: crt_unknown.c_FUN_00567c74
    PUSH ESI                            ; 00567c75
    PUSH EDI                            ; 00567c76
    PUSH ES                             ; 00567c77
    PUSH EBP                            ; 00567c78
    SUB ESP,0x2c                        ; 00567c79
    MOV EBX,dword ptr [ESP + 0x44]      ; 00567c7c
    MOV EDI,dword ptr [ESP + 0x48]      ; 00567c80
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00567c84
    MOV EAX,dword ptr [EBP]             ; 00567c88
    CMP byte ptr [EAX],0x5e             ; 00567c8b
    SETZ DL                             ; 00567c8e
    AND EDX,0xff                        ; 00567c91
    MOV dword ptr [ESP + 0x24],EDX      ; 00567c97
    JZ 0x00567ca1                       ; 00567c9b
        ;   XREF to: 00567ca1 (CONDITIONAL_JUMP)  ; LAB_00567ca1
    INC EAX                             ; 00567c9d
    MOV dword ptr [EBP],EAX             ; 00567c9e
    MOV EAX,ESP                         ; 00567ca1
        ;   Label: LAB_00567ca1
    PUSH EAX                            ; 00567ca3
    MOV EDX,dword ptr [EBP]             ; 00567ca4
    PUSH EDX                            ; 00567ca7
    CALL crt_unknown.c_FUN_00567c2c     ; 00567ca8
        ;   XREF to: 00567c2c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567c2c()
    MOV dword ptr [EBP],EAX             ; 00567cad
    MOV CL,byte ptr [EBX + 0x10]        ; 00567cb0
    ADD ESP,0x8                         ; 00567cb3
    TEST CL,0x1                         ; 00567cb6
    JZ 0x00567cef                       ; 00567cb9
        ;   XREF to: 00567cef (CONDITIONAL_JUMP)  ; LAB_00567cef
    TEST CL,0x4                         ; 00567cbb
    JZ 0x00567ccc                       ; 00567cbe
        ;   XREF to: 00567ccc (CONDITIONAL_JUMP)  ; LAB_00567ccc
    MOV EBP,dword ptr [EDI]             ; 00567cc0
    ADD EBP,0x8                         ; 00567cc2
    MOV dword ptr [EDI],EBP             ; 00567cc5
    LES ESI,[EBP + -0x8]                ; 00567cc7
    JMP 0x00567cef                      ; 00567cca
        ;   XREF to: 00567cef (UNCONDITIONAL_JUMP)  ; LAB_00567cef
    TEST CL,0x8                         ; 00567ccc
        ;   Label: LAB_00567ccc
    JZ 0x00567ce1                       ; 00567ccf
        ;   XREF to: 00567ce1 (CONDITIONAL_JUMP)  ; LAB_00567ce1
    MOV ESI,dword ptr [EDI]             ; 00567cd1
    ADD ESI,0x4                         ; 00567cd3
    MOV AX,DS                           ; 00567cd6
    MOV dword ptr [EDI],ESI             ; 00567cd8
    MOV ES,AX                           ; 00567cda
    MOV ESI,dword ptr [ESI + -0x4]      ; 00567cdc
    JMP 0x00567cef                      ; 00567cdf
        ;   XREF to: 00567cef (UNCONDITIONAL_JUMP)  ; LAB_00567cef
    MOV ECX,dword ptr [EDI]             ; 00567ce1
        ;   Label: LAB_00567ce1
    ADD ECX,0x4                         ; 00567ce3
    MOV AX,DS                           ; 00567ce6
    MOV dword ptr [EDI],ECX             ; 00567ce8
    MOV ES,AX                           ; 00567cea
    MOV ESI,dword ptr [ECX + -0x4]      ; 00567cec
    MOV EDI,dword ptr [EBX + 0xc]       ; 00567cef
        ;   Label: LAB_00567cef
    XOR EBP,EBP                         ; 00567cf2
    TEST EDI,EDI                        ; 00567cf4
    JBE 0x00567d6e                      ; 00567cf6
        ;   XREF to: 00567d6e (CONDITIONAL_JUMP)  ; LAB_00567d6e
    PUSH EBX                            ; 00567cfc
        ;   Label: LAB_00567cfc
    CALL crt_unknown.c_FUN_00567540     ; 00567cfd
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567540()
    ADD ESP,0x4                         ; 00567d02
    MOV DL,byte ptr [EBX + 0x10]        ; 00567d05
    MOV dword ptr [ESP + 0x28],EAX      ; 00567d08
    TEST DL,0x2                         ; 00567d0c
    JNZ 0x00567d6e                      ; 00567d0f
        ;   XREF to: 00567d6e (CONDITIONAL_JUMP)  ; LAB_00567d6e
    MOV EDX,EAX                         ; 00567d11
    SAR EDX,0x3                         ; 00567d13
    MOV DL,byte ptr [ESP + EDX*0x1]     ; 00567d16
    AND EDX,0xff                        ; 00567d19
    MOV dword ptr [ESP + 0x20],EDX      ; 00567d1f
    MOV EDX,EAX                         ; 00567d23
    AND EDX,0x7                         ; 00567d25
    MOV DL,byte ptr [EDX + 0x5c1b08]    ; 00567d28 | DAT_005c1b08
    MOV ECX,dword ptr [ESP + 0x20]      ; 00567d2e
    AND EDX,0xff                        ; 00567d32
    TEST EDX,ECX                        ; 00567d38
    SETZ DL                             ; 00567d3a
    MOV ECX,dword ptr [ESP + 0x24]      ; 00567d3d
    AND EDX,0xff                        ; 00567d41
    CMP EDX,ECX                         ; 00567d47
    JZ 0x00567d57                       ; 00567d49
        ;   XREF to: 00567d57 (CONDITIONAL_JUMP)  ; LAB_00567d57
    PUSH EBX                            ; 00567d4b
    PUSH EAX                            ; 00567d4c
    CALL crt_unknown.c_FUN_0056754c     ; 00567d4d
        ;   XREF to: 0056754c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056754c()
    ADD ESP,0x8                         ; 00567d52
    JMP 0x00567d6e                      ; 00567d55
        ;   XREF to: 00567d6e (UNCONDITIONAL_JUMP)  ; LAB_00567d6e
    INC EBP                             ; 00567d57
        ;   Label: LAB_00567d57
    MOV DH,byte ptr [EBX + 0x10]        ; 00567d58
    DEC EDI                             ; 00567d5b
    TEST DH,0x1                         ; 00567d5c
    JZ 0x00567d6a                       ; 00567d5f
        ;   XREF to: 00567d6a (CONDITIONAL_JUMP)  ; LAB_00567d6a
    INC ESI                             ; 00567d61
    MOV AL,byte ptr [ESP + 0x28]        ; 00567d62
    MOV byte ptr ES:[ESI + -0x1],AL     ; 00567d66
    TEST EDI,EDI                        ; 00567d6a
        ;   Label: LAB_00567d6a
    JA 0x00567cfc                       ; 00567d6c
        ;   XREF to: 00567cfc (CONDITIONAL_JUMP)  ; LAB_00567cfc
    TEST byte ptr [EBX + 0x10],0x1      ; 00567d6e
        ;   Label: LAB_00567d6e
    JZ 0x00567d7c                       ; 00567d72
        ;   XREF to: 00567d7c (CONDITIONAL_JUMP)  ; LAB_00567d7c
    TEST EBP,EBP                        ; 00567d74
    JLE 0x00567d7c                      ; 00567d76
        ;   XREF to: 00567d7c (CONDITIONAL_JUMP)  ; LAB_00567d7c
    MOV byte ptr ES:[ESI],0x0           ; 00567d78
    MOV EAX,EBP                         ; 00567d7c
        ;   Label: LAB_00567d7c
    ADD ESP,0x2c                        ; 00567d7e
    POP EBP                             ; 00567d81
    POP ES                              ; 00567d82
    POP EDI                             ; 00567d83
    POP ESI                             ; 00567d84
    POP EBX                             ; 00567d85
    RET                                 ; 00567d86

