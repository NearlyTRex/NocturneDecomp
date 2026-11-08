; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd390(int param_1)
;
;
; XREF[1]:
;   FUN_004dbc40 at 004dbcc9
;
; Referenced Globals:
;   undefined4 DAT_01d5ba14
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004dd390
        ;   Label: FUN_004dd390
    MOV EDX,dword ptr [0x01d5ba14]      ; 004dd394 | DAT_01d5ba14
    MOV EAX,dword ptr [ECX + 0x4]       ; 004dd39a
    CMP EAX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004dd39d
    JZ 0x004dd3a7                       ; 004dd3a4
        ;   XREF to: 004dd3a7 (CONDITIONAL_JUMP)  ; LAB_004dd3a7
    RET                                 ; 004dd3a6
    MOV dword ptr [ECX + 0x340],0x0     ; 004dd3a7
        ;   Label: LAB_004dd3a7
    MOV dword ptr [ECX + 0x344],0x40a00000 ; 004dd3b1
    RET                                 ; 004dd3bb

