; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_0043f820(void)
;
;
; XREF[2]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900 at 00448ae4
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60 at 0044b015
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH 0x4b000                        ; 0043f820
        ;   Label: core_dcamera.cpp_initializeCoronaBuffers_FUN_0043f820
    PUSH 0x7f                           ; 0043f825
    PUSH 0x14c3cd0                      ; 0043f827
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0043f82c
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV ECX,0x13f                       ; 0043f831
    ADD ESP,0xc                         ; 0043f836
    XOR EAX,EAX                         ; 0043f839
    ADD EAX,0x4                         ; 0043f83b
        ;   Label: LAB_0043f83b
    XOR EDX,EDX                         ; 0043f83e
    MOV dword ptr [EAX + 0x14c390c],ECX ; 0043f840
    MOV dword ptr [EAX + 0x14c354c],EDX ; 0043f846
    CMP EAX,0x3c0                       ; 0043f84c
    JNZ 0x0043f83b                      ; 0043f851
        ;   XREF to: 0043f83b (CONDITIONAL_JUMP)  ; LAB_0043f83b
    RET                                 ; 0043f853

