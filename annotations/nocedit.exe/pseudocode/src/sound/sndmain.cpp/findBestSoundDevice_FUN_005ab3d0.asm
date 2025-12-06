; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0(void)
;
; Local Variables:
; undefined1[280]  Stack[-0x464]:280  device_info2
; undefined1[280]  Stack[-0x34c]:280  device_info3
; undefined1[280]  Stack[-0x234]:280  device_info1
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 at 005ab4e1
;
; Called Functions:
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
;   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab3d0
        ;   Label: sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0
    PUSH ESI                            ; 005ab3d1
    SUB ESP,0x460                       ; 005ab3d2
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 ; 005ab3d8 | int sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0()
        ;   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 005ab3dd
    CMP EAX,0x1                         ; 005ab3df
    JL 0x005ab4aa                       ; 005ab3e2 | LAB_005ab4aa
        ;   XREF to: 005ab4aa (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005ab3e8
    TEST EAX,EAX                        ; 005ab3ea
    JLE 0x005ab412                      ; 005ab3ec | LAB_005ab412
        ;   XREF to: 005ab412 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x230]               ; 005ab3ee
        ;   Label: LAB_005ab3ee
    PUSH EAX                            ; 005ab3f5
    PUSH ESI                            ; 005ab3f6
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 ; 005ab3f7 | void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
        ;   XREF to: 005ab370 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ab3fc
    CMP dword ptr [ESP + 0x338],0x0     ; 005ab3ff
    JNZ 0x005ab49f                      ; 005ab407 | LAB_005ab49f
        ;   XREF to: 005ab49f (CONDITIONAL_JUMP)
    INC ESI                             ; 005ab40d
    CMP ESI,EBX                         ; 005ab40e
    JL 0x005ab3ee                       ; 005ab410 | LAB_005ab3ee
        ;   XREF to: 005ab3ee (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005ab412
        ;   Label: LAB_005ab412
    TEST EBX,EBX                        ; 005ab414
    JLE 0x005ab447                      ; 005ab416 | LAB_005ab447
        ;   XREF to: 005ab447 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 005ab418
        ;   Label: LAB_005ab418
    PUSH EAX                            ; 005ab41a
    PUSH ESI                            ; 005ab41b
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 ; 005ab41c | void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
        ;   XREF to: 005ab370 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ab421
    CMP dword ptr [ESP + 0x100],0x1     ; 005ab424
    JNZ 0x005ab442                      ; 005ab42c | LAB_005ab442
        ;   XREF to: 005ab442 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x110],0x0     ; 005ab42e
    JZ 0x005ab442                       ; 005ab436 | LAB_005ab442
        ;   XREF to: 005ab442 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x114],0x0     ; 005ab438
    JZ 0x005ab49f                       ; 005ab440 | LAB_005ab49f
        ;   XREF to: 005ab49f (CONDITIONAL_JUMP)
    INC ESI                             ; 005ab442
        ;   Label: LAB_005ab442
    CMP ESI,EBX                         ; 005ab443
    JL 0x005ab418                       ; 005ab445 | LAB_005ab418
        ;   XREF to: 005ab418 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005ab447
        ;   Label: LAB_005ab447
    TEST EBX,EBX                        ; 005ab449
    JLE 0x005ab477                      ; 005ab44b | LAB_005ab477
        ;   XREF to: 005ab477 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x348]               ; 005ab44d
        ;   Label: LAB_005ab44d
    PUSH EAX                            ; 005ab454
    PUSH ESI                            ; 005ab455
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 ; 005ab456 | void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
        ;   XREF to: 005ab370 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ab45b
    CMP dword ptr [ESP + 0x448],0x1     ; 005ab45e
    JNZ 0x005ab472                      ; 005ab466 | LAB_005ab472
        ;   XREF to: 005ab472 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x45c],0x0     ; 005ab468
    JZ 0x005ab49f                       ; 005ab470 | LAB_005ab49f
        ;   XREF to: 005ab49f (CONDITIONAL_JUMP)
    INC ESI                             ; 005ab472
        ;   Label: LAB_005ab472
    CMP ESI,EBX                         ; 005ab473
    JL 0x005ab44d                       ; 005ab475 | LAB_005ab44d
        ;   XREF to: 005ab44d (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005ab477
        ;   Label: LAB_005ab477
    TEST EBX,EBX                        ; 005ab479
    JLE 0x005ab49d                      ; 005ab47b | LAB_005ab49d
        ;   XREF to: 005ab49d (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x118]               ; 005ab47d
        ;   Label: LAB_005ab47d
    PUSH EAX                            ; 005ab484
    PUSH ESI                            ; 005ab485
    CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 ; 005ab486 | void sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370(int device_id, SSoundDeviceInfo * device_info)
        ;   XREF to: 005ab370 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ab48b
    CMP dword ptr [ESP + 0x218],0x0     ; 005ab48e
    JZ 0x005ab49f                       ; 005ab496 | LAB_005ab49f
        ;   XREF to: 005ab49f (CONDITIONAL_JUMP)
    INC ESI                             ; 005ab498
    CMP ESI,EBX                         ; 005ab499
    JL 0x005ab47d                       ; 005ab49b | LAB_005ab47d
        ;   XREF to: 005ab47d (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005ab49d
        ;   Label: LAB_005ab49d
    MOV EAX,ESI                         ; 005ab49f
        ;   Label: LAB_005ab49f
    ADD ESP,0x460                       ; 005ab4a1
    POP ESI                             ; 005ab4a7
    POP EBX                             ; 005ab4a8
    RET                                 ; 005ab4a9
    MOV ESI,0xffffffff                  ; 005ab4aa
        ;   Label: LAB_005ab4aa
    MOV EAX,ESI                         ; 005ab4af
    ADD ESP,0x460                       ; 005ab4b1
    POP ESI                             ; 005ab4b7
    POP EBX                             ; 005ab4b8
    RET                                 ; 005ab4b9

