; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00477a10(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[2]:
;   FUN_004784a0 at 004784b9
;   FUN_004785c0 at 004785d9
;
; Called Functions:
;   FUN_005a3120
;   FUN_005a3600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477a10
        ;   Label: FUN_00477a10
    PUSH EDI                            ; 00477a11
    SUB ESP,0x14                        ; 00477a12
    MOV EDI,dword ptr [ESP + 0x24]      ; 00477a15
    MOV EBX,ESI                         ; 00477a19
    MOV ESI,dword ptr [ESP + 0x20]      ; 00477a1b
    FLD float ptr [EDI]                 ; 00477a1f
    FSUB float ptr [ESI + 0x10]         ; 00477a21
    FDIV float ptr [ESI + 0x28]         ; 00477a24
    SUB ESP,0x8                         ; 00477a27
    FSTP double ptr [ESP]               ; 00477a2a
    CALL FUN_005a3600                   ; 00477a2d
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    FLD float ptr [EDI + 0x4]           ; 00477a32
    FSUB float ptr [ESI + 0x14]         ; 00477a35
    FDIV float ptr [ESI + 0x2c]         ; 00477a38
    MOV dword ptr [ESP + 0x14],EAX      ; 00477a3b
    MOV dword ptr [ESP + 0x18],EDX      ; 00477a3f
    FLD double ptr [ESP + 0x14]         ; 00477a43
    ADD ESP,0x8                         ; 00477a47
    CALL FUN_005a3120                   ; 00477a4a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 00477a4f
    SUB ESP,0x8                         ; 00477a52
    FSTP double ptr [ESP]               ; 00477a55
    CALL FUN_005a3600                   ; 00477a58
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    FLD float ptr [EDI + 0x8]           ; 00477a5d
    FSUB float ptr [ESI + 0x18]         ; 00477a60
    FDIV float ptr [ESI + 0x30]         ; 00477a63
    MOV dword ptr [ESP + 0x14],EAX      ; 00477a66
    MOV dword ptr [ESP + 0x18],EDX      ; 00477a6a
    FLD double ptr [ESP + 0x14]         ; 00477a6e
    ADD ESP,0x8                         ; 00477a72
    CALL FUN_005a3120                   ; 00477a75
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 00477a7a
    SUB ESP,0x8                         ; 00477a7e
    FSTP double ptr [ESP]               ; 00477a81
    MOV EDI,EBX                         ; 00477a84
    CALL FUN_005a3600                   ; 00477a86
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    MOV dword ptr [ESP + 0x14],EAX      ; 00477a8b
    MOV dword ptr [ESP + 0x18],EDX      ; 00477a8f
    LEA ESI,[ESP + 0x8]                 ; 00477a93
    FLD double ptr [ESP + 0x14]         ; 00477a97
    ADD ESP,0x8                         ; 00477a9b
    CALL FUN_005a3120                   ; 00477a9e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 00477aa3
    MOVSD ES:EDI,ESI                    ; 00477aa7
    MOVSD ES:EDI,ESI                    ; 00477aa8
    MOVSD ES:EDI,ESI                    ; 00477aa9
    MOV EAX,EBX                         ; 00477aaa
    ADD ESP,0x14                        ; 00477aac
    POP EDI                             ; 00477aaf
    POP EBX                             ; 00477ab0
    RET                                 ; 00477ab1

