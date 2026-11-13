; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_openCdAudio_FUN_005546a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0263cf14
;   undefined4 DAT_0263cf18
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005546a0
        ;   Label: sound_sndmain.cpp_openCdAudio_FUN_005546a0
    PUSH ESI                            ; 005546a1
    PUSH EDI                            ; 005546a2
    PUSH EBP                            ; 005546a3
    SUB ESP,0x20                        ; 005546a4
    MOV EDX,dword ptr [0x0263cf14]      ; 005546a7 | DAT_0263cf14
    TEST EDX,EDX                        ; 005546ad
    JZ 0x005546be                       ; 005546af
        ;   XREF to: 005546be (CONDITIONAL_JUMP)  ; LAB_005546be
    MOV EAX,0x1                         ; 005546b1
    ADD ESP,0x20                        ; 005546b6
    POP EBP                             ; 005546b9
    POP EDI                             ; 005546ba
    POP ESI                             ; 005546bb
    POP EBX                             ; 005546bc
    RET                                 ; 005546bd
    PUSH 0x14                           ; 005546be
        ;   Label: LAB_005546be
    PUSH EDX                            ; 005546c0
    LEA EAX,[ESP + 0x8]                 ; 005546c1
    PUSH EAX                            ; 005546c5
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005546c6
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005546cb
    MOV EAX,ESP                         ; 005546ce
    PUSH EAX                            ; 005546d0
    PUSH 0x2102                         ; 005546d1
    PUSH 0x803                          ; 005546d6
    XOR EBX,EBX                         ; 005546db
    MOV ECX,0x5e943e                    ; 005546dd
    PUSH EBX                            ; 005546e2
    MOV dword ptr [ESP + 0x18],ECX      ; 005546e3
    MOV dword ptr [ESP + 0x14],EBX      ; 005546e7
    CALL dword ptr CS:[0x5c843c]        ; 005546eb
    TEST EAX,EAX                        ; 005546f2
    JNZ 0x0055474c                      ; 005546f4
        ;   XREF to: 0055474c (CONDITIONAL_JUMP)  ; LAB_0055474c
    PUSH 0xc                            ; 005546f6
    PUSH EBX                            ; 005546f8
    LEA EAX,[ESP + 0x1c]                ; 005546f9
    PUSH EAX                            ; 005546fd
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005546fe
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00554703
    LEA EAX,[ESP + 0x14]                ; 00554706
    PUSH EAX                            ; 0055470a
    PUSH 0x400                          ; 0055470b
    PUSH 0x80d                          ; 00554710
    MOV EDI,dword ptr [ESP + 0x10]      ; 00554715
    MOV ESI,0xa                         ; 00554719
    PUSH EDI                            ; 0055471e
    MOV dword ptr [ESP + 0x28],ESI      ; 0055471f
    CALL dword ptr CS:[0x5c843c]        ; 00554723
    TEST EAX,EAX                        ; 0055472a
    JNZ 0x00554763                      ; 0055472c
        ;   XREF to: 00554763 (CONDITIONAL_JUMP)  ; LAB_00554763
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055472e
    MOV EBP,0x1                         ; 00554732
    MOV [0x0263cf18],EAX                ; 00554737 | DAT_0263cf18
    MOV dword ptr [0x0263cf14],EBP      ; 0055473c | DAT_0263cf14
    MOV EAX,EBP                         ; 00554742
    ADD ESP,0x20                        ; 00554744
    POP EBP                             ; 00554747
    POP EDI                             ; 00554748
    POP ESI                             ; 00554749
    POP EBX                             ; 0055474a
    RET                                 ; 0055474b
    PUSH 0x5e9446                       ; 0055474c
        ;   Label: LAB_0055474c
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00554751
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 00554756
    XOR EAX,EAX                         ; 00554759
    ADD ESP,0x20                        ; 0055475b
    POP EBP                             ; 0055475e
    POP EDI                             ; 0055475f
    POP ESI                             ; 00554760
    POP EBX                             ; 00554761
    RET                                 ; 00554762
    PUSH 0x5e945e                       ; 00554763
        ;   Label: LAB_00554763
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00554768
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 0055476d
    XOR EAX,EAX                         ; 00554770
    ADD ESP,0x20                        ; 00554772
    POP EBP                             ; 00554775
    POP EDI                             ; 00554776
    POP ESI                             ; 00554777
    POP EBX                             ; 00554778
    RET                                 ; 00554779

