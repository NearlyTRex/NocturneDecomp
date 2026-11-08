; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059f3c0(void)
;
;
; XREF[2]:
;   FUN_0054d370 at 0054d3a8
;   FUN_0054d3c0 at 0054e161
;
; Referenced Globals:
;   undefined4 DAT_0061eecc
;   undefined4 DAT_02c8ae6c
;
; Called Functions:
;   FUN_004e72e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0061eecc]      ; 0059f3c0 | DAT_0061eecc
        ;   Label: FUN_0059f3c0
    PUSH EDX                            ; 0059f3c6
    CALL FUN_004e72e0                   ; 0059f3c7
        ;   XREF to: 004e72e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e72e0()
    XOR ECX,ECX                         ; 0059f3cc
    ADD ESP,0x4                         ; 0059f3ce
    MOV dword ptr [0x02c8ae6c],ECX      ; 0059f3d1 | DAT_02c8ae6c
    RET                                 ; 0059f3d7

