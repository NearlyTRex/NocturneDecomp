; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00527c70(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049cc10 at 0049d2bc
;
; Referenced Globals:
;   undefined4 DAT_005bea94
;   undefined4 DAT_02dc216c
;   undefined4 DAT_02dc2170
;   undefined4 DAT_02dc217c
;
; Called Functions:
;   FUN_00525c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527c70
        ;   Label: FUN_00527c70
    PUSH ESI                            ; 00527c71
    PUSH EDI                            ; 00527c72
    PUSH EBP                            ; 00527c73
    SUB ESP,0xc                         ; 00527c74
    MOV EBX,0x2dc1edc                   ; 00527c77
    XOR EDX,EDX                         ; 00527c7c
    XOR EBP,EBP                         ; 00527c7e
    XOR ESI,ESI                         ; 00527c80
    MOV dword ptr [ESP],EDX             ; 00527c82
    MOV dword ptr [ESP + 0x8],EDX       ; 00527c85
    MOV dword ptr [ESP + 0x4],EDX       ; 00527c89
    IMUL EAX,ESI,0x168                  ; 00527c8d
        ;   Label: LAB_00527c8d
    CMP dword ptr [EAX + 0x2dc2014],0x1 ; 00527c93 | DAT_02dc217c
    JGE 0x00527d1f                      ; 00527c9a
        ;   XREF to: 00527d1f (CONDITIONAL_JUMP)  ; LAB_00527d1f
    INC ESI                             ; 00527ca0
        ;   Label: LAB_00527ca0
    ADD EBX,0x168                       ; 00527ca1
    CMP ESI,0x40                        ; 00527ca7
    JL 0x00527c8d                       ; 00527caa
        ;   XREF to: 00527c8d (CONDITIONAL_JUMP)  ; LAB_00527c8d
    MOV ECX,dword ptr [ESP + 0x20]      ; 00527cac
    TEST ECX,ECX                        ; 00527cb0
    JZ 0x00527cba                       ; 00527cb2
        ;   XREF to: 00527cba (CONDITIONAL_JUMP)  ; LAB_00527cba
    MOV EAX,dword ptr [ESP + 0x4]       ; 00527cb4
    MOV dword ptr [ECX],EAX             ; 00527cb8
    MOV EBX,dword ptr [ESP + 0x24]      ; 00527cba
        ;   Label: LAB_00527cba
    TEST EBX,EBX                        ; 00527cbe
    JZ 0x00527cc4                       ; 00527cc0
        ;   XREF to: 00527cc4 (CONDITIONAL_JUMP)  ; LAB_00527cc4
    MOV dword ptr [EBX],EBP             ; 00527cc2
    MOV ESI,dword ptr [ESP + 0x28]      ; 00527cc4
        ;   Label: LAB_00527cc4
    TEST ESI,ESI                        ; 00527cc8
    JZ 0x00527cd1                       ; 00527cca
        ;   XREF to: 00527cd1 (CONDITIONAL_JUMP)  ; LAB_00527cd1
    MOV EAX,dword ptr [ESP]             ; 00527ccc
    MOV dword ptr [ESI],EAX             ; 00527ccf
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00527cd1
        ;   Label: LAB_00527cd1
    TEST EDI,EDI                        ; 00527cd5
    JZ 0x00527cdf                       ; 00527cd7
        ;   XREF to: 00527cdf (CONDITIONAL_JUMP)  ; LAB_00527cdf
    MOV EAX,dword ptr [ESP + 0x8]       ; 00527cd9
    MOV dword ptr [EDI],EAX             ; 00527cdd
    CMP dword ptr [ESP + 0x30],0x0      ; 00527cdf
        ;   Label: LAB_00527cdf
    JZ 0x00527cfc                       ; 00527ce4
        ;   XREF to: 00527cfc (CONDITIONAL_JUMP)  ; LAB_00527cfc
    MOV EAX,dword ptr [ESP + 0x4]       ; 00527ce6
    MOV EDX,dword ptr [ESP]             ; 00527cea
    MOV EBX,0x40                        ; 00527ced
    ADD EAX,EDX                         ; 00527cf2
    SUB EBX,EAX                         ; 00527cf4
    MOV EAX,dword ptr [ESP + 0x30]      ; 00527cf6
    MOV dword ptr [EAX],EBX             ; 00527cfa
    MOV ECX,dword ptr [ESP + 0x34]      ; 00527cfc
        ;   Label: LAB_00527cfc
    TEST ECX,ECX                        ; 00527d00
    JZ 0x00527d17                       ; 00527d02
        ;   XREF to: 00527d17 (CONDITIONAL_JUMP)  ; LAB_00527d17
    MOV EBX,dword ptr [ESP + 0x8]       ; 00527d04
    MOV EAX,[0x005bea94]                ; 00527d08 | DAT_005bea94
    ADD EBP,EBX                         ; 00527d0d
    SUB EAX,EBP                         ; 00527d0f
    MOV dword ptr [ECX],EAX             ; 00527d11
    TEST EAX,EAX                        ; 00527d13
    JL 0x00527d6f                       ; 00527d15
        ;   XREF to: 00527d6f (CONDITIONAL_JUMP)  ; LAB_00527d6f
    ADD ESP,0xc                         ; 00527d17
        ;   Label: LAB_00527d17
    POP EBP                             ; 00527d1a
    POP EDI                             ; 00527d1b
    POP ESI                             ; 00527d1c
    POP EBX                             ; 00527d1d
    RET                                 ; 00527d1e
    CMP dword ptr [EAX + 0x2dc2008],0x0 ; 00527d1f | DAT_02dc2170
        ;   Label: LAB_00527d1f
    JNZ 0x00527d31                      ; 00527d26
        ;   XREF to: 00527d31 (CONDITIONAL_JUMP)  ; LAB_00527d31
    CMP dword ptr [EAX + 0x2dc2004],0x0 ; 00527d28 | DAT_02dc216c
    JZ 0x00527d4c                       ; 00527d2f
        ;   XREF to: 00527d4c (CONDITIONAL_JUMP)  ; LAB_00527d4c
    PUSH EBX                            ; 00527d31
        ;   Label: LAB_00527d31
    CALL FUN_00525c40                   ; 00527d32
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00525c40()
    IMUL EAX,dword ptr [EBX + 0x138]    ; 00527d37 | DAT_02dc217c
    INC dword ptr [ESP + 0x8]           ; 00527d3e
    ADD ESP,0x4                         ; 00527d42
    ADD EBP,EAX                         ; 00527d45
    JMP 0x00527ca0                      ; 00527d47
        ;   XREF to: 00527ca0 (UNCONDITIONAL_JUMP)  ; LAB_00527ca0
    INC dword ptr [ESP]                 ; 00527d4c
        ;   Label: LAB_00527d4c
    MOV EDI,0x2dc1edc                   ; 00527d4f
    ADD EDI,EAX                         ; 00527d54
    PUSH EDI                            ; 00527d56
    CALL FUN_00525c40                   ; 00527d57
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00525c40()
    IMUL EAX,dword ptr [EDI + 0x138]    ; 00527d5c | DAT_02dc217c
    ADD ESP,0x4                         ; 00527d63
    ADD dword ptr [ESP + 0x8],EAX       ; 00527d66
    JMP 0x00527ca0                      ; 00527d6a
        ;   XREF to: 00527ca0 (UNCONDITIONAL_JUMP)  ; LAB_00527ca0
    MOV dword ptr [ECX],0x0             ; 00527d6f
        ;   Label: LAB_00527d6f
    ADD ESP,0xc                         ; 00527d75
    POP EBP                             ; 00527d78
    POP EDI                             ; 00527d79
    POP ESI                             ; 00527d7a
    POP EBX                             ; 00527d7b
    RET                                 ; 00527d7c

