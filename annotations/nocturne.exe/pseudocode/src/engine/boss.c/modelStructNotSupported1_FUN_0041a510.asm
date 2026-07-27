; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_boss_c_modelStructNotSupported1_FUN_0041a510(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_00579576
;   TerminatedCString s_modelStruct_not_supporte_00579587
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x579576                    ; 0041a510 | = "..\\engine\\boss.c"
        ;   Label: engine_boss.c_modelStructNotSupported1_FUN_0041a510
    MOV ECX,0x35                        ; 0041a515
    PUSH 0x579587                       ; 0041a51a | = "modelStruct not supported"
    MOV dword ptr [0x01cc4800],EDX      ; 0041a51f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0041a525 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0041a52b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0041a530
    XOR EAX,EAX                         ; 0041a533
    RET                                 ; 0041a535

