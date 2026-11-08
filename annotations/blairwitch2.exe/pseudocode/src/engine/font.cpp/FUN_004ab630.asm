; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ab630(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004a7d00 at 004a7f4e
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005d6a28
;   TerminatedCString s_CBitFont_remapPalette_In_005d6a3b
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab630
        ;   Label: FUN_004ab630
    PUSH ESI                            ; 004ab631
    PUSH EDI                            ; 004ab632
    PUSH EBP                            ; 004ab633
    SUB ESP,0x28                        ; 004ab634
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ab637
    XOR EDX,EDX                         ; 004ab63b
    MOV ECX,dword ptr [EAX]             ; 004ab63d
    MOV dword ptr [ESP + 0x1c],EDX      ; 004ab63f
    TEST ECX,ECX                        ; 004ab643
    JLE 0x004ab707                      ; 004ab645
        ;   XREF to: 004ab707 (CONDITIONAL_JUMP)  ; LAB_004ab707
    ADD EAX,0x400                       ; 004ab64b
    MOV dword ptr [ESP + 0x14],EAX      ; 004ab650
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ab654
    MOV dword ptr [ESP + 0x18],EAX      ; 004ab658
    MOV dword ptr [ESP + 0xc],EAX       ; 004ab65c
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ab660
        ;   Label: LAB_004ab660
    MOV dword ptr [ESP + 0x20],EAX      ; 004ab664
    MOV dword ptr [ESP + 0x24],EAX      ; 004ab668
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ab66c
    MOV EBP,dword ptr [ESP + 0x18]      ; 004ab670
    MOV dword ptr [ESP + 0x10],EAX      ; 004ab674
    MOV EAX,[0x006141c0]                ; 004ab678 | DAT_006141c0
        ;   Label: LAB_004ab678
    MOVZX EDI,byte ptr [EBP + 0x1b5]    ; 004ab67d
    XOR EBX,EBX                         ; 004ab684
    MOVZX ESI,byte ptr [EBP + 0x1b4]    ; 004ab686
    MOV BL,byte ptr [EBP + 0x1b6]       ; 004ab68d
    CMP EAX,0x10                        ; 004ab693
    JNC 0x004ab7d0                      ; 004ab696
        ;   XREF to: 004ab7d0 (CONDITIONAL_JUMP)  ; LAB_004ab7d0
    CMP EAX,0x8                         ; 004ab69c
    JNZ 0x004ab7db                      ; 004ab69f
        ;   XREF to: 004ab7db (CONDITIONAL_JUMP)  ; LAB_004ab7db
    MOV ECX,dword ptr [ESP + 0x20]      ; 004ab6a5
        ;   Label: LAB_004ab6a5
    MOV EBX,dword ptr [ESP + 0x24]      ; 004ab6a9
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ab6ad
    ADD EBP,0x3                         ; 004ab6b1
    ADD ECX,0x4                         ; 004ab6b4
    ADD EBX,0x4                         ; 004ab6b7
    MOV dword ptr [ESP + 0x20],ECX      ; 004ab6ba
    MOV dword ptr [ESP + 0x24],EBX      ; 004ab6be
    CMP EBX,ESI                         ; 004ab6c2
    JNZ 0x004ab678                      ; 004ab6c4
        ;   XREF to: 004ab678 (CONDITIONAL_JUMP)  ; LAB_004ab678
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ab6c6
    MOV ESI,dword ptr [ESP + 0x18]      ; 004ab6ca
    MOV EDI,dword ptr [ESP + 0xc]       ; 004ab6ce
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004ab6d2
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004ab6d6
    ADD EBX,0x400                       ; 004ab6da
    ADD ESI,0x300                       ; 004ab6e0
    ADD EDI,0x400                       ; 004ab6e6
    INC EBP                             ; 004ab6ec
    MOV EDX,dword ptr [ECX]             ; 004ab6ed
    MOV dword ptr [ESP + 0x14],EBX      ; 004ab6ef
    MOV dword ptr [ESP + 0x18],ESI      ; 004ab6f3
    MOV dword ptr [ESP + 0xc],EDI       ; 004ab6f7
    MOV dword ptr [ESP + 0x1c],EBP      ; 004ab6fb
    CMP EBP,EDX                         ; 004ab6ff
    JL 0x004ab660                       ; 004ab701
        ;   XREF to: 004ab660 (CONDITIONAL_JUMP)  ; LAB_004ab660
    ADD ESP,0x28                        ; 004ab707
        ;   Label: LAB_004ab707
    POP EBP                             ; 004ab70a
    POP EDI                             ; 004ab70b
    POP ESI                             ; 004ab70c
    POP EBX                             ; 004ab70d
    RET                                 ; 004ab70e
    MOV ECX,dword ptr [0x01c35818]      ; 004ab70f | DAT_01c35818
        ;   Label: LAB_004ab70f
    MOV EAX,ESI                         ; 004ab715
    XOR EDX,EDX                         ; 004ab717
    DIV ECX                             ; 004ab719
    MOV dword ptr [ESP],ESI             ; 004ab71b
    MOV ESI,dword ptr [0x01c35824]      ; 004ab71e | DAT_01c35824
    MOV dword ptr [ESP],EAX             ; 004ab724
    XOR EDX,EDX                         ; 004ab727
    MOV EAX,EDI                         ; 004ab729
    DIV ESI                             ; 004ab72b
    MOV dword ptr [ESP + 0x4],EDI       ; 004ab72d
    MOV EDI,dword ptr [0x01c35830]      ; 004ab731 | DAT_01c35830
    MOV dword ptr [ESP + 0x4],EAX       ; 004ab737
    XOR EDX,EDX                         ; 004ab73b
    MOV EAX,EBX                         ; 004ab73d
    DIV EDI                             ; 004ab73f
    MOV dword ptr [ESP + 0x8],EBX       ; 004ab741
    MOV CL,byte ptr [0x01c35814]        ; 004ab745 | DAT_01c35814
    MOV dword ptr [ESP + 0x8],EAX       ; 004ab74b
    MOV EAX,dword ptr [ESP]             ; 004ab74f
    MOV EBX,dword ptr [ESP + 0x4]       ; 004ab752
    SHL EAX,CL                          ; 004ab756
    MOV CL,byte ptr [0x01c35820]        ; 004ab758 | DAT_01c35820
    SHL EBX,CL                          ; 004ab75e
    MOV CL,byte ptr [0x01c3582c]        ; 004ab760 | DAT_01c3582c
    OR EBX,EAX                          ; 004ab766
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ab768
    SHL EAX,CL                          ; 004ab76c
    OR EAX,EBX                          ; 004ab76e
    MOV ECX,dword ptr [ESP + 0x24]      ; 004ab770
    AND EAX,0xffff                      ; 004ab774
    MOV dword ptr [ECX + 0xdb4],EAX     ; 004ab779
    JMP 0x004ab6a5                      ; 004ab77f
        ;   XREF to: 004ab6a5 (UNCONDITIONAL_JUMP)  ; LAB_004ab6a5
    CMP EAX,EAX                         ; 004ab784
        ;   Label: LAB_004ab784
    JNZ 0x004ab7b5                      ; 004ab786
        ;   XREF to: 004ab7b5 (CONDITIONAL_JUMP)  ; LAB_004ab7b5
    MOV CL,byte ptr [0x01c35814]        ; 004ab788 | DAT_01c35814
    SHL ESI,CL                          ; 004ab78e
    MOV CL,byte ptr [0x01c35820]        ; 004ab790 | DAT_01c35820
    SHL EDI,CL                          ; 004ab796
    MOV CL,byte ptr [0x01c3582c]        ; 004ab798 | DAT_01c3582c
    SHL EBX,CL                          ; 004ab79e
    OR ESI,EDI                          ; 004ab7a0
    MOV ECX,EBX                         ; 004ab7a2
    OR ECX,ESI                          ; 004ab7a4
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ab7a6
    MOV dword ptr [EAX + 0xdb4],ECX     ; 004ab7aa
    JMP 0x004ab6a5                      ; 004ab7b0
        ;   XREF to: 004ab6a5 (UNCONDITIONAL_JUMP)  ; LAB_004ab6a5
    MOV ECX,EDI                         ; 004ab7b5
        ;   Label: LAB_004ab7b5
    SHL ESI,0x10                        ; 004ab7b7
    SHL ECX,0x8                         ; 004ab7ba
    OR ECX,ESI                          ; 004ab7bd
    OR ECX,EBX                          ; 004ab7bf
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ab7c1
    MOV dword ptr [EAX + 0xdb4],ECX     ; 004ab7c5
    JMP 0x004ab6a5                      ; 004ab7cb
        ;   XREF to: 004ab6a5 (UNCONDITIONAL_JUMP)  ; LAB_004ab6a5
    JBE 0x004ab70f                      ; 004ab7d0
        ;   XREF to: 004ab70f (CONDITIONAL_JUMP)  ; LAB_004ab70f
        ;   Label: LAB_004ab7d0
    CMP EAX,0x20                        ; 004ab7d6
    JZ 0x004ab784                       ; 004ab7d9
        ;   XREF to: 004ab784 (CONDITIONAL_JUMP)  ; LAB_004ab784
    MOV EAX,0x5d6a28                    ; 004ab7db | = "..\\engine\\font.cpp"
        ;   Label: LAB_004ab7db
    MOV EDX,0x8df                       ; 004ab7e0
    PUSH 0x5d6a3b                       ; 004ab7e5 | = "CBitFont::remapPalette - Invalid bits..."
    MOV [0x01d046a0],EAX                ; 004ab7ea | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004ab7ef | DAT_01d046a4
    CALL FUN_004e4500                   ; 004ab7f5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004ab7fa
    JMP 0x004ab6a5                      ; 004ab7fd
        ;   XREF to: 004ab6a5 (UNCONDITIONAL_JUMP)  ; LAB_004ab6a5

