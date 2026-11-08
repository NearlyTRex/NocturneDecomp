; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00435010(undefined4 param_1,undefined1 *param_2)
;
;
; XREF[2]:
;   FUN_00434f90 at 00434fa9
;   FUN_0050fce0 at 0050fcf1
;
; Called Functions:
;   FUN_004350a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435010
        ;   Label: FUN_00435010
    PUSH ESI                            ; 00435011
    PUSH EDI                            ; 00435012
    SUB ESP,0x300                       ; 00435013
    MOV EAX,ESP                         ; 00435019
    PUSH EAX                            ; 0043501b
    MOV EDX,dword ptr [ESP + 0x314]     ; 0043501c
    PUSH EDX                            ; 00435023
    CALL FUN_004350a0                   ; 00435024
        ;   XREF to: 004350a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004350a0()
    ADD ESP,0x8                         ; 00435029
    MOV ECX,ESP                         ; 0043502c
    MOV EBX,dword ptr [ESP + 0x314]     ; 0043502e
    LEA EDI,[ECX + 0x300]               ; 00435035
    XOR EDX,EDX                         ; 0043503b
        ;   Label: LAB_0043503b
    MOV DL,byte ptr [ECX]               ; 0043503d
    MOV EAX,EDX                         ; 0043503f
    SAR EDX,0x1f                        ; 00435041
    SHL EDX,0x3                         ; 00435044
    SBB EAX,EDX                         ; 00435047
    SAR EAX,0x3                         ; 00435049
    XOR EDX,EDX                         ; 0043504c
    MOV DL,byte ptr [ECX + 0x1]         ; 0043504e
    MOV ESI,EAX                         ; 00435051
    MOV EAX,EDX                         ; 00435053
    SAR EDX,0x1f                        ; 00435055
    SHL EDX,0x3                         ; 00435058
    SBB EAX,EDX                         ; 0043505b
    SAR EAX,0x3                         ; 0043505d
    SHL ESI,0xa                         ; 00435060
    XOR EDX,EDX                         ; 00435063
    SHL EAX,0x5                         ; 00435065
    MOV DL,byte ptr [ECX + 0x2]         ; 00435068
    ADD ESI,EAX                         ; 0043506b
    MOV EAX,EDX                         ; 0043506d
    SAR EDX,0x1f                        ; 0043506f
    SHL EDX,0x3                         ; 00435072
    SBB EAX,EDX                         ; 00435075
    SAR EAX,0x3                         ; 00435077
    INC EBX                             ; 0043507a
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1c62070] ; 0043507b
    ADD ECX,0x3                         ; 00435082
    MOV byte ptr [EBX + -0x1],AL        ; 00435085
    CMP ECX,EDI                         ; 00435088
    JNZ 0x0043503b                      ; 0043508a
        ;   XREF to: 0043503b (CONDITIONAL_JUMP)  ; LAB_0043503b
    ADD ESP,0x300                       ; 0043508c
    POP EDI                             ; 00435092
    POP ESI                             ; 00435093
    POP EBX                             ; 00435094
    RET                                 ; 00435095

