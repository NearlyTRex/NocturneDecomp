; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0040c7f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0040c790 at 0040c7af
;
; Called Functions:
;   FUN_0040c6d0
;
; *****************************************************************************

section .text

    LEA EAX,[ESP + 0x8]                 ; 0040c7f0
        ;   Label: FUN_0040c7f0
    PUSH EAX                            ; 0040c7f4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c7f5
    PUSH EDX                            ; 0040c7f9
    CALL FUN_0040c6d0                   ; 0040c7fa
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 0040c7ff
    TEST EAX,EAX                        ; 0040c802
    SETG AL                             ; 0040c804
    AND EAX,0xff                        ; 0040c807
    RET                                 ; 0040c80c

