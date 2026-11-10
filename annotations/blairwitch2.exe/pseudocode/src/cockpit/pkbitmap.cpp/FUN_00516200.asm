; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_00516200(CPackedBitmap *param_1)
;
;
; XREF[5]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_005161b0 at 005161b6
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60 at 00516a72
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130 at 0051713a
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30 at 00516f40
;   cockpit_pkbitmap.cpp_FUN_005168e0 at 005168ed
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516200
        ;   Label: cockpit_pkbitmap.cpp_FUN_00516200
    PUSH ESI                            ; 00516201
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516202
    MOV EDX,dword ptr [EBX + 0x14]      ; 00516206
    TEST EDX,EDX                        ; 00516209
    JNZ 0x00516225                      ; 0051620b
        ;   XREF to: 00516225 (CONDITIONAL_JUMP)  ; LAB_00516225
    MOV ESI,dword ptr [EBX + 0x20]      ; 0051620d
        ;   Label: LAB_0051620d
    PUSH ESI                            ; 00516210
    CALL crt_unknown.c_FUN_005b7fce     ; 00516211
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00516216
    PUSH EBX                            ; 00516219
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0 ; 0051621a
        ;   XREF to: 005161d0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0051621f
    POP ESI                             ; 00516222
    POP EBX                             ; 00516223
    RET                                 ; 00516224
    PUSH EDX                            ; 00516225
        ;   Label: LAB_00516225
    CALL crt_unknown.c_FUN_005b86a0     ; 00516226
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0051622b
    JMP 0x0051620d                      ; 0051622e
        ;   XREF to: 0051620d (UNCONDITIONAL_JUMP)  ; LAB_0051620d

