; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_3d_c_oldFunction7_FUN_00405990(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_00577504
;   string s_old_func_00577513
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x577504                    ; 00405990 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_oldFunction7_FUN_00405990
    MOV ECX,0x4ff                       ; 00405995
    PUSH 0x577513                       ; 0040599a | = "old func"
    MOV dword ptr [0x01cc4800],EDX      ; 0040599f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004059a5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004059ab
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004059b0
    XOR EAX,EAX                         ; 004059b3
    RET                                 ; 004059b5

