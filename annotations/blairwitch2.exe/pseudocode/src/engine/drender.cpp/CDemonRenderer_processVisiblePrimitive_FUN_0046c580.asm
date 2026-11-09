; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046c580(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags)
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
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0 at 0046bcd2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c580
        ;   Label: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046c580
    SUB ESP,0x14                        ; 0046c581
    MOV EBX,dword ptr [ESP + 0x20]      ; 0046c584
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c588
    CMP dword ptr [EAX + 0xc],0x0       ; 0046c58c
    JZ 0x0046c5a7                       ; 0046c590
        ;   XREF to: 0046c5a7 (CONDITIONAL_JUMP)  ; LAB_0046c5a7
    LEA EAX,[EBX + 0x8]                 ; 0046c592
    PUSH EAX                            ; 0046c595
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046c596
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046c59b
    TEST EAX,EAX                        ; 0046c59e
    JNZ 0x0046c5a7                      ; 0046c5a0
        ;   XREF to: 0046c5a7 (CONDITIONAL_JUMP)  ; LAB_0046c5a7
    ADD ESP,0x14                        ; 0046c5a2
    POP EBX                             ; 0046c5a5
    RET                                 ; 0046c5a6
    MOV AX,word ptr [EBX + 0x18]        ; 0046c5a7
        ;   Label: LAB_0046c5a7
    MOV word ptr [ESP],AX               ; 0046c5ab
    MOV AX,word ptr [EBX + 0x24]        ; 0046c5af
    MOV word ptr [ESP + 0x2],AX         ; 0046c5b3
    MOV AX,word ptr [EBX + 0x30]        ; 0046c5b8
    MOV word ptr [ESP + 0x4],AX         ; 0046c5bc
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0046c5c1
    SAR EAX,0x8                         ; 0046c5c4
    MOV word ptr [ESP + 0x6],AX         ; 0046c5c7
    MOV EAX,dword ptr [EBX + 0x28]      ; 0046c5cc
    SAR EAX,0x8                         ; 0046c5cf
    MOV word ptr [ESP + 0x8],AX         ; 0046c5d2
    MOV EAX,dword ptr [EBX + 0x34]      ; 0046c5d7
    SAR EAX,0x8                         ; 0046c5da
    MOV word ptr [ESP + 0xa],AX         ; 0046c5dd
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046c5e2
    SAR EAX,0x8                         ; 0046c5e5
    MOV word ptr [ESP + 0xc],AX         ; 0046c5e8
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0046c5ed
    SAR EAX,0x8                         ; 0046c5f0
    MOV word ptr [ESP + 0xe],AX         ; 0046c5f3
    MOV EAX,dword ptr [EBX + 0x38]      ; 0046c5f8
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046c5fb
    SAR EAX,0x8                         ; 0046c5ff
    PUSH ECX                            ; 0046c602
    MOV word ptr [ESP + 0x14],AX        ; 0046c603
    LEA EAX,[ESP + 0x4]                 ; 0046c608
    PUSH EAX                            ; 0046c60c
    MOV EBX,dword ptr [ESP + 0x24]      ; 0046c60d
    PUSH EBX                            ; 0046c611
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720 ; 0046c612
        ;   XREF to: 0046c720 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 0046c617
    ADD ESP,0x14                        ; 0046c61a
    POP EBX                             ; 0046c61d
    RET                                 ; 0046c61e

