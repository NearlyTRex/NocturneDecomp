; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_copyBitmapRegion_FUN_0042d550(uchar *src_buffer,int src_stride,int unused,uchar *dest_buffer,int bytes_per_row,int num_rows,int src_x_offset,int src_y_offset)
;
; Parameters:
; uchar *          Stack[0x4]:4   src_buffer
; int              Stack[0x8]:4   src_stride
; int              Stack[0xc]:4   unused
; uchar *          Stack[0x10]:4   dest_buffer
; int              Stack[0x14]:4   bytes_per_row
; int              Stack[0x18]:4   num_rows
; int              Stack[0x1c]:4   src_x_offset
; int              Stack[0x20]:4   src_y_offset
;
; Called Functions:
;   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042c430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d550
        ;   Label: cockpit_ckptutil.c_copyBitmapRegion_FUN_0042d550
    PUSH ESI                            ; 0042d551
    PUSH EDI                            ; 0042d552
    PUSH EBP                            ; 0042d553
    SUB ESP,0x4                         ; 0042d554
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042d557
    MOV EDI,dword ptr [ESP + 0x24]      ; 0042d55b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0042d55f
    TEST EDI,EDI                        ; 0042d563
    JZ 0x0042d570                       ; 0042d565
        ;   XREF to: 0042d570 (CONDITIONAL_JUMP)  ; LAB_0042d570
    TEST EBX,EBX                        ; 0042d567
    JNZ 0x0042d578                      ; 0042d569
        ;   XREF to: 0042d578 (CONDITIONAL_JUMP)  ; LAB_0042d578
    LEA EAX,[EAX]                       ; 0042d56b
    MOV ECX,ECX                         ; 0042d56e
    ADD ESP,0x4                         ; 0042d570
        ;   Label: LAB_0042d570
    POP EBP                             ; 0042d573
    POP EDI                             ; 0042d574
    POP ESI                             ; 0042d575
    POP EBX                             ; 0042d576
    RET                                 ; 0042d577
    CALL cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042c430 ; 0042d578
        ;   XREF to: 0042c430 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042c430()
        ;   Label: LAB_0042d578
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042d57d
    MOV dword ptr [ESP],EAX             ; 0042d581
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042d584
    IMUL EAX,EDX                        ; 0042d588
    ADD EAX,dword ptr [ESP + 0x30]      ; 0042d58b
    ADD EBX,EAX                         ; 0042d58f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042d591
    XOR ESI,ESI                         ; 0042d595
    TEST EAX,EAX                        ; 0042d597
    JLE 0x0042d570                      ; 0042d599
        ;   XREF to: 0042d570 (CONDITIONAL_JUMP)  ; LAB_0042d570
    PUSH EBP                            ; 0042d59b
        ;   Label: LAB_0042d59b
    PUSH EDI                            ; 0042d59c
    PUSH EBX                            ; 0042d59d
    INC ESI                             ; 0042d59e
    CALL dword ptr [ESP + 0xc]          ; 0042d59f
    ADD ESP,0xc                         ; 0042d5a3
    ADD EDI,EBP                         ; 0042d5a6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0042d5a8
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042d5ac
    ADD EBX,EDX                         ; 0042d5b0
    CMP ESI,ECX                         ; 0042d5b2
    JL 0x0042d59b                       ; 0042d5b4
        ;   XREF to: 0042d59b (CONDITIONAL_JUMP)  ; LAB_0042d59b
    ADD ESP,0x4                         ; 0042d5b6
    POP EBP                             ; 0042d5b9
    POP EDI                             ; 0042d5ba
    POP ESI                             ; 0042d5bb
    POP EBX                             ; 0042d5bc
    RET                                 ; 0042d5bd

