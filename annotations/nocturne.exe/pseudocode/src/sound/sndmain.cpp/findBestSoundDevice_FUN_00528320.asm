; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_00528320(void)
;
; Local Variables:
; undefined4       Stack[-0x368]:4  local_368
; undefined4       Stack[-0x358]:4  local_358
; undefined4       Stack[-0x354]:4  local_354
; undefined        Stack[-0x350]:1  local_350
; undefined4       Stack[-0x250]:4  local_250
; undefined        Stack[-0x238]:1  local_238
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   sound_sndmain.cpp_selectSoundDevice_FUN_00528410 at 00528431
;
; Called Functions:
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528320
        ;   Label: sound_sndmain.cpp_findBestSoundDevice_FUN_00528320
    PUSH ESI                            ; 00528321
    SUB ESP,0x460                       ; 00528322
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230 ; 00528328
        ;   XREF to: 00528230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230()
    MOV EBX,EAX                         ; 0052832d
    CMP EAX,0x1                         ; 0052832f
    JL 0x005283fa                       ; 00528332
        ;   XREF to: 005283fa (CONDITIONAL_JUMP)  ; LAB_005283fa
    XOR ESI,ESI                         ; 00528338
    TEST EAX,EAX                        ; 0052833a
    JLE 0x00528362                      ; 0052833c
        ;   XREF to: 00528362 (CONDITIONAL_JUMP)  ; LAB_00528362
    LEA EAX,[ESP + 0x230]               ; 0052833e
        ;   Label: LAB_0052833e
    PUSH EAX                            ; 00528345
    PUSH ESI                            ; 00528346
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0 ; 00528347
        ;   XREF to: 005282c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0()
    ADD ESP,0x8                         ; 0052834c
    CMP dword ptr [ESP + 0x338],0x0     ; 0052834f
    JNZ 0x005283ef                      ; 00528357
        ;   XREF to: 005283ef (CONDITIONAL_JUMP)  ; LAB_005283ef
    INC ESI                             ; 0052835d
    CMP ESI,EBX                         ; 0052835e
    JL 0x0052833e                       ; 00528360
        ;   XREF to: 0052833e (CONDITIONAL_JUMP)  ; LAB_0052833e
    XOR ESI,ESI                         ; 00528362
        ;   Label: LAB_00528362
    TEST EBX,EBX                        ; 00528364
    JLE 0x00528397                      ; 00528366
        ;   XREF to: 00528397 (CONDITIONAL_JUMP)  ; LAB_00528397
    MOV EAX,ESP                         ; 00528368
        ;   Label: LAB_00528368
    PUSH EAX                            ; 0052836a
    PUSH ESI                            ; 0052836b
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0 ; 0052836c
        ;   XREF to: 005282c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0()
    ADD ESP,0x8                         ; 00528371
    CMP dword ptr [ESP + 0x100],0x1     ; 00528374
    JNZ 0x00528392                      ; 0052837c
        ;   XREF to: 00528392 (CONDITIONAL_JUMP)  ; LAB_00528392
    CMP dword ptr [ESP + 0x110],0x0     ; 0052837e
    JZ 0x00528392                       ; 00528386
        ;   XREF to: 00528392 (CONDITIONAL_JUMP)  ; LAB_00528392
    CMP dword ptr [ESP + 0x114],0x0     ; 00528388
    JZ 0x005283ef                       ; 00528390
        ;   XREF to: 005283ef (CONDITIONAL_JUMP)  ; LAB_005283ef
    INC ESI                             ; 00528392
        ;   Label: LAB_00528392
    CMP ESI,EBX                         ; 00528393
    JL 0x00528368                       ; 00528395
        ;   XREF to: 00528368 (CONDITIONAL_JUMP)  ; LAB_00528368
    XOR ESI,ESI                         ; 00528397
        ;   Label: LAB_00528397
    TEST EBX,EBX                        ; 00528399
    JLE 0x005283c7                      ; 0052839b
        ;   XREF to: 005283c7 (CONDITIONAL_JUMP)  ; LAB_005283c7
    LEA EAX,[ESP + 0x348]               ; 0052839d
        ;   Label: LAB_0052839d
    PUSH EAX                            ; 005283a4
    PUSH ESI                            ; 005283a5
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0 ; 005283a6
        ;   XREF to: 005282c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0()
    ADD ESP,0x8                         ; 005283ab
    CMP dword ptr [ESP + 0x448],0x1     ; 005283ae
    JNZ 0x005283c2                      ; 005283b6
        ;   XREF to: 005283c2 (CONDITIONAL_JUMP)  ; LAB_005283c2
    CMP dword ptr [ESP + 0x45c],0x0     ; 005283b8
    JZ 0x005283ef                       ; 005283c0
        ;   XREF to: 005283ef (CONDITIONAL_JUMP)  ; LAB_005283ef
    INC ESI                             ; 005283c2
        ;   Label: LAB_005283c2
    CMP ESI,EBX                         ; 005283c3
    JL 0x0052839d                       ; 005283c5
        ;   XREF to: 0052839d (CONDITIONAL_JUMP)  ; LAB_0052839d
    XOR ESI,ESI                         ; 005283c7
        ;   Label: LAB_005283c7
    TEST EBX,EBX                        ; 005283c9
    JLE 0x005283ed                      ; 005283cb
        ;   XREF to: 005283ed (CONDITIONAL_JUMP)  ; LAB_005283ed
    LEA EAX,[ESP + 0x118]               ; 005283cd
        ;   Label: LAB_005283cd
    PUSH EAX                            ; 005283d4
    PUSH ESI                            ; 005283d5
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0 ; 005283d6
        ;   XREF to: 005282c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceInfo_FUN_005282c0()
    ADD ESP,0x8                         ; 005283db
    CMP dword ptr [ESP + 0x218],0x0     ; 005283de
    JZ 0x005283ef                       ; 005283e6
        ;   XREF to: 005283ef (CONDITIONAL_JUMP)  ; LAB_005283ef
    INC ESI                             ; 005283e8
    CMP ESI,EBX                         ; 005283e9
    JL 0x005283cd                       ; 005283eb
        ;   XREF to: 005283cd (CONDITIONAL_JUMP)  ; LAB_005283cd
    XOR ESI,ESI                         ; 005283ed
        ;   Label: LAB_005283ed
    MOV EAX,ESI                         ; 005283ef
        ;   Label: LAB_005283ef
    ADD ESP,0x460                       ; 005283f1
    POP ESI                             ; 005283f7
    POP EBX                             ; 005283f8
    RET                                 ; 005283f9
    MOV ESI,0xffffffff                  ; 005283fa
        ;   Label: LAB_005283fa
    MOV EAX,ESI                         ; 005283ff
    ADD ESP,0x460                       ; 00528401
    POP ESI                             ; 00528407
    POP EBX                             ; 00528408
    RET                                 ; 00528409

