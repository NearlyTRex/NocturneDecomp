; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_0056d190(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; char[256]        Stack[-0x110]:256  local_110
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da4d4
;
; Referenced Globals:
;   TerminatedCString s_d_omni_lights_00645dec
;   TerminatedCString s_d_spot_lights_00645dfb
;   int[96] g_LightDebugScreenX
;   undefined4 DAT_006810e0
;   undefined4 DAT_006810e4
;   int[96] g_LightDebugScreenY
;   undefined4 DAT_00681260
;   undefined4 DAT_00681264
;   int g_SpotLightCount
;   CDemonLight*[96] g_SpotLightList
;   undefined4 DAT_03276f38
;   int g_DynamicLightCount
;   CDemonLight*[4] g_DynamicLights
;   undefined4 DAT_032776bc
;   int g_OmniLightCount
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d190
        ;   Label: core_set.cpp_CDemonSet_renderLightDebugView_FUN_0056d190
    PUSH ESI                            ; 0056d191
    PUSH EDI                            ; 0056d192
    PUSH EBP                            ; 0056d193
    SUB ESP,0x100                       ; 0056d194
    MOV EDX,dword ptr [0x03276f30]      ; 0056d19a | g_SpotLightCount
    XOR ESI,ESI                         ; 0056d1a0
    TEST EDX,EDX                        ; 0056d1a2
    JLE 0x0056d1e0                      ; 0056d1a4
        ;   XREF to: 0056d1e0 (CONDITIONAL_JUMP)  ; LAB_0056d1e0
    XOR EBX,EBX                         ; 0056d1a6
    PUSH 0x80                           ; 0056d1a8
        ;   Label: LAB_0056d1a8
    MOV ECX,dword ptr [EBX + 0x68125c]  ; 0056d1ad | g_LightDebugScreenY | DAT_00681260
    PUSH ECX                            ; 0056d1b3
    MOV EDI,dword ptr [EBX + 0x6810dc]  ; 0056d1b4 | g_LightDebugScreenX | DAT_006810e0
    PUSH EDI                            ; 0056d1ba
    MOV EBP,dword ptr [EBX + 0x3276f34] ; 0056d1bb | g_SpotLightList | DAT_03276f38
    PUSH EBP                            ; 0056d1c1
    ADD EBX,0x4                         ; 0056d1c2
    INC ESI                             ; 0056d1c5
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390 ; 0056d1c6
        ;   XREF to: 00473390 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
    MOV EAX,[0x03276f30]                ; 0056d1cb | g_SpotLightCount
    ADD ESP,0x10                        ; 0056d1d0
    CMP ESI,EAX                         ; 0056d1d3
    JL 0x0056d1a8                       ; 0056d1d5
        ;   XREF to: 0056d1a8 (CONDITIONAL_JUMP)  ; LAB_0056d1a8
    LEA EAX,[EAX]                       ; 0056d1d7
    LEA EDX,[EDX]                       ; 0056d1dd
    MOV EDX,dword ptr [0x032776b4]      ; 0056d1e0 | g_DynamicLightCount
        ;   Label: LAB_0056d1e0
    XOR EBP,EBP                         ; 0056d1e6
    TEST EDX,EDX                        ; 0056d1e8
    JLE 0x0056d230                      ; 0056d1ea
        ;   XREF to: 0056d230 (CONDITIONAL_JUMP)  ; LAB_0056d230
    LEA EBX,[ESI*0x4 + 0x0]             ; 0056d1ec
    XOR EDI,EDI                         ; 0056d1f3
    PUSH 0x80                           ; 0056d1f5
        ;   Label: LAB_0056d1f5
    MOV ECX,dword ptr [EBX + 0x68125c]  ; 0056d1fa | g_LightDebugScreenY | DAT_00681260 | DAT_00681264
    PUSH ECX                            ; 0056d200
    MOV ESI,dword ptr [EBX + 0x6810dc]  ; 0056d201 | g_LightDebugScreenX | DAT_006810e0 | DAT_006810e4
    PUSH ESI                            ; 0056d207
    MOV EAX,dword ptr [EDI + 0x32776b8] ; 0056d208 | g_DynamicLights | DAT_032776bc
    ADD EDI,0x4                         ; 0056d20e
    PUSH EAX                            ; 0056d211
    ADD EBX,0x4                         ; 0056d212
    INC EBP                             ; 0056d215
    CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390 ; 0056d216
        ;   XREF to: 00473390 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
    MOV EDX,dword ptr [0x032776b4]      ; 0056d21b | g_DynamicLightCount
    ADD ESP,0x10                        ; 0056d221
    CMP EBP,EDX                         ; 0056d224
    JL 0x0056d1f5                       ; 0056d226
        ;   XREF to: 0056d1f5 (CONDITIONAL_JUMP)  ; LAB_0056d1f5
    LEA EAX,[EAX]                       ; 0056d228
    MOV EDX,EDX                         ; 0056d22e
    MOV ESI,dword ptr [0x03277d80]      ; 0056d230 | g_OmniLightCount
        ;   Label: LAB_0056d230
    PUSH ESI                            ; 0056d236
    MOV EBX,dword ptr [0x03276f30]      ; 0056d237 | g_SpotLightCount
    PUSH 0x645dec                       ; 0056d23d | = "%d omni lights"
    LEA ESI,[ESP + 0x8]                 ; 0056d242
    MOV ECX,dword ptr [0x032776b4]      ; 0056d246 | g_DynamicLightCount
    PUSH ESI                            ; 0056d24c
    ADD EBX,ECX                         ; 0056d24d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0056d24f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056d254
    MOV EDI,dword ptr [EBX*0x4 + 0x68125c] ; 0056d257 | g_LightDebugScreenY
    PUSH EDI                            ; 0056d25e
    MOV EBP,dword ptr [EBX*0x4 + 0x6810dc] ; 0056d25f | g_LightDebugScreenX
    PUSH EBP                            ; 0056d266
    LEA ESI,[ESP + 0x8]                 ; 0056d267
    PUSH ESI                            ; 0056d26b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0056d26c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0056d271
    MOV EAX,[0x03276f30]                ; 0056d274 | g_SpotLightCount
    PUSH EAX                            ; 0056d279
    PUSH 0x645dfb                       ; 0056d27a | = "%d spot lights"
    LEA ESI,[ESP + 0x8]                 ; 0056d27f
    PUSH ESI                            ; 0056d283
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0056d284
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV ESI,dword ptr [EBX*0x4 + 0x68125c] ; 0056d289 | g_LightDebugScreenY
    ADD ESP,0xc                         ; 0056d290
    ADD ESI,0xb                         ; 0056d293
    PUSH ESI                            ; 0056d296
    MOV EDX,dword ptr [EBX*0x4 + 0x6810dc] ; 0056d297 | g_LightDebugScreenX
    PUSH EDX                            ; 0056d29e
    LEA EBX,[ESP + 0x8]                 ; 0056d29f
    PUSH EBX                            ; 0056d2a3
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0056d2a4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0056d2a9
    ADD ESP,0x100                       ; 0056d2ac
    POP EBP                             ; 0056d2b2
    POP EDI                             ; 0056d2b3
    POP ESI                             ; 0056d2b4
    POP EBX                             ; 0056d2b5
    LEA EAX,[EAX]                       ; 0056d2b6
    LEA EDX,[EDX]                       ; 0056d2bc
    RET                                 ; 0056d2c0

