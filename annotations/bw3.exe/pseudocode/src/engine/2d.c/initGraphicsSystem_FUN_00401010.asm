; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e45cc
;
; Referenced Globals:
;   TerminatedCString s_vga_act_005b5004
;   TerminatedCString s_vga_lte_005b500c
;   TerminatedCString s_vga_map_005b5014
;   TerminatedCString s_vga_act_005b501c
;   TerminatedCString s_default_act_005b5024
;   undefined4 DAT_005b5030
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5d0
;   undefined4 DAT_01c6b5d4
;   undefined4 DAT_01c6b5d8
;
; Called Functions:
;   engine_2d.c_FUN_00401590
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940
;   support_trstream.cpp_CInStreamFile_close_FUN_00573db0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0
;   support_trstream.cpp_CInStreamFile_read_FUN_00573c00
;   wincore_wddvmem.cpp_FUN_005798f0
;   wincore_wddvmem.cpp_FUN_00579bb0
;   wincore_wddvmem.cpp_setupColorPalette_FUN_0057a770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401010
        ;   Label: engine_2d.c_initGraphicsSystem_FUN_00401010
    SUB ESP,0x2c                        ; 00401011
    PUSH 0x1e0                          ; 00401014
    MOV EDX,0x20                        ; 00401019
    PUSH 0x280                          ; 0040101e
    MOV dword ptr [0x005fba20],EDX      ; 00401023 | DAT_005fba20
    CALL wincore_wddvmem.cpp_FUN_005798f0 ; 00401029
        ;   XREF to: 005798f0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_FUN_005798f0(int width, int height)
    ADD ESP,0x8                         ; 0040102e
    PUSH 0x20                           ; 00401031
    PUSH 0x1e0                          ; 00401033
    PUSH 0x280                          ; 00401038
    CALL wincore_wddvmem.cpp_FUN_00579bb0 ; 0040103d
        ;   XREF to: 00579bb0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00579bb0()
    ADD ESP,0xc                         ; 00401042
    PUSH 0x5b5004                       ; 00401045 | = "vga.act"
    CALL engine_2d.c_FUN_00401590       ; 0040104a
        ;   XREF to: 00401590 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_FUN_00401590()
    ADD ESP,0x4                         ; 0040104f
    PUSH 0x5b500c                       ; 00401052 | = "vga.lte"
    ADD ESP,0x4                         ; 00401057
    PUSH 0x5b5014                       ; 0040105a | = "vga.map"
    CALL engine_2d.c_loadOrBuildColorMap_FUN_00402940 ; 0040105f
        ;   XREF to: 00402940 (UNCONDITIONAL_CALL)  ; void engine_2d.c_loadOrBuildColorMap_FUN_00402940(char * filename)
    ADD ESP,0x4                         ; 00401064
    PUSH 0x5b501c                       ; 00401067 | = "vga.act"
    ADD ESP,0x4                         ; 0040106c
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_0057a770 ; 0040106f
        ;   XREF to: 0057a770 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_setupColorPalette_FUN_0057a770()
    MOV ECX,0xffffffff                  ; 00401074
    MOV EBX,0x4                         ; 00401079
    MOV dword ptr [0x01c6b5d0],ECX      ; 0040107e | DAT_01c6b5d0
    MOV ECX,0x1                         ; 00401084
    MOV EAX,0xffffffff                  ; 00401089
        ;   Label: LAB_00401089
    XOR EDX,EDX                         ; 0040108e
    DIV ECX                             ; 00401090
    ADD EBX,0x4                         ; 00401092
    INC ECX                             ; 00401095
    MOV dword ptr [EBX + 0x1c6b5cc],EAX ; 00401096 | DAT_01c6b5d4 | DAT_01c6b5d8
    CMP ECX,0x640                       ; 0040109c
    JC 0x00401089                       ; 004010a2
        ;   XREF to: 00401089 (CONDITIONAL_JUMP)  ; LAB_00401089
    MOV EAX,ESP                         ; 004010a4
    PUSH EAX                            ; 004010a6
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 ; 004010a7
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004010ac
    PUSH 0x1                            ; 004010af
    PUSH 0x5b5024                       ; 004010b1 | = "default.act"
    PUSH 0x5b5030                       ; 004010b6 | DAT_005b5030
    LEA EAX,[ESP + 0xc]                 ; 004010bb
    PUSH EAX                            ; 004010bf
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 004010c0
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, char * directory, char * filename, int binary_mode)
    ADD ESP,0x10                        ; 004010c5
    TEST EAX,EAX                        ; 004010c8
    JNZ 0x004010e0                      ; 004010ca
        ;   XREF to: 004010e0 (CONDITIONAL_JUMP)  ; LAB_004010e0
    PUSH 0x0                            ; 004010cc
    LEA EAX,[ESP + 0x4]                 ; 004010ce
    PUSH EAX                            ; 004010d2
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004010d3
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004010d8
    ADD ESP,0x2c                        ; 004010db
    POP EBX                             ; 004010de
    RET                                 ; 004010df
    PUSH 0x300                          ; 004010e0
        ;   Label: LAB_004010e0
    PUSH 0x1c6b298                      ; 004010e5
    LEA EAX,[ESP + 0x8]                 ; 004010ea
    PUSH EAX                            ; 004010ee
    CALL support_trstream.cpp_CInStreamFile_read_FUN_00573c00 ; 004010ef
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_read_FUN_00573c00(CInStreamFile * this_ptr, void * buffer, int count)
    ADD ESP,0xc                         ; 004010f4
    MOV EAX,ESP                         ; 004010f7
    PUSH EAX                            ; 004010f9
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 004010fa
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004010ff
    PUSH 0x0                            ; 00401102
    LEA EAX,[ESP + 0x4]                 ; 00401104
    PUSH EAX                            ; 00401108
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 00401109
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040110e
    ADD ESP,0x2c                        ; 00401111
    POP EBX                             ; 00401114
    RET                                 ; 00401115

