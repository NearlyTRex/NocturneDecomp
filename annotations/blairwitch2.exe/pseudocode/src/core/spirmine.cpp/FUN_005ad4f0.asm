; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirmine_cpp_FUN_005ad4f0(CBoxActor *param_1)
;
;
; Called Functions:
;   core_boxactor.cpp_FUN_0041be70
;   unkaddr_005a7eb0.cpp_FUN_005a8030
;   unkaddr_005a7eb0.cpp_FUN_005a8050
;   unkaddr_005a7eb0.cpp_FUN_005a80d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad4f0
        ;   Label: core_spirmine.cpp_FUN_005ad4f0
    PUSH ESI                            ; 005ad4f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005ad4f2
    PUSH ESI                            ; 005ad4f6
    CALL core_boxactor.cpp_FUN_0041be70 ; 005ad4f7
        ;   XREF to: 0041be70 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_FUN_0041be70(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 005ad4fc
    PUSH 0x100                          ; 005ad4ff
    LEA EBX,[ESI + 0x154]               ; 005ad504
    PUSH EBX                            ; 005ad50a
    CALL unkaddr_005a7eb0.cpp_FUN_005a8030 ; 005ad50b
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8030()
    ADD ESP,0x8                         ; 005ad510
    PUSH ESI                            ; 005ad513
    PUSH EBX                            ; 005ad514
    CALL unkaddr_005a7eb0.cpp_FUN_005a8050 ; 005ad515
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8050()
    ADD ESP,0x8                         ; 005ad51a
    PUSH 0x0                            ; 005ad51d
    PUSH EBX                            ; 005ad51f
    CALL unkaddr_005a7eb0.cpp_FUN_005a80d0 ; 005ad520
        ;   XREF to: 005a80d0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a80d0()
    ADD ESP,0x8                         ; 005ad525
    POP ESI                             ; 005ad528
    POP EBX                             ; 005ad529
    RET                                 ; 005ad52a

