; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004afbf0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01c43530
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_00532250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afbf0
        ;   Label: FUN_004afbf0
    SUB ESP,0x4                         ; 004afbf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004afbf4
    MOV EAX,[0x0061d95c]                ; 004afbf8 | DAT_0061d95c
    FLD float ptr [EBX + 0x5c]          ; 004afbfd
    MOV EAX,dword ptr [EAX + 0x294]     ; 004afc00 | DAT_01ccf624
    FLD float ptr [EBX + 0x60]          ; 004afc06
    MOV dword ptr [ESP],EAX             ; 004afc09
    PUSH EBX                            ; 004afc0c
    FXCH                                ; 004afc0d
    FADD float ptr [ESP + 0x4]          ; 004afc0f
    FXCH                                ; 004afc13
    FADD float ptr [ESP + 0x4]          ; 004afc15
    FXCH                                ; 004afc19
    FSTP float ptr [EBX + 0x5c]         ; 004afc1b
    FSTP float ptr [EBX + 0x60]         ; 004afc1e
    CALL FUN_00532250                   ; 004afc21
        ;   XREF to: 00532250 (UNCONDITIONAL_CALL)  ; undefined FUN_00532250()
    MOV EAX,[0x01c43530]                ; 004afc26 | DAT_01c43530
    MOV EDX,EAX                         ; 004afc2b
    MOV ECX,0x6                         ; 004afc2d
    SAR EDX,0x1f                        ; 004afc32
    IDIV ECX                            ; 004afc35
    MOV EDX,dword ptr [EBX + 0x40]      ; 004afc37
    SUB EDX,EAX                         ; 004afc3a
    ADD ESP,0x4                         ; 004afc3c
    MOV dword ptr [EBX + 0x40],EDX      ; 004afc3f
    TEST EDX,EDX                        ; 004afc42
    JL 0x004afc4b                       ; 004afc44
        ;   XREF to: 004afc4b (CONDITIONAL_JUMP)  ; LAB_004afc4b
    ADD ESP,0x4                         ; 004afc46
    POP EBX                             ; 004afc49
    RET                                 ; 004afc4a
    MOV dword ptr [EBX + 0x40],0x0      ; 004afc4b
        ;   Label: LAB_004afc4b
    MOV dword ptr [EBX + 0x24],0x0      ; 004afc52
    ADD ESP,0x4                         ; 004afc59
    POP EBX                             ; 004afc5c
    RET                                 ; 004afc5d

