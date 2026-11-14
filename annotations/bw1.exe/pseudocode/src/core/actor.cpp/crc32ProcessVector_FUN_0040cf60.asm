; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessVector_FUN_0040cf60(uint *crc_state,CVector3f *vector)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; CVector3f *      Stack[0x8]:4   vector
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409c40 at 00409c59
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040cf00
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 0040cf60
        ;   Label: core_actor.cpp_crc32ProcessVector_FUN_0040cf60
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040cf62
    PUSH EDX                            ; 0040cf66
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040cf67
    PUSH ECX                            ; 0040cf6b
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040cf00 ; 0040cf6c
        ;   XREF to: 0040cf00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040cf00(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040cf71
    RET                                 ; 0040cf74

