; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
; int              Stack[0xc]:4   render_flags
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
;   engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20 at 0048ce52
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048d700
        ;   Label: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
    SUB ESP,0x14                        ; 0048d701
    MOV EBX,dword ptr [ESP + 0x20]      ; 0048d704
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048d708
    CMP dword ptr [EAX + 0xc],0x0       ; 0048d70c
    JZ 0x0048d727                       ; 0048d710
        ;   XREF to: 0048d727 (CONDITIONAL_JUMP)  ; LAB_0048d727
    LEA EAX,[EBX + 0x8]                 ; 0048d712
    PUSH EAX                            ; 0048d715
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048d716
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048d71b
    TEST EAX,EAX                        ; 0048d71e
    JNZ 0x0048d727                      ; 0048d720
        ;   XREF to: 0048d727 (CONDITIONAL_JUMP)  ; LAB_0048d727
    ADD ESP,0x14                        ; 0048d722
    POP EBX                             ; 0048d725
    RET                                 ; 0048d726
    MOV AX,word ptr [EBX + 0x18]        ; 0048d727
        ;   Label: LAB_0048d727
    MOV word ptr [ESP],AX               ; 0048d72b
    MOV AX,word ptr [EBX + 0x24]        ; 0048d72f
    MOV word ptr [ESP + 0x2],AX         ; 0048d733
    MOV AX,word ptr [EBX + 0x30]        ; 0048d738
    MOV word ptr [ESP + 0x4],AX         ; 0048d73c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0048d741
    SAR EAX,0x8                         ; 0048d744
    MOV word ptr [ESP + 0x6],AX         ; 0048d747
    MOV EAX,dword ptr [EBX + 0x28]      ; 0048d74c
    SAR EAX,0x8                         ; 0048d74f
    MOV word ptr [ESP + 0x8],AX         ; 0048d752
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048d757
    SAR EAX,0x8                         ; 0048d75a
    MOV word ptr [ESP + 0xa],AX         ; 0048d75d
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048d762
    SAR EAX,0x8                         ; 0048d765
    MOV word ptr [ESP + 0xc],AX         ; 0048d768
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0048d76d
    SAR EAX,0x8                         ; 0048d770
    MOV word ptr [ESP + 0xe],AX         ; 0048d773
    MOV EAX,dword ptr [EBX + 0x38]      ; 0048d778
    MOV ECX,dword ptr [ESP + 0x24]      ; 0048d77b
    SAR EAX,0x8                         ; 0048d77f
    PUSH ECX                            ; 0048d782
    MOV word ptr [ESP + 0x14],AX        ; 0048d783
    LEA EAX,[ESP + 0x4]                 ; 0048d788
    PUSH EAX                            ; 0048d78c
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048d78d
    PUSH EBX                            ; 0048d791
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0 ; 0048d792
        ;   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 0048d797
    ADD ESP,0x14                        ; 0048d79a
    POP EBX                             ; 0048d79d
    RET                                 ; 0048d79e

