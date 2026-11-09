; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamDebug * support_trstream_cpp_COutStreamDebug_ctor_FUN_005a1e10(COutStreamDebug *this_ptr)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   unkaddr_0059f520.cpp_FUN_0059f520 at 0059f525
;
; Called Functions:
;   support_trstream.cpp_FUN_005a14b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1e10
        ;   Label: support_trstream.cpp_COutStreamDebug_ctor_FUN_005a1e10
    PUSH EDX                            ; 005a1e14
    CALL support_trstream.cpp_FUN_005a14b0 ; 005a1e15
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a14b0()
    ADD ESP,0x4                         ; 005a1e1a
    MOV dword ptr [EAX],0x607474        ; 005a1e1d
    RET                                 ; 005a1e23

