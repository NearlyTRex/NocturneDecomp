; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(uint *crc_state,int value)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; int              Stack[0x8]:4   value
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_0040b0d0 at 0040b103
;   core_charactr.cpp_CCharacter_calculateChecksum_FUN_00429f70 at 00429f98
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 0040e0e0
        ;   Label: core_actor.cpp_crc32ProcessInt_FUN_0040e0e0
    LEA EAX,[ESP + 0xc]                 ; 0040e0e2
    PUSH EAX                            ; 0040e0e6
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e0e7
    PUSH EDX                            ; 0040e0eb
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0 ; 0040e0ec
        ;   XREF to: 0040e0a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040e0f1
    RET                                 ; 0040e0f4

