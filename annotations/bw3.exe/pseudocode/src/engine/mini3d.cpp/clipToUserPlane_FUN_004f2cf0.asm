; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_clipToUserPlane_FUN_004f2cf0(float *vertices,int vertex_count,float *out,int *out_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; float *          Stack[0xc]:4   out
; int *            Stack[0x10]:4   out_count
;
; XREF[1]:
;   engine_mini3d.cpp_userClipPolyList_FUN_004f2e30 at 004f2fd3
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004f2cdc = 004f2dda
;   undefined1* PTR_caseD_3_004f2ce4 = 004f2dbc
;   undefined4 DAT_01d7a69c
;   undefined4 DAT_01d7a6a0
;   undefined4 DAT_01d7a6a4
;   undefined4 DAT_01d7a6a8
;
; Called Functions:
;   engine_mini3d.cpp_intersectUserClipPlane_FUN_004f2bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2cf0
        ;   Label: engine_mini3d.cpp_clipToUserPlane_FUN_004f2cf0
    PUSH ESI                            ; 004f2cf1
    PUSH EDI                            ; 004f2cf2
    PUSH EBP                            ; 004f2cf3
    SUB ESP,0x8                         ; 004f2cf4
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f2cf7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f2cfb
    XOR EDX,EDX                         ; 004f2cff
    MOV dword ptr [EBX],0x0             ; 004f2d01
    MOV dword ptr [ESP],EDX             ; 004f2d07
    TEST ECX,ECX                        ; 004f2d0a
    JLE 0x004f2dd2                      ; 004f2d0c
        ;   XREF to: 004f2dd2 (CONDITIONAL_JUMP)  ; LAB_004f2dd2
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f2d12
    MOV ECX,dword ptr [ESP]             ; 004f2d16
        ;   Label: LAB_004f2d16
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f2d19
    INC ECX                             ; 004f2d1d
    CMP ECX,EAX                         ; 004f2d1e
    JNZ 0x004f2d24                      ; 004f2d20
        ;   XREF to: 004f2d24 (CONDITIONAL_JUMP)  ; LAB_004f2d24
    XOR ECX,EAX                         ; 004f2d22
    IMUL ECX,ECX,0x24                   ; 004f2d24
        ;   Label: LAB_004f2d24
    FLD float ptr [0x01d7a6a0]          ; 004f2d27 | DAT_01d7a6a0
    FMUL float ptr [EBP + 0x4]          ; 004f2d2d
    FLD float ptr [0x01d7a69c]          ; 004f2d30 | DAT_01d7a69c
    FMUL float ptr [EBP]                ; 004f2d36
    FADDP                               ; 004f2d39
    FLD float ptr [0x01d7a6a4]          ; 004f2d3b | DAT_01d7a6a4
    FMUL float ptr [EBP + 0x8]          ; 004f2d41
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f2d44
    MOV EDX,EBP                         ; 004f2d48
    ADD EDI,ECX                         ; 004f2d4a
    FADDP                               ; 004f2d4c
    MOV dword ptr [ESP + 0x4],EDI       ; 004f2d4e
    FADD float ptr [0x01d7a6a8]         ; 004f2d52 | DAT_01d7a6a8
    XOR ECX,ECX                         ; 004f2d58
    FLDZ                                ; 004f2d5a
    FCOMPP                              ; 004f2d5c
    FNSTSW AX                           ; 004f2d5e
    SAHF                                ; 004f2d60
    JNC 0x004f2d68                      ; 004f2d61
        ;   XREF to: 004f2d68 (CONDITIONAL_JUMP)  ; LAB_004f2d68
    MOV ECX,0x1                         ; 004f2d63
    MOV EDI,dword ptr [ESP + 0x4]       ; 004f2d68
        ;   Label: LAB_004f2d68
    FLD float ptr [0x01d7a6a0]          ; 004f2d6c | DAT_01d7a6a0
    FMUL float ptr [EDI + 0x4]          ; 004f2d72
    FLD float ptr [0x01d7a69c]          ; 004f2d75 | DAT_01d7a69c
    FMUL float ptr [EDI]                ; 004f2d7b
    FADDP                               ; 004f2d7d
    FLD float ptr [0x01d7a6a4]          ; 004f2d7f | DAT_01d7a6a4
    FMUL float ptr [EDI + 0x8]          ; 004f2d85
    FADDP                               ; 004f2d88
    FADD float ptr [0x01d7a6a8]         ; 004f2d8a | DAT_01d7a6a8
    FLDZ                                ; 004f2d90
    FCOMPP                              ; 004f2d92
    FNSTSW AX                           ; 004f2d94
    SAHF                                ; 004f2d96
    JNC 0x004f2d9c                      ; 004f2d97
        ;   XREF to: 004f2d9c (CONDITIONAL_JUMP)  ; LAB_004f2d9c
    OR CL,0x2                           ; 004f2d99
    CMP ECX,0x3                         ; 004f2d9c
        ;   Label: LAB_004f2d9c
    JA 0x004f2dbc                       ; 004f2d9f
        ;   XREF to: 004f2dbc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f2cd8]  ; 004f2da1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [EBX],0x24       ; 004f2da8
        ;   Label: caseD_0
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f2dab
    MOV ECX,0x9                         ; 004f2daf
    ADD EDI,ESI                         ; 004f2db4
    MOV ESI,EDX                         ; 004f2db6
    MOVSD.REP ES:EDI,ESI                ; 004f2db8
    INC dword ptr [EBX]                 ; 004f2dba
    MOV ESI,dword ptr [ESP]             ; 004f2dbc
        ;   Label: caseD_3
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f2dbf
    INC ESI                             ; 004f2dc3
    ADD EBP,0x24                        ; 004f2dc4
    MOV dword ptr [ESP],ESI             ; 004f2dc7
    CMP ESI,EDI                         ; 004f2dca
    JL 0x004f2d16                       ; 004f2dcc
        ;   XREF to: 004f2d16 (CONDITIONAL_JUMP)  ; LAB_004f2d16
    ADD ESP,0x8                         ; 004f2dd2
        ;   Label: LAB_004f2dd2
    POP EBP                             ; 004f2dd5
    POP EDI                             ; 004f2dd6
    POP ESI                             ; 004f2dd7
    POP EBX                             ; 004f2dd8
    RET                                 ; 004f2dd9
    IMUL ECX,dword ptr [EBX],0x24       ; 004f2dda
        ;   Label: caseD_1
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f2ddd
    PUSH ECX                            ; 004f2de1
    PUSH EDX                            ; 004f2de2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f2de3
    PUSH EAX                            ; 004f2de7
    CALL engine_mini3d.cpp_intersectUserClipPlane_FUN_004f2bb0 ; 004f2de8
        ;   XREF to: 004f2bb0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectUserClipPlane_FUN_004f2bb0(float * from, float * to, float * out)
    MOV EDX,dword ptr [EBX]             ; 004f2ded
    INC EDX                             ; 004f2def
    ADD ESP,0xc                         ; 004f2df0
    MOV dword ptr [EBX],EDX             ; 004f2df3
    JMP 0x004f2dbc                      ; 004f2df5
        ;   XREF to: 004f2dbc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [EBX],0x24       ; 004f2df7
        ;   Label: caseD_2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f2dfa
    MOV ECX,0x9                         ; 004f2dfe
    ADD EDI,ESI                         ; 004f2e03
    MOV ESI,EDX                         ; 004f2e05
    MOVSD.REP ES:EDI,ESI                ; 004f2e07
    MOV EDI,dword ptr [EBX]             ; 004f2e09
    INC EDI                             ; 004f2e0b
    MOV dword ptr [EBX],EDI             ; 004f2e0c
    IMUL ECX,EDI,0x24                   ; 004f2e0e
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f2e11
    PUSH ECX                            ; 004f2e15
    MOV EDI,dword ptr [ESP + 0x8]       ; 004f2e16
    PUSH EDI                            ; 004f2e1a
    PUSH EDX                            ; 004f2e1b
    CALL engine_mini3d.cpp_intersectUserClipPlane_FUN_004f2bb0 ; 004f2e1c
        ;   XREF to: 004f2bb0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectUserClipPlane_FUN_004f2bb0(float * from, float * to, float * out)
    MOV EAX,dword ptr [EBX]             ; 004f2e21
    INC EAX                             ; 004f2e23
    ADD ESP,0xc                         ; 004f2e24
    MOV dword ptr [EBX],EAX             ; 004f2e27
    JMP 0x004f2dbc                      ; 004f2e29
        ;   XREF to: 004f2dbc (UNCONDITIONAL_JUMP)  ; caseD_3

