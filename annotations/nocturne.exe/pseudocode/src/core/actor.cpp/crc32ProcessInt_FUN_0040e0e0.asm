; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0040b0d0 at 0040b103
;   FUN_00429f70 at 00429f98
;
; Called Functions:
;   core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 0040e0e0
        ;   Label: core_actor.cpp_crc32ProcessInt_FUN_0040e0e0
    LEA EAX,[ESP + 0xc]                 ; 0040e0e2
    PUSH EAX                            ; 0040e0e6
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040e0e7
    PUSH EDX                            ; 0040e0eb
    CALL core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0 ; 0040e0ec
        ;   XREF to: 0040e0a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0()
    ADD ESP,0xc                         ; 0040e0f1
    RET                                 ; 0040e0f4

