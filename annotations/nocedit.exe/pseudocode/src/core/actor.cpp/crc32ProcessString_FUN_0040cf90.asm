; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_crc32ProcessString_FUN_0040cf90(uint * crc_state, char * string)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; char *           Stack[0x8]:4   string
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0 at 00409edf
;   core_charactr.cpp_CCharacter_FUN_0042dde0 at 0042de2f
;
; Called Functions:
;   core_actor.cpp_crc32ProcessByte_FUN_0040ce30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cf90
        ;   Label: core_actor.cpp_crc32ProcessString_FUN_0040cf90
    PUSH ESI                            ; 0040cf91
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040cf92
    MOV AH,byte ptr [EBX]               ; 0040cf96
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040cf98
    TEST AH,AH                          ; 0040cf9c
    JZ 0x0040cfc0                       ; 0040cf9e
        ;   XREF to: 0040cfc0 (CONDITIONAL_JUMP)  ; LAB_0040cfc0
    XOR EAX,EAX                         ; 0040cfa0
        ;   Label: LAB_0040cfa0
    MOV AL,byte ptr [EBX]               ; 0040cfa2
    PUSH EAX                            ; 0040cfa4
    PUSH ESI                            ; 0040cfa5
    INC EBX                             ; 0040cfa6
    CALL core_actor.cpp_crc32ProcessByte_FUN_0040ce30 ; 0040cfa7
        ;   XREF to: 0040ce30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessByte_FUN_0040ce30(uint * crc_state, byte input_byte)
    MOV DL,byte ptr [EBX]               ; 0040cfac
    ADD ESP,0x8                         ; 0040cfae
    TEST DL,DL                          ; 0040cfb1
    JNZ 0x0040cfa0                      ; 0040cfb3
        ;   XREF to: 0040cfa0 (CONDITIONAL_JUMP)  ; LAB_0040cfa0
    LEA EAX,[EAX]                       ; 0040cfb5
    LEA EDX,[EDX]                       ; 0040cfbb
    MOV EBX,EBX                         ; 0040cfbe
    POP ESI                             ; 0040cfc0
        ;   Label: LAB_0040cfc0
    POP EBX                             ; 0040cfc1
    LEA EAX,[EAX]                       ; 0040cfc2
    LEA EDX,[EDX]                       ; 0040cfc8
    MOV EAX,EAX                         ; 0040cfce

