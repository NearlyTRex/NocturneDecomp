; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402600(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[20]:
;   FUN_00402760 at 00402770
;   FUN_00402780 at 004027d1
;   FUN_004027f0 at 00402812
;   FUN_004028b0 at 004028db
;   FUN_00402980 at 004029af
;   FUN_00403fb0 at 00403ffb
;   FUN_0047dd80 at 0047ddd0
;   FUN_0049cc10 at 0049d0f6
;   FUN_004c8510 at 004c8527
;   FUN_004cf8d0 at 004cf999
;   ... and 10 more
;
; Referenced Globals:
;   undefined4 DAT_005acaa4
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; Called Functions:
;   FUN_00402290
;   FUN_00402320
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00402600
        ;   Label: FUN_00402600
    PUSH EDI                            ; 00402601
    PUSH EBP                            ; 00402602
    MOV EAX,dword ptr [ESP + 0x10]      ; 00402603
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402607
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040260b
    CMP dword ptr [0x005acaa4],0x0      ; 0040260f | DAT_005acaa4
    JZ 0x00402637                       ; 00402616
        ;   XREF to: 00402637 (CONDITIONAL_JUMP)  ; LAB_00402637
    PUSH EBX                            ; 00402618
    MOV EBP,dword ptr [0x01c00c64]      ; 00402619 | DAT_01c00c64
    PUSH EBP                            ; 0040261f
    MOV EBX,dword ptr [0x01c00c60]      ; 00402620 | DAT_01c00c60
    PUSH EBX                            ; 00402626
    PUSH EDX                            ; 00402627
    PUSH ECX                            ; 00402628
    PUSH EAX                            ; 00402629
    CALL FUN_00402290                   ; 0040262a
        ;   XREF to: 00402290 (UNCONDITIONAL_CALL)  ; undefined FUN_00402290()
    ADD ESP,0x14                        ; 0040262f
    POP EBX                             ; 00402632
    POP EBP                             ; 00402633
    POP EDI                             ; 00402634
    POP ESI                             ; 00402635
    RET                                 ; 00402636
    MOV ESI,dword ptr [0x01c00c64]      ; 00402637 | DAT_01c00c64
        ;   Label: LAB_00402637
    PUSH ESI                            ; 0040263d
    MOV EDI,dword ptr [0x01c00c60]      ; 0040263e | DAT_01c00c60
    PUSH EDI                            ; 00402644
    PUSH EDX                            ; 00402645
    PUSH ECX                            ; 00402646
    PUSH EAX                            ; 00402647
    CALL FUN_00402320                   ; 00402648
        ;   XREF to: 00402320 (UNCONDITIONAL_CALL)  ; undefined FUN_00402320()
    ADD ESP,0x14                        ; 0040264d
    POP EBP                             ; 00402650
    POP EDI                             ; 00402651
    POP ESI                             ; 00402652
    RET                                 ; 00402653

