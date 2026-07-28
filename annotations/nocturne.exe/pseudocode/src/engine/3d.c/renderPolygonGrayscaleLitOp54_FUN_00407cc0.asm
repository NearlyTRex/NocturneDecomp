; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00407cc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_006b0260
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01c00c74
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_FUN_00404680
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;   engine_light.cpp_calculateLighting_FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407cc0
        ;   Label: engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_00407cc0
    PUSH ESI                            ; 00407cc1
    PUSH EBP                            ; 00407cc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407cc3
    LEA ESI,[EBX + 0x18]                ; 00407cc7
    LEA EAX,[EBX + 0x8]                 ; 00407cca
    PUSH EAX                            ; 00407ccd
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00407cce
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407cd3
    TEST EAX,EAX                        ; 00407cd6
    JZ 0x00407d4a                       ; 00407cd8
        ;   XREF to: 00407d4a (CONDITIONAL_JUMP)  ; LAB_00407d4a
    CMP dword ptr [0x01c03948],0x0      ; 00407cda | DAT_01c03948
    JNZ 0x00407d65                      ; 00407ce1
        ;   XREF to: 00407d65 (CONDITIONAL_JUMP)  ; LAB_00407d65
    CMP dword ptr [0x005b7624],0x20     ; 00407ce7 | DAT_005b7624
    JNZ 0x00407d59                      ; 00407cee
        ;   XREF to: 00407d59 (CONDITIONAL_JUMP)  ; LAB_00407d59
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00407cf0 | DAT_01c00c7c
    PUSH EDI                            ; 00407cfa
        ;   Label: LAB_00407cfa
    MOV EAX,dword ptr [EBX + 0x10]      ; 00407cfb
    PUSH EAX                            ; 00407cfe
    MOV EDX,dword ptr [EBX + 0xc]       ; 00407cff
    MOV EDI,0x10                        ; 00407d02
    PUSH EDX                            ; 00407d07
    MOV ECX,dword ptr [EBX + 0x8]       ; 00407d08
    XOR EBP,EBP                         ; 00407d0b
    PUSH ECX                            ; 00407d0d
    MOV dword ptr [0x01c039a0],EDI      ; 00407d0e | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00407d14 | DAT_01c039a4
    CALL engine_light.cpp_calculateLighting_FUN_004c6cc0 ; 00407d1a
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004c6cc0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00407d1f
    PUSH EAX                            ; 00407d22
    MOV EDI,dword ptr [0x006b0260]      ; 00407d23 | DAT_006b0260
    PUSH EDI                            ; 00407d29
    MOV [0x01c00c74],EAX                ; 00407d2a | DAT_01c00c74
    CALL engine_3d.c_FUN_00404680       ; 00407d2f
        ;   XREF to: 00404680 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00404680()
    ADD ESP,0x8                         ; 00407d34
    PUSH ESI                            ; 00407d37
    MOV EBP,dword ptr [EBX + 0x4]       ; 00407d38
    PUSH EBP                            ; 00407d3b
    MOV [0x01c00c70],EAX                ; 00407d3c | DAT_01c00c70
    CALL engine_clipper.c_FUN_00432cd0  ; 00407d41
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00407d46
    POP EDI                             ; 00407d49
    MOV ESI,dword ptr [EBX + 0x4]       ; 00407d4a
        ;   Label: LAB_00407d4a
    LEA EAX,[EBX + 0x18]                ; 00407d4d
    SHL ESI,0x2                         ; 00407d50
    ADD EAX,ESI                         ; 00407d53
    POP EBP                             ; 00407d55
    POP ESI                             ; 00407d56
    POP EBX                             ; 00407d57
    RET                                 ; 00407d58
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407d59 | DAT_01c00c7c
        ;   Label: LAB_00407d59
    JMP 0x00407cfa                      ; 00407d63
        ;   XREF to: 00407cfa (UNCONDITIONAL_JUMP)  ; LAB_00407cfa
    CMP dword ptr [0x005b7624],0x20     ; 00407d65 | DAT_005b7624
        ;   Label: LAB_00407d65
    JNZ 0x00407d7a                      ; 00407d6c
        ;   XREF to: 00407d7a (CONDITIONAL_JUMP)  ; LAB_00407d7a
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407d6e | DAT_01c00c7c
    JMP 0x00407cfa                      ; 00407d78
        ;   XREF to: 00407cfa (UNCONDITIONAL_JUMP)  ; LAB_00407cfa
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407d7a | DAT_01c00c7c
        ;   Label: LAB_00407d7a
    JMP 0x00407cfa                      ; 00407d84
        ;   XREF to: 00407cfa (UNCONDITIONAL_JUMP)  ; LAB_00407cfa

