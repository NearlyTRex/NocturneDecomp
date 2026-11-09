; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_box.cpp_FUN_004207b0 at 00420971
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0152d2a4
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_004657c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004205e0
        ;   Label: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0
    SUB ESP,0x1c                        ; 004205e1
    CMP dword ptr [0x0152d2a4],0x0      ; 004205e4 | DAT_0152d2a4
    JZ 0x0042076d                       ; 004205eb
        ;   XREF to: 0042076d (CONDITIONAL_JUMP)  ; LAB_0042076d
    PUSH EDI                            ; 004205f1
    PUSH ESI                            ; 004205f2
    PUSH EBX                            ; 004205f3
    MOV EDX,dword ptr [0x00612560]      ; 004205f4 | DAT_00612560
    MOV EAX,[0x01c4f000]                ; 004205fa | DAT_01c4f000
    MOV ECX,dword ptr [0x01c4eff8]      ; 004205ff | DAT_01c4eff8
    MOV EDI,dword ptr [0x01c4f000]      ; 00420605 | DAT_01c4f000
    MOV ESI,dword ptr [0x01c4effc]      ; 0042060b | DAT_01c4effc
    MOV EBP,dword ptr [0x01c4f004]      ; 00420611 | DAT_01c4f004
    MOV EDX,dword ptr [EDX]             ; 00420617 | DAT_01bc120c
    ADD EAX,ECX                         ; 00420619
    SUB EDI,ECX                         ; 0042061b
    MOV dword ptr [ESP + 0x20],EAX      ; 0042061d
    MOV EAX,[0x01c4f004]                ; 00420621 | DAT_01c4f004
    ADD EBP,ESI                         ; 00420626
    SUB EAX,ESI                         ; 00420628
    MOV ESI,EDX                         ; 0042062a
    ADD EDX,0x180                       ; 0042062c
    MOV dword ptr [ESP + 0x24],EAX      ; 00420632
    MOV dword ptr [ESP + 0x1c],EDX      ; 00420636
    MOV AH,byte ptr [ESI + 0x13]        ; 0042063a
        ;   Label: LAB_0042063a
    MOV ECX,ESI                         ; 0042063d
    TEST AH,0x80                        ; 0042063f
    JZ 0x00420777                       ; 00420642
        ;   XREF to: 00420777 (CONDITIONAL_JUMP)  ; LAB_00420777
    MOV EAX,dword ptr [ESI + 0x8]       ; 00420648
    MOV EDX,dword ptr [ESI]             ; 0042064b
    NEG EAX                             ; 0042064d
    CMP EAX,EDX                         ; 0042064f
    JGE 0x0042067c                      ; 00420651
        ;   XREF to: 0042067c (CONDITIONAL_JUMP)  ; LAB_0042067c
    MOV EBX,dword ptr [ESI + 0x8]       ; 00420653
    CMP EDX,EBX                         ; 00420656
    JGE 0x0042067c                      ; 00420658
        ;   XREF to: 0042067c (CONDITIONAL_JUMP)  ; LAB_0042067c
    MOV EDX,dword ptr [0x01c4eff8]      ; 0042065a | DAT_01c4eff8
    MOV EAX,dword ptr [ESI]             ; 00420660
    IMUL EDX                            ; 00420662
    IDIV EBX                            ; 00420664
    ADD EAX,dword ptr [0x01c4f000]      ; 00420666 | DAT_01c4f000
    CMP EAX,EDI                         ; 0042066c
    JLE 0x00420672                      ; 0042066e
        ;   XREF to: 00420672 (CONDITIONAL_JUMP)  ; LAB_00420672
    MOV EDI,EAX                         ; 00420670
    CMP EAX,dword ptr [ESP + 0x20]      ; 00420672
        ;   Label: LAB_00420672
    JGE 0x0042067c                      ; 00420676
        ;   XREF to: 0042067c (CONDITIONAL_JUMP)  ; LAB_0042067c
    MOV dword ptr [ESP + 0x20],EAX      ; 00420678
    MOV EAX,dword ptr [ECX + 0x8]       ; 0042067c
        ;   Label: LAB_0042067c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0042067f
    NEG EAX                             ; 00420682
    CMP EAX,EDX                         ; 00420684
    JGE 0x004206b2                      ; 00420686
        ;   XREF to: 004206b2 (CONDITIONAL_JUMP)  ; LAB_004206b2
    MOV EBX,dword ptr [ECX + 0x8]       ; 00420688
    CMP EDX,EBX                         ; 0042068b
    JGE 0x004206b2                      ; 0042068d
        ;   XREF to: 004206b2 (CONDITIONAL_JUMP)  ; LAB_004206b2
    MOV EDX,dword ptr [0x01c4effc]      ; 0042068f | DAT_01c4effc
    MOV EAX,dword ptr [ECX + 0x4]       ; 00420695
    IMUL EDX                            ; 00420698
    IDIV EBX                            ; 0042069a
    ADD EAX,dword ptr [0x01c4f004]      ; 0042069c | DAT_01c4f004
    CMP EAX,EBP                         ; 004206a2
    JLE 0x004206a8                      ; 004206a4
        ;   XREF to: 004206a8 (CONDITIONAL_JUMP)  ; LAB_004206a8
    MOV EBP,EAX                         ; 004206a6
    CMP EAX,dword ptr [ESP + 0x24]      ; 004206a8
        ;   Label: LAB_004206a8
    JGE 0x004206b2                      ; 004206ac
        ;   XREF to: 004206b2 (CONDITIONAL_JUMP)  ; LAB_004206b2
    MOV dword ptr [ESP + 0x24],EAX      ; 004206ae
    MOV EDX,dword ptr [ECX + 0x8]       ; 004206b2
        ;   Label: LAB_004206b2
    CMP EDX,dword ptr [ECX]             ; 004206b5
    JG 0x004206c7                       ; 004206b7
        ;   XREF to: 004206c7 (CONDITIONAL_JUMP)  ; LAB_004206c7
    MOV EBX,dword ptr [0x01c4f000]      ; 004206b9 | DAT_01c4f000
    MOV EDI,dword ptr [0x01c4eff8]      ; 004206bf | DAT_01c4eff8
    ADD EDI,EBX                         ; 004206c5
    MOV EAX,dword ptr [ECX + 0x8]       ; 004206c7
        ;   Label: LAB_004206c7
    MOV EDX,dword ptr [ECX]             ; 004206ca
    NEG EAX                             ; 004206cc
    CMP EAX,EDX                         ; 004206ce
    JL 0x004206e3                       ; 004206d0
        ;   XREF to: 004206e3 (CONDITIONAL_JUMP)  ; LAB_004206e3
    MOV EBX,dword ptr [0x01c4eff8]      ; 004206d2 | DAT_01c4eff8
    MOV EAX,[0x01c4f000]                ; 004206d8 | DAT_01c4f000
    SUB EAX,EBX                         ; 004206dd
    MOV dword ptr [ESP + 0x20],EAX      ; 004206df
    MOV EDX,dword ptr [ECX + 0x8]       ; 004206e3
        ;   Label: LAB_004206e3
    CMP EDX,dword ptr [ECX + 0x4]       ; 004206e6
    JG 0x004206fc                       ; 004206e9
        ;   XREF to: 004206fc (CONDITIONAL_JUMP)  ; LAB_004206fc
    MOV EBX,dword ptr [0x01c4f004]      ; 004206eb | DAT_01c4f004
    MOV EAX,[0x01c4effc]                ; 004206f1 | DAT_01c4effc
    ADD EAX,EBX                         ; 004206f6
    MOV dword ptr [ESP + 0x24],EAX      ; 004206f8
    MOV EAX,dword ptr [ECX + 0x8]       ; 004206fc
        ;   Label: LAB_004206fc
    MOV EDX,dword ptr [ECX + 0x4]       ; 004206ff
    NEG EAX                             ; 00420702
    CMP EAX,EDX                         ; 00420704
    JL 0x00420716                       ; 00420706
        ;   XREF to: 00420716 (CONDITIONAL_JUMP)  ; LAB_00420716
    MOV ECX,dword ptr [0x01c4effc]      ; 00420708 | DAT_01c4effc
    MOV EBP,dword ptr [0x01c4f004]      ; 0042070e | DAT_01c4f004
    SUB EBP,ECX                         ; 00420714
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00420716
        ;   Label: LAB_00420716
    ADD ESI,0x30                        ; 0042071a
    CMP ESI,EBX                         ; 0042071d
    JNZ 0x0042063a                      ; 0042071f
        ;   XREF to: 0042063a (CONDITIONAL_JUMP)  ; LAB_0042063a
    MOV ESI,dword ptr [ESP + 0x20]      ; 00420725
    MOV EAX,dword ptr [ESP + 0x24]      ; 00420729
    MOV EDX,dword ptr [0x0152d2a4]      ; 0042072d | DAT_0152d2a4
    SAR EDI,0x10                        ; 00420733
    SAR EAX,0x10                        ; 00420736
    SAR EBP,0x10                        ; 00420739
    MOV dword ptr [ESP + 0x24],EAX      ; 0042073c
    MOV dword ptr [ESP + 0x14],EAX      ; 00420740
    LEA EAX,[ESP + 0xc]                 ; 00420744
    SAR ESI,0x10                        ; 00420748
    PUSH EAX                            ; 0042074b
    MOV dword ptr [ESP + 0x14],EDI      ; 0042074c
    MOV dword ptr [ESP + 0x1c],EBP      ; 00420750
    PUSH EDX                            ; 00420754
    MOV dword ptr [ESP + 0x28],ESI      ; 00420755
    MOV dword ptr [ESP + 0x14],ESI      ; 00420759
    CALL core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_004657c0 ; 0042075d
        ;   XREF to: 004657c0 (UNCONDITIONAL_CALL)  ; int core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_004657c0(CDemonLight * this_ptr, CRect * rect)
    ADD ESP,0x8                         ; 00420762
    POP EBX                             ; 00420765
    POP ESI                             ; 00420766
    POP EDI                             ; 00420767
    ADD ESP,0x1c                        ; 00420768
    POP EBP                             ; 0042076b
    RET                                 ; 0042076c
    MOV EAX,0x1                         ; 0042076d
        ;   Label: LAB_0042076d
    ADD ESP,0x1c                        ; 00420772
    POP EBP                             ; 00420775
    RET                                 ; 00420776
    MOV EAX,dword ptr [ESP + 0x20]      ; 00420777
        ;   Label: LAB_00420777
    MOV EDX,dword ptr [ESI + 0x10]      ; 0042077b
    CMP EAX,EDX                         ; 0042077e
    JLE 0x00420786                      ; 00420780
        ;   XREF to: 00420786 (CONDITIONAL_JUMP)  ; LAB_00420786
    MOV dword ptr [ESP + 0x20],EDX      ; 00420782
    MOV EBX,dword ptr [ECX + 0x10]      ; 00420786
        ;   Label: LAB_00420786
    CMP EDI,EBX                         ; 00420789
    JGE 0x0042078f                      ; 0042078b
        ;   XREF to: 0042078f (CONDITIONAL_JUMP)  ; LAB_0042078f
    MOV EDI,EBX                         ; 0042078d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042078f
        ;   Label: LAB_0042078f
    MOV EDX,dword ptr [ECX + 0x14]      ; 00420793
    CMP EAX,EDX                         ; 00420796
    JLE 0x0042079e                      ; 00420798
        ;   XREF to: 0042079e (CONDITIONAL_JUMP)  ; LAB_0042079e
    MOV dword ptr [ESP + 0x24],EDX      ; 0042079a
    MOV EBX,dword ptr [ECX + 0x14]      ; 0042079e
        ;   Label: LAB_0042079e
    CMP EBP,EBX                         ; 004207a1
    JGE 0x00420716                      ; 004207a3
        ;   XREF to: 00420716 (CONDITIONAL_JUMP)  ; LAB_00420716
    MOV EBP,EBX                         ; 004207a9
    JMP 0x00420716                      ; 004207ab
        ;   XREF to: 00420716 (UNCONDITIONAL_JUMP)  ; LAB_00420716

