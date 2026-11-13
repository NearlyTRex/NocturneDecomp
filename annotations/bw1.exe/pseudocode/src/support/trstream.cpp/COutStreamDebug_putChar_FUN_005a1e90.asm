; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamDebug_putChar_FUN_005a1e90(COutStreamDebug *this_ptr,char ch)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   ch
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005b3a90
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005a1e90
        ;   Label: support_trstream.cpp_COutStreamDebug_putChar_FUN_005a1e90
    MOV AL,byte ptr [ESP + 0xc]         ; 005a1e93
    MOV byte ptr [ESP],AL               ; 005a1e97
    XOR AH,AH                           ; 005a1e9a
    MOV byte ptr [ESP + 0x1],AH         ; 005a1e9c
    MOV EAX,ESP                         ; 005a1ea0
    PUSH EAX                            ; 005a1ea2
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 005a1ea3
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 005a1ea8
    XOR EAX,EAX                         ; 005a1eab
    ADD ESP,0x4                         ; 005a1ead
    RET                                 ; 005a1eb0

