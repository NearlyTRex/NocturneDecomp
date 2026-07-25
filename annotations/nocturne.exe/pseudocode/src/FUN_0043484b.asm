; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043484b(void)
;
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 caseD_3
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00767b48
;   undefined4 DAT_00768d4c
;   undefined4 DAT_00768d50
;   undefined4 DAT_00768d50+1
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 0043484b
        ;   Label: FUN_0043484b
    MOV ESI,EDX                         ; 00434851
    ADD EDI,0x768d4c                    ; 00434853 | DAT_00768d4c
    PUSH EDI                            ; 00434859
    MOV EAX,ECX                         ; 0043485a
    SHR ECX,0x2                         ; 0043485c
    MOVSD.REP ES:EDI,ESI                ; 0043485f | DAT_00768d4c | DAT_00768d50
    MOV CL,AL                           ; 00434861
    AND CL,0x3                          ; 00434863
    MOVSB.REP ES:EDI,ESI                ; 00434866 | DAT_00768d50 | DAT_00768d50+1
    POP EDI                             ; 00434868
    MOV ECX,dword ptr [0x00767b48]      ; 00434869 | DAT_00767b48
    INC ECX                             ; 0043486f
    MOV dword ptr [0x00767b48],ECX      ; 00434870 | DAT_00767b48
    IMUL EAX,ECX,0x30                   ; 00434876
    ADD EAX,0x768d4c                    ; 00434879 | DAT_00768d4c
    PUSH EAX                            ; 0043487e
    PUSH EBP                            ; 0043487f
    PUSH EDX                            ; 00434880
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00 ; 00434881
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00()
    MOV EDI,dword ptr [0x00767b48]      ; 00434886 | DAT_00767b48
    INC EDI                             ; 0043488c
    ADD ESP,0xc                         ; 0043488d
    MOV dword ptr [0x00767b48],EDI      ; 00434890 | DAT_00767b48
    JMP 0x0043460f                      ; 00434896
        ;   XREF to: 0043460f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 0043489b | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 004348a2 | DAT_00766c74
    PUSH EAX                            ; 004348a7 | DAT_00766c74
    PUSH EDX                            ; 004348a8 | DAT_00768d4c
    PUSH EBP                            ; 004348a9
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 004348aa
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30()
    MOV ESI,dword ptr [0x00766c70]      ; 004348af | DAT_00766c70
    INC ESI                             ; 004348b5
    ADD ESP,0xc                         ; 004348b6
    MOV dword ptr [0x00766c70],ESI      ; 004348b9 | DAT_00766c70
    JMP 0x004346bf                      ; 004348bf
        ;   XREF to: 004346bf (UNCONDITIONAL_JUMP)  ; caseD_3

