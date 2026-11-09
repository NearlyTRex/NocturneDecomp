; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_staticInit_FUN_0043aee0(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   support_codec.cpp_CLZWDecompress_ctor_FUN_00434990
;
; *****************************************************************************

section .text

    PUSH 0x5f22b0                       ; 0043aee0
        ;   Label: core_dcamera.cpp_staticInit_FUN_0043aee0
    PUSH 0x12d40                        ; 0043aee5
    PUSH 0xa005d4                       ; 0043aeea
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0043aeef
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 0043aef4
    PUSH 0x6                            ; 0043aef7
    PUSH 0x10000                        ; 0043aef9
    PUSH 0x1325cc8                      ; 0043aefe
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_00434990 ; 0043af03
        ;   XREF to: 00434990 (UNCONDITIONAL_CALL)  ; CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_00434990(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
    ADD ESP,0xc                         ; 0043af08
    PUSH 0x609f88                       ; 0043af0b
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0043af10
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 0043af15
    RET                                 ; 0043af18

