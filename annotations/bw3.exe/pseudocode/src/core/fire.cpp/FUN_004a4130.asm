; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a4130(undefined4 param_1,int param_2)
;
;
; XREF[5]:
;   core_asgaya.cpp_FUN_005a0b00 at 005a0b89
;   core_exorcism.cpp_FUN_0048b690 at 0048b6c1
;   core_fire.cpp_FUN_004a42c0 at 004a42ce
;   core_weather.cpp_FUN_0057d420 at 0057d4a9
;   unkafter_lightgun.cpp_FUN_004e3eb0 at 004e3efa
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

    PUSH EBX                            ; 004a4130
        ;   Label: core_fire.cpp_FUN_004a4130
    PUSH ESI                            ; 004a4131
    PUSH EDI                            ; 004a4132
    PUSH EBP                            ; 004a4133
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a4134
    MOV EDI,0x5fd8f4                    ; 004a4138 | DAT_005fd8f4
    XOR EBX,EBX                         ; 004a413d
    CMP ESI,0x1                         ; 004a413f
        ;   Label: LAB_004a413f
    JZ 0x004a4173                       ; 004a4142
        ;   XREF to: 004a4173 (CONDITIONAL_JUMP)  ; LAB_004a4173
    CMP ESI,0x2                         ; 004a4144
        ;   Label: LAB_004a4144
    JNZ 0x004a4185                      ; 004a4147
        ;   XREF to: 004a4185 (CONDITIONAL_JUMP)  ; LAB_004a4185
    MOV EAX,0x5fd984                    ; 004a4149 | DAT_005fd984
    ADD EAX,EBX                         ; 004a414e
    PUSH EAX                            ; 004a4150 | DAT_005fd984 | DAT_005fd99c
    MOV EDX,dword ptr [0x005f2afc]      ; 004a4151 | DAT_005f2afc
    PUSH EDX                            ; 004a4157 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a4158
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004a4158
    ADD ESP,0x8                         ; 004a415d
    ADD EBX,0x18                        ; 004a4160
        ;   Label: LAB_004a4160
    ADD EDI,0x18                        ; 004a4163
    CMP EBX,0x90                        ; 004a4166
    JNZ 0x004a413f                      ; 004a416c
        ;   XREF to: 004a413f (CONDITIONAL_JUMP)  ; LAB_004a413f
    POP EBP                             ; 004a416e
    POP EDI                             ; 004a416f
    POP ESI                             ; 004a4170
    POP EBX                             ; 004a4171
    RET                                 ; 004a4172
    PUSH EDI                            ; 004a4173 | DAT_005fd90c
        ;   Label: LAB_004a4173
    MOV EDX,dword ptr [0x005f2afc]      ; 004a4174 | DAT_005f2afc
    PUSH EDX                            ; 004a417a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a417b
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a4180
    JMP 0x004a4144                      ; 004a4183
        ;   XREF to: 004a4144 (UNCONDITIONAL_JUMP)  ; LAB_004a4144
    CMP ESI,0x3                         ; 004a4185
        ;   Label: LAB_004a4185
    JZ 0x004a41a5                       ; 004a4188
        ;   XREF to: 004a41a5 (CONDITIONAL_JUMP)  ; LAB_004a41a5
    CMP ESI,0x4                         ; 004a418a
    JZ 0x004a41b5                       ; 004a418d
        ;   XREF to: 004a41b5 (CONDITIONAL_JUMP)  ; LAB_004a41b5
    CMP ESI,0x5                         ; 004a418f
    JNZ 0x004a4160                      ; 004a4192
        ;   XREF to: 004a4160 (CONDITIONAL_JUMP)  ; LAB_004a4160
    MOV EAX,0x5fdb34                    ; 004a4194 | DAT_005fdb34
    ADD EAX,EBX                         ; 004a4199
    PUSH EAX                            ; 004a419b | DAT_005fdb4c
    MOV ECX,dword ptr [0x005f2afc]      ; 004a419c | DAT_005f2afc
    PUSH ECX                            ; 004a41a2 | DAT_01bdd7e4
    JMP 0x004a4158                      ; 004a41a3
        ;   XREF to: 004a4158 (UNCONDITIONAL_JUMP)  ; LAB_004a4158
    MOV EAX,0x5fda14                    ; 004a41a5 | DAT_005fda14
        ;   Label: LAB_004a41a5
    ADD EAX,EBX                         ; 004a41aa
    PUSH EAX                            ; 004a41ac | DAT_005fda2c
    MOV EAX,[0x005f2afc]                ; 004a41ad | DAT_005f2afc
    PUSH EAX                            ; 004a41b2 | DAT_01bdd7e4
    JMP 0x004a4158                      ; 004a41b3
        ;   XREF to: 004a4158 (UNCONDITIONAL_JUMP)  ; LAB_004a4158
    MOV EAX,0x5fdaa4                    ; 004a41b5 | DAT_005fdaa4
        ;   Label: LAB_004a41b5
    ADD EAX,EBX                         ; 004a41ba
    PUSH EAX                            ; 004a41bc | DAT_005fdabc
    MOV EBP,dword ptr [0x005f2afc]      ; 004a41bd | DAT_005f2afc
    PUSH EBP                            ; 004a41c3 | DAT_01bdd7e4
    JMP 0x004a4158                      ; 004a41c4
        ;   XREF to: 004a4158 (UNCONDITIONAL_JUMP)  ; LAB_004a4158

