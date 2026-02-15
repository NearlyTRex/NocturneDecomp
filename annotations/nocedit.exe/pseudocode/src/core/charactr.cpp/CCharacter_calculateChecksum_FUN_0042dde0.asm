; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0(CCharacter *this_ptr,uint *out_crc)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; uint *           Stack[0x8]:4   out_crc
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0
;   core_actor.cpp_crc32ProcessInt_FUN_0040cf50
;   core_actor.cpp_crc32ProcessString_FUN_0040cf90
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042dde0
        ;   Label: core_charactr.cpp_CCharacter_calculateChecksum_FUN_0042dde0
    PUSH ESI                            ; 0042dde1
    PUSH EDI                            ; 0042dde2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0042dde3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0042dde7
    PUSH EBX                            ; 0042ddeb
    PUSH EDI                            ; 0042ddec
    CALL core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0 ; 0042dded
        ;   XREF to: 00409ec0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0(CDemonActor * this_ptr, uint * out_crc)
    ADD ESP,0x8                         ; 0042ddf2
    PUSH dword ptr [EDI + 0x243c]       ; 0042ddf5
    LEA ESI,[EDI + 0x158]               ; 0042ddfb
    PUSH EBX                            ; 0042de01
    ADD EDI,0x23b8                      ; 0042de02
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040cf50 ; 0042de08
        ;   XREF to: 0040cf50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040cf50(uint * crc_state, int value)
    MOV AH,byte ptr [EDI]               ; 0042de0d
    ADD ESP,0x8                         ; 0042de0f
    TEST AH,AH                          ; 0042de12
    JNZ 0x0042de1a                      ; 0042de14
        ;   XREF to: 0042de1a (CONDITIONAL_JUMP)  ; LAB_0042de1a
    POP EDI                             ; 0042de16
    POP ESI                             ; 0042de17
    POP EBX                             ; 0042de18
    RET                                 ; 0042de19
    PUSH EDI                            ; 0042de1a
        ;   Label: LAB_0042de1a
    PUSH EBX                            ; 0042de1b
    CALL core_actor.cpp_crc32ProcessString_FUN_0040cf90 ; 0042de1c
        ;   XREF to: 0040cf90 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040cf90(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 0042de21
    PUSH ESI                            ; 0042de24
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0042de25
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042de2a
    PUSH EAX                            ; 0042de2d
    PUSH EBX                            ; 0042de2e
    CALL core_actor.cpp_crc32ProcessString_FUN_0040cf90 ; 0042de2f
        ;   XREF to: 0040cf90 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040cf90(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 0042de34
    SUB ESP,0x4                         ; 0042de37
    MOV EAX,dword ptr [ESI + 0x8]       ; 0042de3a
    MOV dword ptr [ESP],EAX             ; 0042de3d
    PUSH EBX                            ; 0042de40
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040cf50 ; 0042de41
        ;   XREF to: 0040cf50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040cf50(uint * crc_state, int value)
    ADD ESP,0x8                         ; 0042de46
    POP EDI                             ; 0042de49
    POP ESI                             ; 0042de4a
    POP EBX                             ; 0042de4b
    RET                                 ; 0042de4c

