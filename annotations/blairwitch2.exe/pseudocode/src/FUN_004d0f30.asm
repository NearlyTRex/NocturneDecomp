; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d0f30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510460
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0f30
        ;   Label: FUN_004d0f30
    PUSH ESI                            ; 004d0f31
    PUSH EDI                            ; 004d0f32
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d0f33
    PUSH EDX                            ; 004d0f37
    CALL FUN_00510460                   ; 004d0f38
        ;   XREF to: 00510460 (UNCONDITIONAL_CALL)  ; undefined FUN_00510460()
    ADD ESP,0x4                         ; 004d0f3d
    PUSH 0x5da0df                       ; 004d0f40
    MOV EBX,EAX                         ; 004d0f45
    LEA EDI,[EAX + 0x2b4]               ; 004d0f47
    PUSH EDI                            ; 004d0f4d
    MOV dword ptr [EAX + 0x2b0],0x5f8524 ; 004d0f4e
    CALL FUN_005478b0                   ; 004d0f58
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    ADD ESP,0x8                         ; 004d0f5d
    MOV ESI,0x5da0e9                    ; 004d0f60
    LEA EDI,[EBX + 0x24348]             ; 004d0f65
    PUSH EDI                            ; 004d0f6b
    MOV AL,byte ptr [ESI]               ; 004d0f6c
        ;   Label: LAB_004d0f6c
    MOV byte ptr [EDI],AL               ; 004d0f6e
    CMP AL,0x0                          ; 004d0f70
    JZ 0x004d0f84                       ; 004d0f72
        ;   XREF to: 004d0f84 (CONDITIONAL_JUMP)  ; LAB_004d0f84
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0f74
    ADD ESI,0x2                         ; 004d0f77
    MOV byte ptr [EDI + 0x1],AL         ; 004d0f7a
    ADD EDI,0x2                         ; 004d0f7d
    CMP AL,0x0                          ; 004d0f80
    JNZ 0x004d0f6c                      ; 004d0f82
        ;   XREF to: 004d0f6c (CONDITIONAL_JUMP)  ; LAB_004d0f6c
    POP EDI                             ; 004d0f84
        ;   Label: LAB_004d0f84
    MOV EAX,EBX                         ; 004d0f85
    POP EDI                             ; 004d0f87
    POP ESI                             ; 004d0f88
    POP EBX                             ; 004d0f89
    RET                                 ; 004d0f8a

