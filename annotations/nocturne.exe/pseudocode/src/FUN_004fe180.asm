; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fe180(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004ff2c0 at 0050071f
;   FUN_005049b0 at 005049ee
;
; Referenced Globals:
;   string s_Must_specify_actor_name_0058e068
;   undefined4 s_ust_specify_actor_name_0058e068+1
;   undefined4 s_st_specify_actor_name_0058e068+2
;   undefined4 s_t_specify_actor_name_0058e068+3
;   string s_Actor_variable_%s_not_defined,_o_0058e080
;   undefined4 DAT_0058e0c6
;   string s_Can't_use_'$'_actor_specifier_in_0058e0c8
;   string s_Hero_doesn't_exist!!?!_0058e0f6
;   string s_Actor_\"%s\"_does_not_exist._0058e10d
;   string s_Actor_\"%s\"_is_of_type_%s,_this_c_0058e128
;   undefined4 DAT_005b7650
;   undefined4 DAT_005baf90
;   undefined4 DAT_005bdee0
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01cea280
;   ... and 5 more
;
; Called Functions:
;   FUN_00409fa0
;   FUN_0040d860
;   FUN_00480b30
;   FUN_004d90a0
;   FUN_004fdec0
;   FUN_00563c90
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe180
        ;   Label: FUN_004fe180
    PUSH ESI                            ; 004fe181
    PUSH EDI                            ; 004fe182
    PUSH EBP                            ; 004fe183
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fe184
    XOR EDX,EDX                         ; 004fe188
    MOV dword ptr [0x01e56c2c],EDX      ; 004fe18a | DAT_01e56c2c
    TEST EBX,EBX                        ; 004fe190
    JZ 0x004fe1b5                       ; 004fe192
        ;   XREF to: 004fe1b5 (CONDITIONAL_JUMP)  ; LAB_004fe1b5
    MOV AH,byte ptr [EBX]               ; 004fe194
    TEST AH,AH                          ; 004fe196
    JZ 0x004fe1b5                       ; 004fe198
        ;   XREF to: 004fe1b5 (CONDITIONAL_JUMP)  ; LAB_004fe1b5
    CMP AH,0x40                         ; 004fe19a
    JNZ 0x004fe237                      ; 004fe19d
        ;   XREF to: 004fe237 (CONDITIONAL_JUMP)  ; LAB_004fe237
    PUSH EBX                            ; 004fe1a3
    CALL FUN_004fdec0                   ; 004fe1a4
        ;   XREF to: 004fdec0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fdec0()
    ADD ESP,0x4                         ; 004fe1a9
    TEST EAX,EAX                        ; 004fe1ac
    JNZ 0x004fe1e0                      ; 004fe1ae
        ;   XREF to: 004fe1e0 (CONDITIONAL_JUMP)  ; LAB_004fe1e0
    POP EBP                             ; 004fe1b0
    POP EDI                             ; 004fe1b1
    POP ESI                             ; 004fe1b2
    POP EBX                             ; 004fe1b3
    RET                                 ; 004fe1b4
    MOV ESI,0x58e068                    ; 004fe1b5 | = "Must specify actor name"
        ;   Label: LAB_004fe1b5
    MOV EDI,0x1e56420                   ; 004fe1ba
    PUSH EDI                            ; 004fe1bf | DAT_01e56420
    MOV AL,byte ptr [ESI]               ; 004fe1c0 | = "Must specify actor name" | s_st_specify_actor_name_0058e068+2
        ;   Label: LAB_004fe1c0
    MOV byte ptr [EDI],AL               ; 004fe1c2 | DAT_01e56420 | DAT_01e56422
    CMP AL,0x0                          ; 004fe1c4
    JZ 0x004fe1d8                       ; 004fe1c6
        ;   XREF to: 004fe1d8 (CONDITIONAL_JUMP)  ; LAB_004fe1d8
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe1c8 | s_ust_specify_actor_name_0058e068+1 | s_t_specify_actor_name_0058e068+3
    ADD ESI,0x2                         ; 004fe1cb
    MOV byte ptr [EDI + 0x1],AL         ; 004fe1ce | DAT_01e56421 | DAT_01e56423
    ADD EDI,0x2                         ; 004fe1d1
    CMP AL,0x0                          ; 004fe1d4
    JNZ 0x004fe1c0                      ; 004fe1d6
        ;   XREF to: 004fe1c0 (CONDITIONAL_JUMP)  ; LAB_004fe1c0
    POP EDI                             ; 004fe1d8
        ;   Label: LAB_004fe1d8
    XOR EAX,EAX                         ; 004fe1d9
    POP EBP                             ; 004fe1db
    POP EDI                             ; 004fe1dc
    POP ESI                             ; 004fe1dd
    POP EBX                             ; 004fe1de
    RET                                 ; 004fe1df
    PUSH EBX                            ; 004fe1e0
        ;   Label: LAB_004fe1e0
    MOV EAX,[0x005b7650]                ; 004fe1e1 | DAT_005b7650
    MOV EBP,0x1                         ; 004fe1e6
    PUSH EAX                            ; 004fe1eb
    MOV dword ptr [0x01e56c2c],EBP      ; 004fe1ec | DAT_01e56c2c
    CALL FUN_00480b30                   ; 004fe1f2
        ;   XREF to: 00480b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00480b30()
    ADD ESP,0x8                         ; 004fe1f7
    MOV ESI,EAX                         ; 004fe1fa
    TEST EAX,EAX                        ; 004fe1fc
    JZ 0x004fe21d                       ; 004fe1fe
        ;   XREF to: 004fe21d (CONDITIONAL_JUMP)  ; LAB_004fe21d
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fe200
        ;   Label: LAB_004fe200
    PUSH EDX                            ; 004fe204
    PUSH ESI                            ; 004fe205
    CALL FUN_0040d860                   ; 004fe206
        ;   XREF to: 0040d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d860()
    ADD ESP,0x8                         ; 004fe20b
    TEST EAX,EAX                        ; 004fe20e
    JZ 0x004fe2d5                       ; 004fe210
        ;   XREF to: 004fe2d5 (CONDITIONAL_JUMP)  ; LAB_004fe2d5
    MOV EAX,ESI                         ; 004fe216
    POP EBP                             ; 004fe218
    POP EDI                             ; 004fe219
    POP ESI                             ; 004fe21a
    POP EBX                             ; 004fe21b
    RET                                 ; 004fe21c
    PUSH EBX                            ; 004fe21d
        ;   Label: LAB_004fe21d
    PUSH 0x58e080                       ; 004fe21e | = "Actor variable %s not defined, or doe..."
    PUSH 0x1e56420                      ; 004fe223
    CALL FUN_00563c90                   ; 004fe228
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 004fe22d
    XOR EAX,EAX                         ; 004fe230
    POP EBP                             ; 004fe232
    POP EDI                             ; 004fe233
    POP ESI                             ; 004fe234
    POP EBX                             ; 004fe235
    RET                                 ; 004fe236
    PUSH 0x58e0c6                       ; 004fe237 | DAT_0058e0c6
        ;   Label: LAB_004fe237
    PUSH EBX                            ; 004fe23c
    CALL FUN_00564520                   ; 004fe23d
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 004fe242
    TEST EAX,EAX                        ; 004fe245
    JNZ 0x004fe2a1                      ; 004fe247
        ;   XREF to: 004fe2a1 (CONDITIONAL_JUMP)  ; LAB_004fe2a1
    MOV EAX,[0x005bdee0]                ; 004fe249 | DAT_005bdee0
    CMP dword ptr [EAX],0x0             ; 004fe24e | DAT_01cea280
    JNZ 0x004fe288                      ; 004fe251
        ;   XREF to: 004fe288 (CONDITIONAL_JUMP)  ; LAB_004fe288
    MOV ESI,dword ptr [0x01cae0e8]      ; 004fe253 | DAT_01cae0e8
    MOV ESI,dword ptr [ESI*0x4 + 0x1cae0d8] ; 004fe259
    TEST ESI,ESI                        ; 004fe260
    JNZ 0x004fe200                      ; 004fe262
        ;   XREF to: 004fe200 (CONDITIONAL_JUMP)  ; LAB_004fe200
    PUSH 0x58e0f6                       ; 004fe264 | = "Hero doesn't exist!!?!"
    MOV EDI,0x1                         ; 004fe269
    PUSH 0x1e56420                      ; 004fe26e
    MOV dword ptr [0x01e56c2c],EDI      ; 004fe273 | DAT_01e56c2c
    CALL FUN_00563c90                   ; 004fe279
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x8                         ; 004fe27e
    XOR EAX,EAX                         ; 004fe281
    POP EBP                             ; 004fe283
    POP EDI                             ; 004fe284
    POP ESI                             ; 004fe285
    POP EBX                             ; 004fe286
    RET                                 ; 004fe287
    PUSH 0x58e0c8                       ; 004fe288 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_004fe288
    PUSH 0x1e56420                      ; 004fe28d
    CALL FUN_00563c90                   ; 004fe292
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x8                         ; 004fe297
    XOR EAX,EAX                         ; 004fe29a
    POP EBP                             ; 004fe29c
    POP EDI                             ; 004fe29d
    POP ESI                             ; 004fe29e
    POP EBX                             ; 004fe29f
    RET                                 ; 004fe2a0
    PUSH EBX                            ; 004fe2a1
        ;   Label: LAB_004fe2a1
    MOV ECX,dword ptr [0x005baf90]      ; 004fe2a2 | DAT_005baf90
    PUSH ECX                            ; 004fe2a8
    CALL FUN_004d90a0                   ; 004fe2a9
        ;   XREF to: 004d90a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d90a0()
    ADD ESP,0x8                         ; 004fe2ae
    MOV ESI,EAX                         ; 004fe2b1
    TEST EAX,EAX                        ; 004fe2b3
    JNZ 0x004fe200                      ; 004fe2b5
        ;   XREF to: 004fe200 (CONDITIONAL_JUMP)  ; LAB_004fe200
    PUSH EBX                            ; 004fe2bb
    PUSH 0x58e10d                       ; 004fe2bc | = "Actor \"%s\" does not exist."
    PUSH 0x1e56420                      ; 004fe2c1
    CALL FUN_00563c90                   ; 004fe2c6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 004fe2cb
    XOR EAX,EAX                         ; 004fe2ce
    POP EBP                             ; 004fe2d0
    POP EDI                             ; 004fe2d1
    POP ESI                             ; 004fe2d2
    POP EBX                             ; 004fe2d3
    RET                                 ; 004fe2d4
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004fe2d5
        ;   Label: LAB_004fe2d5
    PUSH ECX                            ; 004fe2d9
    PUSH ESI                            ; 004fe2da
    CALL FUN_00409fa0                   ; 004fe2db
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fa0()
    ADD ESP,0x4                         ; 004fe2e0
    PUSH EAX                            ; 004fe2e3
    PUSH EBX                            ; 004fe2e4
    PUSH 0x58e128                       ; 004fe2e5 | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x1e56420                      ; 004fe2ea
    CALL FUN_00563c90                   ; 004fe2ef
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x14                        ; 004fe2f4
    XOR EAX,EAX                         ; 004fe2f7
    POP EBP                             ; 004fe2f9
    POP EDI                             ; 004fe2fa
    POP ESI                             ; 004fe2fb
    POP EBX                             ; 004fe2fc
    RET                                 ; 004fe2fd

