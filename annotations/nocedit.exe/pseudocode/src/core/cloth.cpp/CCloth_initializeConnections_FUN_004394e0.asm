; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CCloth_initializeConnections_FUN_004394e0(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_cloth.cpp_CCloth_load_FUN_00438cf0 at 00438fa1
;   core_cloth.cpp_CCloth_setup_FUN_00439710 at 004399bb
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_00618430
;   TerminatedCString s_Too_many_connecting_vert_00618442
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004394e0
        ;   Label: core_cloth.cpp_CCloth_initializeConnections_FUN_004394e0
    PUSH ESI                            ; 004394e1
    PUSH EDI                            ; 004394e2
    PUSH EBP                            ; 004394e3
    SUB ESP,0x2c                        ; 004394e4
    MOV EAX,dword ptr [ESP + 0x40]      ; 004394e7
    XOR EDX,EDX                         ; 004394eb
    MOV ECX,dword ptr [EAX + 0x104]     ; 004394ed
    MOV dword ptr [ESP + 0x28],EDX      ; 004394f3
    TEST ECX,ECX                        ; 004394f7
    JLE 0x004395de                      ; 004394f9
        ;   XREF to: 004395de (CONDITIONAL_JUMP)  ; LAB_004395de
    ADD EAX,0x56d8                      ; 004394ff
    MOV dword ptr [ESP + 0x10],EAX      ; 00439504
    MOV dword ptr [ESP + 0x20],EAX      ; 00439508
    MOV EAX,dword ptr [ESP + 0x40]      ; 0043950c
    MOV dword ptr [ESP + 0x14],EAX      ; 00439510
    IMUL EAX,dword ptr [ESP + 0x28],0x11c ; 00439514
        ;   Label: LAB_00439514
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043951c
    MOV dword ptr [EDX + 0x5708],0x0    ; 00439520
    MOV dword ptr [EDX + 0x574c],0x0    ; 0043952a
    MOV EDX,dword ptr [ESP + 0x40]      ; 00439534
    MOV EBX,dword ptr [ESP + 0x10]      ; 00439538
    XOR ECX,ECX                         ; 0043953c
    MOV ESI,dword ptr [EDX + 0x110]     ; 0043953e
    MOV dword ptr [ESP + 0x18],ECX      ; 00439544
    TEST ESI,ESI                        ; 00439548
    JLE 0x004395a7                      ; 0043954a
        ;   XREF to: 004395a7 (CONDITIONAL_JUMP)  ; LAB_004395a7
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043954c
    ADD EDX,EAX                         ; 00439550
    MOV dword ptr [ESP + 0x1c],ECX      ; 00439552
    MOV dword ptr [ESP + 0x24],EDX      ; 00439556
    MOV ESI,dword ptr [ESP + 0x40]      ; 0043955a
        ;   Label: LAB_0043955a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043955e
    MOV ESI,dword ptr [ESI + 0x114]     ; 00439562
    ADD ESI,EDI                         ; 00439568
    MOV EBP,dword ptr [ESI + 0x4]       ; 0043956a
    XOR EAX,EAX                         ; 0043956d
    TEST EBP,EBP                        ; 0043956f
    JLE 0x0043957e                      ; 00439571
        ;   XREF to: 0043957e (CONDITIONAL_JUMP)  ; LAB_0043957e
    MOV EDI,dword ptr [ESP + 0x28]      ; 00439573
    MOV EDX,ESI                         ; 00439577
    CMP EDI,dword ptr [EDX + 0x18]      ; 00439579
        ;   Label: LAB_00439579
    JNZ 0x004395e6                      ; 0043957c
        ;   XREF to: 004395e6 (CONDITIONAL_JUMP)  ; LAB_004395e6
    MOV EBP,dword ptr [ESI + 0x4]       ; 0043957e
        ;   Label: LAB_0043957e
    CMP EAX,EBP                         ; 00439581
    JNZ 0x004395f3                      ; 00439583
        ;   XREF to: 004395f3 (CONDITIONAL_JUMP)  ; LAB_004395f3
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00439585
        ;   Label: LAB_00439585
    MOV EBP,dword ptr [ESP + 0x18]      ; 00439589
    MOV EDX,dword ptr [ESP + 0x40]      ; 0043958d
    ADD EDI,0x48                        ; 00439591
    INC EBP                             ; 00439594
    MOV ECX,dword ptr [EDX + 0x110]     ; 00439595
    MOV dword ptr [ESP + 0x1c],EDI      ; 0043959b
    MOV dword ptr [ESP + 0x18],EBP      ; 0043959f
    CMP EBP,ECX                         ; 004395a3
    JL 0x0043955a                       ; 004395a5
        ;   XREF to: 0043955a (CONDITIONAL_JUMP)  ; LAB_0043955a
    MOV EBX,dword ptr [ESP + 0x10]      ; 004395a7
        ;   Label: LAB_004395a7
    MOV ESI,dword ptr [ESP + 0x14]      ; 004395ab
    MOV EDI,dword ptr [ESP + 0x28]      ; 004395af
    MOV EDX,dword ptr [ESP + 0x40]      ; 004395b3
    ADD EBX,0x11c                       ; 004395b7
    ADD ESI,0x11c                       ; 004395bd
    INC EDI                             ; 004395c3
    MOV EBP,dword ptr [EDX + 0x104]     ; 004395c4
    MOV dword ptr [ESP + 0x10],EBX      ; 004395ca
    MOV dword ptr [ESP + 0x14],ESI      ; 004395ce
    MOV dword ptr [ESP + 0x28],EDI      ; 004395d2
    CMP EDI,EBP                         ; 004395d6
    JL 0x00439514                       ; 004395d8
        ;   XREF to: 00439514 (CONDITIONAL_JUMP)  ; LAB_00439514
    ADD ESP,0x2c                        ; 004395de
        ;   Label: LAB_004395de
    POP EBP                             ; 004395e1
    POP EDI                             ; 004395e2
    POP ESI                             ; 004395e3
    POP EBX                             ; 004395e4
    RET                                 ; 004395e5
    INC EAX                             ; 004395e6
        ;   Label: LAB_004395e6
    MOV ECX,dword ptr [ESI + 0x4]       ; 004395e7
    ADD EDX,0xc                         ; 004395ea
    CMP EAX,ECX                         ; 004395ed
    JL 0x00439579                       ; 004395ef
        ;   XREF to: 00439579 (CONDITIONAL_JUMP)  ; LAB_00439579
    JMP 0x0043957e                      ; 004395f1
        ;   XREF to: 0043957e (UNCONDITIONAL_JUMP)  ; LAB_0043957e
    XOR EDI,EDI                         ; 004395f3
        ;   Label: LAB_004395f3
    TEST EBP,EBP                        ; 004395f5
    JLE 0x00439585                      ; 004395f7
        ;   XREF to: 00439585 (CONDITIONAL_JUMP)  ; LAB_00439585
    MOV EBP,ESI                         ; 004395f9
    LEA EDX,[EDI + 0x1]                 ; 004395fb
        ;   Label: LAB_004395fb
    MOV EAX,EDX                         ; 004395fe
    SAR EDX,0x1f                        ; 00439600
    IDIV dword ptr [ESI + 0x4]          ; 00439603
    IMUL EDX,EDX,0xc                    ; 00439606
    LEA EAX,[ESI + EDX*0x1]             ; 00439609
    MOV ECX,dword ptr [EBP + 0x18]      ; 0043960c
    MOV EDX,dword ptr [ESP + 0x28]      ; 0043960f
    MOV EAX,dword ptr [EAX + 0x18]      ; 00439613
    CMP ECX,EDX                         ; 00439616
    JNZ 0x00439642                      ; 00439618
        ;   XREF to: 00439642 (CONDITIONAL_JUMP)  ; LAB_00439642
    MOV ECX,EAX                         ; 0043961a
    MOV EDX,dword ptr [EBX + 0x30]      ; 0043961c
        ;   Label: LAB_0043961c
    XOR EAX,EAX                         ; 0043961f
    TEST EDX,EDX                        ; 00439621
    JLE 0x0043962c                      ; 00439623
        ;   XREF to: 0043962c (CONDITIONAL_JUMP)  ; LAB_0043962c
    MOV EDX,EBX                         ; 00439625
    CMP ECX,dword ptr [EDX + 0x34]      ; 00439627
        ;   Label: LAB_00439627
    JNZ 0x00439648                      ; 0043962a
        ;   XREF to: 00439648 (CONDITIONAL_JUMP)  ; LAB_00439648
    CMP EAX,dword ptr [EBX + 0x30]      ; 0043962c
        ;   Label: LAB_0043962c
    JZ 0x00439653                       ; 0043962f
        ;   XREF to: 00439653 (CONDITIONAL_JUMP)  ; LAB_00439653
    INC EDI                             ; 00439631
        ;   Label: LAB_00439631
    MOV EDX,dword ptr [ESI + 0x4]       ; 00439632
    ADD EBP,0xc                         ; 00439635
    CMP EDI,EDX                         ; 00439638
    JGE 0x00439585                      ; 0043963a
        ;   XREF to: 00439585 (CONDITIONAL_JUMP)  ; LAB_00439585
    JMP 0x004395fb                      ; 00439640
        ;   XREF to: 004395fb (UNCONDITIONAL_JUMP)  ; LAB_004395fb
    CMP EAX,EDX                         ; 00439642
        ;   Label: LAB_00439642
    JNZ 0x00439631                      ; 00439644
        ;   XREF to: 00439631 (CONDITIONAL_JUMP)  ; LAB_00439631
    JMP 0x0043961c                      ; 00439646
        ;   XREF to: 0043961c (UNCONDITIONAL_JUMP)  ; LAB_0043961c
    INC EAX                             ; 00439648
        ;   Label: LAB_00439648
    ADD EDX,0x4                         ; 00439649
    CMP EAX,dword ptr [EBX + 0x30]      ; 0043964c
    JL 0x00439627                       ; 0043964f
        ;   XREF to: 00439627 (CONDITIONAL_JUMP)  ; LAB_00439627
    JMP 0x0043962c                      ; 00439651
        ;   XREF to: 0043962c (UNCONDITIONAL_JUMP)  ; LAB_0043962c
    IMUL EDX,ECX,0x11c                  ; 00439653
        ;   Label: LAB_00439653
    MOV EAX,dword ptr [ESP + 0x40]      ; 00439659
    FLD float ptr [EBX + 0xc4]          ; 0043965d
    FCOMP float ptr [EDX + EAX*0x1 + 0x579c] ; 00439663
    FNSTSW AX                           ; 0043966a
    SAHF                                ; 0043966c
    JA 0x00439631                       ; 0043966d
        ;   XREF to: 00439631 (CONDITIONAL_JUMP)  ; LAB_00439631
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043966f
    MOV dword ptr [EBX + EAX*0x4 + 0x34],ECX ; 00439672
    MOV EAX,dword ptr [ESP + 0x20]      ; 00439676
    ADD EAX,EDX                         ; 0043967a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0043967c
    FLD float ptr [EDX]                 ; 00439680
    FSUB float ptr [EAX]                ; 00439682
    FSTP float ptr [ESP]                ; 00439684
    FLD float ptr [EDX + 0x4]           ; 00439687
    FSUB float ptr [EAX + 0x4]          ; 0043968a
    FST float ptr [ESP + 0x4]           ; 0043968d
    FMUL float ptr [ESP + 0x4]          ; 00439691
    FLD float ptr [ESP]                 ; 00439695
    FMUL ST0                            ; 00439698
    FLD float ptr [EDX + 0x8]           ; 0043969a
    FSUB float ptr [EAX + 0x8]          ; 0043969d
    FXCH                                ; 004396a0
    FADDP ST2,ST0                       ; 004396a2
    FST float ptr [ESP + 0x8]           ; 004396a4
    FMUL float ptr [ESP + 0x8]          ; 004396a8
    FADDP                               ; 004396ac
    FSQRT                               ; 004396ae
    MOV EAX,dword ptr [EBX + 0x30]      ; 004396b0
    FSTP float ptr [ESP + 0xc]          ; 004396b3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004396b7
    MOV dword ptr [EBX + EAX*0x4 + 0x78],EDX ; 004396bb
    MOV ECX,dword ptr [EBX + 0x30]      ; 004396bf
    INC ECX                             ; 004396c2
    MOV dword ptr [EBX + 0x30],ECX      ; 004396c3
    CMP ECX,0xf                         ; 004396c6
    JLE 0x00439631                      ; 004396c9
        ;   XREF to: 00439631 (CONDITIONAL_JUMP)  ; LAB_00439631
    MOV EDX,0x618430                    ; 004396cf | = "..\\core\\cloth.cpp"
    MOV ECX,0x1c3                       ; 004396d4
    PUSH 0x618442                       ; 004396d9 | = "Too many connecting verticies"
    MOV dword ptr [0x02f0ca48],EDX      ; 004396de | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004396e4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004396ea
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004396ef
    INC EDI                             ; 004396f2
    MOV EDX,dword ptr [ESI + 0x4]       ; 004396f3
    ADD EBP,0xc                         ; 004396f6
    CMP EDI,EDX                         ; 004396f9
    JGE 0x00439585                      ; 004396fb
        ;   XREF to: 00439585 (CONDITIONAL_JUMP)  ; LAB_00439585
    JMP 0x004395fb                      ; 00439701
        ;   XREF to: 004395fb (UNCONDITIONAL_JUMP)  ; LAB_004395fb

