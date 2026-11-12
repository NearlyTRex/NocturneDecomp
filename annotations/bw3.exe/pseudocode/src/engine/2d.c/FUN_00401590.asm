; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00401590(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
;
; XREF[1]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 0040104a
;
; Referenced Globals:
;   undefined4 DAT_005b505c
;   TerminatedCString s_engine_2d_c_005b5060
;   TerminatedCString s_Unable_to_open_VGA_palet_005b506f
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   support_trstream.cpp_CInStreamFile_close_FUN_00573db0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0
;   support_trstream.cpp_CInStreamFile_read_FUN_00573c00
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 00401590
        ;   Label: engine_2d.c_FUN_00401590
    MOV EAX,ESP                         ; 00401593
    PUSH EAX                            ; 00401595
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 ; 00401596
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0040159b
    PUSH 0x1                            ; 0040159e
    MOV EDX,dword ptr [ESP + 0x34]      ; 004015a0
    PUSH EDX                            ; 004015a4
    PUSH 0x5b505c                       ; 004015a5 | DAT_005b505c
    LEA EAX,[ESP + 0xc]                 ; 004015aa
    PUSH EAX                            ; 004015ae
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 004015af
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 004015b4
    TEST EAX,EAX                        ; 004015b7
    JZ 0x004015f0                       ; 004015b9
        ;   XREF to: 004015f0 (CONDITIONAL_JUMP)  ; LAB_004015f0
    PUSH 0x300                          ; 004015bb
        ;   Label: LAB_004015bb
    PUSH 0x1c6af98                      ; 004015c0 | DAT_01c6af98
    LEA EAX,[ESP + 0x8]                 ; 004015c5
    PUSH EAX                            ; 004015c9
    CALL support_trstream.cpp_CInStreamFile_read_FUN_00573c00 ; 004015ca
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 004015cf
    MOV EAX,ESP                         ; 004015d2
    PUSH EAX                            ; 004015d4
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 004015d5
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004015da
    PUSH 0x0                            ; 004015dd
    LEA EAX,[ESP + 0x4]                 ; 004015df
    PUSH EAX                            ; 004015e3
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004015e4
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004015e9
    ADD ESP,0x2c                        ; 004015ec
    RET                                 ; 004015ef
    PUSH EBX                            ; 004015f0
        ;   Label: LAB_004015f0
    MOV ECX,0x5b5060                    ; 004015f1 | = "..\\engine\\2d.c"
    MOV EBX,0x29b                       ; 004015f6
    PUSH 0x5b506f                       ; 004015fb | = "Unable to open VGA palette (probably ..."
    MOV dword ptr [0x01d71de0],ECX      ; 00401600 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00401606 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040160c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00401611
    POP EBX                             ; 00401614
    JMP 0x004015bb                      ; 00401615
        ;   XREF to: 004015bb (UNCONDITIONAL_JUMP)  ; LAB_004015bb

