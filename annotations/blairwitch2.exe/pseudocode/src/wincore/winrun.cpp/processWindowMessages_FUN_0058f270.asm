; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_0058f270(void)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; XREF[4]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b68e4
;   engine_mini3d.cpp_swapBuffers_FUN_004f2370 at 004f2383
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560 at 0058963a
;   wincore_winvideo.cpp_playMovie_FUN_00591190 at 0059147f
;
; Referenced Globals:
;   void* PTR_DispatchMessageA_005c84a4 = 001c8a98
;   void* PTR_PeekMessageA_005c84d8 = 001c8b6a
;   void* PTR_TranslateMessage_005c8500 = 001c8c0e
;   void* PTR_Sleep_005c8644 = 001c91f4
;   undefined4 DAT_0061e98c
;   undefined4 DAT_0061e990
;   undefined4 DAT_02664630
;
; Called Functions:
;   DispatchMessageA
;   PeekMessageA
;   Sleep
;   TranslateMessage
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058f270
        ;   Label: wincore_winrun.cpp_processWindowMessages_FUN_0058f270
    PUSH ESI                            ; 0058f271
    PUSH EDI                            ; 0058f272
    SUB ESP,0x1c                        ; 0058f273
    XOR EDX,EDX                         ; 0058f276
    XOR EAX,EAX                         ; 0058f278
    XOR EBX,EBX                         ; 0058f27a
    CMP dword ptr [EDX + 0x2664640],0x1 ; 0058f27c
        ;   Label: LAB_0058f27c
    JZ 0x0058f2c3                       ; 0058f283
        ;   XREF to: 0058f2c3 (CONDITIONAL_JUMP)  ; LAB_0058f2c3
    ADD EDX,0x4                         ; 0058f285
        ;   Label: LAB_0058f285
    INC EAX                             ; 0058f288
    MOV dword ptr [EDX + 0x266463c],EBX ; 0058f289
    CMP EAX,0x258                       ; 0058f28f
    JL 0x0058f27c                       ; 0058f294
        ;   XREF to: 0058f27c (CONDITIONAL_JUMP)  ; LAB_0058f27c
    XOR EBX,EBX                         ; 0058f296
    PUSH 0x1                            ; 0058f298
        ;   Label: LAB_0058f298
    PUSH EBX                            ; 0058f29a
    PUSH EBX                            ; 0058f29b
    PUSH EBX                            ; 0058f29c
    LEA EAX,[ESP + 0x10]                ; 0058f29d
    PUSH EAX                            ; 0058f2a1
    CALL dword ptr CS:[0x5c84d8]        ; 0058f2a2 | PTR_PeekMessageA_005c84d8
    TEST EAX,EAX                        ; 0058f2a9
    JZ 0x0058f2cb                       ; 0058f2ab
        ;   XREF to: 0058f2cb (CONDITIONAL_JUMP)  ; LAB_0058f2cb
    MOV EAX,ESP                         ; 0058f2ad
    PUSH EAX                            ; 0058f2af
    CALL dword ptr CS:[0x5c8500]        ; 0058f2b0 | PTR_TranslateMessage_005c8500
    MOV EAX,ESP                         ; 0058f2b7
    PUSH EAX                            ; 0058f2b9
    CALL dword ptr CS:[0x5c84a4]        ; 0058f2ba | PTR_DispatchMessageA_005c84a4
    JMP 0x0058f298                      ; 0058f2c1
        ;   XREF to: 0058f298 (UNCONDITIONAL_JUMP)  ; LAB_0058f298
    MOV byte ptr [EAX + 0x1c37790],BL   ; 0058f2c3
        ;   Label: LAB_0058f2c3
    JMP 0x0058f285                      ; 0058f2c9
        ;   XREF to: 0058f285 (UNCONDITIONAL_JUMP)  ; LAB_0058f285
    MOV ESI,dword ptr [0x0061e98c]      ; 0058f2cb | DAT_0061e98c
        ;   Label: LAB_0058f2cb
    CMP EBX,ESI                         ; 0058f2d1
    JNZ 0x0058f2fa                      ; 0058f2d3
        ;   XREF to: 0058f2fa (CONDITIONAL_JUMP)  ; LAB_0058f2fa
    MOV EDI,dword ptr [0x02664630]      ; 0058f2d5 | DAT_02664630
    CMP ESI,EDI                         ; 0058f2db
    JNZ 0x0058f2fa                      ; 0058f2dd
        ;   XREF to: 0058f2fa (CONDITIONAL_JUMP)  ; LAB_0058f2fa
    CMP EDI,dword ptr [0x0061e990]      ; 0058f2df | DAT_0061e990
    JZ 0x0058f2fa                       ; 0058f2e5
        ;   XREF to: 0058f2fa (CONDITIONAL_JUMP)  ; LAB_0058f2fa
    CMP EDI,dword ptr [0x0061e98c]      ; 0058f2e7 | DAT_0061e98c
    JNZ 0x0058f298                      ; 0058f2ed
        ;   XREF to: 0058f298 (CONDITIONAL_JUMP)  ; LAB_0058f298
    PUSH 0x14                           ; 0058f2ef
    CALL dword ptr CS:[0x5c8644]        ; 0058f2f1 | PTR_Sleep_005c8644
    JMP 0x0058f298                      ; 0058f2f8
        ;   XREF to: 0058f298 (UNCONDITIONAL_JUMP)  ; LAB_0058f298
    ADD ESP,0x1c                        ; 0058f2fa
        ;   Label: LAB_0058f2fa
    POP EDI                             ; 0058f2fd
    POP ESI                             ; 0058f2fe
    POP EBX                             ; 0058f2ff
    RET                                 ; 0058f300

