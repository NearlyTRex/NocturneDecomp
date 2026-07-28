; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_trisock_cpp_listenSocket_FUN_00549150(void)
;
;
; Called Functions:
;   Ordinal_13
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00549150
        ;   Label: support_trisock.cpp_listenSocket_FUN_00549150
    PUSH 0x1                            ; 00549154
    MOV EDX,dword ptr [EAX]             ; 00549156
    PUSH EDX                            ; 00549158
    CALL Ordinal_13                     ; 00549159
        ;   XREF to: 00574bcc (UNCONDITIONAL_CALL)  ; undefined Ordinal_13()
    TEST EAX,EAX                        ; 0054915e
    SETZ AL                             ; 00549160
    AND EAX,0xff                        ; 00549163
    RET                                 ; 00549168

