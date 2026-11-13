; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_parsePBGFile_FUN_00517280(CPackedBitmapSet *bitmap_set_ptr,_FILE *file_handle,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   bitmap_set_ptr
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   frames_per_bitmap
; int              Stack[0x10]:4   skip_data_load
; int              Stack[0x14]:4   selected_bitmap_index
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_00517400 at 0051744f
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00516140
;   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_005161b0
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30
;   core_main.c_FUN_004e4500
;   crt_memory.c___vec_new_FUN_005ba2b4
;   crt_memory.c_operator_new_array_FUN_005b8df8
;   crt_stdio.c_fread_FUN_005b87c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517280
        ;   Label: cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280
    PUSH ESI                            ; 00517281
    PUSH EDI                            ; 00517282
    PUSH EBP                            ; 00517283
    SUB ESP,0x34                        ; 00517284
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00517287
    MOV EBX,0x1                         ; 0051728b
    PUSH EBP                            ; 00517290
        ;   Label: LAB_00517290
    PUSH EBX                            ; 00517291
    PUSH 0x8                            ; 00517292
    LEA EAX,[ESP + 0x30]                ; 00517294
    PUSH EAX                            ; 00517298
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00517299
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0051729e
    CMP EAX,0x1                         ; 005172a1
    JNZ 0x0051730a                      ; 005172a4
        ;   XREF to: 0051730a (CONDITIONAL_JUMP)  ; LAB_0051730a
    MOV ECX,0x4                         ; 005172a6
    MOV EDI,0x61b3c0                    ; 005172ab
    LEA ESI,[ESP + 0x24]                ; 005172b0
    XOR EAX,EAX                         ; 005172b4
    CMPSB.REPE ES:EDI,ESI               ; 005172b6
    JZ 0x005172bf                       ; 005172b8
        ;   XREF to: 005172bf (CONDITIONAL_JUMP)  ; LAB_005172bf
    SBB EAX,EAX                         ; 005172ba
    SBB EAX,-0x1                        ; 005172bc
    TEST EAX,EAX                        ; 005172bf
        ;   Label: LAB_005172bf
    JZ 0x0051732f                       ; 005172c1
        ;   XREF to: 0051732f (CONDITIONAL_JUMP)  ; LAB_0051732f
    MOV EAX,0x5e1e11                    ; 005172c3
        ;   Label: LAB_005172c3
    MOV EDX,0x572                       ; 005172c8
    PUSH 0x5e1e29                       ; 005172cd
    MOV [0x01d046a0],EAX                ; 005172d2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 005172d7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005172dd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005172e2
    MOV ECX,0x5e1e4c                    ; 005172e5
        ;   Label: LAB_005172e5
    MOV ESI,0x573                       ; 005172ea
    PUSH 0x5e1e64                       ; 005172ef
    MOV dword ptr [0x01d046a0],ECX      ; 005172f4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005172fa | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00517300
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00517305
    JMP 0x00517290                      ; 00517308
        ;   XREF to: 00517290 (UNCONDITIONAL_JUMP)  ; LAB_00517290
    MOV ESI,0x5e1dcb                    ; 0051730a
        ;   Label: LAB_0051730a
    MOV EDI,0x571                       ; 0051730f
    PUSH 0x5e1de3                       ; 00517314
    MOV dword ptr [0x01d046a0],ESI      ; 00517319 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0051731f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00517325
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051732a
    JMP 0x005172c3                      ; 0051732d
        ;   XREF to: 005172c3 (UNCONDITIONAL_JUMP)  ; LAB_005172c3
    CMP EBX,dword ptr [ESP + 0x28]      ; 0051732f
        ;   Label: LAB_0051732f
    JA 0x005172c3                       ; 00517333
        ;   XREF to: 005172c3 (CONDITIONAL_JUMP)  ; LAB_005172c3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00517335
    MOV ECX,dword ptr [ESP + 0x50]      ; 00517339
    XOR EDX,EDX                         ; 0051733d
    DIV ECX                             ; 0051733f
    PUSH 0x5fac10                       ; 00517341
    MOV ESI,EAX                         ; 00517346
    PUSH EAX                            ; 00517348
    IMUL EAX,EAX,0x24                   ; 00517349
    ADD EAX,0x4                         ; 0051734c
    PUSH EAX                            ; 0051734f
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 00517350
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 00517355
    PUSH EAX                            ; 00517358
    CALL crt_memory.c___vec_new_FUN_005ba2b4 ; 00517359
        ;   XREF to: 005ba2b4 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005ba2b4()
    ADD ESP,0xc                         ; 0051735e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00517361
    TEST EAX,EAX                        ; 00517365
    JZ 0x005172e5                       ; 00517367
        ;   XREF to: 005172e5 (CONDITIONAL_JUMP)  ; LAB_005172e5
    XOR EDI,EDI                         ; 0051736d
    TEST ESI,ESI                        ; 0051736f
    JLE 0x005173eb                      ; 00517371
        ;   XREF to: 005173eb (CONDITIONAL_JUMP)  ; LAB_005173eb
    MOV dword ptr [ESP + 0x30],EAX      ; 00517377
    MOV EDX,dword ptr [ESP + 0x58]      ; 0051737b
        ;   Label: LAB_0051737b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0051737f
    TEST EDX,EDX                        ; 00517383
    JL 0x00517390                       ; 00517385
        ;   XREF to: 00517390 (CONDITIONAL_JUMP)  ; LAB_00517390
    CMP EDI,EDX                         ; 00517387
    JZ 0x00517390                       ; 00517389
        ;   XREF to: 00517390 (CONDITIONAL_JUMP)  ; LAB_00517390
    MOV EAX,0x1                         ; 0051738b
    PUSH EAX                            ; 00517390
        ;   Label: LAB_00517390
    PUSH EBP                            ; 00517391
    MOV EBX,dword ptr [ESP + 0x38]      ; 00517392
    PUSH EBX                            ; 00517396
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30 ; 00517397
        ;   XREF to: 00516f30 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 0051739c
    MOV EBX,0x1                         ; 0051739f
    CMP EBX,dword ptr [ESP + 0x50]      ; 005173a4
    JGE 0x005173db                      ; 005173a8
        ;   XREF to: 005173db (CONDITIONAL_JUMP)  ; LAB_005173db
    MOV EAX,ESP                         ; 005173aa
        ;   Label: LAB_005173aa
    PUSH EAX                            ; 005173ac
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00516140 ; 005173ad
        ;   XREF to: 00516140 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00516140(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 005173b2
    PUSH 0x1                            ; 005173b5
    PUSH EBP                            ; 005173b7
    LEA EAX,[ESP + 0x8]                 ; 005173b8
    PUSH EAX                            ; 005173bc
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30 ; 005173bd
        ;   XREF to: 00516f30 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 005173c2
    PUSH 0x0                            ; 005173c5
    LEA EAX,[ESP + 0x4]                 ; 005173c7
    PUSH EAX                            ; 005173cb
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_005161b0 ; 005173cc
        ;   XREF to: 005161b0 (UNCONDITIONAL_CALL)  ; CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_005161b0(CPackedBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005173d1
    INC EBX                             ; 005173d4
    CMP EBX,dword ptr [ESP + 0x50]      ; 005173d5
    JL 0x005173aa                       ; 005173d9
        ;   XREF to: 005173aa (CONDITIONAL_JUMP)  ; LAB_005173aa
    MOV EAX,dword ptr [ESP + 0x30]      ; 005173db
        ;   Label: LAB_005173db
    ADD EAX,0x24                        ; 005173df
    INC EDI                             ; 005173e2
    MOV dword ptr [ESP + 0x30],EAX      ; 005173e3
    CMP EDI,ESI                         ; 005173e7
    JL 0x0051737b                       ; 005173e9
        ;   XREF to: 0051737b (CONDITIONAL_JUMP)  ; LAB_0051737b
    MOV EAX,dword ptr [ESP + 0x48]      ; 005173eb
        ;   Label: LAB_005173eb
    MOV dword ptr [EAX],ESI             ; 005173ef
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005173f1
    ADD ESP,0x34                        ; 005173f5
    POP EBP                             ; 005173f8
    POP EDI                             ; 005173f9
    POP ESI                             ; 005173fa
    POP EBX                             ; 005173fb
    RET                                 ; 005173fc

