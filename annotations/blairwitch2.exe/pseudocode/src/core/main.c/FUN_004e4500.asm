; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_main_c_FUN_004e4500(char *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[572]:
;   cockpit_ckptutil.c_FUN_0042c520 at 0042c593
;   cockpit_ckptutil.c_FUN_0042dae0 at 0042dc9f
;   cockpit_ckptutil.c_FUN_0042dec0 at 0042df1a
;   cockpit_ckptutil.c_FUN_0042e130 at 0042e18e
;   cockpit_ckptutil.c_FUN_0042e380 at 0042e418
;   cockpit_ckptutil.c_FUN_0042f330 at 0042f3e4
;   cockpit_ckptutil.c_FUN_0042f4f0 at 0042f608
;   cockpit_ckptutil.c_FUN_0042f750 at 0042f87b
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042c780 at 0042c88f
;   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00466ca0 at 00466f6d
;   ... and 562 more
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a8
;
; Called Functions:
;   core_sound.cpp_shutdownSoundSystem_FUN_0055a160
;   crt_stdio.c_vsprintf_FUN_005b7768
;   crt_watcom.c_notifyAbnormalTermination_FUN_005bad80
;   engine_2d.c_cleanupGraphicsSystem_FUN_00401120
;   wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_0058f5d0
;   wincore_winrun.cpp_endPeriod_FUN_0058e9d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e4500
        ;   Label: core_main.c_FUN_004e4500
    PUSH EDI                            ; 004e4501
    SUB ESP,0x4                         ; 004e4502
    CMP dword ptr [0x01d046a8],0x0      ; 004e4505 | DAT_01d046a8
    JNZ 0x004e4596                      ; 004e450c
        ;   XREF to: 004e4596 (CONDITIONAL_JUMP)  ; LAB_004e4596
    PUSH EBX                            ; 004e4512
        ;   Label: LAB_004e4512
    LEA ESI,[ESP + 0x18]                ; 004e4513
    MOV dword ptr [ESP + 0x4],ESI       ; 004e4517
    LEA ESI,[ESP + 0x4]                 ; 004e451b
    PUSH ESI                            ; 004e451f
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e4520
    PUSH EBX                            ; 004e4524
    MOV ECX,0x1                         ; 004e4525
    PUSH 0x1d035a0                      ; 004e452a
    MOV dword ptr [0x01d046a8],ECX      ; 004e452f | DAT_01d046a8
    XOR ESI,ESI                         ; 004e4535
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 004e4537
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005b7768(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004e453c
    MOV DH,0x5c                         ; 004e453f
    MOV dword ptr [ESP + 0x4],ESI       ; 004e4541
    MOV DL,DH                           ; 004e4545
    POP EBX                             ; 004e4547
    MOV ESI,dword ptr [0x01d046a0]      ; 004e4548 | DAT_01d046a0
        ;   Label: LAB_004e4548
    MOV AL,byte ptr [ESI]               ; 004e454e
        ;   Label: LAB_004e454e
    CMP AL,DL                           ; 004e4550
    JZ 0x004e4566                       ; 004e4552
        ;   XREF to: 004e4566 (CONDITIONAL_JUMP)  ; LAB_004e4566
    CMP AL,0x0                          ; 004e4554
    JZ 0x004e4564                       ; 004e4556
        ;   XREF to: 004e4564 (CONDITIONAL_JUMP)  ; LAB_004e4564
    INC ESI                             ; 004e4558
    MOV AL,byte ptr [ESI]               ; 004e4559
    CMP AL,DL                           ; 004e455b
    JZ 0x004e4566                       ; 004e455d
        ;   XREF to: 004e4566 (CONDITIONAL_JUMP)  ; LAB_004e4566
    INC ESI                             ; 004e455f
    CMP AL,0x0                          ; 004e4560
    JNZ 0x004e454e                      ; 004e4562
        ;   XREF to: 004e454e (CONDITIONAL_JUMP)  ; LAB_004e454e
    SUB ESI,ESI                         ; 004e4564
        ;   Label: LAB_004e4564
    TEST ESI,ESI                        ; 004e4566
        ;   Label: LAB_004e4566
    JNZ 0x004e45a0                      ; 004e4568
        ;   XREF to: 004e45a0 (CONDITIONAL_JUMP)  ; LAB_004e45a0
    MOV EDI,dword ptr [0x0061c068]      ; 004e456a | DAT_0061c068
    PUSH EDI                            ; 004e4570
    CALL core_sound.cpp_shutdownSoundSystem_FUN_0055a160 ; 004e4571
        ;   XREF to: 0055a160 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_shutdownSoundSystem_FUN_0055a160()
    ADD ESP,0x4                         ; 004e4576
    CALL engine_2d.c_cleanupGraphicsSystem_FUN_00401120 ; 004e4579
        ;   XREF to: 00401120 (UNCONDITIONAL_CALL)  ; void engine_2d.c_cleanupGraphicsSystem_FUN_00401120()
    CALL wincore_winrun.cpp_endPeriod_FUN_0058e9d0 ; 004e457e
        ;   XREF to: 0058e9d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_endPeriod_FUN_0058e9d0()
    PUSH 0x1d035a0                      ; 004e4583
    CALL wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_0058f5d0 ; 004e4588
        ;   XREF to: 0058f5d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_0058f5d0(char * message)
    ADD ESP,0x4                         ; 004e458d
    ADD ESP,0x4                         ; 004e4590
    POP EDI                             ; 004e4593
    POP ESI                             ; 004e4594
    RET                                 ; 004e4595
    CALL crt_watcom.c_notifyAbnormalTermination_FUN_005bad80 ; 004e4596
        ;   XREF to: 005bad80 (UNCONDITIONAL_CALL)  ; void crt_watcom.c_notifyAbnormalTermination_FUN_005bad80()
        ;   Label: LAB_004e4596
    JMP 0x004e4512                      ; 004e459b
        ;   XREF to: 004e4512 (UNCONDITIONAL_JUMP)  ; LAB_004e4512
    MOV ESI,dword ptr [0x01d046a0]      ; 004e45a0 | DAT_01d046a0
        ;   Label: LAB_004e45a0
    MOV AL,byte ptr [ESI]               ; 004e45a6
        ;   Label: LAB_004e45a6
    CMP AL,DL                           ; 004e45a8
    JZ 0x004e45be                       ; 004e45aa
        ;   XREF to: 004e45be (CONDITIONAL_JUMP)  ; LAB_004e45be
    CMP AL,0x0                          ; 004e45ac
    JZ 0x004e45bc                       ; 004e45ae
        ;   XREF to: 004e45bc (CONDITIONAL_JUMP)  ; LAB_004e45bc
    INC ESI                             ; 004e45b0
    MOV AL,byte ptr [ESI]               ; 004e45b1
    CMP AL,DL                           ; 004e45b3
    JZ 0x004e45be                       ; 004e45b5
        ;   XREF to: 004e45be (CONDITIONAL_JUMP)  ; LAB_004e45be
    INC ESI                             ; 004e45b7
    CMP AL,0x0                          ; 004e45b8
    JNZ 0x004e45a6                      ; 004e45ba
        ;   XREF to: 004e45a6 (CONDITIONAL_JUMP)  ; LAB_004e45a6
    SUB ESI,ESI                         ; 004e45bc
        ;   Label: LAB_004e45bc
    INC ESI                             ; 004e45be
        ;   Label: LAB_004e45be
    MOV dword ptr [0x01d046a0],ESI      ; 004e45bf | DAT_01d046a0
    JMP 0x004e4548                      ; 004e45c5
        ;   XREF to: 004e4548 (UNCONDITIONAL_JUMP)  ; LAB_004e4548

