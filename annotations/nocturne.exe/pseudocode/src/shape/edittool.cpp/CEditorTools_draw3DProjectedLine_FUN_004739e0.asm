; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0(void)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_0059ca4c
;
; Called Functions:
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;   shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004737a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004739e0
        ;   Label: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0
    SUB ESP,0x3c                        ; 004739e1
    MOV EAX,dword ptr [ESP + 0x48]      ; 004739e4
    LEA EBX,[ESP + 0x30]                ; 004739e8
    FLD float ptr [EAX]                 ; 004739ec
    FMUL float ptr [0x0059ca4c]         ; 004739ee | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 004739f4
    FLD float ptr [EAX + 0x4]           ; 004739f6
    FMUL float ptr [0x0059ca4c]         ; 004739f9 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 004739ff
    FLD float ptr [EAX + 0x8]           ; 00473a02
    FMUL float ptr [0x0059ca4c]         ; 00473a05 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 00473a0b
    LEA EBX,[ESP + 0x30]                ; 00473a0e
    PUSH EBX                            ; 00473a12
    LEA EBX,[ESP + 0x4]                 ; 00473a13
    PUSH EBX                            ; 00473a17
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00473a18
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00473a1d
    TEST byte ptr [ESP + 0x13],0x80     ; 00473a20
    JZ 0x00473a2c                       ; 00473a25
        ;   XREF to: 00473a2c (CONDITIONAL_JUMP)  ; LAB_00473a2c
    ADD ESP,0x3c                        ; 00473a27
    POP EBX                             ; 00473a2a
    RET                                 ; 00473a2b
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00473a2c
        ;   Label: LAB_00473a2c
    MOV EBX,dword ptr [ESP + 0x14]      ; 00473a30
    PUSH EDX                            ; 00473a34
    SAR EBX,0x10                        ; 00473a35
    PUSH EBX                            ; 00473a38
    MOV EBX,dword ptr [ESP + 0x18]      ; 00473a39
    SAR EBX,0x10                        ; 00473a3d
    PUSH EBX                            ; 00473a40
    MOV ECX,dword ptr [ESP + 0x50]      ; 00473a41
    PUSH ECX                            ; 00473a45
    CALL shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004737a0 ; 00473a46
        ;   XREF to: 004737a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004737a0(CEditorTools * this_ptr, int start_x, int start_y, int length)
    ADD ESP,0x10                        ; 00473a4b
    ADD ESP,0x3c                        ; 00473a4e
    POP EBX                             ; 00473a51
    RET                                 ; 00473a52

