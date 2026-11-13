; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402940(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x88]:1  local_88
; undefined1       Stack[-0x87]:1  local_87
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 0040105f
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_005ca094
;   TerminatedCString s_hose_005ca0a3
;   undefined4 DAT_005ca0a9
;   undefined4 DAT_005ca0ae
;   undefined4 DAT_005ca0b2
;   undefined4 DAT_005ca0b5
;   TerminatedCString s_engine_2d_c_005ca0b9
;   TerminatedCString s_Unable_to_write_quick_ma_005ca0c8
;   undefined4 DAT_01c2c910
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_buildColorLookupTable_FUN_00402880
;   support_trstream.cpp_CInStreamFile_close_FUN_0057d180
;   support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
;   support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0
;   support_trstream.cpp_COutStreamFile_close_FUN_0057dd60
;   support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80
;   support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10
;   support_trstream.cpp_COutStreamFile_openInDirectory_FUN_0057ddd0
;   support_trstream.cpp_COutStreamFile_write_FUN_0057dca0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00402940
        ;   Label: engine_2d.c_loadOrBuildColorMap_FUN_00402940
    PUSH EDI                            ; 00402941
    SUB ESP,0x80                        ; 00402942
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00402948
    LEA EAX,[ESP + 0x50]                ; 0040294f
    PUSH EAX                            ; 00402953
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 00402954
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
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
    MOV EDX,0x5ca094                    ; 0040299a | = "..\\engine\\2d.c"
    MOV ECX,0x74f                       ; 0040299f
    PUSH 0x5ca0a3                       ; 004029a4 | = "hose!"
    MOV dword ptr [0x01d046a0],EDX      ; 004029a9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004029af | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004029b5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004029ba
    PUSH 0x5ca0a9                       ; 004029bd | DAT_005ca0a9
        ;   Label: LAB_004029bd
    PUSH EDI                            ; 004029c2
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004029c3
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 004029c8
    MOV EAX,ESP                         ; 004029cb
    PUSH EAX                            ; 004029cd
    PUSH 0x5ca0ae                       ; 004029ce | DAT_005ca0ae
    LEA EAX,[ESP + 0x58]                ; 004029d3
    PUSH EAX                            ; 004029d7
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 004029d8
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, char * directory, char * filename)
    ADD ESP,0xc                         ; 004029dd
    TEST EAX,EAX                        ; 004029e0
    JNZ 0x00402a90                      ; 004029e2
        ;   XREF to: 00402a90 (CONDITIONAL_JUMP)  ; LAB_00402a90
    CALL engine_2d.c_buildColorLookupTable_FUN_00402880 ; 004029e8
        ;   XREF to: 00402880 (UNCONDITIONAL_CALL)  ; void engine_2d.c_buildColorLookupTable_FUN_00402880()
    LEA EAX,[ESP + 0x78]                ; 004029ed
    PUSH EAX                            ; 004029f1
    CALL support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80 ; 004029f2
        ;   XREF to: 0057db80 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004029f7
    PUSH 0x5ca0b2                       ; 004029fa | DAT_005ca0b2
    LEA EAX,[ESP + 0x4]                 ; 004029ff
    PUSH EAX                            ; 00402a03
    PUSH 0x5ca0b5                       ; 00402a04 | DAT_005ca0b5
    LEA EAX,[ESP + 0x84]                ; 00402a09
    PUSH EAX                            ; 00402a10
    CALL support_trstream.cpp_COutStreamFile_openInDirectory_FUN_0057ddd0 ; 00402a11
        ;   XREF to: 0057ddd0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_openInDirectory_FUN_0057ddd0(COutStreamFile * this_ptr, char * directory, char * filename, char * mode)
    ADD ESP,0x10                        ; 00402a16
    TEST EAX,EAX                        ; 00402a19
    JNZ 0x00402a42                      ; 00402a1b
        ;   XREF to: 00402a42 (CONDITIONAL_JUMP)  ; LAB_00402a42
    PUSH EBX                            ; 00402a1d
    MOV EBX,0x5ca0b9                    ; 00402a1e | = "..\\engine\\2d.c"
    MOV ESI,0x756                       ; 00402a23
    PUSH 0x5ca0c8                       ; 00402a28 | = "Unable to write quick map!"
    MOV dword ptr [0x01d046a0],EBX      ; 00402a2d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00402a33 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00402a39
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00402a3e
    POP EBX                             ; 00402a41
    PUSH 0x8000                         ; 00402a42
        ;   Label: LAB_00402a42
    PUSH 0x1c2c910                      ; 00402a47 | DAT_01c2c910
    LEA EAX,[ESP + 0x80]                ; 00402a4c
    PUSH EAX                            ; 00402a53
    CALL support_trstream.cpp_COutStreamFile_write_FUN_0057dca0 ; 00402a54
        ;   XREF to: 0057dca0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_write_FUN_0057dca0(COutStreamFile * this_ptr, undefined4 param_2, int param_3)
    ADD ESP,0xc                         ; 00402a59
    LEA EAX,[ESP + 0x78]                ; 00402a5c
    PUSH EAX                            ; 00402a60
    CALL support_trstream.cpp_COutStreamFile_close_FUN_0057dd60 ; 00402a61
        ;   XREF to: 0057dd60 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_close_FUN_0057dd60(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00402a66
    PUSH 0x0                            ; 00402a69
    LEA EAX,[ESP + 0x7c]                ; 00402a6b
    PUSH EAX                            ; 00402a6f
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 ; 00402a70
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00402a75
    PUSH 0x0                            ; 00402a78
        ;   Label: LAB_00402a78
    LEA EAX,[ESP + 0x54]                ; 00402a7a
    PUSH EAX                            ; 00402a7e
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 00402a7f
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00402a84
    ADD ESP,0x80                        ; 00402a87
    POP EDI                             ; 00402a8d
    POP ESI                             ; 00402a8e
    RET                                 ; 00402a8f
    PUSH 0x8000                         ; 00402a90
        ;   Label: LAB_00402a90
    PUSH 0x1c2c910                      ; 00402a95 | DAT_01c2c910
    LEA EAX,[ESP + 0x58]                ; 00402a9a
    PUSH EAX                            ; 00402a9e
    CALL support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0 ; 00402a9f
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 00402aa4
    LEA EAX,[ESP + 0x50]                ; 00402aa7
    PUSH EAX                            ; 00402aab
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 00402aac
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00402ab1
    JMP 0x00402a78                      ; 00402ab4
        ;   XREF to: 00402a78 (UNCONDITIONAL_JUMP)  ; LAB_00402a78

