; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00433c60(CCharacter *this_ptr,uint *out_crc)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; uint *           Stack[0x8]:4   out_crc
;
; Called Functions:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409c40
;   core_actor.cpp_crc32ProcessInt_FUN_0040cf40
;   core_actor.cpp_crc32ProcessString_FUN_0040cf80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433c60
        ;   Label: core_charactr.cpp_CCharacter_calculateChecksum_FUN_00433c60
    PUSH ESI                            ; 00433c61
    PUSH EDI                            ; 00433c62
    MOV EDI,dword ptr [ESP + 0x10]      ; 00433c63
    MOV EBX,dword ptr [ESP + 0x14]      ; 00433c67
    PUSH EBX                            ; 00433c6b
    PUSH EDI                            ; 00433c6c
    CALL core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409c40 ; 00433c6d
        ;   XREF to: 00409c40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409c40(CDemonActor * this_ptr, uint * out_crc)
    ADD ESP,0x8                         ; 00433c72
    PUSH dword ptr [EDI + 0x2538]       ; 00433c75
    LEA ESI,[EDI + 0x158]               ; 00433c7b
    PUSH EBX                            ; 00433c81
    ADD EDI,0x24a8                      ; 00433c82
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040cf40 ; 00433c88
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040cf40(uint * crc_state, int value)
    MOV AH,byte ptr [EDI]               ; 00433c8d
    ADD ESP,0x8                         ; 00433c8f
    TEST AH,AH                          ; 00433c92
    JNZ 0x00433c9a                      ; 00433c94
        ;   XREF to: 00433c9a (CONDITIONAL_JUMP)  ; LAB_00433c9a
    POP EDI                             ; 00433c96
    POP ESI                             ; 00433c97
    POP EBX                             ; 00433c98
    RET                                 ; 00433c99
    PUSH EDI                            ; 00433c9a
        ;   Label: LAB_00433c9a
    PUSH EBX                            ; 00433c9b
    CALL core_actor.cpp_crc32ProcessString_FUN_0040cf80 ; 00433c9c
        ;   XREF to: 0040cf80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040cf80(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 00433ca1
    PUSH ESI                            ; 00433ca4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00433ca5
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00433caa
    PUSH EAX                            ; 00433cad
    PUSH EBX                            ; 00433cae
    CALL core_actor.cpp_crc32ProcessString_FUN_0040cf80 ; 00433caf
        ;   XREF to: 0040cf80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040cf80(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 00433cb4
    SUB ESP,0x4                         ; 00433cb7
    MOV EAX,dword ptr [ESI + 0x8]       ; 00433cba
    MOV dword ptr [ESP],EAX             ; 00433cbd
    PUSH EBX                            ; 00433cc0
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040cf40 ; 00433cc1
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040cf40(uint * crc_state, int value)
    ADD ESP,0x8                         ; 00433cc6
    POP EDI                             ; 00433cc9
    POP ESI                             ; 00433cca
    POP EBX                             ; 00433ccb
    RET                                 ; 00433ccc

