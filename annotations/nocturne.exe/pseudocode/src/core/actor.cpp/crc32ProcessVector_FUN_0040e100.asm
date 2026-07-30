; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessVector_FUN_0040e100(uint *crc_state,CVector3f *vector)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; CVector3f *      Stack[0x8]:4   vector
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_0040b0d0 at 0040b0e9
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 0040e100
        ;   Label: core_actor.cpp_crc32ProcessVector_FUN_0040e100
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e102
    PUSH EDX                            ; 0040e106
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040e107
    PUSH ECX                            ; 0040e10b
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0 ; 0040e10c
        ;   XREF to: 0040e0a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040e111
    RET                                 ; 0040e114

