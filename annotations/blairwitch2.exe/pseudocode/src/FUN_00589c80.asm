; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00589c80(int param_1,float param_2)
;
;
; XREF[10]:
;   FUN_00410960 at 00410976
;   FUN_0043a580 at 0043a58f
;   FUN_0047a1e0 at 0047a1f6
;   FUN_00485a30 at 00485a51
;   FUN_004a0e60 at 004a0e72
;   FUN_004e38d0 at 004e38df
;   FUN_004eacf0 at 004eacf9
;   FUN_0053f060 at 0053f081
;   FUN_00576130 at 00576146
;   FUN_0059ccf0 at 0059ccfd
;
; Called Functions:
;   FUN_00408ae0
;   FUN_005b2290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589c80
        ;   Label: FUN_00589c80
    PUSH ESI                            ; 00589c81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00589c82
    FLD float ptr [EBX + 0x45c]         ; 00589c86
    FLDZ                                ; 00589c8c
    FCOMPP                              ; 00589c8e
    FNSTSW AX                           ; 00589c90
    SAHF                                ; 00589c92
    JC 0x00589d2d                       ; 00589c93
        ;   XREF to: 00589d2d (CONDITIONAL_JUMP)  ; LAB_00589d2d
    MOV EDX,dword ptr [EBX + 0x460]     ; 00589c99
        ;   Label: LAB_00589c99
    TEST EDX,EDX                        ; 00589c9f
    JNZ 0x00589d21                      ; 00589ca1
        ;   XREF to: 00589d21 (CONDITIONAL_JUMP)  ; LAB_00589d21
    CMP dword ptr [EBX + 0x430],0x0     ; 00589ca7
    JNZ 0x00589d21                      ; 00589cae
        ;   XREF to: 00589d21 (CONDITIONAL_JUMP)  ; LAB_00589d21
    FLD float ptr [EBX + 0x6cc]         ; 00589cb0
    FLDZ                                ; 00589cb6
    FCOMPP                              ; 00589cb8
    FNSTSW AX                           ; 00589cba
    SAHF                                ; 00589cbc
    JNC 0x00589d21                      ; 00589cbd
        ;   XREF to: 00589d21 (CONDITIONAL_JUMP)  ; LAB_00589d21
    FLD float ptr [EBX + 0x6cc]         ; 00589cbf
    FSUB float ptr [ESP + 0x10]         ; 00589cc5
    FST float ptr [EBX + 0x6cc]         ; 00589cc9
    FLDZ                                ; 00589ccf
    FCOMPP                              ; 00589cd1
    FNSTSW AX                           ; 00589cd3
    SAHF                                ; 00589cd5
    JBE 0x00589cde                      ; 00589cd6
        ;   XREF to: 00589cde (CONDITIONAL_JUMP)  ; LAB_00589cde
    MOV dword ptr [EBX + 0x6cc],EDX     ; 00589cd8
    LEA ESI,[EBX + 0x464]               ; 00589cde
        ;   Label: LAB_00589cde
    PUSH dword ptr [ESP + 0x10]         ; 00589ce4
    PUSH ESI                            ; 00589ce8
    CALL FUN_005b2290                   ; 00589ce9
        ;   XREF to: 005b2290 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2290()
    LEA EAX,[EBX + 0x20]                ; 00589cee
    MOV EDX,dword ptr [ESI]             ; 00589cf1
    MOV dword ptr [EAX],EDX             ; 00589cf3
    MOV EDX,dword ptr [ESI + 0x4]       ; 00589cf5
    MOV dword ptr [EAX + 0x4],EDX       ; 00589cf8
    FLD float ptr [ESI + 0x8]           ; 00589cfb
    LEA ESI,[EBX + 0x30]                ; 00589cfe
    FSTP float ptr [EAX + 0x8]          ; 00589d01
    LEA EAX,[EBX + 0x470]               ; 00589d04
    ADD ESP,0x8                         ; 00589d0a
    CMP ESI,EAX                         ; 00589d0d
    JZ 0x00589d21                       ; 00589d0f
        ;   XREF to: 00589d21 (CONDITIONAL_JUMP)  ; LAB_00589d21
    MOV EDX,dword ptr [EAX]             ; 00589d11
    MOV dword ptr [ESI],EDX             ; 00589d13
    MOV EDX,dword ptr [EAX + 0x4]       ; 00589d15
    MOV dword ptr [ESI + 0x4],EDX       ; 00589d18
    MOV EDX,dword ptr [EAX + 0x8]       ; 00589d1b
    MOV dword ptr [ESI + 0x8],EDX       ; 00589d1e
    PUSH EBX                            ; 00589d21
        ;   Label: LAB_00589d21
    CALL FUN_00408ae0                   ; 00589d22
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    ADD ESP,0x4                         ; 00589d27
    POP ESI                             ; 00589d2a
    POP EBX                             ; 00589d2b
    RET                                 ; 00589d2c
    FLD float ptr [EBX + 0x45c]         ; 00589d2d
        ;   Label: LAB_00589d2d
    FSUB float ptr [ESP + 0x10]         ; 00589d33
    FST float ptr [EBX + 0x45c]         ; 00589d37
    FLDZ                                ; 00589d3d
    FCOMPP                              ; 00589d3f
    FNSTSW AX                           ; 00589d41
    SAHF                                ; 00589d43
    JBE 0x00589c99                      ; 00589d44
        ;   XREF to: 00589c99 (CONDITIONAL_JUMP)  ; LAB_00589c99
    MOV dword ptr [EBX + 0x45c],0x0     ; 00589d4a
    JMP 0x00589c99                      ; 00589d54
        ;   XREF to: 00589c99 (UNCONDITIONAL_JUMP)  ; LAB_00589c99

