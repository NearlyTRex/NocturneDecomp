; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_flies_cpp_CFlies_FUN_004cc2c0(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   core_flies.cpp_CFlies_FUN_004cc230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cc2c0
        ;   Label: core_flies.cpp_CFlies_FUN_004cc2c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cc2c4
    TEST EDX,EDX                        ; 004cc2c8
    JL 0x004cc2e0                       ; 004cc2ca
        ;   XREF to: 004cc2e0 (CONDITIONAL_JUMP)  ; LAB_004cc2e0
    CMP EDX,dword ptr [0x00679394]      ; 004cc2cc | g_WindowWidth
    JGE 0x004cc2e0                      ; 004cc2d2
        ;   XREF to: 004cc2e0 (CONDITIONAL_JUMP)  ; LAB_004cc2e0
    TEST EAX,EAX                        ; 004cc2d4
    JL 0x004cc2e0                       ; 004cc2d6
        ;   XREF to: 004cc2e0 (CONDITIONAL_JUMP)  ; LAB_004cc2e0
    CMP EAX,dword ptr [0x00679398]      ; 004cc2d8 | g_WindowHeight
    JL 0x004cc2e1                       ; 004cc2de
        ;   XREF to: 004cc2e1 (CONDITIONAL_JUMP)  ; LAB_004cc2e1
    RET                                 ; 004cc2e0
        ;   Label: LAB_004cc2e0
    PUSH ESI                            ; 004cc2e1
        ;   Label: LAB_004cc2e1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cc2e2
    PUSH ESI                            ; 004cc2e6
    PUSH EAX                            ; 004cc2e7
    PUSH EDX                            ; 004cc2e8
    CALL core_flies.cpp_CFlies_FUN_004cc230 ; 004cc2e9
        ;   XREF to: 004cc230 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_CFlies_FUN_004cc230(CFlies * this_ptr)
    ADD ESP,0xc                         ; 004cc2ee
    POP ESI                             ; 004cc2f1
    RET                                 ; 004cc2f2

