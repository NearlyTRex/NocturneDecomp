; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00433c70(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00433c58 = 00433cd1
;   undefined1* PTR_caseD_3_00433c64 = 00433cfb
;   undefined4 DAT_00767b3c
;   undefined4 DAT_00767b40
;   undefined4 DAT_00767b4c
;   undefined1 DAT_00767b50
;   undefined4 DAT_0076814c
;   undefined4 DAT_00768154
;   undefined4 DAT_0076817c
;   undefined1 DAT_00768180
;   undefined4 DAT_00768184
;
; Called Functions:
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433c70
        ;   Label: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00433c70
    PUSH ESI                            ; 00433c71
    PUSH EDI                            ; 00433c72
    PUSH EBP                            ; 00433c73
    SUB ESP,0x4                         ; 00433c74
    XOR EDX,EDX                         ; 00433c77
    MOV ECX,dword ptr [0x00767b3c]      ; 00433c79 | DAT_00767b3c
    MOV dword ptr [ESP],EDX             ; 00433c7f
    TEST ECX,ECX                        ; 00433c82
    JLE 0x00433d0f                      ; 00433c84
        ;   XREF to: 00433d0f (CONDITIONAL_JUMP)  ; LAB_00433d0f
    MOV EBX,0x76814c                    ; 00433c8a | DAT_0076814c
    MOV EAX,dword ptr [ESP]             ; 00433c8f
        ;   Label: LAB_00433c8f
    MOV EBP,dword ptr [0x00767b3c]      ; 00433c92 | DAT_00767b3c
    INC EAX                             ; 00433c98
    CMP EAX,EBP                         ; 00433c99
    JNZ 0x00433c9f                      ; 00433c9b
        ;   XREF to: 00433c9f (CONDITIONAL_JUMP)  ; LAB_00433c9f
    XOR EAX,EBP                         ; 00433c9d
    IMUL EAX,EAX,0x30                   ; 00433c9f
        ;   Label: LAB_00433c9f
    MOV EBP,0x76814c                    ; 00433ca2 | DAT_0076814c
    MOV EDX,EBX                         ; 00433ca7
    MOV EDI,dword ptr [EBX]             ; 00433ca9 | DAT_0076814c | DAT_0076817c
    MOV ECX,dword ptr [EBX + 0x8]       ; 00433cab | DAT_00768154 | DAT_00768184
    ADD EBP,EAX                         ; 00433cae
    XOR EAX,EAX                         ; 00433cb0
    CMP EDI,ECX                         ; 00433cb2
    JL 0x00433cbb                       ; 00433cb4
        ;   XREF to: 00433cbb (CONDITIONAL_JUMP)  ; LAB_00433cbb
    MOV EAX,0x1                         ; 00433cb6
    MOV ESI,dword ptr [EBP + 0x8]       ; 00433cbb | DAT_00768154
        ;   Label: LAB_00433cbb
    CMP ESI,dword ptr [EBP]             ; 00433cbe | DAT_0076814c
    JG 0x00433cc5                       ; 00433cc1
        ;   XREF to: 00433cc5 (CONDITIONAL_JUMP)  ; LAB_00433cc5
    OR AL,0x2                           ; 00433cc3
    CMP EAX,0x3                         ; 00433cc5
        ;   Label: LAB_00433cc5
    JA 0x00433cfb                       ; 00433cc8
        ;   XREF to: 00433cfb (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x433c58]  ; 00433cca | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00767b40],0x30 ; 00433cd1 | DAT_00767b40
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00433cd8
    MOV ESI,EDX                         ; 00433cdd
    ADD EDI,0x767b4c                    ; 00433cdf | DAT_00767b4c
    PUSH EDI                            ; 00433ce5
    MOV EAX,ECX                         ; 00433ce6
    SHR ECX,0x2                         ; 00433ce8
    MOVSD.REP ES:EDI,ESI                ; 00433ceb | DAT_0076817c | DAT_00767b4c | DAT_00768180
    MOV CL,AL                           ; 00433ced
    AND CL,0x3                          ; 00433cef
    MOVSB.REP ES:EDI,ESI                ; 00433cf2 | DAT_00768180 | DAT_00767b50
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
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00767b40]      ; 00433d2b | DAT_00767b40
    INC ESI                             ; 00433d31
    ADD ESP,0xc                         ; 00433d32
    MOV dword ptr [0x00767b40],ESI      ; 00433d35 | DAT_00767b40
    JMP 0x00433cfb                      ; 00433d3b
        ;   XREF to: 00433cfb (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00767b40],0x30 ; 00433d3d | DAT_00767b40
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00433d44
    MOV ESI,EDX                         ; 00433d49
    ADD EDI,0x767b4c                    ; 00433d4b | DAT_00767b4c
    PUSH EDI                            ; 00433d51
    MOV EAX,ECX                         ; 00433d52
    SHR ECX,0x2                         ; 00433d54
    MOVSD.REP ES:EDI,ESI                ; 00433d57 | DAT_0076817c | DAT_00767b4c | DAT_00768180
    MOV CL,AL                           ; 00433d59
    AND CL,0x3                          ; 00433d5b
    MOVSB.REP ES:EDI,ESI                ; 00433d5e | DAT_00768180 | DAT_00767b50
    POP EDI                             ; 00433d60
    MOV ECX,dword ptr [0x00767b40]      ; 00433d61 | DAT_00767b40
    INC ECX                             ; 00433d67
    MOV dword ptr [0x00767b40],ECX      ; 00433d68 | DAT_00767b40
    IMUL EAX,ECX,0x30                   ; 00433d6e
    ADD EAX,0x767b4c                    ; 00433d71 | DAT_00767b4c
    PUSH EAX                            ; 00433d76
    PUSH EBP                            ; 00433d77
    PUSH EDX                            ; 00433d78 | DAT_0076817c
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0 ; 00433d79
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00767b40]      ; 00433d7e | DAT_00767b40
    INC EDI                             ; 00433d84
    ADD ESP,0xc                         ; 00433d85
    MOV dword ptr [0x00767b40],EDI      ; 00433d88 | DAT_00767b40
    JMP 0x00433cfb                      ; 00433d8e
        ;   XREF to: 00433cfb (UNCONDITIONAL_JUMP)  ; caseD_3

