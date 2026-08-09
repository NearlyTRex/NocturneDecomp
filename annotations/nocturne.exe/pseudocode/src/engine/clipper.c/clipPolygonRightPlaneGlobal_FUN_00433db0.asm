; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_00433db0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_caseD_1_00433d98 = 00433e61
;   void* PTR_caseD_3_00433da0 = 00433e41
;   undefined4 DAT_00767b40
;   undefined4 DAT_00767b44
;   undefined4 DAT_00767b4c
;   undefined1 DAT_00767b50
;   undefined4 DAT_00767b54
;   undefined4 DAT_00767b7c
;   undefined4 DAT_00767b84
;   undefined4 DAT_0076874c
;   undefined1 DAT_00768750
;
; Called Functions:
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433db0
        ;   Label: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00433db0
    PUSH ESI                            ; 00433db1
    PUSH EDI                            ; 00433db2
    PUSH EBP                            ; 00433db3
    SUB ESP,0x4                         ; 00433db4
    XOR EDX,EDX                         ; 00433db7
    MOV ECX,dword ptr [0x00767b40]      ; 00433db9 | DAT_00767b40
    MOV dword ptr [ESP],EDX             ; 00433dbf
    TEST ECX,ECX                        ; 00433dc2
    JLE 0x00433e59                      ; 00433dc4
        ;   XREF to: 00433e59 (CONDITIONAL_JUMP)  ; LAB_00433e59
    MOV EBX,0x767b4c                    ; 00433dca | DAT_00767b4c
    MOV EAX,dword ptr [ESP]             ; 00433dcf
        ;   Label: LAB_00433dcf
    MOV EBP,dword ptr [0x00767b40]      ; 00433dd2 | DAT_00767b40
    INC EAX                             ; 00433dd8
    CMP EAX,EBP                         ; 00433dd9
    JNZ 0x00433ddf                      ; 00433ddb
        ;   XREF to: 00433ddf (CONDITIONAL_JUMP)  ; LAB_00433ddf
    XOR EAX,EBP                         ; 00433ddd
    IMUL EAX,EAX,0x30                   ; 00433ddf
        ;   Label: LAB_00433ddf
    MOV EBP,0x767b4c                    ; 00433de2 | DAT_00767b4c
    MOV EDX,EBX                         ; 00433de7
    MOV EDI,dword ptr [EBX + 0x8]       ; 00433de9 | DAT_00767b54 | DAT_00767b84
    MOV ECX,dword ptr [EBX]             ; 00433dec | DAT_00767b4c | DAT_00767b7c
    NEG EDI                             ; 00433dee
    ADD EBP,EAX                         ; 00433df0
    XOR EAX,EAX                         ; 00433df2
    CMP EDI,ECX                         ; 00433df4
    JL 0x00433dfd                       ; 00433df6
        ;   XREF to: 00433dfd (CONDITIONAL_JUMP)  ; LAB_00433dfd
    MOV EAX,0x1                         ; 00433df8
    MOV EDI,dword ptr [EBP + 0x8]       ; 00433dfd | DAT_00767b54
        ;   Label: LAB_00433dfd
    MOV ESI,dword ptr [EBP]             ; 00433e00 | DAT_00767b4c
    NEG EDI                             ; 00433e03
    CMP EDI,ESI                         ; 00433e05
    JL 0x00433e0b                       ; 00433e07
        ;   XREF to: 00433e0b (CONDITIONAL_JUMP)  ; LAB_00433e0b
    OR AL,0x2                           ; 00433e09
    CMP EAX,0x3                         ; 00433e0b
        ;   Label: LAB_00433e0b
    JA 0x00433e41                       ; 00433e0e
        ;   XREF to: 00433e41 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x433d94]  ; 00433e10 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00767b44],0x30 ; 00433e17 | DAT_00767b44
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00433e1e
    MOV ESI,EDX                         ; 00433e23
    ADD EDI,0x76874c                    ; 00433e25 | DAT_0076874c
    PUSH EDI                            ; 00433e2b
    MOV EAX,ECX                         ; 00433e2c
    SHR ECX,0x2                         ; 00433e2e
    MOVSD.REP ES:EDI,ESI                ; 00433e31 | DAT_00767b4c | DAT_0076874c | DAT_00767b50
    MOV CL,AL                           ; 00433e33
    AND CL,0x3                          ; 00433e35
    MOVSB.REP ES:EDI,ESI                ; 00433e38 | DAT_00767b50 | DAT_00768750
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
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00767b44]      ; 00433e75 | DAT_00767b44
    INC ESI                             ; 00433e7b
    ADD ESP,0xc                         ; 00433e7c
    MOV dword ptr [0x00767b44],ESI      ; 00433e7f | DAT_00767b44
    JMP 0x00433e41                      ; 00433e85
        ;   XREF to: 00433e41 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00767b44],0x30 ; 00433e87 | DAT_00767b44
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00433e8e
    MOV ESI,EDX                         ; 00433e93
    ADD EDI,0x76874c                    ; 00433e95 | DAT_0076874c
    PUSH EDI                            ; 00433e9b
    MOV EAX,ECX                         ; 00433e9c
    SHR ECX,0x2                         ; 00433e9e
    MOVSD.REP ES:EDI,ESI                ; 00433ea1 | DAT_00767b4c | DAT_0076874c | DAT_00767b50
    MOV CL,AL                           ; 00433ea3
    AND CL,0x3                          ; 00433ea5
    MOVSB.REP ES:EDI,ESI                ; 00433ea8 | DAT_00767b50 | DAT_00768750
    POP EDI                             ; 00433eaa
    MOV ECX,dword ptr [0x00767b44]      ; 00433eab | DAT_00767b44
    INC ECX                             ; 00433eb1
    MOV dword ptr [0x00767b44],ECX      ; 00433eb2 | DAT_00767b44
    IMUL EAX,ECX,0x30                   ; 00433eb8
    ADD EAX,0x76874c                    ; 00433ebb | DAT_0076874c
    PUSH EAX                            ; 00433ec0
    PUSH EBP                            ; 00433ec1
    PUSH EDX                            ; 00433ec2 | DAT_00767b4c
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0 ; 00433ec3
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00767b44]      ; 00433ec8 | DAT_00767b44
    INC EDI                             ; 00433ece
    ADD ESP,0xc                         ; 00433ecf
    MOV dword ptr [0x00767b44],EDI      ; 00433ed2 | DAT_00767b44
    JMP 0x00433e41                      ; 00433ed8
        ;   XREF to: 00433e41 (UNCONDITIONAL_JUMP)  ; caseD_3

