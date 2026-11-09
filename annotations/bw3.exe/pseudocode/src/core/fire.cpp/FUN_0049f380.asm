; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049f380(int param_1)
;
;
; XREF[1]:
;   core_fire.cpp_FUN_004a24a0 at 004a254a
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fd8f4
;   undefined4 DAT_005fd90c
;   undefined4 DAT_005fd984
;   undefined4 DAT_005fd99c
;   undefined4 DAT_005fda14
;   undefined4 DAT_005fda2c
;   undefined4 DAT_005fdaa4
;   undefined4 DAT_005fdabc
;   undefined4 DAT_005fdb34
;   undefined4 DAT_005fdb4c
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f380
        ;   Label: core_fire.cpp_FUN_0049f380
    PUSH ESI                            ; 0049f381
    PUSH EDI                            ; 0049f382
    PUSH EBP                            ; 0049f383
    MOV ESI,dword ptr [ESP + 0x14]      ; 0049f384
    XOR EBX,EBX                         ; 0049f388
    CMP ESI,0x2                         ; 0049f38a
        ;   Label: LAB_0049f38a
    JZ 0x0049f3bb                       ; 0049f38d
        ;   XREF to: 0049f3bb (CONDITIONAL_JUMP)  ; LAB_0049f3bb
    CMP ESI,0x3                         ; 0049f38f
    JNZ 0x0049f3cb                      ; 0049f392
        ;   XREF to: 0049f3cb (CONDITIONAL_JUMP)  ; LAB_0049f3cb
    MOV EAX,0x5fda14                    ; 0049f394 | DAT_005fda14
    ADD EAX,EBX                         ; 0049f399
    PUSH EAX                            ; 0049f39b | DAT_005fda14 | DAT_005fda2c
    MOV EBP,dword ptr [0x005f2afc]      ; 0049f39c | DAT_005f2afc
    PUSH EBP                            ; 0049f3a2 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0049f3a3
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_0049f3a3
    ADD ESP,0x8                         ; 0049f3a8
    ADD EBX,0x18                        ; 0049f3ab
    CMP EBX,0x90                        ; 0049f3ae
    JNZ 0x0049f38a                      ; 0049f3b4
        ;   XREF to: 0049f38a (CONDITIONAL_JUMP)  ; LAB_0049f38a
    POP EBP                             ; 0049f3b6
    POP EDI                             ; 0049f3b7
    POP ESI                             ; 0049f3b8
    POP EBX                             ; 0049f3b9
    RET                                 ; 0049f3ba
    MOV EAX,0x5fd984                    ; 0049f3bb | DAT_005fd984
        ;   Label: LAB_0049f3bb
    ADD EAX,EBX                         ; 0049f3c0
    PUSH EAX                            ; 0049f3c2 | DAT_005fd99c
    MOV EAX,[0x005f2afc]                ; 0049f3c3 | DAT_005f2afc
    PUSH EAX                            ; 0049f3c8 | DAT_01bdd7e4
    JMP 0x0049f3a3                      ; 0049f3c9
        ;   XREF to: 0049f3a3 (UNCONDITIONAL_JUMP)  ; LAB_0049f3a3
    CMP ESI,0x4                         ; 0049f3cb
        ;   Label: LAB_0049f3cb
    JZ 0x0049f3e6                       ; 0049f3ce
        ;   XREF to: 0049f3e6 (CONDITIONAL_JUMP)  ; LAB_0049f3e6
    CMP ESI,0x5                         ; 0049f3d0
    JNZ 0x0049f3f7                      ; 0049f3d3
        ;   XREF to: 0049f3f7 (CONDITIONAL_JUMP)  ; LAB_0049f3f7
    MOV EAX,0x5fdb34                    ; 0049f3d5 | DAT_005fdb34
    ADD EAX,EBX                         ; 0049f3da
    PUSH EAX                            ; 0049f3dc | DAT_005fdb4c
    MOV ECX,dword ptr [0x005f2afc]      ; 0049f3dd | DAT_005f2afc
    PUSH ECX                            ; 0049f3e3 | DAT_01bdd7e4
    JMP 0x0049f3a3                      ; 0049f3e4
        ;   XREF to: 0049f3a3 (UNCONDITIONAL_JUMP)  ; LAB_0049f3a3
    MOV EAX,0x5fdaa4                    ; 0049f3e6 | DAT_005fdaa4
        ;   Label: LAB_0049f3e6
    ADD EAX,EBX                         ; 0049f3eb
    PUSH EAX                            ; 0049f3ed | DAT_005fdabc
    MOV EDI,dword ptr [0x005f2afc]      ; 0049f3ee | DAT_005f2afc
    PUSH EDI                            ; 0049f3f4 | DAT_01bdd7e4
    JMP 0x0049f3a3                      ; 0049f3f5
        ;   XREF to: 0049f3a3 (UNCONDITIONAL_JUMP)  ; LAB_0049f3a3
    MOV EAX,0x5fd8f4                    ; 0049f3f7 | DAT_005fd8f4
        ;   Label: LAB_0049f3f7
    ADD EAX,EBX                         ; 0049f3fc
    PUSH EAX                            ; 0049f3fe | DAT_005fd90c
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f3ff | DAT_005f2afc
    PUSH EDX                            ; 0049f405 | DAT_01bdd7e4
    JMP 0x0049f3a3                      ; 0049f406
        ;   XREF to: 0049f3a3 (UNCONDITIONAL_JUMP)  ; LAB_0049f3a3

