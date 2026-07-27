; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gasmask_cpp_FUN_004a89e0(void)
;
;
; Called Functions:
;   core_gasmask.cpp_FUN_004a8a10
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2d0                          ; 004a89e0
        ;   Label: core_gasmask.cpp_FUN_004a89e0
    CALL crt_unknown.c_FUN_0056497c     ; 004a89e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a89ea
    TEST EAX,EAX                        ; 004a89ed
    JNZ 0x004a89f2                      ; 004a89ef
        ;   XREF to: 004a89f2 (CONDITIONAL_JUMP)  ; LAB_004a89f2
    RET                                 ; 004a89f1
    PUSH EAX                            ; 004a89f2
        ;   Label: LAB_004a89f2
    CALL core_gasmask.cpp_FUN_004a8a10  ; 004a89f3
        ;   XREF to: 004a8a10 (UNCONDITIONAL_CALL)  ; undefined core_gasmask.cpp_FUN_004a8a10()
    ADD ESP,0x4                         ; 004a89f8
    RET                                 ; 004a89fb

