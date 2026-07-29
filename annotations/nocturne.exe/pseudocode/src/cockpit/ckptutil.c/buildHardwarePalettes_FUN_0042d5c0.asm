; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_0042d5c0(SRGBColorPalette *rgb_palette_data)
;
; Parameters:
; SRGBColorPalette * Stack[0x4]:4   rgb_palette_data
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00020
;   undefined4 DAT_01c00024
;   undefined4 DAT_01c00028
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c00634
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d5c0
        ;   Label: cockpit_ckptutil.c_buildHardwarePalettes_FUN_0042d5c0
    PUSH ESI                            ; 0042d5c1
    PUSH EDI                            ; 0042d5c2
    PUSH EBP                            ; 0042d5c3
    SUB ESP,0x8                         ; 0042d5c4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0042d5c7
    MOV EDX,dword ptr [0x005b7624]      ; 0042d5cb | DAT_005b7624
    MOV dword ptr [0x01c00020],EBX      ; 0042d5d1 | DAT_01c00020
    CMP EDX,0x20                        ; 0042d5d7
    JNZ 0x0042d63b                      ; 0042d5da
        ;   XREF to: 0042d63b (CONDITIONAL_JUMP)  ; LAB_0042d63b
    MOV EDX,dword ptr [0x005b7624]      ; 0042d5dc | DAT_005b7624
    XOR EAX,EAX                         ; 0042d5e2
    MOVZX EBP,byte ptr [EBX + 0x1]      ; 0042d5e4
        ;   Label: LAB_0042d5e4
    MOVZX EDI,byte ptr [EBX]            ; 0042d5e8
    MOVZX ESI,byte ptr [EBX + 0x2]      ; 0042d5eb
    CMP EDX,0x20                        ; 0042d5ef
    JNZ 0x0042d62d                      ; 0042d5f2
        ;   XREF to: 0042d62d (CONDITIONAL_JUMP)  ; LAB_0042d62d
    MOV CL,byte ptr [0x01c00624]        ; 0042d5f4 | DAT_01c00624
    SHL EDI,CL                          ; 0042d5fa
    MOV CL,byte ptr [0x01c00630]        ; 0042d5fc | DAT_01c00630
    SHL EBP,CL                          ; 0042d602
    MOV CL,byte ptr [0x01c0063c]        ; 0042d604 | DAT_01c0063c
    SHL ESI,CL                          ; 0042d60a
    OR EDI,EBP                          ; 0042d60c
    MOV ECX,ESI                         ; 0042d60e
    OR ECX,EDI                          ; 0042d610
    ADD EAX,0x4                         ; 0042d612
        ;   Label: LAB_0042d612
    ADD EBX,0x3                         ; 0042d615
    MOV dword ptr [EAX + 0x1c00020],ECX ; 0042d618 | DAT_01c00024 | DAT_01c00028
    CMP EAX,0x400                       ; 0042d61e
    JNZ 0x0042d5e4                      ; 0042d623
        ;   XREF to: 0042d5e4 (CONDITIONAL_JUMP)  ; LAB_0042d5e4
    ADD ESP,0x8                         ; 0042d625
    POP EBP                             ; 0042d628
    POP EDI                             ; 0042d629
    POP ESI                             ; 0042d62a
    POP EBX                             ; 0042d62b
    RET                                 ; 0042d62c
    MOV ECX,EBP                         ; 0042d62d
        ;   Label: LAB_0042d62d
    SHL EDI,0x10                        ; 0042d62f
    SHL ECX,0x8                         ; 0042d632
    OR ECX,EDI                          ; 0042d635
    OR ECX,ESI                          ; 0042d637
    JMP 0x0042d612                      ; 0042d639
        ;   XREF to: 0042d612 (UNCONDITIONAL_JUMP)  ; LAB_0042d612
    XOR ESI,ESI                         ; 0042d63b
        ;   Label: LAB_0042d63b
    XOR EAX,EAX                         ; 0042d63d
        ;   Label: LAB_0042d63d
    MOV EDI,dword ptr [0x01c00628]      ; 0042d63f | DAT_01c00628
    MOV AL,byte ptr [EBX]               ; 0042d645
    XOR EDX,EDX                         ; 0042d647
    MOV dword ptr [ESP],EAX             ; 0042d649
    DIV EDI                             ; 0042d64c
    XOR ECX,ECX                         ; 0042d64e
    MOV CL,byte ptr [EBX + 0x1]         ; 0042d650
    MOV dword ptr [ESP + 0x4],ECX       ; 0042d653
    MOV dword ptr [ESP],EAX             ; 0042d657
    XOR EDX,EDX                         ; 0042d65a
    MOV EAX,ECX                         ; 0042d65c
    DIV dword ptr [0x01c00634]          ; 0042d65e | DAT_01c00634
    MOVZX EBP,byte ptr [EBX + 0x2]      ; 0042d664
    MOV EDI,dword ptr [0x01c00640]      ; 0042d668 | DAT_01c00640
    MOV dword ptr [ESP + 0x4],EAX       ; 0042d66e
    XOR EDX,EDX                         ; 0042d672
    MOV EAX,EBP                         ; 0042d674
    DIV EDI                             ; 0042d676
    MOV CL,byte ptr [0x01c00624]        ; 0042d678 | DAT_01c00624
    MOV EDX,dword ptr [ESP]             ; 0042d67e
    MOV EDI,EAX                         ; 0042d681
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042d683
    SHL EDX,CL                          ; 0042d687
    MOV CL,byte ptr [0x01c00630]        ; 0042d689 | DAT_01c00630
    SHL EAX,CL                          ; 0042d68f
    MOV CL,byte ptr [0x01c0063c]        ; 0042d691 | DAT_01c0063c
    OR EAX,EDX                          ; 0042d697
    SHL EDI,CL                          ; 0042d699
    ADD ESI,0x2                         ; 0042d69b
    OR EAX,EDI                          ; 0042d69e
    ADD EBX,0x3                         ; 0042d6a0
    MOV word ptr [ESI + 0x1c00422],AX   ; 0042d6a3
    CMP ESI,0x200                       ; 0042d6aa
    JNZ 0x0042d63d                      ; 0042d6b0
        ;   XREF to: 0042d63d (CONDITIONAL_JUMP)  ; LAB_0042d63d
    ADD ESP,0x8                         ; 0042d6b2
    POP EBP                             ; 0042d6b5
    POP EDI                             ; 0042d6b6
    POP ESI                             ; 0042d6b7
    POP EBX                             ; 0042d6b8
    RET                                 ; 0042d6b9

