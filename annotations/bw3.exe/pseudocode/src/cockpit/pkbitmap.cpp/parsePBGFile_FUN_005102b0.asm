; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * cockpit_pkbitmap_cpp_parsePBGFile_FUN_005102b0(uint *param_1,_FILE *param_2,uint param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_00510430 at 0051047f
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0050f170
;   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0050f1e0
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60
;   core_main.c_FUN_004e4330
;   crt_memory.c___vec_new_FUN_005a5584
;   crt_memory.c_operator_new_array_FUN_005a40df
;   crt_stdio.c_fread_FUN_005a3890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005102b0
        ;   Label: cockpit_pkbitmap.cpp_parsePBGFile_FUN_005102b0
    PUSH ESI                            ; 005102b1
    PUSH EDI                            ; 005102b2
    PUSH EBP                            ; 005102b3
    SUB ESP,0x34                        ; 005102b4
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005102b7
    MOV EBX,0x1                         ; 005102bb
    PUSH EBP                            ; 005102c0
        ;   Label: LAB_005102c0
    PUSH EBX                            ; 005102c1
    PUSH 0x8                            ; 005102c2
    LEA EAX,[ESP + 0x30]                ; 005102c4
    PUSH EAX                            ; 005102c8
    CALL crt_stdio.c_fread_FUN_005a3890 ; 005102c9
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005102ce
    CMP EAX,0x1                         ; 005102d1
    JNZ 0x0051033a                      ; 005102d4
        ;   XREF to: 0051033a (CONDITIONAL_JUMP)  ; LAB_0051033a
    MOV ECX,0x4                         ; 005102d6
    MOV EDI,0x6036fc                    ; 005102db
    LEA ESI,[ESP + 0x24]                ; 005102e0
    XOR EAX,EAX                         ; 005102e4
    CMPSB.REPE ES:EDI,ESI               ; 005102e6
    JZ 0x005102ef                       ; 005102e8
        ;   XREF to: 005102ef (CONDITIONAL_JUMP)  ; LAB_005102ef
    SBB EAX,EAX                         ; 005102ea
    SBB EAX,-0x1                        ; 005102ec
    TEST EAX,EAX                        ; 005102ef
        ;   Label: LAB_005102ef
    JZ 0x0051035f                       ; 005102f1
        ;   XREF to: 0051035f (CONDITIONAL_JUMP)  ; LAB_0051035f
    MOV EAX,0x5cbed4                    ; 005102f3
        ;   Label: LAB_005102f3
    MOV EDX,0x574                       ; 005102f8
    PUSH 0x5cbeec                       ; 005102fd
    MOV [0x01d71de0],EAX                ; 00510302 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00510307 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0051030d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00510312
    MOV ECX,0x5cbf0f                    ; 00510315
        ;   Label: LAB_00510315
    MOV ESI,0x575                       ; 0051031a
    PUSH 0x5cbf27                       ; 0051031f
    MOV dword ptr [0x01d71de0],ECX      ; 00510324 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0051032a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00510330
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00510335
    JMP 0x005102c0                      ; 00510338
        ;   XREF to: 005102c0 (UNCONDITIONAL_JUMP)  ; LAB_005102c0
    MOV ESI,0x5cbe8e                    ; 0051033a
        ;   Label: LAB_0051033a
    MOV EDI,0x573                       ; 0051033f
    PUSH 0x5cbea6                       ; 00510344
    MOV dword ptr [0x01d71de0],ESI      ; 00510349 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0051034f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00510355
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051035a
    JMP 0x005102f3                      ; 0051035d
        ;   XREF to: 005102f3 (UNCONDITIONAL_JUMP)  ; LAB_005102f3
    CMP EBX,dword ptr [ESP + 0x28]      ; 0051035f
        ;   Label: LAB_0051035f
    JA 0x005102f3                       ; 00510363
        ;   XREF to: 005102f3 (CONDITIONAL_JUMP)  ; LAB_005102f3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00510365
    MOV ECX,dword ptr [ESP + 0x50]      ; 00510369
    XOR EDX,EDX                         ; 0051036d
    DIV ECX                             ; 0051036f
    PUSH 0x5e32c0                       ; 00510371
    MOV ESI,EAX                         ; 00510376
    PUSH EAX                            ; 00510378
    IMUL EAX,EAX,0x24                   ; 00510379
    ADD EAX,0x4                         ; 0051037c
    PUSH EAX                            ; 0051037f
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 00510380
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 00510385
    PUSH EAX                            ; 00510388
    CALL crt_memory.c___vec_new_FUN_005a5584 ; 00510389
        ;   XREF to: 005a5584 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005a5584()
    ADD ESP,0xc                         ; 0051038e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00510391
    TEST EAX,EAX                        ; 00510395
    JZ 0x00510315                       ; 00510397
        ;   XREF to: 00510315 (CONDITIONAL_JUMP)  ; LAB_00510315
    XOR EDI,EDI                         ; 0051039d
    TEST ESI,ESI                        ; 0051039f
    JLE 0x0051041b                      ; 005103a1
        ;   XREF to: 0051041b (CONDITIONAL_JUMP)  ; LAB_0051041b
    MOV dword ptr [ESP + 0x30],EAX      ; 005103a7
    MOV EDX,dword ptr [ESP + 0x58]      ; 005103ab
        ;   Label: LAB_005103ab
    MOV EAX,dword ptr [ESP + 0x54]      ; 005103af
    TEST EDX,EDX                        ; 005103b3
    JL 0x005103c0                       ; 005103b5
        ;   XREF to: 005103c0 (CONDITIONAL_JUMP)  ; LAB_005103c0
    CMP EDI,EDX                         ; 005103b7
    JZ 0x005103c0                       ; 005103b9
        ;   XREF to: 005103c0 (CONDITIONAL_JUMP)  ; LAB_005103c0
    MOV EAX,0x1                         ; 005103bb
    PUSH EAX                            ; 005103c0
        ;   Label: LAB_005103c0
    PUSH EBP                            ; 005103c1
    MOV EBX,dword ptr [ESP + 0x38]      ; 005103c2
    PUSH EBX                            ; 005103c6
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60 ; 005103c7
        ;   XREF to: 0050ff60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 005103cc
    MOV EBX,0x1                         ; 005103cf
    CMP EBX,dword ptr [ESP + 0x50]      ; 005103d4
    JGE 0x0051040b                      ; 005103d8
        ;   XREF to: 0051040b (CONDITIONAL_JUMP)  ; LAB_0051040b
    MOV EAX,ESP                         ; 005103da
        ;   Label: LAB_005103da
    PUSH EAX                            ; 005103dc
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0050f170 ; 005103dd
        ;   XREF to: 0050f170 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0050f170(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 005103e2
    PUSH 0x1                            ; 005103e5
    PUSH EBP                            ; 005103e7
    LEA EAX,[ESP + 0x8]                 ; 005103e8
    PUSH EAX                            ; 005103ec
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60 ; 005103ed
        ;   XREF to: 0050ff60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 005103f2
    PUSH 0x0                            ; 005103f5
    LEA EAX,[ESP + 0x4]                 ; 005103f7
    PUSH EAX                            ; 005103fb
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0050f1e0 ; 005103fc
        ;   XREF to: 0050f1e0 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0050f1e0(CPackedBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00510401
    INC EBX                             ; 00510404
    CMP EBX,dword ptr [ESP + 0x50]      ; 00510405
    JL 0x005103da                       ; 00510409
        ;   XREF to: 005103da (CONDITIONAL_JUMP)  ; LAB_005103da
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051040b
        ;   Label: LAB_0051040b
    ADD EAX,0x24                        ; 0051040f
    INC EDI                             ; 00510412
    MOV dword ptr [ESP + 0x30],EAX      ; 00510413
    CMP EDI,ESI                         ; 00510417
    JL 0x005103ab                       ; 00510419
        ;   XREF to: 005103ab (CONDITIONAL_JUMP)  ; LAB_005103ab
    MOV EAX,dword ptr [ESP + 0x48]      ; 0051041b
        ;   Label: LAB_0051041b
    MOV dword ptr [EAX],ESI             ; 0051041f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00510421
    ADD ESP,0x34                        ; 00510425
    POP EBP                             ; 00510428
    POP EDI                             ; 00510429
    POP ESI                             ; 0051042a
    POP EBX                             ; 0051042b
    RET                                 ; 0051042c

