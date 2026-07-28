; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_00444140(void)
;
;
; XREF[2]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80 at 0044d046
;   core_dlight.cpp_FUN_0044f0b0 at 0044f41d
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH 0x4b000                        ; 00444140
        ;   Label: core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140
    PUSH 0x7f                           ; 00444145
    PUSH 0x146ba10                      ; 00444147
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0044414c
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV ECX,0x13f                       ; 00444151
    ADD ESP,0xc                         ; 00444156
    XOR EAX,EAX                         ; 00444159
    ADD EAX,0x4                         ; 0044415b
        ;   Label: LAB_0044415b
    XOR EDX,EDX                         ; 0044415e
    MOV dword ptr [EAX + 0x146b64c],ECX ; 00444160
    MOV dword ptr [EAX + 0x146b28c],EDX ; 00444166
    CMP EAX,0x3c0                       ; 0044416c
    JNZ 0x0044415b                      ; 00444171
        ;   XREF to: 0044415b (CONDITIONAL_JUMP)  ; LAB_0044415b
    RET                                 ; 00444173

