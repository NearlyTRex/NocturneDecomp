; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0046c620(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   quad_primitive
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined2       Stack[-0x24]:2  local_24
; undefined2       Stack[-0x22]:2  local_22
; undefined2       Stack[-0x20]:2  local_20
; undefined2       Stack[-0x1e]:2  local_1e
; undefined2       Stack[-0x1c]:2  local_1c
; undefined2       Stack[-0x1a]:2  local_1a
; undefined2       Stack[-0x18]:2  local_18
; undefined2       Stack[-0x16]:2  local_16
; undefined2       Stack[-0x14]:2  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_0046bd10 at 0046bd42
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00 at 00469db7
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c620
        ;   Label: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046c620
    PUSH ESI                            ; 0046c621
    PUSH EDI                            ; 0046c622
    PUSH EBP                            ; 0046c623
    SUB ESP,0x14                        ; 0046c624
    MOV ESI,dword ptr [ESP + 0x28]      ; 0046c627
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046c62b
    CMP dword ptr [ESI + 0xc],0x0       ; 0046c62f
    JZ 0x0046c64d                       ; 0046c633
        ;   XREF to: 0046c64d (CONDITIONAL_JUMP)  ; LAB_0046c64d
    LEA EAX,[EBX + 0x8]                 ; 0046c635
    PUSH EAX                            ; 0046c638
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046c639
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046c63e
    TEST EAX,EAX                        ; 0046c641
    JNZ 0x0046c64d                      ; 0046c643
        ;   XREF to: 0046c64d (CONDITIONAL_JUMP)  ; LAB_0046c64d
    ADD ESP,0x14                        ; 0046c645
        ;   Label: LAB_0046c645
    POP EBP                             ; 0046c648
    POP EDI                             ; 0046c649
    POP ESI                             ; 0046c64a
    POP EBX                             ; 0046c64b
    RET                                 ; 0046c64c
    MOV AX,word ptr [EBX + 0x18]        ; 0046c64d
        ;   Label: LAB_0046c64d
    MOV word ptr [ESP],AX               ; 0046c651
    MOV AX,word ptr [EBX + 0x24]        ; 0046c655
    MOV word ptr [ESP + 0x2],AX         ; 0046c659
    MOV AX,word ptr [EBX + 0x30]        ; 0046c65e
    MOV word ptr [ESP + 0x4],AX         ; 0046c662
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0046c667
    SAR EAX,0x8                         ; 0046c66a
    MOV word ptr [ESP + 0x6],AX         ; 0046c66d
    MOV EAX,dword ptr [EBX + 0x28]      ; 0046c672
    SAR EAX,0x8                         ; 0046c675
    MOV word ptr [ESP + 0x8],AX         ; 0046c678
    MOV EAX,dword ptr [EBX + 0x34]      ; 0046c67d
    SAR EAX,0x8                         ; 0046c680
    MOV word ptr [ESP + 0xa],AX         ; 0046c683
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046c688
    SAR EAX,0x8                         ; 0046c68b
    MOV word ptr [ESP + 0xc],AX         ; 0046c68e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0046c693
    SAR EAX,0x8                         ; 0046c696
    MOV word ptr [ESP + 0xe],AX         ; 0046c699
    MOV EAX,dword ptr [EBX + 0x38]      ; 0046c69e
    MOV ECX,dword ptr [ESP + 0x30]      ; 0046c6a1
    SAR EAX,0x8                         ; 0046c6a5
    PUSH ECX                            ; 0046c6a8
    MOV word ptr [ESP + 0x14],AX        ; 0046c6a9
    LEA EAX,[ESP + 0x4]                 ; 0046c6ae
    PUSH EAX                            ; 0046c6b2
    PUSH ESI                            ; 0046c6b3
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720 ; 0046c6b4
        ;   XREF to: 0046c720 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    MOV EDI,dword ptr [EBX + 0x4]       ; 0046c6b9
    ADD ESP,0xc                         ; 0046c6bc
    CMP EDI,0x3                         ; 0046c6bf
    JLE 0x0046c645                      ; 0046c6c2
        ;   XREF to: 0046c645 (CONDITIONAL_JUMP)  ; LAB_0046c645
    MOV AX,word ptr [EBX + 0x30]        ; 0046c6c4
    MOV word ptr [ESP + 0x2],AX         ; 0046c6c8
    MOV AX,word ptr [EBX + 0x3c]        ; 0046c6cd
    MOV word ptr [ESP + 0x4],AX         ; 0046c6d1
    MOV EAX,dword ptr [EBX + 0x34]      ; 0046c6d6
    SAR EAX,0x8                         ; 0046c6d9
    MOV word ptr [ESP + 0x8],AX         ; 0046c6dc
    MOV EAX,dword ptr [EBX + 0x40]      ; 0046c6e1
    SAR EAX,0x8                         ; 0046c6e4
    MOV word ptr [ESP + 0xa],AX         ; 0046c6e7
    MOV EAX,dword ptr [EBX + 0x38]      ; 0046c6ec
    SAR EAX,0x8                         ; 0046c6ef
    MOV word ptr [ESP + 0xe],AX         ; 0046c6f2
    MOV EAX,dword ptr [EBX + 0x44]      ; 0046c6f7
    MOV EBP,dword ptr [ESP + 0x30]      ; 0046c6fa
    SAR EAX,0x8                         ; 0046c6fe
    PUSH EBP                            ; 0046c701
    MOV word ptr [ESP + 0x14],AX        ; 0046c702
    LEA EAX,[ESP + 0x4]                 ; 0046c707
    PUSH EAX                            ; 0046c70b
    PUSH ESI                            ; 0046c70c
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720 ; 0046c70d
        ;   XREF to: 0046c720 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 0046c712
    ADD ESP,0x14                        ; 0046c715
    POP EBP                             ; 0046c718
    POP EDI                             ; 0046c719
    POP ESI                             ; 0046c71a
    POP EBX                             ; 0046c71b
    RET                                 ; 0046c71c

