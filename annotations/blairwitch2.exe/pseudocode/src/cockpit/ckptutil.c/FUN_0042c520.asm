; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl cockpit_ckptutil_c_FUN_0042c520(char *filename,void *buffer,int size)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   size
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x38]:1  local_38
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_FUN_005168e0 at 0051690e
;   cockpit_pkbitmap.cpp_FUN_00516960 at 00516971
;   engine_font.cpp_FUN_004a7d00 at 004a7e29
;
; Referenced Globals:
;   undefined4 s_Unable_to_allocate_u_byt_005cd345+1
;   TerminatedCString s_cockpit_ckptutil_c_005cd378
;   undefined4 DAT_005cd38e
;   TerminatedCString s_Unable_to_open_bitmap_fi_005cd392
;   TerminatedCString s_cockpit_ckptutil_c_005cd3b3
;   TerminatedCString s_Unable_to_read_bitmap_fi_005cd3c9
;   TerminatedCString s_cockpit_ckptutil_c_005cd3ea
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b7790
;   crt_unknown.c_FUN_005b8580
;   support_trstream.cpp_FUN_0057d390
;   unkaddr_0057b9a0.cpp_FUN_0057cfe0
;   unkaddr_0057b9a0.cpp_FUN_0057d180
;   unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c520
        ;   Label: cockpit_ckptutil.c_FUN_0042c520
    PUSH ESI                            ; 0042c521
    PUSH EDI                            ; 0042c522
    PUSH EBP                            ; 0042c523
    SUB ESP,0x78                        ; 0042c524
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0042c527
    MOV EBX,dword ptr [ESP + 0x90]      ; 0042c52e
    MOV EDI,dword ptr [ESP + 0x94]      ; 0042c535
    TEST EBX,EBX                        ; 0042c53c
    JZ 0x0042c5d4                       ; 0042c53e
        ;   XREF to: 0042c5d4 (CONDITIONAL_JUMP)  ; LAB_0042c5d4
    LEA EAX,[ESP + 0x50]                ; 0042c544
        ;   Label: LAB_0042c544
    PUSH EAX                            ; 0042c548
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 0042c549
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0042c54e
    PUSH ESI                            ; 0042c551
    PUSH 0x5cd38e                       ; 0042c552 | DAT_005cd38e
    LEA EAX,[ESP + 0x58]                ; 0042c557
    PUSH EAX                            ; 0042c55b
    CALL support_trstream.cpp_FUN_0057d390 ; 0042c55c
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d390()
    ADD ESP,0xc                         ; 0042c561
    TEST EAX,EAX                        ; 0042c564
    JNZ 0x0042c59b                      ; 0042c566
        ;   XREF to: 0042c59b (CONDITIONAL_JUMP)  ; LAB_0042c59b
    PUSH ESI                            ; 0042c568
    PUSH 0x5cd392                       ; 0042c569 | = "Unable to open bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042c56e
    PUSH EAX                            ; 0042c572
    CALL crt_unknown.c_FUN_005b7790     ; 0042c573
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,0xf1                        ; 0042c578
    ADD ESP,0xc                         ; 0042c57d
    MOV [0x01d046a4],EAX                ; 0042c580 | DAT_01d046a4
    MOV EAX,ESP                         ; 0042c585
    MOV EBP,0x5cd3b3                    ; 0042c587 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 0042c58c
    MOV dword ptr [0x01d046a0],EBP      ; 0042c58d | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 0042c593
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042c598
    PUSH EDI                            ; 0042c59b
        ;   Label: LAB_0042c59b
    PUSH EBX                            ; 0042c59c
    LEA EAX,[ESP + 0x58]                ; 0042c59d
    PUSH EAX                            ; 0042c5a1
    CALL unkaddr_0057b9a0.cpp_FUN_0057cfe0 ; 0042c5a2
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057cfe0()
    ADD ESP,0xc                         ; 0042c5a7
    CMP EAX,EDI                         ; 0042c5aa
    JNZ 0x0042c621                      ; 0042c5ac
        ;   XREF to: 0042c621 (CONDITIONAL_JUMP)  ; LAB_0042c621
    LEA EAX,[ESP + 0x50]                ; 0042c5ae
        ;   Label: LAB_0042c5ae
    PUSH EAX                            ; 0042c5b2
    CALL unkaddr_0057b9a0.cpp_FUN_0057d180 ; 0042c5b3
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057d180()
    ADD ESP,0x4                         ; 0042c5b8
    PUSH 0x0                            ; 0042c5bb
    LEA EAX,[ESP + 0x54]                ; 0042c5bd
    PUSH EAX                            ; 0042c5c1
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 0042c5c2
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042c5c7
    MOV EAX,EBX                         ; 0042c5ca
    ADD ESP,0x78                        ; 0042c5cc
    POP EBP                             ; 0042c5cf
    POP EDI                             ; 0042c5d0
    POP ESI                             ; 0042c5d1
    POP EBX                             ; 0042c5d2
    RET                                 ; 0042c5d3
    PUSH EDI                            ; 0042c5d4
        ;   Label: LAB_0042c5d4
    CALL crt_unknown.c_FUN_005b8580     ; 0042c5d5
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0042c5da
    MOV EBX,EAX                         ; 0042c5dd
    TEST EAX,EAX                        ; 0042c5df
    JNZ 0x0042c544                      ; 0042c5e1
        ;   XREF to: 0042c544 (CONDITIONAL_JUMP)  ; LAB_0042c544
    PUSH ESI                            ; 0042c5e7
    PUSH EDI                            ; 0042c5e8
    PUSH 0x5cd346                       ; 0042c5e9 | s_Unable_to_allocate_u_byt_005cd345+1
    LEA EAX,[ESP + 0xc]                 ; 0042c5ee
    PUSH EAX                            ; 0042c5f2
    CALL crt_unknown.c_FUN_005b7790     ; 0042c5f3
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EDX,0x5cd378                    ; 0042c5f8 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 0042c5fd
    MOV EAX,ESP                         ; 0042c600
    MOV ECX,0xe8                        ; 0042c602
    PUSH EAX                            ; 0042c607
    MOV dword ptr [0x01d046a0],EDX      ; 0042c608 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0042c60e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042c614
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042c619
    JMP 0x0042c544                      ; 0042c61c
        ;   XREF to: 0042c544 (UNCONDITIONAL_JUMP)  ; LAB_0042c544
    PUSH ESI                            ; 0042c621
        ;   Label: LAB_0042c621
    PUSH 0x5cd3c9                       ; 0042c622 | = "Unable to read bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0042c627
    PUSH EAX                            ; 0042c62b
    CALL crt_unknown.c_FUN_005b7790     ; 0042c62c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0042c631
    LEA EAX,[ESP + 0x50]                ; 0042c634
    PUSH EAX                            ; 0042c638
    CALL unkaddr_0057b9a0.cpp_FUN_0057d180 ; 0042c639
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057d180()
    MOV EDX,0x5cd3ea                    ; 0042c63e | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x4                         ; 0042c643
    MOV EAX,ESP                         ; 0042c646
    MOV ECX,0xf9                        ; 0042c648
    PUSH EAX                            ; 0042c64d
    MOV dword ptr [0x01d046a0],EDX      ; 0042c64e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0042c654 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042c65a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042c65f
    JMP 0x0042c5ae                      ; 0042c662
        ;   XREF to: 0042c5ae (UNCONDITIONAL_JUMP)  ; LAB_0042c5ae

