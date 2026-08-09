; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d7da
;
; Referenced Globals:
;   TerminatedCString s_core_vampboss_cpp_0059726b
;   TerminatedCString s_CVampireBoss_chooseDestW_00597280
;   int g_LocalHeroIndex
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e230
        ;   Label: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230
    PUSH ESI                            ; 0054e231
    PUSH EDI                            ; 0054e232
    PUSH EBP                            ; 0054e233
    SUB ESP,0x24                        ; 0054e234
    MOV EBP,dword ptr [ESP + 0x38]      ; 0054e237
    MOV EDX,0xcb045fed                  ; 0054e23b
    LEA EDI,[EBP + 0x20]                ; 0054e240
    MOV dword ptr [EBP + 0xbedb0],0x0   ; 0054e243
    XOR EBX,EBX                         ; 0054e24d
    MOV ESI,EBP                         ; 0054e24f
    MOV dword ptr [ESP + 0x14],EDX      ; 0054e251
    CMP dword ptr [ESI + 0xbedb4],0x0   ; 0054e255
        ;   Label: LAB_0054e255
    JZ 0x0054e2e5                       ; 0054e25c
        ;   XREF to: 0054e2e5 (CONDITIONAL_JUMP)  ; LAB_0054e2e5
    MOV EAX,[0x01cae0e8]                ; 0054e262 | g_LocalHeroIndex
        ;   Label: LAB_0054e262
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054e267
    MOV EAX,dword ptr [ESI + 0xbedb4]   ; 0054e26e
    FLD float ptr [EAX + 0x20]          ; 0054e274
    FSUB float ptr [EDX + 0x20]         ; 0054e277
    FMUL ST0                            ; 0054e27a
    FLD float ptr [EAX + 0x20]          ; 0054e27c
    FSUB float ptr [EDI]                ; 0054e27f
    FMUL ST0                            ; 0054e281
    FLD float ptr [EAX + 0x24]          ; 0054e283
    FSUB float ptr [EDX + 0x24]         ; 0054e286
    FMUL ST0                            ; 0054e289
    FLD float ptr [EAX + 0x24]          ; 0054e28b
    FSUB float ptr [EDI + 0x4]          ; 0054e28e
    FMUL ST0                            ; 0054e291
    FLD float ptr [EAX + 0x28]          ; 0054e293
    FXCH                                ; 0054e296
    FADDP ST3,ST0                       ; 0054e298
    FSUB float ptr [EDI + 0x8]          ; 0054e29a
    FMUL ST0                            ; 0054e29d
    FLD float ptr [EAX + 0x28]          ; 0054e29f
    FXCH ST2                            ; 0054e2a2
    FADDP ST4,ST0                       ; 0054e2a4
    FXCH                                ; 0054e2a6
    FSUB float ptr [EDX + 0x28]         ; 0054e2a8
    FMUL ST0                            ; 0054e2ab
    FXCH                                ; 0054e2ad
    FADDP ST2,ST0                       ; 0054e2af
    FADDP ST2,ST0                       ; 0054e2b1
    FADDP                               ; 0054e2b3
    FST float ptr [ESP + 0x18]          ; 0054e2b5
    FCOMP float ptr [ESP + 0x14]        ; 0054e2b9
    FNSTSW AX                           ; 0054e2bd
    SAHF                                ; 0054e2bf
    JBE 0x0054e2d0                      ; 0054e2c0
        ;   XREF to: 0054e2d0 (CONDITIONAL_JUMP)  ; LAB_0054e2d0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054e2c2
    MOV dword ptr [EBP + 0xbedb0],EBX   ; 0054e2c6
    MOV dword ptr [ESP + 0x14],EAX      ; 0054e2cc
    INC EBX                             ; 0054e2d0
        ;   Label: LAB_0054e2d0
    ADD ESI,0x4                         ; 0054e2d1
    CMP EBX,0x4                         ; 0054e2d4
    JL 0x0054e255                       ; 0054e2d7
        ;   XREF to: 0054e255 (CONDITIONAL_JUMP)  ; LAB_0054e255
    ADD ESP,0x24                        ; 0054e2dd
    POP EBP                             ; 0054e2e0
    POP EDI                             ; 0054e2e1
    POP ESI                             ; 0054e2e2
    POP EBX                             ; 0054e2e3
    RET                                 ; 0054e2e4
    PUSH EBX                            ; 0054e2e5
        ;   Label: LAB_0054e2e5
    MOV EAX,0x59726b                    ; 0054e2e6 | = "..\\core\\vampboss.cpp"
    MOV EDX,0x423                       ; 0054e2eb
    PUSH 0x597280                       ; 0054e2f0 | = "CVampireBoss::chooseDestWayPoint - wa..."
    MOV [0x01cc4800],EAX                ; 0054e2f5 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 0054e2fa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0054e300
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 0054e305
    JMP 0x0054e262                      ; 0054e308
        ;   XREF to: 0054e262 (UNCONDITIONAL_JUMP)  ; LAB_0054e262

