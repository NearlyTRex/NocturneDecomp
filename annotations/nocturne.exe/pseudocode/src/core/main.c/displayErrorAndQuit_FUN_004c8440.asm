; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_displayErrorAndQuit_FUN_004c8440(char *format,...)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[531]:
;   cockpit_ckptutil.c_generateScrollHeightMap_FUN_0042e7b0 at 0042e96f
;   cockpit_ckptutil.c_generateTransparencySpans_FUN_00431260 at 004313a3
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480 at 0042d575
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90 at 0042ebea
;   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00430210 at 004302c4
;   cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_0042f050 at 0042f0e8
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 at 0042d29b
;   cockpit_ckptutil.c_rotateBitmap_FUN_004303d0 at 004304e8
;   cockpit_ckptutil.c_saveEdgeListFile_FUN_0042ee00 at 0042ee5e
;   cockpit_ckptutil.c_traceConnectedEdges_FUN_00430630 at 0043075b
;   ... and 521 more
;
; Referenced Globals:
;   CSound* g_CSound_PTR_005bed68 = 02dc9450
;   undefined4 DAT_01cc3700
;   char* g_CurrentFilename
;   undefined4 DAT_01cc4808
;   CSound g_CSound_02dc9450
;
; Called Functions:
;   core_sound.cpp_CSound_dtor_FUN_0052dd80
;   crt_stdio.c_vsprintf_FUN_00563a08
;   crt_watcom.c_notifyAbnormalTermination_FUN_00566f90
;   engine_2d.c_cleanupGraphicsSystem_FUN_004012a0
;   wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_00559500
;   wincore_winrun.cpp_endPeriod_FUN_00558a20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c8440
        ;   Label: core_main.c_displayErrorAndQuit_FUN_004c8440
    PUSH EDI                            ; 004c8441
    SUB ESP,0x4                         ; 004c8442
    CMP dword ptr [0x01cc4808],0x0      ; 004c8445 | DAT_01cc4808
    JNZ 0x004c84d6                      ; 004c844c
        ;   XREF to: 004c84d6 (CONDITIONAL_JUMP)  ; LAB_004c84d6
    PUSH EBX                            ; 004c8452
        ;   Label: LAB_004c8452
    LEA ESI,[ESP + 0x18]                ; 004c8453
    MOV dword ptr [ESP + 0x4],ESI       ; 004c8457
    LEA ESI,[ESP + 0x4]                 ; 004c845b
    PUSH ESI                            ; 004c845f
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c8460
    PUSH EBX                            ; 004c8464
    MOV ECX,0x1                         ; 004c8465
    PUSH 0x1cc3700                      ; 004c846a | DAT_01cc3700
    MOV dword ptr [0x01cc4808],ECX      ; 004c846f | DAT_01cc4808
    XOR ESI,ESI                         ; 004c8475
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 004c8477
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 004c847c
    MOV DH,0x5c                         ; 004c847f
    MOV dword ptr [ESP + 0x4],ESI       ; 004c8481
    MOV DL,DH                           ; 004c8485
    POP EBX                             ; 004c8487
    MOV ESI,dword ptr [0x01cc4800]      ; 004c8488 | g_CurrentFilename
        ;   Label: LAB_004c8488
    MOV AL,byte ptr [ESI]               ; 004c848e
        ;   Label: LAB_004c848e
    CMP AL,DL                           ; 004c8490
    JZ 0x004c84a6                       ; 004c8492
        ;   XREF to: 004c84a6 (CONDITIONAL_JUMP)  ; LAB_004c84a6
    CMP AL,0x0                          ; 004c8494
    JZ 0x004c84a4                       ; 004c8496
        ;   XREF to: 004c84a4 (CONDITIONAL_JUMP)  ; LAB_004c84a4
    INC ESI                             ; 004c8498
    MOV AL,byte ptr [ESI]               ; 004c8499
    CMP AL,DL                           ; 004c849b
    JZ 0x004c84a6                       ; 004c849d
        ;   XREF to: 004c84a6 (CONDITIONAL_JUMP)  ; LAB_004c84a6
    INC ESI                             ; 004c849f
    CMP AL,0x0                          ; 004c84a0
    JNZ 0x004c848e                      ; 004c84a2
        ;   XREF to: 004c848e (CONDITIONAL_JUMP)  ; LAB_004c848e
    SUB ESI,ESI                         ; 004c84a4
        ;   Label: LAB_004c84a4
    TEST ESI,ESI                        ; 004c84a6
        ;   Label: LAB_004c84a6
    JNZ 0x004c84e0                      ; 004c84a8
        ;   XREF to: 004c84e0 (CONDITIONAL_JUMP)  ; LAB_004c84e0
    MOV EDI,dword ptr [0x005bed68]      ; 004c84aa | g_CSound_PTR_005bed68
    PUSH EDI                            ; 004c84b0 | g_CSound_02dc9450
    CALL core_sound.cpp_CSound_dtor_FUN_0052dd80 ; 004c84b1
        ;   XREF to: 0052dd80 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_dtor_FUN_0052dd80(CSound * this_ptr)
    ADD ESP,0x4                         ; 004c84b6
    CALL engine_2d.c_cleanupGraphicsSystem_FUN_004012a0 ; 004c84b9
        ;   XREF to: 004012a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_cleanupGraphicsSystem_FUN_004012a0()
    CALL wincore_winrun.cpp_endPeriod_FUN_00558a20 ; 004c84be
        ;   XREF to: 00558a20 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_endPeriod_FUN_00558a20()
    PUSH 0x1cc3700                      ; 004c84c3 | DAT_01cc3700
    CALL wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_00559500 ; 004c84c8
        ;   XREF to: 00559500 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_00559500(char * message)
    CALL crt_watcom.c_notifyAbnormalTermination_FUN_00566f90 ; 004c84d6
        ;   XREF to: 00566f90 (UNCONDITIONAL_CALL)  ; void crt_watcom.c_notifyAbnormalTermination_FUN_00566f90()
        ;   Label: LAB_004c84d6
    JMP 0x004c8452                      ; 004c84db
        ;   XREF to: 004c8452 (UNCONDITIONAL_JUMP)  ; LAB_004c8452
    MOV ESI,dword ptr [0x01cc4800]      ; 004c84e0 | g_CurrentFilename
        ;   Label: LAB_004c84e0
    MOV AL,byte ptr [ESI]               ; 004c84e6
        ;   Label: LAB_004c84e6
    CMP AL,DL                           ; 004c84e8
    JZ 0x004c84fe                       ; 004c84ea
        ;   XREF to: 004c84fe (CONDITIONAL_JUMP)  ; LAB_004c84fe
    CMP AL,0x0                          ; 004c84ec
    JZ 0x004c84fc                       ; 004c84ee
        ;   XREF to: 004c84fc (CONDITIONAL_JUMP)  ; LAB_004c84fc
    INC ESI                             ; 004c84f0
    MOV AL,byte ptr [ESI]               ; 004c84f1
    CMP AL,DL                           ; 004c84f3
    JZ 0x004c84fe                       ; 004c84f5
        ;   XREF to: 004c84fe (CONDITIONAL_JUMP)  ; LAB_004c84fe
    INC ESI                             ; 004c84f7
    CMP AL,0x0                          ; 004c84f8
    JNZ 0x004c84e6                      ; 004c84fa
        ;   XREF to: 004c84e6 (CONDITIONAL_JUMP)  ; LAB_004c84e6
    SUB ESI,ESI                         ; 004c84fc
        ;   Label: LAB_004c84fc
    INC ESI                             ; 004c84fe
        ;   Label: LAB_004c84fe
    MOV dword ptr [0x01cc4800],ESI      ; 004c84ff | g_CurrentFilename
    JMP 0x004c8488                      ; 004c8505
        ;   XREF to: 004c8488 (UNCONDITIONAL_JUMP)  ; LAB_004c8488

