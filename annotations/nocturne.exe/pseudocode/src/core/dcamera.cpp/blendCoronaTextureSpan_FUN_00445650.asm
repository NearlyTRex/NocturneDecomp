; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00445750 at 004459f8
;
; Referenced Globals:
;   undefined4 DAT_014b8458
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445650
        ;   Label: core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650
    PUSH ESI                            ; 00445651
    PUSH EDI                            ; 00445652
    PUSH EBP                            ; 00445653
    MOV EBP,ESP                         ; 00445654
    SUB ESP,0x10                        ; 00445656
    MOV ECX,dword ptr [EBP + 0x18]      ; 00445659
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044565c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044565f
    ADD EAX,EDX                         ; 00445666
    MOV EDX,0xa9d078                    ; 00445668
    SHL EAX,0x6                         ; 0044566d
    ADD EDX,EAX                         ; 00445670
    ADD EDX,ECX                         ; 00445672
    MOV dword ptr [EBP + -0x10],EDX     ; 00445674
    MOV EDX,dword ptr [EBP + 0x20]      ; 00445677
    ADD EDX,0x784                       ; 0044567a
    ADD EAX,EDX                         ; 00445680
    ADD EAX,ECX                         ; 00445682
    MOV dword ptr [EBP + -0xc],EAX      ; 00445684
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00445687
    SUB EAX,ECX                         ; 0044568a
    MOV dword ptr [EBP + -0x8],EAX      ; 0044568c
    MOV EAX,[0x014b8458]                ; 0044568f | DAT_014b8458
    MOV EAX,dword ptr [EAX + 0x3c]      ; 00445694
    MOV dword ptr [EBP + -0x4],EAX      ; 00445697
    MOV ECX,dword ptr [EBP + 0xfffffff8] ; 0044569a
    MOV ESI,dword ptr [EBP + 0xfffffff4] ; 004456a0
    MOV EDI,dword ptr [EBP + 0xfffffff0] ; 004456a6
    MOV EBX,dword ptr [EBP + 0xfffffffc] ; 004456ac
    SHR EBX,0xa                         ; 004456b2
    PXOR MM7,MM7                        ; 004456b5
    MOVD MM3,EBX                        ; 004456b8
    MOVD MM4,EBX                        ; 004456bb
    MOVD MM5,EBX                        ; 004456be
    MOVD MM6,EBX                        ; 004456c1
    PSLLQ MM3,0x18                      ; 004456c4
    PSLLQ MM4,0x10                      ; 004456c8
    PSLLQ MM5,0x8                       ; 004456cc
    POR MM6,MM3                         ; 004456d0
    POR MM6,MM4                         ; 004456d3
    POR MM6,MM5                         ; 004456d6
    PUNPCKLBW MM6,MM7                   ; 004456d9
    TEST EDI,0x3                        ; 004456dc
        ;   Label: LAB_004456dc
    JZ 0x004456fb                       ; 004456e2
        ;   XREF to: 004456fb (CONDITIONAL_JUMP)  ; LAB_004456fb
    MOVZX EAX,byte ptr [ESI]            ; 004456e4
    SHL EAX,0x6                         ; 004456e7
    ADD EAX,EBX                         ; 004456ea
    MOV AL,byte ptr [EAX + 0x12cdb58]   ; 004456ec
    ADD byte ptr [EDI],AL               ; 004456f2
    INC ESI                             ; 004456f4
    INC EDI                             ; 004456f5
    DEC ECX                             ; 004456f6
    JG 0x004456dc                       ; 004456f7
        ;   XREF to: 004456dc (CONDITIONAL_JUMP)  ; LAB_004456dc
    JMP 0x0044573b                      ; 004456f9
        ;   XREF to: 0044573b (UNCONDITIONAL_JUMP)  ; LAB_0044573b
    SUB ECX,0x4                         ; 004456fb
        ;   Label: LAB_004456fb
    JL 0x00445721                       ; 004456fe
        ;   XREF to: 00445721 (CONDITIONAL_JUMP)  ; LAB_00445721
    MOVD MM0,dword ptr [ESI]            ; 00445700
    MOVD MM1,dword ptr [EDI]            ; 00445703
    PUNPCKLBW MM0,MM7                   ; 00445706
    PMULLW MM0,MM6                      ; 00445709
    PSRLW MM0,0x6                       ; 0044570c
    PACKUSWB MM0,MM7                    ; 00445710
    PADDW MM0,MM1                       ; 00445713
    MOVD dword ptr [EDI],MM0            ; 00445716
    ADD ESI,0x4                         ; 00445719
    ADD EDI,0x4                         ; 0044571c
    JMP 0x004456fb                      ; 0044571f
        ;   XREF to: 004456fb (UNCONDITIONAL_JUMP)  ; LAB_004456fb
    ADD ECX,0x4                         ; 00445721
        ;   Label: LAB_00445721
    JZ 0x0044573b                       ; 00445724
        ;   XREF to: 0044573b (CONDITIONAL_JUMP)  ; LAB_0044573b
    MOVZX EAX,byte ptr [ESI]            ; 00445726
        ;   Label: LAB_00445726
    SHL EAX,0x6                         ; 00445729
    ADD EAX,EBX                         ; 0044572c
    MOV AL,byte ptr [EAX + 0x12cdb58]   ; 0044572e
    ADD byte ptr [EDI],AL               ; 00445734
    INC ESI                             ; 00445736
    INC EDI                             ; 00445737
    DEC ECX                             ; 00445738
    JG 0x00445726                       ; 00445739
        ;   XREF to: 00445726 (CONDITIONAL_JUMP)  ; LAB_00445726
    EMMS                                ; 0044573b
        ;   Label: LAB_0044573b
    MOV ESP,EBP                         ; 0044573d
    POP EBP                             ; 0044573f
    POP EDI                             ; 00445740
    POP ESI                             ; 00445741
    POP EBX                             ; 00445742
    RET                                 ; 00445743

