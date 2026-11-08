; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e1b80(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_004b6170 at 004b653b
;
; Referenced Globals:
;   TerminatedCString s_gLevelIndicator_Used_d_c_005dbee2
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c158c
;
; Called Functions:
;   FUN_00436710
;   FUN_0044e590
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e1b80
        ;   Label: FUN_004e1b80
    MOV EDX,dword ptr [EAX]             ; 004e1b84
    PUSH EDX                            ; 004e1b86
    PUSH 0x5dbee2                       ; 004e1b87 | = "gLevelIndicator: Used %d calls\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 004e1b8c | PTR_DAT_00609ed0
    PUSH ECX                            ; 004e1b92 | DAT_007c158c
    MOV dword ptr [EAX + 0xc],0x0       ; 004e1b93
    CALL FUN_00436710                   ; 004e1b9a
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004e1b9f
    PUSH 0x1d03130                      ; 004e1ba2
    CALL FUN_0044e590                   ; 004e1ba7
        ;   XREF to: 0044e590 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e590()
    ADD ESP,0x4                         ; 004e1bac
    RET                                 ; 004e1baf

