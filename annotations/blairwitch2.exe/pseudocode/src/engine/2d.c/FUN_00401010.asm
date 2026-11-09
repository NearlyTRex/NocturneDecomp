; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_00401010(void)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
;
; XREF[1]:
;   core_main.c_FUN_004e46c0 at 004e47ac
;
; Referenced Globals:
;   TerminatedCString s_vga_act_005ca004
;   TerminatedCString s_vga_lte_005ca00c
;   TerminatedCString s_vga_map_005ca014
;   TerminatedCString s_vga_act_005ca01c
;   TerminatedCString s_default_act_005ca024
;   undefined4 DAT_005ca030
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e70
;   undefined4 DAT_01c35e74
;   undefined4 DAT_01c35e78
;
; Called Functions:
;   engine_2d.c_FUN_00401590
;   engine_2d.c_FUN_00402940
;   support_trstream.cpp_FUN_0057d390
;   unkaddr_0057b9a0.cpp_FUN_0057cfe0
;   unkaddr_0057b9a0.cpp_FUN_0057d180
;   unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0
;   wincore_wddvmem.cpp_FUN_00588790
;   wincore_wddvmem.cpp_FUN_00588a50
;   wincore_wddvmem.cpp_FUN_00589430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401010
        ;   Label: engine_2d.c_FUN_00401010
    SUB ESP,0x28                        ; 00401011
    PUSH 0x1e0                          ; 00401014
    MOV EDX,0x20                        ; 00401019
    PUSH 0x280                          ; 0040101e
    MOV dword ptr [0x006141c0],EDX      ; 00401023 | DAT_006141c0
    CALL wincore_wddvmem.cpp_FUN_00588790 ; 00401029
        ;   XREF to: 00588790 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_FUN_00588790(int width, int height)
    ADD ESP,0x8                         ; 0040102e
    PUSH 0x20                           ; 00401031
    PUSH 0x1e0                          ; 00401033
    PUSH 0x280                          ; 00401038
    CALL wincore_wddvmem.cpp_FUN_00588a50 ; 0040103d
        ;   XREF to: 00588a50 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_FUN_00588a50(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 00401042
    PUSH 0x5ca004                       ; 00401045 | = "vga.act"
    CALL engine_2d.c_FUN_00401590       ; 0040104a
        ;   XREF to: 00401590 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00401590()
    ADD ESP,0x4                         ; 0040104f
    PUSH 0x5ca00c                       ; 00401052 | = "vga.lte"
    ADD ESP,0x4                         ; 00401057
    PUSH 0x5ca014                       ; 0040105a | = "vga.map"
    CALL engine_2d.c_FUN_00402940       ; 0040105f
        ;   XREF to: 00402940 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_00402940(char * filename)
    ADD ESP,0x4                         ; 00401064
    PUSH 0x5ca01c                       ; 00401067 | = "vga.act"
    ADD ESP,0x4                         ; 0040106c
    CALL wincore_wddvmem.cpp_FUN_00589430 ; 0040106f
        ;   XREF to: 00589430 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589430()
    MOV ECX,0xffffffff                  ; 00401074
    MOV EBX,0x4                         ; 00401079
    MOV dword ptr [0x01c35e70],ECX      ; 0040107e | DAT_01c35e70
    MOV ECX,0x1                         ; 00401084
    MOV EAX,0xffffffff                  ; 00401089
        ;   Label: LAB_00401089
    XOR EDX,EDX                         ; 0040108e
    DIV ECX                             ; 00401090
    ADD EBX,0x4                         ; 00401092
    INC ECX                             ; 00401095
    MOV dword ptr [EBX + 0x1c35e6c],EAX ; 00401096 | DAT_01c35e74 | DAT_01c35e78
    CMP ECX,0x640                       ; 0040109c
    JC 0x00401089                       ; 004010a2
        ;   XREF to: 00401089 (CONDITIONAL_JUMP)  ; LAB_00401089
    MOV EAX,ESP                         ; 004010a4
    PUSH EAX                            ; 004010a6
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 004010a7
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004010ac
    PUSH 0x5ca024                       ; 004010af | = "default.act"
    PUSH 0x5ca030                       ; 004010b4 | DAT_005ca030
    LEA EAX,[ESP + 0x8]                 ; 004010b9
    PUSH EAX                            ; 004010bd
    CALL support_trstream.cpp_FUN_0057d390 ; 004010be
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d390()
    ADD ESP,0xc                         ; 004010c3
    TEST EAX,EAX                        ; 004010c6
    JNZ 0x004010de                      ; 004010c8
        ;   XREF to: 004010de (CONDITIONAL_JUMP)  ; LAB_004010de
    PUSH 0x0                            ; 004010ca
    LEA EAX,[ESP + 0x4]                 ; 004010cc
    PUSH EAX                            ; 004010d0
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004010d1
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004010d6
    ADD ESP,0x28                        ; 004010d9
    POP EBX                             ; 004010dc
    RET                                 ; 004010dd
    PUSH 0x300                          ; 004010de
        ;   Label: LAB_004010de
    PUSH 0x1c35b38                      ; 004010e3
    LEA EAX,[ESP + 0x8]                 ; 004010e8
    PUSH EAX                            ; 004010ec
    CALL unkaddr_0057b9a0.cpp_FUN_0057cfe0 ; 004010ed
        ;   XREF to: 0057cfe0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057cfe0()
    ADD ESP,0xc                         ; 004010f2
    MOV EAX,ESP                         ; 004010f5
    PUSH EAX                            ; 004010f7
    CALL unkaddr_0057b9a0.cpp_FUN_0057d180 ; 004010f8
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057d180()
    ADD ESP,0x4                         ; 004010fd
    PUSH 0x0                            ; 00401100
    LEA EAX,[ESP + 0x4]                 ; 00401102
    PUSH EAX                            ; 00401106
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 00401107
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040110c
    ADD ESP,0x28                        ; 0040110f
    POP EBX                             ; 00401112
    RET                                 ; 00401113

