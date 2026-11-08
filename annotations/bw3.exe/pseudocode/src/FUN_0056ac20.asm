; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056ac20(void)
;
;
; XREF[2]:
;   FUN_004ea4d0 at 004ea572
;   FUN_004f76f0 at 004f76f0
;
; Referenced Globals:
;   undefined4 DAT_02cfd0d0
;   undefined4 DAT_02cfd0d4
;
; Called Functions:
;   FUN_005695c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02cfd0d0]      ; 0056ac20 | DAT_02cfd0d0
        ;   Label: FUN_0056ac20
    PUSH EDX                            ; 0056ac26
    CALL FUN_005695c0                   ; 0056ac27
        ;   XREF to: 005695c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005695c0()
    XOR ECX,ECX                         ; 0056ac2c
    ADD ESP,0x4                         ; 0056ac2e
    MOV dword ptr [0x02cfd0d4],ECX      ; 0056ac31 | DAT_02cfd0d4
    LEA EAX,[EAX]                       ; 0056ac37
    LEA EDX,[EDX]                       ; 0056ac3d
    RET                                 ; 0056ac40

