; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_005753b0(void)
;
; Local Variables:
; undefined4       Stack[-0x478]:4  local_478
; undefined        Stack[-0x468]:1  local_468
; undefined4       Stack[-0x368]:4  local_368
; undefined4       Stack[-0x354]:4  local_354
; undefined        Stack[-0x350]:1  local_350
; undefined4       Stack[-0x250]:4  local_250
; undefined        Stack[-0x238]:1  local_238
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   sound_sndmain.cpp_selectSoundDevice_FUN_005754d0 at 005754f1
;
; Called Functions:
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005753b0
        ;   Label: sound_sndmain.cpp_findBestSoundDevice_FUN_005753b0
    PUSH ESI                            ; 005753b1
    SUB ESP,0x578                       ; 005753b2
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0 ; 005753b8
        ;   XREF to: 005752c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0()
    MOV EBX,EAX                         ; 005753bd
    CMP EAX,0x1                         ; 005753bf
    JL 0x005754b4                       ; 005753c2
        ;   XREF to: 005754b4 (CONDITIONAL_JUMP)  ; LAB_005754b4
    XOR ESI,ESI                         ; 005753c8
    TEST EAX,EAX                        ; 005753ca
    JLE 0x005753ed                      ; 005753cc
        ;   XREF to: 005753ed (CONDITIONAL_JUMP)  ; LAB_005753ed
    MOV EAX,ESP                         ; 005753ce
        ;   Label: LAB_005753ce
    PUSH EAX                            ; 005753d0
    PUSH ESI                            ; 005753d1
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350 ; 005753d2
        ;   XREF to: 00575350 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005753d7
    CMP dword ptr [ESP + 0x108],0x2     ; 005753da
    JGE 0x005754a9                      ; 005753e2
        ;   XREF to: 005754a9 (CONDITIONAL_JUMP)  ; LAB_005754a9
    INC ESI                             ; 005753e8
    CMP ESI,EBX                         ; 005753e9
    JL 0x005753ce                       ; 005753eb
        ;   XREF to: 005753ce (CONDITIONAL_JUMP)  ; LAB_005753ce
    XOR ESI,ESI                         ; 005753ed
        ;   Label: LAB_005753ed
    TEST EBX,EBX                        ; 005753ef
    JLE 0x00575417                      ; 005753f1
        ;   XREF to: 00575417 (CONDITIONAL_JUMP)  ; LAB_00575417
    LEA EAX,[ESP + 0x348]               ; 005753f3
        ;   Label: LAB_005753f3
    PUSH EAX                            ; 005753fa
    PUSH ESI                            ; 005753fb
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350 ; 005753fc
        ;   XREF to: 00575350 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00575401
    CMP dword ptr [ESP + 0x450],0x1     ; 00575404
    JGE 0x005754a9                      ; 0057540c
        ;   XREF to: 005754a9 (CONDITIONAL_JUMP)  ; LAB_005754a9
    INC ESI                             ; 00575412
    CMP ESI,EBX                         ; 00575413
    JL 0x005753f3                       ; 00575415
        ;   XREF to: 005753f3 (CONDITIONAL_JUMP)  ; LAB_005753f3
    XOR ESI,ESI                         ; 00575417
        ;   Label: LAB_00575417
    TEST EBX,EBX                        ; 00575419
    JLE 0x00575451                      ; 0057541b
        ;   XREF to: 00575451 (CONDITIONAL_JUMP)  ; LAB_00575451
    LEA EAX,[ESP + 0x460]               ; 0057541d
        ;   Label: LAB_0057541d
    PUSH EAX                            ; 00575424
    PUSH ESI                            ; 00575425
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350 ; 00575426
        ;   XREF to: 00575350 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 0057542b
    CMP dword ptr [ESP + 0x560],0x1     ; 0057542e
    JNZ 0x0057544c                      ; 00575436
        ;   XREF to: 0057544c (CONDITIONAL_JUMP)  ; LAB_0057544c
    CMP dword ptr [ESP + 0x570],0x0     ; 00575438
    JZ 0x0057544c                       ; 00575440
        ;   XREF to: 0057544c (CONDITIONAL_JUMP)  ; LAB_0057544c
    CMP dword ptr [ESP + 0x574],0x0     ; 00575442
    JZ 0x005754a9                       ; 0057544a
        ;   XREF to: 005754a9 (CONDITIONAL_JUMP)  ; LAB_005754a9
    INC ESI                             ; 0057544c
        ;   Label: LAB_0057544c
    CMP ESI,EBX                         ; 0057544d
    JL 0x0057541d                       ; 0057544f
        ;   XREF to: 0057541d (CONDITIONAL_JUMP)  ; LAB_0057541d
    XOR ESI,ESI                         ; 00575451
        ;   Label: LAB_00575451
    TEST EBX,EBX                        ; 00575453
    JLE 0x00575481                      ; 00575455
        ;   XREF to: 00575481 (CONDITIONAL_JUMP)  ; LAB_00575481
    LEA EAX,[ESP + 0x118]               ; 00575457
        ;   Label: LAB_00575457
    PUSH EAX                            ; 0057545e
    PUSH ESI                            ; 0057545f
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350 ; 00575460
        ;   XREF to: 00575350 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00575465
    CMP dword ptr [ESP + 0x218],0x1     ; 00575468
    JNZ 0x0057547c                      ; 00575470
        ;   XREF to: 0057547c (CONDITIONAL_JUMP)  ; LAB_0057547c
    CMP dword ptr [ESP + 0x22c],0x0     ; 00575472
    JZ 0x005754a9                       ; 0057547a
        ;   XREF to: 005754a9 (CONDITIONAL_JUMP)  ; LAB_005754a9
    INC ESI                             ; 0057547c
        ;   Label: LAB_0057547c
    CMP ESI,EBX                         ; 0057547d
    JL 0x00575457                       ; 0057547f
        ;   XREF to: 00575457 (CONDITIONAL_JUMP)  ; LAB_00575457
    XOR ESI,ESI                         ; 00575481
        ;   Label: LAB_00575481
    TEST EBX,EBX                        ; 00575483
    JLE 0x005754a7                      ; 00575485
        ;   XREF to: 005754a7 (CONDITIONAL_JUMP)  ; LAB_005754a7
    LEA EAX,[ESP + 0x230]               ; 00575487
        ;   Label: LAB_00575487
    PUSH EAX                            ; 0057548e
    PUSH ESI                            ; 0057548f
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350 ; 00575490
        ;   XREF to: 00575350 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_00575350(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00575495
    CMP dword ptr [ESP + 0x330],0x0     ; 00575498
    JZ 0x005754a9                       ; 005754a0
        ;   XREF to: 005754a9 (CONDITIONAL_JUMP)  ; LAB_005754a9
    INC ESI                             ; 005754a2
    CMP ESI,EBX                         ; 005754a3
    JL 0x00575487                       ; 005754a5
        ;   XREF to: 00575487 (CONDITIONAL_JUMP)  ; LAB_00575487
    XOR ESI,ESI                         ; 005754a7
        ;   Label: LAB_005754a7
    MOV EAX,ESI                         ; 005754a9
        ;   Label: LAB_005754a9
    ADD ESP,0x578                       ; 005754ab
    POP ESI                             ; 005754b1
    POP EBX                             ; 005754b2
    RET                                 ; 005754b3
    MOV ESI,0xffffffff                  ; 005754b4
        ;   Label: LAB_005754b4
    MOV EAX,ESI                         ; 005754b9
    ADD ESP,0x578                       ; 005754bb
    POP ESI                             ; 005754c1
    POP EBX                             ; 005754c2
    RET                                 ; 005754c3

