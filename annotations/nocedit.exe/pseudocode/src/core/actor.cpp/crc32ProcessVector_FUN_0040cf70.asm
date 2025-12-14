; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_crc32ProcessVector_FUN_0040cf70(uint * crc_state, CVector3f * vector)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; CVector3f *      Stack[0x8]:4   vector
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0 at 00409eec
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 0040cf70
        ;   Label: core_actor.cpp_crc32ProcessVector_FUN_0040cf70
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040cf72
    PUSH EDX                            ; 0040cf76
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040cf77
    PUSH ECX                            ; 0040cf7b
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10 ; 0040cf7c
        ;   XREF to: 0040cf10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040cf81
    RET                                 ; 0040cf84

