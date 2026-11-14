; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057a820(int param_1)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_0057a750 at 0057a758
;   support_trisock.cpp_FUN_0057a790 at 0057a796
;
; Called Functions:
;   support_trisock.cpp_FUN_0057a980
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0057a820
        ;   Label: support_trisock.cpp_FUN_0057a820
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057a822
    PUSH EDX                            ; 0057a826
    CALL support_trisock.cpp_FUN_0057a980 ; 0057a827
        ;   XREF to: 0057a980 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a980()
    ADD ESP,0x8                         ; 0057a82c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057a82f
    MOV dword ptr [EAX + 0x3bc],0x0     ; 0057a833
    RET                                 ; 0057a83d

