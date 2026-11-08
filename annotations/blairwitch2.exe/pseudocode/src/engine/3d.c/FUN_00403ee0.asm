; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00403ee0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_005ca369
;   TerminatedCString s_Old_func_005ca378
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca369                    ; 00403ee0 | = "..\\engine\\3d.c"
        ;   Label: FUN_00403ee0
    MOV ECX,0x36f                       ; 00403ee5
    PUSH 0x5ca378                       ; 00403eea | = "Old func"
    MOV dword ptr [0x01d046a0],EDX      ; 00403eef | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00403ef5 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00403efb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00403f00
    XOR EAX,EAX                         ; 00403f03
    RET                                 ; 00403f05

