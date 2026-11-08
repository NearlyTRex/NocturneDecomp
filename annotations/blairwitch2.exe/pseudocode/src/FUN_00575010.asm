; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00575010(void)
;
;
; XREF[2]:
;   FUN_004ee3f0 at 004ee492
;   FUN_004fcf50 at 004fcf50
;
; Referenced Globals:
;   undefined4 DAT_02652eb0
;   undefined4 DAT_02652eb4
;
; Called Functions:
;   FUN_005739b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02652eb0]      ; 00575010 | DAT_02652eb0
        ;   Label: FUN_00575010
    PUSH EDX                            ; 00575016
    CALL FUN_005739b0                   ; 00575017
        ;   XREF to: 005739b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005739b0()
    XOR ECX,ECX                         ; 0057501c
    ADD ESP,0x4                         ; 0057501e
    MOV dword ptr [0x02652eb4],ECX      ; 00575021 | DAT_02652eb4
    LEA EAX,[EAX]                       ; 00575027
    LEA EDX,[EDX]                       ; 0057502d
    RET                                 ; 00575030

