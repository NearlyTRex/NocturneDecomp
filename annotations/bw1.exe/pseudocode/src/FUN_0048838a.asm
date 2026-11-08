; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048838a(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00453ed0 at 0045424e
;
; Referenced Globals:
;   undefined8 DAT_006185f8
;   undefined8 DAT_00618600
;   undefined4 DAT_00619b60
;   undefined4 DAT_0061a358
;   undefined4 DAT_00b8189c
;   undefined4 DAT_01c51d1c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0048838a
        ;   Label: FUN_0048838a
    MOV EBP,ESP                         ; 0048838b
    PUSH ESI                            ; 0048838d
    PUSH EDI                            ; 0048838e
    PUSH EBP                            ; 0048838f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00488390
    MOV EDI,dword ptr [EBP + 0x8]       ; 00488393
    MOV ESI,dword ptr [EBP + 0xc]       ; 00488396
    MOV EBX,dword ptr [EBP + 0x10]      ; 00488399
    MOV EBP,dword ptr [EBP + 0x14]      ; 0048839c
    PXOR MM7,MM7                        ; 0048839f
    MOVD MM5,dword ptr [0x01c51d1c]     ; 004883a2 | DAT_01c51d1c
    PUNPCKLBW MM5,MM7                   ; 004883a9
    PSLLW MM5,0x6                       ; 004883ac
    MOV EAX,dword ptr [ESI]             ; 004883b0
    MOV EAX,dword ptr [ESI + 0x20]      ; 004883b2
    MOV EAX,dword ptr [ESI + 0x40]      ; 004883b5
    MOV EAX,dword ptr [ESI + 0x60]      ; 004883b8
    MOV EAX,dword ptr [ESI + 0x80]      ; 004883bb
    MOV EAX,dword ptr [ESI + 0xa0]      ; 004883c1
    MOV EAX,dword ptr [ESI + 0xc0]      ; 004883c7
    MOV EAX,dword ptr [ESI + 0xe0]      ; 004883cd
    MOV EAX,dword ptr [ESI + 0x100]     ; 004883d3
    MOV EAX,dword ptr [ESI + 0x120]     ; 004883d9
    MOV EAX,dword ptr [ESI + 0x140]     ; 004883df
    MOV EAX,dword ptr [ESI + 0x160]     ; 004883e5
    MOV EAX,dword ptr [ESI + 0x180]     ; 004883eb
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 004883f1
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 004883f7
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 004883fd
    MOV EAX,dword ptr [ESI + 0x200]     ; 00488403
    MOV EAX,dword ptr [ESI + 0x220]     ; 00488409
    MOV EAX,dword ptr [ESI + 0x240]     ; 0048840f
    MOV EAX,dword ptr [ESI + 0x260]     ; 00488415
    MOV EAX,dword ptr [ESI + 0x280]     ; 0048841b
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00488421
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00488427
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 0048842d
    MOV EAX,dword ptr [ESI + 0x300]     ; 00488433
    MOV EAX,dword ptr [ESI + 0x320]     ; 00488439
    MOV EAX,dword ptr [ESI + 0x340]     ; 0048843f
    MOV EAX,dword ptr [ESI + 0x360]     ; 00488445
    MOV EAX,dword ptr [ESI + 0x380]     ; 0048844b
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00488451
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00488457
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 0048845d
    MOV EAX,dword ptr [ESI + 0x400]     ; 00488463
    MOV EAX,dword ptr [ESI + 0x420]     ; 00488469
    MOV EAX,dword ptr [ESI + 0x440]     ; 0048846f
    MOV EAX,dword ptr [ESI + 0x460]     ; 00488475
    MOV EAX,dword ptr [ESI + 0x480]     ; 0048847b
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00488481
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00488487
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 0048848d
    MOV EAX,dword ptr [ESI + 0x500]     ; 00488493
    MOV EAX,dword ptr [ESI + 0x520]     ; 00488499
    MOV EAX,dword ptr [ESI + 0x540]     ; 0048849f
    MOV EAX,dword ptr [ESI + 0x560]     ; 004884a5
    MOV EAX,dword ptr [ESI + 0x580]     ; 004884ab
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 004884b1
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 004884b7
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 004884bd
    MOV EAX,dword ptr [ESI + 0x600]     ; 004884c3
    MOV EAX,dword ptr [ESI + 0x620]     ; 004884c9
    MOV EAX,dword ptr [ESI + 0x640]     ; 004884cf
    MOV EAX,dword ptr [ESI + 0x660]     ; 004884d5
    MOV EAX,dword ptr [ESI + 0x680]     ; 004884db
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 004884e1
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 004884e7
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 004884ed
    MOV EAX,dword ptr [ESI + 0x700]     ; 004884f3
    MOV EAX,dword ptr [ESI + 0x720]     ; 004884f9
    MOV EAX,dword ptr [ESI + 0x740]     ; 004884ff
    MOV EAX,dword ptr [ESI + 0x760]     ; 00488505
    MOV EAX,dword ptr [ESI + 0x780]     ; 0048850b
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00488511
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00488517
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 0048851d
    MOV EAX,dword ptr [ESI + 0x800]     ; 00488523
    MOV EAX,dword ptr [ESI + 0x820]     ; 00488529
    MOV EAX,dword ptr [ESI + 0x840]     ; 0048852f
    MOV EAX,dword ptr [ESI + 0x860]     ; 00488535
    MOV EAX,dword ptr [ESI + 0x880]     ; 0048853b
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00488541
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00488547
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 0048854d
    MOV EAX,dword ptr [ESI + 0x900]     ; 00488553
    MOV EAX,dword ptr [ESI + 0x920]     ; 00488559
    MOV EAX,dword ptr [ESI + 0x940]     ; 0048855f
    MOV EAX,dword ptr [ESI + 0x960]     ; 00488565
    MOV EAX,dword ptr [ESI + 0x980]     ; 0048856b
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00488571
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00488577
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 0048857d
    MOV EAX,dword ptr [EBX + 0x140]     ; 00488583
    MOV EAX,dword ptr [EBX + 0x160]     ; 00488589
    MOV EAX,dword ptr [EBX + 0x180]     ; 0048858f
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 00488595
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 0048859b
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 004885a1
    MOV EAX,dword ptr [EBX + 0x200]     ; 004885a7
    MOV EAX,dword ptr [EBX + 0x220]     ; 004885ad
    MOV EAX,dword ptr [EBX + 0x240]     ; 004885b3
    MOV EAX,dword ptr [EBX + 0x260]     ; 004885b9
    JMP 0x004885d0                      ; 004885bf
        ;   XREF to: 004885d0 (UNCONDITIONAL_JUMP)  ; LAB_004885d0
    MOVZX EDX,byte ptr [EBX]            ; 004885d0
        ;   Label: LAB_004885d0
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 004885d3
    ADD EDX,EAX                         ; 004885da
    MOVQ MM0,qword ptr [ESI]            ; 004885dc
    SHR EDX,0x1                         ; 004885df
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 004885e1
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 004885e8 | DAT_00b8189c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 004885f0
    MOVQ MM1,MM0                        ; 004885f4
    ADD EDX,EAX                         ; 004885f7
    MOVZX EAX,byte ptr [EBP]            ; 004885f9
    SHR EDX,0x1                         ; 004885fd
    PUNPCKLBW MM0,MM7                   ; 004885ff
    MOVD MM6,dword ptr [EDX*0x4 + 0xb8189c] ; 00488602 | DAT_00b8189c
    PSRLQ MM1,0x20                      ; 0048860a
    SHR EDX,0x1                         ; 0048860e
    PUNPCKLBW MM6,MM7                   ; 00488610
    PUNPCKLBW MM2,MM7                   ; 00488613
    ADD EAX,EDX                         ; 00488616
    PADDW MM6,MM2                       ; 00488618
    PUNPCKLBW MM1,MM7                   ; 0048861b
    PMULLW MM0,MM2                      ; 0048861e
    PSRLW MM6,0x1                       ; 00488621
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00488625 | DAT_00619b60
    PMULLW MM1,MM6                      ; 0048862d
    MOVQ MM2,MM3                        ; 00488630
    MOVQ MM4,MM5                        ; 00488633
    PXOR MM2,qword ptr [0x0061a358]     ; 00488636 | DAT_0061a358
    PMULHW MM0,MM2                      ; 0048863d
    PMULHW MM1,MM2                      ; 00488640
    PMULHW MM4,MM3                      ; 00488643
    PADDW MM0,MM4                       ; 00488646
    PADDW MM1,MM4                       ; 00488649
    PADDW MM0,qword ptr [0x006185f8]    ; 0048864c | DAT_006185f8
    PADDW MM1,qword ptr [0x00618600]    ; 00488653 | DAT_00618600
    PSRLW MM0,0x4                       ; 0048865a
    PSRLW MM1,0x4                       ; 0048865e
    PACKUSWB MM0,MM1                    ; 00488662
    ADD ESI,0x8                         ; 00488665
    INC EBX                             ; 00488668
    INC EBP                             ; 00488669
    MOVQ qword ptr [EDI],MM0            ; 0048866a
    ADD EDI,0x8                         ; 0048866d
    SUB ECX,0x2                         ; 00488670
    JG 0x004885d0                       ; 00488673
        ;   XREF to: 004885d0 (CONDITIONAL_JUMP)  ; LAB_004885d0
    POP EBP                             ; 00488679
    EMMS                                ; 0048867a
    POP EDI                             ; 0048867c
    POP ESI                             ; 0048867d
    LEAVE                               ; 0048867e
    RET                                 ; 0048867f

