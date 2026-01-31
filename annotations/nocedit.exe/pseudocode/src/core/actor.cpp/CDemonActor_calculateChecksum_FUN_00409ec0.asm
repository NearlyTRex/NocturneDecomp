; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0(CDemonActor *this_ptr,uint *out_crc)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; uint *           Stack[0x8]:4   out_crc
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_calculateChecksum_FUN_0042dde0 at 0042dded
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613904
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_actor.cpp_crc32ProcessInt_FUN_0040cf50
;   core_actor.cpp_crc32ProcessString_FUN_0040cf90
;   core_actor.cpp_crc32ProcessVector_FUN_0040cf70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409ec0
        ;   Label: core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0
    PUSH ESI                            ; 00409ec1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00409ec2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00409ec6
    PUSH 0x522                          ; 00409eca
    PUSH 0x613904                       ; 00409ecf | = "..\\core\\actor.cpp"
    PUSH EBX                            ; 00409ed4
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00409ed5
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409eda
    PUSH EBX                            ; 00409edd
    PUSH ESI                            ; 00409ede
    CALL core_actor.cpp_crc32ProcessString_FUN_0040cf90 ; 00409edf
        ;   XREF to: 0040cf90 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040cf90(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 00409ee4
    LEA EAX,[EBX + 0x20]                ; 00409ee7
    PUSH EAX                            ; 00409eea
    PUSH ESI                            ; 00409eeb
    CALL core_actor.cpp_crc32ProcessVector_FUN_0040cf70 ; 00409eec
        ;   XREF to: 0040cf70 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessVector_FUN_0040cf70(uint * crc_state, CVector3f * vector)
    ADD ESP,0x8                         ; 00409ef1
    LEA EAX,[EBX + 0x30]                ; 00409ef4
    PUSH EAX                            ; 00409ef7
    PUSH ESI                            ; 00409ef8
    CALL core_actor.cpp_crc32ProcessVector_FUN_0040cf70 ; 00409ef9
        ;   XREF to: 0040cf70 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessVector_FUN_0040cf70(uint * crc_state, CVector3f * vector)
    ADD ESP,0x8                         ; 00409efe
    MOV EDX,dword ptr [EBX + 0x70]      ; 00409f01
    PUSH EDX                            ; 00409f04
    PUSH ESI                            ; 00409f05
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040cf50 ; 00409f06
        ;   XREF to: 0040cf50 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040cf50(uint * crc_state, int value)
    ADD ESP,0x8                         ; 00409f0b
    POP ESI                             ; 00409f0e
    POP EBX                             ; 00409f0f
    RET                                 ; 00409f10

