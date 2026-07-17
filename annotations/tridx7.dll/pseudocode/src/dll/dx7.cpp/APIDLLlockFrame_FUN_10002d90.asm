; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLlockFrame_FUN_10002d90(void)
;
;
; Referenced Globals:
;   int g_FrameLocked = 0x0
;   int g_InScene = 0x0
;
; Called Functions:
;   dll_dx7.cpp_APIDLLendScene_FUN_10002d10
;   dll_dx7.cpp_lockBackBuffer_FUN_10002dc0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10014204],0x0      ; 10002d90 | g_InScene
        ;   Label: dll_dx7.cpp_APIDLLlockFrame_FUN_10002d90
    JZ 0x10002d9e                       ; 10002d97
        ;   XREF to: 10002d9e (CONDITIONAL_JUMP)  ; LAB_10002d9e
    CALL dll_dx7.cpp_APIDLLendScene_FUN_10002d10 ; 10002d99
        ;   XREF to: 10002d10 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_APIDLLendScene_FUN_10002d10() | Ordinal_15
    CALL dll_dx7.cpp_lockBackBuffer_FUN_10002dc0 ; 10002d9e
        ;   XREF to: 10002dc0 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_lockBackBuffer_FUN_10002dc0()
        ;   Label: LAB_10002d9e
    TEST EAX,EAX                        ; 10002da3
    JNZ 0x10002daa                      ; 10002da5
        ;   XREF to: 10002daa (CONDITIONAL_JUMP)  ; LAB_10002daa
    XOR EAX,EAX                         ; 10002da7
    RET                                 ; 10002da9
    MOV dword ptr [0x100141f8],0x1      ; 10002daa | g_FrameLocked
        ;   Label: LAB_10002daa
    MOV EAX,0x1                         ; 10002db4
    RET                                 ; 10002db9

