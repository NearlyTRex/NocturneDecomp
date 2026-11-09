; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005b1938(void)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b0d88 at 005b0d88
;
; Referenced Globals:
;   void* PTR_ExitThread_005b3544 = 001b3d0c
;   void* PTR_crt_unknown.c_FUN_005a7f68_006079e4 = 005a7f68
;   undefined4 DAT_02d252b0
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f68
;   ExitThread
;   unkafter_asgaya.cpp_FUN_005adba4
;   unkafter_asgaya.cpp_FUN_005ae464
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006079e4]         ; 005b1938 | PTR_crt_unknown.c_FUN_005a7f68_006079e4
        ;   Label: unkafter_2d.cpp_FUN_005b1938
    CALL unkafter_asgaya.cpp_FUN_005ae464 ; 005b193e
        ;   XREF to: 005ae464 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ae464()
    CMP dword ptr [0x02d252b0],0x0      ; 005b1943 | DAT_02d252b0
    JNZ 0x005b1956                      ; 005b194a
        ;   XREF to: 005b1956 (CONDITIONAL_JUMP)  ; LAB_005b1956
    PUSH 0x1                            ; 005b194c
    CALL unkafter_asgaya.cpp_FUN_005adba4 ; 005b194e
        ;   XREF to: 005adba4 (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005adba4()
    ADD ESP,0x4                         ; 005b1953
    PUSH 0x0                            ; 005b1956
        ;   Label: LAB_005b1956
    CALL dword ptr CS:[0x5b3544]        ; 005b1958 | PTR_ExitThread_005b3544
    RET                                 ; 005b195f

