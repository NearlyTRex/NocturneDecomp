; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040cf10(uint *crc_state,byte *buffer,int buffer_length)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; byte *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   buffer_length
;
; XREF[2]:
;   core_actor.cpp_crc32ProcessInt_FUN_0040cf50 at 0040cf5c
;   core_actor.cpp_crc32ProcessVector_FUN_0040cf70 at 0040cf7c
;
; Called Functions:
;   core_actor.cpp_crc32ProcessByte_FUN_0040ce30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cf10
        ;   Label: core_actor.cpp_crc32ProcessBuffer_FUN_0040cf10
    PUSH ESI                            ; 0040cf11
    PUSH EDI                            ; 0040cf12
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040cf13
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040cf17
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040cf1b
    TEST ESI,ESI                        ; 0040cf1f
    JLE 0x0040cf40                      ; 0040cf21
        ;   XREF to: 0040cf40 (CONDITIONAL_JUMP)  ; LAB_0040cf40
    XOR EAX,EAX                         ; 0040cf23
        ;   Label: LAB_0040cf23
    MOV AL,byte ptr [EBX]               ; 0040cf25
    PUSH EAX                            ; 0040cf27
    PUSH EDI                            ; 0040cf28
    INC EBX                             ; 0040cf29
    DEC ESI                             ; 0040cf2a
    CALL core_actor.cpp_crc32ProcessByte_FUN_0040ce30 ; 0040cf2b
        ;   XREF to: 0040ce30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessByte_FUN_0040ce30(uint * crc_state, byte input_byte)
    ADD ESP,0x8                         ; 0040cf30
    TEST ESI,ESI                        ; 0040cf33
    JG 0x0040cf23                       ; 0040cf35
        ;   XREF to: 0040cf23 (CONDITIONAL_JUMP)  ; LAB_0040cf23
    LEA EAX,[EAX]                       ; 0040cf37
    LEA EDX,[EDX]                       ; 0040cf3d
    POP EDI                             ; 0040cf40
        ;   Label: LAB_0040cf40
    POP ESI                             ; 0040cf41
    POP EBX                             ; 0040cf42
    RET                                 ; 0040cf43

