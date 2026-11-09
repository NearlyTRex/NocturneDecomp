; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_FUN_00538280(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   skip_data_load
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480 at 005384f5
;   cockpit_pkbitmap.cpp_FUN_005385d0 at 005386e7
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_00537550
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fread_FUN_005c0b10
;   crt_stdio.c_fseek_FUN_005c170c
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538280
        ;   Label: cockpit_pkbitmap.cpp_FUN_00538280
    PUSH ESI                            ; 00538281
    PUSH EDI                            ; 00538282
    PUSH EBP                            ; 00538283
    SUB ESP,0x1c                        ; 00538284
    MOV EBX,dword ptr [ESP + 0x30]      ; 00538287
    MOV EBP,dword ptr [ESP + 0x34]      ; 0053828b
    PUSH EBX                            ; 0053828f
    CALL cockpit_pkbitmap.cpp_FUN_00537550 ; 00538290
        ;   XREF to: 00537550 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00537550()
    ADD ESP,0x4                         ; 00538295
        ;   Label: LAB_00538295
    PUSH EBP                            ; 00538298
    PUSH 0x1                            ; 00538299
    PUSH 0x1c                           ; 0053829b
    LEA EAX,[ESP + 0xc]                 ; 0053829d
    PUSH EAX                            ; 005382a1
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 005382a2
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 005382a7
    CMP EAX,0x1                         ; 005382aa
    JNZ 0x0053830e                      ; 005382ad
        ;   XREF to: 0053830e (CONDITIONAL_JUMP)  ; LAB_0053830e
    MOV ECX,0x4                         ; 005382af
    MOV EDI,0x62281c                    ; 005382b4
    MOV ESI,ESP                         ; 005382b9
    XOR EAX,EAX                         ; 005382bb
    CMPSB.REPE ES:EDI,ESI               ; 005382bd
    JZ 0x005382c6                       ; 005382bf
        ;   XREF to: 005382c6 (CONDITIONAL_JUMP)  ; LAB_005382c6
    SBB EAX,EAX                         ; 005382c1
    SBB EAX,-0x1                        ; 005382c3
    TEST EAX,EAX                        ; 005382c6
        ;   Label: LAB_005382c6
    JZ 0x00538332                       ; 005382c8
        ;   XREF to: 00538332 (CONDITIONAL_JUMP)  ; LAB_00538332
    MOV ECX,0x5ecf4e                    ; 005382ca
        ;   Label: LAB_005382ca
    MOV ESI,0x4b2                       ; 005382cf
    PUSH 0x5ecf66                       ; 005382d4
    MOV dword ptr [0x01d1d400],ECX      ; 005382d9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005382df | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005382e5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005382ea
    MOV EDI,0x5ecf89                    ; 005382ed
        ;   Label: LAB_005382ed
    MOV EAX,0x4b3                       ; 005382f2
    PUSH 0x5ecfa1                       ; 005382f7
    MOV dword ptr [0x01d1d400],EDI      ; 005382fc | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00538302 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00538307
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    JMP 0x00538295                      ; 0053830c
        ;   XREF to: 00538295 (UNCONDITIONAL_JUMP)  ; LAB_00538295
    MOV EAX,0x5ecf08                    ; 0053830e
        ;   Label: LAB_0053830e
    MOV EDX,0x4b1                       ; 00538313
    PUSH 0x5ecf20                       ; 00538318
    MOV [0x01d1d400],EAX                ; 0053831d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00538322 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00538328
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053832d
    JMP 0x005382ca                      ; 00538330
        ;   XREF to: 005382ca (UNCONDITIONAL_JUMP)  ; LAB_005382ca
    MOV EDX,dword ptr [ESP + 0x4]       ; 00538332
        ;   Label: LAB_00538332
    CMP EDX,0x1                         ; 00538336
    JC 0x005382ca                       ; 00538339
        ;   XREF to: 005382ca (CONDITIONAL_JUMP)  ; LAB_005382ca
    CMP dword ptr [ESP + 0x8],0x1       ; 0053833b
    JC 0x005382ca                       ; 00538340
        ;   XREF to: 005382ca (CONDITIONAL_JUMP)  ; LAB_005382ca
    MOV dword ptr [EBX + 0x18],EDX      ; 00538342
    MOV EAX,dword ptr [ESP + 0x8]       ; 00538345
    MOV dword ptr [EBX + 0x1c],EAX      ; 00538349
    CMP dword ptr [ESP + 0xc],0x0       ; 0053834c
    JNZ 0x005382ca                      ; 00538351
        ;   XREF to: 005382ca (CONDITIONAL_JUMP)  ; LAB_005382ca
    CMP dword ptr [ESP + 0x10],0x0      ; 00538357
    JNZ 0x005382ca                      ; 0053835c
        ;   XREF to: 005382ca (CONDITIONAL_JUMP)  ; LAB_005382ca
    MOV EAX,dword ptr [EBX + 0x18]      ; 00538362
    MOV EDX,dword ptr [ESP + 0x14]      ; 00538365
    DEC EAX                             ; 00538369
    CMP EAX,EDX                         ; 0053836a
    JNZ 0x005382ca                      ; 0053836c
        ;   XREF to: 005382ca (CONDITIONAL_JUMP)  ; LAB_005382ca
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00538372
    MOV ECX,dword ptr [ESP + 0x18]      ; 00538375
    DEC EAX                             ; 00538379
    CMP EAX,ECX                         ; 0053837a
    JNZ 0x005382ca                      ; 0053837c
        ;   XREF to: 005382ca (CONDITIONAL_JUMP)  ; LAB_005382ca
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00538382
    INC EAX                             ; 00538385
    SHL EAX,0x2                         ; 00538386
    PUSH EAX                            ; 00538389
    CALL crt_unknown.c_FUN_005c1268     ; 0053838a
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    ADD ESP,0x4                         ; 0053838f
    MOV dword ptr [EBX + 0x20],EAX      ; 00538392
    TEST EAX,EAX                        ; 00538395
    JZ 0x005382ed                       ; 00538397
        ;   XREF to: 005382ed (CONDITIONAL_JUMP)  ; LAB_005382ed
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0053839d
    PUSH EBP                            ; 005383a0
    INC EAX                             ; 005383a1
    PUSH 0x1                            ; 005383a2
    SHL EAX,0x2                         ; 005383a4
    PUSH EAX                            ; 005383a7
    MOV EDI,dword ptr [EBX + 0x20]      ; 005383a8
    PUSH EDI                            ; 005383ab
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 005383ac
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 005383b1
    CMP EAX,0x1                         ; 005383b4
    JNZ 0x0053830e                      ; 005383b7
        ;   XREF to: 0053830e (CONDITIONAL_JUMP)  ; LAB_0053830e
    XOR EDX,EDX                         ; 005383bd
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005383bf
        ;   Label: LAB_005383bf
    INC EAX                             ; 005383c2
    CMP EDX,EAX                         ; 005383c3
    JGE 0x005383ca                      ; 005383c5
        ;   XREF to: 005383ca (CONDITIONAL_JUMP)  ; LAB_005383ca
    INC EDX                             ; 005383c7
    JMP 0x005383bf                      ; 005383c8
        ;   XREF to: 005383bf (UNCONDITIONAL_JUMP)  ; LAB_005383bf
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005383ca
        ;   Label: LAB_005383ca
    XOR EDX,EDX                         ; 005383cd
    TEST EAX,EAX                        ; 005383cf
    JLE 0x005383ec                      ; 005383d1
        ;   XREF to: 005383ec (CONDITIONAL_JUMP)  ; LAB_005383ec
    MOV EAX,dword ptr [EBX + 0x20]      ; 005383d3
    MOV EDI,dword ptr [EAX + 0x4]       ; 005383d6
        ;   Label: LAB_005383d6
    CMP EDI,dword ptr [EAX]             ; 005383d9
    JL 0x005382ca                       ; 005383db
        ;   XREF to: 005382ca (CONDITIONAL_JUMP)  ; LAB_005382ca
    INC EDX                             ; 005383e1
    MOV ECX,dword ptr [EBX + 0x1c]      ; 005383e2
    ADD EAX,0x4                         ; 005383e5
    CMP EDX,ECX                         ; 005383e8
    JL 0x005383d6                       ; 005383ea
        ;   XREF to: 005383d6 (CONDITIONAL_JUMP)  ; LAB_005383d6
    MOV EAX,dword ptr [EBX + 0x20]      ; 005383ec
        ;   Label: LAB_005383ec
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005383ef
    MOV EDI,dword ptr [ESP + 0x38]      ; 005383f2
    MOV ESI,dword ptr [EAX + EDX*0x4]   ; 005383f6
    TEST EDI,EDI                        ; 005383f9
    JNZ 0x00538468                      ; 005383fb
        ;   XREF to: 00538468 (CONDITIONAL_JUMP)  ; LAB_00538468
    PUSH ESI                            ; 005383fd
    CALL crt_unknown.c_FUN_005c08d0     ; 005383fe
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00538403
    MOV dword ptr [EBX + 0x14],EAX      ; 00538406
    TEST EAX,EAX                        ; 00538409
    JZ 0x005382ed                       ; 0053840b
        ;   XREF to: 005382ed (CONDITIONAL_JUMP)  ; LAB_005382ed
    PUSH EBP                            ; 00538411
    PUSH 0x1                            ; 00538412
    PUSH ESI                            ; 00538414
    PUSH EAX                            ; 00538415
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 00538416
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0053841b
    CMP EAX,0x1                         ; 0053841e
    JNZ 0x0053830e                      ; 00538421
        ;   XREF to: 0053830e (CONDITIONAL_JUMP)  ; LAB_0053830e
    MOV EDX,dword ptr [EBX + 0x20]      ; 00538427
    MOV ECX,dword ptr [EBX + 0x14]      ; 0053842a
    MOV EBX,dword ptr [EBX + 0x1c]      ; 0053842d
    MOV EAX,dword ptr [EDX]             ; 00538430
    MOV ESI,dword ptr [EDX + EBX*0x4]   ; 00538432
    ADD EAX,ECX                         ; 00538435
    ADD ECX,ESI                         ; 00538437
    CMP EAX,ECX                         ; 00538439
    JNC 0x00538460                      ; 0053843b
        ;   XREF to: 00538460 (CONDITIONAL_JUMP)  ; LAB_00538460
    LEA EDX,[EAX + 0x4]                 ; 0053843d
        ;   Label: LAB_0053843d
    MOV AX,word ptr [EAX + 0x2]         ; 00538440
    AND EAX,0xffff                      ; 00538444
    ADD EAX,0x3                         ; 00538449
    AND AL,0xfc                         ; 0053844c
    ADD EAX,EDX                         ; 0053844e
    CMP EAX,ECX                         ; 00538450
    JC 0x0053843d                       ; 00538452
        ;   XREF to: 0053843d (CONDITIONAL_JUMP)  ; LAB_0053843d
    LEA EAX,[EAX]                       ; 00538454
    LEA EDX,[EDX]                       ; 0053845a
    ADD ESP,0x1c                        ; 00538460
        ;   Label: LAB_00538460
    POP EBP                             ; 00538463
    POP EDI                             ; 00538464
    POP ESI                             ; 00538465
    POP EBX                             ; 00538466
    RET                                 ; 00538467
    PUSH 0x1                            ; 00538468
        ;   Label: LAB_00538468
    PUSH ESI                            ; 0053846a
    PUSH EBP                            ; 0053846b
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0053846c
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005c170c()
    ADD ESP,0xc                         ; 00538471
    ADD ESP,0x1c                        ; 00538474
    POP EBP                             ; 00538477
    POP EDI                             ; 00538478
    POP ESI                             ; 00538479
    POP EBX                             ; 0053847a
    RET                                 ; 0053847b

