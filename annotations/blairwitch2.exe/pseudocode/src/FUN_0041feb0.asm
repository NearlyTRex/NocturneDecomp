; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0041feb0(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_00420840 at 00420915
;
; Referenced Globals:
;   undefined4 DAT_005f3e28
;
; Called Functions:
;   FUN_00422120
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041feb0
        ;   Label: FUN_0041feb0
    PUSH ESI                            ; 0041feb1
    SUB ESP,0x14                        ; 0041feb2
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041feb5
    FLD float ptr [ESP + 0x24]          ; 0041feb9
    FSUB float ptr [ESI + 0x1e628]      ; 0041febd
    FLD1                                ; 0041fec3
    FDIV float ptr [0x005f3e28]         ; 0041fec5 | DAT_005f3e28
    FLD float ptr [ESP + 0x28]          ; 0041fecb
    FSUB float ptr [ESI + 0x1e62c]      ; 0041fecf
    FXCH ST2                            ; 0041fed5
    FMUL ST1                            ; 0041fed7
    FXCH ST2                            ; 0041fed9
    FMULP                               ; 0041fedb
    FXCH                                ; 0041fedd
    FSTP float ptr [ESP + 0x24]         ; 0041fedf
    FST float ptr [ESP + 0x28]          ; 0041fee3
    FLD float ptr [ESP + 0x24]          ; 0041fee7
    CALL FUN_005b7ff0                   ; 0041feeb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0041fef0
    CALL FUN_005b7ff0                   ; 0041fef2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0041fef7
    FISTP dword ptr [ESP + 0xc]         ; 0041fef9
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041fefd
    FISTP dword ptr [ESP + 0x8]         ; 0041ff01
    TEST EDX,EDX                        ; 0041ff05
    JL 0x0041ff6b                       ; 0041ff07
        ;   XREF to: 0041ff6b (CONDITIONAL_JUMP)  ; LAB_0041ff6b
    CMP EDX,0xb                         ; 0041ff09
    JGE 0x0041ff73                      ; 0041ff0c
        ;   XREF to: 0041ff73 (CONDITIONAL_JUMP)  ; LAB_0041ff73
    LEA EBX,[EDX + 0x1]                 ; 0041ff0e
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041ff11
        ;   Label: LAB_0041ff11
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041ff15
    SUB EAX,EDX                         ; 0041ff1c
    MOV EDX,EAX                         ; 0041ff1e
    LEA EAX,[EBX*0x4 + 0x0]             ; 0041ff20
    SUB EAX,EBX                         ; 0041ff27
    SHL EDX,0x4                         ; 0041ff29
    SHL EAX,0x4                         ; 0041ff2c
    LEA EBX,[ESI + EDX*0x1]             ; 0041ff2f
    ADD ESI,EAX                         ; 0041ff32
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041ff34
    TEST EAX,EAX                        ; 0041ff38
    JL 0x0041ff7e                       ; 0041ff3a
        ;   XREF to: 0041ff7e (CONDITIONAL_JUMP)  ; LAB_0041ff7e
    CMP EAX,0xb                         ; 0041ff3c
    JL 0x0041ff8c                       ; 0041ff3f
        ;   XREF to: 0041ff8c (CONDITIONAL_JUMP)  ; LAB_0041ff8c
    PUSH dword ptr [ESI + 0x17520]      ; 0041ff41
    PUSH dword ptr [EBX + 0x17520]      ; 0041ff47
    CALL FUN_00422120                   ; 0041ff4d
        ;   XREF to: 00422120 (UNCONDITIONAL_CALL)  ; undefined FUN_00422120()
        ;   Label: LAB_0041ff4d
    MOV dword ptr [ESP + 0x18],EAX      ; 0041ff52
    FLD float ptr [ESP + 0x18]          ; 0041ff56
    ADD ESP,0x8                         ; 0041ff5a
    FSTP float ptr [ESP + 0x4]          ; 0041ff5d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041ff61
    ADD ESP,0x14                        ; 0041ff65
    POP ESI                             ; 0041ff68
    POP EBX                             ; 0041ff69
    RET                                 ; 0041ff6a
    XOR EBX,EBX                         ; 0041ff6b
        ;   Label: LAB_0041ff6b
    MOV dword ptr [ESP + 0xc],EBX       ; 0041ff6d
    JMP 0x0041ff11                      ; 0041ff71
        ;   XREF to: 0041ff11 (UNCONDITIONAL_JUMP)  ; LAB_0041ff11
    MOV EBX,0xb                         ; 0041ff73
        ;   Label: LAB_0041ff73
    MOV dword ptr [ESP + 0xc],EBX       ; 0041ff78
    JMP 0x0041ff11                      ; 0041ff7c
        ;   XREF to: 0041ff11 (UNCONDITIONAL_JUMP)  ; LAB_0041ff11
    PUSH dword ptr [ESI + 0x174f4]      ; 0041ff7e
        ;   Label: LAB_0041ff7e
    PUSH dword ptr [EBX + 0x174f4]      ; 0041ff84
    JMP 0x0041ff4d                      ; 0041ff8a
        ;   XREF to: 0041ff4d (UNCONDITIONAL_JUMP)  ; LAB_0041ff4d
    PUSH EDI                            ; 0041ff8c
        ;   Label: LAB_0041ff8c
    MOV EDI,EAX                         ; 0041ff8d
    SHL EAX,0x2                         ; 0041ff8f
    LEA EDX,[ESI + EAX*0x1]             ; 0041ff92
    PUSH dword ptr [EDX + 0x174f4]      ; 0041ff95
    PUSH dword ptr [EBX + EAX*0x1 + 0x174f4] ; 0041ff9b
    CALL FUN_00422120                   ; 0041ffa2
        ;   XREF to: 00422120 (UNCONDITIONAL_CALL)  ; undefined FUN_00422120()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041ffa7
    FLD float ptr [ESP + 0x1c]          ; 0041ffab
    ADD ESP,0x8                         ; 0041ffaf
    PUSH dword ptr [ESI + EDI*0x4 + 0x174f8] ; 0041ffb2
    PUSH dword ptr [EBX + EDI*0x4 + 0x174f8] ; 0041ffb9
    FSTP float ptr [ESP + 0xc]          ; 0041ffc0
    CALL FUN_00422120                   ; 0041ffc4
        ;   XREF to: 00422120 (UNCONDITIONAL_CALL)  ; undefined FUN_00422120()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041ffc9
    FLD float ptr [ESP + 0x1c]          ; 0041ffcd
    ADD ESP,0x8                         ; 0041ffd1
    SUB ESP,0x4                         ; 0041ffd4
    FSTP float ptr [ESP]                ; 0041ffd7
    PUSH dword ptr [ESP + 0x8]          ; 0041ffda
    CALL FUN_00422120                   ; 0041ffde
        ;   XREF to: 00422120 (UNCONDITIONAL_CALL)  ; undefined FUN_00422120()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041ffe3
    FLD float ptr [ESP + 0x1c]          ; 0041ffe7
    ADD ESP,0x8                         ; 0041ffeb
    FSTP float ptr [ESP + 0x8]          ; 0041ffee
    POP EDI                             ; 0041fff2
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041fff3
    ADD ESP,0x14                        ; 0041fff7
    POP ESI                             ; 0041fffa
    POP EBX                             ; 0041fffb
    RET                                 ; 0041fffc

