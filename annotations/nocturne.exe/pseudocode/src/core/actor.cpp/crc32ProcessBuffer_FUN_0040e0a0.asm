; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040e0a0(undefined4 param_1,undefined1 *param_2,int param_3)
;
;
; XREF[2]:
;   core_actor.cpp_crc32ProcessInt_FUN_0040e0e0 at 0040e0ec
;   core_actor.cpp_crc32ProcessVector_FUN_0040e100 at 0040e10c
;
; Called Functions:
;   core_actor.cpp_crc32ProcessByte_FUN_0040dfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e0a0
        ;   Label: core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0
    PUSH ESI                            ; 0040e0a1
    PUSH EDI                            ; 0040e0a2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040e0a3
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040e0a7
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040e0ab
    TEST ESI,ESI                        ; 0040e0af
    JLE 0x0040e0d0                      ; 0040e0b1
        ;   XREF to: 0040e0d0 (CONDITIONAL_JUMP)  ; LAB_0040e0d0
    XOR EAX,EAX                         ; 0040e0b3
        ;   Label: LAB_0040e0b3
    MOV AL,byte ptr [EBX]               ; 0040e0b5
    PUSH EAX                            ; 0040e0b7
    PUSH EDI                            ; 0040e0b8
    INC EBX                             ; 0040e0b9
    DEC ESI                             ; 0040e0ba
    CALL core_actor.cpp_crc32ProcessByte_FUN_0040dfc0 ; 0040e0bb
        ;   XREF to: 0040dfc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_crc32ProcessByte_FUN_0040dfc0()
    ADD ESP,0x8                         ; 0040e0c0
    TEST ESI,ESI                        ; 0040e0c3
    JG 0x0040e0b3                       ; 0040e0c5
        ;   XREF to: 0040e0b3 (CONDITIONAL_JUMP)  ; LAB_0040e0b3
    LEA EAX,[EAX]                       ; 0040e0c7
    LEA EDX,[EDX]                       ; 0040e0cd
    POP EDI                             ; 0040e0d0
        ;   Label: LAB_0040e0d0
    POP ESI                             ; 0040e0d1
    POP EBX                             ; 0040e0d2
    RET                                 ; 0040e0d3

