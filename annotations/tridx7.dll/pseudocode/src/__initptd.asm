; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)
;
; Parameters:
; _ptiddata        Stack[0x4]:4   _Ptd
; pthreadlocinfo   Stack[0x8]:4   _Locale
;
; XREF[2]:
;   __getptd at 100077f0
;   __mtinit at 1000773e
;
; Referenced Globals:
;   undefined4 DAT_100176d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10007790
        ;   Label: __initptd
    MOV dword ptr [EAX + 0x50],0x100176d0 ; 10007794 | DAT_100176d0
    MOV dword ptr [EAX + 0x14],0x1      ; 1000779b
    RET                                 ; 100077a2

