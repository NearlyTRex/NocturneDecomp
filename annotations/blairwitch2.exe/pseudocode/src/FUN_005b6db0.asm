; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005b6db0(int param_1,float *param_2)
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
;   FUN_005b71d0 at 005b75d5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6db0
        ;   Label: FUN_005b6db0
    PUSH ESI                            ; 005b6db1
    PUSH EDI                            ; 005b6db2
    PUSH EBP                            ; 005b6db3
    SUB ESP,0x20                        ; 005b6db4
    MOV EBX,dword ptr [ESP + 0x38]      ; 005b6db7
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b6dbb
    MOV EDX,0x7149f2ca                  ; 005b6dbf
    XOR EBP,EBP                         ; 005b6dc4
    XOR ECX,ECX                         ; 005b6dc6
    MOV ESI,dword ptr [EAX + 0x54]      ; 005b6dc8
    MOV dword ptr [ESP + 0x1c],EDX      ; 005b6dcb
    TEST ESI,ESI                        ; 005b6dcf
    JLE 0x005b6e39                      ; 005b6dd1
        ;   XREF to: 005b6e39 (CONDITIONAL_JUMP)  ; LAB_005b6e39
    MOV EDX,dword ptr [EAX + 0x58]      ; 005b6dd3
    ADD EDX,0x4                         ; 005b6dd6
    FLD float ptr [EBX]                 ; 005b6dd9
        ;   Label: LAB_005b6dd9
    FLD float ptr [EBX + 0x4]           ; 005b6ddb
    FLD float ptr [EBX + 0x8]           ; 005b6dde
    MOV EDI,ESP                         ; 005b6de1
    LEA ESI,[ESP + 0xc]                 ; 005b6de3
    FXCH ST2                            ; 005b6de7
    FSUB float ptr [EDX]                ; 005b6de9
    FXCH                                ; 005b6deb
    FSUB float ptr [EDX + 0x4]          ; 005b6ded
    FXCH ST2                            ; 005b6df0
    FSUB float ptr [EDX + 0x8]          ; 005b6df2
    FXCH                                ; 005b6df5
    FSTP float ptr [ESP + 0xc]          ; 005b6df7
    FXCH                                ; 005b6dfb
    FSTP float ptr [ESP + 0x10]         ; 005b6dfd
    FSTP float ptr [ESP + 0x14]         ; 005b6e01
    MOVSD ES:EDI,ESI                    ; 005b6e05
    MOVSD ES:EDI,ESI                    ; 005b6e06
    MOVSD ES:EDI,ESI                    ; 005b6e07
    FLD float ptr [ESP + 0x4]           ; 005b6e08
    FMUL ST0                            ; 005b6e0c
    FLD float ptr [ESP]                 ; 005b6e0e
    FMUL ST0                            ; 005b6e11
    FADDP                               ; 005b6e13
    FLD float ptr [ESP + 0x8]           ; 005b6e15
    FMUL ST0                            ; 005b6e19
    FADDP                               ; 005b6e1b
    FST float ptr [ESP + 0x18]          ; 005b6e1d
    FCOMP float ptr [ESP + 0x1c]        ; 005b6e21
    FNSTSW AX                           ; 005b6e25
    SAHF                                ; 005b6e27
    JC 0x005b6e51                       ; 005b6e28
        ;   XREF to: 005b6e51 (CONDITIONAL_JUMP)  ; LAB_005b6e51
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b6e2a
        ;   Label: LAB_005b6e2a
    INC ECX                             ; 005b6e2e
    MOV EDI,dword ptr [EAX + 0x54]      ; 005b6e2f
    ADD EDX,0x10                        ; 005b6e32
    CMP ECX,EDI                         ; 005b6e35
    JL 0x005b6dd9                       ; 005b6e37
        ;   XREF to: 005b6dd9 (CONDITIONAL_JUMP)  ; LAB_005b6dd9
    MOV EAX,EBP                         ; 005b6e39
        ;   Label: LAB_005b6e39
    ADD ESP,0x20                        ; 005b6e3b
    POP EBP                             ; 005b6e3e
    POP EDI                             ; 005b6e3f
    POP ESI                             ; 005b6e40
    POP EBX                             ; 005b6e41
    LEA EAX,[EAX]                       ; 005b6e42
    LEA EDX,[EDX]                       ; 005b6e48
    MOV EAX,EAX                         ; 005b6e4e
    RET                                 ; 005b6e50
    MOV EBP,dword ptr [ESP + 0x18]      ; 005b6e51
        ;   Label: LAB_005b6e51
    MOV dword ptr [ESP + 0x1c],EBP      ; 005b6e55
    MOV EBP,ECX                         ; 005b6e59
    JMP 0x005b6e2a                      ; 005b6e5b
        ;   XREF to: 005b6e2a (UNCONDITIONAL_JUMP)  ; LAB_005b6e2a

