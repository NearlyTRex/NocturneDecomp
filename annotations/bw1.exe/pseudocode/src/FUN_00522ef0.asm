; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00522ef0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00523310 at 00523715
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522ef0
        ;   Label: FUN_00522ef0
    PUSH ESI                            ; 00522ef1
    PUSH EDI                            ; 00522ef2
    PUSH EBP                            ; 00522ef3
    SUB ESP,0x20                        ; 00522ef4
    MOV EBX,dword ptr [ESP + 0x38]      ; 00522ef7
    MOV EAX,dword ptr [ESP + 0x34]      ; 00522efb
    MOV EDX,0x7149f2ca                  ; 00522eff
    XOR EBP,EBP                         ; 00522f04
    XOR ECX,ECX                         ; 00522f06
    MOV ESI,dword ptr [EAX + 0x54]      ; 00522f08
    MOV dword ptr [ESP + 0x1c],EDX      ; 00522f0b
    TEST ESI,ESI                        ; 00522f0f
    JLE 0x00522f79                      ; 00522f11
        ;   XREF to: 00522f79 (CONDITIONAL_JUMP)  ; LAB_00522f79
    MOV EDX,dword ptr [EAX + 0x58]      ; 00522f13
    ADD EDX,0x4                         ; 00522f16
    FLD float ptr [EBX]                 ; 00522f19
        ;   Label: LAB_00522f19
    FLD float ptr [EBX + 0x4]           ; 00522f1b
    FLD float ptr [EBX + 0x8]           ; 00522f1e
    MOV EDI,ESP                         ; 00522f21
    LEA ESI,[ESP + 0xc]                 ; 00522f23
    FXCH ST2                            ; 00522f27
    FSUB float ptr [EDX]                ; 00522f29
    FXCH                                ; 00522f2b
    FSUB float ptr [EDX + 0x4]          ; 00522f2d
    FXCH ST2                            ; 00522f30
    FSUB float ptr [EDX + 0x8]          ; 00522f32
    FXCH                                ; 00522f35
    FSTP float ptr [ESP + 0xc]          ; 00522f37
    FXCH                                ; 00522f3b
    FSTP float ptr [ESP + 0x10]         ; 00522f3d
    FSTP float ptr [ESP + 0x14]         ; 00522f41
    MOVSD ES:EDI,ESI                    ; 00522f45
    MOVSD ES:EDI,ESI                    ; 00522f46
    MOVSD ES:EDI,ESI                    ; 00522f47
    FLD float ptr [ESP + 0x4]           ; 00522f48
    FMUL ST0                            ; 00522f4c
    FLD float ptr [ESP]                 ; 00522f4e
    FMUL ST0                            ; 00522f51
    FADDP                               ; 00522f53
    FLD float ptr [ESP + 0x8]           ; 00522f55
    FMUL ST0                            ; 00522f59
    FADDP                               ; 00522f5b
    FST float ptr [ESP + 0x18]          ; 00522f5d
    FCOMP float ptr [ESP + 0x1c]        ; 00522f61
    FNSTSW AX                           ; 00522f65
    SAHF                                ; 00522f67
    JC 0x00522f91                       ; 00522f68
        ;   XREF to: 00522f91 (CONDITIONAL_JUMP)  ; LAB_00522f91
    MOV EAX,dword ptr [ESP + 0x34]      ; 00522f6a
        ;   Label: LAB_00522f6a
    INC ECX                             ; 00522f6e
    MOV EDI,dword ptr [EAX + 0x54]      ; 00522f6f
    ADD EDX,0x10                        ; 00522f72
    CMP ECX,EDI                         ; 00522f75
    JL 0x00522f19                       ; 00522f77
        ;   XREF to: 00522f19 (CONDITIONAL_JUMP)  ; LAB_00522f19
    MOV EAX,EBP                         ; 00522f79
        ;   Label: LAB_00522f79
    ADD ESP,0x20                        ; 00522f7b
    POP EBP                             ; 00522f7e
    POP EDI                             ; 00522f7f
    POP ESI                             ; 00522f80
    POP EBX                             ; 00522f81
    LEA EAX,[EAX]                       ; 00522f82
    LEA EDX,[EDX]                       ; 00522f88
    MOV EAX,EAX                         ; 00522f8e
    RET                                 ; 00522f90
    MOV EBP,dword ptr [ESP + 0x18]      ; 00522f91
        ;   Label: LAB_00522f91
    MOV dword ptr [ESP + 0x1c],EBP      ; 00522f95
    MOV EBP,ECX                         ; 00522f99
    JMP 0x00522f6a                      ; 00522f9b
        ;   XREF to: 00522f6a (UNCONDITIONAL_JUMP)  ; LAB_00522f6a

