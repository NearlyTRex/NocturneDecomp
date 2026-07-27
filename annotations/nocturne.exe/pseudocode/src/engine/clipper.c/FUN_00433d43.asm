; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_00433d43(void)
;
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 DAT_00767b40
;   undefined4 DAT_00767b4c
;   undefined1 DAT_00767b50
;   undefined4 DAT_00767b51
;
; Called Functions:
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 00433d43
        ;   Label: engine_clipper.c_FUN_00433d43
    MOV ESI,EDX                         ; 00433d49
    ADD EDI,0x767b4c                    ; 00433d4b | DAT_00767b4c
    PUSH EDI                            ; 00433d51
    MOV EAX,ECX                         ; 00433d52
    SHR ECX,0x2                         ; 00433d54
    MOVSD.REP ES:EDI,ESI                ; 00433d57 | DAT_00767b4c | DAT_00767b50
    MOV CL,AL                           ; 00433d59
    AND CL,0x3                          ; 00433d5b
    MOVSB.REP ES:EDI,ESI                ; 00433d5e | DAT_00767b50 | DAT_00767b51
    POP EDI                             ; 00433d60
    MOV ECX,dword ptr [0x00767b40]      ; 00433d61 | DAT_00767b40
    INC ECX                             ; 00433d67
    MOV dword ptr [0x00767b40],ECX      ; 00433d68 | DAT_00767b40
    IMUL EAX,ECX,0x30                   ; 00433d6e
    ADD EAX,0x767b4c                    ; 00433d71 | DAT_00767b4c
    PUSH EAX                            ; 00433d76
    PUSH EBP                            ; 00433d77
    PUSH EDX                            ; 00433d78
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0 ; 00433d79
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0()
    MOV EDI,dword ptr [0x00767b40]      ; 00433d7e | DAT_00767b40
    INC EDI                             ; 00433d84
    ADD ESP,0xc                         ; 00433d85
    MOV dword ptr [0x00767b40],EDI      ; 00433d88 | DAT_00767b40
    JMP 0x00433cfb                      ; 00433d8e
        ;   XREF to: 00433cfb (UNCONDITIONAL_JUMP)  ; caseD_3

