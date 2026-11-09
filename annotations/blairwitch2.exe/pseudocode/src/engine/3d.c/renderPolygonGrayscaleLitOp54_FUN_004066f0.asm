; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_004066f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0070ca5c
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01c35e64
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_3d.c_lookupLitColor_FUN_004039e0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_light.cpp_calculateLighting_FUN_004e28b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004066f0
        ;   Label: engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_004066f0
    PUSH ESI                            ; 004066f1
    PUSH EBP                            ; 004066f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004066f3
    LEA ESI,[EBX + 0x18]                ; 004066f7
    LEA EAX,[EBX + 0x8]                 ; 004066fa
    PUSH EAX                            ; 004066fd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004066fe
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00406703
    TEST EAX,EAX                        ; 00406706
    JZ 0x0040677a                       ; 00406708
        ;   XREF to: 0040677a (CONDITIONAL_JUMP)  ; LAB_0040677a
    CMP dword ptr [0x01c38b40],0x0      ; 0040670a | DAT_01c38b40
    JNZ 0x00406795                      ; 00406711
        ;   XREF to: 00406795 (CONDITIONAL_JUMP)  ; LAB_00406795
    CMP dword ptr [0x006141c0],0x20     ; 00406717 | DAT_006141c0
    JNZ 0x00406789                      ; 0040671e
        ;   XREF to: 00406789 (CONDITIONAL_JUMP)  ; LAB_00406789
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406720 | DAT_01c35e6c
    PUSH EDI                            ; 0040672a
        ;   Label: LAB_0040672a
    MOV EAX,dword ptr [EBX + 0x10]      ; 0040672b
    PUSH EAX                            ; 0040672e
    MOV EDX,dword ptr [EBX + 0xc]       ; 0040672f
    MOV EDI,0x10                        ; 00406732
    PUSH EDX                            ; 00406737
    MOV ECX,dword ptr [EBX + 0x8]       ; 00406738
    XOR EBP,EBP                         ; 0040673b
    PUSH ECX                            ; 0040673d
    MOV dword ptr [0x01c38b54],EDI      ; 0040673e | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00406744 | DAT_01c38b58
    CALL engine_light.cpp_calculateLighting_FUN_004e28b0 ; 0040674a
        ;   XREF to: 004e28b0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e28b0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 0040674f
    PUSH EAX                            ; 00406752
    MOV EDI,dword ptr [0x0070ca5c]      ; 00406753 | DAT_0070ca5c
    PUSH EDI                            ; 00406759
    MOV [0x01c35e64],EAX                ; 0040675a | DAT_01c35e64
    CALL engine_3d.c_lookupLitColor_FUN_004039e0 ; 0040675f
        ;   XREF to: 004039e0 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_004039e0(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00406764
    PUSH ESI                            ; 00406767
    MOV EBP,dword ptr [EBX + 0x4]       ; 00406768
    PUSH EBP                            ; 0040676b
    MOV [0x01c35e60],EAX                ; 0040676c | DAT_01c35e60
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00406771
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406776
    POP EDI                             ; 00406779
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040677a
        ;   Label: LAB_0040677a
    LEA EAX,[EBX + 0x18]                ; 0040677d
    SHL ESI,0x2                         ; 00406780
    ADD EAX,ESI                         ; 00406783
    POP EBP                             ; 00406785
    POP ESI                             ; 00406786
    POP EBX                             ; 00406787
    RET                                 ; 00406788
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406789 | DAT_01c35e6c
        ;   Label: LAB_00406789
    JMP 0x0040672a                      ; 00406793
        ;   XREF to: 0040672a (UNCONDITIONAL_JUMP)  ; LAB_0040672a
    CMP dword ptr [0x006141c0],0x20     ; 00406795 | DAT_006141c0
        ;   Label: LAB_00406795
    JNZ 0x004067aa                      ; 0040679c
        ;   XREF to: 004067aa (CONDITIONAL_JUMP)  ; LAB_004067aa
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040679e | DAT_01c35e6c
    JMP 0x0040672a                      ; 004067a8
        ;   XREF to: 0040672a (UNCONDITIONAL_JUMP)  ; LAB_0040672a
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004067aa | DAT_01c35e6c
        ;   Label: LAB_004067aa
    JMP 0x0040672a                      ; 004067b4
        ;   XREF to: 0040672a (UNCONDITIONAL_JUMP)  ; LAB_0040672a

