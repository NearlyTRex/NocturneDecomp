; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_FUN_005897e0(void)
;
;
; XREF[2]:
;   wincore_wddvmem.cpp_FUN_00589560 at 0058962d
;   wincore_winrun.cpp_FUN_0058ed90 at 0058ee9c
;
; Referenced Globals:
;   void* PTR_SetFocus_005c84f0 = 001c8bce
;   TerminatedCString s_wincore_wddvmem_cpp_005ee471
;   TerminatedCString s_videoRestore_Unable_to_s_005ee488
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264bba0
;   undefined4 DAT_02661ae0
;   undefined4 DAT_02661ae4
;   undefined4 DAT_02661ae8
;   undefined4 DAT_02661aec
;   undefined4 DAT_02661af8
;   undefined4 DAT_02664628
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_ddraw.c_DirectDrawCreate
;   engine_special.cpp_setResolutionAndColorTable_FUN_0055f770
;   SetFocus
;   wincore_wddvmem.cpp_FUN_00588a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005897e0
        ;   Label: wincore_wddvmem.cpp_FUN_005897e0
    PUSH ESI                            ; 005897e1
    PUSH EBP                            ; 005897e2
    CMP dword ptr [0x0264bba0],0x0      ; 005897e3 | DAT_0264bba0
    JZ 0x005898f7                       ; 005897ea
        ;   XREF to: 005898f7 (CONDITIONAL_JUMP)  ; LAB_005898f7
    CMP dword ptr [0x02661af8],0x0      ; 005897f0 | DAT_02661af8
    JZ 0x005898f7                       ; 005897f7
        ;   XREF to: 005898f7 (CONDITIONAL_JUMP)  ; LAB_005898f7
    MOV EDX,dword ptr [0x006141c0]      ; 005897fd | DAT_006141c0
    PUSH EDX                            ; 00589803
    MOV ECX,dword ptr [0x006141bc]      ; 00589804 | DAT_006141bc
    PUSH ECX                            ; 0058980a
    MOV EBX,dword ptr [0x006141b8]      ; 0058980b | DAT_006141b8
    PUSH EBX                            ; 00589811
    CALL engine_special.cpp_setResolutionAndColorTable_FUN_0055f770 ; 00589812
        ;   XREF to: 0055f770 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setResolutionAndColorTable_FUN_0055f770(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 00589817
    TEST EAX,EAX                        ; 0058981a
    JNZ 0x005898c1                      ; 0058981c
        ;   XREF to: 005898c1 (CONDITIONAL_JUMP)  ; LAB_005898c1
    PUSH EDI                            ; 00589822
    MOV EDI,dword ptr [0x02661aec]      ; 00589823 | DAT_02661aec
    MOV [0x0264bba0],EAX                ; 00589829 | DAT_0264bba0
    TEST EDI,EDI                        ; 0058982e
    JZ 0x00589840                       ; 00589830
        ;   XREF to: 00589840 (CONDITIONAL_JUMP)  ; LAB_00589840
    PUSH EDI                            ; 00589832
    MOV EDX,dword ptr [EDI]             ; 00589833
    XOR EBP,EBP                         ; 00589835
    CALL dword ptr [EDX + 0x8]          ; 00589837
    MOV dword ptr [0x02661aec],EBP      ; 0058983a | DAT_02661aec
    MOV EAX,[0x02661ae8]                ; 00589840 | DAT_02661ae8
        ;   Label: LAB_00589840
    TEST EAX,EAX                        ; 00589845
    JZ 0x00589857                       ; 00589847
        ;   XREF to: 00589857 (CONDITIONAL_JUMP)  ; LAB_00589857
    PUSH EAX                            ; 00589849
    MOV EDX,dword ptr [EAX]             ; 0058984a
    CALL dword ptr [EDX + 0x8]          ; 0058984c
    XOR EDX,EDX                         ; 0058984f
    MOV dword ptr [0x02661ae8],EDX      ; 00589851 | DAT_02661ae8
    MOV ECX,dword ptr [0x02661ae4]      ; 00589857 | DAT_02661ae4
        ;   Label: LAB_00589857
    TEST ECX,ECX                        ; 0058985d
    JZ 0x0058986f                       ; 0058985f
        ;   XREF to: 0058986f (CONDITIONAL_JUMP)  ; LAB_0058986f
    PUSH ECX                            ; 00589861
    MOV EDX,dword ptr [ECX]             ; 00589862
    XOR EBX,EBX                         ; 00589864
    CALL dword ptr [EDX + 0x8]          ; 00589866
    MOV dword ptr [0x02661ae4],EBX      ; 00589869 | DAT_02661ae4
    MOV ESI,dword ptr [0x02661ae0]      ; 0058986f | DAT_02661ae0
        ;   Label: LAB_0058986f
    TEST ESI,ESI                        ; 00589875
    JZ 0x00589892                       ; 00589877
        ;   XREF to: 00589892 (CONDITIONAL_JUMP)  ; LAB_00589892
    PUSH ESI                            ; 00589879
    MOV EDX,dword ptr [ESI]             ; 0058987a
    CALL dword ptr [EDX + 0x4c]         ; 0058987c
    MOV EAX,[0x02661ae0]                ; 0058987f | DAT_02661ae0
    PUSH EAX                            ; 00589884
    MOV EDX,dword ptr [EAX]             ; 00589885
    XOR EDI,EDI                         ; 00589887
    CALL dword ptr [EDX + 0x8]          ; 00589889
    MOV dword ptr [0x02661ae0],EDI      ; 0058988c | DAT_02661ae0
    PUSH 0x0                            ; 00589892
        ;   Label: LAB_00589892
    PUSH 0x2661ae0                      ; 00589894 | DAT_02661ae0
    PUSH 0x0                            ; 00589899
    CALL crt_ddraw.c_DirectDrawCreate   ; 0058989b
        ;   XREF to: 005c74ae (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 005898a0
    JZ 0x005898e1                       ; 005898a2
        ;   XREF to: 005898e1 (CONDITIONAL_JUMP)  ; LAB_005898e1
    MOV EAX,[0x006141c0]                ; 005898a4 | DAT_006141c0
        ;   Label: LAB_005898a4
    PUSH EAX                            ; 005898a9
    MOV EDX,dword ptr [0x006141bc]      ; 005898aa | DAT_006141bc
    PUSH EDX                            ; 005898b0
    MOV ECX,dword ptr [0x006141b8]      ; 005898b1 | DAT_006141b8
    PUSH ECX                            ; 005898b7
    CALL wincore_wddvmem.cpp_FUN_00588a50 ; 005898b8
        ;   XREF to: 00588a50 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_FUN_00588a50(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 005898bd
    POP EDI                             ; 005898c0
    MOV EBX,dword ptr [0x02664628]      ; 005898c1 | DAT_02664628
        ;   Label: LAB_005898c1
    PUSH EBX                            ; 005898c7
    CALL dword ptr CS:[0x5c84f0]        ; 005898c8 | PTR_SetFocus_005c84f0
    POP EBP                             ; 005898cf
        ;   Label: LAB_005898cf
    POP ESI                             ; 005898d0
    POP EBX                             ; 005898d1
    LEA EAX,[EAX]                       ; 005898d2
    LEA EDX,[EDX]                       ; 005898d8
    MOV EAX,EAX                         ; 005898de
    PUSH 0x11                           ; 005898e1
        ;   Label: LAB_005898e1
    MOV EBP,dword ptr [0x02664628]      ; 005898e3 | DAT_02664628
    MOV EAX,[0x02661ae0]                ; 005898e9 | DAT_02661ae0
    PUSH EBP                            ; 005898ee
    MOV EDX,dword ptr [EAX]             ; 005898ef
    PUSH EAX                            ; 005898f1
    CALL dword ptr [EDX + 0x50]         ; 005898f2
    JMP 0x005898a4                      ; 005898f5
        ;   XREF to: 005898a4 (UNCONDITIONAL_JUMP)  ; LAB_005898a4
    MOV EBX,dword ptr [0x02661ae4]      ; 005898f7 | DAT_02661ae4
        ;   Label: LAB_005898f7
    TEST EBX,EBX                        ; 005898fd
    JZ 0x005898cf                       ; 005898ff
        ;   XREF to: 005898cf (CONDITIONAL_JUMP)  ; LAB_005898cf
    PUSH EBX                            ; 00589901
    MOV EDX,dword ptr [EBX]             ; 00589902
    CALL dword ptr [EDX + 0x6c]         ; 00589904
    MOV EAX,[0x02661ae8]                ; 00589907 | DAT_02661ae8
    PUSH EAX                            ; 0058990c
    MOV EDX,dword ptr [EAX]             ; 0058990d
    CALL dword ptr [EDX + 0x6c]         ; 0058990f
    MOV ESI,dword ptr [0x02661aec]      ; 00589912 | DAT_02661aec
    TEST ESI,ESI                        ; 00589918
    JZ 0x005898cf                       ; 0058991a
        ;   XREF to: 005898cf (CONDITIONAL_JUMP)  ; LAB_005898cf
    PUSH ESI                            ; 0058991c
    MOV EAX,[0x02661ae4]                ; 0058991d | DAT_02661ae4
    PUSH EAX                            ; 00589922
    MOV EDX,dword ptr [EAX]             ; 00589923
    CALL dword ptr [EDX + 0x7c]         ; 00589925
    TEST EAX,EAX                        ; 00589928
    JZ 0x005898cf                       ; 0058992a
        ;   XREF to: 005898cf (CONDITIONAL_JUMP)  ; LAB_005898cf
    MOV EBP,0x5ee471                    ; 0058992c | = "..\\wincore\\wddvmem.cpp"
    MOV EAX,0x3cf                       ; 00589931
    PUSH 0x5ee488                       ; 00589936 | = "videoRestore - Unable to set front bu..."
    MOV dword ptr [0x01d046a0],EBP      ; 0058993b | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00589941 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00589946
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0058994b
    POP EBP                             ; 0058994e
    POP ESI                             ; 0058994f
    POP EBX                             ; 00589950
    RET                                 ; 00589951

