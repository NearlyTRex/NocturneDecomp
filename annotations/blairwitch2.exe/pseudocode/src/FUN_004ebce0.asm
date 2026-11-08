; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ebce0(char *param_1)
;
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; XREF[1]:
;   FUN_004ebe30 at 004ebe6b
;
; Referenced Globals:
;   undefined4 s_Press_any_key_to_continu_005dcb44+1
;   TerminatedCString s_Monitor_calibration_005dcb62
;   undefined4 DAT_01511cc4
;
; Called Functions:
;   FUN_004032b0
;   FUN_0040d900
;   FUN_004a8df0
;   FUN_004aaf00
;   FUN_004ab560
;   FUN_0050fe80
;   FUN_0055b1f0
;   FUN_00589560
;   FUN_0058ead0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebce0
        ;   Label: FUN_004ebce0
    PUSH ESI                            ; 004ebce1
    PUSH EDI                            ; 004ebce2
    PUSH EBP                            ; 004ebce3
    SUB ESP,0x100                       ; 004ebce4
    MOV ESI,dword ptr [ESP + 0x114]     ; 004ebcea
    MOV EDI,ESP                         ; 004ebcf1
    PUSH EDI                            ; 004ebcf3
    MOV AL,byte ptr [ESI]               ; 004ebcf4
        ;   Label: LAB_004ebcf4
    MOV byte ptr [EDI],AL               ; 004ebcf6
    CMP AL,0x0                          ; 004ebcf8
    JZ 0x004ebd0c                       ; 004ebcfa
        ;   XREF to: 004ebd0c (CONDITIONAL_JUMP)  ; LAB_004ebd0c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebcfc
    ADD ESI,0x2                         ; 004ebcff
    MOV byte ptr [EDI + 0x1],AL         ; 004ebd02
    ADD EDI,0x2                         ; 004ebd05
    CMP AL,0x0                          ; 004ebd08
    JNZ 0x004ebcf4                      ; 004ebd0a
        ;   XREF to: 004ebcf4 (CONDITIONAL_JUMP)  ; LAB_004ebcf4
    POP EDI                             ; 004ebd0c
        ;   Label: LAB_004ebd0c
    PUSH 0x5dcb45                       ; 004ebd0d | s_Press_any_key_to_continu_005dcb44+1
    CALL FUN_0050fe80                   ; 004ebd12
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ebd17
    MOV EDI,ESP                         ; 004ebd1a
    MOV ESI,EAX                         ; 004ebd1c
    PUSH EDI                            ; 004ebd1e
    SUB ECX,ECX                         ; 004ebd1f
    DEC ECX                             ; 004ebd21
    MOV AL,0x0                          ; 004ebd22
    SCASB.REPNE ES:EDI                  ; 004ebd24
    DEC EDI                             ; 004ebd26
    MOV AL,byte ptr [ESI]               ; 004ebd27
        ;   Label: LAB_004ebd27
    MOV byte ptr [EDI],AL               ; 004ebd29
    CMP AL,0x0                          ; 004ebd2b
    JZ 0x004ebd3f                       ; 004ebd2d
        ;   XREF to: 004ebd3f (CONDITIONAL_JUMP)  ; LAB_004ebd3f
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebd2f
    ADD ESI,0x2                         ; 004ebd32
    MOV byte ptr [EDI + 0x1],AL         ; 004ebd35
    ADD EDI,0x2                         ; 004ebd38
    CMP AL,0x0                          ; 004ebd3b
    JNZ 0x004ebd27                      ; 004ebd3d
        ;   XREF to: 004ebd27 (CONDITIONAL_JUMP)  ; LAB_004ebd27
    POP EDI                             ; 004ebd3f
        ;   Label: LAB_004ebd3f
    PUSH 0x58                           ; 004ebd40
    MOV EDX,dword ptr [0x01511cc4]      ; 004ebd42 | DAT_01511cc4
    PUSH EDX                            ; 004ebd48
    CALL FUN_004ab560                   ; 004ebd49
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab560()
    ADD ESP,0x8                         ; 004ebd4e
    MOV EDI,EAX                         ; 004ebd51
    MOV EAX,ESP                         ; 004ebd53
    PUSH EAX                            ; 004ebd55
    MOV ECX,dword ptr [0x01511cc4]      ; 004ebd56 | DAT_01511cc4
    PUSH ECX                            ; 004ebd5c
    CALL FUN_004aaf00                   ; 004ebd5d
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined FUN_004aaf00()
    ADD ESP,0x8                         ; 004ebd62
    MOV ESI,EAX                         ; 004ebd65
    CALL FUN_0055b1f0                   ; 004ebd67
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
    PUSH 0xffff                         ; 004ebd6c
    PUSH 0x0                            ; 004ebd71
    PUSH 0x0                            ; 004ebd73
    PUSH 0x1d0613c                      ; 004ebd75
    CALL FUN_0040d900                   ; 004ebd7a
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d900()
    MOV EAX,EDI                         ; 004ebd7f
    ADD ESP,0x10                        ; 004ebd81
    LEA EDX,[EAX*0x4 + 0x0]             ; 004ebd84
    PUSH -0x1                           ; 004ebd8b
    SUB EDX,EAX                         ; 004ebd8d
    MOV EAX,0x1e0                       ; 004ebd8f
    PUSH 0xf8                           ; 004ebd94
    SUB EAX,EDX                         ; 004ebd99
    PUSH EAX                            ; 004ebd9b
    MOV EDX,ESI                         ; 004ebd9c
    MOV EAX,ESI                         ; 004ebd9e
    SAR EDX,0x1f                        ; 004ebda0
    SUB EAX,EDX                         ; 004ebda3
    SAR EAX,0x1                         ; 004ebda5
    MOV EDX,0x140                       ; 004ebda7
    SUB EDX,EAX                         ; 004ebdac
    PUSH EDX                            ; 004ebdae
    LEA EAX,[ESP + 0x10]                ; 004ebdaf
    PUSH EAX                            ; 004ebdb3
    MOV EBX,dword ptr [0x01511cc4]      ; 004ebdb4 | DAT_01511cc4
    PUSH EBX                            ; 004ebdba
    CALL FUN_004a8df0                   ; 004ebdbb
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8df0()
    ADD ESP,0x18                        ; 004ebdc0
    PUSH 0x5dcb62                       ; 004ebdc3 | = "Monitor calibration"
    CALL FUN_0050fe80                   ; 004ebdc8
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ebdcd
    PUSH EAX                            ; 004ebdd0
    MOV EBP,dword ptr [0x01511cc4]      ; 004ebdd1 | DAT_01511cc4
    PUSH EBP                            ; 004ebdd7
    MOV ESI,EAX                         ; 004ebdd8
    CALL FUN_004aaf00                   ; 004ebdda
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined FUN_004aaf00()
    MOV EDX,EAX                         ; 004ebddf
    SAR EDX,0x1f                        ; 004ebde1
    SUB EAX,EDX                         ; 004ebde4
    SAR EAX,0x1                         ; 004ebde6
    ADD ESP,0x8                         ; 004ebde8
    PUSH -0x1                           ; 004ebdeb
    PUSH 0xf8                           ; 004ebded
    ADD EDI,EDI                         ; 004ebdf2
    MOV EDX,0x140                       ; 004ebdf4
    PUSH EDI                            ; 004ebdf9
    SUB EDX,EAX                         ; 004ebdfa
    PUSH EDX                            ; 004ebdfc
    PUSH ESI                            ; 004ebdfd
    MOV EAX,[0x01511cc4]                ; 004ebdfe | DAT_01511cc4
    PUSH EAX                            ; 004ebe03
    CALL FUN_004a8df0                   ; 004ebe04
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8df0()
    ADD ESP,0x18                        ; 004ebe09
    CALL FUN_00589560                   ; 004ebe0c
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    CALL FUN_004032b0                   ; 004ebe11
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_0058ead0                   ; 004ebe16
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ead0()
    ADD ESP,0x100                       ; 004ebe1b
    POP EBP                             ; 004ebe21
    POP EDI                             ; 004ebe22
    POP ESI                             ; 004ebe23
    POP EBX                             ; 004ebe24
    RET                                 ; 004ebe25

