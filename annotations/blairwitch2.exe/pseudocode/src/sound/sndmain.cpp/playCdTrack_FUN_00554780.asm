; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_playCdTrack_FUN_00554780(int track,float start_seconds)
;
; Parameters:
; int              Stack[0x4]:4   track
; float            Stack[0x8]:4   start_seconds
;
; Referenced Globals:
;   undefined4 DAT_005e9496
;   undefined4 DAT_005e949a
;   undefined4 DAT_005e949e
;   undefined4 DAT_0263cf14
;   undefined4 DAT_0263cf18
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;   crt_memory.c_memset_FUN_005b77c0
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554780
        ;   Label: sound_sndmain.cpp_playCdTrack_FUN_00554780
    PUSH ESI                            ; 00554781
    PUSH EDI                            ; 00554782
    PUSH EBP                            ; 00554783
    SUB ESP,0x54                        ; 00554784
    MOV ESI,dword ptr [ESP + 0x68]      ; 00554787
    MOV EDX,dword ptr [0x0263cf14]      ; 0055478b | DAT_0263cf14
    TEST EDX,EDX                        ; 00554791
    JZ 0x005548a2                       ; 00554793
        ;   XREF to: 005548a2 (CONDITIONAL_JUMP)  ; LAB_005548a2
    FLD float ptr [ESP + 0x6c]          ; 00554799
        ;   Label: LAB_00554799
    FLD ST0                             ; 0055479d
    FMUL float ptr [0x005e9496]         ; 0055479f | DAT_005e9496
    CALL crt_math.c_round_FUN_005b7ff0  ; 005547a5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x44]        ; 005547aa
    MOV EAX,dword ptr [ESP + 0x44]      ; 005547ae
    MOV dword ptr [ESP + 0x50],EAX      ; 005547b2
    FILD dword ptr [ESP + 0x50]         ; 005547b6
    FMUL float ptr [0x005e949a]         ; 005547ba | DAT_005e949a
    FLD ST1                             ; 005547c0
    FSTP double ptr [ESP + 0x34]        ; 005547c2
    MOV EDX,dword ptr [ESP + 0x38]      ; 005547c6
    MOV ECX,dword ptr [ESP + 0x34]      ; 005547ca
    PUSH EDX                            ; 005547ce
    FSUBP                               ; 005547cf
    PUSH ECX                            ; 005547d1
    CALL crt_math.c_round_FUN_005b7ff0  ; 005547d2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x48]        ; 005547d7
    CALL crt_math.c_floor_FUN_005b84d0  ; 005547db
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x34],EAX      ; 005547e0
    MOV dword ptr [ESP + 0x38],EDX      ; 005547e4
    FLD double ptr [ESP + 0x34]         ; 005547e8
    ADD ESP,0x8                         ; 005547ec
    FSUBR double ptr [ESP + 0x34]       ; 005547ef
    FMUL double ptr [0x005e949e]        ; 005547f3 | DAT_005e949e
    MOV EBX,ESI                         ; 005547f9
    XOR EDI,EDI                         ; 005547fb
    PUSH 0xc                            ; 005547fd
    INC ESI                             ; 005547ff
    LEA EAX,[ESP + 0x24]                ; 00554800
    PUSH EDI                            ; 00554804
    MOV dword ptr [ESP + 0x50],ESI      ; 00554805
    MOV dword ptr [ESP + 0x54],EDI      ; 00554809
    PUSH EAX                            ; 0055480d
    CALL crt_math.c_round_FUN_005b7ff0  ; 0055480e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x48]        ; 00554813
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00554817
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055481c
    XOR EAX,EAX                         ; 0055481f
    XOR EDX,EDX                         ; 00554821
    MOV AX,word ptr [ESP + 0x3c]        ; 00554823
    MOV DL,byte ptr [ESP + 0x40]        ; 00554828
    SHL EAX,0x8                         ; 0055482c
    OR EDX,EAX                          ; 0055482f
    XOR EAX,EAX                         ; 00554831
    MOV AX,word ptr [ESP + 0x44]        ; 00554833
    SHL EDX,0x10                        ; 00554838
    SHL EAX,0x8                         ; 0055483b
    AND EBX,0xff                        ; 0055483e
    OR EAX,EBX                          ; 00554844
    OR EAX,EDX                          ; 00554846
    MOV EBX,EDI                         ; 00554848
    MOV dword ptr [ESP + 0x24],EAX      ; 0055484a
    XOR EDX,EDX                         ; 0055484e
    SHL EBX,0x8                         ; 00554850
    MOV DL,byte ptr [ESP + 0x4c]        ; 00554853
    XOR EAX,EAX                         ; 00554857
    OR EBX,EDX                          ; 00554859
    XOR EDX,EDX                         ; 0055485b
    SHL EAX,0x8                         ; 0055485d
    MOV DL,byte ptr [ESP + 0x48]        ; 00554860
    SHL EBX,0x10                        ; 00554864
    OR EAX,EDX                          ; 00554867
    OR EAX,EBX                          ; 00554869
    MOV dword ptr [ESP + 0x28],EAX      ; 0055486b
    LEA EAX,[ESP + 0x20]                ; 0055486f
    PUSH EAX                            ; 00554873
    PUSH 0xc                            ; 00554874
    PUSH 0x806                          ; 00554876
    MOV EBP,dword ptr [0x0263cf18]      ; 0055487b | DAT_0263cf18
    PUSH EBP                            ; 00554881
    MOV dword ptr [ESP + 0x30],EDI      ; 00554882
    CALL dword ptr CS:[0x5c843c]        ; 00554886
    TEST EAX,EAX                        ; 0055488d
    JNZ 0x00554948                      ; 0055488f
        ;   XREF to: 00554948 (CONDITIONAL_JUMP)  ; LAB_00554948
    MOV EAX,0x1                         ; 00554895
        ;   Label: LAB_00554895
    ADD ESP,0x54                        ; 0055489a
    POP EBP                             ; 0055489d
    POP EDI                             ; 0055489e
    POP ESI                             ; 0055489f
    POP EBX                             ; 005548a0
    RET                                 ; 005548a1
    PUSH 0x14                           ; 005548a2
        ;   Label: LAB_005548a2
    PUSH EDX                            ; 005548a4
    LEA EAX,[ESP + 0x8]                 ; 005548a5
    PUSH EAX                            ; 005548a9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005548aa
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005548af
    MOV EAX,ESP                         ; 005548b2
    PUSH EAX                            ; 005548b4
    PUSH 0x2102                         ; 005548b5
    PUSH 0x803                          ; 005548ba
    XOR EBX,EBX                         ; 005548bf
    MOV ECX,0x5e943e                    ; 005548c1
    PUSH EBX                            ; 005548c6
    MOV dword ptr [ESP + 0x18],ECX      ; 005548c7
    MOV dword ptr [ESP + 0x14],EBX      ; 005548cb
    CALL dword ptr CS:[0x5c843c]        ; 005548cf
    TEST EAX,EAX                        ; 005548d6
    JNZ 0x00554929                      ; 005548d8
        ;   XREF to: 00554929 (CONDITIONAL_JUMP)  ; LAB_00554929
    PUSH 0xc                            ; 005548da
    PUSH EBX                            ; 005548dc
    LEA EAX,[ESP + 0x1c]                ; 005548dd
    PUSH EAX                            ; 005548e1
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005548e2
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005548e7
    LEA EAX,[ESP + 0x14]                ; 005548ea
    PUSH EAX                            ; 005548ee
    PUSH 0x400                          ; 005548ef
    PUSH 0x80d                          ; 005548f4
    MOV EBP,dword ptr [ESP + 0x10]      ; 005548f9
    MOV EDI,0xa                         ; 005548fd
    PUSH EBP                            ; 00554902
    MOV dword ptr [ESP + 0x28],EDI      ; 00554903
    CALL dword ptr CS:[0x5c843c]        ; 00554907
    TEST EAX,EAX                        ; 0055490e
    JZ 0x00554930                       ; 00554910
        ;   XREF to: 00554930 (CONDITIONAL_JUMP)  ; LAB_00554930
    PUSH 0x5e945e                       ; 00554912
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00554917
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
        ;   Label: LAB_00554917
    ADD ESP,0x4                         ; 0055491c
    XOR EAX,EAX                         ; 0055491f
    ADD ESP,0x54                        ; 00554921
    POP EBP                             ; 00554924
    POP EDI                             ; 00554925
    POP ESI                             ; 00554926
    POP EBX                             ; 00554927
    RET                                 ; 00554928
    PUSH 0x5e9446                       ; 00554929
        ;   Label: LAB_00554929
    JMP 0x00554917                      ; 0055492e
        ;   XREF to: 00554917 (UNCONDITIONAL_JUMP)  ; LAB_00554917
    MOV EAX,dword ptr [ESP + 0x4]       ; 00554930
        ;   Label: LAB_00554930
    MOV [0x0263cf18],EAX                ; 00554934 | DAT_0263cf18
    MOV dword ptr [0x0263cf14],0x1      ; 00554939 | DAT_0263cf14
    JMP 0x00554799                      ; 00554943
        ;   XREF to: 00554799 (UNCONDITIONAL_JUMP)  ; LAB_00554799
    LEA EAX,[ESP + 0x20]                ; 00554948
        ;   Label: LAB_00554948
    PUSH EAX                            ; 0055494c
    PUSH 0x5                            ; 0055494d
    PUSH 0x806                          ; 0055494f
    MOV EAX,[0x0263cf18]                ; 00554954 | DAT_0263cf18
    PUSH EAX                            ; 00554959
    CALL dword ptr CS:[0x5c843c]        ; 0055495a
    TEST EAX,EAX                        ; 00554961
    JZ 0x00554895                       ; 00554963
        ;   XREF to: 00554895 (CONDITIONAL_JUMP)  ; LAB_00554895
    PUSH 0x5e947b                       ; 00554969
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 0055496e
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 00554973
    XOR EAX,EAX                         ; 00554976
    ADD ESP,0x54                        ; 00554978
    POP EBP                             ; 0055497b
    POP EDI                             ; 0055497c
    POP ESI                             ; 0055497d
    POP EBX                             ; 0055497e
    RET                                 ; 0055497f

