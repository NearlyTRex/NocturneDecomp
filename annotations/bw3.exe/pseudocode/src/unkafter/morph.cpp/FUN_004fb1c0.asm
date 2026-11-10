; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * unkafter_morph_cpp_FUN_004fb1c0(undefined4 *param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_ctor_FUN_005479f0 at 005479ff
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb1c0
        ;   Label: unkafter_morph.cpp_FUN_004fb1c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fb1c1
    PUSH 0x1c200                        ; 004fb1c5
    PUSH 0x0                            ; 004fb1ca
    LEA EAX,[EBX + 0x1c28]              ; 004fb1cc
    MOV dword ptr [EBX],0x0             ; 004fb1d2
    PUSH EAX                            ; 004fb1d8
    MOV dword ptr [EBX + 0x1c24],0x0    ; 004fb1d9
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004fb1e3
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004fb1e8
    MOV EAX,EBX                         ; 004fb1eb
    POP EBX                             ; 004fb1ed
    RET                                 ; 004fb1ee

