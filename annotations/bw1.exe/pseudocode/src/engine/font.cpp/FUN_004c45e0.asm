; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c45e0(int *param_1)
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
;   FUN_004c0cd0 at 004c0f20
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005e0aa1
;   TerminatedCString s_CBitFont_remapPalette_In_005e0ab4
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c45e0
        ;   Label: FUN_004c45e0
    PUSH ESI                            ; 004c45e1
    PUSH EDI                            ; 004c45e2
    PUSH EBP                            ; 004c45e3
    SUB ESP,0x28                        ; 004c45e4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c45e7
    XOR EDX,EDX                         ; 004c45eb
    MOV ECX,dword ptr [EAX]             ; 004c45ed
    MOV dword ptr [ESP + 0x1c],EDX      ; 004c45ef
    TEST ECX,ECX                        ; 004c45f3
    JLE 0x004c46b7                      ; 004c45f5
        ;   XREF to: 004c46b7 (CONDITIONAL_JUMP)  ; LAB_004c46b7
    ADD EAX,0x400                       ; 004c45fb
    MOV dword ptr [ESP + 0x14],EAX      ; 004c4600
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c4604
    MOV dword ptr [ESP + 0x18],EAX      ; 004c4608
    MOV dword ptr [ESP + 0xc],EAX       ; 004c460c
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c4610
        ;   Label: LAB_004c4610
    MOV dword ptr [ESP + 0x20],EAX      ; 004c4614
    MOV dword ptr [ESP + 0x24],EAX      ; 004c4618
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c461c
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c4620
    MOV dword ptr [ESP + 0x10],EAX      ; 004c4624
    MOV EAX,[0x0061b4a0]                ; 004c4628 | DAT_0061b4a0
        ;   Label: LAB_004c4628
    MOVZX EDI,byte ptr [EBP + 0x1b5]    ; 004c462d
    XOR EBX,EBX                         ; 004c4634
    MOVZX ESI,byte ptr [EBP + 0x1b4]    ; 004c4636
    MOV BL,byte ptr [EBP + 0x1b6]       ; 004c463d
    CMP EAX,0x10                        ; 004c4643
    JNC 0x004c4780                      ; 004c4646
        ;   XREF to: 004c4780 (CONDITIONAL_JUMP)  ; LAB_004c4780
    CMP EAX,0x8                         ; 004c464c
    JNZ 0x004c478b                      ; 004c464f
        ;   XREF to: 004c478b (CONDITIONAL_JUMP)  ; LAB_004c478b
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c4655
        ;   Label: LAB_004c4655
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c4659
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c465d
    ADD EBP,0x3                         ; 004c4661
    ADD ECX,0x4                         ; 004c4664
    ADD EBX,0x4                         ; 004c4667
    MOV dword ptr [ESP + 0x20],ECX      ; 004c466a
    MOV dword ptr [ESP + 0x24],EBX      ; 004c466e
    CMP EBX,ESI                         ; 004c4672
    JNZ 0x004c4628                      ; 004c4674
        ;   XREF to: 004c4628 (CONDITIONAL_JUMP)  ; LAB_004c4628
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c4676
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c467a
    MOV EDI,dword ptr [ESP + 0xc]       ; 004c467e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004c4682
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004c4686
    ADD EBX,0x400                       ; 004c468a
    ADD ESI,0x300                       ; 004c4690
    ADD EDI,0x400                       ; 004c4696
    INC EBP                             ; 004c469c
    MOV EDX,dword ptr [ECX]             ; 004c469d
    MOV dword ptr [ESP + 0x14],EBX      ; 004c469f
    MOV dword ptr [ESP + 0x18],ESI      ; 004c46a3
    MOV dword ptr [ESP + 0xc],EDI       ; 004c46a7
    MOV dword ptr [ESP + 0x1c],EBP      ; 004c46ab
    CMP EBP,EDX                         ; 004c46af
    JL 0x004c4610                       ; 004c46b1
        ;   XREF to: 004c4610 (CONDITIONAL_JUMP)  ; LAB_004c4610
    ADD ESP,0x28                        ; 004c46b7
        ;   Label: LAB_004c46b7
    POP EBP                             ; 004c46ba
    POP EDI                             ; 004c46bb
    POP ESI                             ; 004c46bc
    POP EBX                             ; 004c46bd
    RET                                 ; 004c46be
    MOV ECX,dword ptr [0x01c4e9d8]      ; 004c46bf | DAT_01c4e9d8
        ;   Label: LAB_004c46bf
    MOV EAX,ESI                         ; 004c46c5
    XOR EDX,EDX                         ; 004c46c7
    DIV ECX                             ; 004c46c9
    MOV dword ptr [ESP],ESI             ; 004c46cb
    MOV ESI,dword ptr [0x01c4e9e4]      ; 004c46ce | DAT_01c4e9e4
    MOV dword ptr [ESP],EAX             ; 004c46d4
    XOR EDX,EDX                         ; 004c46d7
    MOV EAX,EDI                         ; 004c46d9
    DIV ESI                             ; 004c46db
    MOV dword ptr [ESP + 0x4],EDI       ; 004c46dd
    MOV EDI,dword ptr [0x01c4e9f0]      ; 004c46e1 | DAT_01c4e9f0
    MOV dword ptr [ESP + 0x4],EAX       ; 004c46e7
    XOR EDX,EDX                         ; 004c46eb
    MOV EAX,EBX                         ; 004c46ed
    DIV EDI                             ; 004c46ef
    MOV dword ptr [ESP + 0x8],EBX       ; 004c46f1
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c46f5 | DAT_01c4e9d4
    MOV dword ptr [ESP + 0x8],EAX       ; 004c46fb
    MOV EAX,dword ptr [ESP]             ; 004c46ff
    MOV EBX,dword ptr [ESP + 0x4]       ; 004c4702
    SHL EAX,CL                          ; 004c4706
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c4708 | DAT_01c4e9e0
    SHL EBX,CL                          ; 004c470e
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c4710 | DAT_01c4e9ec
    OR EBX,EAX                          ; 004c4716
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4718
    SHL EAX,CL                          ; 004c471c
    OR EAX,EBX                          ; 004c471e
    MOV ECX,dword ptr [ESP + 0x24]      ; 004c4720
    AND EAX,0xffff                      ; 004c4724
    MOV dword ptr [ECX + 0xdb4],EAX     ; 004c4729
    JMP 0x004c4655                      ; 004c472f
        ;   XREF to: 004c4655 (UNCONDITIONAL_JUMP)  ; LAB_004c4655
    CMP EAX,EAX                         ; 004c4734
        ;   Label: LAB_004c4734
    JNZ 0x004c4765                      ; 004c4736
        ;   XREF to: 004c4765 (CONDITIONAL_JUMP)  ; LAB_004c4765
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c4738 | DAT_01c4e9d4
    SHL ESI,CL                          ; 004c473e
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c4740 | DAT_01c4e9e0
    SHL EDI,CL                          ; 004c4746
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c4748 | DAT_01c4e9ec
    SHL EBX,CL                          ; 004c474e
    OR ESI,EDI                          ; 004c4750
    MOV ECX,EBX                         ; 004c4752
    OR ECX,ESI                          ; 004c4754
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c4756
    MOV dword ptr [EAX + 0xdb4],ECX     ; 004c475a
    JMP 0x004c4655                      ; 004c4760
        ;   XREF to: 004c4655 (UNCONDITIONAL_JUMP)  ; LAB_004c4655
    MOV ECX,EDI                         ; 004c4765
        ;   Label: LAB_004c4765
    SHL ESI,0x10                        ; 004c4767
    SHL ECX,0x8                         ; 004c476a
    OR ECX,ESI                          ; 004c476d
    OR ECX,EBX                          ; 004c476f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c4771
    MOV dword ptr [EAX + 0xdb4],ECX     ; 004c4775
    JMP 0x004c4655                      ; 004c477b
        ;   XREF to: 004c4655 (UNCONDITIONAL_JUMP)  ; LAB_004c4655
    JBE 0x004c46bf                      ; 004c4780
        ;   XREF to: 004c46bf (CONDITIONAL_JUMP)  ; LAB_004c46bf
        ;   Label: LAB_004c4780
    CMP EAX,0x20                        ; 004c4786
    JZ 0x004c4734                       ; 004c4789
        ;   XREF to: 004c4734 (CONDITIONAL_JUMP)  ; LAB_004c4734
    MOV EAX,0x5e0aa1                    ; 004c478b | = "..\\engine\\font.cpp"
        ;   Label: LAB_004c478b
    MOV EDX,0x8e4                       ; 004c4790
    PUSH 0x5e0ab4                       ; 004c4795 | = "CBitFont::remapPalette - Invalid bits..."
    MOV [0x01d1d400],EAX                ; 004c479a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004c479f | DAT_01d1d404
    CALL FUN_005030e0                   ; 004c47a5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004c47aa
    JMP 0x004c4655                      ; 004c47ad
        ;   XREF to: 004c4655 (UNCONDITIONAL_JUMP)  ; LAB_004c4655

