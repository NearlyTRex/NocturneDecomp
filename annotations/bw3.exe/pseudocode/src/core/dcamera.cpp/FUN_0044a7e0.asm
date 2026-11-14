; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0044a7e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a7e0
        ;   Label: core_dcamera.cpp_FUN_0044a7e0
    PUSH EDI                            ; 0044a7e1
    PUSH EBP                            ; 0044a7e2
    SUB ESP,0x18                        ; 0044a7e3
    MOV EBP,ESI                         ; 0044a7e6
    MOV EDI,0x1c6e2fc                   ; 0044a7e8
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044a7ed
    MOV EAX,dword ptr [ESI]             ; 0044a7f1
    IMUL dword ptr [EDI]                ; 0044a7f3
    MOV EBX,EAX                         ; 0044a7f5
    MOV ECX,EDX                         ; 0044a7f7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a7f9
    IMUL dword ptr [EDI + 0xc]          ; 0044a7fc
    ADD EBX,EAX                         ; 0044a7ff
    ADC ECX,EDX                         ; 0044a801
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a803
    IMUL dword ptr [EDI + 0x18]         ; 0044a806
    ADD EAX,EBX                         ; 0044a809
    ADC EDX,ECX                         ; 0044a80b
    SHRD EAX,EDX,0x10                   ; 0044a80d
    MOV EDI,0x1c6e300                   ; 0044a811
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044a816
    MOV dword ptr [ESP],EAX             ; 0044a81a
    MOV EAX,dword ptr [ESI]             ; 0044a81d
    IMUL dword ptr [EDI]                ; 0044a81f
    MOV EBX,EAX                         ; 0044a821
    MOV ECX,EDX                         ; 0044a823
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a825
    IMUL dword ptr [EDI + 0xc]          ; 0044a828
    ADD EBX,EAX                         ; 0044a82b
    ADC ECX,EDX                         ; 0044a82d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a82f
    IMUL dword ptr [EDI + 0x18]         ; 0044a832
    ADD EAX,EBX                         ; 0044a835
    ADC EDX,ECX                         ; 0044a837
    SHRD EAX,EDX,0x10                   ; 0044a839
    MOV EDI,0x1c6e304                   ; 0044a83d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044a842
    MOV dword ptr [ESP + 0x4],EAX       ; 0044a846
    MOV EAX,dword ptr [ESI]             ; 0044a84a
    IMUL dword ptr [EDI]                ; 0044a84c
    MOV EBX,EAX                         ; 0044a84e
    MOV ECX,EDX                         ; 0044a850
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a852
    IMUL dword ptr [EDI + 0xc]          ; 0044a855
    ADD EBX,EAX                         ; 0044a858
    ADC ECX,EDX                         ; 0044a85a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a85c
    IMUL dword ptr [EDI + 0x18]         ; 0044a85f
    ADD EAX,EBX                         ; 0044a862
    ADC EDX,ECX                         ; 0044a864
    SHRD EAX,EDX,0x10                   ; 0044a866
    MOV EDX,dword ptr [0x005f2afc]      ; 0044a86a | DAT_005f2afc
    PUSH EDX                            ; 0044a870
    MOV dword ptr [ESP + 0xc],EAX       ; 0044a871
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860 ; 0044a875
        ;   XREF to: 0046d860 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0044a87a
    TEST EAX,EAX                        ; 0044a87d
    JNZ 0x0044a927                      ; 0044a87f
        ;   XREF to: 0044a927 (CONDITIONAL_JUMP)  ; LAB_0044a927
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044a885
    MOV ESI,ESP                         ; 0044a889
    ADD EDI,0x19c                       ; 0044a88b
    MOV EAX,dword ptr [ESI]             ; 0044a891
    IMUL dword ptr [EDI]                ; 0044a893
    MOV EBX,EAX                         ; 0044a895
    MOV ECX,EDX                         ; 0044a897
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a899
    IMUL dword ptr [EDI + 0xc]          ; 0044a89c
    ADD EBX,EAX                         ; 0044a89f
    ADC ECX,EDX                         ; 0044a8a1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a8a3
    IMUL dword ptr [EDI + 0x18]         ; 0044a8a6
    ADD EAX,EBX                         ; 0044a8a9
    ADC EDX,ECX                         ; 0044a8ab
    SHRD EAX,EDX,0x10                   ; 0044a8ad
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044a8b1
    MOV ESI,ESP                         ; 0044a8b5
    ADD EDI,0x1a0                       ; 0044a8b7
    MOV dword ptr [ESP + 0xc],EAX       ; 0044a8bd
    MOV EAX,dword ptr [ESI]             ; 0044a8c1
    IMUL dword ptr [EDI]                ; 0044a8c3
    MOV EBX,EAX                         ; 0044a8c5
    MOV ECX,EDX                         ; 0044a8c7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a8c9
    IMUL dword ptr [EDI + 0xc]          ; 0044a8cc
    ADD EBX,EAX                         ; 0044a8cf
    ADC ECX,EDX                         ; 0044a8d1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a8d3
    IMUL dword ptr [EDI + 0x18]         ; 0044a8d6
    ADD EAX,EBX                         ; 0044a8d9
    ADC EDX,ECX                         ; 0044a8db
    SHRD EAX,EDX,0x10                   ; 0044a8dd
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044a8e1
    MOV ESI,ESP                         ; 0044a8e5
    ADD EDI,0x1a4                       ; 0044a8e7
    MOV dword ptr [ESP + 0x10],EAX      ; 0044a8ed
    MOV EAX,dword ptr [ESI]             ; 0044a8f1
    IMUL dword ptr [EDI]                ; 0044a8f3
    MOV EBX,EAX                         ; 0044a8f5
    MOV ECX,EDX                         ; 0044a8f7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a8f9
    IMUL dword ptr [EDI + 0xc]          ; 0044a8fc
    ADD EBX,EAX                         ; 0044a8ff
    ADC ECX,EDX                         ; 0044a901
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044a903
    IMUL dword ptr [EDI + 0x18]         ; 0044a906
    ADD EAX,EBX                         ; 0044a909
    ADC EDX,ECX                         ; 0044a90b
    SHRD EAX,EDX,0x10                   ; 0044a90d
    MOV dword ptr [ESP + 0x14],EAX      ; 0044a911
    LEA ESI,[ESP + 0xc]                 ; 0044a915
    MOV EDI,EBP                         ; 0044a919
    MOVSD ES:EDI,ESI                    ; 0044a91b
    MOVSD ES:EDI,ESI                    ; 0044a91c
    MOVSD ES:EDI,ESI                    ; 0044a91d
    MOV EAX,EBP                         ; 0044a91e
    ADD ESP,0x18                        ; 0044a920
    POP EBP                             ; 0044a923
    POP EDI                             ; 0044a924
    POP EBX                             ; 0044a925
    RET                                 ; 0044a926
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044a927
        ;   Label: LAB_0044a927
    SHL EAX,0x2                         ; 0044a92b
    ADD ECX,EAX                         ; 0044a92e
    MOV EDX,dword ptr [ESP]             ; 0044a930
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0044a933
    IMUL EDX                            ; 0044a939
    SHRD EAX,EDX,0x10                   ; 0044a93b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044a93f
    MOV ESI,EAX                         ; 0044a943
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 0044a945
    IMUL EDX                            ; 0044a94b
    SHRD EAX,EDX,0x10                   ; 0044a94d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a951
    ADD ESI,EAX                         ; 0044a955
    MOV EAX,dword ptr [ECX + 0x142c]    ; 0044a957
    IMUL EDX                            ; 0044a95d
    SHRD EAX,EDX,0x10                   ; 0044a95f
    MOV EDX,dword ptr [ESP]             ; 0044a963
    ADD ESI,EAX                         ; 0044a966
    MOV EAX,dword ptr [ECX + 0x138c]    ; 0044a968
    MOV dword ptr [ESP + 0xc],ESI       ; 0044a96e
    IMUL EDX                            ; 0044a972
    SHRD EAX,EDX,0x10                   ; 0044a974
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044a978
    MOV ESI,EAX                         ; 0044a97c
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 0044a97e
    IMUL EDX                            ; 0044a984
    SHRD EAX,EDX,0x10                   ; 0044a986
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a98a
    ADD ESI,EAX                         ; 0044a98e
    MOV EAX,dword ptr [ECX + 0x144c]    ; 0044a990
    IMUL EDX                            ; 0044a996
    SHRD EAX,EDX,0x10                   ; 0044a998
    MOV EDX,dword ptr [ESP]             ; 0044a99c
    ADD ESI,EAX                         ; 0044a99f
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 0044a9a1
    MOV dword ptr [ESP + 0x10],ESI      ; 0044a9a7
    IMUL EDX                            ; 0044a9ab
    SHRD EAX,EDX,0x10                   ; 0044a9ad
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044a9b1
    MOV ESI,EAX                         ; 0044a9b5
    MOV EAX,dword ptr [ECX + 0x140c]    ; 0044a9b7
    IMUL EDX                            ; 0044a9bd
    SHRD EAX,EDX,0x10                   ; 0044a9bf
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044a9c3
    ADD ESI,EAX                         ; 0044a9c7
    MOV EAX,dword ptr [ECX + 0x146c]    ; 0044a9c9
    IMUL EDX                            ; 0044a9cf
    SHRD EAX,EDX,0x10                   ; 0044a9d1
    ADD ESI,EAX                         ; 0044a9d5
    MOV dword ptr [ESP + 0x14],ESI      ; 0044a9d7
    LEA ESI,[ESP + 0xc]                 ; 0044a9db
    MOV EDI,EBP                         ; 0044a9df
    MOVSD ES:EDI,ESI                    ; 0044a9e1
    MOVSD ES:EDI,ESI                    ; 0044a9e2
    MOVSD ES:EDI,ESI                    ; 0044a9e3
    MOV EAX,EBP                         ; 0044a9e4
    ADD ESP,0x18                        ; 0044a9e6
    POP EBP                             ; 0044a9e9
    POP EDI                             ; 0044a9ea
    POP EBX                             ; 0044a9eb
    RET                                 ; 0044a9ec

