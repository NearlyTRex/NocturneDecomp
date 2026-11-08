; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ad490(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1a0a0
;   undefined4 DAT_01d1a0a4
;   undefined4 DAT_01d1a0a8
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004ad490
        ;   Label: FUN_004ad490
    MOV EDX,0x3f800000                  ; 004ad493
    MOV dword ptr [ESP],EDX             ; 004ad498
    MOV dword ptr [0x01d1a0a0],EDX      ; 004ad49b | DAT_01d1a0a0
    MOV ECX,dword ptr [ESP]             ; 004ad4a1
    SAR EDX,0x1                         ; 004ad4a4
    ADD ECX,EDX                         ; 004ad4a6
    MOV dword ptr [0x01d1a0a4],EDX      ; 004ad4a8 | DAT_01d1a0a4
    MOV dword ptr [0x01d1a0a8],ECX      ; 004ad4ae | DAT_01d1a0a8
    ADD ESP,0x4                         ; 004ad4b4
    LEA EAX,[EAX]                       ; 004ad4b7
    LEA EDX,[EDX]                       ; 004ad4bd

