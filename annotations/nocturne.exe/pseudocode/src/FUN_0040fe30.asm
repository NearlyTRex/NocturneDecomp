; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040fe30(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004b4800 at 004b485e
;
; Referenced Globals:
;   undefined4 DAT_00599960
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x599960                       ; 0040fe30 | DAT_00599960
        ;   Label: FUN_0040fe30
    PUSH 0x32                           ; 0040fe35
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe37
    PUSH EDX                            ; 0040fe3b
    CALL FUN_0056494f                   ; 0040fe3c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0040fe41
    RET                                 ; 0040fe44

