; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_00433fc8(void)
;
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 DAT_00767b48
;   undefined4 DAT_00768d4c
;   undefined4 DAT_00768d50
;   undefined4 DAT_00768d50+1
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 00433fc8
        ;   Label: engine_clipper.c_FUN_00433fc8
    MOV ESI,EDX                         ; 00433fce
    ADD EDI,0x768d4c                    ; 00433fd0 | DAT_00768d4c
    PUSH EDI                            ; 00433fd6
    MOV EAX,ECX                         ; 00433fd7
    SHR ECX,0x2                         ; 00433fd9
    MOVSD.REP ES:EDI,ESI                ; 00433fdc | DAT_00768d4c | DAT_00768d50
    MOV CL,AL                           ; 00433fde
    AND CL,0x3                          ; 00433fe0
    MOVSB.REP ES:EDI,ESI                ; 00433fe3 | DAT_00768d50 | DAT_00768d50+1
    POP EDI                             ; 00433fe5
    MOV ECX,dword ptr [0x00767b48]      ; 00433fe6 | DAT_00767b48
    INC ECX                             ; 00433fec
    MOV dword ptr [0x00767b48],ECX      ; 00433fed | DAT_00767b48
    IMUL EAX,ECX,0x30                   ; 00433ff3
    ADD EAX,0x768d4c                    ; 00433ff6 | DAT_00768d4c
    PUSH EAX                            ; 00433ffb
    PUSH EBP                            ; 00433ffc
    PUSH EDX                            ; 00433ffd
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00 ; 00433ffe
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00767b48]      ; 00434003 | DAT_00767b48
    INC EDI                             ; 00434009
    ADD ESP,0xc                         ; 0043400a
    MOV dword ptr [0x00767b48],EDI      ; 0043400d | DAT_00767b48
    JMP 0x00433f7c                      ; 00434013
        ;   XREF to: 00433f7c (UNCONDITIONAL_JUMP)  ; caseD_3

