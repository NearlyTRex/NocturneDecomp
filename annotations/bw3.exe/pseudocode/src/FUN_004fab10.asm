; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fab10(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[4]:
;   FUN_005275c0 at 00527741
;   FUN_005992f0 at 005994c0
;   FUN_0059a060 at 0059a244
;   FUN_0059aba0 at 0059ad84
;
; Called Functions:
;   FUN_004f9df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fab10
        ;   Label: FUN_004fab10
    MOV EDX,dword ptr [ESP + 0x14]      ; 004fab11
    PUSH EDX                            ; 004fab15
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fab16
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fab1a
    SUB EAX,EDX                         ; 004fab21
    SHL EAX,0x6                         ; 004fab23
    MOV ECX,dword ptr [ESP + 0x14]      ; 004fab26
    ADD EAX,EDX                         ; 004fab2a
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fab2c
    SHL EAX,0x3                         ; 004fab30
    PUSH ECX                            ; 004fab33
    ADD EAX,EBX                         ; 004fab34
    PUSH EAX                            ; 004fab36
    CALL FUN_004f9df0                   ; 004fab37
        ;   XREF to: 004f9df0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9df0()
    ADD ESP,0xc                         ; 004fab3c
    POP EBX                             ; 004fab3f
    RET                                 ; 004fab40

