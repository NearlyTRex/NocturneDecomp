; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessVector_FUN_0040d2c0(uint *crc_state,CVector3f *vector)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; CVector3f *      Stack[0x8]:4   vector
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409df0 at 00409e09
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040d260
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 0040d2c0
        ;   Label: core_actor.cpp_crc32ProcessVector_FUN_0040d2c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d2c2
    PUSH EDX                            ; 0040d2c6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040d2c7
    PUSH ECX                            ; 0040d2cb
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040d260 ; 0040d2cc
        ;   XREF to: 0040d260 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040d260(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040d2d1
    RET                                 ; 0040d2d4

