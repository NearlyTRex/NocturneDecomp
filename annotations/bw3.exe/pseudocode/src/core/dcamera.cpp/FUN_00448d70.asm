; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448d70(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00448ca0 at 00448cca
;   FUN_004b7de0 at 004b7e7d
;   FUN_005353b0 at 005353ba
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005b9b86
;   TerminatedCString s_CDemonCamera_init_Unable_005b9b9a
;   TerminatedCString s_core_dcamera_cpp_005b9bcc
;   TerminatedCString s_CDemonCamera_init_Unable_005b9be0
;   undefined4 DAT_013405b0
;   undefined4 DAT_0149e6fc
;   undefined4 DAT_0149e700
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00448f30
;   FUN_004e4330
;   FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448d70
        ;   Label: FUN_00448d70
    PUSH ESI                            ; 00448d71
    PUSH EBP                            ; 00448d72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00448d73
    MOV ESI,dword ptr [ESP + 0x14]      ; 00448d77
    PUSH EBX                            ; 00448d7b
    CALL FUN_00448f30                   ; 00448d7c
        ;   XREF to: 00448f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00448f30()
    LEA EDX,[ESI*0x4 + 0x0]             ; 00448d81
    MOV ECX,0x3                         ; 00448d88
    MOV EAX,EDX                         ; 00448d8d
    SAR EDX,0x1f                        ; 00448d8f
    IDIV ECX                            ; 00448d92
    ADD ESP,0x4                         ; 00448d94
    MOV dword ptr [0x0149e700],ESI      ; 00448d97 | DAT_0149e700
    MOV [0x0149e6fc],EAX                ; 00448d9d | DAT_0149e6fc
    CMP ESI,0x1e0                       ; 00448da2
    JLE 0x00448daf                      ; 00448da8
        ;   XREF to: 00448daf (CONDITIONAL_JUMP)  ; LAB_00448daf
    MOV ESI,0x1e0                       ; 00448daa
    MOV dword ptr [EBX + 0x148],ESI     ; 00448daf
        ;   Label: LAB_00448daf
    LEA EDX,[ESI*0x4 + 0x0]             ; 00448db5
    MOV ECX,0x3                         ; 00448dbc
    MOV EAX,EDX                         ; 00448dc1
    SAR EDX,0x1f                        ; 00448dc3
    IDIV ECX                            ; 00448dc6
    MOV dword ptr [EBX + 0x14c],0x1     ; 00448dc8
    MOV dword ptr [EBX + 0x144],EAX     ; 00448dd2
    MOV EAX,dword ptr [EBX + 0x144]     ; 00448dd8
    XOR EDX,EDX                         ; 00448dde
    MOV dword ptr [EBX + 0x150],EAX     ; 00448de0
    MOV dword ptr [0x013405b0],EDX      ; 00448de6 | DAT_013405b0
    MOV EAX,dword ptr [EBX + 0x148]     ; 00448dec
    MOV ECX,dword ptr [EBX + 0x150]     ; 00448df2
    MOV dword ptr [EBX + 0x154],EAX     ; 00448df8
    CMP ECX,0x140                       ; 00448dfe
    JLE 0x00448e5c                      ; 00448e04
        ;   XREF to: 00448e5c (CONDITIONAL_JUMP)  ; LAB_00448e5c
    PUSH EDI                            ; 00448e06
    MOV ECX,0x2                         ; 00448e07
    MOV EAX,dword ptr [EBX + 0x150]     ; 00448e0c
        ;   Label: LAB_00448e0c
    MOV EDX,EAX                         ; 00448e12
    SAR EDX,0x1f                        ; 00448e14
    IDIV ECX                            ; 00448e17
    MOV dword ptr [EBX + 0x150],EAX     ; 00448e19
    MOV EAX,dword ptr [EBX + 0x154]     ; 00448e1f
    MOV EDX,EAX                         ; 00448e25
    SAR EDX,0x1f                        ; 00448e27
    IDIV ECX                            ; 00448e2a
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00448e2c
    MOV EDI,dword ptr [0x013405b0]      ; 00448e32 | DAT_013405b0
    ADD ESI,ESI                         ; 00448e38
    INC EDI                             ; 00448e3a
    MOV dword ptr [EBX + 0x14c],ESI     ; 00448e3b
    MOV dword ptr [0x013405b0],EDI      ; 00448e41 | DAT_013405b0
    MOV EBP,dword ptr [EBX + 0x150]     ; 00448e47
    MOV dword ptr [EBX + 0x154],EAX     ; 00448e4d
    CMP EBP,0x140                       ; 00448e53
    JG 0x00448e0c                       ; 00448e59
        ;   XREF to: 00448e0c (CONDITIONAL_JUMP)  ; LAB_00448e0c
    POP EDI                             ; 00448e5b
    MOV EDX,dword ptr [EBX + 0x144]     ; 00448e5c
        ;   Label: LAB_00448e5c
    IMUL EDX,dword ptr [EBX + 0x148]    ; 00448e62
    LEA EAX,[EDX*0x4 + 0x0]             ; 00448e69
    ADD EAX,0x1010                      ; 00448e70
    PUSH EAX                            ; 00448e75
    CALL FUN_005a3650                   ; 00448e76
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 00448e7b
    MOV dword ptr [EBX + 0x160],EAX     ; 00448e7e
    TEST EAX,EAX                        ; 00448e84
    JNZ 0x00448eab                      ; 00448e86
        ;   XREF to: 00448eab (CONDITIONAL_JUMP)  ; LAB_00448eab
    MOV ECX,0x5b9b86                    ; 00448e88 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x24a                       ; 00448e8d
    PUSH 0x5b9b9a                       ; 00448e92 | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x01d71de0],ECX      ; 00448e97 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00448e9d | DAT_01d71de4
    CALL FUN_004e4330                   ; 00448ea3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00448ea8
    MOV EDX,dword ptr [EBX + 0x144]     ; 00448eab
        ;   Label: LAB_00448eab
    IMUL EDX,dword ptr [EBX + 0x148]    ; 00448eb1
    LEA EAX,[EDX*0x4 + 0x0]             ; 00448eb8
    ADD EAX,0x1010                      ; 00448ebf
    PUSH EAX                            ; 00448ec4
    CALL FUN_005a3650                   ; 00448ec5
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 00448eca
    MOV dword ptr [EBX + 0x164],EAX     ; 00448ecd
    TEST EAX,EAX                        ; 00448ed3
    JZ 0x00448efd                       ; 00448ed5
        ;   XREF to: 00448efd (CONDITIONAL_JUMP)  ; LAB_00448efd
    MOV EAX,dword ptr [EBX + 0x160]     ; 00448ed7
        ;   Label: LAB_00448ed7
    ADD EAX,0x10                        ; 00448edd
    AND AL,0xf0                         ; 00448ee0
    MOV dword ptr [EBX + 0x158],EAX     ; 00448ee2
    MOV EAX,dword ptr [EBX + 0x164]     ; 00448ee8
    ADD EAX,0x10                        ; 00448eee
    AND AL,0xf0                         ; 00448ef1
    MOV dword ptr [EBX + 0x15c],EAX     ; 00448ef3
    POP EBP                             ; 00448ef9
    POP ESI                             ; 00448efa
    POP EBX                             ; 00448efb
    RET                                 ; 00448efc
    MOV EAX,0x5b9bcc                    ; 00448efd | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_00448efd
    MOV EDX,0x24f                       ; 00448f02
    PUSH 0x5b9be0                       ; 00448f07 | = "CDemonCamera::init - Unable to alloc ..."
    MOV [0x01d71de0],EAX                ; 00448f0c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00448f11 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00448f17
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00448f1c
    JMP 0x00448ed7                      ; 00448f1f
        ;   XREF to: 00448ed7 (UNCONDITIONAL_JUMP)  ; LAB_00448ed7

