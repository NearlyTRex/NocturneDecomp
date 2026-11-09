; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(CVampireBoss *this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_vampboss.cpp_FUN_005a5550 at 005a6809
;
; Referenced Globals:
;   TerminatedCString s_core_vampboss_cpp_005f8f2e
;   TerminatedCString s_CVampireBoss_chooseDestW_005f8f43
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a72e0
        ;   Label: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0
    PUSH ESI                            ; 005a72e1
    PUSH EDI                            ; 005a72e2
    PUSH EBP                            ; 005a72e3
    SUB ESP,0x24                        ; 005a72e4
    MOV EBP,dword ptr [ESP + 0x38]      ; 005a72e7
    MOV EDX,0xcb045fed                  ; 005a72eb
    LEA EDI,[EBP + 0x20]                ; 005a72f0
    MOV dword ptr [EBP + 0xbf3e4],0x0   ; 005a72f3
    XOR EBX,EBX                         ; 005a72fd
    MOV ESI,EBP                         ; 005a72ff
    MOV dword ptr [ESP + 0x14],EDX      ; 005a7301
    CMP dword ptr [ESI + 0xbf3e8],0x0   ; 005a7305
        ;   Label: LAB_005a7305
    JZ 0x005a7395                       ; 005a730c
        ;   XREF to: 005a7395 (CONDITIONAL_JUMP)  ; LAB_005a7395
    MOV EAX,[0x01d06ab4]                ; 005a7312 | DAT_01d06ab4
        ;   Label: LAB_005a7312
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a7317
    MOV EAX,dword ptr [ESI + 0xbf3e8]   ; 005a731e
    FLD float ptr [EAX + 0x20]          ; 005a7324
    FSUB float ptr [EDX + 0x20]         ; 005a7327
    FMUL ST0                            ; 005a732a
    FLD float ptr [EAX + 0x20]          ; 005a732c
    FSUB float ptr [EDI]                ; 005a732f
    FMUL ST0                            ; 005a7331
    FLD float ptr [EAX + 0x24]          ; 005a7333
    FSUB float ptr [EDX + 0x24]         ; 005a7336
    FMUL ST0                            ; 005a7339
    FLD float ptr [EAX + 0x24]          ; 005a733b
    FSUB float ptr [EDI + 0x4]          ; 005a733e
    FMUL ST0                            ; 005a7341
    FLD float ptr [EAX + 0x28]          ; 005a7343
    FXCH                                ; 005a7346
    FADDP ST3,ST0                       ; 005a7348
    FSUB float ptr [EDI + 0x8]          ; 005a734a
    FMUL ST0                            ; 005a734d
    FLD float ptr [EAX + 0x28]          ; 005a734f
    FXCH ST2                            ; 005a7352
    FADDP ST4,ST0                       ; 005a7354
    FXCH                                ; 005a7356
    FSUB float ptr [EDX + 0x28]         ; 005a7358
    FMUL ST0                            ; 005a735b
    FXCH                                ; 005a735d
    FADDP ST2,ST0                       ; 005a735f
    FADDP ST2,ST0                       ; 005a7361
    FADDP                               ; 005a7363
    FST float ptr [ESP + 0x18]          ; 005a7365
    FCOMP float ptr [ESP + 0x14]        ; 005a7369
    FNSTSW AX                           ; 005a736d
    SAHF                                ; 005a736f
    JBE 0x005a7380                      ; 005a7370
        ;   XREF to: 005a7380 (CONDITIONAL_JUMP)  ; LAB_005a7380
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a7372
    MOV dword ptr [EBP + 0xbf3e4],EBX   ; 005a7376
    MOV dword ptr [ESP + 0x14],EAX      ; 005a737c
    INC EBX                             ; 005a7380
        ;   Label: LAB_005a7380
    ADD ESI,0x4                         ; 005a7381
    CMP EBX,0x4                         ; 005a7384
    JL 0x005a7305                       ; 005a7387
        ;   XREF to: 005a7305 (CONDITIONAL_JUMP)  ; LAB_005a7305
    ADD ESP,0x24                        ; 005a738d
    POP EBP                             ; 005a7390
    POP EDI                             ; 005a7391
    POP ESI                             ; 005a7392
    POP EBX                             ; 005a7393
    RET                                 ; 005a7394
    PUSH EBX                            ; 005a7395
        ;   Label: LAB_005a7395
    MOV EAX,0x5f8f2e                    ; 005a7396 | = "..\\core\\vampboss.cpp"
    MOV EDX,0x428                       ; 005a739b
    PUSH 0x5f8f43                       ; 005a73a0 | = "CVampireBoss::chooseDestWayPoint - wa..."
    MOV [0x01d1d400],EAX                ; 005a73a5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005a73aa | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005a73b0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 005a73b5
    JMP 0x005a7312                      ; 005a73b8
        ;   XREF to: 005a7312 (UNCONDITIONAL_JUMP)  ; LAB_005a7312

