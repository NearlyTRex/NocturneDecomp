; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_moon_cpp_FUN_00502760(undefined4 *param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_ctor_FUN_005407e0 at 005407ef
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502760
        ;   Label: core_moon.cpp_FUN_00502760
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502761
    PUSH 0x1b580                        ; 00502765
    PUSH 0x0                            ; 0050276a
    LEA EAX,[EBX + 0x1c28]              ; 0050276c
    MOV dword ptr [EBX],0x0             ; 00502772
    PUSH EAX                            ; 00502778
    MOV dword ptr [EBX + 0x1c24],0x0    ; 00502779
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00502783
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00502788
    MOV EAX,EBX                         ; 0050278b
    POP EBX                             ; 0050278d
    RET                                 ; 0050278e

