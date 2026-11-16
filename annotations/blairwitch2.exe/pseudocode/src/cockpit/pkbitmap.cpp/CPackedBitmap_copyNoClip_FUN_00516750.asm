; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_00516750(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   dest_buffer
; int              Stack[0xc]:4   bits_per_pixel
; int              Stack[0x10]:4   row_stride
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_ckptutil.c_get16BitConversionFunction_FUN_0042c450
;   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042c430
;   cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_0042c420
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516750
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_00516750
    PUSH ESI                            ; 00516751
    PUSH EDI                            ; 00516752
    PUSH EBP                            ; 00516753
    SUB ESP,0xc                         ; 00516754
    MOV EDI,dword ptr [ESP + 0x24]      ; 00516757
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051675b
    CMP dword ptr [EAX + 0x20],0x0      ; 0051675f
    JZ 0x00516833                       ; 00516763
        ;   XREF to: 00516833 (CONDITIONAL_JUMP)  ; LAB_00516833
    CMP dword ptr [EAX + 0x14],0x0      ; 00516769
    JZ 0x00516833                       ; 0051676d
        ;   XREF to: 00516833 (CONDITIONAL_JUMP)  ; LAB_00516833
    TEST EDI,EDI                        ; 00516773
    JZ 0x00516833                       ; 00516775
        ;   XREF to: 00516833 (CONDITIONAL_JUMP)  ; LAB_00516833
    XOR EBX,EBX                         ; 0051677b
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0051677d
    MOV dword ptr [ESP + 0x4],EBX       ; 00516781
    CMP ESI,0x10                        ; 00516785
    JNC 0x0051684f                      ; 00516788
        ;   XREF to: 0051684f (CONDITIONAL_JUMP)  ; LAB_0051684f
    CMP ESI,0x8                         ; 0051678e
    JNZ 0x00516856                      ; 00516791
        ;   XREF to: 00516856 (CONDITIONAL_JUMP)  ; LAB_00516856
    CALL cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042c430 ; 00516797
        ;   XREF to: 0042c430 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042c430()
    MOV dword ptr [ESP + 0x8],EAX       ; 0051679c
        ;   Label: LAB_0051679c
    MOV EAX,dword ptr [ESP + 0x20]      ; 005167a0
        ;   Label: LAB_005167a0
    MOV EAX,dword ptr [EAX + 0x20]      ; 005167a4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005167a7
    MOV EBP,dword ptr [EAX]             ; 005167ab
    MOV EAX,dword ptr [ESP + 0x4]       ; 005167ad
    MOV EBX,dword ptr [EBX + 0x14]      ; 005167b1
    SHL EAX,0x2                         ; 005167b4
    ADD EBX,EBP                         ; 005167b7
    MOV dword ptr [ESP],EAX             ; 005167b9
    MOV EAX,dword ptr [ESP + 0x20]      ; 005167bc
        ;   Label: LAB_005167bc
    MOV EDX,dword ptr [ESP]             ; 005167c0
    MOV EAX,dword ptr [EAX + 0x20]      ; 005167c3
    MOV EBP,dword ptr [ESP + 0x20]      ; 005167c6
    ADD EAX,EDX                         ; 005167ca
    MOV EBP,dword ptr [EBP + 0x14]      ; 005167cc
    ADD EBP,dword ptr [EAX + 0x4]       ; 005167cf
    CMP EBX,EBP                         ; 005167d2
    JNC 0x00516810                      ; 005167d4
        ;   XREF to: 00516810 (CONDITIONAL_JUMP)  ; LAB_00516810
    XOR EDX,EDX                         ; 005167d6
        ;   Label: LAB_005167d6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005167d8
    MOV DX,word ptr [EBX]               ; 005167dc
    IMUL EDX,EAX                        ; 005167df
    MOV EAX,EDX                         ; 005167e2
    SAR EDX,0x1f                        ; 005167e4
    SHL EDX,0x3                         ; 005167e7
    SBB EAX,EDX                         ; 005167ea
    SAR EAX,0x3                         ; 005167ec
    XOR ESI,ESI                         ; 005167ef
    LEA ECX,[EBX + 0x4]                 ; 005167f1
    MOV SI,word ptr [EBX + 0x2]         ; 005167f4
    LEA EBX,[ESI + 0x3]                 ; 005167f8
    PUSH ESI                            ; 005167fb
    PUSH ECX                            ; 005167fc
    ADD EAX,EDI                         ; 005167fd
    AND BL,0xfc                         ; 005167ff
    PUSH EAX                            ; 00516802
    ADD EBX,ECX                         ; 00516803
    CALL dword ptr [ESP + 0x14]         ; 00516805
    ADD ESP,0xc                         ; 00516809
    CMP EBX,EBP                         ; 0051680c
    JC 0x005167d6                       ; 0051680e
        ;   XREF to: 005167d6 (CONDITIONAL_JUMP)  ; LAB_005167d6
    MOV EDX,dword ptr [ESP]             ; 00516810
        ;   Label: LAB_00516810
    MOV ECX,dword ptr [ESP + 0x4]       ; 00516813
    ADD EDX,0x4                         ; 00516817
    MOV ESI,dword ptr [ESP + 0x28]      ; 0051681a
    MOV dword ptr [ESP],EDX             ; 0051681e
    MOV EDX,dword ptr [ESP + 0x20]      ; 00516821
    INC ECX                             ; 00516825
    ADD EDI,ESI                         ; 00516826
    MOV EBP,dword ptr [EDX + 0x1c]      ; 00516828
    MOV dword ptr [ESP + 0x4],ECX       ; 0051682b
    CMP ECX,EBP                         ; 0051682f
    JL 0x005167bc                       ; 00516831
        ;   XREF to: 005167bc (CONDITIONAL_JUMP)  ; LAB_005167bc
    ADD ESP,0xc                         ; 00516833
        ;   Label: LAB_00516833
    POP EBP                             ; 00516836
    POP EDI                             ; 00516837
    POP ESI                             ; 00516838
    POP EBX                             ; 00516839
    RET                                 ; 0051683a
    CALL cockpit_ckptutil.c_get16BitConversionFunction_FUN_0042c450 ; 0051683b
        ;   XREF to: 0042c450 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_get16BitConversionFunction_FUN_0042c450()
        ;   Label: LAB_0051683b
    JMP 0x0051679c                      ; 00516840
        ;   XREF to: 0051679c (UNCONDITIONAL_JUMP)  ; LAB_0051679c
    CALL cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_0042c420 ; 00516845
        ;   XREF to: 0042c420 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_0042c420()
        ;   Label: LAB_00516845
    JMP 0x0051679c                      ; 0051684a
        ;   XREF to: 0051679c (UNCONDITIONAL_JUMP)  ; LAB_0051679c
    JBE 0x0051683b                      ; 0051684f
        ;   XREF to: 0051683b (CONDITIONAL_JUMP)  ; LAB_0051683b
        ;   Label: LAB_0051684f
    CMP ESI,0x20                        ; 00516851
    JZ 0x00516845                       ; 00516854
        ;   XREF to: 00516845 (CONDITIONAL_JUMP)  ; LAB_00516845
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00516856
        ;   Label: LAB_00516856
    PUSH ESI                            ; 0051685a
    MOV ECX,0x5e1b3a                    ; 0051685b
    MOV EBX,0x2a0                       ; 00516860
    PUSH 0x5e1b52                       ; 00516865
    MOV dword ptr [0x01d046a0],ECX      ; 0051686a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00516870 | DAT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 00516876
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x8                         ; 0051687b
    JMP 0x005167a0                      ; 0051687e
        ;   XREF to: 005167a0 (UNCONDITIONAL_JUMP)  ; LAB_005167a0

