; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ef440(void)
;
;
; Referenced Globals:
;   string s_..\\core\\particle.cpp_0058cb94
;   string s_Base_class_shouldn't_render_0058cba9
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x58cb94                    ; 004ef440 | = "..\\core\\particle.cpp"
        ;   Label: FUN_004ef440
    MOV ECX,0xc5                        ; 004ef445
    PUSH 0x58cba9                       ; 004ef44a | = "Base class shouldn't render"
    MOV dword ptr [0x01cc4800],EDX      ; 004ef44f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004ef455 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ef45b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004ef460
    RET                                 ; 004ef463

