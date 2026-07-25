; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433e1d(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; Referenced Globals:
;   undefined4 DAT_00767b40
;   undefined4 DAT_00767b44
;   undefined4 DAT_00767b4c
;   undefined4 DAT_0076874c
;   undefined4 DAT_00768750
;   undefined4 DAT_00768750+1
;
; Called Functions:
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 00433e1d
        ;   Label: FUN_00433e1d
    MOV ESI,EDX                         ; 00433e23
    ADD EDI,0x76874c                    ; 00433e25 | DAT_0076874c
    PUSH EDI                            ; 00433e2b
    MOV EAX,ECX                         ; 00433e2c
    SHR ECX,0x2                         ; 00433e2e
    MOVSD.REP ES:EDI,ESI                ; 00433e31 | DAT_0076874c | DAT_00768750
    MOV CL,AL                           ; 00433e33
    AND CL,0x3                          ; 00433e35
    MOVSB.REP ES:EDI,ESI                ; 00433e38 | DAT_00768750 | DAT_00768750+1
    POP EDI                             ; 00433e3a
    INC dword ptr [0x00767b44]          ; 00433e3b | DAT_00767b44
    MOV ESI,dword ptr [ESP]             ; 00433e41
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00767b40]      ; 00433e44 | DAT_00767b40
    INC ESI                             ; 00433e4a
    ADD EBX,0x30                        ; 00433e4b
    MOV dword ptr [ESP],ESI             ; 00433e4e
    CMP ESI,EDI                         ; 00433e51
    JL 0x00433dcf                       ; 00433e53
        ;   XREF to: 00433dcf (CONDITIONAL_JUMP)  ; LAB_00433dcf
    ADD ESP,0x4                         ; 00433e59
        ;   Label: LAB_00433e59
    POP EBP                             ; 00433e5c
    POP EDI                             ; 00433e5d
    POP ESI                             ; 00433e5e
    POP EBX                             ; 00433e5f
    RET                                 ; 00433e60
    IMUL EAX,dword ptr [0x00767b44],0x30 ; 00433e61 | DAT_00767b44
        ;   Label: caseD_1
    ADD EAX,0x76874c                    ; 00433e68 | DAT_0076874c
    PUSH EAX                            ; 00433e6d
    PUSH EDX                            ; 00433e6e | DAT_00767b4c
    PUSH EBP                            ; 00433e6f
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0 ; 00433e70
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0()
    MOV ESI,dword ptr [0x00767b44]      ; 00433e75 | DAT_00767b44
    INC ESI                             ; 00433e7b
    ADD ESP,0xc                         ; 00433e7c
    MOV dword ptr [0x00767b44],ESI      ; 00433e7f | DAT_00767b44
    JMP 0x00433e41                      ; 00433e85
        ;   XREF to: 00433e41 (UNCONDITIONAL_JUMP)  ; caseD_3

