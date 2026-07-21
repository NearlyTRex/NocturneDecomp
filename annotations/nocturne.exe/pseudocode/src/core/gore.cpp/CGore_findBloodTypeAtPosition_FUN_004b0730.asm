; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730(undefined4 param_1,float *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   FUN_0040db50 at 0040dbea
;
; Referenced Globals:
;   undefined4 DAT_005851c8
;   undefined4 DAT_005851d0
;   undefined4 DAT_01c7ccf0
;   undefined4 DAT_01c7cd04
;   undefined4 DAT_01c7cd3c
;   undefined4 DAT_01c7cd40
;   undefined4 DAT_01c7cd44
;   undefined4 DAT_01c7cd48
;   undefined4 DAT_01c7cd4c
;   undefined4 DAT_01c9e038
;   undefined4 DAT_01c9e044
;   undefined4 DAT_01c9e068
;   undefined4 DAT_01c9e06c
;   undefined4 DAT_01c9e070
;   undefined4 DAT_01c9e074
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0730
        ;   Label: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004b0730
    PUSH ESI                            ; 004b0731
    PUSH EDI                            ; 004b0732
    PUSH EBP                            ; 004b0733
    MOV EBP,ESP                         ; 004b0734
    AND ESP,0xfffffff8                  ; 004b0736
    MOV ESI,dword ptr [0x01c7ccf0]      ; 004b0739 | DAT_01c7ccf0
    MOV EDI,dword ptr [0x01c9e038]      ; 004b073f | DAT_01c9e038
    MOV ECX,dword ptr [EBP + 0x18]      ; 004b0745
    XOR EBX,EBX                         ; 004b0748
    TEST EDI,EDI                        ; 004b074a
    JLE 0x004b076e                      ; 004b074c
        ;   XREF to: 004b076e (CONDITIONAL_JUMP)  ; LAB_004b076e
    MOV EDX,0x1c9e03c                   ; 004b074e
    FLD float ptr [ECX + 0x4]           ; 004b0753
        ;   Label: LAB_004b0753
    FSUB float ptr [EDX + 0x8]          ; 004b0756 | DAT_01c9e044 | DAT_01c9e06c
    FABS                                ; 004b0759
    FCOMP double ptr [0x005851c8]       ; 004b075b | DAT_005851c8
    FNSTSW AX                           ; 004b0761
    SAHF                                ; 004b0763
    JBE 0x004b079e                      ; 004b0764
        ;   XREF to: 004b079e (CONDITIONAL_JUMP)  ; LAB_004b079e
    INC EBX                             ; 004b0766
        ;   Label: LAB_004b0766
    ADD EDX,0x28                        ; 004b0767
    CMP EBX,EDI                         ; 004b076a
    JL 0x004b0753                       ; 004b076c
        ;   XREF to: 004b0753 (CONDITIONAL_JUMP)  ; LAB_004b0753
    XOR EBX,EBX                         ; 004b076e
        ;   Label: LAB_004b076e
    TEST ESI,ESI                        ; 004b0770
    JLE 0x004b0787                      ; 004b0772
        ;   XREF to: 004b0787 (CONDITIONAL_JUMP)  ; LAB_004b0787
    MOV EDX,0x1c7ccf4                   ; 004b0774
    CMP dword ptr [EDX + 0x10],0x0      ; 004b0779 | DAT_01c7cd04 | DAT_01c7cd48
        ;   Label: LAB_004b0779
    JZ 0x004b07d2                       ; 004b077d
        ;   XREF to: 004b07d2 (CONDITIONAL_JUMP)  ; LAB_004b07d2
    INC EBX                             ; 004b077f
        ;   Label: LAB_004b077f
    ADD EDX,0x44                        ; 004b0780
    CMP EBX,ESI                         ; 004b0783
    JL 0x004b0779                       ; 004b0785
        ;   XREF to: 004b0779 (CONDITIONAL_JUMP)  ; LAB_004b0779
    XOR EDX,EDX                         ; 004b0787
        ;   Label: LAB_004b0787
    MOV EAX,EDX                         ; 004b0789
        ;   Label: LAB_004b0789
    MOV dword ptr [0x01c9e038],EDI      ; 004b078b | DAT_01c9e038
    MOV dword ptr [0x01c7ccf0],ESI      ; 004b0791 | DAT_01c7ccf0
    MOV ESP,EBP                         ; 004b0797
    POP EBP                             ; 004b0799
    POP EDI                             ; 004b079a
    POP ESI                             ; 004b079b
    POP EBX                             ; 004b079c
    RET                                 ; 004b079d
    FLD float ptr [ECX]                 ; 004b079e
        ;   Label: LAB_004b079e
    FSUB float ptr [EDX + 0x4]          ; 004b07a0 | DAT_01c9e068
    FABS                                ; 004b07a3
    FCOMP double ptr [0x005851d0]       ; 004b07a5 | DAT_005851d0
    FNSTSW AX                           ; 004b07ab
    SAHF                                ; 004b07ad
    JA 0x004b0766                       ; 004b07ae
        ;   XREF to: 004b0766 (CONDITIONAL_JUMP)  ; LAB_004b0766
    FLD float ptr [ECX + 0x8]           ; 004b07b0
    FSUB float ptr [EDX + 0xc]          ; 004b07b3 | DAT_01c9e070
    FABS                                ; 004b07b6
    FCOMP double ptr [0x005851d0]       ; 004b07b8 | DAT_005851d0
    FNSTSW AX                           ; 004b07be
    SAHF                                ; 004b07c0
    JA 0x004b0766                       ; 004b07c1
        ;   XREF to: 004b0766 (CONDITIONAL_JUMP)  ; LAB_004b0766
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004b07c3
    MOV EDX,dword ptr [EDX + 0x10]      ; 004b07c6 | DAT_01c9e074
    MOV dword ptr [ECX],EDX             ; 004b07c9
    MOV EDX,0x1                         ; 004b07cb
    JMP 0x004b0789                      ; 004b07d0
        ;   XREF to: 004b0789 (UNCONDITIONAL_JUMP)  ; LAB_004b0789
    FLD float ptr [ECX + 0x4]           ; 004b07d2
        ;   Label: LAB_004b07d2
    FSUB float ptr [EDX + 0x8]          ; 004b07d5 | DAT_01c7cd40
    FABS                                ; 004b07d8
    FCOMP double ptr [0x005851c8]       ; 004b07da | DAT_005851c8
    FNSTSW AX                           ; 004b07e0
    SAHF                                ; 004b07e2
    JA 0x004b077f                       ; 004b07e3
        ;   XREF to: 004b077f (CONDITIONAL_JUMP)  ; LAB_004b077f
    FLD float ptr [ECX]                 ; 004b07e5
    FSUB float ptr [EDX + 0x4]          ; 004b07e7 | DAT_01c7cd3c
    FABS                                ; 004b07ea
    FCOMP double ptr [0x005851c8]       ; 004b07ec | DAT_005851c8
    FNSTSW AX                           ; 004b07f2
    SAHF                                ; 004b07f4
    JA 0x004b077f                       ; 004b07f5
        ;   XREF to: 004b077f (CONDITIONAL_JUMP)  ; LAB_004b077f
    FLD float ptr [ECX + 0x8]           ; 004b07f7
    FSUB float ptr [EDX + 0xc]          ; 004b07fa | DAT_01c7cd44
    FABS                                ; 004b07fd
    FCOMP double ptr [0x005851c8]       ; 004b07ff | DAT_005851c8
    FNSTSW AX                           ; 004b0805
    SAHF                                ; 004b0807
    JA 0x004b077f                       ; 004b0808
        ;   XREF to: 004b077f (CONDITIONAL_JUMP)  ; LAB_004b077f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004b080e
    MOV EDX,dword ptr [EDX + 0x14]      ; 004b0811 | DAT_01c7cd4c
    MOV dword ptr [ECX],EDX             ; 004b0814
    MOV EDX,0x1                         ; 004b0816
    JMP 0x004b0789                      ; 004b081b
        ;   XREF to: 004b0789 (UNCONDITIONAL_JUMP)  ; LAB_004b0789

