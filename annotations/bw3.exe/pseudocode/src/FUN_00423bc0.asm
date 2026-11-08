; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00423bc0(int param_1)
;
;
; XREF[4]:
;   FUN_00421060 at 00421297
;   FUN_004221c0 at 004222d1
;   FUN_00422570 at 0042270e
;   FUN_004229f0 at 004229f5
;
; Referenced Globals:
;   undefined4 DAT_005b78a9
;   undefined4 DAT_005b78ad
;
; Called Functions:
;   FUN_0041d840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423bc0
        ;   Label: FUN_00423bc0
    PUSH ESI                            ; 00423bc1
    PUSH EDI                            ; 00423bc2
    PUSH EBP                            ; 00423bc3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00423bc4
    LEA EBX,[EDI + 0x1be68]             ; 00423bc8
    LEA ESI,[EDI + 0xd064]              ; 00423bce
    MOV EAX,EBX                         ; 00423bd4
    MOV EBP,ESI                         ; 00423bd6
    CMP EBX,ESI                         ; 00423bd8
    JNZ 0x00423cad                      ; 00423bda
        ;   XREF to: 00423cad (CONDITIONAL_JUMP)  ; LAB_00423cad
    LEA EBX,[EAX + 0xc]                 ; 00423be0
        ;   Label: LAB_00423be0
    CMP EBX,EBP                         ; 00423be3
    JZ 0x00423bf8                       ; 00423be5
        ;   XREF to: 00423bf8 (CONDITIONAL_JUMP)  ; LAB_00423bf8
    MOV EAX,dword ptr [EBP]             ; 00423be7
    MOV dword ptr [EBX],EAX             ; 00423bea
    MOV EAX,dword ptr [EBP + 0x4]       ; 00423bec
    MOV dword ptr [EBX + 0x4],EAX       ; 00423bef
    MOV EAX,dword ptr [EBP + 0x8]       ; 00423bf2
    MOV dword ptr [EBX + 0x8],EAX       ; 00423bf5
    MOV ESI,0x1                         ; 00423bf8
        ;   Label: LAB_00423bf8
    CMP ESI,dword ptr [EDI + 0xd058]    ; 00423bfd
    JGE 0x00423c30                      ; 00423c03
        ;   XREF to: 00423c30 (CONDITIONAL_JUMP)  ; LAB_00423c30
    LEA EBP,[EDI + 0x1be68]             ; 00423c05
    LEA EBX,[EDI + 0xd0a4]              ; 00423c0b
    PUSH EBX                            ; 00423c11
        ;   Label: LAB_00423c11
    PUSH EBP                            ; 00423c12
    INC ESI                             ; 00423c13
    CALL FUN_0041d840                   ; 00423c14
        ;   XREF to: 0041d840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d840()
    ADD EBX,0x40                        ; 00423c19
    MOV ECX,dword ptr [EDI + 0xd058]    ; 00423c1c
    ADD ESP,0x8                         ; 00423c22
    CMP ESI,ECX                         ; 00423c25
    JL 0x00423c11                       ; 00423c27
        ;   XREF to: 00423c11 (CONDITIONAL_JUMP)  ; LAB_00423c11
    LEA EAX,[EAX]                       ; 00423c29
    NOP                                 ; 00423c2f
    FLD float ptr [EDI + 0x1be68]       ; 00423c30
        ;   Label: LAB_00423c30
    FLD float ptr [EDI + 0x1be6c]       ; 00423c36
    FLD float ptr [EDI + 0x1be70]       ; 00423c3c
    FLD float ptr [EDI + 0x1be74]       ; 00423c42
    FLD float ptr [EDI + 0x1be78]       ; 00423c48
    FLD float ptr [EDI + 0x1be7c]       ; 00423c4e
    FXCH ST5                            ; 00423c54
    FLD float ptr [0x005b78a9]          ; 00423c56 | DAT_005b78a9
    FXCH                                ; 00423c5c
    FADD ST0,ST1                        ; 00423c5e
    FXCH ST5                            ; 00423c60
    FADD ST0,ST1                        ; 00423c62
    FXCH ST4                            ; 00423c64
    FADDP                               ; 00423c66
    FXCH ST2                            ; 00423c68
    FLD float ptr [0x005b78ad]          ; 00423c6a | DAT_005b78ad
    FXCH                                ; 00423c70
    FADD ST0,ST1                        ; 00423c72
    FXCH ST2                            ; 00423c74
    FADD ST0,ST1                        ; 00423c76
    FXCH ST6                            ; 00423c78
    FADDP                               ; 00423c7a
    FXCH ST3                            ; 00423c7c
    FSTP float ptr [EDI + 0x1be6c]      ; 00423c7e
    FXCH                                ; 00423c84
    FSTP float ptr [EDI + 0x1be70]      ; 00423c86
    FSTP float ptr [EDI + 0x1be74]      ; 00423c8c
    FXCH ST2                            ; 00423c92
    FSTP float ptr [EDI + 0x1be78]      ; 00423c94
    FXCH                                ; 00423c9a
    FSTP float ptr [EDI + 0x1be7c]      ; 00423c9c
    FSTP float ptr [EDI + 0x1be68]      ; 00423ca2
    POP EBP                             ; 00423ca8
    POP EDI                             ; 00423ca9
    POP ESI                             ; 00423caa
    POP EBX                             ; 00423cab
    RET                                 ; 00423cac
    MOV EDX,dword ptr [ESI]             ; 00423cad
        ;   Label: LAB_00423cad
    MOV dword ptr [EBX],EDX             ; 00423caf
    MOV EDX,dword ptr [ESI + 0x4]       ; 00423cb1
    MOV dword ptr [EBX + 0x4],EDX       ; 00423cb4
    MOV EDX,dword ptr [ESI + 0x8]       ; 00423cb7
    MOV dword ptr [EBX + 0x8],EDX       ; 00423cba
    JMP 0x00423be0                      ; 00423cbd
        ;   XREF to: 00423be0 (UNCONDITIONAL_JUMP)  ; LAB_00423be0

