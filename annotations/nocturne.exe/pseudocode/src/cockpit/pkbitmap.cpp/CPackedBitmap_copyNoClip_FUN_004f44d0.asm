; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_004f44d0(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   dest_buffer
; int              Stack[0xc]:4   bits_per_pixel
; int              Stack[0x10]:4   row_stride
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_004f45e0 at 004f461b
;
; Called Functions:
;   cockpit_ckptutil.c_get16BitConversionFunction_FUN_0042d170
;   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042d150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f44d0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_004f44d0
    PUSH ESI                            ; 004f44d1
    PUSH EDI                            ; 004f44d2
    PUSH EBP                            ; 004f44d3
    SUB ESP,0x10                        ; 004f44d4
    MOV EDI,dword ptr [ESP + 0x28]      ; 004f44d7
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f44db
    CMP dword ptr [EAX + 0x20],0x0      ; 004f44df
    JZ 0x004f45ae                       ; 004f44e3
        ;   XREF to: 004f45ae (CONDITIONAL_JUMP)  ; LAB_004f45ae
    CMP dword ptr [EAX + 0x14],0x0      ; 004f44e9
    JZ 0x004f45ae                       ; 004f44ed
        ;   XREF to: 004f45ae (CONDITIONAL_JUMP)  ; LAB_004f45ae
    TEST EDI,EDI                        ; 004f44f3
    JZ 0x004f45ae                       ; 004f44f5
        ;   XREF to: 004f45ae (CONDITIONAL_JUMP)  ; LAB_004f45ae
    XOR EBX,EBX                         ; 004f44fb
    MOV ESI,dword ptr [ESP + 0x30]      ; 004f44fd
    MOV dword ptr [ESP + 0x4],EBX       ; 004f4501
    CMP ESI,0x8                         ; 004f4505
    JZ 0x004f45b6                       ; 004f4508
        ;   XREF to: 004f45b6 (CONDITIONAL_JUMP)  ; LAB_004f45b6
    CMP dword ptr [ESP + 0x30],0x10     ; 004f450e
        ;   Label: LAB_004f450e
    JZ 0x004f45c4                       ; 004f4513
        ;   XREF to: 004f45c4 (CONDITIONAL_JUMP)  ; LAB_004f45c4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f4519
        ;   Label: LAB_004f4519
    MOV EAX,dword ptr [EAX + 0x20]      ; 004f451d
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f4520
    MOV EDX,dword ptr [EAX]             ; 004f4524
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4526
    MOV EBX,dword ptr [EBX + 0x14]      ; 004f452a
    SHL EAX,0x2                         ; 004f452d
    ADD EBX,EDX                         ; 004f4530
    MOV dword ptr [ESP],EAX             ; 004f4532
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f4535
        ;   Label: LAB_004f4535
    MOV ECX,dword ptr [ESP]             ; 004f4539
    MOV EAX,dword ptr [EAX + 0x20]      ; 004f453c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f453f
    ADD EAX,ECX                         ; 004f4543
    MOV EDX,dword ptr [EDX + 0x14]      ; 004f4545
    MOV EAX,dword ptr [EAX + 0x4]       ; 004f4548
    ADD EAX,EDX                         ; 004f454b
    MOV dword ptr [ESP + 0xc],EAX       ; 004f454d
    CMP EBX,EAX                         ; 004f4551
    JNC 0x004f4589                      ; 004f4553
        ;   XREF to: 004f4589 (CONDITIONAL_JUMP)  ; LAB_004f4589
    XOR ECX,ECX                         ; 004f4555
        ;   Label: LAB_004f4555
    MOV EBP,dword ptr [ESP + 0x30]      ; 004f4557
    MOV CX,word ptr [EBX + 0x2]         ; 004f455b
    LEA EDX,[EBX + 0x4]                 ; 004f455f
    LEA EAX,[ECX + 0x3]                 ; 004f4562
    XOR ESI,ESI                         ; 004f4565
    AND AL,0xfc                         ; 004f4567
    MOV SI,word ptr [EBX]               ; 004f4569
    LEA EBX,[EDX + EAX*0x1]             ; 004f456c
    LEA EAX,[EDI + ESI*0x1]             ; 004f456f
    CMP EBP,0x10                        ; 004f4572
    JNZ 0x004f4579                      ; 004f4575
        ;   XREF to: 004f4579 (CONDITIONAL_JUMP)  ; LAB_004f4579
    ADD EAX,ESI                         ; 004f4577
    PUSH ECX                            ; 004f4579
        ;   Label: LAB_004f4579
    PUSH EDX                            ; 004f457a
    PUSH EAX                            ; 004f457b
    CALL dword ptr [ESP + 0x14]         ; 004f457c
    ADD ESP,0xc                         ; 004f4580
    CMP EBX,dword ptr [ESP + 0xc]       ; 004f4583
    JC 0x004f4555                       ; 004f4587
        ;   XREF to: 004f4555 (CONDITIONAL_JUMP)  ; LAB_004f4555
    MOV EAX,dword ptr [ESP]             ; 004f4589
        ;   Label: LAB_004f4589
    MOV EDX,dword ptr [ESP + 0x4]       ; 004f458c
    ADD EAX,0x4                         ; 004f4590
    INC EDX                             ; 004f4593
    MOV dword ptr [ESP],EAX             ; 004f4594
    MOV dword ptr [ESP + 0x4],EDX       ; 004f4597
    MOV EAX,EDX                         ; 004f459b
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f459d
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004f45a1
    MOV ESI,dword ptr [EDX + 0x1c]      ; 004f45a5
    ADD EDI,ECX                         ; 004f45a8
    CMP EAX,ESI                         ; 004f45aa
    JL 0x004f4535                       ; 004f45ac
        ;   XREF to: 004f4535 (CONDITIONAL_JUMP)  ; LAB_004f4535
    ADD ESP,0x10                        ; 004f45ae
        ;   Label: LAB_004f45ae
    POP EBP                             ; 004f45b1
    POP EDI                             ; 004f45b2
    POP ESI                             ; 004f45b3
    POP EBX                             ; 004f45b4
    RET                                 ; 004f45b5
    CALL cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042d150 ; 004f45b6
        ;   XREF to: 0042d150 (UNCONDITIONAL_CALL)  ; OptimizedMemcpyFunc * cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042d150()
        ;   Label: LAB_004f45b6
    MOV dword ptr [ESP + 0x8],EAX       ; 004f45bb
    JMP 0x004f450e                      ; 004f45bf
        ;   XREF to: 004f450e (UNCONDITIONAL_JUMP)  ; LAB_004f450e
    CALL cockpit_ckptutil.c_get16BitConversionFunction_FUN_0042d170 ; 004f45c4
        ;   XREF to: 0042d170 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_get16BitConversionFunction_FUN_0042d170()
        ;   Label: LAB_004f45c4
    MOV dword ptr [ESP + 0x8],EAX       ; 004f45c9
    JMP 0x004f4519                      ; 004f45cd
        ;   XREF to: 004f4519 (UNCONDITIONAL_JUMP)  ; LAB_004f4519

