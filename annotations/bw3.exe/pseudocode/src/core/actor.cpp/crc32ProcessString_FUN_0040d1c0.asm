; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040d1c0(uint *crc_state,char *string)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; char *           Stack[0x8]:4   string
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409c80 at 00409c8c
;   core_charactr.cpp_CCharacter_calculateChecksum_FUN_00433130 at 0043316c
;
; Called Functions:
;   core_actor.cpp_crc32ProcessByte_FUN_0040d060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d1c0
        ;   Label: core_actor.cpp_crc32ProcessString_FUN_0040d1c0
    PUSH ESI                            ; 0040d1c1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d1c2
    MOV AH,byte ptr [EBX]               ; 0040d1c6
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040d1c8
    TEST AH,AH                          ; 0040d1cc
    JZ 0x0040d1f0                       ; 0040d1ce
        ;   XREF to: 0040d1f0 (CONDITIONAL_JUMP)  ; LAB_0040d1f0
    XOR EAX,EAX                         ; 0040d1d0
        ;   Label: LAB_0040d1d0
    MOV AL,byte ptr [EBX]               ; 0040d1d2
    PUSH EAX                            ; 0040d1d4
    PUSH ESI                            ; 0040d1d5
    INC EBX                             ; 0040d1d6
    CALL core_actor.cpp_crc32ProcessByte_FUN_0040d060 ; 0040d1d7
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessByte_FUN_0040d060(uint * crc_state, byte input_byte)
    MOV DL,byte ptr [EBX]               ; 0040d1dc
    ADD ESP,0x8                         ; 0040d1de
    TEST DL,DL                          ; 0040d1e1
    JNZ 0x0040d1d0                      ; 0040d1e3
        ;   XREF to: 0040d1d0 (CONDITIONAL_JUMP)  ; LAB_0040d1d0
    LEA EAX,[EAX]                       ; 0040d1e5
    LEA EDX,[EDX]                       ; 0040d1eb
    MOV EBX,EBX                         ; 0040d1ee
    POP ESI                             ; 0040d1f0
        ;   Label: LAB_0040d1f0
    POP EBX                             ; 0040d1f1
    RET                                 ; 0040d1f2

