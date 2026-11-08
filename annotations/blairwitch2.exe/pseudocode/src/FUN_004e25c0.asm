; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e25c0(int param_1)
;
;
; XREF[1]:
;   FUN_0046b4f0 at 0046b509
;
; Referenced Globals:
;   undefined4 DAT_00617e40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e25c0
        ;   Label: FUN_004e25c0
    TEST EAX,EAX                        ; 004e25c4
    JL 0x004e25da                       ; 004e25c6
        ;   XREF to: 004e25da (CONDITIONAL_JUMP)  ; LAB_004e25da
    CMP EAX,0xffff                      ; 004e25c8
    JLE 0x004e25d4                      ; 004e25cd
        ;   XREF to: 004e25d4 (CONDITIONAL_JUMP)  ; LAB_004e25d4
    MOV EAX,0xffff                      ; 004e25cf
    MOV [0x00617e40],EAX                ; 004e25d4 | DAT_00617e40
        ;   Label: LAB_004e25d4
    RET                                 ; 004e25d9
    XOR EAX,EAX                         ; 004e25da
        ;   Label: LAB_004e25da
    MOV [0x00617e40],EAX                ; 004e25dc | DAT_00617e40
    RET                                 ; 004e25e1

