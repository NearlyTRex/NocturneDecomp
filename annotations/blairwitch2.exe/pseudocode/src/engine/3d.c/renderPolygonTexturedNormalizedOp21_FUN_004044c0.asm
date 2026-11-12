; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedOp21_FUN_004044c0(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
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

    PUSH EBX                            ; 004044c0
        ;   Label: engine_3d.c_renderPolygonTexturedNormalizedOp21_FUN_004044c0
    PUSH ESI                            ; 004044c1
    PUSH EBP                            ; 004044c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004044c3
    LEA ESI,[EBX + 0x18]                ; 004044c7
    LEA EAX,[EBX + 0x8]                 ; 004044ca
    PUSH EAX                            ; 004044cd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004044ce
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 004044d3
    TEST EAX,EAX                        ; 004044d6
    JZ 0x0040451b                       ; 004044d8
        ;   XREF to: 0040451b (CONDITIONAL_JUMP)  ; LAB_0040451b
    CMP dword ptr [0x01c38b40],0x0      ; 004044da | DAT_01c38b40
    JNZ 0x00404536                      ; 004044e1
        ;   XREF to: 00404536 (CONDITIONAL_JUMP)  ; LAB_00404536
    CMP dword ptr [0x006141c0],0x20     ; 004044e3 | DAT_006141c0
    JNZ 0x0040452a                      ; 004044ea
        ;   XREF to: 0040452a (CONDITIONAL_JUMP)  ; LAB_0040452a
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004044ec | DAT_01c35e6c
    PUSH EDI                            ; 004044f6
        ;   Label: LAB_004044f6
    MOV EDI,0x1                         ; 004044f7
    PUSH ESI                            ; 004044fc
    MOV EAX,dword ptr [EBX + 0x4]       ; 004044fd
    MOV EBP,0x2                         ; 00404500
    PUSH EAX                            ; 00404505
    MOV dword ptr [0x01c38b54],EDI      ; 00404506 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 0040450c | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404512
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404517
    POP EDI                             ; 0040451a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040451b
        ;   Label: LAB_0040451b
    ADD EBX,0x18                        ; 0040451e
    SHL EAX,0x2                         ; 00404521
    ADD EAX,EBX                         ; 00404524
    POP EBP                             ; 00404526
    POP ESI                             ; 00404527
    POP EBX                             ; 00404528
    RET                                 ; 00404529
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040452a | DAT_01c35e6c
        ;   Label: LAB_0040452a
    JMP 0x004044f6                      ; 00404534
        ;   XREF to: 004044f6 (UNCONDITIONAL_JUMP)  ; LAB_004044f6
    CMP dword ptr [0x006141c0],0x20     ; 00404536 | DAT_006141c0
        ;   Label: LAB_00404536
    JNZ 0x0040454b                      ; 0040453d
        ;   XREF to: 0040454b (CONDITIONAL_JUMP)  ; LAB_0040454b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040453f | DAT_01c35e6c
    JMP 0x004044f6                      ; 00404549
        ;   XREF to: 004044f6 (UNCONDITIONAL_JUMP)  ; LAB_004044f6
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0040454b | DAT_01c35e6c
        ;   Label: LAB_0040454b
    JMP 0x004044f6                      ; 00404555
        ;   XREF to: 004044f6 (UNCONDITIONAL_JUMP)  ; LAB_004044f6

