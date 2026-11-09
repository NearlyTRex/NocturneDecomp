; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046e160(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)
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
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880 at 0046d8b2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e160
        ;   Label: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046e160
    SUB ESP,0x14                        ; 0046e161
    MOV EBX,dword ptr [ESP + 0x20]      ; 0046e164
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046e168
    CMP dword ptr [EAX + 0xc],0x0       ; 0046e16c
    JZ 0x0046e187                       ; 0046e170
        ;   XREF to: 0046e187 (CONDITIONAL_JUMP)  ; LAB_0046e187
    LEA EAX,[EBX + 0x8]                 ; 0046e172
    PUSH EAX                            ; 0046e175
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046e176
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046e17b
    TEST EAX,EAX                        ; 0046e17e
    JNZ 0x0046e187                      ; 0046e180
        ;   XREF to: 0046e187 (CONDITIONAL_JUMP)  ; LAB_0046e187
    ADD ESP,0x14                        ; 0046e182
    POP EBX                             ; 0046e185
    RET                                 ; 0046e186
    MOV AX,word ptr [EBX + 0x18]        ; 0046e187
        ;   Label: LAB_0046e187
    MOV word ptr [ESP],AX               ; 0046e18b
    MOV AX,word ptr [EBX + 0x24]        ; 0046e18f
    MOV word ptr [ESP + 0x2],AX         ; 0046e193
    MOV AX,word ptr [EBX + 0x30]        ; 0046e198
    MOV word ptr [ESP + 0x4],AX         ; 0046e19c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0046e1a1
    SAR EAX,0x8                         ; 0046e1a4
    MOV word ptr [ESP + 0x6],AX         ; 0046e1a7
    MOV EAX,dword ptr [EBX + 0x28]      ; 0046e1ac
    SAR EAX,0x8                         ; 0046e1af
    MOV word ptr [ESP + 0x8],AX         ; 0046e1b2
    MOV EAX,dword ptr [EBX + 0x34]      ; 0046e1b7
    SAR EAX,0x8                         ; 0046e1ba
    MOV word ptr [ESP + 0xa],AX         ; 0046e1bd
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046e1c2
    SAR EAX,0x8                         ; 0046e1c5
    MOV word ptr [ESP + 0xc],AX         ; 0046e1c8
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0046e1cd
    SAR EAX,0x8                         ; 0046e1d0
    MOV word ptr [ESP + 0xe],AX         ; 0046e1d3
    MOV EAX,dword ptr [EBX + 0x38]      ; 0046e1d8
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046e1db
    SAR EAX,0x8                         ; 0046e1df
    PUSH ECX                            ; 0046e1e2
    MOV word ptr [ESP + 0x14],AX        ; 0046e1e3
    LEA EAX,[ESP + 0x4]                 ; 0046e1e8
    PUSH EAX                            ; 0046e1ec
    MOV EBX,dword ptr [ESP + 0x24]      ; 0046e1ed
    PUSH EBX                            ; 0046e1f1
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300 ; 0046e1f2
        ;   XREF to: 0046e300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 0046e1f7
    ADD ESP,0x14                        ; 0046e1fa
    POP EBX                             ; 0046e1fd
    RET                                 ; 0046e1fe

