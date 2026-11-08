; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044caa0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00462470 at 00462475
;   FUN_0054cec0 at 0054cedf
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fe624 = 0044cb00
;
; Called Functions:
;   FUN_00428220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044caa0
        ;   Label: FUN_0044caa0
    PUSH EDX                            ; 0044caa4
    CALL FUN_00428220                   ; 0044caa5
        ;   XREF to: 00428220 (UNCONDITIONAL_CALL)  ; undefined FUN_00428220()
    MOV dword ptr [EAX + 0x3c],0x5fe624 ; 0044caaa | PTR_FUN_005fe624
    MOV dword ptr [EAX + 0x158],0x0     ; 0044cab1
    MOV dword ptr [EAX + 0x160],0x0     ; 0044cabb
    MOV dword ptr [EAX + 0x15c],0x0     ; 0044cac5
    MOV dword ptr [EAX + 0x164],0x0     ; 0044cacf
    MOV dword ptr [EAX + 0x11e8],0x0    ; 0044cad9
    MOV dword ptr [EAX + 0x11e4],0x0    ; 0044cae3
    ADD ESP,0x4                         ; 0044caed
    MOV dword ptr [EAX + 0x140],0x4479f99a ; 0044caf0
    RET                                 ; 0044cafa

