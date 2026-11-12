; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamDebug * support_trstream_cpp_COutStreamDebug_ctor_FUN_0057e1c0(COutStreamDebug *this_ptr)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_terrain.cpp_FUN_0057b9a0 at 0057b9a5
;
; Called Functions:
;   support_trstream.cpp_FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057e1c0
        ;   Label: support_trstream.cpp_COutStreamDebug_ctor_FUN_0057e1c0
    PUSH EDX                            ; 0057e1c4
    CALL support_trstream.cpp_FUN_0057d860 ; 0057e1c5
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d860()
    ADD ESP,0x4                         ; 0057e1ca
    MOV dword ptr [EAX],0x5fd4d4        ; 0057e1cd
    RET                                 ; 0057e1d3

