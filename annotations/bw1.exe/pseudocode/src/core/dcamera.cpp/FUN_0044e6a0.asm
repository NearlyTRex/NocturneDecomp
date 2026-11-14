; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0044e6a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e6a0
        ;   Label: core_dcamera.cpp_FUN_0044e6a0
    PUSH EDI                            ; 0044e6a1
    PUSH EBP                            ; 0044e6a2
    SUB ESP,0x18                        ; 0044e6a3
    MOV EBP,ESI                         ; 0044e6a6
    MOV EDI,0x1c51d5c                   ; 0044e6a8
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044e6ad
    MOV EAX,dword ptr [ESI]             ; 0044e6b1
    IMUL dword ptr [EDI]                ; 0044e6b3
    MOV EBX,EAX                         ; 0044e6b5
    MOV ECX,EDX                         ; 0044e6b7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e6b9
    IMUL dword ptr [EDI + 0xc]          ; 0044e6bc
    ADD EBX,EAX                         ; 0044e6bf
    ADC ECX,EDX                         ; 0044e6c1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e6c3
    IMUL dword ptr [EDI + 0x18]         ; 0044e6c6
    ADD EAX,EBX                         ; 0044e6c9
    ADC EDX,ECX                         ; 0044e6cb
    SHRD EAX,EDX,0x10                   ; 0044e6cd
    MOV EDI,0x1c51d60                   ; 0044e6d1
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044e6d6
    MOV dword ptr [ESP],EAX             ; 0044e6da
    MOV EAX,dword ptr [ESI]             ; 0044e6dd
    IMUL dword ptr [EDI]                ; 0044e6df
    MOV EBX,EAX                         ; 0044e6e1
    MOV ECX,EDX                         ; 0044e6e3
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e6e5
    IMUL dword ptr [EDI + 0xc]          ; 0044e6e8
    ADD EBX,EAX                         ; 0044e6eb
    ADC ECX,EDX                         ; 0044e6ed
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e6ef
    IMUL dword ptr [EDI + 0x18]         ; 0044e6f2
    ADD EAX,EBX                         ; 0044e6f5
    ADC EDX,ECX                         ; 0044e6f7
    SHRD EAX,EDX,0x10                   ; 0044e6f9
    MOV EDI,0x1c51d64                   ; 0044e6fd
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044e702
    MOV dword ptr [ESP + 0x4],EAX       ; 0044e706
    MOV EAX,dword ptr [ESI]             ; 0044e70a
    IMUL dword ptr [EDI]                ; 0044e70c
    MOV EBX,EAX                         ; 0044e70e
    MOV ECX,EDX                         ; 0044e710
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e712
    IMUL dword ptr [EDI + 0xc]          ; 0044e715
    ADD EBX,EAX                         ; 0044e718
    ADC ECX,EDX                         ; 0044e71a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e71c
    IMUL dword ptr [EDI + 0x18]         ; 0044e71f
    ADD EAX,EBX                         ; 0044e722
    ADC EDX,ECX                         ; 0044e724
    SHRD EAX,EDX,0x10                   ; 0044e726
    MOV EDX,dword ptr [0x00612560]      ; 0044e72a | DAT_00612560
    PUSH EDX                            ; 0044e730
    MOV dword ptr [ESP + 0xc],EAX       ; 0044e731
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180 ; 0044e735
        ;   XREF to: 00484180 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0044e73a
    TEST EAX,EAX                        ; 0044e73d
    JNZ 0x0044e7e7                      ; 0044e73f
        ;   XREF to: 0044e7e7 (CONDITIONAL_JUMP)  ; LAB_0044e7e7
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044e745
    MOV ESI,ESP                         ; 0044e749
    ADD EDI,0x19c                       ; 0044e74b
    MOV EAX,dword ptr [ESI]             ; 0044e751
    IMUL dword ptr [EDI]                ; 0044e753
    MOV EBX,EAX                         ; 0044e755
    MOV ECX,EDX                         ; 0044e757
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e759
    IMUL dword ptr [EDI + 0xc]          ; 0044e75c
    ADD EBX,EAX                         ; 0044e75f
    ADC ECX,EDX                         ; 0044e761
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e763
    IMUL dword ptr [EDI + 0x18]         ; 0044e766
    ADD EAX,EBX                         ; 0044e769
    ADC EDX,ECX                         ; 0044e76b
    SHRD EAX,EDX,0x10                   ; 0044e76d
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044e771
    MOV ESI,ESP                         ; 0044e775
    ADD EDI,0x1a0                       ; 0044e777
    MOV dword ptr [ESP + 0xc],EAX       ; 0044e77d
    MOV EAX,dword ptr [ESI]             ; 0044e781
    IMUL dword ptr [EDI]                ; 0044e783
    MOV EBX,EAX                         ; 0044e785
    MOV ECX,EDX                         ; 0044e787
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e789
    IMUL dword ptr [EDI + 0xc]          ; 0044e78c
    ADD EBX,EAX                         ; 0044e78f
    ADC ECX,EDX                         ; 0044e791
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e793
    IMUL dword ptr [EDI + 0x18]         ; 0044e796
    ADD EAX,EBX                         ; 0044e799
    ADC EDX,ECX                         ; 0044e79b
    SHRD EAX,EDX,0x10                   ; 0044e79d
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044e7a1
    MOV ESI,ESP                         ; 0044e7a5
    ADD EDI,0x1a4                       ; 0044e7a7
    MOV dword ptr [ESP + 0x10],EAX      ; 0044e7ad
    MOV EAX,dword ptr [ESI]             ; 0044e7b1
    IMUL dword ptr [EDI]                ; 0044e7b3
    MOV EBX,EAX                         ; 0044e7b5
    MOV ECX,EDX                         ; 0044e7b7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e7b9
    IMUL dword ptr [EDI + 0xc]          ; 0044e7bc
    ADD EBX,EAX                         ; 0044e7bf
    ADC ECX,EDX                         ; 0044e7c1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e7c3
    IMUL dword ptr [EDI + 0x18]         ; 0044e7c6
    ADD EAX,EBX                         ; 0044e7c9
    ADC EDX,ECX                         ; 0044e7cb
    SHRD EAX,EDX,0x10                   ; 0044e7cd
    MOV dword ptr [ESP + 0x14],EAX      ; 0044e7d1
    LEA ESI,[ESP + 0xc]                 ; 0044e7d5
    MOV EDI,EBP                         ; 0044e7d9
    MOVSD ES:EDI,ESI                    ; 0044e7db
    MOVSD ES:EDI,ESI                    ; 0044e7dc
    MOVSD ES:EDI,ESI                    ; 0044e7dd
    MOV EAX,EBP                         ; 0044e7de
    ADD ESP,0x18                        ; 0044e7e0
    POP EBP                             ; 0044e7e3
    POP EDI                             ; 0044e7e4
    POP EBX                             ; 0044e7e5
    RET                                 ; 0044e7e6
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044e7e7
        ;   Label: LAB_0044e7e7
    SHL EAX,0x2                         ; 0044e7eb
    ADD ECX,EAX                         ; 0044e7ee
    MOV EDX,dword ptr [ESP]             ; 0044e7f0
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0044e7f3
    IMUL EDX                            ; 0044e7f9
    SHRD EAX,EDX,0x10                   ; 0044e7fb
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e7ff
    MOV ESI,EAX                         ; 0044e803
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 0044e805
    IMUL EDX                            ; 0044e80b
    SHRD EAX,EDX,0x10                   ; 0044e80d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e811
    ADD ESI,EAX                         ; 0044e815
    MOV EAX,dword ptr [ECX + 0x142c]    ; 0044e817
    IMUL EDX                            ; 0044e81d
    SHRD EAX,EDX,0x10                   ; 0044e81f
    MOV EDX,dword ptr [ESP]             ; 0044e823
    ADD ESI,EAX                         ; 0044e826
    MOV EAX,dword ptr [ECX + 0x138c]    ; 0044e828
    MOV dword ptr [ESP + 0xc],ESI       ; 0044e82e
    IMUL EDX                            ; 0044e832
    SHRD EAX,EDX,0x10                   ; 0044e834
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e838
    MOV ESI,EAX                         ; 0044e83c
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 0044e83e
    IMUL EDX                            ; 0044e844
    SHRD EAX,EDX,0x10                   ; 0044e846
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e84a
    ADD ESI,EAX                         ; 0044e84e
    MOV EAX,dword ptr [ECX + 0x144c]    ; 0044e850
    IMUL EDX                            ; 0044e856
    SHRD EAX,EDX,0x10                   ; 0044e858
    MOV EDX,dword ptr [ESP]             ; 0044e85c
    ADD ESI,EAX                         ; 0044e85f
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 0044e861
    MOV dword ptr [ESP + 0x10],ESI      ; 0044e867
    IMUL EDX                            ; 0044e86b
    SHRD EAX,EDX,0x10                   ; 0044e86d
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e871
    MOV ESI,EAX                         ; 0044e875
    MOV EAX,dword ptr [ECX + 0x140c]    ; 0044e877
    IMUL EDX                            ; 0044e87d
    SHRD EAX,EDX,0x10                   ; 0044e87f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e883
    ADD ESI,EAX                         ; 0044e887
    MOV EAX,dword ptr [ECX + 0x146c]    ; 0044e889
    IMUL EDX                            ; 0044e88f
    SHRD EAX,EDX,0x10                   ; 0044e891
    ADD ESI,EAX                         ; 0044e895
    MOV dword ptr [ESP + 0x14],ESI      ; 0044e897
    LEA ESI,[ESP + 0xc]                 ; 0044e89b
    MOV EDI,EBP                         ; 0044e89f
    MOVSD ES:EDI,ESI                    ; 0044e8a1
    MOVSD ES:EDI,ESI                    ; 0044e8a2
    MOVSD ES:EDI,ESI                    ; 0044e8a3
    MOV EAX,EBP                         ; 0044e8a4
    ADD ESP,0x18                        ; 0044e8a6
    POP EBP                             ; 0044e8a9
    POP EDI                             ; 0044e8aa
    POP EBX                             ; 0044e8ab
    RET                                 ; 0044e8ac

