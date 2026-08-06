; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_free_FUN_004df290(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_morph.cpp_CMorphModel_dtor_FUN_004df270 at 004df276
;   core_morph.cpp_CMorph_free_FUN_004e0090 at 004e0095
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 at 004e018d
;   core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0 at 004e01cd
;   core_morph.cpp_CMorph_setupModelFromQuadPolygons_FUN_004e0110 at 004e0130
;   core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0 at 004e00d0
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df290
        ;   Label: core_morph.cpp_CMorphModel_free_FUN_004df290
    PUSH ESI                            ; 004df291
    MOV EBX,dword ptr [ESP + 0xc]       ; 004df292
    MOV EDX,dword ptr [EBX + 0x58]      ; 004df296
    TEST EDX,EDX                        ; 004df299
    JNZ 0x004df2c2                      ; 004df29b
        ;   XREF to: 004df2c2 (CONDITIONAL_JUMP)  ; LAB_004df2c2
    MOV ESI,dword ptr [EBX + 0x60]      ; 004df29d
        ;   Label: LAB_004df29d
    TEST ESI,ESI                        ; 004df2a0
    JNZ 0x004df2d4                      ; 004df2a2
        ;   XREF to: 004df2d4 (CONDITIONAL_JUMP)  ; LAB_004df2d4
    MOV dword ptr [EBX + 0x5c],0x0      ; 004df2a4
        ;   Label: LAB_004df2a4
    MOV dword ptr [EBX + 0x64],0x0      ; 004df2ab
    MOV dword ptr [EBX],0x0             ; 004df2b2
    MOV dword ptr [EBX + 0x54],0x0      ; 004df2b8
    POP ESI                             ; 004df2bf
    POP EBX                             ; 004df2c0
    RET                                 ; 004df2c1
    PUSH EDX                            ; 004df2c2
        ;   Label: LAB_004df2c2
    CALL crt_memory.c_free_FUN_005638d0 ; 004df2c3
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004df2c8
    MOV dword ptr [EBX + 0x58],0x0      ; 004df2cb
    JMP 0x004df29d                      ; 004df2d2
        ;   XREF to: 004df29d (UNCONDITIONAL_JUMP)  ; LAB_004df29d
    PUSH ESI                            ; 004df2d4
        ;   Label: LAB_004df2d4
    CALL crt_memory.c_free_FUN_005638d0 ; 004df2d5
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004df2da
    MOV dword ptr [EBX + 0x60],0x0      ; 004df2dd
    JMP 0x004df2a4                      ; 004df2e4
        ;   XREF to: 004df2a4 (UNCONDITIONAL_JUMP)  ; LAB_004df2a4

