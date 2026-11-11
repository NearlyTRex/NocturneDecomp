; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402940(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x8c]:1  local_8c
; undefined1       Stack[-0x8b]:1  local_8b
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 0040105f
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_005d2094
;   TerminatedCString s_hose_005d20a3
;   undefined4 DAT_005d20a9
;   undefined4 DAT_005d20ae
;   undefined4 DAT_005d20b2
;   undefined4 DAT_005d20b5
;   TerminatedCString s_engine_2d_c_005d20b9
;   TerminatedCString s_Unable_to_write_quick_ma_005d20c8
;   undefined4 DAT_01c45ad0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_buildColorLookupTable_FUN_00402880
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
;   support_trstream.cpp_COutStreamFile_close_FUN_005a19b0
;   support_trstream.cpp_COutStreamFile_ctor_FUN_005a17d0
;   support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860
;   support_trstream.cpp_COutStreamFile_openInDirectory_FUN_005a1a20
;   support_trstream.cpp_COutStreamFile_write_FUN_005a18f0
;   unkaddr_0059f520.cpp_CInStreamFile_close_FUN_005a0dc0
;   unkaddr_0059f520.cpp_CInStreamFile_read_FUN_005a0c10
;   unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00402940
        ;   Label: engine_2d.c_loadOrBuildColorMap_FUN_00402940
    PUSH EDI                            ; 00402941
    SUB ESP,0x84                        ; 00402942
    MOV ESI,dword ptr [ESP + 0x90]      ; 00402948
    LEA EAX,[ESP + 0x50]                ; 0040294f
    PUSH EAX                            ; 00402953
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 00402954
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00402959
    MOV EDI,ESP                         ; 0040295c
    MOV DL,0x2e                         ; 0040295e
    PUSH EDI                            ; 00402960
    MOV AL,byte ptr [ESI]               ; 00402961
        ;   Label: LAB_00402961
    MOV byte ptr [EDI],AL               ; 00402963
    CMP AL,0x0                          ; 00402965
    JZ 0x00402979                       ; 00402967
        ;   XREF to: 00402979 (CONDITIONAL_JUMP)  ; LAB_00402979
    MOV AL,byte ptr [ESI + 0x1]         ; 00402969
    ADD ESI,0x2                         ; 0040296c
    MOV byte ptr [EDI + 0x1],AL         ; 0040296f
    ADD EDI,0x2                         ; 00402972
    CMP AL,0x0                          ; 00402975
    JNZ 0x00402961                      ; 00402977
        ;   XREF to: 00402961 (CONDITIONAL_JUMP)  ; LAB_00402961
    POP EDI                             ; 00402979
        ;   Label: LAB_00402979
    MOV ESI,ESP                         ; 0040297a
    MOV AL,byte ptr [ESI]               ; 0040297c
        ;   Label: LAB_0040297c
    CMP AL,DL                           ; 0040297e
    JZ 0x00402994                       ; 00402980
        ;   XREF to: 00402994 (CONDITIONAL_JUMP)  ; LAB_00402994
    CMP AL,0x0                          ; 00402982
    JZ 0x00402992                       ; 00402984
        ;   XREF to: 00402992 (CONDITIONAL_JUMP)  ; LAB_00402992
    INC ESI                             ; 00402986
    MOV AL,byte ptr [ESI]               ; 00402987
    CMP AL,DL                           ; 00402989
    JZ 0x00402994                       ; 0040298b
        ;   XREF to: 00402994 (CONDITIONAL_JUMP)  ; LAB_00402994
    INC ESI                             ; 0040298d
    CMP AL,0x0                          ; 0040298e
    JNZ 0x0040297c                      ; 00402990
        ;   XREF to: 0040297c (CONDITIONAL_JUMP)  ; LAB_0040297c
    SUB ESI,ESI                         ; 00402992
        ;   Label: LAB_00402992
    MOV EDI,ESI                         ; 00402994
        ;   Label: LAB_00402994
    TEST ESI,ESI                        ; 00402996
    JNZ 0x004029bd                      ; 00402998
        ;   XREF to: 004029bd (CONDITIONAL_JUMP)  ; LAB_004029bd
    MOV EDX,0x5d2094                    ; 0040299a | = "..\\engine\\2d.c"
    MOV ECX,0x769                       ; 0040299f
    PUSH 0x5d20a3                       ; 004029a4 | = "hose!"
    MOV dword ptr [0x01d1d400],EDX      ; 004029a9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004029af | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004029b5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004029ba
    PUSH 0x5d20a9                       ; 004029bd | DAT_005d20a9
        ;   Label: LAB_004029bd
    PUSH EDI                            ; 004029c2
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004029c3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x8                         ; 004029c8
    PUSH 0x1                            ; 004029cb
    LEA EAX,[ESP + 0x4]                 ; 004029cd
    PUSH EAX                            ; 004029d1
    PUSH 0x5d20ae                       ; 004029d2 | DAT_005d20ae
    LEA EAX,[ESP + 0x5c]                ; 004029d7
    PUSH EAX                            ; 004029db
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 004029dc
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 004029e1
    TEST EAX,EAX                        ; 004029e4
    JNZ 0x00402a97                      ; 004029e6
        ;   XREF to: 00402a97 (CONDITIONAL_JUMP)  ; LAB_00402a97
    CALL engine_2d.c_buildColorLookupTable_FUN_00402880 ; 004029ec
        ;   XREF to: 00402880 (UNCONDITIONAL_CALL)  ; void engine_2d.c_buildColorLookupTable_FUN_00402880()
    LEA EAX,[ESP + 0x7c]                ; 004029f1
    PUSH EAX                            ; 004029f5
    CALL support_trstream.cpp_COutStreamFile_ctor_FUN_005a17d0 ; 004029f6
        ;   XREF to: 005a17d0 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_ctor_FUN_005a17d0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004029fb
    PUSH 0x5d20b2                       ; 004029fe | DAT_005d20b2
    LEA EAX,[ESP + 0x4]                 ; 00402a03
    PUSH EAX                            ; 00402a07
    PUSH 0x5d20b5                       ; 00402a08 | DAT_005d20b5
    LEA EAX,[ESP + 0x88]                ; 00402a0d
    PUSH EAX                            ; 00402a14
    CALL support_trstream.cpp_COutStreamFile_openInDirectory_FUN_005a1a20 ; 00402a15
        ;   XREF to: 005a1a20 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_openInDirectory_FUN_005a1a20(COutStreamFile * this_ptr, char * param_2, char * param_3, char * param_4)
    ADD ESP,0x10                        ; 00402a1a
    TEST EAX,EAX                        ; 00402a1d
    JNZ 0x00402a46                      ; 00402a1f
        ;   XREF to: 00402a46 (CONDITIONAL_JUMP)  ; LAB_00402a46
    PUSH EBX                            ; 00402a21
    MOV EBX,0x5d20b9                    ; 00402a22 | = "..\\engine\\2d.c"
    MOV ESI,0x770                       ; 00402a27
    PUSH 0x5d20c8                       ; 00402a2c | = "Unable to write quick map!"
    MOV dword ptr [0x01d1d400],EBX      ; 00402a31 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00402a37 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00402a3d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00402a42
    POP EBX                             ; 00402a45
    PUSH 0x8000                         ; 00402a46
        ;   Label: LAB_00402a46
    PUSH 0x1c45ad0                      ; 00402a4b | DAT_01c45ad0
    LEA EAX,[ESP + 0x84]                ; 00402a50
    PUSH EAX                            ; 00402a57
    CALL support_trstream.cpp_COutStreamFile_write_FUN_005a18f0 ; 00402a58
        ;   XREF to: 005a18f0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_write_FUN_005a18f0(COutStreamFile * this_ptr, undefined4 param_2, int param_3)
    ADD ESP,0xc                         ; 00402a5d
    LEA EAX,[ESP + 0x7c]                ; 00402a60
    PUSH EAX                            ; 00402a64
    CALL support_trstream.cpp_COutStreamFile_close_FUN_005a19b0 ; 00402a65
        ;   XREF to: 005a19b0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_close_FUN_005a19b0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00402a6a
    PUSH 0x0                            ; 00402a6d
    LEA EAX,[ESP + 0x80]                ; 00402a6f
    PUSH EAX                            ; 00402a76
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860 ; 00402a77
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00402a7c
    PUSH 0x0                            ; 00402a7f
        ;   Label: LAB_00402a7f
    LEA EAX,[ESP + 0x54]                ; 00402a81
    PUSH EAX                            ; 00402a85
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 00402a86
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00402a8b
    ADD ESP,0x84                        ; 00402a8e
    POP EDI                             ; 00402a94
    POP ESI                             ; 00402a95
    RET                                 ; 00402a96
    PUSH 0x8000                         ; 00402a97
        ;   Label: LAB_00402a97
    PUSH 0x1c45ad0                      ; 00402a9c | DAT_01c45ad0
    LEA EAX,[ESP + 0x58]                ; 00402aa1
    PUSH EAX                            ; 00402aa5
    CALL unkaddr_0059f520.cpp_CInStreamFile_read_FUN_005a0c10 ; 00402aa6
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; int unkaddr_0059f520.cpp_CInStreamFile_read_FUN_005a0c10(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 00402aab
    LEA EAX,[ESP + 0x50]                ; 00402aae
    PUSH EAX                            ; 00402ab2
    CALL unkaddr_0059f520.cpp_CInStreamFile_close_FUN_005a0dc0 ; 00402ab3
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 unkaddr_0059f520.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00402ab8
    JMP 0x00402a7f                      ; 00402abb
        ;   XREF to: 00402a7f (UNCONDITIONAL_JUMP)  ; LAB_00402a7f

