; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_005293f0(int param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_02dc8330
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005293f0
        ;   Label: sound_sndmain.cpp_FUN_005293f0
    PUSH ESI                            ; 005293f1
    PUSH EDI                            ; 005293f2
    PUSH EBP                            ; 005293f3
    MOV EBP,ESP                         ; 005293f4
    SUB ESP,0xc                         ; 005293f6
    AND ESP,0xfffffff8                  ; 005293f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005293fc
    MOV EDI,dword ptr [EBP + 0x18]      ; 005293ff
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00529402
    CMP dword ptr [EBX*0x4 + 0x2dc8360],0x0 ; 00529405
    JNZ 0x005294d2                      ; 0052940d
        ;   XREF to: 005294d2 (CONDITIONAL_JUMP)  ; LAB_005294d2
    TEST EDI,EDI                        ; 00529413
        ;   Label: LAB_00529413
    JZ 0x0052941d                       ; 00529415
        ;   XREF to: 0052941d (CONDITIONAL_JUMP)  ; LAB_0052941d
    MOV dword ptr [EDI],0x0             ; 00529417
    TEST ESI,ESI                        ; 0052941d
        ;   Label: LAB_0052941d
    JZ 0x00529427                       ; 0052941f
        ;   XREF to: 00529427 (CONDITIONAL_JUMP)  ; LAB_00529427
    MOV dword ptr [ESI],0x0             ; 00529421
    XOR EAX,EAX                         ; 00529427
        ;   Label: LAB_00529427
    MOV EBX,dword ptr [EBX*0x4 + 0x2dc8360] ; 00529429
    MOV dword ptr [ESP],EAX             ; 00529430
    MOV dword ptr [ESP + 0x4],EAX       ; 00529433
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 00529437
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_lockSound_FUN_00528800()
    MOV ECX,dword ptr [0x02dc8330]      ; 0052943c | DAT_02dc8330
    XOR EDX,EDX                         ; 00529442
    TEST ECX,ECX                        ; 00529444
    JLE 0x00529480                      ; 00529446
        ;   XREF to: 00529480 (CONDITIONAL_JUMP)  ; LAB_00529480
    FLD float ptr [EBX]                 ; 00529448
        ;   Label: LAB_00529448
    FABS                                ; 0052944a
    FLD float ptr [ESP]                 ; 0052944c
    ADD EBX,0x4                         ; 0052944f
    FXCH                                ; 00529452
    FSTP float ptr [ESP + 0x8]          ; 00529454
    FADD float ptr [ESP + 0x8]          ; 00529458
    FLD float ptr [ESP + 0x8]           ; 0052945c
    FXCH                                ; 00529460
    FSTP float ptr [ESP]                ; 00529462
    FCOMP float ptr [ESP + 0x4]         ; 00529465
    FNSTSW AX                           ; 00529469
    SAHF                                ; 0052946b
    JBE 0x00529476                      ; 0052946c
        ;   XREF to: 00529476 (CONDITIONAL_JUMP)  ; LAB_00529476
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052946e
    MOV dword ptr [ESP + 0x4],EAX       ; 00529472
    MOV EAX,[0x02dc8330]                ; 00529476 | DAT_02dc8330
        ;   Label: LAB_00529476
    INC EDX                             ; 0052947b
    CMP EDX,EAX                         ; 0052947c
    JL 0x00529448                       ; 0052947e
        ;   XREF to: 00529448 (CONDITIONAL_JUMP)  ; LAB_00529448
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00529480
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00529480
    FILD dword ptr [0x02dc8330]         ; 00529485 | DAT_02dc8330
    FDIVR float ptr [ESP]               ; 0052948b
    FLD float ptr [ESP + 0x4]           ; 0052948e
    FLD1                                ; 00529492
    FXCH ST2                            ; 00529494
    FSTP float ptr [ESP]                ; 00529496
    FXCH                                ; 00529499
    FCOMPP                              ; 0052949b
    FNSTSW AX                           ; 0052949d
    SAHF                                ; 0052949f
    JNC 0x005294aa                      ; 005294a0
        ;   XREF to: 005294aa (CONDITIONAL_JUMP)  ; LAB_005294aa
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 005294a2
    FLD float ptr [ESP]                 ; 005294aa
        ;   Label: LAB_005294aa
    FLD1                                ; 005294ad
    FCOMPP                              ; 005294af
    FNSTSW AX                           ; 005294b1
    SAHF                                ; 005294b3
    JNC 0x005294bd                      ; 005294b4
        ;   XREF to: 005294bd (CONDITIONAL_JUMP)  ; LAB_005294bd
    MOV dword ptr [ESP],0x3f800000      ; 005294b6
    TEST EDI,EDI                        ; 005294bd
        ;   Label: LAB_005294bd
    JZ 0x005294c7                       ; 005294bf
        ;   XREF to: 005294c7 (CONDITIONAL_JUMP)  ; LAB_005294c7
    MOV EDX,dword ptr [ESP + 0x4]       ; 005294c1
    MOV dword ptr [EDI],EDX             ; 005294c5
    TEST ESI,ESI                        ; 005294c7
        ;   Label: LAB_005294c7
    JNZ 0x005294e4                      ; 005294c9
        ;   XREF to: 005294e4 (CONDITIONAL_JUMP)  ; LAB_005294e4
    MOV ESP,EBP                         ; 005294cb
    POP EBP                             ; 005294cd
    POP EDI                             ; 005294ce
    POP ESI                             ; 005294cf
    POP EBX                             ; 005294d0
    RET                                 ; 005294d1
    CMP dword ptr [0x02dc8330],0x1      ; 005294d2 | DAT_02dc8330
        ;   Label: LAB_005294d2
    JL 0x00529413                       ; 005294d9
        ;   XREF to: 00529413 (CONDITIONAL_JUMP)  ; LAB_00529413
    JMP 0x00529427                      ; 005294df
        ;   XREF to: 00529427 (UNCONDITIONAL_JUMP)  ; LAB_00529427
    MOV EDX,dword ptr [ESP]             ; 005294e4
        ;   Label: LAB_005294e4
    MOV dword ptr [ESI],EDX             ; 005294e7
    MOV ESP,EBP                         ; 005294e9
    POP EBP                             ; 005294eb
    POP EDI                             ; 005294ec
    POP ESI                             ; 005294ed
    POP EBX                             ; 005294ee
    RET                                 ; 005294ef

