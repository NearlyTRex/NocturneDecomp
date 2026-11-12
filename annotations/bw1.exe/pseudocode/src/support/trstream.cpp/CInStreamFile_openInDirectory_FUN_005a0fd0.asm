; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile *this_ptr,undefined4 param_2,undefined4 param_3,int param_4)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
;
; XREF[15]:
;   cockpit_ckptutil.c_FUN_0043b2e0 at 0043b31e
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490 at 00437546
;   engine_2d.c_FUN_00401590 at 004015af
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 004010c0
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 004029dc
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0e6c
;   engine_font.cpp_FUN_004c0fa0 at 004c1121
;   engine_font.cpp_FUN_004c157e at 004c15e5
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_005967a0 at 00596a9a
;   engine_texture.cpp_FUN_00597d6e at 00597e6b
;   ... and 5 more
;
; Referenced Globals:
;   void* PTR_CreateFileA_005d0528 = 001d0c8c
;
; Called Functions:
;   CreateFileA
;   engine_dosio.cpp_findFile_FUN_00478e90
;   engine_dosio.cpp_FUN_00478e20
;   support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0fd0
        ;   Label: support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
    SUB ESP,0x214                       ; 005a0fd1
    MOV EBX,dword ptr [ESP + 0x21c]     ; 005a0fd7
    PUSH EBX                            ; 005a0fde
    MOV EAX,dword ptr [EBX]             ; 005a0fdf
    CALL dword ptr [EAX + 0x24]         ; 005a0fe1
    ADD ESP,0x4                         ; 005a0fe4
    MOV EDX,dword ptr [ESP + 0x224]     ; 005a0fe7
    PUSH EDX                            ; 005a0fee
    MOV ECX,dword ptr [ESP + 0x224]     ; 005a0fef
    PUSH ECX                            ; 005a0ff6
    LEA EAX,[ESP + 0x8]                 ; 005a0ff7
    PUSH EAX                            ; 005a0ffb
    MOV dword ptr [EBX + 0x10],0x0      ; 005a0ffc
    CALL engine_dosio.cpp_FUN_00478e20  ; 005a1003
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00478e20()
    ADD ESP,0xc                         ; 005a1008
    MOV EAX,ESP                         ; 005a100b
    PUSH EAX                            ; 005a100d
    CALL engine_dosio.cpp_findFile_FUN_00478e90 ; 005a100e
        ;   XREF to: 00478e90 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_00478e90()
    ADD ESP,0x4                         ; 005a1013
    TEST EAX,EAX                        ; 005a1016
    JZ 0x005a104f                       ; 005a1018
        ;   XREF to: 005a104f (CONDITIONAL_JUMP)  ; LAB_005a104f
    PUSH 0x0                            ; 005a101a
    PUSH 0x0                            ; 005a101c
    PUSH 0x3                            ; 005a101e
    MOV EAX,dword ptr [ESP + 0x210]     ; 005a1020
    PUSH 0x0                            ; 005a1027
    MOV dword ptr [EBX + 0x8],EAX       ; 005a1029
    PUSH 0x1                            ; 005a102c
    MOV EAX,dword ptr [ESP + 0x214]     ; 005a102e
    PUSH 0x80000000                     ; 005a1035
    MOV dword ptr [EBX + 0xc],EAX       ; 005a103a
    LEA EAX,[ESP + 0x118]               ; 005a103d
    PUSH EAX                            ; 005a1044
    CALL dword ptr CS:[0x5d0528]        ; 005a1045 | PTR_CreateFileA_005d0528
    MOV dword ptr [EBX + 0x4],EAX       ; 005a104c
    PUSH EBX                            ; 005a104f
        ;   Label: LAB_005a104f
    MOV EAX,dword ptr [EBX]             ; 005a1050
    CALL dword ptr [EAX + 0x1c]         ; 005a1052
    ADD ESP,0x4                         ; 005a1055
    TEST EAX,EAX                        ; 005a1058
    JZ 0x005a107c                       ; 005a105a
        ;   XREF to: 005a107c (CONDITIONAL_JUMP)  ; LAB_005a107c
    PUSH EBX                            ; 005a105c
    CALL support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10 ; 005a105d
        ;   XREF to: 005a0e10 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 005a1062
    MOV EAX,dword ptr [ESP + 0x228]     ; 005a1065
    MOV dword ptr [EBX + 0x28],EAX      ; 005a106c
    MOV EAX,0x1                         ; 005a106f
    ADD ESP,0x214                       ; 005a1074
    POP EBX                             ; 005a107a
    RET                                 ; 005a107b
    PUSH EBX                            ; 005a107c
        ;   Label: LAB_005a107c
    MOV EAX,dword ptr [EBX]             ; 005a107d
    CALL dword ptr [EAX + 0x24]         ; 005a107f
    ADD ESP,0x4                         ; 005a1082
    XOR EAX,EAX                         ; 005a1085
    ADD ESP,0x214                       ; 005a1087
    POP EBX                             ; 005a108d
    RET                                 ; 005a108e

