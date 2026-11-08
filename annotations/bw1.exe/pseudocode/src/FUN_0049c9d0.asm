; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049c9d0(int param_1)
;
;
; XREF[1]:
;   FUN_0049c9b0 at 0049c9b6
;
; Referenced Globals:
;   undefined4 DAT_01c3f5d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049c9d0
        ;   Label: FUN_0049c9d0
    CMP EDX,dword ptr [0x01c3f5d0]      ; 0049c9d4 | DAT_01c3f5d0
    JZ 0x0049c9dd                       ; 0049c9da
        ;   XREF to: 0049c9dd (CONDITIONAL_JUMP)  ; LAB_0049c9dd
    RET                                 ; 0049c9dc
    XOR ECX,ECX                         ; 0049c9dd
        ;   Label: LAB_0049c9dd
    MOV dword ptr [0x01c3f5d0],ECX      ; 0049c9df | DAT_01c3f5d0
    RET                                 ; 0049c9e5

