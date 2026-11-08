; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004246e0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004247f0 at 00424961
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004246e0
        ;   Label: FUN_004246e0
    PUSH ESI                            ; 004246e1
    PUSH EDI                            ; 004246e2
    PUSH EBP                            ; 004246e3
    SUB ESP,0xc                         ; 004246e4
    MOV EDI,dword ptr [ESP + 0x20]      ; 004246e7
    MOV EBX,dword ptr [ESP + 0x24]      ; 004246eb
    MOV ESI,dword ptr [ESP + 0x28]      ; 004246ef
    MOV EDX,EBX                         ; 004246f3
    LEA EAX,[EBX*0x4 + 0x0]             ; 004246f5
    SUB EAX,EBX                         ; 004246fc
    SHL EAX,0x5                         ; 004246fe
    XOR EDX,EBX                         ; 00424701
    MOV EBP,dword ptr [EDI + EAX*0x1 + 0xc24] ; 00424703
    XOR EAX,EAX                         ; 0042470a
    TEST EBX,EBX                        ; 0042470c
    JLE 0x00424720                      ; 0042470e
        ;   XREF to: 00424720 (CONDITIONAL_JUMP)  ; LAB_00424720
    MOV ECX,EDI                         ; 00424710
    ADD ECX,0x60                        ; 00424712
        ;   Label: LAB_00424712
    INC EAX                             ; 00424715
    ADD EDX,dword ptr [ECX + 0xbc4]     ; 00424716
    CMP EAX,EBX                         ; 0042471c
    JL 0x00424712                       ; 0042471e
        ;   XREF to: 00424712 (CONDITIONAL_JUMP)  ; LAB_00424712
    LEA EAX,[EDX*0x8 + 0x0]             ; 00424720
        ;   Label: LAB_00424720
    ADD EDX,EAX                         ; 00424727
    MOV EAX,dword ptr [EDI + 0x7c]      ; 00424729
    ADD EDX,EDX                         ; 0042472c
    ADD EAX,EDX                         ; 0042472e
    MOV dword ptr [ESP],EAX             ; 00424730
    MOV EDX,ESI                         ; 00424733
    LEA EAX,[ESI*0x4 + 0x0]             ; 00424735
    SUB EAX,ESI                         ; 0042473c
    SHL EAX,0x5                         ; 0042473e
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0xc24] ; 00424741
    XOR EDX,ESI                         ; 00424748
    MOV dword ptr [ESP + 0x4],EAX       ; 0042474a
    XOR EAX,EAX                         ; 0042474e
    TEST ESI,ESI                        ; 00424750
    JLE 0x00424770                      ; 00424752
        ;   XREF to: 00424770 (CONDITIONAL_JUMP)  ; LAB_00424770
    MOV ECX,EDI                         ; 00424754
    MOV EBX,dword ptr [ECX + 0xc24]     ; 00424756
        ;   Label: LAB_00424756
    ADD ECX,0x60                        ; 0042475c
    INC EAX                             ; 0042475f
    ADD EDX,EBX                         ; 00424760
    CMP EAX,ESI                         ; 00424762
    JL 0x00424756                       ; 00424764
        ;   XREF to: 00424756 (CONDITIONAL_JUMP)  ; LAB_00424756
    LEA EAX,[EAX]                       ; 00424766
    LEA EDX,[EDX]                       ; 0042476c
    XOR ESI,ESI                         ; 00424770
        ;   Label: LAB_00424770
    LEA EAX,[EDX*0x8 + 0x0]             ; 00424772
    MOV dword ptr [ESP + 0x8],ESI       ; 00424779
    ADD EAX,EDX                         ; 0042477d
    MOV EDX,dword ptr [EDI + 0x7c]      ; 0042477f
    ADD EAX,EAX                         ; 00424782
    MOV EDI,dword ptr [ESP + 0x4]       ; 00424784
    ADD EDX,EAX                         ; 00424788
    TEST EDI,EDI                        ; 0042478a
    JLE 0x004247d9                      ; 0042478c
        ;   XREF to: 004247d9 (CONDITIONAL_JUMP)  ; LAB_004247d9
    MOV EAX,dword ptr [ESP]             ; 0042478e
        ;   Label: LAB_0042478e
    XOR ECX,ECX                         ; 00424791
    TEST EBP,EBP                        ; 00424793
    JLE 0x004247c5                      ; 00424795
        ;   XREF to: 004247c5 (CONDITIONAL_JUMP)  ; LAB_004247c5
    MOV SI,word ptr [EDX]               ; 00424797
        ;   Label: LAB_00424797
    CMP SI,word ptr [EAX]               ; 0042479a
    JNZ 0x004247bd                      ; 0042479d
        ;   XREF to: 004247bd (CONDITIONAL_JUMP)  ; LAB_004247bd
    MOV DI,word ptr [EDX + 0x2]         ; 0042479f
    CMP DI,word ptr [EAX + 0x2]         ; 004247a3
    JNZ 0x004247bd                      ; 004247a7
        ;   XREF to: 004247bd (CONDITIONAL_JUMP)  ; LAB_004247bd
    MOV SI,word ptr [EDX + 0x4]         ; 004247a9
    CMP SI,word ptr [EAX + 0x4]         ; 004247ad
    JNZ 0x004247bd                      ; 004247b1
        ;   XREF to: 004247bd (CONDITIONAL_JUMP)  ; LAB_004247bd
    MOV EDI,EAX                         ; 004247b3
    MOV ESI,EDX                         ; 004247b5
    MOVSD ES:EDI,ESI                    ; 004247b7
    MOVSD ES:EDI,ESI                    ; 004247b8
    MOVSD ES:EDI,ESI                    ; 004247b9
    MOVSD ES:EDI,ESI                    ; 004247ba
    MOVSW ES:EDI,ESI                    ; 004247bb
    INC ECX                             ; 004247bd
        ;   Label: LAB_004247bd
    ADD EAX,0x12                        ; 004247be
    CMP ECX,EBP                         ; 004247c1
    JL 0x00424797                       ; 004247c3
        ;   XREF to: 00424797 (CONDITIONAL_JUMP)  ; LAB_00424797
    MOV EAX,dword ptr [ESP + 0x8]       ; 004247c5
        ;   Label: LAB_004247c5
    MOV ECX,dword ptr [ESP + 0x4]       ; 004247c9
    INC EAX                             ; 004247cd
    ADD EDX,0x12                        ; 004247ce
    MOV dword ptr [ESP + 0x8],EAX       ; 004247d1
    CMP EAX,ECX                         ; 004247d5
    JL 0x0042478e                       ; 004247d7
        ;   XREF to: 0042478e (CONDITIONAL_JUMP)  ; LAB_0042478e
    ADD ESP,0xc                         ; 004247d9
        ;   Label: LAB_004247d9
    POP EBP                             ; 004247dc
    POP EDI                             ; 004247dd
    POP ESI                             ; 004247de
    POP EBX                             ; 004247df
    RET                                 ; 004247e0

