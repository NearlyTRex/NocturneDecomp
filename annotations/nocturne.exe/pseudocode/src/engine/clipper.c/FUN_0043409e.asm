; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_0043409e(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; Referenced Globals:
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766c78+1
;   undefined4 DAT_00767b48
;   undefined4 DAT_00768d4c
;
; Called Functions:
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 0043409e
        ;   Label: engine_clipper.c_FUN_0043409e
    MOV ESI,EDX                         ; 004340a4
    ADD EDI,0x766c74                    ; 004340a6 | DAT_00766c74
    PUSH EDI                            ; 004340ac
    MOV EAX,ECX                         ; 004340ad
    SHR ECX,0x2                         ; 004340af
    MOVSD.REP ES:EDI,ESI                ; 004340b2 | DAT_00766c74 | DAT_00766c78
    MOV CL,AL                           ; 004340b4
    AND CL,0x3                          ; 004340b6
    MOVSB.REP ES:EDI,ESI                ; 004340b9 | DAT_00766c78 | DAT_00766c78+1
    POP EDI                             ; 004340bb
    INC dword ptr [0x00766c70]          ; 004340bc | DAT_00766c70
    MOV ESI,dword ptr [ESP]             ; 004340c2
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00767b48]      ; 004340c5 | DAT_00767b48
    INC ESI                             ; 004340cb
    ADD EBX,0x30                        ; 004340cc
    MOV dword ptr [ESP],ESI             ; 004340cf
    CMP ESI,EDI                         ; 004340d2
    JL 0x0043404f                       ; 004340d4
        ;   XREF to: 0043404f (CONDITIONAL_JUMP)  ; LAB_0043404f
    ADD ESP,0x4                         ; 004340da
        ;   Label: LAB_004340da
    POP EBP                             ; 004340dd
    POP EDI                             ; 004340de
    POP ESI                             ; 004340df
    POP EBX                             ; 004340e0
    RET                                 ; 004340e1
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 004340e2 | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 004340e9 | DAT_00766c74
    PUSH EAX                            ; 004340ee
    PUSH EDX                            ; 004340ef | DAT_00768d4c
    PUSH EBP                            ; 004340f0
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 004340f1
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00766c70]      ; 004340f6 | DAT_00766c70
    INC ESI                             ; 004340fc
    ADD ESP,0xc                         ; 004340fd
    MOV dword ptr [0x00766c70],ESI      ; 00434100 | DAT_00766c70
    JMP 0x004340c2                      ; 00434106
        ;   XREF to: 004340c2 (UNCONDITIONAL_JUMP)  ; caseD_3

