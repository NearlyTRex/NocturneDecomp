; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __exit(int _Code)
;
; Parameters:
; int              Stack[0x4]:4   _Code
;
; XREF[2]:
;   FUN_1000bbc0 at 1000bc97
;   __amsg_exit at 100058ee
;
; Called Functions:
;   FUN_10007600
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100075c0
        ;   Label: __exit
    PUSH 0x0                            ; 100075c4
    PUSH 0x1                            ; 100075c6
    PUSH EAX                            ; 100075c8
    CALL FUN_10007600                   ; 100075c9
        ;   XREF to: 10007600 (UNCONDITIONAL_CALL)  ; undefined FUN_10007600()
    ADD ESP,0xc                         ; 100075ce
    RET                                 ; 100075d1

