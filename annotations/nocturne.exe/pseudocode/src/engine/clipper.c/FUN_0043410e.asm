; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_0043410e(void)
;
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766c78+1
;
; Called Functions:
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 0043410e
        ;   Label: engine_clipper.c_FUN_0043410e
    MOV ESI,EDX                         ; 00434114
    ADD EDI,0x766c74                    ; 00434116 | DAT_00766c74
    PUSH EDI                            ; 0043411c
    MOV EAX,ECX                         ; 0043411d
    SHR ECX,0x2                         ; 0043411f
    MOVSD.REP ES:EDI,ESI                ; 00434122 | DAT_00766c74 | DAT_00766c78
    MOV CL,AL                           ; 00434124
    AND CL,0x3                          ; 00434126
    MOVSB.REP ES:EDI,ESI                ; 00434129 | DAT_00766c78 | DAT_00766c78+1
    POP EDI                             ; 0043412b
    MOV ECX,dword ptr [0x00766c70]      ; 0043412c | DAT_00766c70
    INC ECX                             ; 00434132
    MOV dword ptr [0x00766c70],ECX      ; 00434133 | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 00434139
    ADD EAX,0x766c74                    ; 0043413c | DAT_00766c74
    PUSH EAX                            ; 00434141
    PUSH EBP                            ; 00434142
    PUSH EDX                            ; 00434143
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 00434144
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30()
    MOV EDI,dword ptr [0x00766c70]      ; 00434149 | DAT_00766c70
    INC EDI                             ; 0043414f
    ADD ESP,0xc                         ; 00434150
    MOV dword ptr [0x00766c70],EDI      ; 00434153 | DAT_00766c70
    JMP 0x004340c2                      ; 00434159
        ;   XREF to: 004340c2 (UNCONDITIONAL_JUMP)  ; caseD_3

