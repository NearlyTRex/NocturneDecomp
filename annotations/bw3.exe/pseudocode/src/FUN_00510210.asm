; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510210(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0050fda0 at 0050fdf3
;
; Called Functions:
;   FUN_00510160
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510210
        ;   Label: FUN_00510210
    MOV EDX,dword ptr [ESP + 0x8]       ; 00510214
    PUSH EDX                            ; 00510218
    PUSH EAX                            ; 00510219
    PUSH EAX                            ; 0051021a
    CALL FUN_00510160                   ; 0051021b
        ;   XREF to: 00510160 (UNCONDITIONAL_CALL)  ; undefined FUN_00510160()
    ADD ESP,0xc                         ; 00510220
    RET                                 ; 00510223

