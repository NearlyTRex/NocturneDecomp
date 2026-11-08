; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005723b0(void)
;
;
; XREF[2]:
;   FUN_00532b30 at 00532b68
;   FUN_00532b80 at 00533921
;
; Referenced Globals:
;   undefined4 DAT_005fff4c
;   undefined4 DAT_02cfd8bc
;
; Called Functions:
;   FUN_004cfc70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005fff4c]      ; 005723b0 | DAT_005fff4c
        ;   Label: FUN_005723b0
    PUSH EDX                            ; 005723b6
    CALL FUN_004cfc70                   ; 005723b7
        ;   XREF to: 004cfc70 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfc70()
    XOR ECX,ECX                         ; 005723bc
    ADD ESP,0x4                         ; 005723be
    MOV dword ptr [0x02cfd8bc],ECX      ; 005723c1 | DAT_02cfd8bc
    RET                                 ; 005723c7

