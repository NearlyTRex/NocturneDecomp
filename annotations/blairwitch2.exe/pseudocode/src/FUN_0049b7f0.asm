; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049b7f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b84
;
; Called Functions:
;   FUN_00510ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b7f0
        ;   Label: FUN_0049b7f0
    SUB ESP,0x1c                        ; 0049b7f1
    MOV EBX,dword ptr [ESP + 0x24]      ; 0049b7f4
    FLD float ptr [EBX + 0x24]          ; 0049b7f8
    FLDZ                                ; 0049b7fb
    FCOMPP                              ; 0049b7fd
    FNSTSW AX                           ; 0049b7ff
    SAHF                                ; 0049b801
    JC 0x0049b809                       ; 0049b802
        ;   XREF to: 0049b809 (CONDITIONAL_JUMP)  ; LAB_0049b809
    ADD ESP,0x1c                        ; 0049b804
    POP EBX                             ; 0049b807
    RET                                 ; 0049b808
    PUSH EDI                            ; 0049b809
        ;   Label: LAB_0049b809
    PUSH ESI                            ; 0049b80a
    PUSH EBX                            ; 0049b80b
    CALL FUN_00510ef0                   ; 0049b80c
        ;   XREF to: 00510ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510ef0()
    MOV EAX,[0x00616494]                ; 0049b811 | DAT_00616494
    ADD ESP,0x4                         ; 0049b816
    MOV EAX,dword ptr [EAX + 0x284]     ; 0049b819 | DAT_01cb6b84
    MOV dword ptr [ESP + 0x20],EAX      ; 0049b81f
    LEA EAX,[EBX + 0x4c]                ; 0049b823
    FLD float ptr [EAX]                 ; 0049b826
    FMUL float ptr [ESP + 0x20]         ; 0049b828
    FLD float ptr [EAX + 0x4]           ; 0049b82c
    FMUL float ptr [ESP + 0x20]         ; 0049b82f
    FLD float ptr [EAX + 0x8]           ; 0049b833
    FMUL float ptr [ESP + 0x20]         ; 0049b836
    LEA EDI,[ESP + 0x14]                ; 0049b83a
    LEA ESI,[ESP + 0x8]                 ; 0049b83e
    LEA EAX,[EBX + 0x40]                ; 0049b842
    FXCH ST2                            ; 0049b845
    FSTP float ptr [ESP + 0x8]          ; 0049b847
    FSTP float ptr [ESP + 0xc]          ; 0049b84b
    FSTP float ptr [ESP + 0x10]         ; 0049b84f
    MOVSD ES:EDI,ESI                    ; 0049b853
    MOVSD ES:EDI,ESI                    ; 0049b854
    MOVSD ES:EDI,ESI                    ; 0049b855
    FLD float ptr [EAX]                 ; 0049b856
    FLD float ptr [EAX + 0x4]           ; 0049b858
    FLD float ptr [EAX + 0x8]           ; 0049b85b
    FXCH ST2                            ; 0049b85e
    FADD float ptr [ESP + 0x14]         ; 0049b860
    FXCH                                ; 0049b864
    FADD float ptr [ESP + 0x18]         ; 0049b866
    FXCH ST2                            ; 0049b86a
    FADD float ptr [ESP + 0x1c]         ; 0049b86c
    FXCH                                ; 0049b870
    FSTP float ptr [EAX]                ; 0049b872
    FXCH                                ; 0049b874
    FSTP float ptr [EAX + 0x4]          ; 0049b876
    FSTP float ptr [EAX + 0x8]          ; 0049b879
    POP ESI                             ; 0049b87c
    POP EDI                             ; 0049b87d
    ADD ESP,0x1c                        ; 0049b87e
    POP EBX                             ; 0049b881
    RET                                 ; 0049b882

