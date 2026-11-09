; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040cf40(uint *crc_state,int value)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; int              Stack[0x8]:4   value
;
; XREF[2]:
;   core_actor.cpp_FUN_00409c40 at 00409c73
;   core_charactr.cpp_FUN_00433c60 at 00433c88
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040cf00
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 0040cf40
        ;   Label: core_actor.cpp_crc32ProcessInt_FUN_0040cf40
    LEA EAX,[ESP + 0xc]                 ; 0040cf42
    PUSH EAX                            ; 0040cf46
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040cf47
    PUSH EDX                            ; 0040cf4b
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040cf00 ; 0040cf4c
        ;   XREF to: 0040cf00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessBuffer_FUN_0040cf00(uint * crc_state, byte * buffer, int buffer_length)
    ADD ESP,0xc                         ; 0040cf51
    RET                                 ; 0040cf54

