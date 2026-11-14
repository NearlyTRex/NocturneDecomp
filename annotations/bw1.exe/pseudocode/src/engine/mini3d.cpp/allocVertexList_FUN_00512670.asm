; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_allocVertexList_FUN_00512670(void)
;
;
; XREF[5]:
;   engine_mini3d.cpp_polyListD3DL_FUN_005129d0 at 00512a2d
;   engine_mini3d.cpp_polyListD3DTL_FUN_00512de0 at 00512e49
;   engine_mini3d.cpp_polyListL_FUN_00512c60 at 00512cba
;   engine_mini3d.cpp_polyListSurface_FUN_00516cc0 at 00516ceb
;   engine_mini3d.cpp_polyList_FUN_005126d0 at 0051272d
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005e8c93
;   TerminatedCString s_CMini3D_allocVertexList_005e8ca8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d227dc
;   undefined4 DAT_01d227e0
;   undefined4 DAT_01d227e4
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01d227dc],0x0      ; 00512670 | DAT_01d227dc
        ;   Label: engine_mini3d.cpp_allocVertexList_FUN_00512670
    JZ 0x0051267a                       ; 00512677
        ;   XREF to: 0051267a (CONDITIONAL_JUMP)  ; LAB_0051267a
    RET                                 ; 00512679
    PUSH 0x9c440                        ; 0051267a
        ;   Label: LAB_0051267a
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 0051267f
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00512684
    MOV [0x01d227dc],EAX                ; 00512687 | DAT_01d227dc
    TEST EAX,EAX                        ; 0051268c
    JNZ 0x005126b5                      ; 0051268e
        ;   XREF to: 005126b5 (CONDITIONAL_JUMP)  ; LAB_005126b5
    PUSH EBX                            ; 00512690
    MOV ECX,0x5e8c93                    ; 00512691 | = "..\\engine\\mini3d.cpp"
    MOV EBX,0x67d                       ; 00512696
    PUSH 0x5e8ca8                       ; 0051269b | = "CMini3D::allocVertexList - Out of mem..."
    MOV dword ptr [0x01d1d400],ECX      ; 005126a0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005126a6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005126ac
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005126b1
    POP EBX                             ; 005126b4
    MOV EAX,[0x01d227dc]                ; 005126b5 | DAT_01d227dc
        ;   Label: LAB_005126b5
    ADD EAX,0x3f                        ; 005126ba
    AND AL,0xc0                         ; 005126bd
    MOV [0x01d227e0],EAX                ; 005126bf | DAT_01d227e0
    MOV [0x01d227e4],EAX                ; 005126c4 | DAT_01d227e4
    RET                                 ; 005126c9

