; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00403e20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_005ca351
;   TerminatedCString s_Old_func_005ca360
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca351                    ; 00403e20 | = "..\\engine\\3d.c"
        ;   Label: FUN_00403e20
    MOV ECX,0x343                       ; 00403e25
    PUSH 0x5ca360                       ; 00403e2a | = "Old func"
    MOV dword ptr [0x01d046a0],EDX      ; 00403e2f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00403e35 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00403e3b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00403e40
    XOR EAX,EAX                         ; 00403e43
    RET                                 ; 00403e45

