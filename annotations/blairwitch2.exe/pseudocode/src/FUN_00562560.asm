; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562560(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0264be14
;   undefined4 DAT_0264be18
;   undefined4 DAT_0264be1c
;   undefined4 DAT_0264be20
;   undefined4 DAT_0264be24
;   undefined4 DAT_0264be28
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562560
        ;   Label: FUN_00562560
    PUSH ESI                            ; 00562561
    PUSH 0x1cedf18                      ; 00562562
    PUSH 0x9                            ; 00562567
    MOV EDX,0x3f05e354                  ; 00562569
    MOV ECX,0x3d656042                  ; 0056256e
    PUSH 0x61e2e0                       ; 00562573
    MOV EBX,0x3e010625                  ; 00562578
    MOV ESI,0xbf05e354                  ; 0056257d
    PUSH 0x5627c0                       ; 00562582
    MOV dword ptr [0x0264be14],EDX      ; 00562587 | DAT_0264be14
    MOV dword ptr [0x0264be18],ECX      ; 0056258d | DAT_0264be18
    PUSH 0x5eb195                       ; 00562593
    MOV dword ptr [0x0264be1c],EBX      ; 00562598 | DAT_0264be1c
    MOV dword ptr [0x0264be20],ESI      ; 0056259e | DAT_0264be20
    PUSH 0x264be8c                      ; 005625a4
    MOV dword ptr [0x0264be24],ECX      ; 005625a9 | DAT_0264be24
    MOV dword ptr [0x0264be28],EBX      ; 005625af | DAT_0264be28
    CALL FUN_0040c450                   ; 005625b5
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005625ba
    POP ESI                             ; 005625bd
    POP EBX                             ; 005625be
    RET                                 ; 005625bf

