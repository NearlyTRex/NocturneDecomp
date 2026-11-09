; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_free_FUN_005b6030(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_morph.cpp_CMorphModel_dtor_FUN_005b6010 at 005b6016
;   core_morph.cpp_CMorph_free_FUN_005b6ea0 at 005b6ea5
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80 at 005b6f9d
;   core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0 at 005b6fdd
;   core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_005b6ec0 at 005b6ee0
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6030
        ;   Label: core_morph.cpp_CMorphModel_free_FUN_005b6030
    PUSH ESI                            ; 005b6031
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b6032
    MOV EDX,dword ptr [EBX + 0x58]      ; 005b6036
    TEST EDX,EDX                        ; 005b6039
    JNZ 0x005b6062                      ; 005b603b
        ;   XREF to: 005b6062 (CONDITIONAL_JUMP)  ; LAB_005b6062
    MOV ESI,dword ptr [EBX + 0x60]      ; 005b603d
        ;   Label: LAB_005b603d
    TEST ESI,ESI                        ; 005b6040
    JNZ 0x005b6074                      ; 005b6042
        ;   XREF to: 005b6074 (CONDITIONAL_JUMP)  ; LAB_005b6074
    MOV dword ptr [EBX + 0x5c],0x0      ; 005b6044
        ;   Label: LAB_005b6044
    MOV dword ptr [EBX + 0x64],0x0      ; 005b604b
    MOV dword ptr [EBX],0x0             ; 005b6052
    MOV dword ptr [EBX + 0x54],0x0      ; 005b6058
    POP ESI                             ; 005b605f
    POP EBX                             ; 005b6060
    RET                                 ; 005b6061
    PUSH EDX                            ; 005b6062
        ;   Label: LAB_005b6062
    CALL crt_unknown.c_FUN_005b86a0     ; 005b6063
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005b6068
    MOV dword ptr [EBX + 0x58],0x0      ; 005b606b
    JMP 0x005b603d                      ; 005b6072
        ;   XREF to: 005b603d (UNCONDITIONAL_JUMP)  ; LAB_005b603d
    PUSH ESI                            ; 005b6074
        ;   Label: LAB_005b6074
    CALL crt_unknown.c_FUN_005b86a0     ; 005b6075
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005b607a
    MOV dword ptr [EBX + 0x60],0x0      ; 005b607d
    JMP 0x005b6044                      ; 005b6084
        ;   XREF to: 005b6044 (UNCONDITIONAL_JUMP)  ; LAB_005b6044

