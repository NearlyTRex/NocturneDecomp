; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0040d840(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0040d7e0 at 0040d7ff
;
; Called Functions:
;   FUN_0040d720
;
; *****************************************************************************

section .text

    LEA EAX,[ESP + 0x8]                 ; 0040d840
        ;   Label: FUN_0040d840
    PUSH EAX                            ; 0040d844
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040d845
    PUSH EDX                            ; 0040d849
    CALL FUN_0040d720                   ; 0040d84a
        ;   XREF to: 0040d720 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d720()
    ADD ESP,0x8                         ; 0040d84f
    TEST EAX,EAX                        ; 0040d852
    SETG AL                             ; 0040d854
    AND EAX,0xff                        ; 0040d857
    RET                                 ; 0040d85c

