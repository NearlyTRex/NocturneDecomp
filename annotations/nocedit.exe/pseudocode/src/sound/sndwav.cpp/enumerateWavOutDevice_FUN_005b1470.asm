; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_005b1470(UINT device_id,SSoundDeviceInfo *device_info)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
; SSoundDeviceInfo * Stack[0x8]:4   device_info
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 at 005ab317
;
; Referenced Globals:
;   waveOutGetDevCapsA* g_waveOutGetDevCapsAFunc = 0021192e
;   TerminatedCString s_WavOutWrite_006524d8
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1470
        ;   Label: sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470
    PUSH ESI                            ; 005b1471
    SUB ESP,0x34                        ; 005b1472
    MOV ESI,dword ptr [ESP + 0x40]      ; 005b1475
    MOV EBX,dword ptr [ESP + 0x44]      ; 005b1479
    PUSH 0x34                           ; 005b147d
    LEA EAX,[ESP + 0x4]                 ; 005b147f
    PUSH EAX                            ; 005b1483
    PUSH ESI                            ; 005b1484
    CALL dword ptr CS:[0x611444]        ; 005b1485 | g_waveOutGetDevCapsAFunc
    TEST EAX,EAX                        ; 005b148c
    JZ 0x005b1498                       ; 005b148e
        ;   XREF to: 005b1498 (CONDITIONAL_JUMP)  ; LAB_005b1498
    XOR EAX,EAX                         ; 005b1490
    ADD ESP,0x34                        ; 005b1492
    POP ESI                             ; 005b1495
    POP EBX                             ; 005b1496
    RET                                 ; 005b1497
    PUSH EDI                            ; 005b1498
        ;   Label: LAB_005b1498
    MOV dword ptr [EBX + 0x100],EAX     ; 005b1499
    MOV dword ptr [EBX + 0x104],ESI     ; 005b149f
    MOV dword ptr [EBX + 0x108],EAX     ; 005b14a5
    PUSH 0x6524d8                       ; 005b14ab | = "WavOutWrite: "
    MOV dword ptr [EBX + 0x10c],EAX     ; 005b14b0
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005b14b6
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005b14bb
    MOV EDI,EBX                         ; 005b14be
    MOV ESI,EAX                         ; 005b14c0
    PUSH EDI                            ; 005b14c2
    MOV AL,byte ptr [ESI]               ; 005b14c3
        ;   Label: LAB_005b14c3
    MOV byte ptr [EDI],AL               ; 005b14c5
    CMP AL,0x0                          ; 005b14c7
    JZ 0x005b14db                       ; 005b14c9
        ;   XREF to: 005b14db (CONDITIONAL_JUMP)  ; LAB_005b14db
    MOV AL,byte ptr [ESI + 0x1]         ; 005b14cb
    ADD ESI,0x2                         ; 005b14ce
    MOV byte ptr [EDI + 0x1],AL         ; 005b14d1
    ADD EDI,0x2                         ; 005b14d4
    CMP AL,0x0                          ; 005b14d7
    JNZ 0x005b14c3                      ; 005b14d9
        ;   XREF to: 005b14c3 (CONDITIONAL_JUMP)  ; LAB_005b14c3
    POP EDI                             ; 005b14db
        ;   Label: LAB_005b14db
    LEA ESI,[ESP + 0xc]                 ; 005b14dc
    PUSH EDI                            ; 005b14e0
    SUB ECX,ECX                         ; 005b14e1
    DEC ECX                             ; 005b14e3
    MOV AL,0x0                          ; 005b14e4
    SCASB.REPNE ES:EDI                  ; 005b14e6
    DEC EDI                             ; 005b14e8
    MOV AL,byte ptr [ESI]               ; 005b14e9
        ;   Label: LAB_005b14e9
    MOV byte ptr [EDI],AL               ; 005b14eb
    CMP AL,0x0                          ; 005b14ed
    JZ 0x005b1501                       ; 005b14ef
        ;   XREF to: 005b1501 (CONDITIONAL_JUMP)  ; LAB_005b1501
    MOV AL,byte ptr [ESI + 0x1]         ; 005b14f1
    ADD ESI,0x2                         ; 005b14f4
    MOV byte ptr [EDI + 0x1],AL         ; 005b14f7
    ADD EDI,0x2                         ; 005b14fa
    CMP AL,0x0                          ; 005b14fd
    JNZ 0x005b14e9                      ; 005b14ff
        ;   XREF to: 005b14e9 (CONDITIONAL_JUMP)  ; LAB_005b14e9
    POP EDI                             ; 005b1501
        ;   Label: LAB_005b1501
    MOV EAX,0x1                         ; 005b1502
    POP EDI                             ; 005b1507
    ADD ESP,0x34                        ; 005b1508
    POP ESI                             ; 005b150b
    POP EBX                             ; 005b150c
    RET                                 ; 005b150d

