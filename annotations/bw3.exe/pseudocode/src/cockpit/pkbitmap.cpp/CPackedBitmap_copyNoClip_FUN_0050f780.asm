; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_0050f780(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   dest_buffer
; int              Stack[0xc]:4   bits_per_pixel
; int              Stack[0x10]:4   row_stride
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_ckptutil.c_get16BitConversionFunction_FUN_00434ec0
;   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00434ea0
;   cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00434e90
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f780
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0050f780
    PUSH ESI                            ; 0050f781
    PUSH EDI                            ; 0050f782
    PUSH EBP                            ; 0050f783
    SUB ESP,0xc                         ; 0050f784
    MOV EDI,dword ptr [ESP + 0x24]      ; 0050f787
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050f78b
    CMP dword ptr [EAX + 0x20],0x0      ; 0050f78f
    JZ 0x0050f863                       ; 0050f793
        ;   XREF to: 0050f863 (CONDITIONAL_JUMP)  ; LAB_0050f863
    CMP dword ptr [EAX + 0x14],0x0      ; 0050f799
    JZ 0x0050f863                       ; 0050f79d
        ;   XREF to: 0050f863 (CONDITIONAL_JUMP)  ; LAB_0050f863
    TEST EDI,EDI                        ; 0050f7a3
    JZ 0x0050f863                       ; 0050f7a5
        ;   XREF to: 0050f863 (CONDITIONAL_JUMP)  ; LAB_0050f863
    XOR EBX,EBX                         ; 0050f7ab
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0050f7ad
    MOV dword ptr [ESP + 0x4],EBX       ; 0050f7b1
    CMP ESI,0x10                        ; 0050f7b5
    JNC 0x0050f87f                      ; 0050f7b8
        ;   XREF to: 0050f87f (CONDITIONAL_JUMP)  ; LAB_0050f87f
    CMP ESI,0x8                         ; 0050f7be
    JNZ 0x0050f886                      ; 0050f7c1
        ;   XREF to: 0050f886 (CONDITIONAL_JUMP)  ; LAB_0050f886
    CALL cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00434ea0 ; 0050f7c7
        ;   XREF to: 00434ea0 (UNCONDITIONAL_CALL)  ; OptimizedMemcpyFunc * cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00434ea0()
    MOV dword ptr [ESP + 0x8],EAX       ; 0050f7cc
        ;   Label: LAB_0050f7cc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050f7d0
        ;   Label: LAB_0050f7d0
    MOV EAX,dword ptr [EAX + 0x20]      ; 0050f7d4
    MOV EBX,dword ptr [ESP + 0x20]      ; 0050f7d7
    MOV EBP,dword ptr [EAX]             ; 0050f7db
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050f7dd
    MOV EBX,dword ptr [EBX + 0x14]      ; 0050f7e1
    SHL EAX,0x2                         ; 0050f7e4
    ADD EBX,EBP                         ; 0050f7e7
    MOV dword ptr [ESP],EAX             ; 0050f7e9
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050f7ec
        ;   Label: LAB_0050f7ec
    MOV EDX,dword ptr [ESP]             ; 0050f7f0
    MOV EAX,dword ptr [EAX + 0x20]      ; 0050f7f3
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050f7f6
    ADD EAX,EDX                         ; 0050f7fa
    MOV EBP,dword ptr [EBP + 0x14]      ; 0050f7fc
    ADD EBP,dword ptr [EAX + 0x4]       ; 0050f7ff
    CMP EBX,EBP                         ; 0050f802
    JNC 0x0050f840                      ; 0050f804
        ;   XREF to: 0050f840 (CONDITIONAL_JUMP)  ; LAB_0050f840
    XOR EDX,EDX                         ; 0050f806
        ;   Label: LAB_0050f806
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050f808
    MOV DX,word ptr [EBX]               ; 0050f80c
    IMUL EDX,EAX                        ; 0050f80f
    MOV EAX,EDX                         ; 0050f812
    SAR EDX,0x1f                        ; 0050f814
    SHL EDX,0x3                         ; 0050f817
    SBB EAX,EDX                         ; 0050f81a
    SAR EAX,0x3                         ; 0050f81c
    XOR ESI,ESI                         ; 0050f81f
    LEA ECX,[EBX + 0x4]                 ; 0050f821
    MOV SI,word ptr [EBX + 0x2]         ; 0050f824
    LEA EBX,[ESI + 0x3]                 ; 0050f828
    PUSH ESI                            ; 0050f82b
    PUSH ECX                            ; 0050f82c
    ADD EAX,EDI                         ; 0050f82d
    AND BL,0xfc                         ; 0050f82f
    PUSH EAX                            ; 0050f832
    ADD EBX,ECX                         ; 0050f833
    CALL dword ptr [ESP + 0x14]         ; 0050f835
    ADD ESP,0xc                         ; 0050f839
    CMP EBX,EBP                         ; 0050f83c
    JC 0x0050f806                       ; 0050f83e
        ;   XREF to: 0050f806 (CONDITIONAL_JUMP)  ; LAB_0050f806
    MOV EDX,dword ptr [ESP]             ; 0050f840
        ;   Label: LAB_0050f840
    MOV ECX,dword ptr [ESP + 0x4]       ; 0050f843
    ADD EDX,0x4                         ; 0050f847
    MOV ESI,dword ptr [ESP + 0x28]      ; 0050f84a
    MOV dword ptr [ESP],EDX             ; 0050f84e
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050f851
    INC ECX                             ; 0050f855
    ADD EDI,ESI                         ; 0050f856
    MOV EBP,dword ptr [EDX + 0x1c]      ; 0050f858
    MOV dword ptr [ESP + 0x4],ECX       ; 0050f85b
    CMP ECX,EBP                         ; 0050f85f
    JL 0x0050f7ec                       ; 0050f861
        ;   XREF to: 0050f7ec (CONDITIONAL_JUMP)  ; LAB_0050f7ec
    ADD ESP,0xc                         ; 0050f863
        ;   Label: LAB_0050f863
    POP EBP                             ; 0050f866
    POP EDI                             ; 0050f867
    POP ESI                             ; 0050f868
    POP EBX                             ; 0050f869
    RET                                 ; 0050f86a
    CALL cockpit_ckptutil.c_get16BitConversionFunction_FUN_00434ec0 ; 0050f86b
        ;   XREF to: 00434ec0 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_get16BitConversionFunction_FUN_00434ec0()
        ;   Label: LAB_0050f86b
    JMP 0x0050f7cc                      ; 0050f870
        ;   XREF to: 0050f7cc (UNCONDITIONAL_JUMP)  ; LAB_0050f7cc
    CALL cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00434e90 ; 0050f875
        ;   XREF to: 00434e90 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00434e90()
        ;   Label: LAB_0050f875
    JMP 0x0050f7cc                      ; 0050f87a
        ;   XREF to: 0050f7cc (UNCONDITIONAL_JUMP)  ; LAB_0050f7cc
    JBE 0x0050f86b                      ; 0050f87f
        ;   XREF to: 0050f86b (CONDITIONAL_JUMP)  ; LAB_0050f86b
        ;   Label: LAB_0050f87f
    CMP ESI,0x20                        ; 0050f881
    JZ 0x0050f875                       ; 0050f884
        ;   XREF to: 0050f875 (CONDITIONAL_JUMP)  ; LAB_0050f875
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0050f886
        ;   Label: LAB_0050f886
    PUSH ESI                            ; 0050f88a
    MOV ECX,0x5cbbfd                    ; 0050f88b
    MOV EBX,0x2a2                       ; 0050f890
    PUSH 0x5cbc15                       ; 0050f895
    MOV dword ptr [0x01d71de0],ECX      ; 0050f89a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0050f8a0 | DAT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 0050f8a6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x8                         ; 0050f8ab
    JMP 0x0050f7d0                      ; 0050f8ae
        ;   XREF to: 0050f7d0 (UNCONDITIONAL_JUMP)  ; LAB_0050f7d0

