; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057db80(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_00402940 at 004029f2
;   FUN_004bb9b0 at 004bbc70
;   FUN_004bbf70 at 004bc1ea
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd484 = 0057dc10
;
; Called Functions:
;   FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057db80
        ;   Label: FUN_0057db80
    PUSH EDX                            ; 0057db84
    CALL FUN_0057d860                   ; 0057db85
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d860()
    MOV dword ptr [EAX],0x5fd484        ; 0057db8a | PTR_FUN_005fd484
    ADD ESP,0x4                         ; 0057db90
    MOV dword ptr [EAX + 0x4],0x0       ; 0057db93
    RET                                 ; 0057db9a

