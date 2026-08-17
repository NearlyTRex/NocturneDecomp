; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005591c0(void)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[3]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e0ec
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910 at 005539c6
;   wincore_winvideo.cpp_playMovie_FUN_0055a510 at 0055a7ff
;
; Referenced Globals:
;   void* PTR_DispatchMessageA_00575424 = 0017593a
;   void* PTR_PeekMessageA_00575458 = 00175a0c
;   void* PTR_TranslateMessage_00575480 = 00175ab0
;   void* PTR_Sleep_005755b8 = 00176066
;   undefined4 DAT_005c1660
;   undefined4 DAT_005c1664
;   undefined4 DAT_02de20a0
;
; Called Functions:
;   DispatchMessageA
;   PeekMessageA
;   Sleep
;   TranslateMessage
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005591c0
        ;   Label: wincore_winrun.cpp_processWindowMessages_FUN_005591c0
    PUSH ESI                            ; 005591c1
    PUSH EDI                            ; 005591c2
    SUB ESP,0x1c                        ; 005591c3
    XOR EDX,EDX                         ; 005591c6
    XOR EAX,EAX                         ; 005591c8
    XOR EBX,EBX                         ; 005591ca
    CMP dword ptr [EDX + 0x2de20b0],0x1 ; 005591cc
        ;   Label: LAB_005591cc
    JZ 0x00559213                       ; 005591d3
        ;   XREF to: 00559213 (CONDITIONAL_JUMP)  ; LAB_00559213
    ADD EDX,0x4                         ; 005591d5
        ;   Label: LAB_005591d5
    INC EAX                             ; 005591d8
    MOV dword ptr [EDX + 0x2de20ac],EBX ; 005591d9
    CMP EAX,0x258                       ; 005591df
    JL 0x005591cc                       ; 005591e4
        ;   XREF to: 005591cc (CONDITIONAL_JUMP)  ; LAB_005591cc
    XOR EBX,EBX                         ; 005591e6
    PUSH 0x1                            ; 005591e8
        ;   Label: LAB_005591e8
    PUSH EBX                            ; 005591ea
    PUSH EBX                            ; 005591eb
    PUSH EBX                            ; 005591ec
    LEA EAX,[ESP + 0x10]                ; 005591ed
    PUSH EAX                            ; 005591f1
    CALL dword ptr CS:[0x575458]        ; 005591f2 | PTR_PeekMessageA_00575458
    TEST EAX,EAX                        ; 005591f9
    JZ 0x0055921b                       ; 005591fb
        ;   XREF to: 0055921b (CONDITIONAL_JUMP)  ; LAB_0055921b
    MOV EAX,ESP                         ; 005591fd
    PUSH EAX                            ; 005591ff
    CALL dword ptr CS:[0x575480]        ; 00559200 | PTR_TranslateMessage_00575480
    MOV EAX,ESP                         ; 00559207
    PUSH EAX                            ; 00559209
    CALL dword ptr CS:[0x575424]        ; 0055920a | PTR_DispatchMessageA_00575424
    JMP 0x005591e8                      ; 00559211
        ;   XREF to: 005591e8 (UNCONDITIONAL_JUMP)  ; LAB_005591e8
    MOV byte ptr [EAX + 0x1c02598],BL   ; 00559213
        ;   Label: LAB_00559213
    JMP 0x005591d5                      ; 00559219
        ;   XREF to: 005591d5 (UNCONDITIONAL_JUMP)  ; LAB_005591d5
    MOV ESI,dword ptr [0x005c1660]      ; 0055921b | DAT_005c1660
        ;   Label: LAB_0055921b
    CMP EBX,ESI                         ; 00559221
    JNZ 0x0055924a                      ; 00559223
        ;   XREF to: 0055924a (CONDITIONAL_JUMP)  ; LAB_0055924a
    MOV EDI,dword ptr [0x02de20a0]      ; 00559225 | DAT_02de20a0
    CMP ESI,EDI                         ; 0055922b
    JNZ 0x0055924a                      ; 0055922d
        ;   XREF to: 0055924a (CONDITIONAL_JUMP)  ; LAB_0055924a
    CMP EDI,dword ptr [0x005c1664]      ; 0055922f | DAT_005c1664
    JZ 0x0055924a                       ; 00559235
        ;   XREF to: 0055924a (CONDITIONAL_JUMP)  ; LAB_0055924a
    CMP EDI,dword ptr [0x005c1660]      ; 00559237 | DAT_005c1660
    JNZ 0x005591e8                      ; 0055923d
        ;   XREF to: 005591e8 (CONDITIONAL_JUMP)  ; LAB_005591e8
    PUSH 0x14                           ; 0055923f
    CALL dword ptr CS:[0x5755b8]        ; 00559241 | PTR_Sleep_005755b8
    JMP 0x005591e8                      ; 00559248
        ;   XREF to: 005591e8 (UNCONDITIONAL_JUMP)  ; LAB_005591e8
    ADD ESP,0x1c                        ; 0055924a
        ;   Label: LAB_0055924a
    POP EDI                             ; 0055924d
    POP ESI                             ; 0055924e
    POP EBX                             ; 0055924f
    RET                                 ; 00559250

