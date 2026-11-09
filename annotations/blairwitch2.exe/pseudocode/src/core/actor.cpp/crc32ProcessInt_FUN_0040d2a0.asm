; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040d2a0(uint *crc_state,int value)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; int              Stack[0x8]:4   value
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409df0 at 00409e23
;   core_charactr.cpp_CCharacter_calculateChecksum_FUN_00429c70 at 00429c98
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040d260
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 0040d2a0
        ;   Label: core_actor.cpp_crc32ProcessInt_FUN_0040d2a0
    LEA EAX,[ESP + 0xc]                 ; 0040d2a2
    PUSH EAX                            ; 0040d2a6
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d2a7
    PUSH EDX                            ; 0040d2ab
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040d260 ; 0040d2ac
        ;   XREF to: 0040d260 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040d260(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040d2b1
    RET                                 ; 0040d2b4

