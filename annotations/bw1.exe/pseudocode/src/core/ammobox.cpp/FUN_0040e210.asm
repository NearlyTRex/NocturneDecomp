; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e210(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_00470750 at 0047078c
;   FUN_004c9990 at 004c99bd
;   FUN_0058cda0 at 0058cddc
;
; Referenced Globals:
;   TerminatedCString s_core_ammobox_cpp_005d31dc
;   TerminatedCString s_Out_of_memory_005d31f0
;   TerminatedCString s_Some_ammo_005d31fe
;   undefined4 s_ome_ammo_005d31fe+1
;   undefined4 s_me_ammo_005d31fe+2
;   undefined4 s_e_ammo_005d31fe+3
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_0040dbc0
;   FUN_0040ddd0
;   FUN_0040dfd0
;   FUN_004f7690
;   FUN_005030e0
;   FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e210
        ;   Label: FUN_0040e210
    PUSH EBP                            ; 0040e211
    MOV EBP,dword ptr [ESP + 0xc]       ; 0040e212
    MOV EDX,dword ptr [EBP + 0x320]     ; 0040e216
    TEST EDX,EDX                        ; 0040e21c
    JNZ 0x0040e22c                      ; 0040e21e
        ;   XREF to: 0040e22c (CONDITIONAL_JUMP)  ; LAB_0040e22c
    CMP dword ptr [EBP + 0x314],0x0     ; 0040e220
    JNZ 0x0040e253                      ; 0040e227
        ;   XREF to: 0040e253 (CONDITIONAL_JUMP)  ; LAB_0040e253
    POP EBP                             ; 0040e229
    POP EBX                             ; 0040e22a
    RET                                 ; 0040e22b
    PUSH 0x1                            ; 0040e22c
        ;   Label: LAB_0040e22c
    PUSH EDX                            ; 0040e22e
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040e22f
    PUSH EBX                            ; 0040e233
    CALL FUN_004f7690                   ; 0040e234
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7690()
    MOV dword ptr [EBP + 0x320],0x0     ; 0040e239
    ADD ESP,0xc                         ; 0040e243
    MOV dword ptr [EBP + 0x314],0x0     ; 0040e246
    POP EBP                             ; 0040e250
    POP EBX                             ; 0040e251
    RET                                 ; 0040e252
    PUSH 0x31c                          ; 0040e253
        ;   Label: LAB_0040e253
    CALL FUN_005c0f32                   ; 0040e258
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f32()
    ADD ESP,0x4                         ; 0040e25d
    TEST EAX,EAX                        ; 0040e260
    JZ 0x0040e26d                       ; 0040e262
        ;   XREF to: 0040e26d (CONDITIONAL_JUMP)  ; LAB_0040e26d
    PUSH EAX                            ; 0040e264
    CALL FUN_0040dbc0                   ; 0040e265
        ;   XREF to: 0040dbc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dbc0()
    ADD ESP,0x4                         ; 0040e26a
    PUSH EDI                            ; 0040e26d
        ;   Label: LAB_0040e26d
    PUSH ESI                            ; 0040e26e
    MOV EBX,EAX                         ; 0040e26f
    TEST EAX,EAX                        ; 0040e271
    JNZ 0x0040e298                      ; 0040e273
        ;   XREF to: 0040e298 (CONDITIONAL_JUMP)  ; LAB_0040e298
    MOV ESI,0x5d31dc                    ; 0040e275 | = "..\\core\\ammobox.cpp"
    MOV EDI,0xa2                        ; 0040e27a
    PUSH 0x5d31f0                       ; 0040e27f | = "Out of memory"
    MOV dword ptr [0x01d1d400],ESI      ; 0040e284 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0040e28a | DAT_01d1d404
    CALL FUN_005030e0                   ; 0040e290
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0040e295
    LEA ESI,[EBP + 0x2d4]               ; 0040e298
        ;   Label: LAB_0040e298
    PUSH ESI                            ; 0040e29e
    PUSH EBX                            ; 0040e29f
    CALL FUN_0040ddd0                   ; 0040e2a0
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ddd0()
    ADD ESP,0x8                         ; 0040e2a5
    MOV EAX,dword ptr [EBP + 0x314]     ; 0040e2a8
    PUSH EAX                            ; 0040e2ae
    PUSH EBX                            ; 0040e2af
    CALL FUN_0040dfd0                   ; 0040e2b0
        ;   XREF to: 0040dfd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dfd0()
    MOV EAX,dword ptr [EBP + 0x318]     ; 0040e2b5
    ADD ESP,0x8                         ; 0040e2bb
    MOV dword ptr [EBX + 0x318],EAX     ; 0040e2be
    PUSH EBX                            ; 0040e2c4
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040e2c5
    CALL dword ptr [EAX]                ; 0040e2cb
    ADD ESP,0x4                         ; 0040e2cd
    PUSH ESI                            ; 0040e2d0
    PUSH EBX                            ; 0040e2d1
    CALL FUN_0040ddd0                   ; 0040e2d2
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ddd0()
    ADD ESP,0x8                         ; 0040e2d7
    MOV EDI,EBX                         ; 0040e2da
    MOV ESI,0x5d31fe                    ; 0040e2dc | = "Some_ammo"
    PUSH EDI                            ; 0040e2e1
    MOV AL,byte ptr [ESI]               ; 0040e2e2 | = "Some_ammo" | s_me_ammo_005d31fe+2
        ;   Label: LAB_0040e2e2
    MOV byte ptr [EDI],AL               ; 0040e2e4
    CMP AL,0x0                          ; 0040e2e6
    JZ 0x0040e2fa                       ; 0040e2e8
        ;   XREF to: 0040e2fa (CONDITIONAL_JUMP)  ; LAB_0040e2fa
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e2ea | s_ome_ammo_005d31fe+1 | s_e_ammo_005d31fe+3
    ADD ESI,0x2                         ; 0040e2ed
    MOV byte ptr [EDI + 0x1],AL         ; 0040e2f0
    ADD EDI,0x2                         ; 0040e2f3
    CMP AL,0x0                          ; 0040e2f6
    JNZ 0x0040e2e2                      ; 0040e2f8
        ;   XREF to: 0040e2e2 (CONDITIONAL_JUMP)  ; LAB_0040e2e2
    POP EDI                             ; 0040e2fa
        ;   Label: LAB_0040e2fa
    PUSH 0x1                            ; 0040e2fb
    PUSH EBX                            ; 0040e2fd
    MOV EDX,dword ptr [ESP + 0x20]      ; 0040e2fe
    PUSH EDX                            ; 0040e302
    CALL FUN_004f7690                   ; 0040e303
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; undefined FUN_004f7690()
    ADD ESP,0xc                         ; 0040e308
    MOV dword ptr [EBP + 0x314],0x0     ; 0040e30b
    POP ESI                             ; 0040e315
    POP EDI                             ; 0040e316
    POP EBP                             ; 0040e317
    POP EBX                             ; 0040e318
    RET                                 ; 0040e319

