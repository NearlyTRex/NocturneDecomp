; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNearPlane_FUN_00404f00(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404f00
        ;   Label: engine_3d.c_renderPolygonTexturedNearPlane_FUN_00404f00
    PUSH ESI                            ; 00404f01
    PUSH EBP                            ; 00404f02
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404f03
    LEA ESI,[EBX + 0x18]                ; 00404f07
    LEA EAX,[EBX + 0x8]                 ; 00404f0a
    PUSH EAX                            ; 00404f0d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00404f0e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404f13
    TEST EAX,EAX                        ; 00404f16
    JZ 0x00404f5b                       ; 00404f18
        ;   XREF to: 00404f5b (CONDITIONAL_JUMP)  ; LAB_00404f5b
    CMP dword ptr [0x01c38b40],0x0      ; 00404f1a | DAT_01c38b40
    JNZ 0x00404f76                      ; 00404f21
        ;   XREF to: 00404f76 (CONDITIONAL_JUMP)  ; LAB_00404f76
    CMP dword ptr [0x006141c0],0x20     ; 00404f23 | DAT_006141c0
    JNZ 0x00404f6a                      ; 00404f2a
        ;   XREF to: 00404f6a (CONDITIONAL_JUMP)  ; LAB_00404f6a
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404f2c | DAT_01c35e6c
    PUSH EDI                            ; 00404f36
        ;   Label: LAB_00404f36
    MOV EDI,0x1                         ; 00404f37
    PUSH ESI                            ; 00404f3c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404f3d
    MOV EBP,0x3                         ; 00404f40
    PUSH EAX                            ; 00404f45
    MOV dword ptr [0x01c38b54],EDI      ; 00404f46 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00404f4c | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404f52
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404f57
    POP EDI                             ; 00404f5a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404f5b
        ;   Label: LAB_00404f5b
    ADD EBX,0x18                        ; 00404f5e
    SHL EAX,0x2                         ; 00404f61
    ADD EAX,EBX                         ; 00404f64
    POP EBP                             ; 00404f66
    POP ESI                             ; 00404f67
    POP EBX                             ; 00404f68
    RET                                 ; 00404f69
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404f6a | DAT_01c35e6c
        ;   Label: LAB_00404f6a
    JMP 0x00404f36                      ; 00404f74
        ;   XREF to: 00404f36 (UNCONDITIONAL_JUMP)  ; LAB_00404f36
    CMP dword ptr [0x006141c0],0x20     ; 00404f76 | DAT_006141c0
        ;   Label: LAB_00404f76
    JNZ 0x00404f8b                      ; 00404f7d
        ;   XREF to: 00404f8b (CONDITIONAL_JUMP)  ; LAB_00404f8b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00404f7f | DAT_01c35e6c
    JMP 0x00404f36                      ; 00404f89
        ;   XREF to: 00404f36 (UNCONDITIONAL_JUMP)  ; LAB_00404f36
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00404f8b | DAT_01c35e6c
        ;   Label: LAB_00404f8b
    JMP 0x00404f36                      ; 00404f95
        ;   XREF to: 00404f36 (UNCONDITIONAL_JUMP)  ; LAB_00404f36

