; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00535e10(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[5]:
;   FUN_00459ff0 at 0045a8c2
;   FUN_004b20d0 at 004b225f
;   FUN_0055a3c0 at 0055a71b
;   FUN_0056bf00 at 0056c788
;   FUN_00595f30 at 00596211
;
; Referenced Globals:
;   undefined4 DAT_01fc9c68
;
; Called Functions:
;   FUN_00473390
;   FUN_00536490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535e10
        ;   Label: FUN_00535e10
    PUSH ESI                            ; 00535e11
    PUSH EDI                            ; 00535e12
    PUSH EBP                            ; 00535e13
    MOV EBP,ESP                         ; 00535e14
    SUB ESP,0xc                         ; 00535e16
    AND ESP,0xfffffff8                  ; 00535e19
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00535e1c
    PUSH EDX                            ; 00535e1f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00535e20
    PUSH ECX                            ; 00535e23
    PUSH 0x1fc9c68                      ; 00535e24 | DAT_01fc9c68
    CALL FUN_00473390                   ; 00535e29
        ;   XREF to: 00473390 (UNCONDITIONAL_CALL)  ; undefined FUN_00473390()
    ADD ESP,0xc                         ; 00535e2e
    TEST EAX,EAX                        ; 00535e31
    JZ 0x00535e41                       ; 00535e33
        ;   XREF to: 00535e41 (CONDITIONAL_JUMP)  ; LAB_00535e41
    MOV EAX,0x1                         ; 00535e35
        ;   Label: LAB_00535e35
    MOV ESP,EBP                         ; 00535e3a
    POP EBP                             ; 00535e3c
    POP EDI                             ; 00535e3d
    POP ESI                             ; 00535e3e
    POP EBX                             ; 00535e3f
    RET                                 ; 00535e40
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00535e41
        ;   Label: LAB_00535e41
    PUSH 0x3f8147ae                     ; 00535e44
    PUSH EBX                            ; 00535e49
    MOV ESI,dword ptr [EBP + 0x18]      ; 00535e4a
    PUSH ESI                            ; 00535e4d
    MOV EDI,dword ptr [EBP + 0x14]      ; 00535e4e
    PUSH 0xbf800000                     ; 00535e51
    PUSH EDI                            ; 00535e56
    CALL FUN_00536490                   ; 00535e57
        ;   XREF to: 00536490 (UNCONDITIONAL_CALL)  ; undefined FUN_00536490()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00535e5c
    FLD float ptr [ESP + 0x1c]          ; 00535e60
    ADD ESP,0x14                        ; 00535e64
    FLDZ                                ; 00535e67
    FXCH                                ; 00535e69
    FSTP double ptr [ESP]               ; 00535e6b
    FCOMP double ptr [ESP]              ; 00535e6e
    FNSTSW AX                           ; 00535e71
    SAHF                                ; 00535e73
    JA 0x00535e80                       ; 00535e74
        ;   XREF to: 00535e80 (CONDITIONAL_JUMP)  ; LAB_00535e80
    FLD1                                ; 00535e76
    FCOMP double ptr [ESP]              ; 00535e78
    FNSTSW AX                           ; 00535e7b
    SAHF                                ; 00535e7d
    JNC 0x00535e35                      ; 00535e7e
        ;   XREF to: 00535e35 (CONDITIONAL_JUMP)  ; LAB_00535e35
    XOR EAX,EAX                         ; 00535e80
        ;   Label: LAB_00535e80
    MOV ESP,EBP                         ; 00535e82
    POP EBP                             ; 00535e84
    POP EDI                             ; 00535e85
    POP ESI                             ; 00535e86
    POP EBX                             ; 00535e87
    RET                                 ; 00535e88

