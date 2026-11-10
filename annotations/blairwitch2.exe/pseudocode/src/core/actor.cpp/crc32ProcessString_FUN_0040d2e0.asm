; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessString_FUN_0040d2e0(uint *crc_state,char *string)
;
; Parameters:
; uint *           Stack[0x4]:4   crc_state
; char *           Stack[0x8]:4   string
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409df0 at 00409dfc
;   core_charactr.cpp_CCharacter_calculateChecksum_FUN_00429c70 at 00429cac
;
; Called Functions:
;   core_actor.cpp_crc32ProcessByte_FUN_0040d180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d2e0
        ;   Label: core_actor.cpp_crc32ProcessString_FUN_0040d2e0
    PUSH ESI                            ; 0040d2e1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040d2e2
    MOV AH,byte ptr [EBX]               ; 0040d2e6
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040d2e8
    TEST AH,AH                          ; 0040d2ec
    JZ 0x0040d310                       ; 0040d2ee
        ;   XREF to: 0040d310 (CONDITIONAL_JUMP)  ; LAB_0040d310
    XOR EAX,EAX                         ; 0040d2f0
        ;   Label: LAB_0040d2f0
    MOV AL,byte ptr [EBX]               ; 0040d2f2
    PUSH EAX                            ; 0040d2f4
    PUSH ESI                            ; 0040d2f5
    INC EBX                             ; 0040d2f6
    CALL core_actor.cpp_crc32ProcessByte_FUN_0040d180 ; 0040d2f7
        ;   XREF to: 0040d180 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessByte_FUN_0040d180(uint * crc_state, byte input_byte)
    MOV DL,byte ptr [EBX]               ; 0040d2fc
    ADD ESP,0x8                         ; 0040d2fe
    TEST DL,DL                          ; 0040d301
    JNZ 0x0040d2f0                      ; 0040d303
        ;   XREF to: 0040d2f0 (CONDITIONAL_JUMP)  ; LAB_0040d2f0
    LEA EAX,[EAX]                       ; 0040d305
    LEA EDX,[EDX]                       ; 0040d30b
    MOV EBX,EBX                         ; 0040d30e
    POP ESI                             ; 0040d310
        ;   Label: LAB_0040d310
    POP EBX                             ; 0040d311
    RET                                 ; 0040d312

