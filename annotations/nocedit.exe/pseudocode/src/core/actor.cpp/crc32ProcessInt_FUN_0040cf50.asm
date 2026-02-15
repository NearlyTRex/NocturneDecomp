; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040cf50(uint *crc_state,int value)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; int              Stack[0x8]:4   value
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0 at 00409f06
;   core_charactr.cpp_CCharacter_calculateChecksum_FUN_0042dde0 at 0042de41
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 0040cf50
        ;   Label: core_actor.cpp_crc32ProcessInt_FUN_0040cf50
    LEA EAX,[ESP + 0xc]                 ; 0040cf52
    PUSH EAX                            ; 0040cf56
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040cf57
    PUSH EDX                            ; 0040cf5b
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10 ; 0040cf5c
        ;   XREF to: 0040cf10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040cf61
    RET                                 ; 0040cf64

