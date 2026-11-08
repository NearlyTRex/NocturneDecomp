; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040ca40(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005caeda
;   undefined4 DAT_005caede
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb32ec
;   undefined4 DAT_01fc783c
;   undefined4 DAT_01fc7840
;   undefined4 DAT_01fc7844
;
; Called Functions:
;   FUN_00408d70
;   FUN_00534ea0
;   FUN_00537e00
;   FUN_00537e30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ca40
        ;   Label: FUN_0040ca40
    PUSH ESI                            ; 0040ca41
    PUSH EDI                            ; 0040ca42
    SUB ESP,0x48                        ; 0040ca43
    MOV EBX,dword ptr [ESP + 0x58]      ; 0040ca46
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0040ca4a
    PUSH EDX                            ; 0040ca4e
    PUSH EBX                            ; 0040ca4f
    LEA ESI,[ESP + 0x14]                ; 0040ca50
    LEA EDI,[ESP + 0x2c]                ; 0040ca54
    CALL FUN_00408d70                   ; 0040ca58
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x14]                ; 0040ca5d
    ADD ESP,0x8                         ; 0040ca61
    MOVSD ES:EDI,ESI                    ; 0040ca64
    MOVSD ES:EDI,ESI                    ; 0040ca65
    MOVSD ES:EDI,ESI                    ; 0040ca66
    LEA EDI,[ESP + 0x18]                ; 0040ca67
    MOV ESI,0x1fc783c                   ; 0040ca6b
    MOVSD ES:EDI,ESI                    ; 0040ca70 | DAT_01fc783c
    MOVSD ES:EDI,ESI                    ; 0040ca71 | DAT_01fc7840
    MOVSD ES:EDI,ESI                    ; 0040ca72 | DAT_01fc7844
    MOV EDI,ESP                         ; 0040ca73
    LEA ESI,[ESP + 0x18]                ; 0040ca75
    MOVSD ES:EDI,ESI                    ; 0040ca79
    MOVSD ES:EDI,ESI                    ; 0040ca7a
    MOVSD ES:EDI,ESI                    ; 0040ca7b
    FLD float ptr [ESP + 0x24]          ; 0040ca7c
    FSUB float ptr [ESP]                ; 0040ca80
    FMUL ST0                            ; 0040ca83
    FLD float ptr [ESP + 0x28]          ; 0040ca85
    FSUB float ptr [ESP + 0x4]          ; 0040ca89
    FMUL ST0                            ; 0040ca8d
    FLD float ptr [ESP + 0x2c]          ; 0040ca8f
    FXCH                                ; 0040ca93
    FADDP ST2,ST0                       ; 0040ca95
    FSUB float ptr [ESP + 0x8]          ; 0040ca97
    FMUL ST0                            ; 0040ca9b
    FADDP                               ; 0040ca9d
    FCOMP float ptr [0x005caeda]        ; 0040ca9f | DAT_005caeda
    FNSTSW AX                           ; 0040caa5
    SAHF                                ; 0040caa7
    JBE 0x0040cab3                      ; 0040caa8
        ;   XREF to: 0040cab3 (CONDITIONAL_JUMP)  ; LAB_0040cab3
    XOR EAX,EAX                         ; 0040caaa
    ADD ESP,0x48                        ; 0040caac
    POP EDI                             ; 0040caaf
    POP ESI                             ; 0040cab0
    POP EBX                             ; 0040cab1
    RET                                 ; 0040cab2
    PUSH EBX                            ; 0040cab3
        ;   Label: LAB_0040cab3
    MOV ECX,dword ptr [0x0061b5a8]      ; 0040cab4 | DAT_0061b5a8
    PUSH ECX                            ; 0040caba | DAT_01e661b8
    CALL FUN_00537e30                   ; 0040cabb
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e30()
    ADD ESP,0x8                         ; 0040cac0
    LEA EAX,[ESP + 0x24]                ; 0040cac3
    PUSH 0x0                            ; 0040cac7
    PUSH EAX                            ; 0040cac9
    MOV ESI,dword ptr [0x0061b5a8]      ; 0040caca | DAT_0061b5a8
    PUSH ESI                            ; 0040cad0 | DAT_01e661b8
    CALL FUN_00534ea0                   ; 0040cad1
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00534ea0()
    MOV dword ptr [ESP + 0x50],EAX      ; 0040cad6
    FLD float ptr [ESP + 0x50]          ; 0040cada
    ADD ESP,0xc                         ; 0040cade
    LEA EDX,[EBX + 0x20]                ; 0040cae1
    PUSH 0x0                            ; 0040cae4
    PUSH EDX                            ; 0040cae6
    MOV EAX,[0x0061b5a8]                ; 0040cae7 | DAT_0061b5a8
    PUSH EAX                            ; 0040caec | DAT_01e661b8
    FSTP float ptr [ESP + 0x3c]         ; 0040caed
    MOV ESI,dword ptr [EAX + 0x14d134]  ; 0040caf1 | DAT_01fb32ec
    CALL FUN_00534ea0                   ; 0040caf7
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00534ea0()
    MOV dword ptr [ESP + 0x50],EAX      ; 0040cafc
    FLD float ptr [ESP + 0x50]          ; 0040cb00
    ADD ESP,0xc                         ; 0040cb04
    MOV EDI,dword ptr [0x0061b5a8]      ; 0040cb07 | DAT_0061b5a8
    PUSH EDI                            ; 0040cb0d | DAT_01e661b8
    FSTP float ptr [ESP + 0x38]         ; 0040cb0e
    CALL FUN_00537e00                   ; 0040cb12
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e00()
    ADD ESP,0x4                         ; 0040cb17
    FLD float ptr [ESP + 0x34]          ; 0040cb1a
    FADD double ptr [0x005caede]        ; 0040cb1e | DAT_005caede
    FLD float ptr [ESP + 0x30]          ; 0040cb24
    FCOMPP                              ; 0040cb28
    FNSTSW AX                           ; 0040cb2a
    SAHF                                ; 0040cb2c
    JNC 0x0040cb3b                      ; 0040cb2d
        ;   XREF to: 0040cb3b (CONDITIONAL_JUMP)  ; LAB_0040cb3b
    MOV ESI,dword ptr [0x0061b5a8]      ; 0040cb2f | DAT_0061b5a8
    MOV ESI,dword ptr [ESI + 0x14d134]  ; 0040cb35 | DAT_01fb32ec
    PUSH dword ptr [ESP + 0x60]         ; 0040cb3b
        ;   Label: LAB_0040cb3b
    PUSH ESI                            ; 0040cb3f
    LEA EAX,[ESP + 0x2c]                ; 0040cb40
    PUSH EAX                            ; 0040cb44
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0040cb45
    PUSH EBX                            ; 0040cb4b
    CALL dword ptr [EDX + 0x30]         ; 0040cb4c
    ADD ESP,0x10                        ; 0040cb4f
    ADD ESP,0x48                        ; 0040cb52
    POP EDI                             ; 0040cb55
    POP ESI                             ; 0040cb56
    POP EBX                             ; 0040cb57
    RET                                 ; 0040cb58

