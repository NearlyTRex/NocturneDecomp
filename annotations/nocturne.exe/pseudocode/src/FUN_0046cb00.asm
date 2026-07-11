; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cb00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0046cba0 at 0046cf7e
;
; Called Functions:
;   FUN_0046c820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cb00
        ;   Label: FUN_0046cb00
    PUSH ESI                            ; 0046cb01
    PUSH EDI                            ; 0046cb02
    SUB ESP,0x4                         ; 0046cb03
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046cb06
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046cb0a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0046cb0e
    FLD float ptr [ESI]                 ; 0046cb12
    PUSH EBX                            ; 0046cb14
    FSTP float ptr [EBX + 0x3c]         ; 0046cb15
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046cb18
    MOV dword ptr [EBX + 0x40],EAX      ; 0046cb1b
    MOV EAX,dword ptr [EDI]             ; 0046cb1e
    MOV dword ptr [EBX + 0x44],EAX      ; 0046cb20
    MOV EAX,dword ptr [EDI + 0x8]       ; 0046cb23
    MOV dword ptr [EBX + 0x48],EAX      ; 0046cb26
    CALL FUN_0046c820                   ; 0046cb29
        ;   XREF to: 0046c820 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c820()
    ADD ESP,0x4                         ; 0046cb2e
    TEST EAX,EAX                        ; 0046cb31
    JZ 0x0046cb57                       ; 0046cb33
        ;   XREF to: 0046cb57 (CONDITIONAL_JUMP)  ; LAB_0046cb57
    FLD float ptr [EDI + 0x4]           ; 0046cb35
    FSUB float ptr [ESI + 0x4]          ; 0046cb38
    FMUL float ptr [EBX + 0x50]         ; 0046cb3b
    FADD float ptr [ESI + 0x4]          ; 0046cb3e
    FST float ptr [ESP]                 ; 0046cb41
    FCOMP float ptr [EBX + 0x28]        ; 0046cb44
    FNSTSW AX                           ; 0046cb47
    SAHF                                ; 0046cb49
    JBE 0x0046cb57                      ; 0046cb4a
        ;   XREF to: 0046cb57 (CONDITIONAL_JUMP)  ; LAB_0046cb57
    FLD float ptr [ESP]                 ; 0046cb4c
    FCOMP float ptr [EBX + 0x24]        ; 0046cb4f
    FNSTSW AX                           ; 0046cb52
    SAHF                                ; 0046cb54
    JC 0x0046cb5e                       ; 0046cb55
        ;   XREF to: 0046cb5e (CONDITIONAL_JUMP)  ; LAB_0046cb5e
    ADD ESP,0x4                         ; 0046cb57
        ;   Label: LAB_0046cb57
    POP EDI                             ; 0046cb5a
    POP ESI                             ; 0046cb5b
    POP EBX                             ; 0046cb5c
    RET                                 ; 0046cb5d
    MOV dword ptr [EBX + 0x8],0x0       ; 0046cb5e
        ;   Label: LAB_0046cb5e
    FLD float ptr [EBX + 0x18]          ; 0046cb65
    FMUL float ptr [EBX + 0x4c]         ; 0046cb68
    FLD float ptr [EBX + 0x1c]          ; 0046cb6b
    FMUL float ptr [EBX + 0x4c]         ; 0046cb6e
    MOV EAX,dword ptr [EBX + 0x4c]      ; 0046cb71
    MOV dword ptr [EBX],EAX             ; 0046cb74
    FXCH                                ; 0046cb76
    FADD float ptr [EBX + 0x10]         ; 0046cb78
    FXCH                                ; 0046cb7b
    FADD float ptr [EBX + 0x14]         ; 0046cb7d
    FLD float ptr [EBX + 0x54]          ; 0046cb80
    FLD float ptr [EBX + 0x58]          ; 0046cb83
    FSUBP ST2,ST0                       ; 0046cb86
    FSUBP ST2,ST0                       ; 0046cb88
    FSTP float ptr [EBX + 0xc]          ; 0046cb8a
    FSTP float ptr [EBX + 0x4]          ; 0046cb8d
    ADD ESP,0x4                         ; 0046cb90
    POP EDI                             ; 0046cb93
    POP ESI                             ; 0046cb94
    POP EBX                             ; 0046cb95
    RET                                 ; 0046cb96

