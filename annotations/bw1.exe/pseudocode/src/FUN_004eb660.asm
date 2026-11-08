; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004eb660(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_004c65f0 at 004c78f4
;   FUN_004e9250 at 004e970a
;   FUN_004eca10 at 004ecae8
;   FUN_004f0e50 at 004f142f
;   FUN_00591120 at 00591374
;   FUN_00593150 at 005936f4
;
; Referenced Globals:
;   undefined4 DAT_005e485d
;   undefined4 DAT_005e4865
;   undefined4 DAT_00622c18
;   undefined4 DAT_01d1c21c
;   undefined4 DAT_01fcf2cc
;   undefined4 DAT_01fcf2d0
;
; Called Functions:
;   FUN_00408bb0
;   FUN_0040c600
;   FUN_004ff970
;   FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb660
        ;   Label: FUN_004eb660
    PUSH ESI                            ; 004eb661
    PUSH EDI                            ; 004eb662
    PUSH EBP                            ; 004eb663
    MOV EBP,ESP                         ; 004eb664
    SUB ESP,0x50                        ; 004eb666
    AND ESP,0xfffffff8                  ; 004eb669
    MOV EDX,0x7149f2ca                  ; 004eb66c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb671
    XOR ECX,ECX                         ; 004eb674
    MOV dword ptr [ESP + 0x3c],EDX      ; 004eb676
    MOV dword ptr [ESP + 0x48],ECX      ; 004eb67a
    ADD EAX,0x20                        ; 004eb67e
    MOV dword ptr [ESP + 0x4c],ECX      ; 004eb681
    MOV dword ptr [ESP + 0x38],EAX      ; 004eb685
    MOV EBX,dword ptr [0x00622c18]      ; 004eb689 | DAT_00622c18
        ;   Label: LAB_004eb689
    MOV EAX,dword ptr [ESP + 0x48]      ; 004eb68f
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004eb693 | DAT_01fcf2cc
    JL 0x004eb6b4                       ; 004eb699
        ;   XREF to: 004eb6b4 (CONDITIONAL_JUMP)  ; LAB_004eb6b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb69b
    CMP dword ptr [EAX + 0x1ff60],0x7   ; 004eb69e
    SETZ AL                             ; 004eb6a5
    AND EAX,0xff                        ; 004eb6a8
    MOV ESP,EBP                         ; 004eb6ad
    POP EBP                             ; 004eb6af
    POP EDI                             ; 004eb6b0
    POP ESI                             ; 004eb6b1
    POP EBX                             ; 004eb6b2
    RET                                 ; 004eb6b3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004eb6b4
        ;   Label: LAB_004eb6b4
    MOV EDI,dword ptr [0x01d1c21c]      ; 004eb6b8 | DAT_01d1c21c
    ADD EBX,EAX                         ; 004eb6be
    PUSH EDI                            ; 004eb6c0
    MOV EDX,dword ptr [EBX + 0x14d168]  ; 004eb6c1 | DAT_01fcf2d0
    PUSH EDX                            ; 004eb6c7
    CALL FUN_0040c600                   ; 004eb6c8
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV EBX,EAX                         ; 004eb6cd
    ADD ESP,0x8                         ; 004eb6cf
    TEST EAX,EAX                        ; 004eb6d2
    JZ 0x004eb7cc                       ; 004eb6d4
        ;   XREF to: 004eb7cc (CONDITIONAL_JUMP)  ; LAB_004eb7cc
    ADD EAX,0x20                        ; 004eb6da
    PUSH EAX                            ; 004eb6dd
    MOV ECX,dword ptr [EBP + 0x14]      ; 004eb6de
    PUSH ECX                            ; 004eb6e1
    LEA ESI,[ESP + 0x34]                ; 004eb6e2
    LEA EDI,[ESP + 0x28]                ; 004eb6e6
    CALL FUN_00408bb0                   ; 004eb6ea
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x34]                ; 004eb6ef
    ADD ESP,0x8                         ; 004eb6f3
    MOVSD ES:EDI,ESI                    ; 004eb6f6
    MOVSD ES:EDI,ESI                    ; 004eb6f7
    MOVSD ES:EDI,ESI                    ; 004eb6f8
    FLD float ptr [ESP + 0x24]          ; 004eb6f9
    FABS                                ; 004eb6fd
    FCOMP double ptr [0x005e485d]       ; 004eb6ff | DAT_005e485d
    FNSTSW AX                           ; 004eb705
    SAHF                                ; 004eb707
    JA 0x004eb7cc                       ; 004eb708
        ;   XREF to: 004eb7cc (CONDITIONAL_JUMP)  ; LAB_004eb7cc
    FLD float ptr [ESP + 0x28]          ; 004eb70e
    FLDZ                                ; 004eb712
    FXCH                                ; 004eb714
    FSTP double ptr [ESP]               ; 004eb716
    FCOMP double ptr [ESP]              ; 004eb719
    FNSTSW AX                           ; 004eb71c
    SAHF                                ; 004eb71e
    JA 0x004eb7cc                       ; 004eb71f
        ;   XREF to: 004eb7cc (CONDITIONAL_JUMP)  ; LAB_004eb7cc
    FLD double ptr [ESP]                ; 004eb725
    FCOMP double ptr [0x005e4865]       ; 004eb728 | DAT_005e4865
    FNSTSW AX                           ; 004eb72e
    SAHF                                ; 004eb730
    JA 0x004eb7cc                       ; 004eb731
        ;   XREF to: 004eb7cc (CONDITIONAL_JUMP)  ; LAB_004eb7cc
    FLD float ptr [ESP + 0x20]          ; 004eb737
    FABS                                ; 004eb73b
    FCOMP double ptr [0x005e4865]       ; 004eb73d | DAT_005e4865
    FNSTSW AX                           ; 004eb743
    SAHF                                ; 004eb745
    JA 0x004eb7cc                       ; 004eb746
        ;   XREF to: 004eb7cc (CONDITIONAL_JUMP)  ; LAB_004eb7cc
    LEA EAX,[ESP + 0x20]                ; 004eb74c
    PUSH EAX                            ; 004eb750
    LEA ESI,[ESP + 0xc]                 ; 004eb751
    LEA EDI,[ESP + 0x18]                ; 004eb755
    CALL FUN_005a7520                   ; 004eb759
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0xc]                 ; 004eb75e
    ADD ESP,0x4                         ; 004eb762
    MOVSD ES:EDI,ESI                    ; 004eb765
    MOVSD ES:EDI,ESI                    ; 004eb766
    MOVSD ES:EDI,ESI                    ; 004eb767
    FLD float ptr [ESP + 0x18]          ; 004eb768
    FABS                                ; 004eb76c
    FSTP float ptr [ESP + 0x40]         ; 004eb76e
    CMP dword ptr [ESP + 0x40],0x3f860a92 ; 004eb772
    JG 0x004eb7cc                       ; 004eb77a
        ;   XREF to: 004eb7cc (CONDITIONAL_JUMP)  ; LAB_004eb7cc
    MOV EDI,dword ptr [ESP + 0x38]      ; 004eb77c
    PUSH EDI                            ; 004eb780
    PUSH EBX                            ; 004eb781
    CALL FUN_004ff970                   ; 004eb782
        ;   XREF to: 004ff970 (UNCONDITIONAL_CALL)  ; undefined FUN_004ff970()
    ADD ESP,0x8                         ; 004eb787
    TEST EAX,EAX                        ; 004eb78a
    JZ 0x004eb7cc                       ; 004eb78c
        ;   XREF to: 004eb7cc (CONDITIONAL_JUMP)  ; LAB_004eb7cc
    FLD float ptr [ESP + 0x40]          ; 004eb78e
    FCHS                                ; 004eb792
    FST float ptr [ESP + 0x44]          ; 004eb794
    FCOMP float ptr [ESP + 0x3c]        ; 004eb798
    FNSTSW AX                           ; 004eb79c
    SAHF                                ; 004eb79e
    JA 0x004eb7cc                       ; 004eb79f
        ;   XREF to: 004eb7cc (CONDITIONAL_JUMP)  ; LAB_004eb7cc
    MOV EAX,dword ptr [ESP + 0x44]      ; 004eb7a1
    MOV dword ptr [ESP + 0x3c],EAX      ; 004eb7a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb7a9
    MOV dword ptr [EAX + 0x1ff60],0x7   ; 004eb7ac
    MOV dword ptr [EAX + 0x1ff70],0x0   ; 004eb7b6
    MOV dword ptr [EAX + 0x1ff64],EBX   ; 004eb7c0
    MOV dword ptr [EAX + 0x1ff68],EBX   ; 004eb7c6
    MOV EDX,dword ptr [ESP + 0x48]      ; 004eb7cc
        ;   Label: LAB_004eb7cc
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004eb7d0
    INC EDX                             ; 004eb7d4
    ADD EAX,0x4                         ; 004eb7d5
    MOV dword ptr [ESP + 0x48],EDX      ; 004eb7d8
    MOV dword ptr [ESP + 0x4c],EAX      ; 004eb7dc
    JMP 0x004eb689                      ; 004eb7e0
        ;   XREF to: 004eb689 (UNCONDITIONAL_JUMP)  ; LAB_004eb689

