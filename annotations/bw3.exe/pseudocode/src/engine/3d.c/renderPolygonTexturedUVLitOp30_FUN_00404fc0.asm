; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00404fc0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404fc0
        ;   Label: engine_3d.c_renderPolygonTexturedUVLitOp30_FUN_00404fc0
    PUSH EBP                            ; 00404fc1
    MOV EBP,dword ptr [ESP + 0xc]       ; 00404fc2
    LEA ESI,[EBP + 0x18]                ; 00404fc6
    LEA EAX,[EBP + 0x8]                 ; 00404fc9
    PUSH EAX                            ; 00404fcc
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404fcd
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404fd2
    TEST EAX,EAX                        ; 00404fd5
    JZ 0x00405099                       ; 00404fd7
        ;   XREF to: 00405099 (CONDITIONAL_JUMP)  ; LAB_00405099
    CMP dword ptr [0x01c6e2a0],0x0      ; 00404fdd | DAT_01c6e2a0
    JNZ 0x00405065                      ; 00404fe4
        ;   XREF to: 00405065 (CONDITIONAL_JUMP)  ; LAB_00405065
    CMP dword ptr [0x005fba20],0x20     ; 00404fea | DAT_005fba20
    JNZ 0x00405059                      ; 00404ff1
        ;   XREF to: 00405059 (CONDITIONAL_JUMP)  ; LAB_00405059
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00404ff3 | DAT_01c6b5cc
    PUSH EDI                            ; 00404ffd
        ;   Label: LAB_00404ffd
    PUSH EBX                            ; 00404ffe
    MOV EBX,0x1                         ; 00404fff
    PUSH EBP                            ; 00405004
    XOR EDI,EDI                         ; 00405005
    MOV dword ptr [0x01c6e2b4],EBX      ; 00405007 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDI      ; 0040500d | DAT_01c6e2b8
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 00405013
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00405018
    MOV EAX,ESI                         ; 0040501b
    XOR EBX,EBX                         ; 0040501d
    XOR EDX,EDX                         ; 0040501f
    XOR ECX,ECX                         ; 00405021
    MOV ESI,dword ptr [EBP + 0x4]       ; 00405023
        ;   Label: LAB_00405023
    LEA ESI,[ESI + ESI*0x2]             ; 00405026
    CMP EDX,ESI                         ; 00405029
    JGE 0x00405089                      ; 0040502b
        ;   XREF to: 00405089 (CONDITIONAL_JUMP)  ; LAB_00405089
    MOV ESI,dword ptr [EAX]             ; 0040502d
    MOV dword ptr [ECX + 0x730418],ESI  ; 0040502f | DAT_00730418 | DAT_0073041c
    IMUL EDI,ESI,0x30                   ; 00405035
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405038
    MOV dword ptr [EDI + 0x60b02c],ESI  ; 0040503b | DAT_0060b02c
    IMUL EDI,dword ptr [EAX],0x30       ; 00405041
    ADD EAX,0xc                         ; 00405044
    ADD ECX,0x4                         ; 00405047
    INC EBX                             ; 0040504a
    MOV ESI,dword ptr [EAX + -0x4]      ; 0040504b
    ADD EDX,0x3                         ; 0040504e
    MOV dword ptr [EDI + 0x60b030],ESI  ; 00405051 | DAT_0060b030
    JMP 0x00405023                      ; 00405057
        ;   XREF to: 00405023 (UNCONDITIONAL_JUMP)  ; LAB_00405023
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405059 | DAT_01c6b5cc
        ;   Label: LAB_00405059
    JMP 0x00404ffd                      ; 00405063
        ;   XREF to: 00404ffd (UNCONDITIONAL_JUMP)  ; LAB_00404ffd
    CMP dword ptr [0x005fba20],0x20     ; 00405065 | DAT_005fba20
        ;   Label: LAB_00405065
    JNZ 0x0040507a                      ; 0040506c
        ;   XREF to: 0040507a (CONDITIONAL_JUMP)  ; LAB_0040507a
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0040506e | DAT_01c6b5cc
    JMP 0x00404ffd                      ; 00405078
        ;   XREF to: 00404ffd (UNCONDITIONAL_JUMP)  ; LAB_00404ffd
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0040507a | DAT_01c6b5cc
        ;   Label: LAB_0040507a
    JMP 0x00404ffd                      ; 00405084
        ;   XREF to: 00404ffd (UNCONDITIONAL_JUMP)  ; LAB_00404ffd
    PUSH 0x730418                       ; 00405089 | DAT_00730418
        ;   Label: LAB_00405089
    PUSH EBX                            ; 0040508e
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 0040508f
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405094
    POP EBX                             ; 00405097
    POP EDI                             ; 00405098
    MOV EDX,dword ptr [EBP + 0x4]       ; 00405099
        ;   Label: LAB_00405099
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040509c
    SUB EAX,EDX                         ; 004050a3
    LEA EDX,[EAX*0x4 + 0x0]             ; 004050a5
    LEA EAX,[EBP + 0x18]                ; 004050ac
    ADD EAX,EDX                         ; 004050af
    POP EBP                             ; 004050b1
    POP ESI                             ; 004050b2
    RET                                 ; 004050b3

