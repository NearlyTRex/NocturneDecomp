; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005492f0(void)
;
;
; XREF[2]:
;   FUN_00506ec0 at 00506ef8
;   FUN_00506f10 at 00507a50
;
; Referenced Globals:
;   undefined4 DAT_005ba8ec
;   undefined4 DAT_02dd10cc
;
; Called Functions:
;   FUN_004b1470
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005ba8ec]      ; 005492f0 | DAT_005ba8ec
        ;   Label: FUN_005492f0
    PUSH EDX                            ; 005492f6
    CALL FUN_004b1470                   ; 005492f7
        ;   XREF to: 004b1470 (UNCONDITIONAL_CALL)  ; undefined FUN_004b1470()
    XOR ECX,ECX                         ; 005492fc
    ADD ESP,0x4                         ; 005492fe
    MOV dword ptr [0x02dd10cc],ECX      ; 00549301 | DAT_02dd10cc
    RET                                 ; 00549307

