; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00502e20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502e20
        ;   Label: FUN_00502e20
    PUSH ESI                            ; 00502e21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00502e22
    CMP dword ptr [EBX + 0x160],0x0     ; 00502e26
    JNZ 0x00502e59                      ; 00502e2d
        ;   XREF to: 00502e59 (CONDITIONAL_JUMP)  ; LAB_00502e59
    LEA EAX,[EBX + 0x164]               ; 00502e2f
    PUSH EAX                            ; 00502e35
    MOV ESI,dword ptr [0x0061b4d0]      ; 00502e36 | DAT_0061b4d0
    PUSH ESI                            ; 00502e3c
    CALL FUN_004a6c30                   ; 00502e3d
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00502e42
    TEST EAX,EAX                        ; 00502e45
    JNZ 0x00502e4c                      ; 00502e47
        ;   XREF to: 00502e4c (CONDITIONAL_JUMP)  ; LAB_00502e4c
    POP ESI                             ; 00502e49
        ;   Label: LAB_00502e49
    POP EBX                             ; 00502e4a
    RET                                 ; 00502e4b
    MOV dword ptr [EBX + 0x160],0x1     ; 00502e4c
        ;   Label: LAB_00502e4c
    POP ESI                             ; 00502e56
    POP EBX                             ; 00502e57
    RET                                 ; 00502e58
    LEA EAX,[EBX + 0x1c8]               ; 00502e59
        ;   Label: LAB_00502e59
    PUSH EAX                            ; 00502e5f
    MOV ECX,dword ptr [0x0061b4d0]      ; 00502e60 | DAT_0061b4d0
    PUSH ECX                            ; 00502e66
    CALL FUN_004a6c30                   ; 00502e67
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00502e6c
    TEST EAX,EAX                        ; 00502e6f
    JZ 0x00502e49                       ; 00502e71
        ;   XREF to: 00502e49 (CONDITIONAL_JUMP)  ; LAB_00502e49
    MOV dword ptr [EBX + 0x160],0x0     ; 00502e73
    POP ESI                             ; 00502e7d
    POP EBX                             ; 00502e7e
    RET                                 ; 00502e7f

