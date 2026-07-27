; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_clipper_c_FUN_0043474d(void)
;
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 caseD_3
;   undefined4 DAT_00767b40
;   undefined4 DAT_00767b44
;   undefined4 DAT_00767b4c
;   undefined1 DAT_00767b50
;   undefined4 DAT_00767b51
;   undefined4 DAT_0076817c
;   undefined4 DAT_0076874c
;
; Called Functions:
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [0x00767b40],0x30 ; 0043471e | DAT_00767b40
        ;   Label: caseD_1
    ADD EAX,0x767b4c                    ; 00434725 | DAT_00767b4c
    PUSH EAX                            ; 0043472a | DAT_00767b4c
    PUSH EDX                            ; 0043472b | DAT_0076817c
    PUSH EBP                            ; 0043472c
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0 ; 0043472d
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0()
    MOV ESI,dword ptr [0x00767b40]      ; 00434732 | DAT_00767b40
    INC ESI                             ; 00434738
    ADD ESP,0xc                         ; 00434739
    MOV dword ptr [0x00767b40],ESI      ; 0043473c | DAT_00767b40
    JMP 0x004344b6                      ; 00434742
        ;   XREF to: 004344b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    XOR byte ptr [ECX + 0x30],BH        ; 0043474d
        ;   Label: engine_clipper.c_FUN_0043474d
    MOV ESI,EDX                         ; 00434753
    ADD EDI,0x767b4c                    ; 00434755 | DAT_00767b4c
    PUSH EDI                            ; 0043475b
    MOV EAX,ECX                         ; 0043475c
    SHR ECX,0x2                         ; 0043475e
    MOVSD.REP ES:EDI,ESI                ; 00434761 | DAT_00767b4c | DAT_00767b50
    MOV CL,AL                           ; 00434763
    AND CL,0x3                          ; 00434765
    MOVSB.REP ES:EDI,ESI                ; 00434768 | DAT_00767b50 | DAT_00767b51
    POP EDI                             ; 0043476a
    MOV ECX,dword ptr [0x00767b40]      ; 0043476b | DAT_00767b40
    INC ECX                             ; 00434771
    MOV dword ptr [0x00767b40],ECX      ; 00434772 | DAT_00767b40
    IMUL EAX,ECX,0x30                   ; 00434778
    ADD EAX,0x767b4c                    ; 0043477b | DAT_00767b4c
    PUSH EAX                            ; 00434780
    PUSH EBP                            ; 00434781
    PUSH EDX                            ; 00434782
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0 ; 00434783
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0()
    MOV EDI,dword ptr [0x00767b40]      ; 00434788 | DAT_00767b40
    INC EDI                             ; 0043478e
    ADD ESP,0xc                         ; 0043478f
    MOV dword ptr [0x00767b40],EDI      ; 00434792 | DAT_00767b40
    JMP 0x004344b6                      ; 00434798
        ;   XREF to: 004344b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00767b44],0x30 ; 0043479d | DAT_00767b44
        ;   Label: caseD_1
    ADD EAX,0x76874c                    ; 004347a4 | DAT_0076874c
    PUSH EAX                            ; 004347a9 | DAT_0076874c
    PUSH EDX                            ; 004347aa | DAT_00767b4c
    PUSH EBP                            ; 004347ab
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0 ; 004347ac
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0()
    MOV ESI,dword ptr [0x00767b44]      ; 004347b1 | DAT_00767b44
    INC ESI                             ; 004347b7
    ADD ESP,0xc                         ; 004347b8
    MOV dword ptr [0x00767b44],ESI      ; 004347bb | DAT_00767b44
    JMP 0x00434565                      ; 004347c1
        ;   XREF to: 00434565 (UNCONDITIONAL_JUMP)  ; caseD_3

