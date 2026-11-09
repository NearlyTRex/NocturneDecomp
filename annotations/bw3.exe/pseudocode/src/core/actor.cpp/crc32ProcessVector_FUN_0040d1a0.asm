; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessVector_FUN_0040d1a0(uint *param_1,byte *param_2)
;
;
; XREF[1]:
;   core_actor.cpp_FUN_00409c80 at 00409c99
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040d140
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 0040d1a0
        ;   Label: core_actor.cpp_crc32ProcessVector_FUN_0040d1a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d1a2
    PUSH EDX                            ; 0040d1a6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040d1a7
    PUSH ECX                            ; 0040d1ab
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040d140 ; 0040d1ac
        ;   XREF to: 0040d140 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040d140(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040d1b1
    RET                                 ; 0040d1b4

