; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_colquant_c_FUN_00440b40(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_colquant.c_FUN_004406c0 at 00440926
;
; Called Functions:
;   engine_colquant.c_FUN_00441110
;   engine_colquant.c_FUN_00441260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440b40
        ;   Label: engine_colquant.c_FUN_00440b40
    PUSH ESI                            ; 00440b41
    PUSH EDI                            ; 00440b42
    PUSH EBP                            ; 00440b43
    SUB ESP,0x8                         ; 00440b44
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00440b47
    MOV EDI,dword ptr [ESP + 0x20]      ; 00440b4b
    SHL EDI,0x6                         ; 00440b4f
    MOV EAX,dword ptr [EDI + EBX*0x1 + 0x4040] ; 00440b52
    MOV ECX,dword ptr [EDI + EBX*0x1 + 0x4044] ; 00440b59
    MOV dword ptr [ESP + 0x4],EAX       ; 00440b60
    LEA EDX,[EAX + ECX*0x1]             ; 00440b64
    MOV EDI,dword ptr [EDI + EBX*0x1 + 0x4006] ; 00440b67
    DEC EDX                             ; 00440b6e
    SAR EDI,0x10                        ; 00440b6f
    CMP EDX,EAX                         ; 00440b72
    JLE 0x00440bf2                      ; 00440b74
        ;   XREF to: 00440bf2 (CONDITIONAL_JUMP)  ; LAB_00440bf2
    SHL EAX,0x2                         ; 00440b7a
    MOV dword ptr [ESP],EAX             ; 00440b7d
    MOV ESI,dword ptr [ESP]             ; 00440b80
        ;   Label: LAB_00440b80
    MOV EAX,dword ptr [EBX + 0x2004]    ; 00440b83
    ADD EAX,ESI                         ; 00440b89
    MOV AL,byte ptr [EAX]               ; 00440b8b
    AND EAX,0xff                        ; 00440b8d
    CMP EAX,EDI                         ; 00440b92
    JLE 0x00440bdc                      ; 00440b94
        ;   XREF to: 00440bdc (CONDITIONAL_JUMP)  ; LAB_00440bdc
    MOV ESI,dword ptr [ESP + 0x4]       ; 00440b96
    LEA EAX,[EDX*0x4 + 0x0]             ; 00440b9a
    SHL ESI,0x2                         ; 00440ba1
    CMP ESI,EAX                         ; 00440ba4
        ;   Label: LAB_00440ba4
    JGE 0x00440bc1                      ; 00440ba6
        ;   XREF to: 00440bc1 (CONDITIONAL_JUMP)  ; LAB_00440bc1
    MOV ECX,dword ptr [EBX + 0x2004]    ; 00440ba8
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00440bae
    AND ECX,0xff                        ; 00440bb1
    CMP ECX,EDI                         ; 00440bb7
    JLE 0x00440bc1                      ; 00440bb9
        ;   XREF to: 00440bc1 (CONDITIONAL_JUMP)  ; LAB_00440bc1
    DEC EDX                             ; 00440bbb
    SUB EAX,0x4                         ; 00440bbc
    JMP 0x00440ba4                      ; 00440bbf
        ;   XREF to: 00440ba4 (UNCONDITIONAL_JUMP)  ; LAB_00440ba4
    MOV ECX,dword ptr [ESP]             ; 00440bc1
        ;   Label: LAB_00440bc1
    MOV ESI,dword ptr [EBX + 0x2004]    ; 00440bc4
    ADD ECX,ESI                         ; 00440bca
    MOV ESI,dword ptr [ESI + EDX*0x4]   ; 00440bcc
    MOV EBP,dword ptr [ECX]             ; 00440bcf
    MOV dword ptr [ECX],ESI             ; 00440bd1
    MOV ECX,dword ptr [EBX + 0x2004]    ; 00440bd3
    MOV dword ptr [ECX + EDX*0x4],EBP   ; 00440bd9
    MOV EBP,dword ptr [ESP]             ; 00440bdc
        ;   Label: LAB_00440bdc
    MOV EAX,dword ptr [ESP + 0x4]       ; 00440bdf
    ADD EBP,0x4                         ; 00440be3
    INC EAX                             ; 00440be6
    MOV dword ptr [ESP],EBP             ; 00440be7
    MOV dword ptr [ESP + 0x4],EAX       ; 00440bea
    CMP EDX,EAX                         ; 00440bee
    JG 0x00440b80                       ; 00440bf0
        ;   XREF to: 00440b80 (CONDITIONAL_JUMP)  ; LAB_00440b80
    MOV EAX,dword ptr [ESP + 0x24]      ; 00440bf2
        ;   Label: LAB_00440bf2
    MOV ESI,dword ptr [ESP + 0x20]      ; 00440bf6
    SHL EAX,0x6                         ; 00440bfa
    SHL ESI,0x6                         ; 00440bfd
    MOV dword ptr [EBX + EAX*0x1 + 0x4040],EDX ; 00440c00
    MOV ECX,EDX                         ; 00440c07
    MOV EBP,dword ptr [ESI + EBX*0x1 + 0x4040] ; 00440c09
    MOV EDI,dword ptr [ESI + EBX*0x1 + 0x4044] ; 00440c10
    SUB ECX,EBP                         ; 00440c17
    MOV EBP,EDI                         ; 00440c19
    SUB EBP,ECX                         ; 00440c1b
    MOV dword ptr [EBX + EAX*0x1 + 0x4044],EBP ; 00440c1d
    MOV EAX,dword ptr [ESI + EBX*0x1 + 0x4040] ; 00440c24
    SUB EDX,EAX                         ; 00440c2b
    MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDX ; 00440c2d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00440c34
    PUSH EDX                            ; 00440c38
    PUSH EBX                            ; 00440c39
    CALL engine_colquant.c_FUN_00441260 ; 00440c3a
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_FUN_00441260()
    ADD ESP,0x8                         ; 00440c3f
    MOV ECX,dword ptr [ESP + 0x24]      ; 00440c42
    PUSH ECX                            ; 00440c46
    PUSH EBX                            ; 00440c47
    CALL engine_colquant.c_FUN_00441260 ; 00440c48
        ;   XREF to: 00441260 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_FUN_00441260()
    ADD ESP,0x8                         ; 00440c4d
    MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDI ; 00440c50
    MOV ESI,dword ptr [ESP + 0x24]      ; 00440c57
    PUSH ESI                            ; 00440c5b
    MOV EDI,dword ptr [ESP + 0x24]      ; 00440c5c
    PUSH EDI                            ; 00440c60
    PUSH EBX                            ; 00440c61
    CALL engine_colquant.c_FUN_00441110 ; 00440c62
        ;   XREF to: 00441110 (UNCONDITIONAL_CALL)  ; void engine_colquant.c_FUN_00441110()
    ADD ESP,0xc                         ; 00440c67
    ADD ESP,0x8                         ; 00440c6a
    POP EBP                             ; 00440c6d
    POP EDI                             ; 00440c6e
    POP ESI                             ; 00440c6f
    POP EBX                             ; 00440c70
    RET                                 ; 00440c71

