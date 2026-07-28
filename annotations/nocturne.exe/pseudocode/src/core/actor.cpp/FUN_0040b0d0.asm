; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040b0d0(char *param_1,uint *param_2)
;
;
; XREF[1]:
;   core_charactr.cpp_FUN_00429f70 at 00429f7d
;
; Called Functions:
;   core_actor.cpp_crc32ProcessInt_FUN_0040e0e0
;   core_actor.cpp_crc32ProcessString_FUN_0040e120
;   core_actor.cpp_crc32ProcessVector_FUN_0040e100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b0d0
        ;   Label: core_actor.cpp_FUN_0040b0d0
    PUSH ESI                            ; 0040b0d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040b0d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0040b0d6
    PUSH EBX                            ; 0040b0da
    PUSH ESI                            ; 0040b0db
    CALL core_actor.cpp_crc32ProcessString_FUN_0040e120 ; 0040b0dc
        ;   XREF to: 0040e120 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessString_FUN_0040e120(uint * crc_state, char * string)
    ADD ESP,0x8                         ; 0040b0e1
    LEA EAX,[EBX + 0x20]                ; 0040b0e4
    PUSH EAX                            ; 0040b0e7
    PUSH ESI                            ; 0040b0e8
    CALL core_actor.cpp_crc32ProcessVector_FUN_0040e100 ; 0040b0e9
        ;   XREF to: 0040e100 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessVector_FUN_0040e100(uint * crc_state, CVector3f * vector)
    ADD ESP,0x8                         ; 0040b0ee
    LEA EAX,[EBX + 0x30]                ; 0040b0f1
    PUSH EAX                            ; 0040b0f4
    PUSH ESI                            ; 0040b0f5
    CALL core_actor.cpp_crc32ProcessVector_FUN_0040e100 ; 0040b0f6
        ;   XREF to: 0040e100 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessVector_FUN_0040e100(uint * crc_state, CVector3f * vector)
    ADD ESP,0x8                         ; 0040b0fb
    MOV EDX,dword ptr [EBX + 0x70]      ; 0040b0fe
    PUSH EDX                            ; 0040b101
    PUSH ESI                            ; 0040b102
    CALL core_actor.cpp_crc32ProcessInt_FUN_0040e0e0 ; 0040b103
        ;   XREF to: 0040e0e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_crc32ProcessInt_FUN_0040e0e0(uint * crc_state, int value)
    ADD ESP,0x8                         ; 0040b108
    POP ESI                             ; 0040b10b
    POP EBX                             ; 0040b10c
    RET                                 ; 0040b10d

