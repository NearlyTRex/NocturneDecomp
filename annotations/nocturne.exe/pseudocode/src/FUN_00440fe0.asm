; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00440fe0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   FUN_00440290 at 004404fa
;   FUN_0044e470 at 0044e5d1
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   undefined4 DAT_01c03a04
;   undefined4 DAT_01c03a08
;
; Called Functions:
;   FUN_00440d40
;   FUN_00460d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440fe0
        ;   Label: FUN_00440fe0
    PUSH ESI                            ; 00440fe1
    PUSH EDI                            ; 00440fe2
    SUB ESP,0xc                         ; 00440fe3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00440fe6
    MOV ESI,dword ptr [0x01c039e8]      ; 00440fea | DAT_01c039e8
    MOV dword ptr [EBX + 0x178],ESI     ; 00440ff0
    MOV ESI,dword ptr [0x01c039ec]      ; 00440ff6 | DAT_01c039ec
    MOV dword ptr [EBX + 0x17c],ESI     ; 00440ffc
    MOV ESI,dword ptr [0x01c039f0]      ; 00441002 | DAT_01c039f0
    MOV dword ptr [EBX + 0x180],ESI     ; 00441008
    MOV ESI,dword ptr [0x01c039f4]      ; 0044100e | DAT_01c039f4
    MOV dword ptr [EBX + 0x184],ESI     ; 00441014
    MOV ESI,dword ptr [0x01c039f8]      ; 0044101a | DAT_01c039f8
    MOV dword ptr [EBX + 0x188],ESI     ; 00441020
    MOV ESI,dword ptr [0x01c039fc]      ; 00441026 | DAT_01c039fc
    MOV dword ptr [EBX + 0x18c],ESI     ; 0044102c
    MOV ESI,dword ptr [0x01c03a00]      ; 00441032 | DAT_01c03a00
    MOV dword ptr [EBX + 0x190],ESI     ; 00441038
    MOV ESI,dword ptr [0x01c03a04]      ; 0044103e | DAT_01c03a04
    MOV EDX,dword ptr [0x005ae704]      ; 00441044 | DAT_005ae704
    MOV dword ptr [EBX + 0x194],ESI     ; 0044104a
    MOV ESI,dword ptr [0x01c03a08]      ; 00441050 | DAT_01c03a08
    PUSH EDX                            ; 00441056 | DAT_01b4d738
    MOV dword ptr [EBX + 0x198],ESI     ; 00441057
    LEA ESI,[ESP + 0x4]                 ; 0044105d
    CALL FUN_00460d10                   ; 00441061
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460d10()
    LEA ESI,[ESP + 0x4]                 ; 00441066
    LEA EDI,[EBX + 0x16c]               ; 0044106a
    ADD ESP,0x4                         ; 00441070
    MOVSD ES:EDI,ESI                    ; 00441073
    MOVSD ES:EDI,ESI                    ; 00441074
    MOVSD ES:EDI,ESI                    ; 00441075
    MOV ESI,dword ptr [0x01c00c48]      ; 00441076 | DAT_01c00c48
    MOV dword ptr [EBX + 0x1c0],ESI     ; 0044107c
    MOV ESI,dword ptr [0x01c00c4c]      ; 00441082 | DAT_01c00c4c
    MOV dword ptr [EBX + 0x1c4],ESI     ; 00441088
    MOV ESI,dword ptr [0x01c00c50]      ; 0044108e | DAT_01c00c50
    MOV dword ptr [EBX + 0x1c8],ESI     ; 00441094
    MOV ESI,dword ptr [0x01c00c54]      ; 0044109a | DAT_01c00c54
    PUSH EBX                            ; 004410a0
    MOV dword ptr [EBX + 0x1cc],ESI     ; 004410a1
    CALL FUN_00440d40                   ; 004410a7
        ;   XREF to: 00440d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00440d40()
    ADD ESP,0x4                         ; 004410ac
    ADD ESP,0xc                         ; 004410af
    POP EDI                             ; 004410b2
    POP ESI                             ; 004410b3
    POP EBX                             ; 004410b4
    RET                                 ; 004410b5

