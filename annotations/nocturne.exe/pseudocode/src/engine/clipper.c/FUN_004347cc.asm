; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_clipper_c_FUN_004347cc(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 caseD_3
;   undefined4 DAT_00767b44
;   undefined4 DAT_00767b48
;   undefined4 DAT_0076874c
;   undefined4 DAT_00768750
;   undefined4 DAT_00768750+1
;   undefined4 DAT_0076877c
;   undefined4 DAT_00768d4c
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 004347cc
        ;   Label: engine_clipper.c_FUN_004347cc
    MOV ESI,EDX                         ; 004347d2
    ADD EDI,0x76874c                    ; 004347d4 | DAT_0076874c
    PUSH EDI                            ; 004347da
    MOV EAX,ECX                         ; 004347db
    SHR ECX,0x2                         ; 004347dd
    MOVSD.REP ES:EDI,ESI                ; 004347e0 | DAT_0076874c | DAT_00768750
    MOV CL,AL                           ; 004347e2
    AND CL,0x3                          ; 004347e4
    MOVSB.REP ES:EDI,ESI                ; 004347e7 | DAT_00768750 | DAT_00768750+1
    POP EDI                             ; 004347e9
    MOV ECX,dword ptr [0x00767b44]      ; 004347ea | DAT_00767b44
    INC ECX                             ; 004347f0
    MOV dword ptr [0x00767b44],ECX      ; 004347f1 | DAT_00767b44
    IMUL EAX,ECX,0x30                   ; 004347f7
    ADD EAX,0x76874c                    ; 004347fa | DAT_0076874c
    PUSH EAX                            ; 004347ff
    PUSH EBP                            ; 00434800
    PUSH EDX                            ; 00434801
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0 ; 00434802
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0()
    MOV EDI,dword ptr [0x00767b44]      ; 00434807 | DAT_00767b44
    INC EDI                             ; 0043480d
    ADD ESP,0xc                         ; 0043480e
    MOV dword ptr [0x00767b44],EDI      ; 00434811 | DAT_00767b44
    JMP 0x00434565                      ; 00434817
        ;   XREF to: 00434565 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00767b48],0x30 ; 0043481c | DAT_00767b48
        ;   Label: caseD_1
    ADD EAX,0x768d4c                    ; 00434823 | DAT_00768d4c
    PUSH EAX                            ; 00434828 | DAT_00768d4c
    PUSH EDX                            ; 00434829 | DAT_0076877c
    PUSH EBP                            ; 0043482a
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00 ; 0043482b
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00()
    MOV ESI,dword ptr [0x00767b48]      ; 00434830 | DAT_00767b48
    INC ESI                             ; 00434836
    ADD ESP,0xc                         ; 00434837
    MOV dword ptr [0x00767b48],ESI      ; 0043483a | DAT_00767b48
    JMP 0x0043460f                      ; 00434840
        ;   XREF to: 0043460f (UNCONDITIONAL_JUMP)  ; caseD_3

