; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2010(undefined4 param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00410490 at 00410e1f
;   FUN_0049a450 at 0049a476
;   FUN_004ae850 at 004aebe9
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_004a2560
;
; *****************************************************************************

section .text

    PUSH 0x4000                         ; 004a2010
        ;   Label: FUN_004a2010
    PUSH 0x0                            ; 004a2015
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a2017
    PUSH 0x3f19999a                     ; 004a201b
    PUSH EDX                            ; 004a2020
    MOV ECX,dword ptr [0x005fc5a0]      ; 004a2021 | DAT_005fc5a0
    PUSH ECX                            ; 004a2027
    CALL FUN_004a2560                   ; 004a2028
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2560()
    ADD ESP,0x14                        ; 004a202d
    RET                                 ; 004a2030

