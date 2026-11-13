; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamDebug_putChar_FUN_00574e80(COutStreamDebug *this_ptr,char ch)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   ch
;
; Called Functions:
;   wincore_winrun.cpp_FUN_00581c70
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00574e80
        ;   Label: support_trstream.cpp_COutStreamDebug_putChar_FUN_00574e80
    MOV AL,byte ptr [ESP + 0xc]         ; 00574e83
    MOV byte ptr [ESP],AL               ; 00574e87
    XOR AH,AH                           ; 00574e8a
    MOV byte ptr [ESP + 0x1],AH         ; 00574e8c
    MOV EAX,ESP                         ; 00574e90
    PUSH EAX                            ; 00574e92
    CALL wincore_winrun.cpp_FUN_00581c70 ; 00574e93
        ;   XREF to: 00581c70 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_00581c70()
    ADD ESP,0x4                         ; 00574e98
    XOR EAX,EAX                         ; 00574e9b
    ADD ESP,0x4                         ; 00574e9d
    RET                                 ; 00574ea0

