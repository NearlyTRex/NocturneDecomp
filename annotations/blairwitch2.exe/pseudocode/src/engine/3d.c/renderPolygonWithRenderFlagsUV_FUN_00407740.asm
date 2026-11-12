; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00407740(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
; int              Stack[0x8]:4   render_flags
; int              Stack[0xc]:4   render_state_flags
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e64
;   undefined4 DAT_01c35e68
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000
;   engine_light.cpp_calculateLighting_FUN_004e28b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407740
        ;   Label: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407740
    PUSH ESI                            ; 00407741
    PUSH EDI                            ; 00407742
    PUSH EBP                            ; 00407743
    MOV EDI,dword ptr [ESP + 0x14]      ; 00407744
    MOV EBX,dword ptr [ESP + 0x18]      ; 00407748
    LEA EAX,[EDI + 0x8]                 ; 0040774c
    PUSH EAX                            ; 0040774f
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00407750
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407755
    TEST EAX,EAX                        ; 00407758
    JZ 0x0040781a                       ; 0040775a
        ;   XREF to: 0040781a (CONDITIONAL_JUMP)  ; LAB_0040781a
    CMP dword ptr [0x01c38b40],0x0      ; 00407760 | DAT_01c38b40
    JNZ 0x0040782e                      ; 00407767
        ;   XREF to: 0040782e (CONDITIONAL_JUMP)  ; LAB_0040782e
    CMP dword ptr [0x006141c0],0x20     ; 0040776d | DAT_006141c0
    JNZ 0x0040781f                      ; 00407774
        ;   XREF to: 0040781f (CONDITIONAL_JUMP)  ; LAB_0040781f
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040777a | DAT_01c35e6c
    MOV dword ptr [0x01c38b54],EBX      ; 00407784 | DAT_01c38b54
        ;   Label: LAB_00407784
    TEST BL,0x10                        ; 0040778a
    JZ 0x004077a8                       ; 0040778d
        ;   XREF to: 004077a8 (CONDITIONAL_JUMP)  ; LAB_004077a8
    MOV ESI,dword ptr [EDI + 0x10]      ; 0040778f
    PUSH ESI                            ; 00407792
    MOV EBP,dword ptr [EDI + 0xc]       ; 00407793
    PUSH EBP                            ; 00407796
    MOV EAX,dword ptr [EDI + 0x8]       ; 00407797
    PUSH EAX                            ; 0040779a
    CALL engine_light.cpp_calculateLighting_FUN_004e28b0 ; 0040779b
        ;   XREF to: 004e28b0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e28b0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 004077a0
    MOV [0x01c35e64],EAX                ; 004077a3 | DAT_01c35e64
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004077a8
        ;   Label: LAB_004077a8
    TEST EDX,EDX                        ; 004077ac
    JZ 0x00407855                       ; 004077ae
        ;   XREF to: 00407855 (CONDITIONAL_JUMP)  ; LAB_00407855
    MOV dword ptr [0x01c38b58],0x5      ; 004077b4 | DAT_01c38b58
    MOV EBP,dword ptr [EDI + 0x4]       ; 004077be
        ;   Label: LAB_004077be
    XOR ECX,ECX                         ; 004077c1
    TEST EBP,EBP                        ; 004077c3
    JLE 0x00407800                      ; 004077c5
        ;   XREF to: 00407800 (CONDITIONAL_JUMP)  ; LAB_00407800
    MOV EAX,EDI                         ; 004077c7
    XOR EDX,EDX                         ; 004077c9
    MOV EBX,dword ptr [EAX + 0x18]      ; 004077cb
        ;   Label: LAB_004077cb
    MOV dword ptr [EDX + 0x70ca98],EBX  ; 004077ce
    IMUL EBX,EBX,0x30                   ; 004077d4
    MOV ESI,dword ptr [EAX + 0x1c]      ; 004077d7
    MOV dword ptr [EBX + 0x62202c],ESI  ; 004077da
    MOV ESI,dword ptr [EAX + 0x20]      ; 004077e0
    ADD EDX,0x4                         ; 004077e3
    MOV dword ptr [EBX + 0x622030],ESI  ; 004077e6
    INC ECX                             ; 004077ec
    MOV EBX,dword ptr [EDI + 0x4]       ; 004077ed
    ADD EAX,0xc                         ; 004077f0
    CMP ECX,EBX                         ; 004077f3
    JL 0x004077cb                       ; 004077f5
        ;   XREF to: 004077cb (CONDITIONAL_JUMP)  ; LAB_004077cb
    LEA EAX,[EAX]                       ; 004077f7
    LEA EDX,[EDX]                       ; 004077fd
    CMP dword ptr [0x01c35e68],0x0      ; 00407800 | DAT_01c35e68
        ;   Label: LAB_00407800
    JZ 0x00407874                       ; 00407807
        ;   XREF to: 00407874 (CONDITIONAL_JUMP)  ; LAB_00407874
    PUSH 0x70ca98                       ; 00407809
    MOV EAX,dword ptr [EDI + 0x4]       ; 0040780e
    PUSH EAX                            ; 00407811
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00407812
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407817
    POP EBP                             ; 0040781a
        ;   Label: LAB_0040781a
    POP EDI                             ; 0040781b
    POP ESI                             ; 0040781c
    POP EBX                             ; 0040781d
    RET                                 ; 0040781e
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040781f | DAT_01c35e6c
        ;   Label: LAB_0040781f
    JMP 0x00407784                      ; 00407829
        ;   XREF to: 00407784 (UNCONDITIONAL_JUMP)  ; LAB_00407784
    CMP dword ptr [0x006141c0],0x20     ; 0040782e | DAT_006141c0
        ;   Label: LAB_0040782e
    JNZ 0x00407846                      ; 00407835
        ;   XREF to: 00407846 (CONDITIONAL_JUMP)  ; LAB_00407846
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00407837 | DAT_01c35e6c
    JMP 0x00407784                      ; 00407841
        ;   XREF to: 00407784 (UNCONDITIONAL_JUMP)  ; LAB_00407784
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00407846 | DAT_01c35e6c
        ;   Label: LAB_00407846
    JMP 0x00407784                      ; 00407850
        ;   XREF to: 00407784 (UNCONDITIONAL_JUMP)  ; LAB_00407784
    TEST BL,0xc0                        ; 00407855
        ;   Label: LAB_00407855
    JZ 0x00407869                       ; 00407858
        ;   XREF to: 00407869 (CONDITIONAL_JUMP)  ; LAB_00407869
    MOV dword ptr [0x01c38b58],0x1      ; 0040785a | DAT_01c38b58
    JMP 0x004077be                      ; 00407864
        ;   XREF to: 004077be (UNCONDITIONAL_JUMP)  ; LAB_004077be
    MOV dword ptr [0x01c38b58],EDX      ; 00407869 | DAT_01c38b58
        ;   Label: LAB_00407869
    JMP 0x004077be                      ; 0040786f
        ;   XREF to: 004077be (UNCONDITIONAL_JUMP)  ; LAB_004077be
    PUSH 0x70ca98                       ; 00407874
        ;   Label: LAB_00407874
    MOV EBP,dword ptr [EDI + 0x4]       ; 00407879
    PUSH EBP                            ; 0040787c
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00433000 ; 0040787d
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00433000(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407882
    POP EBP                             ; 00407885
    POP EDI                             ; 00407886
    POP ESI                             ; 00407887
    POP EBX                             ; 00407888
    RET                                 ; 00407889

