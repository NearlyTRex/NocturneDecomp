; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_00433f58(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; Referenced Globals:
;   undefined4 DAT_00767b44
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

    XOR byte ptr [ECX + 0x30],BH        ; 00433f58
        ;   Label: engine_clipper.c_FUN_00433f58
    MOV ESI,EDX                         ; 00433f5e
    ADD EDI,0x768d4c                    ; 00433f60 | DAT_00768d4c
    PUSH EDI                            ; 00433f66
    MOV EAX,ECX                         ; 00433f67
    SHR ECX,0x2                         ; 00433f69
    MOVSD.REP ES:EDI,ESI                ; 00433f6c | DAT_00768d4c | DAT_00768d50
    MOV CL,AL                           ; 00433f6e
    AND CL,0x3                          ; 00433f70
    MOVSB.REP ES:EDI,ESI                ; 00433f73 | DAT_00768d50 | DAT_00768d50+1
    POP EDI                             ; 00433f75
    INC dword ptr [0x00767b48]          ; 00433f76 | DAT_00767b48
    MOV ESI,dword ptr [ESP]             ; 00433f7c
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00767b44]      ; 00433f7f | DAT_00767b44
    INC ESI                             ; 00433f85
    ADD EBX,0x30                        ; 00433f86
    MOV dword ptr [ESP],ESI             ; 00433f89
    CMP ESI,EDI                         ; 00433f8c
    JL 0x00433f0f                       ; 00433f8e
        ;   XREF to: 00433f0f (CONDITIONAL_JUMP)  ; LAB_00433f0f
    ADD ESP,0x4                         ; 00433f94
        ;   Label: LAB_00433f94
    POP EBP                             ; 00433f97
    POP EDI                             ; 00433f98
    POP ESI                             ; 00433f99
    POP EBX                             ; 00433f9a
    RET                                 ; 00433f9b
    IMUL EAX,dword ptr [0x00767b48],0x30 ; 00433f9c | DAT_00767b48
        ;   Label: caseD_1
    ADD EAX,0x768d4c                    ; 00433fa3 | DAT_00768d4c
    PUSH EAX                            ; 00433fa8
    PUSH EDX                            ; 00433fa9
    PUSH EBP                            ; 00433faa
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00 ; 00433fab
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00()
    MOV ESI,dword ptr [0x00767b48]      ; 00433fb0 | DAT_00767b48
    INC ESI                             ; 00433fb6
    ADD ESP,0xc                         ; 00433fb7
    MOV dword ptr [0x00767b48],ESI      ; 00433fba | DAT_00767b48
    JMP 0x00433f7c                      ; 00433fc0
        ;   XREF to: 00433f7c (UNCONDITIONAL_JUMP)  ; caseD_3

