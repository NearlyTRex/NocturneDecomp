; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_staticInit_FUN_0043f9c0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c_FUN_00564bb0
;   support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0043f9c0
        ;   Label: core_dcamera.cpp_staticInit_FUN_0043f9c0
    PUSH 0x12d40                        ; 0043f9c5
    PUSH 0x9bb178                       ; 0043f9ca
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0043f9cf
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0043f9d4
    PUSH 0x6                            ; 0043f9d7
    PUSH 0x10000                        ; 0043f9d9
    PUSH 0x12cdb28                      ; 0043f9de
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0 ; 0043f9e3
        ;   XREF to: 004399f0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0()
    ADD ESP,0xc                         ; 0043f9e8
    PUSH 0x5ad434                       ; 0043f9eb
    CALL crt_unknown.c_FUN_00564bb0     ; 0043f9f0
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 0043f9f5
    RET                                 ; 0043f9f8

