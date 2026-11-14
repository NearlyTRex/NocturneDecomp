; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406880(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_006141c8
;   undefined4 DAT_006141d8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00406880
        ;   Label: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406880
    MOV EAX,dword ptr [ESP + 0x8]       ; 00406881
    ADD EAX,0x8                         ; 00406885
    MOV EBP,dword ptr [ESP + 0x8]       ; 00406888
    PUSH EAX                            ; 0040688c
    ADD EBP,0x18                        ; 0040688d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00406890
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406895
    TEST EAX,EAX                        ; 00406898
    JZ 0x00406a13                       ; 0040689a
        ;   XREF to: 00406a13 (CONDITIONAL_JUMP)  ; LAB_00406a13
    CMP dword ptr [0x01c38b40],0x0      ; 004068a0 | DAT_01c38b40
    JNZ 0x0040698d                      ; 004068a7
        ;   XREF to: 0040698d (CONDITIONAL_JUMP)  ; LAB_0040698d
    CMP dword ptr [0x006141c0],0x20     ; 004068ad | DAT_006141c0
    JNZ 0x0040697e                      ; 004068b4
        ;   XREF to: 0040697e (CONDITIONAL_JUMP)  ; LAB_0040697e
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004068ba | DAT_01c35e6c
    PUSH EDI                            ; 004068c4
        ;   Label: LAB_004068c4
    PUSH ESI                            ; 004068c5
    PUSH EBX                            ; 004068c6
    MOV EBX,dword ptr [ESP + 0x14]      ; 004068c7
    MOV ECX,0xd3                        ; 004068cb
    PUSH EBX                            ; 004068d0
    MOV dword ptr [0x01c38b54],ECX      ; 004068d1 | DAT_01c38b54
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 004068d7
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive * prim)
    MOV ESI,dword ptr [0x006141d8]      ; 004068dc | DAT_006141d8
    ADD ESP,0x4                         ; 004068e2
    CMP ESI,0xff                        ; 004068e5
    JL 0x004069b4                       ; 004068eb
        ;   XREF to: 004069b4 (CONDITIONAL_JUMP)  ; LAB_004069b4
    MOV EDI,0x1                         ; 004068f1
        ;   Label: LAB_004068f1
    MOV ECX,EBP                         ; 004068f6
    XOR EBX,EBX                         ; 004068f8
    XOR ESI,ESI                         ; 004068fa
    MOV dword ptr [0x01c38b58],EDI      ; 004068fc | DAT_01c38b58
    XOR EDI,EDI                         ; 00406902
    MOV EAX,dword ptr [ESP + 0x14]      ; 00406904
        ;   Label: LAB_00406904
    MOV EAX,dword ptr [EAX + 0x4]       ; 00406908
    LEA EAX,[EAX + EAX*0x2]             ; 0040690b
    CMP EBX,EAX                         ; 0040690e
    JGE 0x00406a02                      ; 00406910
        ;   XREF to: 00406a02 (CONDITIONAL_JUMP)  ; LAB_00406a02
    MOV EAX,dword ptr [ECX]             ; 00406916
    MOV dword ptr [ESI + 0x70ca98],EAX  ; 00406918 | DAT_0070ca98 | DAT_0070ca9c
    MOV EBP,dword ptr [0x006141c8]      ; 0040691e | DAT_006141c8
    MOV EAX,dword ptr [ECX + 0x4]       ; 00406924
    MOV EDX,dword ptr [ECX + 0x8]       ; 00406927
    CMP EBP,0x40                        ; 0040692a
    JG 0x004069c7                       ; 0040692d
        ;   XREF to: 004069c7 (CONDITIONAL_JUMP)  ; LAB_004069c7
    CMP EAX,0x40000                     ; 00406933
    JGE 0x0040693f                      ; 00406938
        ;   XREF to: 0040693f (CONDITIONAL_JUMP)  ; LAB_0040693f
    MOV EAX,0x40000                     ; 0040693a
    CMP EDX,0x40000                     ; 0040693f
        ;   Label: LAB_0040693f
    JGE 0x0040694c                      ; 00406945
        ;   XREF to: 0040694c (CONDITIONAL_JUMP)  ; LAB_0040694c
    MOV EDX,0x40000                     ; 00406947
    CMP EAX,0xfbffff                    ; 0040694c
        ;   Label: LAB_0040694c
    JLE 0x00406958                      ; 00406951
        ;   XREF to: 00406958 (CONDITIONAL_JUMP)  ; LAB_00406958
    MOV EAX,0xfbffff                    ; 00406953
    CMP EDX,0xfbffff                    ; 00406958
        ;   Label: LAB_00406958
    JG 0x004069c0                       ; 0040695e
        ;   XREF to: 004069c0 (CONDITIONAL_JUMP)  ; LAB_004069c0
    IMUL EBP,dword ptr [ECX],0x30       ; 00406960
        ;   Label: LAB_00406960
    MOV dword ptr [EBP + 0x62202c],EAX  ; 00406963 | DAT_0062202c
    IMUL EAX,dword ptr [ECX],0x30       ; 00406969
    ADD ESI,0x4                         ; 0040696c
    INC EDI                             ; 0040696f
    ADD EBX,0x3                         ; 00406970
    ADD ECX,0xc                         ; 00406973
    MOV dword ptr [EAX + 0x622030],EDX  ; 00406976 | DAT_00622030
    JMP 0x00406904                      ; 0040697c
        ;   XREF to: 00406904 (UNCONDITIONAL_JUMP)  ; LAB_00406904
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040697e | DAT_01c35e6c
        ;   Label: LAB_0040697e
    JMP 0x004068c4                      ; 00406988
        ;   XREF to: 004068c4 (UNCONDITIONAL_JUMP)  ; LAB_004068c4
    CMP dword ptr [0x006141c0],0x20     ; 0040698d | DAT_006141c0
        ;   Label: LAB_0040698d
    JNZ 0x004069a5                      ; 00406994
        ;   XREF to: 004069a5 (CONDITIONAL_JUMP)  ; LAB_004069a5
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406996 | DAT_01c35e6c
    JMP 0x004068c4                      ; 004069a0
        ;   XREF to: 004068c4 (UNCONDITIONAL_JUMP)  ; LAB_004068c4
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004069a5 | DAT_01c35e6c
        ;   Label: LAB_004069a5
    JMP 0x004068c4                      ; 004069af
        ;   XREF to: 004068c4 (UNCONDITIONAL_JUMP)  ; LAB_004068c4
    OR byte ptr [0x01c38b54],0x20       ; 004069b4 | DAT_01c38b54
        ;   Label: LAB_004069b4
    JMP 0x004068f1                      ; 004069bb
        ;   XREF to: 004068f1 (UNCONDITIONAL_JUMP)  ; LAB_004068f1
    MOV EDX,0xfbffff                    ; 004069c0
        ;   Label: LAB_004069c0
    JMP 0x00406960                      ; 004069c5
        ;   XREF to: 00406960 (UNCONDITIONAL_JUMP)  ; LAB_00406960
    CMP EAX,0x10000                     ; 004069c7
        ;   Label: LAB_004069c7
    JGE 0x004069d3                      ; 004069cc
        ;   XREF to: 004069d3 (CONDITIONAL_JUMP)  ; LAB_004069d3
    MOV EAX,0x10000                     ; 004069ce
    CMP EDX,0x10000                     ; 004069d3
        ;   Label: LAB_004069d3
    JGE 0x004069e0                      ; 004069d9
        ;   XREF to: 004069e0 (CONDITIONAL_JUMP)  ; LAB_004069e0
    MOV EDX,0x10000                     ; 004069db
    CMP EAX,0xfeffff                    ; 004069e0
        ;   Label: LAB_004069e0
    JLE 0x004069ec                      ; 004069e5
        ;   XREF to: 004069ec (CONDITIONAL_JUMP)  ; LAB_004069ec
    MOV EAX,0xfeffff                    ; 004069e7
    CMP EDX,0xfeffff                    ; 004069ec
        ;   Label: LAB_004069ec
    JLE 0x00406960                      ; 004069f2
        ;   XREF to: 00406960 (CONDITIONAL_JUMP)  ; LAB_00406960
    MOV EDX,0xfeffff                    ; 004069f8
    JMP 0x00406960                      ; 004069fd
        ;   XREF to: 00406960 (UNCONDITIONAL_JUMP)  ; LAB_00406960
    PUSH 0x70ca98                       ; 00406a02 | DAT_0070ca98
        ;   Label: LAB_00406a02
    PUSH EDI                            ; 00406a07
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00406a08
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406a0d
    POP EBX                             ; 00406a10
    POP ESI                             ; 00406a11
    POP EDI                             ; 00406a12
    MOV EDX,dword ptr [ESP + 0x8]       ; 00406a13
        ;   Label: LAB_00406a13
    MOV EDX,dword ptr [EDX + 0x4]       ; 00406a17
    LEA EAX,[EDX*0x4 + 0x0]             ; 00406a1a
    SUB EAX,EDX                         ; 00406a21
    LEA EDX,[EAX*0x4 + 0x0]             ; 00406a23
    MOV EAX,dword ptr [ESP + 0x8]       ; 00406a2a
    ADD EAX,0x18                        ; 00406a2e
    ADD EAX,EDX                         ; 00406a31
    POP EBP                             ; 00406a33
    RET                                 ; 00406a34

