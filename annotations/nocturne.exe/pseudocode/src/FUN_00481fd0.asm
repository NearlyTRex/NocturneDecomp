; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481fd0(int param_1)
;
;
; Called Functions:
;   FUN_0044b810
;   FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481fd0
        ;   Label: FUN_00481fd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481fd1
    PUSH EBX                            ; 00481fd5
    CALL FUN_0044b810                   ; 00481fd6
        ;   XREF to: 0044b810 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b810()
    ADD ESP,0x4                         ; 00481fdb
    LEA EAX,[EBX + 0x1ec]               ; 00481fde
    PUSH EAX                            ; 00481fe4
    CALL FUN_00454510                   ; 00481fe5
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    MOV dword ptr [EBX + 0xf8],0x1      ; 00481fea
    MOV dword ptr [EBX + 0x3d0],0x0     ; 00481ff4
    ADD ESP,0x4                         ; 00481ffe
    MOV dword ptr [EBX + 0x3d4],0x0     ; 00482001
    POP EBX                             ; 0048200b
    RET                                 ; 0048200c

