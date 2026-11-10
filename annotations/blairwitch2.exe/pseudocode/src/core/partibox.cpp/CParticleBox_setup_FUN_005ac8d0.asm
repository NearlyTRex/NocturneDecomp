; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_partibox_cpp_CParticleBox_setup_FUN_005ac8d0(CParticleBox *this_ptr)
;
; Parameters:
; CParticleBox *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_setup_FUN_0041be70
;   unkaddr_005a7eb0.cpp_FUN_005a8030
;   unkaddr_005a7eb0.cpp_FUN_005a8050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac8d0
        ;   Label: core_partibox.cpp_CParticleBox_setup_FUN_005ac8d0
    PUSH ESI                            ; 005ac8d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ac8d2
    PUSH EBX                            ; 005ac8d6
    CALL core_boxactor.cpp_CBoxActor_setup_FUN_0041be70 ; 005ac8d7
        ;   XREF to: 0041be70 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_setup_FUN_0041be70(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 005ac8dc
    PUSH 0x100                          ; 005ac8df
    LEA ESI,[EBX + 0x154]               ; 005ac8e4
    PUSH ESI                            ; 005ac8ea
    CALL unkaddr_005a7eb0.cpp_FUN_005a8030 ; 005ac8eb
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8030()
    ADD ESP,0x8                         ; 005ac8f0
    PUSH EBX                            ; 005ac8f3
    PUSH ESI                            ; 005ac8f4
    CALL unkaddr_005a7eb0.cpp_FUN_005a8050 ; 005ac8f5
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8050()
    ADD ESP,0x8                         ; 005ac8fa
    PUSH 0x100                          ; 005ac8fd
    LEA ESI,[EBX + 0x198]               ; 005ac902
    PUSH ESI                            ; 005ac908
    CALL unkaddr_005a7eb0.cpp_FUN_005a8030 ; 005ac909
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8030()
    ADD ESP,0x8                         ; 005ac90e
    PUSH EBX                            ; 005ac911
    PUSH ESI                            ; 005ac912
    CALL unkaddr_005a7eb0.cpp_FUN_005a8050 ; 005ac913
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8050()
    ADD ESP,0x8                         ; 005ac918
    PUSH 0x200                          ; 005ac91b
    LEA ESI,[EBX + 0x1dc]               ; 005ac920
    PUSH ESI                            ; 005ac926
    CALL unkaddr_005a7eb0.cpp_FUN_005a8030 ; 005ac927
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8030()
    ADD ESP,0x8                         ; 005ac92c
    PUSH EBX                            ; 005ac92f
    PUSH ESI                            ; 005ac930
    CALL unkaddr_005a7eb0.cpp_FUN_005a8050 ; 005ac931
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8050()
    ADD ESP,0x8                         ; 005ac936
    PUSH 0x100                          ; 005ac939
    LEA ESI,[EBX + 0x220]               ; 005ac93e
    PUSH ESI                            ; 005ac944
    CALL unkaddr_005a7eb0.cpp_FUN_005a8030 ; 005ac945
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8030()
    ADD ESP,0x8                         ; 005ac94a
    PUSH EBX                            ; 005ac94d
    PUSH ESI                            ; 005ac94e
    CALL unkaddr_005a7eb0.cpp_FUN_005a8050 ; 005ac94f
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a8050()
    ADD ESP,0x8                         ; 005ac954
    POP ESI                             ; 005ac957
    POP EBX                             ; 005ac958
    RET                                 ; 005ac959

