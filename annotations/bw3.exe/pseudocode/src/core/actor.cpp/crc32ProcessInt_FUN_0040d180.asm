; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040d180(uint *crc_state,int value)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; int              Stack[0x8]:4   value
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409c80 at 00409cb3
;   core_charactr.cpp_CCharacter_calculateChecksum_FUN_00433130 at 00433158
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040d140
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 0040d180
        ;   Label: core_actor.cpp_crc32ProcessInt_FUN_0040d180
    LEA EAX,[ESP + 0xc]                 ; 0040d182
    PUSH EAX                            ; 0040d186
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d187
    PUSH EDX                            ; 0040d18b
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040d140 ; 0040d18c
        ;   XREF to: 0040d140 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040d140(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040d191
    RET                                 ; 0040d194

