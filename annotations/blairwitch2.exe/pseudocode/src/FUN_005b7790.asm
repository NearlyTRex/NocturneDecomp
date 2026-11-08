; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7790(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[139]:
;   FUN_00402940 at 004029c3
;   FUN_004041f0 at 0040420a
;   FUN_00404e10 at 00404e2a
;   FUN_0040cb60 at 0040cdbd
;   FUN_0040d5a0 at 0040d5dc
;   FUN_0041d350 at 0041d739
;   FUN_0042c520 at 0042c573
;   FUN_0042c780 at 0042c86c
;   FUN_0042f4f0 at 0042f5ec
;   FUN_00441f50 at 00441fc1
;   ... and 129 more
;
; Called Functions:
;   FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7790
        ;   Label: FUN_005b7790
    SUB ESP,0x4                         ; 005b7791
    LEA EAX,[ESP + 0x14]                ; 005b7794
    MOV dword ptr [ESP],EAX             ; 005b7798
    MOV EAX,ESP                         ; 005b779b
    PUSH EAX                            ; 005b779d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b779e
    PUSH EDX                            ; 005b77a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b77a3
    PUSH EBX                            ; 005b77a7
    CALL FUN_005b7768                   ; 005b77a8
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7768()
    ADD ESP,0xc                         ; 005b77ad
    ADD ESP,0x4                         ; 005b77b0
    POP EBX                             ; 005b77b3
    RET                                 ; 005b77b4

