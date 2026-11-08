; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00404440(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_005ca399
;   TerminatedCString s_Old_func_005ca3a8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca399                    ; 00404440 | = "..\\engine\\3d.c"
        ;   Label: FUN_00404440
    MOV ECX,0x442                       ; 00404445
    PUSH 0x5ca3a8                       ; 0040444a | = "Old func"
    MOV dword ptr [0x01d046a0],EDX      ; 0040444f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00404455 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0040445b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00404460
    XOR EAX,EAX                         ; 00404463
    RET                                 ; 00404465

