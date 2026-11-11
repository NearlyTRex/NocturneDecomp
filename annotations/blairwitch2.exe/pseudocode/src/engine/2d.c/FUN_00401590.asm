; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00401590(undefined4 param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[1]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 0040104a
;
; Referenced Globals:
;   undefined4 DAT_005ca05c
;   TerminatedCString s_engine_2d_c_005ca060
;   TerminatedCString s_Unable_to_open_VGA_palet_005ca06f
;   undefined4 DAT_01c35838
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
;   unkaddr_0057b9a0.cpp_CInStreamFile_close_FUN_0057d180
;   unkaddr_0057b9a0.cpp_CInStreamFile_read_FUN_0057cfe0
;   unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 00401590
        ;   Label: engine_2d.c_FUN_00401590
    MOV EAX,ESP                         ; 00401593
    PUSH EAX                            ; 00401595
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 00401596
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0040159b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0040159e
    PUSH EDX                            ; 004015a2
    PUSH 0x5ca05c                       ; 004015a3 | DAT_005ca05c
    LEA EAX,[ESP + 0x8]                 ; 004015a8
    PUSH EAX                            ; 004015ac
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 004015ad
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004015b2
    TEST EAX,EAX                        ; 004015b5
    JZ 0x004015ee                       ; 004015b7
        ;   XREF to: 004015ee (CONDITIONAL_JUMP)  ; LAB_004015ee
    PUSH 0x300                          ; 004015b9
        ;   Label: LAB_004015b9
    PUSH 0x1c35838                      ; 004015be | DAT_01c35838
    LEA EAX,[ESP + 0x8]                 ; 004015c3
    PUSH EAX                            ; 004015c7
    CALL unkaddr_0057b9a0.cpp_CInStreamFile_read_FUN_0057cfe0 ; 004015c8
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; int unkaddr_0057b9a0.cpp_CInStreamFile_read_FUN_0057cfe0(CInStreamFile * this_ptr, undefined4 * param_2, uint param_3)
    ADD ESP,0xc                         ; 004015cd
    MOV EAX,ESP                         ; 004015d0
    PUSH EAX                            ; 004015d2
    CALL unkaddr_0057b9a0.cpp_CInStreamFile_close_FUN_0057d180 ; 004015d3
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined4 unkaddr_0057b9a0.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004015d8
    PUSH 0x0                            ; 004015db
    LEA EAX,[ESP + 0x4]                 ; 004015dd
    PUSH EAX                            ; 004015e1
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004015e2
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004015e7
    ADD ESP,0x28                        ; 004015ea
    RET                                 ; 004015ed
    PUSH EBX                            ; 004015ee
        ;   Label: LAB_004015ee
    MOV ECX,0x5ca060                    ; 004015ef | = "..\\engine\\2d.c"
    MOV EBX,0x29b                       ; 004015f4
    PUSH 0x5ca06f                       ; 004015f9 | = "Unable to open VGA palette"
    MOV dword ptr [0x01d046a0],ECX      ; 004015fe | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00401604 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040160a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0040160f
    POP EBX                             ; 00401612
    JMP 0x004015b9                      ; 00401613
        ;   XREF to: 004015b9 (UNCONDITIONAL_JUMP)  ; LAB_004015b9

