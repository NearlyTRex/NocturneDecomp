; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_0044e590(int scanline_y,int x_start,int x_end,SCoronaLightEntry *source_entry)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
; SCoronaLightEntry * Stack[0x10]:4   source_entry
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690 at 0044e938
;
; Referenced Globals:
;   undefined4 DAT_015484c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e590
        ;   Label: core_dcamera.cpp_blendCoronaTextureSpan_FUN_0044e590
    PUSH ESI                            ; 0044e591
    PUSH EDI                            ; 0044e592
    PUSH EBP                            ; 0044e593
    MOV EBP,ESP                         ; 0044e594
    SUB ESP,0x10                        ; 0044e596
    MOV ECX,dword ptr [EBP + 0x18]      ; 0044e599
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044e59c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044e59f
    ADD EAX,EDX                         ; 0044e5a6
    MOV EDX,0xb2cfc8                    ; 0044e5a8
    SHL EAX,0x6                         ; 0044e5ad
    ADD EDX,EAX                         ; 0044e5b0
    ADD EDX,ECX                         ; 0044e5b2
    MOV dword ptr [EBP + -0x10],EDX     ; 0044e5b4
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044e5b7
    ADD EDX,0x784                       ; 0044e5ba
    ADD EAX,EDX                         ; 0044e5c0
    ADD EAX,ECX                         ; 0044e5c2
    MOV dword ptr [EBP + -0xc],EAX      ; 0044e5c4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044e5c7
    SUB EAX,ECX                         ; 0044e5ca
    MOV dword ptr [EBP + -0x8],EAX      ; 0044e5cc
    MOV EAX,[0x015484c8]                ; 0044e5cf | DAT_015484c8
    MOV EAX,dword ptr [EAX + 0x3c]      ; 0044e5d4
    MOV dword ptr [EBP + -0x4],EAX      ; 0044e5d7
    MOV ECX,dword ptr [EBP + 0xfffffff8] ; 0044e5da
    MOV ESI,dword ptr [EBP + 0xfffffff4] ; 0044e5e0
    MOV EDI,dword ptr [EBP + 0xfffffff0] ; 0044e5e6
    MOV EBX,dword ptr [EBP + 0xfffffffc] ; 0044e5ec
    SHR EBX,0xa                         ; 0044e5f2
    PXOR MM7,MM7                        ; 0044e5f5
    MOVD MM3,EBX                        ; 0044e5f8
    MOVD MM4,EBX                        ; 0044e5fb
    MOVD MM5,EBX                        ; 0044e5fe
    MOVD MM6,EBX                        ; 0044e601
    PSLLQ MM3,0x18                      ; 0044e604
    PSLLQ MM4,0x10                      ; 0044e608
    PSLLQ MM5,0x8                       ; 0044e60c
    POR MM6,MM3                         ; 0044e610
    POR MM6,MM4                         ; 0044e613
    POR MM6,MM5                         ; 0044e616
    PUNPCKLBW MM6,MM7                   ; 0044e619
    TEST EDI,0x3                        ; 0044e61c
        ;   Label: LAB_0044e61c
    JZ 0x0044e63b                       ; 0044e622
        ;   XREF to: 0044e63b (CONDITIONAL_JUMP)  ; LAB_0044e63b
    MOVZX EAX,byte ptr [ESI]            ; 0044e624
    SHL EAX,0x6                         ; 0044e627
    ADD EAX,EBX                         ; 0044e62a
    MOV AL,byte ptr [EAX + 0x135dab0]   ; 0044e62c
    ADD byte ptr [EDI],AL               ; 0044e632
    INC ESI                             ; 0044e634
    INC EDI                             ; 0044e635
    DEC ECX                             ; 0044e636
    JG 0x0044e61c                       ; 0044e637
        ;   XREF to: 0044e61c (CONDITIONAL_JUMP)  ; LAB_0044e61c
    JMP 0x0044e67b                      ; 0044e639
        ;   XREF to: 0044e67b (UNCONDITIONAL_JUMP)  ; LAB_0044e67b
    SUB ECX,0x4                         ; 0044e63b
        ;   Label: LAB_0044e63b
    JL 0x0044e661                       ; 0044e63e
        ;   XREF to: 0044e661 (CONDITIONAL_JUMP)  ; LAB_0044e661
    MOVD MM0,dword ptr [ESI]            ; 0044e640
    MOVD MM1,dword ptr [EDI]            ; 0044e643
    PUNPCKLBW MM0,MM7                   ; 0044e646
    PMULLW MM0,MM6                      ; 0044e649
    PSRLW MM0,0x6                       ; 0044e64c
    PACKUSWB MM0,MM7                    ; 0044e650
    PADDW MM0,MM1                       ; 0044e653
    MOVD dword ptr [EDI],MM0            ; 0044e656
    ADD ESI,0x4                         ; 0044e659
    ADD EDI,0x4                         ; 0044e65c
    JMP 0x0044e63b                      ; 0044e65f
        ;   XREF to: 0044e63b (UNCONDITIONAL_JUMP)  ; LAB_0044e63b
    ADD ECX,0x4                         ; 0044e661
        ;   Label: LAB_0044e661
    JZ 0x0044e67b                       ; 0044e664
        ;   XREF to: 0044e67b (CONDITIONAL_JUMP)  ; LAB_0044e67b
    MOVZX EAX,byte ptr [ESI]            ; 0044e666
        ;   Label: LAB_0044e666
    SHL EAX,0x6                         ; 0044e669
    ADD EAX,EBX                         ; 0044e66c
    MOV AL,byte ptr [EAX + 0x135dab0]   ; 0044e66e
    ADD byte ptr [EDI],AL               ; 0044e674
    INC ESI                             ; 0044e676
    INC EDI                             ; 0044e677
    DEC ECX                             ; 0044e678
    JG 0x0044e666                       ; 0044e679
        ;   XREF to: 0044e666 (CONDITIONAL_JUMP)  ; LAB_0044e666
    EMMS                                ; 0044e67b
        ;   Label: LAB_0044e67b
    MOV ESP,EBP                         ; 0044e67d
    POP EBP                             ; 0044e67f
    POP EDI                             ; 0044e680
    POP ESI                             ; 0044e681
    POP EBX                             ; 0044e682
    RET                                 ; 0044e683

