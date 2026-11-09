; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_twigzomb_cpp_FUN_005a2e90(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059f800
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005a2e90
        ;   Label: core_twigzomb.cpp_FUN_005a2e90
    PUSH EAX                            ; 005a2e94
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a2e95
    PUSH EDX                            ; 005a2e99
    MOV dword ptr [EAX + 0x8],0x0       ; 005a2e9a
    CALL unkafter_basicene.cpp_FUN_0059f800 ; 005a2ea1
        ;   XREF to: 0059f800 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f800()
    ADD ESP,0x8                         ; 005a2ea6
    RET                                 ; 005a2ea9

