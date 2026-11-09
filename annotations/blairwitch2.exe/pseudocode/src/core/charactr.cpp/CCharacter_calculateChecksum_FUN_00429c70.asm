; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_00429c70(CCharacter *this_ptr,uint *out_crc)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; uint *           Stack[0x8]:4   out_crc
;
; Called Functions:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409df0
;   core_actor.cpp_crc32ProcessInt_FUN_0040d2a0
;   core_actor.cpp_crc32ProcessString_FUN_0040d2e0
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429c70
        ;   Label: core_charactr.cpp_CCharacter_calculateChecksum_FUN_00429c70
    PUSH ESI                            ; 00429c71
    PUSH EDI                            ; 00429c72
    MOV EDI,dword ptr [ESP + 0x10]      ; 00429c73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00429c77
    PUSH EBX                            ; 00429c7b
    PUSH EDI                            ; 00429c7c
    CALL core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409df0 ; 00429c7d
        ;   XREF to: 00409df0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409df0(CDemonActor * this_ptr, uint * out_crc)
    ADD ESP,0x8                         ; 00429c82
    PUSH dword ptr [EDI + 0x25a8]       ; 00429c85
    LEA ESI,[EDI + 0x2b4]               ; 00429c8b
    PUSH EBX                            ; 00429c91
    ADD EDI,0x2514                      ; 00429c92
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040d2a0 ; 00429c98
        ;   XREF to: 0040d2a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040d2a0(uint * crc_state, int value)
    MOV AH,byte ptr [EDI]               ; 00429c9d
    ADD ESP,0x8                         ; 00429c9f
    TEST AH,AH                          ; 00429ca2
    JNZ 0x00429caa                      ; 00429ca4
        ;   XREF to: 00429caa (CONDITIONAL_JUMP)  ; LAB_00429caa
    POP EDI                             ; 00429ca6
    POP ESI                             ; 00429ca7
    POP EBX                             ; 00429ca8
    RET                                 ; 00429ca9
    PUSH EDI                            ; 00429caa
        ;   Label: LAB_00429caa
    PUSH EBX                            ; 00429cab
    CALL core_actor.cpp_crc32ProcessString_FUN_0040d2e0 ; 00429cac
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040d2e0(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 00429cb1
    PUSH ESI                            ; 00429cb4
    CALL core_motion.cpp_FUN_005035c0   ; 00429cb5
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00429cba
    PUSH EAX                            ; 00429cbd
    PUSH EBX                            ; 00429cbe
    CALL core_actor.cpp_crc32ProcessString_FUN_0040d2e0 ; 00429cbf
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040d2e0(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 00429cc4
    SUB ESP,0x4                         ; 00429cc7
    MOV EAX,dword ptr [ESI + 0x8]       ; 00429cca
    MOV dword ptr [ESP],EAX             ; 00429ccd
    PUSH EBX                            ; 00429cd0
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040d2a0 ; 00429cd1
        ;   XREF to: 0040d2a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040d2a0(uint * crc_state, int value)
    ADD ESP,0x8                         ; 00429cd6
    POP EDI                             ; 00429cd9
    POP ESI                             ; 00429cda
    POP EBX                             ; 00429cdb
    RET                                 ; 00429cdc

