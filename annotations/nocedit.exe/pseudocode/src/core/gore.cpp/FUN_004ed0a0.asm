; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gore_cpp_FUN_004ed0a0(void)
;
;
; XREF[1]:
;   core_gore.cpp_CGore_process_FUN_004ed9e0 at 004eda5f
;
; Referenced Globals:
;   double DOUBLE_0062e392 = 3.625
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004ed0a0
        ;   Label: core_gore.cpp_FUN_004ed0a0
    MOV EDX,dword ptr [0x0067b654]      ; 004ed0a4 | g_CGamePtr
    LEA EAX,[ECX + 0x18]                ; 004ed0aa
    FLD float ptr [EDX + 0x264]         ; 004ed0ad | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 004ed0b3
    FSTP float ptr [EAX]                ; 004ed0b5
    FLD float ptr [ECX + 0x18]          ; 004ed0b7
    FCOMP double ptr [0x0062e392]       ; 004ed0ba | DOUBLE_0062e392
    FNSTSW AX                           ; 004ed0c0
    SAHF                                ; 004ed0c2
    JA 0x004ed0c6                       ; 004ed0c3
        ;   XREF to: 004ed0c6 (CONDITIONAL_JUMP)  ; LAB_004ed0c6
    RET                                 ; 004ed0c5
    MOV dword ptr [ECX + 0x18],0x40680000 ; 004ed0c6
        ;   Label: LAB_004ed0c6
    RET                                 ; 004ed0cd

