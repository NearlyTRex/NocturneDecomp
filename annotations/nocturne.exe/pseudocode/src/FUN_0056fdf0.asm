; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * FUN_0056fdf0(uint param_1)
;
;
; XREF[2]:
;   FUN_0056b35c at 0056b39c
;   FUN_005729e8 at 005729ee
;
; Referenced Globals:
;   undefined4 DAT_005c1894
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056fdf0
        ;   Label: FUN_0056fdf0
    CMP EDX,0x3                         ; 0056fdf4
    JBE 0x0056fdfc                      ; 0056fdf7
        ;   XREF to: 0056fdfc (CONDITIONAL_JUMP)  ; LAB_0056fdfc
    XOR EAX,EAX                         ; 0056fdf9
    RET                                 ; 0056fdfb
    LEA EAX,[EDX*0x4 + 0x0]             ; 0056fdfc
        ;   Label: LAB_0056fdfc
    SUB EAX,EDX                         ; 0056fe03
    SHL EAX,0x2                         ; 0056fe05
    ADD EAX,EDX                         ; 0056fe08
    ADD EAX,EAX                         ; 0056fe0a
    ADD EAX,0x5c1894                    ; 0056fe0c | DAT_005c1894
    RET                                 ; 0056fe11

