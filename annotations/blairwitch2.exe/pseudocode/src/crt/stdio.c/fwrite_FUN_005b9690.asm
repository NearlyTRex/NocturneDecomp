; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIZE_T __cdecl crt_stdio_c_fwrite_FUN_005b9690(void *ptr,SIZE_T size,SIZE_T count,_FILE *file)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; SIZE_T           Stack[0x8]:4   size
; SIZE_T           Stack[0xc]:4   count
; _FILE *          Stack[0x10]:4   file
;
; XREF[7]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_00516e60 at 00516ebd
;   cockpit_pkbitmap.cpp_writePBGHeader_FUN_00517200 at 00517237
;   core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00444830 at 00444876
;   core_setdir.cpp_CZThumb_write_FUN_00538670 at 00538687
;   engine_pcx.c_saveScreenshotGeneral_FUN_00514a30 at 00514b44
;   engine_pod.cpp_FUN_0051b6dc at 0051b851
;   support_trstream.cpp_COutStreamFile_write_FUN_0057dca0 at 0057dcc4
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_stdio.c_fputc_FUN_005bab40
;   crt_unknown.c_FUN_005bcdfc
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005be1d0
;   crt_unknown.c_FUN_005bea80
;   crt_unknown.c_FUN_005bfb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9690
        ;   Label: crt_stdio.c_fwrite_FUN_005b9690
    PUSH ESI                            ; 005b9691
    PUSH EDI                            ; 005b9692
    PUSH EBP                            ; 005b9693
    SUB ESP,0x10                        ; 005b9694
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005b9697
    MOV EBX,dword ptr [ESP + 0x30]      ; 005b969b
    MOV EDX,dword ptr [EBX + 0x10]      ; 005b969f
    PUSH EDX                            ; 005b96a2
    CALL dword ptr [0x0061f2a8]         ; 005b96a3 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV AH,byte ptr [EBX + 0xc]         ; 005b96a9
    ADD ESP,0x4                         ; 005b96ac
    TEST AH,0x2                         ; 005b96af
    JNZ 0x005b96db                      ; 005b96b2
        ;   XREF to: 005b96db (CONDITIONAL_JUMP)  ; LAB_005b96db
    PUSH 0x4                            ; 005b96b4
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005b96b6
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005b96bb
    MOV AH,byte ptr [EBX + 0xc]         ; 005b96be
    MOV EDX,dword ptr [EBX + 0x10]      ; 005b96c1
    OR AH,0x20                          ; 005b96c4
    PUSH EDX                            ; 005b96c7
    MOV byte ptr [EBX + 0xc],AH         ; 005b96c8
    CALL dword ptr [0x0061f2ac]         ; 005b96cb | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005b96d1
    XOR EAX,EAX                         ; 005b96d4
    JMP 0x005b98c1                      ; 005b96d6
        ;   XREF to: 005b98c1 (UNCONDITIONAL_JUMP)  ; LAB_005b98c1
    IMUL EDI,dword ptr [ESP + 0x28]     ; 005b96db
        ;   Label: LAB_005b96db
    TEST EDI,EDI                        ; 005b96e0
    JNZ 0x005b96fb                      ; 005b96e2
        ;   XREF to: 005b96fb (CONDITIONAL_JUMP)  ; LAB_005b96fb
    MOV EAX,dword ptr [EBX + 0x10]      ; 005b96e4
    PUSH EAX                            ; 005b96e7
    CALL dword ptr [0x0061f2ac]         ; 005b96e8 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005b96ee
    MOV EAX,EDI                         ; 005b96f1
    ADD ESP,0x10                        ; 005b96f3
    POP EBP                             ; 005b96f6
    POP EDI                             ; 005b96f7
    POP ESI                             ; 005b96f8
    POP EBX                             ; 005b96f9
    RET                                 ; 005b96fa
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b96fb
        ;   Label: LAB_005b96fb
    CMP dword ptr [EAX + 0x8],0x0       ; 005b96fe
    JNZ 0x005b970d                      ; 005b9702
        ;   XREF to: 005b970d (CONDITIONAL_JUMP)  ; LAB_005b970d
    PUSH EBX                            ; 005b9704
    CALL crt_unknown.c_FUN_005be1d0     ; 005b9705
        ;   XREF to: 005be1d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be1d0()
    ADD ESP,0x4                         ; 005b970a
    MOV EAX,dword ptr [EBX + 0xc]       ; 005b970d
        ;   Label: LAB_005b970d
    MOV DL,byte ptr [EBX + 0xc]         ; 005b9710
    XOR EBP,EBP                         ; 005b9713
    AND EAX,0x30                        ; 005b9715
    AND DL,0xcf                         ; 005b9718
    MOV dword ptr [ESP + 0x8],EBP       ; 005b971b
    MOV dword ptr [ESP],EAX             ; 005b971f
    MOV byte ptr [EBX + 0xc],DL         ; 005b9722
    TEST DL,0x40                        ; 005b9725
    JZ 0x005b9813                       ; 005b9728
        ;   XREF to: 005b9813 (CONDITIONAL_JUMP)  ; LAB_005b9813
    MOV dword ptr [ESP + 0xc],EDI       ; 005b972e
    CMP dword ptr [EBX + 0x4],0x0       ; 005b9732
        ;   Label: LAB_005b9732
    JNZ 0x005b9782                      ; 005b9736
        ;   XREF to: 005b9782 (CONDITIONAL_JUMP)  ; LAB_005b9782
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b9738
    CMP EAX,dword ptr [EBX + 0x14]      ; 005b973c
    JC 0x005b9782                       ; 005b973f
        ;   XREF to: 005b9782 (CONDITIONAL_JUMP)  ; LAB_005b9782
    XOR AL,AL                           ; 005b9741
    AND AH,0xfe                         ; 005b9743
    TEST EAX,EAX                        ; 005b9746
    JNZ 0x005b974e                      ; 005b9748
        ;   XREF to: 005b974e (CONDITIONAL_JUMP)  ; LAB_005b974e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b974a
    PUSH EAX                            ; 005b974e
        ;   Label: LAB_005b974e
    MOV ESI,dword ptr [ESP + 0x28]      ; 005b974f
    PUSH ESI                            ; 005b9753
    MOV EDI,dword ptr [EBX + 0x10]      ; 005b9754
    PUSH EDI                            ; 005b9757
    CALL crt_unknown.c_FUN_005bfb00     ; 005b9758
        ;   XREF to: 005bfb00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb00()
    ADD ESP,0xc                         ; 005b975d
    MOV EBP,EAX                         ; 005b9760
    CMP EAX,-0x1                        ; 005b9762
    JZ 0x005b977c                       ; 005b9765
        ;   XREF to: 005b977c (CONDITIONAL_JUMP)  ; LAB_005b977c
    TEST EAX,EAX                        ; 005b9767
    JNZ 0x005b97e0                      ; 005b9769
        ;   XREF to: 005b97e0 (CONDITIONAL_JUMP)  ; LAB_005b97e0
    CALL dword ptr [0x0061f2a4]         ; 005b976f | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
    MOV dword ptr [EAX + 0x4],0xc       ; 005b9775
    OR byte ptr [EBX + 0xc],0x20        ; 005b977c
        ;   Label: LAB_005b977c
    JMP 0x005b97e0                      ; 005b9780
        ;   XREF to: 005b97e0 (UNCONDITIONAL_JUMP)  ; LAB_005b97e0
    MOV EBP,dword ptr [EBX + 0x14]      ; 005b9782
        ;   Label: LAB_005b9782
    MOV ESI,dword ptr [EBX + 0x4]       ; 005b9785
    MOV EDI,dword ptr [ESP + 0xc]       ; 005b9788
    SUB EBP,ESI                         ; 005b978c
    CMP EBP,EDI                         ; 005b978e
    JBE 0x005b9794                      ; 005b9790
        ;   XREF to: 005b9794 (CONDITIONAL_JUMP)  ; LAB_005b9794
    MOV EBP,EDI                         ; 005b9792
    MOV ESI,dword ptr [ESP + 0x24]      ; 005b9794
        ;   Label: LAB_005b9794
    MOV ECX,EBP                         ; 005b9798
    MOV EDI,dword ptr [EBX]             ; 005b979a
    PUSH ES                             ; 005b979c
    MOV AX,DS                           ; 005b979d
    MOV ES,AX                           ; 005b979f
    PUSH EDI                            ; 005b97a1
    MOV EAX,ECX                         ; 005b97a2
    SHR ECX,0x2                         ; 005b97a4
    MOVSD.REP ES:EDI,ESI                ; 005b97a7
    MOV CL,AL                           ; 005b97a9
    AND CL,0x3                          ; 005b97ab
    MOVSB.REP ES:EDI,ESI                ; 005b97ae
    POP EDI                             ; 005b97b0
    POP ES                              ; 005b97b1
    MOV EAX,dword ptr [EBX]             ; 005b97b2
    MOV EDX,dword ptr [EBX + 0x4]       ; 005b97b4
    MOV CH,byte ptr [EBX + 0xd]         ; 005b97b7
    ADD EAX,EBP                         ; 005b97ba
    ADD EDX,EBP                         ; 005b97bc
    MOV dword ptr [EBX],EAX             ; 005b97be
    OR CH,0x10                          ; 005b97c0
    MOV dword ptr [EBX + 0x4],EDX       ; 005b97c3
    MOV byte ptr [EBX + 0xd],CH         ; 005b97c6
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b97c9
    CMP EAX,dword ptr [EBX + 0x14]      ; 005b97cc
    JZ 0x005b97d7                       ; 005b97cf
        ;   XREF to: 005b97d7 (CONDITIONAL_JUMP)  ; LAB_005b97d7
    TEST byte ptr [EBX + 0xd],0x4       ; 005b97d1
    JZ 0x005b97e0                       ; 005b97d5
        ;   XREF to: 005b97e0 (CONDITIONAL_JUMP)  ; LAB_005b97e0
    PUSH EBX                            ; 005b97d7
        ;   Label: LAB_005b97d7
    CALL crt_unknown.c_FUN_005bea80     ; 005b97d8
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bea80()
    ADD ESP,0x4                         ; 005b97dd
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b97e0
        ;   Label: LAB_005b97e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b97e4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005b97e8
    ADD EAX,EBP                         ; 005b97ec
    ADD EDX,EBP                         ; 005b97ee
    MOV dword ptr [ESP + 0x24],EAX      ; 005b97f0
    MOV dword ptr [ESP + 0x8],EDX       ; 005b97f4
    SUB ECX,EBP                         ; 005b97f8
    MOV dword ptr [ESP + 0xc],ECX       ; 005b97fa
    JZ 0x005b9893                       ; 005b97fe
        ;   XREF to: 005b9893 (CONDITIONAL_JUMP)  ; LAB_005b9893
    TEST byte ptr [EBX + 0xc],0x20      ; 005b9804
    JZ 0x005b9732                       ; 005b9808
        ;   XREF to: 005b9732 (CONDITIONAL_JUMP)  ; LAB_005b9732
    JMP 0x005b9893                      ; 005b980e
        ;   XREF to: 005b9893 (UNCONDITIONAL_JUMP)  ; LAB_005b9893
    MOV CL,byte ptr [EBX + 0xd]         ; 005b9813
        ;   Label: LAB_005b9813
    XOR ESI,ESI                         ; 005b9816
    TEST CL,0x4                         ; 005b9818
    JZ 0x005b9831                       ; 005b981b
        ;   XREF to: 005b9831 (CONDITIONAL_JUMP)  ; LAB_005b9831
    MOV CH,CL                           ; 005b981d
    AND CH,0xfa                         ; 005b981f
    MOV AL,CH                           ; 005b9822
    MOV byte ptr [EBX + 0xd],CH         ; 005b9824
    OR AL,0x1                           ; 005b9827
    MOV ESI,0x1                         ; 005b9829
    MOV byte ptr [EBX + 0xd],AL         ; 005b982e
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b9831
        ;   Label: LAB_005b9831
    MOV EBP,dword ptr [EAX + 0xc]       ; 005b9834
    MOV dword ptr [ESP + 0x4],EBP       ; 005b9837
    MOV dword ptr [EAX + 0xc],0x1       ; 005b983b
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b9842
    XOR EAX,EAX                         ; 005b9846
        ;   Label: LAB_005b9846
    PUSH EBX                            ; 005b9848
    MOV AL,byte ptr [EBP]               ; 005b9849
    PUSH EAX                            ; 005b984c
    INC EBP                             ; 005b984d
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 005b984e
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005bab40(int character, _FILE * file)
    MOV DL,byte ptr [EBX + 0xc]         ; 005b9853
    ADD ESP,0x8                         ; 005b9856
    TEST DL,0x30                        ; 005b9859
    JNZ 0x005b986b                      ; 005b985c
        ;   XREF to: 005b986b (CONDITIONAL_JUMP)  ; LAB_005b986b
    MOV ECX,dword ptr [ESP + 0x8]       ; 005b985e
    INC ECX                             ; 005b9862
    MOV dword ptr [ESP + 0x8],ECX       ; 005b9863
    CMP EDI,ECX                         ; 005b9867
    JNZ 0x005b9846                      ; 005b9869
        ;   XREF to: 005b9846 (CONDITIONAL_JUMP)  ; LAB_005b9846
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b986b
        ;   Label: LAB_005b986b
    MOV EDI,dword ptr [ESP + 0x4]       ; 005b986e
    MOV dword ptr [EAX + 0xc],EDI       ; 005b9872
    TEST ESI,ESI                        ; 005b9875
    JZ 0x005b9893                       ; 005b9877
        ;   XREF to: 005b9893 (CONDITIONAL_JUMP)  ; LAB_005b9893
    MOV DH,byte ptr [EBX + 0xd]         ; 005b9879
    AND DH,0xfa                         ; 005b987c
    MOV CL,DH                           ; 005b987f
    MOV byte ptr [EBX + 0xd],DH         ; 005b9881
    OR CL,0x4                           ; 005b9884
    PUSH EBX                            ; 005b9887
    MOV byte ptr [EBX + 0xd],CL         ; 005b9888
    CALL crt_unknown.c_FUN_005bea80     ; 005b988b
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bea80()
    ADD ESP,0x4                         ; 005b9890
    TEST byte ptr [EBX + 0xc],0x20      ; 005b9893
        ;   Label: LAB_005b9893
    JZ 0x005b989f                       ; 005b9897
        ;   XREF to: 005b989f (CONDITIONAL_JUMP)  ; LAB_005b989f
    XOR EDI,EDI                         ; 005b9899
    MOV dword ptr [ESP + 0x8],EDI       ; 005b989b
    MOV EAX,dword ptr [ESP]             ; 005b989f
        ;   Label: LAB_005b989f
    MOV EBP,dword ptr [EBX + 0xc]       ; 005b98a2
    OR EBP,EAX                          ; 005b98a5
    MOV EAX,dword ptr [EBX + 0x10]      ; 005b98a7
    PUSH EAX                            ; 005b98aa
    MOV dword ptr [EBX + 0xc],EBP       ; 005b98ab
    CALL dword ptr [0x0061f2ac]         ; 005b98ae | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005b98b4
    XOR EDX,EDX                         ; 005b98b7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b98b9
    DIV dword ptr [ESP + 0x28]          ; 005b98bd
    ADD ESP,0x10                        ; 005b98c1
        ;   Label: LAB_005b98c1
    POP EBP                             ; 005b98c4
    POP EDI                             ; 005b98c5
    POP ESI                             ; 005b98c6
    POP EBX                             ; 005b98c7
    RET                                 ; 005b98c8

