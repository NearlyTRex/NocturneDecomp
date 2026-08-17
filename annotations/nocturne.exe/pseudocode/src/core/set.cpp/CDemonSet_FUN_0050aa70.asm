; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_FUN_0050aa70(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049cfe2
;
; Referenced Globals:
;   TerminatedCString s_d_omni_lights_005905b3
;   TerminatedCString s_d_spot_lights_005905c2
;   undefined4 DAT_005be37c
;   undefined4 DAT_005be380
;   undefined4 DAT_005be384
;   undefined4 DAT_005be4fc
;   undefined4 DAT_005be500
;   undefined4 DAT_005be504
;   undefined4 DAT_01fb9b54
;   undefined4 DAT_01fb9b58
;   undefined4 DAT_01fba2d8
;   undefined4 DAT_01fba9a4
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044ed80
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_drawText_FUN_00402600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050aa70
        ;   Label: core_set.cpp_CDemonSet_FUN_0050aa70
    PUSH ESI                            ; 0050aa71
    PUSH EDI                            ; 0050aa72
    PUSH EBP                            ; 0050aa73
    SUB ESP,0x100                       ; 0050aa74
    MOV EDX,dword ptr [0x01fb9b54]      ; 0050aa7a | DAT_01fb9b54
    XOR ESI,ESI                         ; 0050aa80
    TEST EDX,EDX                        ; 0050aa82
    JLE 0x0050aac0                      ; 0050aa84
        ;   XREF to: 0050aac0 (CONDITIONAL_JUMP)  ; LAB_0050aac0
    XOR EBX,EBX                         ; 0050aa86
    PUSH 0x80                           ; 0050aa88
        ;   Label: LAB_0050aa88
    MOV ECX,dword ptr [EBX + 0x5be4fc]  ; 0050aa8d | DAT_005be4fc | DAT_005be500
    PUSH ECX                            ; 0050aa93
    MOV EDI,dword ptr [EBX + 0x5be37c]  ; 0050aa94 | DAT_005be37c | DAT_005be380
    PUSH EDI                            ; 0050aa9a
    MOV EBP,dword ptr [EBX + 0x1fb9b58] ; 0050aa9b | DAT_01fb9b58
    PUSH EBP                            ; 0050aaa1
    ADD EBX,0x4                         ; 0050aaa2
    INC ESI                             ; 0050aaa5
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044ed80 ; 0050aaa6
        ;   XREF to: 0044ed80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044ed80(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
    MOV EAX,[0x01fb9b54]                ; 0050aaab | DAT_01fb9b54
    ADD ESP,0x10                        ; 0050aab0
    CMP ESI,EAX                         ; 0050aab3
    JL 0x0050aa88                       ; 0050aab5
        ;   XREF to: 0050aa88 (CONDITIONAL_JUMP)  ; LAB_0050aa88
    LEA EAX,[EAX]                       ; 0050aab7
    LEA EDX,[EDX]                       ; 0050aabd
    MOV EDX,dword ptr [0x01fba2d8]      ; 0050aac0 | DAT_01fba2d8
        ;   Label: LAB_0050aac0
    XOR EBP,EBP                         ; 0050aac6
    TEST EDX,EDX                        ; 0050aac8
    JLE 0x0050ab10                      ; 0050aaca
        ;   XREF to: 0050ab10 (CONDITIONAL_JUMP)  ; LAB_0050ab10
    LEA EBX,[ESI*0x4 + 0x0]             ; 0050aacc
    XOR EDI,EDI                         ; 0050aad3
    PUSH 0x80                           ; 0050aad5
        ;   Label: LAB_0050aad5
    MOV ECX,dword ptr [EBX + 0x5be4fc]  ; 0050aada | DAT_005be500 | DAT_005be504 | DAT_005be4fc
    PUSH ECX                            ; 0050aae0
    MOV ESI,dword ptr [EBX + 0x5be37c]  ; 0050aae1 | DAT_005be380 | DAT_005be384 | DAT_005be37c
    PUSH ESI                            ; 0050aae7
    MOV EAX,dword ptr [EDI + 0x1fba2dc] ; 0050aae8
    ADD EDI,0x4                         ; 0050aaee
    PUSH EAX                            ; 0050aaf1
    ADD EBX,0x4                         ; 0050aaf2
    INC EBP                             ; 0050aaf5
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044ed80 ; 0050aaf6
        ;   XREF to: 0044ed80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044ed80(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
    MOV EDX,dword ptr [0x01fba2d8]      ; 0050aafb | DAT_01fba2d8
    ADD ESP,0x10                        ; 0050ab01
    CMP EBP,EDX                         ; 0050ab04
    JL 0x0050aad5                       ; 0050ab06
        ;   XREF to: 0050aad5 (CONDITIONAL_JUMP)  ; LAB_0050aad5
    LEA EAX,[EAX]                       ; 0050ab08
    MOV EDX,EDX                         ; 0050ab0e
    MOV ESI,dword ptr [0x01fba9a4]      ; 0050ab10 | DAT_01fba9a4
        ;   Label: LAB_0050ab10
    PUSH ESI                            ; 0050ab16
    MOV EBX,dword ptr [0x01fb9b54]      ; 0050ab17 | DAT_01fb9b54
    PUSH 0x5905b3                       ; 0050ab1d | = "%d omni lights"
    LEA ESI,[ESP + 0x8]                 ; 0050ab22
    MOV ECX,dword ptr [0x01fba2d8]      ; 0050ab26 | DAT_01fba2d8
    PUSH ESI                            ; 0050ab2c
    ADD EBX,ECX                         ; 0050ab2d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050ab2f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0050ab34
    MOV EDI,dword ptr [EBX*0x4 + 0x5be4fc] ; 0050ab37 | DAT_005be4fc
    PUSH EDI                            ; 0050ab3e
    MOV EBP,dword ptr [EBX*0x4 + 0x5be37c] ; 0050ab3f | DAT_005be37c
    PUSH EBP                            ; 0050ab46
    LEA ESI,[ESP + 0x8]                 ; 0050ab47
    PUSH ESI                            ; 0050ab4b
    CALL engine_2d.c_drawText_FUN_00402600 ; 0050ab4c
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050ab51
    MOV EAX,[0x01fb9b54]                ; 0050ab54 | DAT_01fb9b54
    PUSH EAX                            ; 0050ab59
    PUSH 0x5905c2                       ; 0050ab5a | = "%d spot lights"
    LEA ESI,[ESP + 0x8]                 ; 0050ab5f
    PUSH ESI                            ; 0050ab63
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0050ab64
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV ESI,dword ptr [EBX*0x4 + 0x5be4fc] ; 0050ab69 | DAT_005be4fc
    ADD ESP,0xc                         ; 0050ab70
    ADD ESI,0xb                         ; 0050ab73
    PUSH ESI                            ; 0050ab76
    MOV EDX,dword ptr [EBX*0x4 + 0x5be37c] ; 0050ab77 | DAT_005be37c
    PUSH EDX                            ; 0050ab7e
    LEA EBX,[ESP + 0x8]                 ; 0050ab7f
    PUSH EBX                            ; 0050ab83
    CALL engine_2d.c_drawText_FUN_00402600 ; 0050ab84
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0050ab89
    ADD ESP,0x100                       ; 0050ab8c
    POP EBP                             ; 0050ab92
    POP EDI                             ; 0050ab93
    POP ESI                             ; 0050ab94
    POP EBX                             ; 0050ab95
    RET                                 ; 0050ab96

