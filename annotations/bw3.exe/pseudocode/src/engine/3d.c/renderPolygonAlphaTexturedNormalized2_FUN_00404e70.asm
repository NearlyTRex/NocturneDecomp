; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalized2_FUN_00404e70(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404e70
        ;   Label: engine_3d.c_renderPolygonAlphaTexturedNormalized2_FUN_00404e70
    PUSH ESI                            ; 00404e71
    PUSH EBP                            ; 00404e72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404e73
    LEA ESI,[EBX + 0x18]                ; 00404e77
    LEA EAX,[EBX + 0x8]                 ; 00404e7a
    PUSH EAX                            ; 00404e7d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404e7e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00404e83
    TEST EAX,EAX                        ; 00404e86
    JZ 0x00404ecb                       ; 00404e88
        ;   XREF to: 00404ecb (CONDITIONAL_JUMP)  ; LAB_00404ecb
    CMP dword ptr [0x01c6e2a0],0x0      ; 00404e8a | DAT_01c6e2a0
    JNZ 0x00404ee6                      ; 00404e91
        ;   XREF to: 00404ee6 (CONDITIONAL_JUMP)  ; LAB_00404ee6
    CMP dword ptr [0x005fba20],0x20     ; 00404e93 | DAT_005fba20
    JNZ 0x00404eda                      ; 00404e9a
        ;   XREF to: 00404eda (CONDITIONAL_JUMP)  ; LAB_00404eda
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00404e9c | DAT_01c6b5cc
    PUSH EDI                            ; 00404ea6
        ;   Label: LAB_00404ea6
    MOV EDI,0x9                         ; 00404ea7
    PUSH ESI                            ; 00404eac
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ead
    MOV EBP,0x2                         ; 00404eb0
    PUSH EAX                            ; 00404eb5
    MOV dword ptr [0x01c6e2b4],EDI      ; 00404eb6 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00404ebc | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00404ec2
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404ec7
    POP EDI                             ; 00404eca
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ecb
        ;   Label: LAB_00404ecb
    ADD EBX,0x18                        ; 00404ece
    SHL EAX,0x2                         ; 00404ed1
    ADD EAX,EBX                         ; 00404ed4
    POP EBP                             ; 00404ed6
    POP ESI                             ; 00404ed7
    POP EBX                             ; 00404ed8
    RET                                 ; 00404ed9
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404eda | DAT_01c6b5cc
        ;   Label: LAB_00404eda
    JMP 0x00404ea6                      ; 00404ee4
        ;   XREF to: 00404ea6 (UNCONDITIONAL_JUMP)  ; LAB_00404ea6
    CMP dword ptr [0x005fba20],0x20     ; 00404ee6 | DAT_005fba20
        ;   Label: LAB_00404ee6
    JNZ 0x00404efb                      ; 00404eed
        ;   XREF to: 00404efb (CONDITIONAL_JUMP)  ; LAB_00404efb
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404eef | DAT_01c6b5cc
    JMP 0x00404ea6                      ; 00404ef9
        ;   XREF to: 00404ea6 (UNCONDITIONAL_JUMP)  ; LAB_00404ea6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404efb | DAT_01c6b5cc
        ;   Label: LAB_00404efb
    JMP 0x00404ea6                      ; 00404f05
        ;   XREF to: 00404ea6 (UNCONDITIONAL_JUMP)  ; LAB_00404ea6

