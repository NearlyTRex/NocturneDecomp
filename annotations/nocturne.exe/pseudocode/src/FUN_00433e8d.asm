; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433e8d(void)
;
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 DAT_00767b44
;   undefined4 DAT_0076874c
;   undefined4 DAT_00768750
;   undefined4 DAT_00768750+1
;
; Called Functions:
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 00433e8d
        ;   Label: FUN_00433e8d
    MOV ESI,EDX                         ; 00433e93
    ADD EDI,0x76874c                    ; 00433e95 | DAT_0076874c
    PUSH EDI                            ; 00433e9b
    MOV EAX,ECX                         ; 00433e9c
    SHR ECX,0x2                         ; 00433e9e
    MOVSD.REP ES:EDI,ESI                ; 00433ea1 | DAT_0076874c | DAT_00768750
    MOV CL,AL                           ; 00433ea3
    AND CL,0x3                          ; 00433ea5
    MOVSB.REP ES:EDI,ESI                ; 00433ea8 | DAT_00768750 | DAT_00768750+1
    POP EDI                             ; 00433eaa
    MOV ECX,dword ptr [0x00767b44]      ; 00433eab | DAT_00767b44
    INC ECX                             ; 00433eb1
    MOV dword ptr [0x00767b44],ECX      ; 00433eb2 | DAT_00767b44
    IMUL EAX,ECX,0x30                   ; 00433eb8
    ADD EAX,0x76874c                    ; 00433ebb | DAT_0076874c
    PUSH EAX                            ; 00433ec0
    PUSH EBP                            ; 00433ec1
    PUSH EDX                            ; 00433ec2
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0 ; 00433ec3
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0()
    MOV EDI,dword ptr [0x00767b44]      ; 00433ec8 | DAT_00767b44
    INC EDI                             ; 00433ece
    ADD ESP,0xc                         ; 00433ecf
    MOV dword ptr [0x00767b44],EDI      ; 00433ed2 | DAT_00767b44
    JMP 0x00433e41                      ; 00433ed8
        ;   XREF to: 00433e41 (UNCONDITIONAL_JUMP)  ; caseD_3

