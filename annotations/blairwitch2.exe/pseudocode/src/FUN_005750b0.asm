; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005750b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004b5190 at 004b596e
;
; Referenced Globals:
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   FUN_00574af0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005750b0
        ;   Label: FUN_005750b0
    PUSH EDX                            ; 005750b4
    MOV ECX,dword ptr [0x02652eb0]      ; 005750b5 | DAT_02652eb0
    PUSH ECX                            ; 005750bb
    CALL FUN_00574af0                   ; 005750bc
        ;   XREF to: 00574af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00574af0()
    ADD ESP,0x8                         ; 005750c1
    RET                                 ; 005750c4

