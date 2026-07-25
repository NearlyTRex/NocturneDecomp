; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004f5740 at 004f58f4
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0 at 004f46d8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4700
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
    PUSH ESI                            ; 004f4701
    PUSH EDI                            ; 004f4702
    PUSH EBP                            ; 004f4703
    SUB ESP,0x8                         ; 004f4704
    MOV EBP,dword ptr [ESP + 0x20]      ; 004f4707
    CMP dword ptr [ESP + 0x24],0x0      ; 004f470b
    JZ 0x004f4797                       ; 004f4710
        ;   XREF to: 004f4797 (CONDITIONAL_JUMP)  ; LAB_004f4797
    XOR ECX,ECX                         ; 004f4716
        ;   Label: LAB_004f4716
    MOV dword ptr [ESP + 0x4],ECX       ; 004f4718
    MOV dword ptr [ESP],ECX             ; 004f471c
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f471f
        ;   Label: LAB_004f471f
    MOV ESI,dword ptr [ESP + 0x4]       ; 004f4723
    MOV ECX,dword ptr [ECX + 0x20]      ; 004f4727
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f472a
    ADD ECX,ESI                         ; 004f472e
    MOV EBX,dword ptr [EBX + 0x14]      ; 004f4730
    MOV EDX,dword ptr [ECX]             ; 004f4733
    MOV EDI,dword ptr [ECX + 0x4]       ; 004f4735
    ADD EDX,EBX                         ; 004f4738
    ADD EBX,EDI                         ; 004f473a
    CMP EDX,EBX                         ; 004f473c
    JNC 0x004f476c                      ; 004f473e
        ;   XREF to: 004f476c (CONDITIONAL_JUMP)  ; LAB_004f476c
    LEA EDI,[EDX + 0x4]                 ; 004f4740
        ;   Label: LAB_004f4740
    XOR ECX,ECX                         ; 004f4743
    XOR ESI,ESI                         ; 004f4745
    MOV CX,word ptr [EDX + 0x2]         ; 004f4747
    MOV SI,word ptr [EDX]               ; 004f474b
    LEA EDX,[ECX + 0x3]                 ; 004f474e
    AND DL,0xfc                         ; 004f4751
    ADD ESI,EBP                         ; 004f4754
    ADD EDX,EDI                         ; 004f4756
    PUSH EDI                            ; 004f4758
    MOV EAX,ECX                         ; 004f4759
    SHR ECX,0x2                         ; 004f475b
    MOVSD.REP ES:EDI,ESI                ; 004f475e
    MOV CL,AL                           ; 004f4760
    AND CL,0x3                          ; 004f4762
    MOVSB.REP ES:EDI,ESI                ; 004f4765
    POP EDI                             ; 004f4767
    CMP EDX,EBX                         ; 004f4768
    JC 0x004f4740                       ; 004f476a
        ;   XREF to: 004f4740 (CONDITIONAL_JUMP)  ; LAB_004f4740
    MOV EDX,dword ptr [ESP]             ; 004f476c
        ;   Label: LAB_004f476c
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f476f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4773
    INC EDX                             ; 004f4777
    ADD EBP,ECX                         ; 004f4778
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f477a
    ADD EAX,0x4                         ; 004f477e
    MOV dword ptr [ESP],EDX             ; 004f4781
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004f4784
    MOV dword ptr [ESP + 0x4],EAX       ; 004f4787
    CMP EDX,EBX                         ; 004f478b
    JL 0x004f471f                       ; 004f478d
        ;   XREF to: 004f471f (CONDITIONAL_JUMP)  ; LAB_004f471f
    ADD ESP,0x8                         ; 004f478f
    POP EBP                             ; 004f4792
    POP EDI                             ; 004f4793
    POP ESI                             ; 004f4794
    POP EBX                             ; 004f4795
    RET                                 ; 004f4796
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f4797
        ;   Label: LAB_004f4797
    MOV EDX,dword ptr [EDX + 0x18]      ; 004f479b
    MOV dword ptr [ESP + 0x24],EDX      ; 004f479e
    JMP 0x004f4716                      ; 004f47a2
        ;   XREF to: 004f4716 (UNCONDITIONAL_JUMP)  ; LAB_004f4716

