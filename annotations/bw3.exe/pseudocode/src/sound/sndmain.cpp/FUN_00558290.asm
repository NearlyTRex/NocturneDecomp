; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00558290(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_004e94f0 at 004e9d3a
;   FUN_00558050 at 005580a2
;   FUN_005583d0 at 005583e1
;   FUN_005583f0 at 00558401
;   FUN_00558410 at 00558421
;   FUN_00559220 at 00559405
;   FUN_0055fc60 at 0055fcaf
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3aaa
;   TerminatedCString s_setSoundOutputMode_can_t_005d3abf
;   undefined4 DAT_00604228
;   undefined4 DAT_0060422c
;   undefined4 DAT_00604230
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   FUN_004e4330
;   FUN_00552970
;   FUN_005586c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558290
        ;   Label: FUN_00558290
    PUSH EDI                            ; 00558291
    PUSH EBP                            ; 00558292
    SUB ESP,0x4                         ; 00558293
    CALL FUN_005586c0                   ; 00558296
        ;   XREF to: 005586c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586c0()
    TEST EAX,EAX                        ; 0055829b
    JNZ 0x005582d0                      ; 0055829d
        ;   XREF to: 005582d0 (CONDITIONAL_JUMP)  ; LAB_005582d0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0055829f
        ;   Label: LAB_0055829f
    MOV [0x00604228],EAX                ; 005582a3 | DAT_00604228
    MOV EAX,dword ptr [ESP + 0x18]      ; 005582a8
    MOV [0x0060422c],EAX                ; 005582ac | DAT_0060422c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005582b1
    MOV EBX,dword ptr [0x02cf3280]      ; 005582b5 | DAT_02cf3280
    MOV [0x00604230],EAX                ; 005582bb | DAT_00604230
    TEST EBX,EBX                        ; 005582c0
    JNZ 0x005582f5                      ; 005582c2
        ;   XREF to: 005582f5 (CONDITIONAL_JUMP)  ; LAB_005582f5
    MOV EAX,0x1                         ; 005582c4
        ;   Label: LAB_005582c4
    ADD ESP,0x4                         ; 005582c9
        ;   Label: LAB_005582c9
    POP EBP                             ; 005582cc
    POP EDI                             ; 005582cd
    POP EBX                             ; 005582ce
    RET                                 ; 005582cf
    MOV EDX,0x5d3aaa                    ; 005582d0 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005582d0
    MOV ECX,0x148c                      ; 005582d5
    PUSH 0x5d3abf                       ; 005582da | = "setSoundOutputMode - can't do this wh..."
    MOV dword ptr [0x01d71de0],EDX      ; 005582df | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 005582e5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 005582eb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005582f0
    JMP 0x0055829f                      ; 005582f3
        ;   XREF to: 0055829f (UNCONDITIONAL_JUMP)  ; LAB_0055829f
    MOV ECX,ESP                         ; 005582f5
        ;   Label: LAB_005582f5
    PUSH ECX                            ; 005582f7
    PUSH EAX                            ; 005582f8
    MOV EDI,dword ptr [ESP + 0x20]      ; 005582f9
    PUSH EDI                            ; 005582fd
    MOV EBP,dword ptr [ESP + 0x20]      ; 005582fe
    PUSH EBP                            ; 00558302
    MOV EDX,dword ptr [EBX]             ; 00558303
    PUSH EBX                            ; 00558305
    CALL dword ptr [EDX + 0xc]          ; 00558306
    ADD ESP,0x14                        ; 00558309
    TEST EAX,EAX                        ; 0055830c
    JZ 0x005582c9                       ; 0055830e
        ;   XREF to: 005582c9 (CONDITIONAL_JUMP)  ; LAB_005582c9
    MOV EAX,dword ptr [ESP]             ; 00558310
    TEST EAX,EAX                        ; 00558313
    JLE 0x005582c4                      ; 00558315
        ;   XREF to: 005582c4 (CONDITIONAL_JUMP)  ; LAB_005582c4
    PUSH 0x4                            ; 00558317
    PUSH EAX                            ; 00558319
    CALL FUN_00552970                   ; 0055831a
        ;   XREF to: 00552970 (UNCONDITIONAL_CALL)  ; undefined FUN_00552970()
    ADD ESP,0x8                         ; 0055831f
    MOV EAX,0x1                         ; 00558322
    ADD ESP,0x4                         ; 00558327
    POP EBP                             ; 0055832a
    POP EDI                             ; 0055832b
    POP EBX                             ; 0055832c
    RET                                 ; 0055832d

