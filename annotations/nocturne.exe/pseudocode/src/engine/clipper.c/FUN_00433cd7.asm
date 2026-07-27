; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_00433cd7(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; Referenced Globals:
;   undefined4 DAT_00767b3c
;   undefined4 DAT_00767b40
;   undefined4 DAT_00767b4c
;   undefined1 DAT_00767b50
;   undefined4 DAT_00767b51
;   undefined4 DAT_0076817c
;
; Called Functions:
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 00433cd7
        ;   Label: engine_clipper.c_FUN_00433cd7
    MOV ESI,EDX                         ; 00433cdd
    ADD EDI,0x767b4c                    ; 00433cdf | DAT_00767b4c
    PUSH EDI                            ; 00433ce5
    MOV EAX,ECX                         ; 00433ce6
    SHR ECX,0x2                         ; 00433ce8
    MOVSD.REP ES:EDI,ESI                ; 00433ceb | DAT_00767b4c | DAT_00767b50
    MOV CL,AL                           ; 00433ced
    AND CL,0x3                          ; 00433cef
    MOVSB.REP ES:EDI,ESI                ; 00433cf2 | DAT_00767b50 | DAT_00767b51
    POP EDI                             ; 00433cf4
    INC dword ptr [0x00767b40]          ; 00433cf5 | DAT_00767b40
    MOV ESI,dword ptr [ESP]             ; 00433cfb
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00767b3c]      ; 00433cfe | DAT_00767b3c
    INC ESI                             ; 00433d04
    ADD EBX,0x30                        ; 00433d05
    MOV dword ptr [ESP],ESI             ; 00433d08
    CMP ESI,EDI                         ; 00433d0b
    JL 0x00433c8f                       ; 00433d0d
        ;   XREF to: 00433c8f (CONDITIONAL_JUMP)  ; LAB_00433c8f
    ADD ESP,0x4                         ; 00433d0f
        ;   Label: LAB_00433d0f
    POP EBP                             ; 00433d12
    POP EDI                             ; 00433d13
    POP ESI                             ; 00433d14
    POP EBX                             ; 00433d15
    RET                                 ; 00433d16
    IMUL EAX,dword ptr [0x00767b40],0x30 ; 00433d17 | DAT_00767b40
        ;   Label: caseD_1
    ADD EAX,0x767b4c                    ; 00433d1e | DAT_00767b4c
    PUSH EAX                            ; 00433d23
    PUSH EDX                            ; 00433d24 | DAT_0076817c
    PUSH EBP                            ; 00433d25
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0 ; 00433d26
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0()
    MOV ESI,dword ptr [0x00767b40]      ; 00433d2b | DAT_00767b40
    INC ESI                             ; 00433d31
    ADD ESP,0xc                         ; 00433d32
    MOV dword ptr [0x00767b40],ESI      ; 00433d35 | DAT_00767b40
    JMP 0x00433cfb                      ; 00433d3b
        ;   XREF to: 00433cfb (UNCONDITIONAL_JUMP)  ; caseD_3

