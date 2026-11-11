; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_codec_cpp_CInStreamPipe_fillBuffer_FUN_00435300(CInStreamPipe *this_ptr)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[3]:
;   support_codec.cpp_CInStreamPipe_getChar_FUN_00434fa0 at 00434fd6
;   support_codec.cpp_CInStreamPipe_peekChar_FUN_00435020 at 0043504e
;   support_codec.cpp_CInStreamPipe_read_FUN_00435060 at 004350e8
;
; Called Functions:
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_0057de80
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10
;   support_trstream.cpp_COutStreamMemory_tell_FUN_0057e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435300
        ;   Label: support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00435300
    PUSH ESI                            ; 00435301
    PUSH EDI                            ; 00435302
    SUB ESP,0x18                        ; 00435303
    MOV EBX,dword ptr [ESP + 0x28]      ; 00435306
    MOV dword ptr [EBX + 0x1c],0x0      ; 0043530a
    MOV EDX,dword ptr [EBX + 0x20]      ; 00435311
    MOV dword ptr [EBX + 0x18],0x0      ; 00435314
    TEST EDX,EDX                        ; 0043531b
    JZ 0x0043532d                       ; 0043531d
        ;   XREF to: 0043532d (CONDITIONAL_JUMP)  ; LAB_0043532d
    MOV EBX,0xffffffff                  ; 0043531f
    MOV EAX,EBX                         ; 00435324
    ADD ESP,0x18                        ; 00435326
    POP EDI                             ; 00435329
    POP ESI                             ; 0043532a
    POP EBX                             ; 0043532b
    RET                                 ; 0043532c
    MOV ECX,dword ptr [EBX + 0x14]      ; 0043532d
        ;   Label: LAB_0043532d
    PUSH ECX                            ; 00435330
    MOV ESI,dword ptr [EBX + 0x10]      ; 00435331
    PUSH ESI                            ; 00435334
    LEA EAX,[ESP + 0x8]                 ; 00435335
    PUSH EAX                            ; 00435339
    CALL support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_0057de80 ; 0043533a
        ;   XREF to: 0057de80 (UNCONDITIONAL_CALL)  ; undefined4 * support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_0057de80(COutStreamMemory * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 0043533f
    MOV EDX,ESP                         ; 00435342
    PUSH EDX                            ; 00435344
    MOV EDI,dword ptr [EBX + 0x8]       ; 00435345
    MOV EAX,dword ptr [EBX + 0x4]       ; 00435348
    PUSH EDI                            ; 0043534b
    MOV ECX,dword ptr [EAX]             ; 0043534c
    PUSH EAX                            ; 0043534e
    CALL dword ptr [ECX + 0x8]          ; 0043534f
    ADD ESP,0xc                         ; 00435352
    TEST EAX,EAX                        ; 00435355
    JZ 0x004353a6                       ; 00435357
        ;   XREF to: 004353a6 (CONDITIONAL_JUMP)  ; LAB_004353a6
    CMP EAX,0x1                         ; 00435359
    JNZ 0x00435379                      ; 0043535c
        ;   XREF to: 00435379 (CONDITIONAL_JUMP)  ; LAB_00435379
    MOV EDX,ESP                         ; 0043535e
    MOV EAX,dword ptr [EBX + 0x4]       ; 00435360
    PUSH EDX                            ; 00435363
    MOV ECX,dword ptr [EAX]             ; 00435364
    PUSH EAX                            ; 00435366
    CALL dword ptr [ECX + 0xc]          ; 00435367
    ADD ESP,0x8                         ; 0043536a
    TEST EAX,EAX                        ; 0043536d
    JZ 0x004353a6                       ; 0043536f
        ;   XREF to: 004353a6 (CONDITIONAL_JUMP)  ; LAB_004353a6
    CMP EAX,0x1                         ; 00435371
    JNZ 0x00435379                      ; 00435374
        ;   XREF to: 00435379 (CONDITIONAL_JUMP)  ; LAB_00435379
    MOV dword ptr [EBX + 0x20],EAX      ; 00435376
    MOV EAX,ESP                         ; 00435379
        ;   Label: LAB_00435379
    PUSH EAX                            ; 0043537b
    CALL support_trstream.cpp_COutStreamMemory_tell_FUN_0057e0c0 ; 0043537c
        ;   XREF to: 0057e0c0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamMemory_tell_FUN_0057e0c0(COutStreamMemory * this_ptr)
    ADD ESP,0x4                         ; 00435381
    TEST EAX,EAX                        ; 00435384
    JL 0x004353c2                       ; 00435386
        ;   XREF to: 004353c2 (CONDITIONAL_JUMP)  ; LAB_004353c2
    JNZ 0x004353df                      ; 00435388
        ;   XREF to: 004353df (CONDITIONAL_JUMP)  ; LAB_004353df
    PUSH EAX                            ; 0043538a
    LEA EAX,[ESP + 0x4]                 ; 0043538b
    PUSH EAX                            ; 0043538f
    MOV EBX,0xffffffff                  ; 00435390
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10 ; 00435395
        ;   XREF to: 0057df10 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043539a
    MOV EAX,EBX                         ; 0043539d
    ADD ESP,0x18                        ; 0043539f
    POP EDI                             ; 004353a2
    POP ESI                             ; 004353a3
    POP EBX                             ; 004353a4
    RET                                 ; 004353a5
    PUSH EAX                            ; 004353a6
        ;   Label: LAB_004353a6
    LEA EAX,[ESP + 0x4]                 ; 004353a7
    PUSH EAX                            ; 004353ab
    MOV EBX,0xfffffffe                  ; 004353ac
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10 ; 004353b1
        ;   XREF to: 0057df10 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004353b6
    MOV EAX,EBX                         ; 004353b9
    ADD ESP,0x18                        ; 004353bb
    POP EDI                             ; 004353be
    POP ESI                             ; 004353bf
    POP EBX                             ; 004353c0
    RET                                 ; 004353c1
    PUSH 0x0                            ; 004353c2
        ;   Label: LAB_004353c2
    LEA EAX,[ESP + 0x4]                 ; 004353c4
    PUSH EAX                            ; 004353c8
    MOV EBX,0xfffffffe                  ; 004353c9
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10 ; 004353ce
        ;   XREF to: 0057df10 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004353d3
    MOV EAX,EBX                         ; 004353d6
    ADD ESP,0x18                        ; 004353d8
    POP EDI                             ; 004353db
    POP ESI                             ; 004353dc
    POP EBX                             ; 004353dd
    RET                                 ; 004353de
    MOV dword ptr [EBX + 0x18],EAX      ; 004353df
        ;   Label: LAB_004353df
    XOR EBX,EBX                         ; 004353e2
    PUSH EBX                            ; 004353e4
    LEA EAX,[ESP + 0x4]                 ; 004353e5
    PUSH EAX                            ; 004353e9
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10 ; 004353ea
        ;   XREF to: 0057df10 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004353ef
    MOV EAX,EBX                         ; 004353f2
    ADD ESP,0x18                        ; 004353f4
    POP EDI                             ; 004353f7
    POP ESI                             ; 004353f8
    POP EBX                             ; 004353f9
    RET                                 ; 004353fa

