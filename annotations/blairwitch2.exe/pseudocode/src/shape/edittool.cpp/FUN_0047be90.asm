; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047be90(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_menu.cpp_FUN_004eed60 at 004efc56
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0050b4d0 at 0050b5a6
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0050b790 at 0050b7a3
;   core_netgame.cpp_CNetGame_runLobby_FUN_0050cf50 at 0050d538
;   core_netgame.cpp_FUN_0050b420 at 0050b436
;   engine_pod.cpp_FUN_0051aa80 at 0051aad6
;   engine_pod.cpp_FUN_0051b6e0 at 0051b6fe
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c263b4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_vsprintf_FUN_005b7768
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_mini3d.cpp_setAlpha_FUN_004f3570
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047be90
        ;   Label: shape_edittool.cpp_FUN_0047be90
    PUSH ESI                            ; 0047be91
    PUSH EDI                            ; 0047be92
    PUSH EBP                            ; 0047be93
    SUB ESP,0x4                         ; 0047be94
    CMP dword ptr [0x01c25590],0x0      ; 0047be97 | DAT_01c25590
    JZ 0x0047bf4c                       ; 0047be9e
        ;   XREF to: 0047bf4c (CONDITIONAL_JUMP)  ; LAB_0047bf4c
    MOV EAX,[0x01c25590]                ; 0047bea4 | DAT_01c25590
        ;   Label: LAB_0047bea4
    PUSH 0x6a                           ; 0047bea9
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 0047beab
    PUSH EAX                            ; 0047beb1
    MOV dword ptr [0x01c25f78],EDX      ; 0047beb2 | DAT_01c25f78
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 0047beb8
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0047bebd
    MOV [0x01c25f7c],EAX                ; 0047bec0 | DAT_01c25f7c
    LEA EAX,[ESP + 0x20]                ; 0047bec5
    MOV dword ptr [ESP],EAX             ; 0047bec9
    MOV EAX,ESP                         ; 0047becc
    PUSH EAX                            ; 0047bece
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047becf
    PUSH ESI                            ; 0047bed3
    PUSH 0x1c231f0                      ; 0047bed4
    XOR EDI,EDI                         ; 0047bed9
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0047bedb
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005b7768(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0047bee0
    MOV dword ptr [ESP],EDI             ; 0047bee3
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 0047bee6
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    PUSH 0xffff                         ; 0047beeb
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0047bef0
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0047bef5
    PUSH 0x3f800000                     ; 0047bef8
    CALL engine_mini3d.cpp_setAlpha_FUN_004f3570 ; 0047befd
        ;   XREF to: 004f3570 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setAlpha_FUN_004f3570(float alpha)
    MOV EAX,[0x006141bc]                ; 0047bf02 | DAT_006141bc
    MOV EDX,EAX                         ; 0047bf07
    SAR EDX,0x1f                        ; 0047bf09
    SUB EAX,EDX                         ; 0047bf0c
    SAR EAX,0x1                         ; 0047bf0e
    ADD ESP,0x4                         ; 0047bf10
    PUSH 0x1c231f0                      ; 0047bf13
    PUSH -0x1                           ; 0047bf18
    MOV EBP,dword ptr [0x01c263b4]      ; 0047bf1a | DAT_01c263b4
    PUSH EBP                            ; 0047bf20
    PUSH EAX                            ; 0047bf21
    MOV EAX,[0x006141b8]                ; 0047bf22 | DAT_006141b8
    MOV EDX,EAX                         ; 0047bf27
    SAR EDX,0x1f                        ; 0047bf29
    SUB EAX,EDX                         ; 0047bf2c
    SAR EAX,0x1                         ; 0047bf2e
    PUSH EAX                            ; 0047bf30
    MOV EAX,[0x01c25590]                ; 0047bf31 | DAT_01c25590
    PUSH EAX                            ; 0047bf36
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0 ; 0047bf37
        ;   XREF to: 004a92a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenter_FUN_004a92a0(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 0047bf3c
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0047bf3f
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    ADD ESP,0x4                         ; 0047bf44
    POP EBP                             ; 0047bf47
    POP EDI                             ; 0047bf48
    POP ESI                             ; 0047bf49
    POP EBX                             ; 0047bf4a
    RET                                 ; 0047bf4b
    MOV ECX,0x5d1e6f                    ; 0047bf4c | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047bf4c
    MOV EBX,0xa0                        ; 0047bf51
    PUSH 0x5d1e85                       ; 0047bf56 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 0047bf5b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047bf61 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047bf67
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047bf6c
    JMP 0x0047bea4                      ; 0047bf6f
        ;   XREF to: 0047bea4 (UNCONDITIONAL_JUMP)  ; LAB_0047bea4

