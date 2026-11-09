; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004b7140(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_game.cpp_CGame_processJoystickControls_FUN_004b7510 at 004b7516
;   core_game.cpp_FUN_004bcbf0 at 004bcfd4
;   core_menu.cpp_FUN_004eb490 at 004eb56e
;   core_menu.cpp_FUN_004eed60 at 004efc79
;
; Referenced Globals:
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01c38af0
;   undefined4 DAT_01c38af4
;   undefined4 DAT_01c38b00
;   undefined4 DAT_01c38b01
;   undefined4 DAT_01c38b04
;   undefined4 DAT_01d02f84
;
; Called Functions:
;   engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0
;   engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0
;   wincore_winrun.cpp_getJoystickState_FUN_00590060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7140
        ;   Label: core_game.cpp_CGame_resetKeyState_FUN_004b7140
    PUSH ESI                            ; 004b7141
    PUSH EDI                            ; 004b7142
    PUSH EBP                            ; 004b7143
    SUB ESP,0x4                         ; 004b7144
    MOV EBX,dword ptr [ESP + 0x18]      ; 004b7147
    MOV EAX,[0x01c38b00]                ; 004b714b | DAT_01c38b00
    MOV EDX,0x2                         ; 004b7150
    MOV dword ptr [ESP],EAX             ; 004b7155
    MOV dword ptr [0x01c38b04],EDX      ; 004b7158 | DAT_01c38b04
    CALL wincore_winrun.cpp_getJoystickState_FUN_00590060 ; 004b715e
        ;   XREF to: 00590060 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_getJoystickState_FUN_00590060()
    TEST byte ptr [0x01c38b00],0x1      ; 004b7163 | DAT_01c38b00
    JZ 0x004b7419                       ; 004b716a
        ;   XREF to: 004b7419 (CONDITIONAL_JUMP)  ; LAB_004b7419
    TEST byte ptr [ESP],0x1             ; 004b7170
    JNZ 0x004b718a                      ; 004b7174
        ;   XREF to: 004b718a (CONDITIONAL_JUMP)  ; LAB_004b718a
    PUSH 0x202                          ; 004b7176
    MOV ESI,dword ptr [0x00617dd4]      ; 004b717b | DAT_00617dd4
    PUSH ESI                            ; 004b7181 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b7182
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b7187
        ;   Label: LAB_004b7187
    TEST byte ptr [0x01c38b00],0x2      ; 004b718a | DAT_01c38b00
        ;   Label: LAB_004b718a
    JZ 0x004b742f                       ; 004b7191
        ;   XREF to: 004b742f (CONDITIONAL_JUMP)  ; LAB_004b742f
    TEST byte ptr [ESP],0x2             ; 004b7197
    JNZ 0x004b71b1                      ; 004b719b
        ;   XREF to: 004b71b1 (CONDITIONAL_JUMP)  ; LAB_004b71b1
    PUSH 0x203                          ; 004b719d
    MOV EBP,dword ptr [0x00617dd4]      ; 004b71a2 | DAT_00617dd4
    PUSH EBP                            ; 004b71a8 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b71a9
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b71ae
        ;   Label: LAB_004b71ae
    TEST byte ptr [0x01c38b00],0x4      ; 004b71b1 | DAT_01c38b00
        ;   Label: LAB_004b71b1
    JZ 0x004b7445                       ; 004b71b8
        ;   XREF to: 004b7445 (CONDITIONAL_JUMP)  ; LAB_004b7445
    TEST byte ptr [ESP],0x4             ; 004b71be
    JNZ 0x004b71d8                      ; 004b71c2
        ;   XREF to: 004b71d8 (CONDITIONAL_JUMP)  ; LAB_004b71d8
    PUSH 0x204                          ; 004b71c4
    MOV EDX,dword ptr [0x00617dd4]      ; 004b71c9 | DAT_00617dd4
    PUSH EDX                            ; 004b71cf | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b71d0
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b71d5
        ;   Label: LAB_004b71d5
    TEST byte ptr [0x01c38b00],0x8      ; 004b71d8 | DAT_01c38b00
        ;   Label: LAB_004b71d8
    JZ 0x004b745a                       ; 004b71df
        ;   XREF to: 004b745a (CONDITIONAL_JUMP)  ; LAB_004b745a
    TEST byte ptr [ESP],0x8             ; 004b71e5
    JNZ 0x004b71ff                      ; 004b71e9
        ;   XREF to: 004b71ff (CONDITIONAL_JUMP)  ; LAB_004b71ff
    PUSH 0x205                          ; 004b71eb
    MOV ESI,dword ptr [0x00617dd4]      ; 004b71f0 | DAT_00617dd4
    PUSH ESI                            ; 004b71f6 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b71f7
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b71fc
        ;   Label: LAB_004b71fc
    TEST byte ptr [0x01c38b00],0x10     ; 004b71ff | DAT_01c38b00
        ;   Label: LAB_004b71ff
    JZ 0x004b7470                       ; 004b7206
        ;   XREF to: 004b7470 (CONDITIONAL_JUMP)  ; LAB_004b7470
    TEST byte ptr [ESP],0x10            ; 004b720c
    JNZ 0x004b7226                      ; 004b7210
        ;   XREF to: 004b7226 (CONDITIONAL_JUMP)  ; LAB_004b7226
    PUSH 0x206                          ; 004b7212
    MOV EBP,dword ptr [0x00617dd4]      ; 004b7217 | DAT_00617dd4
    PUSH EBP                            ; 004b721d | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b721e
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b7223
        ;   Label: LAB_004b7223
    TEST byte ptr [0x01c38b00],0x20     ; 004b7226 | DAT_01c38b00
        ;   Label: LAB_004b7226
    JZ 0x004b7486                       ; 004b722d
        ;   XREF to: 004b7486 (CONDITIONAL_JUMP)  ; LAB_004b7486
    TEST byte ptr [ESP],0x20            ; 004b7233
    JNZ 0x004b724d                      ; 004b7237
        ;   XREF to: 004b724d (CONDITIONAL_JUMP)  ; LAB_004b724d
    PUSH 0x207                          ; 004b7239
    MOV EDX,dword ptr [0x00617dd4]      ; 004b723e | DAT_00617dd4
    PUSH EDX                            ; 004b7244 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b7245
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b724a
        ;   Label: LAB_004b724a
    TEST byte ptr [0x01c38b00],0x40     ; 004b724d | DAT_01c38b00
        ;   Label: LAB_004b724d
    JZ 0x004b749b                       ; 004b7254
        ;   XREF to: 004b749b (CONDITIONAL_JUMP)  ; LAB_004b749b
    TEST byte ptr [ESP],0x40            ; 004b725a
    JNZ 0x004b7274                      ; 004b725e
        ;   XREF to: 004b7274 (CONDITIONAL_JUMP)  ; LAB_004b7274
    PUSH 0x208                          ; 004b7260
    MOV ESI,dword ptr [0x00617dd4]      ; 004b7265 | DAT_00617dd4
    PUSH ESI                            ; 004b726b | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b726c
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b7271
        ;   Label: LAB_004b7271
    TEST byte ptr [0x01c38b00],0x80     ; 004b7274 | DAT_01c38b00
        ;   Label: LAB_004b7274
    JZ 0x004b74b1                       ; 004b727b
        ;   XREF to: 004b74b1 (CONDITIONAL_JUMP)  ; LAB_004b74b1
    TEST byte ptr [ESP],0x80            ; 004b7281
    JNZ 0x004b729b                      ; 004b7285
        ;   XREF to: 004b729b (CONDITIONAL_JUMP)  ; LAB_004b729b
    PUSH 0x209                          ; 004b7287
    MOV EBP,dword ptr [0x00617dd4]      ; 004b728c | DAT_00617dd4
    PUSH EBP                            ; 004b7292 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b7293
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b7298
        ;   Label: LAB_004b7298
    TEST byte ptr [0x01c38b01],0x1      ; 004b729b | DAT_01c38b01
        ;   Label: LAB_004b729b
    JZ 0x004b74c7                       ; 004b72a2
        ;   XREF to: 004b74c7 (CONDITIONAL_JUMP)  ; LAB_004b74c7
    TEST byte ptr [ESP + 0x1],0x1       ; 004b72a8
    JNZ 0x004b72c3                      ; 004b72ad
        ;   XREF to: 004b72c3 (CONDITIONAL_JUMP)  ; LAB_004b72c3
    PUSH 0x20a                          ; 004b72af
    MOV EDX,dword ptr [0x00617dd4]      ; 004b72b4 | DAT_00617dd4
    PUSH EDX                            ; 004b72ba | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b72bb
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b72c0
        ;   Label: LAB_004b72c0
    TEST byte ptr [0x01c38b01],0x2      ; 004b72c3 | DAT_01c38b01
        ;   Label: LAB_004b72c3
    JZ 0x004b74dc                       ; 004b72ca
        ;   XREF to: 004b74dc (CONDITIONAL_JUMP)  ; LAB_004b74dc
    TEST byte ptr [ESP + 0x1],0x2       ; 004b72d0
    JNZ 0x004b72eb                      ; 004b72d5
        ;   XREF to: 004b72eb (CONDITIONAL_JUMP)  ; LAB_004b72eb
    PUSH 0x20b                          ; 004b72d7
    MOV ESI,dword ptr [0x00617dd4]      ; 004b72dc | DAT_00617dd4
    PUSH ESI                            ; 004b72e2 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b72e3
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b72e8
        ;   Label: LAB_004b72e8
    PUSH 0x251                          ; 004b72eb
        ;   Label: LAB_004b72eb
    MOV EDI,dword ptr [0x00617dd4]      ; 004b72f0 | DAT_00617dd4
    PUSH EDI                            ; 004b72f6 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b72f7
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b72fc
    PUSH 0x252                          ; 004b72ff
    MOV EBP,dword ptr [0x00617dd4]      ; 004b7304 | DAT_00617dd4
    PUSH EBP                            ; 004b730a | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b730b
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b7310
    PUSH 0x253                          ; 004b7313
    MOV EAX,[0x00617dd4]                ; 004b7318 | DAT_00617dd4
    PUSH EAX                            ; 004b731d | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b731e
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b7323
    PUSH 0x254                          ; 004b7326
    MOV EDX,dword ptr [0x00617dd4]      ; 004b732b | DAT_00617dd4
    PUSH EDX                            ; 004b7331 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b7332
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    MOV EDX,dword ptr [EBX + 0xb8]      ; 004b7337
    MOV ECX,dword ptr [EBX + 0xc0]      ; 004b733d
    SUB EDX,ECX                         ; 004b7343
    MOV EAX,EDX                         ; 004b7345
    SAR EDX,0x1f                        ; 004b7347
    SUB EAX,EDX                         ; 004b734a
    SAR EAX,0x1                         ; 004b734c
    MOV EDX,dword ptr [EBX + 0xb8]      ; 004b734e
    MOV ESI,dword ptr [0x01c38af0]      ; 004b7354 | DAT_01c38af0
    SUB EDX,EAX                         ; 004b735a
    ADD ESP,0x8                         ; 004b735c
    CMP EDX,ESI                         ; 004b735f
    JLE 0x004b7377                      ; 004b7361
        ;   XREF to: 004b7377 (CONDITIONAL_JUMP)  ; LAB_004b7377
    PUSH 0x251                          ; 004b7363
    MOV EDI,dword ptr [0x00617dd4]      ; 004b7368 | DAT_00617dd4
    PUSH EDI                            ; 004b736e | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b736f
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b7374
    MOV EBP,dword ptr [EBX + 0xb8]      ; 004b7377
        ;   Label: LAB_004b7377
    MOV EDX,dword ptr [EBX + 0xc4]      ; 004b737d
    SUB EDX,EBP                         ; 004b7383
    MOV EAX,EDX                         ; 004b7385
    SAR EDX,0x1f                        ; 004b7387
    SUB EAX,EDX                         ; 004b738a
    SAR EAX,0x1                         ; 004b738c
    MOV ECX,dword ptr [0x01c38af0]      ; 004b738e | DAT_01c38af0
    ADD EAX,EBP                         ; 004b7394
    CMP EAX,ECX                         ; 004b7396
    JGE 0x004b73ae                      ; 004b7398
        ;   XREF to: 004b73ae (CONDITIONAL_JUMP)  ; LAB_004b73ae
    PUSH 0x252                          ; 004b739a
    MOV ESI,dword ptr [0x00617dd4]      ; 004b739f | DAT_00617dd4
    PUSH ESI                            ; 004b73a5 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b73a6
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b73ab
    MOV EDI,dword ptr [EBX + 0xc8]      ; 004b73ae
        ;   Label: LAB_004b73ae
    MOV EDX,dword ptr [EBX + 0xbc]      ; 004b73b4
    SUB EDX,EDI                         ; 004b73ba
    MOV EAX,EDX                         ; 004b73bc
    SAR EDX,0x1f                        ; 004b73be
    SUB EAX,EDX                         ; 004b73c1
    SAR EAX,0x1                         ; 004b73c3
    MOV EDX,dword ptr [EBX + 0xbc]      ; 004b73c5
    MOV EBP,dword ptr [0x01c38af4]      ; 004b73cb | DAT_01c38af4
    SUB EDX,EAX                         ; 004b73d1
    CMP EDX,EBP                         ; 004b73d3
    JLE 0x004b73ea                      ; 004b73d5
        ;   XREF to: 004b73ea (CONDITIONAL_JUMP)  ; LAB_004b73ea
    PUSH 0x253                          ; 004b73d7
    MOV EAX,[0x00617dd4]                ; 004b73dc | DAT_00617dd4
    PUSH EAX                            ; 004b73e1 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b73e2
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b73e7
    MOV ECX,dword ptr [EBX + 0xbc]      ; 004b73ea
        ;   Label: LAB_004b73ea
    MOV EDX,dword ptr [EBX + 0xcc]      ; 004b73f0
    SUB EDX,ECX                         ; 004b73f6
    MOV EAX,EDX                         ; 004b73f8
    SAR EDX,0x1f                        ; 004b73fa
    SUB EAX,EDX                         ; 004b73fd
    SAR EAX,0x1                         ; 004b73ff
    MOV EDI,dword ptr [0x01c38af4]      ; 004b7401 | DAT_01c38af4
    ADD EAX,ECX                         ; 004b7407
    CMP EAX,EDI                         ; 004b7409
    JL 0x004b74f2                       ; 004b740b
        ;   XREF to: 004b74f2 (CONDITIONAL_JUMP)  ; LAB_004b74f2
    ADD ESP,0x4                         ; 004b7411
    POP EBP                             ; 004b7414
    POP EDI                             ; 004b7415
    POP ESI                             ; 004b7416
    POP EBX                             ; 004b7417
    RET                                 ; 004b7418
    PUSH 0x202                          ; 004b7419
        ;   Label: LAB_004b7419
    MOV ECX,dword ptr [0x00617dd4]      ; 004b741e | DAT_00617dd4
    PUSH ECX                            ; 004b7424 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b7425
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b7187                      ; 004b742a
        ;   XREF to: 004b7187 (UNCONDITIONAL_JUMP)  ; LAB_004b7187
    PUSH 0x203                          ; 004b742f
        ;   Label: LAB_004b742f
    MOV EDI,dword ptr [0x00617dd4]      ; 004b7434 | DAT_00617dd4
    PUSH EDI                            ; 004b743a | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b743b
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b71ae                      ; 004b7440
        ;   XREF to: 004b71ae (UNCONDITIONAL_JUMP)  ; LAB_004b71ae
    PUSH 0x204                          ; 004b7445
        ;   Label: LAB_004b7445
    MOV EAX,[0x00617dd4]                ; 004b744a | DAT_00617dd4
    PUSH EAX                            ; 004b744f | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b7450
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b71d5                      ; 004b7455
        ;   XREF to: 004b71d5 (UNCONDITIONAL_JUMP)  ; LAB_004b71d5
    PUSH 0x205                          ; 004b745a
        ;   Label: LAB_004b745a
    MOV ECX,dword ptr [0x00617dd4]      ; 004b745f | DAT_00617dd4
    PUSH ECX                            ; 004b7465 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b7466
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b71fc                      ; 004b746b
        ;   XREF to: 004b71fc (UNCONDITIONAL_JUMP)  ; LAB_004b71fc
    PUSH 0x206                          ; 004b7470
        ;   Label: LAB_004b7470
    MOV EDI,dword ptr [0x00617dd4]      ; 004b7475 | DAT_00617dd4
    PUSH EDI                            ; 004b747b | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b747c
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b7223                      ; 004b7481
        ;   XREF to: 004b7223 (UNCONDITIONAL_JUMP)  ; LAB_004b7223
    PUSH 0x207                          ; 004b7486
        ;   Label: LAB_004b7486
    MOV EAX,[0x00617dd4]                ; 004b748b | DAT_00617dd4
    PUSH EAX                            ; 004b7490 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b7491
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b724a                      ; 004b7496
        ;   XREF to: 004b724a (UNCONDITIONAL_JUMP)  ; LAB_004b724a
    PUSH 0x208                          ; 004b749b
        ;   Label: LAB_004b749b
    MOV ECX,dword ptr [0x00617dd4]      ; 004b74a0 | DAT_00617dd4
    PUSH ECX                            ; 004b74a6 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b74a7
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b7271                      ; 004b74ac
        ;   XREF to: 004b7271 (UNCONDITIONAL_JUMP)  ; LAB_004b7271
    PUSH 0x209                          ; 004b74b1
        ;   Label: LAB_004b74b1
    MOV EDI,dword ptr [0x00617dd4]      ; 004b74b6 | DAT_00617dd4
    PUSH EDI                            ; 004b74bc | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b74bd
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b7298                      ; 004b74c2
        ;   XREF to: 004b7298 (UNCONDITIONAL_JUMP)  ; LAB_004b7298
    PUSH 0x20a                          ; 004b74c7
        ;   Label: LAB_004b74c7
    MOV EAX,[0x00617dd4]                ; 004b74cc | DAT_00617dd4
    PUSH EAX                            ; 004b74d1 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b74d2
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b72c0                      ; 004b74d7
        ;   XREF to: 004b72c0 (UNCONDITIONAL_JUMP)  ; LAB_004b72c0
    PUSH 0x20b                          ; 004b74dc
        ;   Label: LAB_004b74dc
    MOV ECX,dword ptr [0x00617dd4]      ; 004b74e1 | DAT_00617dd4
    PUSH ECX                            ; 004b74e7 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0 ; 004b74e8
        ;   XREF to: 004dfed0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys * this_ptr, EInputCodeType key_code)
    JMP 0x004b72e8                      ; 004b74ed
        ;   XREF to: 004b72e8 (UNCONDITIONAL_JUMP)  ; LAB_004b72e8
    PUSH 0x254                          ; 004b74f2
        ;   Label: LAB_004b74f2
    MOV EBP,dword ptr [0x00617dd4]      ; 004b74f7 | DAT_00617dd4
    PUSH EBP                            ; 004b74fd | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0 ; 004b74fe
        ;   XREF to: 004dfec0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys * this_ptr, EInputCodeType key_code)
    ADD ESP,0x8                         ; 004b7503
    ADD ESP,0x4                         ; 004b7506
    POP EBP                             ; 004b7509
    POP EDI                             ; 004b750a
    POP ESI                             ; 004b750b
    POP EBX                             ; 004b750c
    RET                                 ; 004b750d

