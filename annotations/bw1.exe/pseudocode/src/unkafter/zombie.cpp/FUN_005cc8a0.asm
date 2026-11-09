; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cc8a0(ulong param_1)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cc8b0 at 005cc8f9
;
; Called Functions:
;   crt_unknown.c_FUN_005c08d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005cc8a0
        ;   Label: unkafter_zombie.cpp_FUN_005cc8a0
    PUSH EDX                            ; 005cc8a4
    CALL crt_unknown.c_FUN_005c08d0     ; 005cc8a5
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005cc8aa
    RET                                 ; 005cc8ad

