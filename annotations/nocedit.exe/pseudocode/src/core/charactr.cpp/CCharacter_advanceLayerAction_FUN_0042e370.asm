; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
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
;   core_scat.cpp_FUN_00558060 at 00558111
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c530f
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_006174de
;   TerminatedCString s_CCharacter_advanceLayerA_006174f3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e370
        ;   Label: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
    PUSH ESI                            ; 0042e371
    PUSH EDI                            ; 0042e372
    PUSH EBP                            ; 0042e373
    SUB ESP,0x20                        ; 0042e374
    MOV EBX,dword ptr [ESP + 0x34]      ; 0042e377
    MOV ESI,dword ptr [ESP + 0x38]      ; 0042e37b
    MOV EDX,dword ptr [EBX + 0x2a8c]    ; 0042e37f
    TEST EDX,EDX                        ; 0042e385
    JL 0x0042e391                       ; 0042e387
        ;   XREF to: 0042e391 (CONDITIONAL_JUMP)  ; LAB_0042e391
    CMP EDX,dword ptr [EBX + 0x2628]    ; 0042e389
    JL 0x0042e3b4                       ; 0042e38f
        ;   XREF to: 0042e3b4 (CONDITIONAL_JUMP)  ; LAB_0042e3b4
    MOV EDI,0x6174de                    ; 0042e391 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042e391
    MOV EBP,0xeec                       ; 0042e396
    PUSH 0x6174f3                       ; 0042e39b | = "CCharacter::advanceLayerAction - inva..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0042e3a0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0042e3a6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0042e3ac
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0042e3b1
    MOV EAX,dword ptr [EBX + 0x2a8c]    ; 0042e3b4
        ;   Label: LAB_0042e3b4
    SHL EAX,0x3                         ; 0042e3ba
    FLD float ptr [EBX + 0x2a90]        ; 0042e3bd
    MOV EDX,EAX                         ; 0042e3c3
    SHL EAX,0x3                         ; 0042e3c5
    LEA ECX,[EBX + 0x262c]              ; 0042e3c8
    SUB EAX,EDX                         ; 0042e3ce
    FLDZ                                ; 0042e3d0
    ADD ECX,EAX                         ; 0042e3d2
    FCOMPP                              ; 0042e3d4
    FNSTSW AX                           ; 0042e3d6
    SAHF                                ; 0042e3d8
    JBE 0x0042e3e5                      ; 0042e3d9
        ;   XREF to: 0042e3e5 (CONDITIONAL_JUMP)  ; LAB_0042e3e5
    MOV dword ptr [EBX + 0x2a90],0x0    ; 0042e3db
    FLD float ptr [EBX + 0x2a90]        ; 0042e3e5
        ;   Label: LAB_0042e3e5
    FLD1                                ; 0042e3eb
    FCOMPP                              ; 0042e3ed
    FNSTSW AX                           ; 0042e3ef
    SAHF                                ; 0042e3f1
    JNC 0x0042e3fe                      ; 0042e3f2
        ;   XREF to: 0042e3fe (CONDITIONAL_JUMP)  ; LAB_0042e3fe
    MOV dword ptr [EBX + 0x2a90],0x3f800000 ; 0042e3f4
    FLD float ptr [EBX + 0x2a90]        ; 0042e3fe
        ;   Label: LAB_0042e3fe
    FLD ST0                             ; 0042e404
    FLD1                                ; 0042e406
    FSUBRP ST2,ST0                      ; 0042e408
    FMUL float ptr [ECX + 0x34]         ; 0042e40a
    FLD float ptr [ECX + 0x34]          ; 0042e40d
    FMULP ST2                           ; 0042e410
    MOV EDX,dword ptr [ECX + 0x28]      ; 0042e412
    FSTP float ptr [ESP + 0x14]         ; 0042e415
    FSTP float ptr [ESP + 0xc]          ; 0042e419
    TEST EDX,EDX                        ; 0042e41d
    JNZ 0x0042e486                      ; 0042e41f
        ;   XREF to: 0042e486 (CONDITIONAL_JUMP)  ; LAB_0042e486
    MOV EDX,dword ptr [ECX + 0x4]       ; 0042e421
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042e424
    ADD EAX,EDX                         ; 0042e42b
    SHL EAX,0x4                         ; 0042e42d
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0042e430
    ADD EAX,EBX                         ; 0042e434
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0xb7e4] ; 0042e436
    MOV EDX,dword ptr [ECX]             ; 0042e43d
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e43f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042e443
    ADD EAX,EDX                         ; 0042e44a
    SHL EAX,0x4                         ; 0042e44c
    ADD EAX,EBX                         ; 0042e44f
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0xb7e4] ; 0042e451
    FLD float ptr [ESP + 0x4]           ; 0042e458
    MOV dword ptr [ESP + 0x8],EAX       ; 0042e45c
    FADD float ptr [ESP + 0xc]          ; 0042e460
    FLD float ptr [ESP + 0x8]           ; 0042e464
    FADD float ptr [ESP + 0x14]         ; 0042e468
    FXCH                                ; 0042e46c
    FSTP float ptr [ESP]                ; 0042e46e
    FST float ptr [ESP + 0x10]          ; 0042e471
    FCOMP float ptr [ESP]               ; 0042e475
    FNSTSW AX                           ; 0042e478
    SAHF                                ; 0042e47a
    JNC 0x0042e4fd                      ; 0042e47b
        ;   XREF to: 0042e4fd (CONDITIONAL_JUMP)  ; LAB_0042e4fd
    MOV EDX,0xffffffff                  ; 0042e481
        ;   Label: LAB_0042e481
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042e486
        ;   Label: LAB_0042e486
    MOV dword ptr [ESP + 0x18],EAX      ; 0042e48a
    TEST EDX,EDX                        ; 0042e48e
    JL 0x0042e52e                       ; 0042e490
        ;   XREF to: 0042e52e (CONDITIONAL_JUMP)  ; LAB_0042e52e
    FLD float ptr [ESI]                 ; 0042e496
        ;   Label: LAB_0042e496
    FCOMP float ptr [ESP + 0x18]        ; 0042e498
    FNSTSW AX                           ; 0042e49c
    SAHF                                ; 0042e49e
    JNC 0x0042e53b                      ; 0042e49f
        ;   XREF to: 0042e53b (CONDITIONAL_JUMP)  ; LAB_0042e53b
    MOV dword ptr [ESP + 0x1c],EDX      ; 0042e4a5
    FILD dword ptr [ESP + 0x1c]         ; 0042e4a9
    FMUL float ptr [ESI]                ; 0042e4ad
    FDIV float ptr [ECX + 0x34]         ; 0042e4af
    FADD float ptr [EBX + 0x2a90]       ; 0042e4b2
    FST float ptr [EBX + 0x2a90]        ; 0042e4b8
    FLDZ                                ; 0042e4be
    FCOMPP                              ; 0042e4c0
    FNSTSW AX                           ; 0042e4c2
    SAHF                                ; 0042e4c4
    JBE 0x0042e4d1                      ; 0042e4c5
        ;   XREF to: 0042e4d1 (CONDITIONAL_JUMP)  ; LAB_0042e4d1
    MOV dword ptr [EBX + 0x2a90],0x0    ; 0042e4c7
    FLD float ptr [EBX + 0x2a90]        ; 0042e4d1
        ;   Label: LAB_0042e4d1
    FLD1                                ; 0042e4d7
    FCOMPP                              ; 0042e4d9
    FNSTSW AX                           ; 0042e4db
    SAHF                                ; 0042e4dd
    JNC 0x0042e4ea                      ; 0042e4de
        ;   XREF to: 0042e4ea (CONDITIONAL_JUMP)  ; LAB_0042e4ea
    MOV dword ptr [EBX + 0x2a90],0x3f800000 ; 0042e4e0
    MOV EAX,0xffffffff                  ; 0042e4ea
        ;   Label: LAB_0042e4ea
    MOV dword ptr [ESI],0x0             ; 0042e4ef
    ADD ESP,0x20                        ; 0042e4f5
    POP EBP                             ; 0042e4f8
    POP EDI                             ; 0042e4f9
    POP ESI                             ; 0042e4fa
    POP EBX                             ; 0042e4fb
    RET                                 ; 0042e4fc
    FLD float ptr [ESP]                 ; 0042e4fd
        ;   Label: LAB_0042e4fd
    FCOMP float ptr [ESP + 0x10]        ; 0042e500
    FNSTSW AX                           ; 0042e504
    SAHF                                ; 0042e506
    JNC 0x0042e513                      ; 0042e507
        ;   XREF to: 0042e513 (CONDITIONAL_JUMP)  ; LAB_0042e513
    MOV EDX,0x1                         ; 0042e509
    JMP 0x0042e486                      ; 0042e50e
        ;   XREF to: 0042e486 (UNCONDITIONAL_JUMP)  ; LAB_0042e486
    FLD float ptr [ESP + 0x8]           ; 0042e513
        ;   Label: LAB_0042e513
    FCOMP float ptr [ESP + 0x4]         ; 0042e517
    FNSTSW AX                           ; 0042e51b
    SAHF                                ; 0042e51d
    JC 0x0042e481                       ; 0042e51e
        ;   XREF to: 0042e481 (CONDITIONAL_JUMP)  ; LAB_0042e481
    MOV EDX,0x1                         ; 0042e524
    JMP 0x0042e486                      ; 0042e529
        ;   XREF to: 0042e486 (UNCONDITIONAL_JUMP)  ; LAB_0042e486
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042e52e
        ;   Label: LAB_0042e52e
    MOV dword ptr [ESP + 0x18],EAX      ; 0042e532
    JMP 0x0042e496                      ; 0042e536
        ;   XREF to: 0042e496 (UNCONDITIONAL_JUMP)  ; LAB_0042e496
    FLD float ptr [ESI]                 ; 0042e53b
        ;   Label: LAB_0042e53b
    FSUB float ptr [ESP + 0x18]         ; 0042e53d
    FSTP float ptr [ESI]                ; 0042e541
    TEST EDX,EDX                        ; 0042e543
    JL 0x0042e55c                       ; 0042e545
        ;   XREF to: 0042e55c (CONDITIONAL_JUMP)  ; LAB_0042e55c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0042e547
    MOV dword ptr [EBX + 0x2a90],0x3f800000 ; 0042e54a
    ADD ESP,0x20                        ; 0042e554
    POP EBP                             ; 0042e557
    POP EDI                             ; 0042e558
    POP ESI                             ; 0042e559
    POP EBX                             ; 0042e55a
    RET                                 ; 0042e55b
    MOV EAX,dword ptr [ECX]             ; 0042e55c
        ;   Label: LAB_0042e55c
    MOV dword ptr [EBX + 0x2a90],0x0    ; 0042e55e
    ADD ESP,0x20                        ; 0042e568
    POP EBP                             ; 0042e56b
    POP EDI                             ; 0042e56c
    POP ESI                             ; 0042e56d
    POP EBX                             ; 0042e56e
    RET                                 ; 0042e56f

