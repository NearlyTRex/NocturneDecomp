; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30(CDemonRenderer *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined2       Stack[-0x18]:2  local_18
; undefined2       Stack[-0x16]:2  local_16
; undefined2       Stack[-0x14]:2  local_14
; undefined2       Stack[-0x12]:2  local_12
; undefined2       Stack[-0x10]:2  local_10
; undefined2       Stack[-0xe]:2  local_e
; undefined2       Stack[-0xc]:2  local_c
; undefined2       Stack[-0xa]:2  local_a
; undefined2       Stack[-0x8]:2  local_8
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0 at 00461402
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461a30
        ;   Label: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30
    SUB ESP,0x14                        ; 00461a31
    MOV EBX,dword ptr [ESP + 0x20]      ; 00461a34
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00461a38
    CMP dword ptr [EAX + 0xc],0x0       ; 00461a3c
    JZ 0x00461a57                       ; 00461a40
        ;   XREF to: 00461a57 (CONDITIONAL_JUMP)  ; LAB_00461a57
    LEA EAX,[EBX + 0x8]                 ; 00461a42
    PUSH EAX                            ; 00461a45
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00461a46
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00461a4b
    TEST EAX,EAX                        ; 00461a4e
    JNZ 0x00461a57                      ; 00461a50
        ;   XREF to: 00461a57 (CONDITIONAL_JUMP)  ; LAB_00461a57
    ADD ESP,0x14                        ; 00461a52
    POP EBX                             ; 00461a55
    RET                                 ; 00461a56
    MOV AX,word ptr [EBX + 0x18]        ; 00461a57
        ;   Label: LAB_00461a57
    MOV word ptr [ESP],AX               ; 00461a5b
    MOV AX,word ptr [EBX + 0x24]        ; 00461a5f
    MOV word ptr [ESP + 0x2],AX         ; 00461a63
    MOV AX,word ptr [EBX + 0x30]        ; 00461a68
    MOV word ptr [ESP + 0x4],AX         ; 00461a6c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00461a71
    SAR EAX,0x8                         ; 00461a74
    MOV word ptr [ESP + 0x6],AX         ; 00461a77
    MOV EAX,dword ptr [EBX + 0x28]      ; 00461a7c
    SAR EAX,0x8                         ; 00461a7f
    MOV word ptr [ESP + 0x8],AX         ; 00461a82
    MOV EAX,dword ptr [EBX + 0x34]      ; 00461a87
    SAR EAX,0x8                         ; 00461a8a
    MOV word ptr [ESP + 0xa],AX         ; 00461a8d
    MOV EAX,dword ptr [EBX + 0x20]      ; 00461a92
    SAR EAX,0x8                         ; 00461a95
    MOV word ptr [ESP + 0xc],AX         ; 00461a98
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00461a9d
    SAR EAX,0x8                         ; 00461aa0
    MOV word ptr [ESP + 0xe],AX         ; 00461aa3
    MOV EAX,dword ptr [EBX + 0x38]      ; 00461aa8
    MOV ECX,dword ptr [ESP + 0x24]      ; 00461aab
    SAR EAX,0x8                         ; 00461aaf
    PUSH ECX                            ; 00461ab2
    MOV word ptr [ESP + 0x14],AX        ; 00461ab3
    LEA EAX,[ESP + 0x4]                 ; 00461ab8
    PUSH EAX                            ; 00461abc
    MOV EBX,dword ptr [ESP + 0x24]      ; 00461abd
    PUSH EBX                            ; 00461ac1
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0 ; 00461ac2
        ;   XREF to: 00461bd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 00461ac7
    ADD ESP,0x14                        ; 00461aca
    POP EBX                             ; 00461acd
    RET                                 ; 00461ace

