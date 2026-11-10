; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a41d0(undefined4 param_1,int param_2)
;
;
; XREF[3]:
;   core_asgaya.cpp_CAsgaya_setup_FUN_005a0b00 at 005a0b9a
;   core_burncrss.cpp_CBurncross_setup_FUN_004253d0 at 0042540d
;   core_exorcism.cpp_CExorcism_setup_FUN_0048b690 at 0048b6d2
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fd60c
;   undefined4 DAT_005fd624
;   undefined4 DAT_005fd7ec
;   undefined4 DAT_005fd804
;   undefined4 DAT_005fd81c
;   undefined4 DAT_005fd834
;   undefined4 DAT_005fd84c
;   undefined4 DAT_005fd864
;   undefined4 DAT_005fd8dc
;   undefined4 DAT_005fd8f4
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a41d0
        ;   Label: core_fire.cpp_FUN_004a41d0
    PUSH ESI                            ; 004a41d1
    PUSH EDI                            ; 004a41d2
    PUSH EBP                            ; 004a41d3
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a41d4
    CMP ESI,0x2                         ; 004a41d8
    JNZ 0x004a4218                      ; 004a41db
        ;   XREF to: 004a4218 (CONDITIONAL_JUMP)  ; LAB_004a4218
    MOV EAX,0x1                         ; 004a41dd
        ;   Label: LAB_004a41dd
    LEA EDI,[EAX*0x4 + 0x0]             ; 004a41e2
        ;   Label: LAB_004a41e2
    SUB EDI,EAX                         ; 004a41e9
    XOR EBX,EBX                         ; 004a41eb
    SHL EDI,0x3                         ; 004a41ed
    CMP ESI,0x2                         ; 004a41f0
        ;   Label: LAB_004a41f0
    JNZ 0x004a423a                      ; 004a41f3
        ;   XREF to: 004a423a (CONDITIONAL_JUMP)  ; LAB_004a423a
    MOV EAX,0x5fd7ec                    ; 004a41f5 | DAT_005fd7ec
    ADD EAX,EBX                         ; 004a41fa
        ;   Label: LAB_004a41fa
    PUSH EAX                            ; 004a41fc | DAT_005fd7ec | DAT_005fd804 | DAT_005fd864
    MOV EBP,dword ptr [0x005f2afc]      ; 004a41fd | DAT_005f2afc
    PUSH EBP                            ; 004a4203 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a4204
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004a4204
    ADD ESP,0x8                         ; 004a4209
    ADD EBX,0x18                        ; 004a420c
    CMP EBX,EDI                         ; 004a420f
    JL 0x004a41f0                       ; 004a4211
        ;   XREF to: 004a41f0 (CONDITIONAL_JUMP)  ; LAB_004a41f0
    POP EBP                             ; 004a4213
    POP EDI                             ; 004a4214
    POP ESI                             ; 004a4215
    POP EBX                             ; 004a4216
    RET                                 ; 004a4217
    CMP ESI,0x4                         ; 004a4218
        ;   Label: LAB_004a4218
    JZ 0x004a41dd                       ; 004a421b
        ;   XREF to: 004a41dd (CONDITIONAL_JUMP)  ; LAB_004a41dd
    CMP ESI,0x3                         ; 004a421d
    JZ 0x004a41dd                       ; 004a4220
        ;   XREF to: 004a41dd (CONDITIONAL_JUMP)  ; LAB_004a41dd
    CMP ESI,0x6                         ; 004a4222
    JZ 0x004a41dd                       ; 004a4225
        ;   XREF to: 004a41dd (CONDITIONAL_JUMP)  ; LAB_004a41dd
    CMP ESI,0x5                         ; 004a4227
    JNZ 0x004a4233                      ; 004a422a
        ;   XREF to: 004a4233 (CONDITIONAL_JUMP)  ; LAB_004a4233
    MOV EAX,0x6                         ; 004a422c
    JMP 0x004a41e2                      ; 004a4231
        ;   XREF to: 004a41e2 (UNCONDITIONAL_JUMP)  ; LAB_004a41e2
    MOV EAX,0x14                        ; 004a4233
        ;   Label: LAB_004a4233
    JMP 0x004a41e2                      ; 004a4238
        ;   XREF to: 004a41e2 (UNCONDITIONAL_JUMP)  ; LAB_004a41e2
    CMP ESI,0x7                         ; 004a423a
        ;   Label: LAB_004a423a
    JZ 0x004a4264                       ; 004a423d
        ;   XREF to: 004a4264 (CONDITIONAL_JUMP)  ; LAB_004a4264
    CMP ESI,0x4                         ; 004a423f
    JZ 0x004a4275                       ; 004a4242
        ;   XREF to: 004a4275 (CONDITIONAL_JUMP)  ; LAB_004a4275
    CMP ESI,0x3                         ; 004a4244
    JZ 0x004a4289                       ; 004a4247
        ;   XREF to: 004a4289 (CONDITIONAL_JUMP)  ; LAB_004a4289
    CMP ESI,0x5                         ; 004a4249
    JZ 0x004a429c                       ; 004a424c
        ;   XREF to: 004a429c (CONDITIONAL_JUMP)  ; LAB_004a429c
    CMP ESI,0x6                         ; 004a424e
    JNZ 0x004a42a6                      ; 004a4251
        ;   XREF to: 004a42a6 (CONDITIONAL_JUMP)  ; LAB_004a42a6
    MOV EAX,0x5fd8dc                    ; 004a4253 | DAT_005fd8dc
    ADD EAX,EBX                         ; 004a4258
    PUSH EAX                            ; 004a425a | DAT_005fd8f4
    MOV ECX,dword ptr [0x005f2afc]      ; 004a425b | DAT_005f2afc
    PUSH ECX                            ; 004a4261 | DAT_01bdd7e4
    JMP 0x004a4204                      ; 004a4262
        ;   XREF to: 004a4204 (UNCONDITIONAL_JUMP)  ; LAB_004a4204
    MOV EAX,0x5fd804                    ; 004a4264 | DAT_005fd804
        ;   Label: LAB_004a4264
    ADD EAX,EBX                         ; 004a4269
    PUSH EAX                            ; 004a426b | DAT_005fd81c
    MOV ECX,dword ptr [0x005f2afc]      ; 004a426c | DAT_005f2afc
    PUSH ECX                            ; 004a4272 | DAT_01bdd7e4
    JMP 0x004a4204                      ; 004a4273
        ;   XREF to: 004a4204 (UNCONDITIONAL_JUMP)  ; LAB_004a4204
    MOV EAX,0x5fd81c                    ; 004a4275 | DAT_005fd81c
        ;   Label: LAB_004a4275
    ADD EAX,EBX                         ; 004a427a
    PUSH EAX                            ; 004a427c | DAT_005fd834
    MOV EDX,dword ptr [0x005f2afc]      ; 004a427d | DAT_005f2afc
    PUSH EDX                            ; 004a4283 | DAT_01bdd7e4
    JMP 0x004a4204                      ; 004a4284
        ;   XREF to: 004a4204 (UNCONDITIONAL_JUMP)  ; LAB_004a4204
    MOV EAX,0x5fd834                    ; 004a4289 | DAT_005fd834
        ;   Label: LAB_004a4289
    ADD EAX,EBX                         ; 004a428e
    PUSH EAX                            ; 004a4290 | DAT_005fd84c
    MOV EAX,[0x005f2afc]                ; 004a4291 | DAT_005f2afc
    PUSH EAX                            ; 004a4296 | DAT_01bdd7e4
    JMP 0x004a4204                      ; 004a4297
        ;   XREF to: 004a4204 (UNCONDITIONAL_JUMP)  ; LAB_004a4204
    MOV EAX,0x5fd84c                    ; 004a429c | DAT_005fd84c
        ;   Label: LAB_004a429c
    JMP 0x004a41fa                      ; 004a42a1
        ;   XREF to: 004a41fa (UNCONDITIONAL_JUMP)  ; LAB_004a41fa
    MOV EAX,0x5fd60c                    ; 004a42a6 | DAT_005fd60c
        ;   Label: LAB_004a42a6
    ADD EAX,EBX                         ; 004a42ab
    PUSH EAX                            ; 004a42ad | DAT_005fd624
    MOV EDX,dword ptr [0x005f2afc]      ; 004a42ae | DAT_005f2afc
    PUSH EDX                            ; 004a42b4 | DAT_01bdd7e4
    JMP 0x004a4204                      ; 004a42b5
        ;   XREF to: 004a4204 (UNCONDITIONAL_JUMP)  ; LAB_004a4204

