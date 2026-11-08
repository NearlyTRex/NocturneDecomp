; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * FUN_005b0eb0(uint param_1)
;
;
; XREF[1]:
;   FUN_005b07f0 at 005b07f6
;
; Referenced Globals:
;   undefined4 DAT_00607678
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b0eb0
        ;   Label: FUN_005b0eb0
    CMP EDX,0x3                         ; 005b0eb4
    JBE 0x005b0ebc                      ; 005b0eb7
        ;   XREF to: 005b0ebc (CONDITIONAL_JUMP)  ; LAB_005b0ebc
    XOR EAX,EAX                         ; 005b0eb9
    RET                                 ; 005b0ebb
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b0ebc
        ;   Label: LAB_005b0ebc
    SUB EAX,EDX                         ; 005b0ec3
    SHL EAX,0x2                         ; 005b0ec5
    ADD EAX,EDX                         ; 005b0ec8
    ADD EAX,EAX                         ; 005b0eca
    ADD EAX,0x607678                    ; 005b0ecc | DAT_00607678
    RET                                 ; 005b0ed1

