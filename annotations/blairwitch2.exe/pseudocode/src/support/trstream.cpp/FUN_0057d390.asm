; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_0057d390(int *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[15]:
;   cockpit_ckptutil.c_FUN_0042c520 at 0042c55c
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042c780 at 0042c832
;   engine_2d.c_FUN_00401010 at 004010be
;   engine_2d.c_FUN_00401590 at 004015ad
;   engine_2d.c_FUN_00402940 at 004029d8
;   engine_font.cpp_FUN_004a7d00 at 004a7e9a
;   engine_font.cpp_FUN_004a7fe2 at 004a813b
;   engine_font.cpp_FUN_004a859e at 004a8603
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00573b80 at 00573e76
;   engine_texture.cpp_FUN_0057514e at 00575249
;   ... and 5 more
;
; Referenced Globals:
;   void* PTR_CreateFileA_005c8518 = 001c8c64
;
; Called Functions:
;   CreateFileA
;   engine_dosio.cpp_findFile_FUN_00460980
;   engine_dosio.cpp_FUN_00460910
;   support_trstream.cpp_FUN_0057d1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d390
        ;   Label: support_trstream.cpp_FUN_0057d390
    SUB ESP,0x214                       ; 0057d391
    MOV EBX,dword ptr [ESP + 0x21c]     ; 0057d397
    PUSH EBX                            ; 0057d39e
    MOV EAX,dword ptr [EBX]             ; 0057d39f
    CALL dword ptr [EAX + 0x24]         ; 0057d3a1
    ADD ESP,0x4                         ; 0057d3a4
    MOV EDX,dword ptr [ESP + 0x224]     ; 0057d3a7
    PUSH EDX                            ; 0057d3ae
    MOV ECX,dword ptr [ESP + 0x224]     ; 0057d3af
    PUSH ECX                            ; 0057d3b6
    LEA EAX,[ESP + 0x8]                 ; 0057d3b7
    PUSH EAX                            ; 0057d3bb
    MOV dword ptr [EBX + 0x10],0x0      ; 0057d3bc
    CALL engine_dosio.cpp_FUN_00460910  ; 0057d3c3
        ;   XREF to: 00460910 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00460910()
    ADD ESP,0xc                         ; 0057d3c8
    MOV EAX,ESP                         ; 0057d3cb
    PUSH EAX                            ; 0057d3cd
    CALL engine_dosio.cpp_findFile_FUN_00460980 ; 0057d3ce
        ;   XREF to: 00460980 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_00460980()
    ADD ESP,0x4                         ; 0057d3d3
    TEST EAX,EAX                        ; 0057d3d6
    JZ 0x0057d40f                       ; 0057d3d8
        ;   XREF to: 0057d40f (CONDITIONAL_JUMP)  ; LAB_0057d40f
    PUSH 0x0                            ; 0057d3da
    PUSH 0x0                            ; 0057d3dc
    PUSH 0x3                            ; 0057d3de
    MOV EAX,dword ptr [ESP + 0x210]     ; 0057d3e0
    PUSH 0x0                            ; 0057d3e7
    MOV dword ptr [EBX + 0x8],EAX       ; 0057d3e9
    PUSH 0x1                            ; 0057d3ec
    MOV EAX,dword ptr [ESP + 0x214]     ; 0057d3ee
    PUSH 0x80000000                     ; 0057d3f5
    MOV dword ptr [EBX + 0xc],EAX       ; 0057d3fa
    LEA EAX,[ESP + 0x118]               ; 0057d3fd
    PUSH EAX                            ; 0057d404
    CALL dword ptr CS:[0x5c8518]        ; 0057d405 | PTR_CreateFileA_005c8518
    MOV dword ptr [EBX + 0x4],EAX       ; 0057d40c
    PUSH EBX                            ; 0057d40f
        ;   Label: LAB_0057d40f
    MOV EAX,dword ptr [EBX]             ; 0057d410
    CALL dword ptr [EAX + 0x1c]         ; 0057d412
    ADD ESP,0x4                         ; 0057d415
    TEST EAX,EAX                        ; 0057d418
    JZ 0x0057d432                       ; 0057d41a
        ;   XREF to: 0057d432 (CONDITIONAL_JUMP)  ; LAB_0057d432
    PUSH EBX                            ; 0057d41c
    CALL support_trstream.cpp_FUN_0057d1d0 ; 0057d41d
        ;   XREF to: 0057d1d0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d1d0()
    MOV EAX,0x1                         ; 0057d422
    ADD ESP,0x4                         ; 0057d427
    ADD ESP,0x214                       ; 0057d42a
    POP EBX                             ; 0057d430
    RET                                 ; 0057d431
    PUSH EBX                            ; 0057d432
        ;   Label: LAB_0057d432
    MOV EAX,dword ptr [EBX]             ; 0057d433
    CALL dword ptr [EAX + 0x24]         ; 0057d435
    ADD ESP,0x4                         ; 0057d438
    XOR EAX,EAX                         ; 0057d43b
    ADD ESP,0x214                       ; 0057d43d
    POP EBX                             ; 0057d443
    RET                                 ; 0057d444

