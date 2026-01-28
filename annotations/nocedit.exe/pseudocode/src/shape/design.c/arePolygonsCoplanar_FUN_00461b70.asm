; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_design_c_arePolygonsCoplanar_FUN_00461b70 (SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,float scale_factor, int tolerance)
;
; Parameters:
; SShapeEditorPolygon * Stack[0x4]:4   polygon1_ptr
; SShapeEditorPolygon * Stack[0x8]:4   polygon2_ptr
; float            Stack[0xc]:4   scale_factor
; int              Stack[0x10]:4   tolerance
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_complexPolygonReduction_FUN_00463b30 at 00463c4b
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461b70
        ;   Label: shape_design.c_arePolygonsCoplanar_FUN_00461b70
    PUSH ESI                            ; 00461b71
    PUSH EDI                            ; 00461b72
    PUSH EBP                            ; 00461b73
    MOV EBP,ESP                         ; 00461b74
    SUB ESP,0x1c                        ; 00461b76
    FILD dword ptr [EBP + 0x1c]         ; 00461b7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461b7f
    FMUL float ptr [EAX + 0xa8]         ; 00461b82
    CALL crt_math.c_round_FUN_005fe6b0  ; 00461b88
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x18]       ; 00461b8d
    FILD dword ptr [EBP + 0x1c]         ; 00461b90
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461b93
    FMUL float ptr [EAX + 0xac]         ; 00461b96
    CALL crt_math.c_round_FUN_005fe6b0  ; 00461b9c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x14]       ; 00461ba1
    FILD dword ptr [EBP + 0x1c]         ; 00461ba4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461ba7
    FMUL float ptr [EAX + 0xb0]         ; 00461baa
    CALL crt_math.c_round_FUN_005fe6b0  ; 00461bb0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x10]       ; 00461bb5
    FILD dword ptr [EBP + 0x1c]         ; 00461bb8
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461bbb
    FMUL float ptr [EAX + 0xa8]         ; 00461bbe
    CALL crt_math.c_round_FUN_005fe6b0  ; 00461bc4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0xc]        ; 00461bc9
    FILD dword ptr [EBP + 0x1c]         ; 00461bcc
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461bcf
    FMUL float ptr [EAX + 0xac]         ; 00461bd2
    CALL crt_math.c_round_FUN_005fe6b0  ; 00461bd8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x8]        ; 00461bdd
    FILD dword ptr [EBP + 0x1c]         ; 00461be0
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461be3
    FMUL float ptr [EAX + 0xb0]         ; 00461be6
    CALL crt_math.c_round_FUN_005fe6b0  ; 00461bec
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x4]        ; 00461bf1
    MOV EAX,dword ptr [EBP + -0x18]     ; 00461bf4
    SUB EAX,dword ptr [EBP + -0xc]      ; 00461bf7
    CDQ                                 ; 00461bfa
    XOR EAX,EDX                         ; 00461bfb
    SUB EAX,EDX                         ; 00461bfd
    CMP EAX,dword ptr [EBP + 0x20]      ; 00461bff
    JGE 0x00461c14                      ; 00461c02
        ;   XREF to: 00461c14 (CONDITIONAL_JUMP)  ; LAB_00461c14
    MOV EAX,dword ptr [EBP + -0x14]     ; 00461c04
    SUB EAX,dword ptr [EBP + -0x8]      ; 00461c07
    CDQ                                 ; 00461c0a
    XOR EAX,EDX                         ; 00461c0b
    SUB EAX,EDX                         ; 00461c0d
    CMP EAX,dword ptr [EBP + 0x20]      ; 00461c0f
    JL 0x00461c16                       ; 00461c12
        ;   XREF to: 00461c16 (CONDITIONAL_JUMP)  ; LAB_00461c16
    JMP 0x00461c26                      ; 00461c14
        ;   XREF to: 00461c26 (UNCONDITIONAL_JUMP)  ; LAB_00461c26
        ;   Label: LAB_00461c14
    MOV EAX,dword ptr [EBP + -0x10]     ; 00461c16
        ;   Label: LAB_00461c16
    SUB EAX,dword ptr [EBP + -0x4]      ; 00461c19
    CDQ                                 ; 00461c1c
    XOR EAX,EDX                         ; 00461c1d
    SUB EAX,EDX                         ; 00461c1f
    CMP EAX,dword ptr [EBP + 0x20]      ; 00461c21
    JL 0x00461c28                       ; 00461c24
        ;   XREF to: 00461c28 (CONDITIONAL_JUMP)  ; LAB_00461c28
    JMP 0x00461c31                      ; 00461c26
        ;   XREF to: 00461c31 (UNCONDITIONAL_JUMP)  ; LAB_00461c31
        ;   Label: LAB_00461c26
    MOV dword ptr [EBP + -0x1c],0x1     ; 00461c28
        ;   Label: LAB_00461c28
    JMP 0x00461c38                      ; 00461c2f
        ;   XREF to: 00461c38 (UNCONDITIONAL_JUMP)  ; LAB_00461c38
    MOV dword ptr [EBP + -0x1c],0x0     ; 00461c31
        ;   Label: LAB_00461c31
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00461c38
        ;   Label: LAB_00461c38
    MOV ESP,EBP                         ; 00461c3b
    POP EBP                             ; 00461c3d
    POP EDI                             ; 00461c3e
    POP ESI                             ; 00461c3f
    POP EBX                             ; 00461c40
    RET                                 ; 00461c41

