; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005186c0(float *param_1,float *param_2,uint param_3,int param_4,int *param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00519960 at 005199f0
;
; Referenced Globals:
;   void* PTR_caseD_1_005186b0 = 00518795
;   void* PTR_caseD_3_005186b8 = 00518777
;
; Called Functions:
;   FUN_00518560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005186c0
        ;   Label: FUN_005186c0
    PUSH ESI                            ; 005186c1
    PUSH EDI                            ; 005186c2
    PUSH EBP                            ; 005186c3
    SUB ESP,0x4                         ; 005186c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005186c7
    MOV EBX,dword ptr [ESP + 0x28]      ; 005186cb
    MOV ECX,dword ptr [ESP + 0x20]      ; 005186cf
    XOR EDX,EDX                         ; 005186d3
    MOV dword ptr [EBX],0x0             ; 005186d5
    MOV dword ptr [ESP],EDX             ; 005186db
    TEST ECX,ECX                        ; 005186de
    JLE 0x0051878d                      ; 005186e0
        ;   XREF to: 0051878d (CONDITIONAL_JUMP)  ; LAB_0051878d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005186e6
    MOV ECX,dword ptr [ESP]             ; 005186ea
        ;   Label: LAB_005186ea
    MOV EDX,dword ptr [ESP + 0x20]      ; 005186ed
    INC ECX                             ; 005186f1
    CMP ECX,EDX                         ; 005186f2
    JNZ 0x005186f8                      ; 005186f4
        ;   XREF to: 005186f8 (CONDITIONAL_JUMP)  ; LAB_005186f8
    XOR ECX,EDX                         ; 005186f6
    IMUL ECX,ECX,0xc                    ; 005186f8
        ;   Label: LAB_005186f8
    FLD float ptr [ESI + 0x4]           ; 005186fb
    FMUL float ptr [EDI + 0x4]          ; 005186fe
    FLD float ptr [ESI]                 ; 00518701
    FMUL float ptr [EDI]                ; 00518703
    FADDP                               ; 00518705
    FLD float ptr [ESI + 0x8]           ; 00518707
    FMUL float ptr [EDI + 0x8]          ; 0051870a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0051870d
    MOV EDX,EDI                         ; 00518711
    FADDP                               ; 00518713
    ADD EBP,ECX                         ; 00518715
    FADD float ptr [ESI + 0xc]          ; 00518717
    XOR ECX,ECX                         ; 0051871a
    FLDZ                                ; 0051871c
    FCOMPP                              ; 0051871e
    FNSTSW AX                           ; 00518720
    SAHF                                ; 00518722
    JNC 0x0051872a                      ; 00518723
        ;   XREF to: 0051872a (CONDITIONAL_JUMP)  ; LAB_0051872a
    MOV ECX,0x1                         ; 00518725
    FLD float ptr [ESI + 0x4]           ; 0051872a
        ;   Label: LAB_0051872a
    FMUL float ptr [EBP + 0x4]          ; 0051872d
    FLD float ptr [ESI]                 ; 00518730
    FMUL float ptr [EBP]                ; 00518732
    FADDP                               ; 00518735
    FLD float ptr [ESI + 0x8]           ; 00518737
    FMUL float ptr [EBP + 0x8]          ; 0051873a
    FADDP                               ; 0051873d
    FADD float ptr [ESI + 0xc]          ; 0051873f
    FLDZ                                ; 00518742
    FCOMPP                              ; 00518744
    FNSTSW AX                           ; 00518746
    SAHF                                ; 00518748
    JNC 0x0051874e                      ; 00518749
        ;   XREF to: 0051874e (CONDITIONAL_JUMP)  ; LAB_0051874e
    OR CL,0x2                           ; 0051874b
    CMP ECX,0x3                         ; 0051874e
        ;   Label: LAB_0051874e
    JA 0x00518777                       ; 00518751
        ;   XREF to: 00518777 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x5186ac]  ; 00518753 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [EBX],0xc        ; 0051875a
        ;   Label: caseD_0
    ADD ECX,dword ptr [ESP + 0x24]      ; 0051875d
    CMP ECX,EDX                         ; 00518761
    JZ 0x00518775                       ; 00518763
        ;   XREF to: 00518775 (CONDITIONAL_JUMP)  ; LAB_00518775
    MOV EAX,dword ptr [EDX]             ; 00518765
    MOV dword ptr [ECX],EAX             ; 00518767
    MOV EAX,dword ptr [EDX + 0x4]       ; 00518769
    MOV dword ptr [ECX + 0x4],EAX       ; 0051876c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051876f
    MOV dword ptr [ECX + 0x8],EAX       ; 00518772
    INC dword ptr [EBX]                 ; 00518775
        ;   Label: LAB_00518775
    MOV EBP,dword ptr [ESP]             ; 00518777
        ;   Label: caseD_3
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051877a
    INC EBP                             ; 0051877e
    ADD EDI,0xc                         ; 0051877f
    MOV dword ptr [ESP],EBP             ; 00518782
    CMP EBP,EAX                         ; 00518785
    JL 0x005186ea                       ; 00518787
        ;   XREF to: 005186ea (CONDITIONAL_JUMP)  ; LAB_005186ea
    ADD ESP,0x4                         ; 0051878d
        ;   Label: LAB_0051878d
    POP EBP                             ; 00518790
    POP EDI                             ; 00518791
    POP ESI                             ; 00518792
    POP EBX                             ; 00518793
    RET                                 ; 00518794
    IMUL ECX,dword ptr [EBX],0xc        ; 00518795
        ;   Label: caseD_1
    ADD ECX,dword ptr [ESP + 0x24]      ; 00518798
    PUSH ECX                            ; 0051879c
    PUSH EDX                            ; 0051879d
    PUSH EBP                            ; 0051879e
    PUSH ESI                            ; 0051879f
    CALL FUN_00518560                   ; 005187a0
        ;   XREF to: 00518560 (UNCONDITIONAL_CALL)  ; undefined FUN_00518560()
    MOV EDX,dword ptr [EBX]             ; 005187a5
    INC EDX                             ; 005187a7
    ADD ESP,0x10                        ; 005187a8
    MOV dword ptr [EBX],EDX             ; 005187ab
    JMP 0x00518777                      ; 005187ad
        ;   XREF to: 00518777 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [EBX],0xc        ; 005187af
        ;   Label: caseD_2
    ADD ECX,dword ptr [ESP + 0x24]      ; 005187b2
    CMP ECX,EDX                         ; 005187b6
    JZ 0x005187ca                       ; 005187b8
        ;   XREF to: 005187ca (CONDITIONAL_JUMP)  ; LAB_005187ca
    MOV EAX,dword ptr [EDX]             ; 005187ba
    MOV dword ptr [ECX],EAX             ; 005187bc
    MOV EAX,dword ptr [EDX + 0x4]       ; 005187be
    MOV dword ptr [ECX + 0x4],EAX       ; 005187c1
    MOV EAX,dword ptr [EDX + 0x8]       ; 005187c4
    MOV dword ptr [ECX + 0x8],EAX       ; 005187c7
    MOV ECX,dword ptr [EBX]             ; 005187ca
        ;   Label: LAB_005187ca
    INC ECX                             ; 005187cc
    MOV dword ptr [EBX],ECX             ; 005187cd
    IMUL ECX,ECX,0xc                    ; 005187cf
    ADD ECX,dword ptr [ESP + 0x24]      ; 005187d2
    PUSH ECX                            ; 005187d6
    PUSH EBP                            ; 005187d7
    PUSH EDX                            ; 005187d8
    PUSH ESI                            ; 005187d9
    CALL FUN_00518560                   ; 005187da
        ;   XREF to: 00518560 (UNCONDITIONAL_CALL)  ; undefined FUN_00518560()
    MOV EDX,dword ptr [EBX]             ; 005187df
    INC EDX                             ; 005187e1
    ADD ESP,0x10                        ; 005187e2
    MOV dword ptr [EBX],EDX             ; 005187e5
    JMP 0x00518777                      ; 005187e7
        ;   XREF to: 00518777 (UNCONDITIONAL_JUMP)  ; caseD_3

