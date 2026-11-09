; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD crt_unknown_c_FUN_005c871c(uint param_1,LPCVOID param_2,DWORD param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c8640 at 005c86ce
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   undefined4 DAT_00626774
;   undefined4 DAT_006267a0
;   undefined4 DAT_006267e0
;   undefined4 DAT_00626838
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c31b6
;   crt_unknown.c_FUN_005c862c
;   crt_unknown.c_FUN_005c8640
;   crt_unknown.c_FUN_005c8ae0
;   unkafter_zombie.cpp_FUN_005cc370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c871c
        ;   Label: crt_unknown.c_FUN_005c871c
    PUSH ESI                            ; 005c871d
    PUSH EDI                            ; 005c871e
    PUSH EBP                            ; 005c871f
    MOV EBP,ESP                         ; 005c8720
    SUB ESP,0x14                        ; 005c8722
    MOV EDI,dword ptr [EBP + 0x14]      ; 005c8725
    TEST EDI,EDI                        ; 005c8728
    JL 0x005c8734                       ; 005c872a
        ;   XREF to: 005c8734 (CONDITIONAL_JUMP)  ; LAB_005c8734
    CMP EDI,dword ptr [0x006267e0]      ; 005c872c | DAT_006267e0
    JBE 0x005c8745                      ; 005c8732
        ;   XREF to: 005c8745 (CONDITIONAL_JUMP)  ; LAB_005c8745
    PUSH 0x4                            ; 005c8734
        ;   Label: LAB_005c8734
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c8736
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV EAX,0xffffffff                  ; 005c873b
    JMP 0x005c8886                      ; 005c8740
        ;   XREF to: 005c8886 (UNCONDITIONAL_JUMP)  ; LAB_005c8886
    MOV EDX,dword ptr [0x00626838]      ; 005c8745 | DAT_00626838
        ;   Label: LAB_005c8745
    MOV EAX,dword ptr [EDX + EDI*0x4]   ; 005c874b
    PUSH EDI                            ; 005c874e
    MOV dword ptr [EBP + -0x8],EAX      ; 005c874f
    CALL crt_unknown.c_FUN_005c8ae0     ; 005c8752
        ;   XREF to: 005c8ae0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8ae0()
    MOV EBX,EAX                         ; 005c8757
    ADD ESP,0x4                         ; 005c8759
    MOV dword ptr [EBP + -0x4],EAX      ; 005c875c
    TEST EAX,EAX                        ; 005c875f
    JNZ 0x005c8779                      ; 005c8761
        ;   XREF to: 005c8779 (CONDITIONAL_JUMP)  ; LAB_005c8779
    PUSH 0x4                            ; 005c8763
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c8765
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV EAX,0xffffffff                  ; 005c876a
    ADD ESP,0x4                         ; 005c876f
    MOV ESP,EBP                         ; 005c8772
    POP EBP                             ; 005c8774
    POP EDI                             ; 005c8775
    POP ESI                             ; 005c8776
    POP EBX                             ; 005c8777
    RET                                 ; 005c8778
    TEST AL,0x2                         ; 005c8779
        ;   Label: LAB_005c8779
    JNZ 0x005c8793                      ; 005c877b
        ;   XREF to: 005c8793 (CONDITIONAL_JUMP)  ; LAB_005c8793
    PUSH 0x6                            ; 005c877d
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c877f
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV EAX,0xffffffff                  ; 005c8784
    ADD ESP,0x4                         ; 005c8789
    MOV ESP,EBP                         ; 005c878c
    POP EBP                             ; 005c878e
    POP EDI                             ; 005c878f
    POP ESI                             ; 005c8790
    POP EBX                             ; 005c8791
    RET                                 ; 005c8792
    PUSH EDI                            ; 005c8793
        ;   Label: LAB_005c8793
    CALL dword ptr [0x00626600]         ; 005c8794 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    ADD ESP,0x4                         ; 005c879a
    TEST BL,0x80                        ; 005c879d
    JZ 0x005c87cc                       ; 005c87a0
        ;   XREF to: 005c87cc (CONDITIONAL_JUMP)  ; LAB_005c87cc
    PUSH 0x2                            ; 005c87a2
    PUSH 0x0                            ; 005c87a4
    PUSH 0x0                            ; 005c87a6
    MOV EBX,dword ptr [EBP + -0x8]      ; 005c87a8
    PUSH EBX                            ; 005c87ab
    CALL dword ptr CS:[0x5d0640]        ; 005c87ac
    CMP EAX,-0x1                        ; 005c87b3
    JNZ 0x005c87cc                      ; 005c87b6
        ;   XREF to: 005c87cc (CONDITIONAL_JUMP)  ; LAB_005c87cc
    PUSH EDI                            ; 005c87b8
    CALL dword ptr [0x00626604]         ; 005c87b9 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c87bf
    CALL crt_unknown.c_FUN_005c862c     ; 005c87c2
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    JMP 0x005c8889                      ; 005c87c7
        ;   XREF to: 005c8889 (UNCONDITIONAL_JUMP)  ; LAB_005c8889
    TEST byte ptr [EBP + -0x3],0x80     ; 005c87cc
        ;   Label: LAB_005c87cc
    JZ 0x005c87f5                       ; 005c87d0
        ;   XREF to: 005c87f5 (CONDITIONAL_JUMP)  ; LAB_005c87f5
    PUSH EDI                            ; 005c87d2
    CALL crt_unknown.c_FUN_005c8640     ; 005c87d3
        ;   XREF to: 005c8640 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8640()
    ADD ESP,0x4                         ; 005c87d8
    TEST EAX,EAX                        ; 005c87db
    JZ 0x005c87f5                       ; 005c87dd
        ;   XREF to: 005c87f5 (CONDITIONAL_JUMP)  ; LAB_005c87f5
    PUSH EDI                            ; 005c87df
    CALL dword ptr [0x00626604]         ; 005c87e0 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c87e6
    ADD ESP,0x4                         ; 005c87eb
    MOV ESP,EBP                         ; 005c87ee
    POP EBP                             ; 005c87f0
    POP EDI                             ; 005c87f1
    POP ESI                             ; 005c87f2
    POP EBX                             ; 005c87f3
    RET                                 ; 005c87f4
    TEST byte ptr [EBP + -0x4],0x40     ; 005c87f5
        ;   Label: LAB_005c87f5
    JZ 0x005c8890                       ; 005c87f9
        ;   XREF to: 005c8890 (CONDITIONAL_JUMP)  ; LAB_005c8890
    CMP dword ptr [0x006267a0],0x0      ; 005c87ff | DAT_006267a0
    JZ 0x005c882d                       ; 005c8806
        ;   XREF to: 005c882d (CONDITIONAL_JUMP)  ; LAB_005c882d
    PUSH EDI                            ; 005c8808
    CALL dword ptr [0x00626774]         ; 005c8809 | DAT_00626774
    ADD ESP,0x4                         ; 005c880f
    TEST EAX,EAX                        ; 005c8812
    JZ 0x005c882d                       ; 005c8814
        ;   XREF to: 005c882d (CONDITIONAL_JUMP)  ; LAB_005c882d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005c8816
    PUSH EDX                            ; 005c8819
    MOV EBX,dword ptr [EBP + 0x18]      ; 005c881a
    PUSH EBX                            ; 005c881d
    PUSH EAX                            ; 005c881e
    CALL dword ptr [0x006267a0]         ; 005c881f | DAT_006267a0
    ADD ESP,0xc                         ; 005c8825
    MOV dword ptr [EBP + -0xc],EAX      ; 005c8828
    JMP 0x005c8860                      ; 005c882b
        ;   XREF to: 005c8860 (UNCONDITIONAL_JUMP)  ; LAB_005c8860
    PUSH 0x0                            ; 005c882d
        ;   Label: LAB_005c882d
    LEA EAX,[EBP + -0xc]                ; 005c882f
    PUSH EAX                            ; 005c8832
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005c8833
    PUSH EBX                            ; 005c8836
    MOV ECX,dword ptr [EBP + 0x18]      ; 005c8837
    PUSH ECX                            ; 005c883a
    MOV ESI,dword ptr [EBP + -0x8]      ; 005c883b
    PUSH ESI                            ; 005c883e
    CALL dword ptr CS:[0x5d068c]        ; 005c883f
    TEST EAX,EAX                        ; 005c8846
    JNZ 0x005c8860                      ; 005c8848
        ;   XREF to: 005c8860 (CONDITIONAL_JUMP)  ; LAB_005c8860
    PUSH EDI                            ; 005c884a
    CALL dword ptr [0x00626604]         ; 005c884b | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c8851
    CALL crt_unknown.c_FUN_005c862c     ; 005c8854
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    MOV ESP,EBP                         ; 005c8859
    POP EBP                             ; 005c885b
    POP EDI                             ; 005c885c
    POP ESI                             ; 005c885d
    POP EBX                             ; 005c885e
    RET                                 ; 005c885f
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c8860
        ;   Label: LAB_005c8860
    CMP EAX,dword ptr [EBP + 0x1c]      ; 005c8863
    JZ 0x005c887c                       ; 005c8866
        ;   XREF to: 005c887c (CONDITIONAL_JUMP)  ; LAB_005c887c
    PUSH 0xc                            ; 005c886c
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c886e
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c8873
    ADD ESP,0x4                         ; 005c8876
    MOV dword ptr [EBP + 0x1c],EAX      ; 005c8879
    PUSH EDI                            ; 005c887c
        ;   Label: LAB_005c887c
    CALL dword ptr [0x00626604]         ; 005c887d | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c8883
    ADD ESP,0x4                         ; 005c8886
        ;   Label: LAB_005c8886
    MOV ESP,EBP                         ; 005c8889
        ;   Label: LAB_005c8889
    POP EBP                             ; 005c888b
    POP EDI                             ; 005c888c
    POP ESI                             ; 005c888d
    POP EBX                             ; 005c888e
    RET                                 ; 005c888f
    CALL unkafter_zombie.cpp_FUN_005cc370 ; 005c8890
        ;   XREF to: 005cc370 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cc370()
        ;   Label: LAB_005c8890
    MOV dword ptr [EBP + -0x10],EAX     ; 005c8895
    CMP EAX,0xb0                        ; 005c8898
    JNC 0x005c88a4                      ; 005c889d
        ;   XREF to: 005c88a4 (CONDITIONAL_JUMP)  ; LAB_005c88a4
    CALL crt_unknown.c_FUN_005c31b6     ; 005c889f
        ;   XREF to: 005c31b6 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c31b6()
    MOV ECX,dword ptr [EBP + -0x10]     ; 005c88a4
        ;   Label: LAB_005c88a4
    MOV EBX,0x200                       ; 005c88a7
    CMP ECX,0x230                       ; 005c88ac
    JNC 0x005c88b9                      ; 005c88b2
        ;   XREF to: 005c88b9 (CONDITIONAL_JUMP)  ; LAB_005c88b9
    MOV EBX,0x80                        ; 005c88b4
    LEA EAX,[EBX + 0x3]                 ; 005c88b9
        ;   Label: LAB_005c88b9
    AND AL,0xfc                         ; 005c88bc
    SUB ESP,EAX                         ; 005c88be
    XOR EAX,EAX                         ; 005c88c0
    MOV dword ptr [EBP + -0x10],EAX     ; 005c88c2
    MOV dword ptr [EBP + -0x14],EAX     ; 005c88c5
    MOV dword ptr [EBP + -0xc],EAX      ; 005c88c8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c88cb
    MOV ESI,ESP                         ; 005c88ce
    TEST EAX,EAX                        ; 005c88d0
    JBE 0x005c8a3d                      ; 005c88d2
        ;   XREF to: 005c8a3d (CONDITIONAL_JUMP)  ; LAB_005c8a3d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c88d8
        ;   Label: LAB_005c88d8
    ADD EAX,dword ptr [EBP + -0x10]     ; 005c88db
    CMP byte ptr [EAX],0xa              ; 005c88de
    JNZ 0x005c8985                      ; 005c88e1
        ;   XREF to: 005c8985 (CONDITIONAL_JUMP)  ; LAB_005c8985
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c88e7
    MOV byte ptr [ESI + EAX*0x1],0xd    ; 005c88ea
    MOV ECX,dword ptr [EBP + -0x14]     ; 005c88ee
    INC ECX                             ; 005c88f1
    MOV dword ptr [EBP + -0x14],ECX     ; 005c88f2
    CMP EBX,ECX                         ; 005c88f5
    JNZ 0x005c8985                      ; 005c88f7
        ;   XREF to: 005c8985 (CONDITIONAL_JUMP)  ; LAB_005c8985
    CMP dword ptr [0x006267a0],0x0      ; 005c88fd | DAT_006267a0
    JZ 0x005c8925                       ; 005c8904
        ;   XREF to: 005c8925 (CONDITIONAL_JUMP)  ; LAB_005c8925
    PUSH EDI                            ; 005c8906
    CALL dword ptr [0x00626774]         ; 005c8907 | DAT_00626774
    ADD ESP,0x4                         ; 005c890d
    TEST EAX,EAX                        ; 005c8910
    JZ 0x005c8925                       ; 005c8912
        ;   XREF to: 005c8925 (CONDITIONAL_JUMP)  ; LAB_005c8925
    PUSH EBX                            ; 005c8914
    PUSH ESI                            ; 005c8915
    PUSH EAX                            ; 005c8916
    CALL dword ptr [0x006267a0]         ; 005c8917 | DAT_006267a0
    ADD ESP,0xc                         ; 005c891d
    MOV dword ptr [EBP + -0x14],EAX     ; 005c8920
    JMP 0x005c8952                      ; 005c8923
        ;   XREF to: 005c8952 (UNCONDITIONAL_JUMP)  ; LAB_005c8952
    PUSH 0x0                            ; 005c8925
        ;   Label: LAB_005c8925
    LEA EAX,[EBP + -0x14]               ; 005c8927
    PUSH EAX                            ; 005c892a
    PUSH EBX                            ; 005c892b
    PUSH ESI                            ; 005c892c
    MOV ECX,dword ptr [EBP + -0x8]      ; 005c892d
    PUSH ECX                            ; 005c8930
    CALL dword ptr CS:[0x5d068c]        ; 005c8931
    TEST EAX,EAX                        ; 005c8938
    JNZ 0x005c8952                      ; 005c893a
        ;   XREF to: 005c8952 (CONDITIONAL_JUMP)  ; LAB_005c8952
    PUSH EDI                            ; 005c893c
    CALL dword ptr [0x00626604]         ; 005c893d | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c8943
    CALL crt_unknown.c_FUN_005c862c     ; 005c8946
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    MOV ESP,EBP                         ; 005c894b
    POP EBP                             ; 005c894d
    POP EDI                             ; 005c894e
    POP ESI                             ; 005c894f
    POP EBX                             ; 005c8950
    RET                                 ; 005c8951
    CMP EBX,dword ptr [EBP + -0x14]     ; 005c8952
        ;   Label: LAB_005c8952
    JZ 0x005c897a                       ; 005c8955
        ;   XREF to: 005c897a (CONDITIONAL_JUMP)  ; LAB_005c897a
    PUSH 0xc                            ; 005c8957
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c8959
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c895e
    PUSH EDI                            ; 005c8961
    CALL dword ptr [0x00626604]         ; 005c8962 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c8968
    MOV EBX,dword ptr [EBP + -0x14]     ; 005c896b
    ADD ESP,0x4                         ; 005c896e
    ADD EAX,EBX                         ; 005c8971
    MOV ESP,EBP                         ; 005c8973
    POP EBP                             ; 005c8975
    POP EDI                             ; 005c8976
    POP ESI                             ; 005c8977
    POP EBX                             ; 005c8978
    RET                                 ; 005c8979
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c897a
        ;   Label: LAB_005c897a
    XOR EDX,EDX                         ; 005c897d
    MOV dword ptr [EBP + -0xc],EAX      ; 005c897f
    MOV dword ptr [EBP + -0x14],EDX     ; 005c8982
    MOV EAX,dword ptr [EBP + 0x18]      ; 005c8985
        ;   Label: LAB_005c8985
    ADD EAX,dword ptr [EBP + -0x10]     ; 005c8988
    MOV EDX,dword ptr [EBP + -0x14]     ; 005c898b
    MOV AL,byte ptr [EAX]               ; 005c898e
    MOV byte ptr [EDX + ESI*0x1],AL     ; 005c8990
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c8993
    MOV EDX,dword ptr [EBP + -0x14]     ; 005c8996
    INC EAX                             ; 005c8999
    INC EDX                             ; 005c899a
    MOV dword ptr [EBP + -0x10],EAX     ; 005c899b
    MOV dword ptr [EBP + -0x14],EDX     ; 005c899e
    CMP EBX,EDX                         ; 005c89a1
    JNZ 0x005c8a31                      ; 005c89a3
        ;   XREF to: 005c8a31 (CONDITIONAL_JUMP)  ; LAB_005c8a31
    CMP dword ptr [0x006267a0],0x0      ; 005c89a9 | DAT_006267a0
    JZ 0x005c89d1                       ; 005c89b0
        ;   XREF to: 005c89d1 (CONDITIONAL_JUMP)  ; LAB_005c89d1
    PUSH EDI                            ; 005c89b2
    CALL dword ptr [0x00626774]         ; 005c89b3 | DAT_00626774
    ADD ESP,0x4                         ; 005c89b9
    TEST EAX,EAX                        ; 005c89bc
    JZ 0x005c89d1                       ; 005c89be
        ;   XREF to: 005c89d1 (CONDITIONAL_JUMP)  ; LAB_005c89d1
    PUSH EBX                            ; 005c89c0
    PUSH ESI                            ; 005c89c1
    PUSH EAX                            ; 005c89c2
    CALL dword ptr [0x006267a0]         ; 005c89c3 | DAT_006267a0
    ADD ESP,0xc                         ; 005c89c9
    MOV dword ptr [EBP + -0x14],EAX     ; 005c89cc
    JMP 0x005c89fe                      ; 005c89cf
        ;   XREF to: 005c89fe (UNCONDITIONAL_JUMP)  ; LAB_005c89fe
    PUSH 0x0                            ; 005c89d1
        ;   Label: LAB_005c89d1
    LEA EAX,[EBP + -0x14]               ; 005c89d3
    PUSH EAX                            ; 005c89d6
    PUSH EBX                            ; 005c89d7
    PUSH ESI                            ; 005c89d8
    MOV EDX,dword ptr [EBP + -0x8]      ; 005c89d9
    PUSH EDX                            ; 005c89dc
    CALL dword ptr CS:[0x5d068c]        ; 005c89dd
    TEST EAX,EAX                        ; 005c89e4
    JNZ 0x005c89fe                      ; 005c89e6
        ;   XREF to: 005c89fe (CONDITIONAL_JUMP)  ; LAB_005c89fe
    PUSH EDI                            ; 005c89e8
    CALL dword ptr [0x00626604]         ; 005c89e9 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c89ef
    CALL crt_unknown.c_FUN_005c862c     ; 005c89f2
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    MOV ESP,EBP                         ; 005c89f7
    POP EBP                             ; 005c89f9
    POP EDI                             ; 005c89fa
    POP ESI                             ; 005c89fb
    POP EBX                             ; 005c89fc
    RET                                 ; 005c89fd
    CMP EBX,dword ptr [EBP + -0x14]     ; 005c89fe
        ;   Label: LAB_005c89fe
    JZ 0x005c8a26                       ; 005c8a01
        ;   XREF to: 005c8a26 (CONDITIONAL_JUMP)  ; LAB_005c8a26
    PUSH 0xc                            ; 005c8a03
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c8a05
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c8a0a
    PUSH EDI                            ; 005c8a0d
    CALL dword ptr [0x00626604]         ; 005c8a0e | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c8a14
    MOV EDX,dword ptr [EBP + -0x14]     ; 005c8a17
    ADD ESP,0x4                         ; 005c8a1a
    ADD EAX,EDX                         ; 005c8a1d
    MOV ESP,EBP                         ; 005c8a1f
    POP EBP                             ; 005c8a21
    POP EDI                             ; 005c8a22
    POP ESI                             ; 005c8a23
    POP EBX                             ; 005c8a24
    RET                                 ; 005c8a25
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c8a26
        ;   Label: LAB_005c8a26
    MOV dword ptr [EBP + -0xc],EAX      ; 005c8a29
    XOR EAX,EAX                         ; 005c8a2c
    MOV dword ptr [EBP + -0x14],EAX     ; 005c8a2e
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c8a31
        ;   Label: LAB_005c8a31
    CMP EAX,dword ptr [EBP + 0x1c]      ; 005c8a34
    JC 0x005c88d8                       ; 005c8a37
        ;   XREF to: 005c88d8 (CONDITIONAL_JUMP)  ; LAB_005c88d8
    CMP dword ptr [EBP + -0x14],0x0     ; 005c8a3d
        ;   Label: LAB_005c8a3d
    JZ 0x005c887c                       ; 005c8a41
        ;   XREF to: 005c887c (CONDITIONAL_JUMP)  ; LAB_005c887c
    CMP dword ptr [0x006267a0],0x0      ; 005c8a47 | DAT_006267a0
    JZ 0x005c8a72                       ; 005c8a4e
        ;   XREF to: 005c8a72 (CONDITIONAL_JUMP)  ; LAB_005c8a72
    PUSH EDI                            ; 005c8a50
    CALL dword ptr [0x00626774]         ; 005c8a51 | DAT_00626774
    ADD ESP,0x4                         ; 005c8a57
    TEST EAX,EAX                        ; 005c8a5a
    JZ 0x005c8a72                       ; 005c8a5c
        ;   XREF to: 005c8a72 (CONDITIONAL_JUMP)  ; LAB_005c8a72
    MOV EBX,dword ptr [EBP + -0x14]     ; 005c8a5e
    PUSH EBX                            ; 005c8a61
    PUSH ESI                            ; 005c8a62
    PUSH EAX                            ; 005c8a63
    CALL dword ptr [0x006267a0]         ; 005c8a64 | DAT_006267a0
    ADD ESP,0xc                         ; 005c8a6a
    MOV dword ptr [EBP + -0x10],EAX     ; 005c8a6d
    JMP 0x005c8aa2                      ; 005c8a70
        ;   XREF to: 005c8aa2 (UNCONDITIONAL_JUMP)  ; LAB_005c8aa2
    PUSH 0x0                            ; 005c8a72
        ;   Label: LAB_005c8a72
    LEA EAX,[EBP + -0x10]               ; 005c8a74
    PUSH EAX                            ; 005c8a77
    MOV EAX,dword ptr [EBP + -0x14]     ; 005c8a78
    PUSH EAX                            ; 005c8a7b
    PUSH ESI                            ; 005c8a7c
    MOV EDX,dword ptr [EBP + -0x8]      ; 005c8a7d
    PUSH EDX                            ; 005c8a80
    CALL dword ptr CS:[0x5d068c]        ; 005c8a81
    TEST EAX,EAX                        ; 005c8a88
    JNZ 0x005c8aa2                      ; 005c8a8a
        ;   XREF to: 005c8aa2 (CONDITIONAL_JUMP)  ; LAB_005c8aa2
    PUSH EDI                            ; 005c8a8c
    CALL dword ptr [0x00626604]         ; 005c8a8d | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c8a93
    CALL crt_unknown.c_FUN_005c862c     ; 005c8a96
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c862c()
    MOV ESP,EBP                         ; 005c8a9b
    POP EBP                             ; 005c8a9d
    POP EDI                             ; 005c8a9e
    POP ESI                             ; 005c8a9f
    POP EBX                             ; 005c8aa0
    RET                                 ; 005c8aa1
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c8aa2
        ;   Label: LAB_005c8aa2
    CMP EAX,dword ptr [EBP + -0x14]     ; 005c8aa5
    JZ 0x005c887c                       ; 005c8aa8
        ;   XREF to: 005c887c (CONDITIONAL_JUMP)  ; LAB_005c887c
    PUSH 0xc                            ; 005c8aae
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c8ab0
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c8ab5
    PUSH EDI                            ; 005c8ab8
    CALL dword ptr [0x00626604]         ; 005c8ab9 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c8abf
    MOV ESI,dword ptr [EBP + -0x10]     ; 005c8ac2
    ADD ESP,0x4                         ; 005c8ac5
    ADD EAX,ESI                         ; 005c8ac8
    MOV ESP,EBP                         ; 005c8aca
    POP EBP                             ; 005c8acc
    POP EDI                             ; 005c8acd
    POP ESI                             ; 005c8ace
    POP EBX                             ; 005c8acf
    RET                                 ; 005c8ad0

