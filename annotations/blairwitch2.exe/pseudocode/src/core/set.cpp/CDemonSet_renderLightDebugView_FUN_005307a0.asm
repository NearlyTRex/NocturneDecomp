; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_005307a0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b55e2
;
; Referenced Globals:
;   TerminatedCString s_d_omni_lights_005e5953
;   TerminatedCString s_d_spot_lights_005e5962
;   undefined4 DAT_0061b5bc
;   undefined4 DAT_0061b5c0
;   undefined4 DAT_0061b5c4
;   undefined4 DAT_0061b73c
;   undefined4 DAT_0061b740
;   undefined4 DAT_0061b744
;   undefined4 DAT_01fc8e84
;   undefined4 DAT_01fc8e88
;   undefined4 DAT_01fc9608
;   undefined4 DAT_01fc9cd4
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005307a0
        ;   Label: core_set.cpp_CDemonSet_renderLightDebugView_FUN_005307a0
    PUSH ESI                            ; 005307a1
    PUSH EDI                            ; 005307a2
    PUSH EBP                            ; 005307a3
    SUB ESP,0x100                       ; 005307a4
    MOV EDX,dword ptr [0x01fc8e84]      ; 005307aa | DAT_01fc8e84
    XOR ESI,ESI                         ; 005307b0
    TEST EDX,EDX                        ; 005307b2
    JLE 0x005307f0                      ; 005307b4
        ;   XREF to: 005307f0 (CONDITIONAL_JUMP)  ; LAB_005307f0
    XOR EBX,EBX                         ; 005307b6
    PUSH 0x80                           ; 005307b8
        ;   Label: LAB_005307b8
    MOV ECX,dword ptr [EBX + 0x61b73c]  ; 005307bd | DAT_0061b73c | DAT_0061b740
    PUSH ECX                            ; 005307c3
    MOV EDI,dword ptr [EBX + 0x61b5bc]  ; 005307c4 | DAT_0061b5bc | DAT_0061b5c0
    PUSH EDI                            ; 005307ca
    MOV EBP,dword ptr [EBX + 0x1fc8e88] ; 005307cb | DAT_01fc8e88
    PUSH EBP                            ; 005307d1
    ADD EBX,0x4                         ; 005307d2
    INC ESI                             ; 005307d5
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930 ; 005307d6
        ;   XREF to: 0044a930 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
    MOV EAX,[0x01fc8e84]                ; 005307db | DAT_01fc8e84
    ADD ESP,0x10                        ; 005307e0
    CMP ESI,EAX                         ; 005307e3
    JL 0x005307b8                       ; 005307e5
        ;   XREF to: 005307b8 (CONDITIONAL_JUMP)  ; LAB_005307b8
    LEA EAX,[EAX]                       ; 005307e7
    LEA EDX,[EDX]                       ; 005307ed
    MOV EDX,dword ptr [0x01fc9608]      ; 005307f0 | DAT_01fc9608
        ;   Label: LAB_005307f0
    XOR EBP,EBP                         ; 005307f6
    TEST EDX,EDX                        ; 005307f8
    JLE 0x00530840                      ; 005307fa
        ;   XREF to: 00530840 (CONDITIONAL_JUMP)  ; LAB_00530840
    LEA EBX,[ESI*0x4 + 0x0]             ; 005307fc
    XOR EDI,EDI                         ; 00530803
    PUSH 0x80                           ; 00530805
        ;   Label: LAB_00530805
    MOV ECX,dword ptr [EBX + 0x61b73c]  ; 0053080a | DAT_0061b740 | DAT_0061b744 | DAT_0061b73c
    PUSH ECX                            ; 00530810
    MOV ESI,dword ptr [EBX + 0x61b5bc]  ; 00530811 | DAT_0061b5c0 | DAT_0061b5c4 | DAT_0061b5bc
    PUSH ESI                            ; 00530817
    MOV EAX,dword ptr [EDI + 0x1fc960c] ; 00530818
    ADD EDI,0x4                         ; 0053081e
    PUSH EAX                            ; 00530821
    ADD EBX,0x4                         ; 00530822
    INC EBP                             ; 00530825
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930 ; 00530826
        ;   XREF to: 0044a930 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
    MOV EDX,dword ptr [0x01fc9608]      ; 0053082b | DAT_01fc9608
    ADD ESP,0x10                        ; 00530831
    CMP EBP,EDX                         ; 00530834
    JL 0x00530805                       ; 00530836
        ;   XREF to: 00530805 (CONDITIONAL_JUMP)  ; LAB_00530805
    LEA EAX,[EAX]                       ; 00530838
    MOV EDX,EDX                         ; 0053083e
    MOV ESI,dword ptr [0x01fc9cd4]      ; 00530840 | DAT_01fc9cd4
        ;   Label: LAB_00530840
    PUSH ESI                            ; 00530846
    MOV EBX,dword ptr [0x01fc8e84]      ; 00530847 | DAT_01fc8e84
    PUSH 0x5e5953                       ; 0053084d | = "%d omni lights"
    LEA ESI,[ESP + 0x8]                 ; 00530852
    MOV ECX,dword ptr [0x01fc9608]      ; 00530856 | DAT_01fc9608
    PUSH ESI                            ; 0053085c
    ADD EBX,ECX                         ; 0053085d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0053085f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00530864
    MOV EDI,dword ptr [EBX*0x4 + 0x61b73c] ; 00530867 | DAT_0061b73c
    PUSH EDI                            ; 0053086e
    MOV EBP,dword ptr [EBX*0x4 + 0x61b5bc] ; 0053086f | DAT_0061b5bc
    PUSH EBP                            ; 00530876
    LEA ESI,[ESP + 0x8]                 ; 00530877
    PUSH ESI                            ; 0053087b
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0053087c
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00530881
    MOV EAX,[0x01fc8e84]                ; 00530884 | DAT_01fc8e84
    PUSH EAX                            ; 00530889
    PUSH 0x5e5962                       ; 0053088a | = "%d spot lights"
    LEA ESI,[ESP + 0x8]                 ; 0053088f
    PUSH ESI                            ; 00530893
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00530894
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV ESI,dword ptr [EBX*0x4 + 0x61b73c] ; 00530899 | DAT_0061b73c
    ADD ESP,0xc                         ; 005308a0
    ADD ESI,0xb                         ; 005308a3
    PUSH ESI                            ; 005308a6
    MOV EDX,dword ptr [EBX*0x4 + 0x61b5bc] ; 005308a7 | DAT_0061b5bc
    PUSH EDX                            ; 005308ae
    LEA EBX,[ESP + 0x8]                 ; 005308af
    PUSH EBX                            ; 005308b3
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005308b4
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005308b9
    ADD ESP,0x100                       ; 005308bc
    POP EBP                             ; 005308c2
    POP EDI                             ; 005308c3
    POP ESI                             ; 005308c4
    POP EBX                             ; 005308c5
    LEA EAX,[EAX]                       ; 005308c6
    LEA EDX,[EDX]                       ; 005308cc
    RET                                 ; 005308d0

