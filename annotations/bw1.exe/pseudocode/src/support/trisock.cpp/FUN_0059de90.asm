; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0059de90(int param_1)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_0059ddc0 at 0059ddc8
;   unkafter_trisock.cpp_FUN_0059ef20 at 0059ef6f
;
; Called Functions:
;   support_trisock.cpp_FUN_0059dfc0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0059de90
        ;   Label: support_trisock.cpp_FUN_0059de90
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059de92
    PUSH EDX                            ; 0059de96
    CALL support_trisock.cpp_FUN_0059dfc0 ; 0059de97
        ;   XREF to: 0059dfc0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059dfc0()
    ADD ESP,0x8                         ; 0059de9c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059de9f
    MOV dword ptr [EAX + 0x3bc],0x0     ; 0059dea3
    RET                                 ; 0059dead

