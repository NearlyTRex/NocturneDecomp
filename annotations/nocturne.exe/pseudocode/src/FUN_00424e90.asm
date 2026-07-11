; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00424e90(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004fc610 at 004fca1b
;
; Called Functions:
;   FUN_0040a290
;   FUN_0040df00
;   FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424e90
        ;   Label: FUN_00424e90
    SUB ESP,0x2c                        ; 00424e91
    MOV EBX,dword ptr [ESP + 0x34]      ; 00424e94
    MOV EDX,dword ptr [ESP + 0x38]      ; 00424e98
    PUSH EDX                            ; 00424e9c
    LEA EAX,[ESP + 0x10]                ; 00424e9d
    PUSH EAX                            ; 00424ea1
    PUSH EBX                            ; 00424ea2
    CALL FUN_0040a290                   ; 00424ea3
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 00424ea8
    PUSH EAX                            ; 00424eab
    LEA EAX,[ESP + 0x4]                 ; 00424eac
    PUSH EAX                            ; 00424eb0
    CALL FUN_0054e4a0                   ; 00424eb1
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    ADD ESP,0x8                         ; 00424eb6
    MOV EAX,dword ptr [EAX + 0x4]       ; 00424eb9
    MOV dword ptr [ESP + 0x24],EAX      ; 00424ebc
    MOV EAX,dword ptr [EBX + 0x2430]    ; 00424ec0
    PUSH dword ptr [ESP + 0x24]         ; 00424ec6
    MOV dword ptr [ESP + 0x24],EAX      ; 00424eca
    CALL FUN_0040df00                   ; 00424ece
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00424ed3
    FLD float ptr [ESP + 0x2c]          ; 00424ed7
    ADD ESP,0x4                         ; 00424edb
    FLD float ptr [ESP + 0x20]          ; 00424ede
    FXCH                                ; 00424ee2
    FST float ptr [ESP + 0x24]          ; 00424ee4
    FXCH                                ; 00424ee8
    FCHS                                ; 00424eea
    FSTP float ptr [ESP + 0x18]         ; 00424eec
    FCOMP float ptr [ESP + 0x18]        ; 00424ef0
    FNSTSW AX                           ; 00424ef4
    SAHF                                ; 00424ef6
    JC 0x00424f1d                       ; 00424ef7
        ;   XREF to: 00424f1d (CONDITIONAL_JUMP)  ; LAB_00424f1d
    FLD float ptr [ESP + 0x24]          ; 00424ef9
    FCOMP float ptr [ESP + 0x20]        ; 00424efd
    FNSTSW AX                           ; 00424f01
    SAHF                                ; 00424f03
    JBE 0x00424f23                      ; 00424f04
        ;   XREF to: 00424f23 (CONDITIONAL_JUMP)  ; LAB_00424f23
    MOV EAX,dword ptr [ESP + 0x20]      ; 00424f06
    MOV dword ptr [ESP + 0x1c],EAX      ; 00424f0a
        ;   Label: LAB_00424f0a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00424f0e
    MOV dword ptr [EBX + 0x2410],EAX    ; 00424f12
    ADD ESP,0x2c                        ; 00424f18
    POP EBX                             ; 00424f1b
    RET                                 ; 00424f1c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00424f1d
        ;   Label: LAB_00424f1d
    JMP 0x00424f0a                      ; 00424f21
        ;   XREF to: 00424f0a (UNCONDITIONAL_JUMP)  ; LAB_00424f0a
    MOV EAX,dword ptr [ESP + 0x24]      ; 00424f23
        ;   Label: LAB_00424f23
    MOV dword ptr [ESP + 0x1c],EAX      ; 00424f27
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00424f2b
    MOV dword ptr [EBX + 0x2410],EAX    ; 00424f2f
    ADD ESP,0x2c                        ; 00424f35
    POP EBX                             ; 00424f38
    RET                                 ; 00424f39

