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
;   TerminatedCString s_engine_2d_c_005b50cc
;   TerminatedCString s_hose_005b50db
;   undefined4 DAT_005b50e1
;   undefined4 DAT_005b50e6
;   undefined4 DAT_005b50ea
;   undefined4 DAT_005b50ed
;   TerminatedCString s_engine_2d_c_005b50f1
;   TerminatedCString s_Unable_to_write_quick_ma_005b5100
;   undefined4 DAT_01c62070
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_2d.c_buildColorLookupTable_FUN_00402880
;   support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0
;   support_trstream.cpp_COutStreamFile_dtor_FUN_00574850
;   support_trstream.cpp_FUN_00573fc0
;   support_trstream.cpp_FUN_005748e0
;   support_trstream.cpp_FUN_005749a0
;   support_trstream.cpp_FUN_00574a10
;   unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0
;   unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40
;   unkafter_turret.cpp_FUN_00573c00
;   unkafter_turret.cpp_FUN_00573db0
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
    CALL unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0 ; 00402954
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
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
    MOV EDX,0x5b50cc                    ; 0040299a | = "..\\engine\\2d.c"
    MOV ECX,0x769                       ; 0040299f
    PUSH 0x5b50db                       ; 004029a4 | = "hose!"
    MOV dword ptr [0x01d71de0],EDX      ; 004029a9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004029af | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004029b5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004029ba
    PUSH 0x5b50e1                       ; 004029bd | DAT_005b50e1
        ;   Label: LAB_004029bd
    PUSH EDI                            ; 004029c2
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004029c3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004029c8
    PUSH 0x1                            ; 004029cb
    LEA EAX,[ESP + 0x4]                 ; 004029cd
    PUSH EAX                            ; 004029d1
    PUSH 0x5b50e6                       ; 004029d2 | DAT_005b50e6
    LEA EAX,[ESP + 0x5c]                ; 004029d7
    PUSH EAX                            ; 004029db
    CALL support_trstream.cpp_FUN_00573fc0 ; 004029dc
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573fc0()
    ADD ESP,0x10                        ; 004029e1
    TEST EAX,EAX                        ; 004029e4
    JNZ 0x00402a97                      ; 004029e6
        ;   XREF to: 00402a97 (CONDITIONAL_JUMP)  ; LAB_00402a97
    CALL engine_2d.c_buildColorLookupTable_FUN_00402880 ; 004029ec
        ;   XREF to: 00402880 (UNCONDITIONAL_CALL)  ; void engine_2d.c_buildColorLookupTable_FUN_00402880()
    LEA EAX,[ESP + 0x7c]                ; 004029f1
    PUSH EAX                            ; 004029f5
    CALL support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0 ; 004029f6
        ;   XREF to: 005747c0 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004029fb
    PUSH 0x5b50ea                       ; 004029fe | DAT_005b50ea
    LEA EAX,[ESP + 0x4]                 ; 00402a03
    PUSH EAX                            ; 00402a07
    PUSH 0x5b50ed                       ; 00402a08 | DAT_005b50ed
    LEA EAX,[ESP + 0x88]                ; 00402a0d
    PUSH EAX                            ; 00402a14
    CALL support_trstream.cpp_FUN_00574a10 ; 00402a15
        ;   XREF to: 00574a10 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00574a10()
    ADD ESP,0x10                        ; 00402a1a
    TEST EAX,EAX                        ; 00402a1d
    JNZ 0x00402a46                      ; 00402a1f
        ;   XREF to: 00402a46 (CONDITIONAL_JUMP)  ; LAB_00402a46
    PUSH EBX                            ; 00402a21
    MOV EBX,0x5b50f1                    ; 00402a22 | = "..\\engine\\2d.c"
    MOV ESI,0x770                       ; 00402a27
    PUSH 0x5b5100                       ; 00402a2c | = "Unable to write quick map!"
    MOV dword ptr [0x01d71de0],EBX      ; 00402a31 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00402a37 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00402a3d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00402a42
    POP EBX                             ; 00402a45
    PUSH 0x8000                         ; 00402a46
        ;   Label: LAB_00402a46
    PUSH 0x1c62070                      ; 00402a4b | DAT_01c62070
    LEA EAX,[ESP + 0x84]                ; 00402a50
    PUSH EAX                            ; 00402a57
    CALL support_trstream.cpp_FUN_005748e0 ; 00402a58
        ;   XREF to: 005748e0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005748e0()
    ADD ESP,0xc                         ; 00402a5d
    LEA EAX,[ESP + 0x7c]                ; 00402a60
    PUSH EAX                            ; 00402a64
    CALL support_trstream.cpp_FUN_005749a0 ; 00402a65
        ;   XREF to: 005749a0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005749a0()
    ADD ESP,0x4                         ; 00402a6a
    PUSH 0x0                            ; 00402a6d
    LEA EAX,[ESP + 0x80]                ; 00402a6f
    PUSH EAX                            ; 00402a76
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 ; 00402a77
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00402a7c
    PUSH 0x0                            ; 00402a7f
        ;   Label: LAB_00402a7f
    LEA EAX,[ESP + 0x54]                ; 00402a81
    PUSH EAX                            ; 00402a85
    CALL unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 ; 00402a86
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00402a8b
    ADD ESP,0x84                        ; 00402a8e
    POP EDI                             ; 00402a94
    POP ESI                             ; 00402a95
    RET                                 ; 00402a96
    PUSH 0x8000                         ; 00402a97
        ;   Label: LAB_00402a97
    PUSH 0x1c62070                      ; 00402a9c | DAT_01c62070
    LEA EAX,[ESP + 0x58]                ; 00402aa1
    PUSH EAX                            ; 00402aa5
    CALL unkafter_turret.cpp_FUN_00573c00 ; 00402aa6
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 00402aab
    LEA EAX,[ESP + 0x50]                ; 00402aae
    PUSH EAX                            ; 00402ab2
    CALL unkafter_turret.cpp_FUN_00573db0 ; 00402ab3
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573db0()
    ADD ESP,0x4                         ; 00402ab8
    JMP 0x00402a7f                      ; 00402abb
        ;   XREF to: 00402a7f (UNCONDITIONAL_JUMP)  ; LAB_00402a7f

