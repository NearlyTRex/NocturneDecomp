; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041b190(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00418c70 at 00418cac
;
; Referenced Globals:
;   undefined4 DAT_005fcbd0
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fcbd0                       ; 0041b190 | DAT_005fcbd0
        ;   Label: FUN_0041b190
    PUSH 0x2                            ; 0041b195
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041b197
    PUSH EDX                            ; 0041b19b
    CALL FUN_005c1066                   ; 0041b19c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 0041b1a1
    RET                                 ; 0041b1a4

