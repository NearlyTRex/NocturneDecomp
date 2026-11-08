; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00575070(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0046cab0 at 0046caba
;
; Referenced Globals:
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   FUN_00574a80
;   FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575070
        ;   Label: FUN_00575070
    MOV EDX,dword ptr [ESP + 0x8]       ; 00575071
    PUSH EDX                            ; 00575075
    CALL FUN_00574e00                   ; 00575076
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00574e00()
    ADD ESP,0x4                         ; 0057507b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0057507e
    PUSH ECX                            ; 00575082
    MOV EBX,dword ptr [0x02652eb0]      ; 00575083 | DAT_02652eb0
    PUSH EBX                            ; 00575089
    CALL FUN_00574a80                   ; 0057508a
        ;   XREF to: 00574a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00574a80()
    ADD ESP,0x8                         ; 0057508f
    POP EBX                             ; 00575092
    RET                                 ; 00575093

