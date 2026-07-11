; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00544db0(int param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_004b1d00 at 004b1d26
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_00461eb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00544db0
        ;   Label: FUN_00544db0
    AND EDX,0xfff                       ; 00544db4
    LEA EAX,[EDX*0x4 + 0x0]             ; 00544dba
    SUB EAX,EDX                         ; 00544dc1
    MOV EDX,dword ptr [ESP + 0x4]       ; 00544dc3
    SHL EAX,0x3                         ; 00544dc7
    ADD EDX,0x4                         ; 00544dca
    ADD EAX,EDX                         ; 00544dcd
    PUSH EAX                            ; 00544dcf
    MOV EDX,dword ptr [0x005ae704]      ; 00544dd0 | DAT_005ae704
    PUSH EDX                            ; 00544dd6 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 00544dd7
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 00544ddc
    RET                                 ; 00544ddf

