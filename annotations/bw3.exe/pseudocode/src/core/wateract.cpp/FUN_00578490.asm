; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_00578490(int param_1)
;
;
; XREF[1]:
;   core_wateract.cpp_FUN_00577ee0 at 005781b1
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578490
        ;   Label: core_wateract.cpp_FUN_00578490
    PUSH ESI                            ; 00578491
    PUSH EDI                            ; 00578492
    PUSH EBP                            ; 00578493
    SUB ESP,0x3c                        ; 00578494
    MOV EAX,dword ptr [ESP + 0x50]      ; 00578497
    MOV EDX,dword ptr [EAX + 0x29c]     ; 0057849b
    XOR EBP,EBP                         ; 005784a1
    TEST EDX,EDX                        ; 005784a3
    JLE 0x0057854f                      ; 005784a5
        ;   XREF to: 0057854f (CONDITIONAL_JUMP)  ; LAB_0057854f
    ADD EAX,0x2a0                       ; 005784ab
    MOV dword ptr [ESP + 0x38],EAX      ; 005784b0
    MOV EAX,dword ptr [ESP + 0x50]      ; 005784b4
    ADD EAX,0x3c                        ; 005784b8
    MOV dword ptr [ESP + 0x30],EAX      ; 005784bb
    MOV EAX,dword ptr [ESP + 0x50]      ; 005784bf
    MOV EBX,dword ptr [ESP + 0x50]      ; 005784c3
    ADD EAX,0x20                        ; 005784c7
    ADD EBX,0x2ac                       ; 005784ca
    MOV dword ptr [ESP + 0x34],EAX      ; 005784d0
    MOV EAX,EBP                         ; 005784d4
        ;   Label: LAB_005784d4
    MOV ESI,dword ptr [ESP + 0x38]      ; 005784d6
    SHL EAX,0x5                         ; 005784da
    ADD EAX,ESI                         ; 005784dd
    PUSH EAX                            ; 005784df
    MOV EDI,dword ptr [ESP + 0x34]      ; 005784e0
    PUSH EDI                            ; 005784e4
    LEA ESI,[ESP + 0x8]                 ; 005784e5
    CALL core_dirmat.cpp_FUN_0045b800   ; 005784e9
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA EDI,[ESP + 0x2c]                ; 005784ee
    LEA ESI,[ESP + 0x8]                 ; 005784f2
    ADD ESP,0x8                         ; 005784f6
    MOVSD ES:EDI,ESI                    ; 005784f9
    MOVSD ES:EDI,ESI                    ; 005784fa
    MOVSD ES:EDI,ESI                    ; 005784fb
    MOV EAX,dword ptr [ESP + 0x34]      ; 005784fc
    FLD float ptr [ESP + 0x24]          ; 00578500
    FLD float ptr [ESP + 0x28]          ; 00578504
    FLD float ptr [ESP + 0x2c]          ; 00578508
    LEA EDI,[ESP + 0xc]                 ; 0057850c
    LEA ESI,[ESP + 0x18]                ; 00578510
    FXCH ST2                            ; 00578514
    FADD float ptr [EAX]                ; 00578516
    FXCH                                ; 00578518
    FADD float ptr [EAX + 0x4]          ; 0057851a
    FXCH ST2                            ; 0057851d
    FADD float ptr [EAX + 0x8]          ; 0057851f
    FXCH                                ; 00578522
    FSTP float ptr [ESP + 0x18]         ; 00578524
    FXCH                                ; 00578528
    FSTP float ptr [ESP + 0x1c]         ; 0057852a
    FSTP float ptr [ESP + 0x20]         ; 0057852e
    LEA EAX,[ESP + 0xc]                 ; 00578532
    MOVSD ES:EDI,ESI                    ; 00578536
    MOVSD ES:EDI,ESI                    ; 00578537
    MOVSD ES:EDI,ESI                    ; 00578538
    CMP EBX,EAX                         ; 00578539
    JNZ 0x00578557                      ; 0057853b
        ;   XREF to: 00578557 (CONDITIONAL_JUMP)  ; LAB_00578557
    MOV EAX,dword ptr [ESP + 0x50]      ; 0057853d
        ;   Label: LAB_0057853d
    INC EBP                             ; 00578541
    MOV ECX,dword ptr [EAX + 0x29c]     ; 00578542
    ADD EBX,0x20                        ; 00578548
    CMP EBP,ECX                         ; 0057854b
    JL 0x005784d4                       ; 0057854d
        ;   XREF to: 005784d4 (CONDITIONAL_JUMP)  ; LAB_005784d4
    ADD ESP,0x3c                        ; 0057854f
        ;   Label: LAB_0057854f
    POP EBP                             ; 00578552
    POP EDI                             ; 00578553
    POP ESI                             ; 00578554
    POP EBX                             ; 00578555
    RET                                 ; 00578556
    MOV EAX,dword ptr [ESP + 0xc]       ; 00578557
        ;   Label: LAB_00578557
    MOV dword ptr [EBX],EAX             ; 0057855b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057855d
    MOV dword ptr [EBX + 0x4],EAX       ; 00578561
    MOV EAX,dword ptr [ESP + 0x14]      ; 00578564
    MOV dword ptr [EBX + 0x8],EAX       ; 00578568
    JMP 0x0057853d                      ; 0057856b
        ;   XREF to: 0057853d (UNCONDITIONAL_JUMP)  ; LAB_0057853d

