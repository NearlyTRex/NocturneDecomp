; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00545a80(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0049cc10 at 0049d353
;
; Referenced Globals:
;   undefined4 DAT_02dd0f84
;
; Called Functions:
;   FUN_00545810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00545a80
        ;   Label: FUN_00545a80
    PUSH EDX                            ; 00545a84
    MOV ECX,dword ptr [0x02dd0f84]      ; 00545a85 | DAT_02dd0f84
    PUSH ECX                            ; 00545a8b
    CALL FUN_00545810                   ; 00545a8c
        ;   XREF to: 00545810 (UNCONDITIONAL_CALL)  ; undefined FUN_00545810()
    ADD ESP,0x8                         ; 00545a91
    RET                                 ; 00545a94

