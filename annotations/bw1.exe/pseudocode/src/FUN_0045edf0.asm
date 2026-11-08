; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045edf0(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00551d50 at 00552064
;
; Called Functions:
;   FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045edf0
        ;   Label: FUN_0045edf0
    PUSH ESI                            ; 0045edf1
    PUSH EDI                            ; 0045edf2
    PUSH EBP                            ; 0045edf3
    SUB ESP,0x30                        ; 0045edf4
    MOV EBX,dword ptr [ESP + 0x44]      ; 0045edf7
    MOV ESI,dword ptr [ESP + 0x48]      ; 0045edfb
    MOV EBP,dword ptr [ESP + 0x50]      ; 0045edff
    LEA EAX,[EBX + 0x24]                ; 0045ee03
    LEA EDI,[ESP + 0x24]                ; 0045ee06
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0045ee0a
    FLD float ptr [EAX + 0x4]           ; 0045ee0e
    FLD float ptr [EAX + 0x8]           ; 0045ee11
    FLD float ptr [EAX]                 ; 0045ee14
    LEA EAX,[ESP + 0x24]                ; 0045ee16
    FSUB float ptr [ESI]                ; 0045ee1a
    FXCH ST2                            ; 0045ee1c
    FSUB float ptr [ESI + 0x4]          ; 0045ee1e
    FXCH                                ; 0045ee21
    FSUB float ptr [ESI + 0x8]          ; 0045ee23
    FXCH ST2                            ; 0045ee26
    FSTP float ptr [ESP + 0x18]         ; 0045ee28
    FSTP float ptr [ESP + 0x1c]         ; 0045ee2c
    LEA ESI,[ESP + 0x18]                ; 0045ee30
    FSTP float ptr [ESP + 0x20]         ; 0045ee34
    PUSH EAX                            ; 0045ee38
    MOVSD ES:EDI,ESI                    ; 0045ee39
    MOVSD ES:EDI,ESI                    ; 0045ee3a
    MOVSD ES:EDI,ESI                    ; 0045ee3b
    PUSH EDX                            ; 0045ee3c
    LEA ESI,[ESP + 0x14]                ; 0045ee3d
    LEA EDI,[ESP + 0x8]                 ; 0045ee41
    CALL FUN_0045f700                   ; 0045ee45
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f700()
    LEA ESI,[ESP + 0x14]                ; 0045ee4a
    ADD ESP,0x8                         ; 0045ee4e
    MOVSD ES:EDI,ESI                    ; 0045ee51
    MOVSD ES:EDI,ESI                    ; 0045ee52
    MOVSD ES:EDI,ESI                    ; 0045ee53
    MOV EAX,ESP                         ; 0045ee54
    LEA ESI,[ESP + 0x24]                ; 0045ee56
    CMP ESI,EAX                         ; 0045ee5a
    JNZ 0x0045eed1                      ; 0045ee5c
        ;   XREF to: 0045eed1 (CONDITIONAL_JUMP)  ; LAB_0045eed1
    FLD float ptr [ESP + 0x24]          ; 0045ee62
        ;   Label: LAB_0045ee62
    FADD float ptr [EBX + 0x30]         ; 0045ee66
    FCOMP float ptr [EBP]               ; 0045ee69
    FNSTSW AX                           ; 0045ee6c
    SAHF                                ; 0045ee6e
    JC 0x0045eec7                       ; 0045ee6f
        ;   XREF to: 0045eec7 (CONDITIONAL_JUMP)  ; LAB_0045eec7
    FLD float ptr [ESP + 0x28]          ; 0045ee71
    FADD float ptr [EBX + 0x30]         ; 0045ee75
    FCOMP float ptr [EBP + 0x4]         ; 0045ee78
    FNSTSW AX                           ; 0045ee7b
    SAHF                                ; 0045ee7d
    JC 0x0045eec7                       ; 0045ee7e
        ;   XREF to: 0045eec7 (CONDITIONAL_JUMP)  ; LAB_0045eec7
    FLD float ptr [ESP + 0x2c]          ; 0045ee80
    FADD float ptr [EBX + 0x30]         ; 0045ee84
    FCOMP float ptr [EBP + 0x8]         ; 0045ee87
    FNSTSW AX                           ; 0045ee8a
    SAHF                                ; 0045ee8c
    JC 0x0045eec7                       ; 0045ee8d
        ;   XREF to: 0045eec7 (CONDITIONAL_JUMP)  ; LAB_0045eec7
    FLD float ptr [ESP + 0x24]          ; 0045ee8f
    FSUB float ptr [EBX + 0x30]         ; 0045ee93
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045ee96
    FCOMP float ptr [EAX]               ; 0045ee9a
    FNSTSW AX                           ; 0045ee9c
    SAHF                                ; 0045ee9e
    JA 0x0045eec7                       ; 0045ee9f
        ;   XREF to: 0045eec7 (CONDITIONAL_JUMP)  ; LAB_0045eec7
    FLD float ptr [ESP + 0x28]          ; 0045eea1
    FSUB float ptr [EBX + 0x30]         ; 0045eea5
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045eea8
    FCOMP float ptr [EAX + 0x4]         ; 0045eeac
    FNSTSW AX                           ; 0045eeaf
    SAHF                                ; 0045eeb1
    JA 0x0045eec7                       ; 0045eeb2
        ;   XREF to: 0045eec7 (CONDITIONAL_JUMP)  ; LAB_0045eec7
    FLD float ptr [ESP + 0x2c]          ; 0045eeb4
    FSUB float ptr [EBX + 0x30]         ; 0045eeb8
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045eebb
    FCOMP float ptr [EAX + 0x8]         ; 0045eebf
    FNSTSW AX                           ; 0045eec2
    SAHF                                ; 0045eec4
    JBE 0x0045eeed                      ; 0045eec5
        ;   XREF to: 0045eeed (CONDITIONAL_JUMP)  ; LAB_0045eeed
    XOR EAX,EAX                         ; 0045eec7
        ;   Label: LAB_0045eec7
    ADD ESP,0x30                        ; 0045eec9
    POP EBP                             ; 0045eecc
    POP EDI                             ; 0045eecd
    POP ESI                             ; 0045eece
    POP EBX                             ; 0045eecf
    RET                                 ; 0045eed0
    MOV EAX,dword ptr [ESP]             ; 0045eed1
        ;   Label: LAB_0045eed1
    MOV dword ptr [ESP + 0x24],EAX      ; 0045eed4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045eed8
    MOV dword ptr [ESP + 0x28],EAX      ; 0045eedc
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045eee0
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045eee4
    JMP 0x0045ee62                      ; 0045eee8
        ;   XREF to: 0045ee62 (UNCONDITIONAL_JUMP)  ; LAB_0045ee62
    MOV EAX,0x1                         ; 0045eeed
        ;   Label: LAB_0045eeed
    ADD ESP,0x30                        ; 0045eef2
    POP EBP                             ; 0045eef5
    POP EDI                             ; 0045eef6
    POP ESI                             ; 0045eef7
    POP EBX                             ; 0045eef8
    RET                                 ; 0045eef9

