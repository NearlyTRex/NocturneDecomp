; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_00558520(void)
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
;   sound_sndmain.cpp_selectSoundDevice_FUN_00558640 at 00558661
;
; Called Functions:
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558520
        ;   Label: sound_sndmain.cpp_findBestSoundDevice_FUN_00558520
    PUSH ESI                            ; 00558521
    SUB ESP,0x578                       ; 00558522
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430 ; 00558528
        ;   XREF to: 00558430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430()
    MOV EBX,EAX                         ; 0055852d
    CMP EAX,0x1                         ; 0055852f
    JL 0x00558624                       ; 00558532
        ;   XREF to: 00558624 (CONDITIONAL_JUMP)  ; LAB_00558624
    XOR ESI,ESI                         ; 00558538
    TEST EAX,EAX                        ; 0055853a
    JLE 0x0055855d                      ; 0055853c
        ;   XREF to: 0055855d (CONDITIONAL_JUMP)  ; LAB_0055855d
    MOV EAX,ESP                         ; 0055853e
        ;   Label: LAB_0055853e
    PUSH EAX                            ; 00558540
    PUSH ESI                            ; 00558541
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0 ; 00558542
        ;   XREF to: 005584c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00558547
    CMP dword ptr [ESP + 0x108],0x2     ; 0055854a
    JGE 0x00558619                      ; 00558552
        ;   XREF to: 00558619 (CONDITIONAL_JUMP)  ; LAB_00558619
    INC ESI                             ; 00558558
    CMP ESI,EBX                         ; 00558559
    JL 0x0055853e                       ; 0055855b
        ;   XREF to: 0055853e (CONDITIONAL_JUMP)  ; LAB_0055853e
    XOR ESI,ESI                         ; 0055855d
        ;   Label: LAB_0055855d
    TEST EBX,EBX                        ; 0055855f
    JLE 0x00558587                      ; 00558561
        ;   XREF to: 00558587 (CONDITIONAL_JUMP)  ; LAB_00558587
    LEA EAX,[ESP + 0x348]               ; 00558563
        ;   Label: LAB_00558563
    PUSH EAX                            ; 0055856a
    PUSH ESI                            ; 0055856b
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0 ; 0055856c
        ;   XREF to: 005584c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00558571
    CMP dword ptr [ESP + 0x450],0x1     ; 00558574
    JGE 0x00558619                      ; 0055857c
        ;   XREF to: 00558619 (CONDITIONAL_JUMP)  ; LAB_00558619
    INC ESI                             ; 00558582
    CMP ESI,EBX                         ; 00558583
    JL 0x00558563                       ; 00558585
        ;   XREF to: 00558563 (CONDITIONAL_JUMP)  ; LAB_00558563
    XOR ESI,ESI                         ; 00558587
        ;   Label: LAB_00558587
    TEST EBX,EBX                        ; 00558589
    JLE 0x005585c1                      ; 0055858b
        ;   XREF to: 005585c1 (CONDITIONAL_JUMP)  ; LAB_005585c1
    LEA EAX,[ESP + 0x460]               ; 0055858d
        ;   Label: LAB_0055858d
    PUSH EAX                            ; 00558594
    PUSH ESI                            ; 00558595
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0 ; 00558596
        ;   XREF to: 005584c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 0055859b
    CMP dword ptr [ESP + 0x560],0x1     ; 0055859e
    JNZ 0x005585bc                      ; 005585a6
        ;   XREF to: 005585bc (CONDITIONAL_JUMP)  ; LAB_005585bc
    CMP dword ptr [ESP + 0x570],0x0     ; 005585a8
    JZ 0x005585bc                       ; 005585b0
        ;   XREF to: 005585bc (CONDITIONAL_JUMP)  ; LAB_005585bc
    CMP dword ptr [ESP + 0x574],0x0     ; 005585b2
    JZ 0x00558619                       ; 005585ba
        ;   XREF to: 00558619 (CONDITIONAL_JUMP)  ; LAB_00558619
    INC ESI                             ; 005585bc
        ;   Label: LAB_005585bc
    CMP ESI,EBX                         ; 005585bd
    JL 0x0055858d                       ; 005585bf
        ;   XREF to: 0055858d (CONDITIONAL_JUMP)  ; LAB_0055858d
    XOR ESI,ESI                         ; 005585c1
        ;   Label: LAB_005585c1
    TEST EBX,EBX                        ; 005585c3
    JLE 0x005585f1                      ; 005585c5
        ;   XREF to: 005585f1 (CONDITIONAL_JUMP)  ; LAB_005585f1
    LEA EAX,[ESP + 0x118]               ; 005585c7
        ;   Label: LAB_005585c7
    PUSH EAX                            ; 005585ce
    PUSH ESI                            ; 005585cf
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0 ; 005585d0
        ;   XREF to: 005584c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005585d5
    CMP dword ptr [ESP + 0x218],0x1     ; 005585d8
    JNZ 0x005585ec                      ; 005585e0
        ;   XREF to: 005585ec (CONDITIONAL_JUMP)  ; LAB_005585ec
    CMP dword ptr [ESP + 0x22c],0x0     ; 005585e2
    JZ 0x00558619                       ; 005585ea
        ;   XREF to: 00558619 (CONDITIONAL_JUMP)  ; LAB_00558619
    INC ESI                             ; 005585ec
        ;   Label: LAB_005585ec
    CMP ESI,EBX                         ; 005585ed
    JL 0x005585c7                       ; 005585ef
        ;   XREF to: 005585c7 (CONDITIONAL_JUMP)  ; LAB_005585c7
    XOR ESI,ESI                         ; 005585f1
        ;   Label: LAB_005585f1
    TEST EBX,EBX                        ; 005585f3
    JLE 0x00558617                      ; 005585f5
        ;   XREF to: 00558617 (CONDITIONAL_JUMP)  ; LAB_00558617
    LEA EAX,[ESP + 0x230]               ; 005585f7
        ;   Label: LAB_005585f7
    PUSH EAX                            ; 005585fe
    PUSH ESI                            ; 005585ff
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0 ; 00558600
        ;   XREF to: 005584c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005584c0(int device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00558605
    CMP dword ptr [ESP + 0x330],0x0     ; 00558608
    JZ 0x00558619                       ; 00558610
        ;   XREF to: 00558619 (CONDITIONAL_JUMP)  ; LAB_00558619
    INC ESI                             ; 00558612
    CMP ESI,EBX                         ; 00558613
    JL 0x005585f7                       ; 00558615
        ;   XREF to: 005585f7 (CONDITIONAL_JUMP)  ; LAB_005585f7
    XOR ESI,ESI                         ; 00558617
        ;   Label: LAB_00558617
    MOV EAX,ESI                         ; 00558619
        ;   Label: LAB_00558619
    ADD ESP,0x578                       ; 0055861b
    POP ESI                             ; 00558621
    POP EBX                             ; 00558622
    RET                                 ; 00558623
    MOV ESI,0xffffffff                  ; 00558624
        ;   Label: LAB_00558624
    MOV EAX,ESI                         ; 00558629
    ADD ESP,0x578                       ; 0055862b
    POP ESI                             ; 00558631
    POP EBX                             ; 00558632
    RET                                 ; 00558633

