; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_initializeCoronaBuffers_FUN_00450ee0(void)
;
;
; XREF[2]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60 at 0045ec44
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460 at 00463815
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH 0x4b000                        ; 00450ee0
        ;   Label: core_dcamera.cpp_initializeCoronaBuffers_FUN_00450ee0
    PUSH 0x7f                           ; 00450ee5
    PUSH 0x14df1d0                      ; 00450ee7
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00450eec
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV ECX,0x13f                       ; 00450ef1
    ADD ESP,0xc                         ; 00450ef6
    XOR EAX,EAX                         ; 00450ef9
    ADD EAX,0x4                         ; 00450efb
        ;   Label: LAB_00450efb
    XOR EDX,EDX                         ; 00450efe
    MOV dword ptr [EAX + 0x14dee0c],ECX ; 00450f00
    MOV dword ptr [EAX + 0x14dea4c],EDX ; 00450f06
    CMP EAX,0x3c0                       ; 00450f0c
    JNZ 0x00450efb                      ; 00450f11
        ;   XREF to: 00450efb (CONDITIONAL_JUMP)  ; LAB_00450efb
    RET                                 ; 00450f13

