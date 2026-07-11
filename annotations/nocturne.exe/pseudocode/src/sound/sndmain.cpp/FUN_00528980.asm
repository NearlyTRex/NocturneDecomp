; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528980(float param_1)
;
;
; XREF[1]:
;   FUN_005289f0 at 00528b41
;
; Referenced Globals:
;   undefined4 s_..\\sound\\sndmain.cpp_005939bd+1
;   string s_setMaxSwSoundLatency_-_can't_do_t_005939d3
;   undefined4 DAT_00593a0e
;   undefined4 DAT_00593a16
;   undefined4 DAT_005bea98
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_00528490
;
; *****************************************************************************

section .text

    CALL FUN_00528490                   ; 00528980
        ;   XREF to: 00528490 (UNCONDITIONAL_CALL)  ; undefined FUN_00528490()
        ;   Label: FUN_00528980
    TEST EAX,EAX                        ; 00528985
    JNZ 0x005289b9                      ; 00528987
        ;   XREF to: 005289b9 (CONDITIONAL_JUMP)  ; LAB_005289b9
    FLD float ptr [ESP + 0x4]           ; 00528989
        ;   Label: LAB_00528989
    FCOMP double ptr [0x00593a0e]       ; 0052898d | DAT_00593a0e
    FNSTSW AX                           ; 00528993
    SAHF                                ; 00528995
    JNC 0x005289a0                      ; 00528996
        ;   XREF to: 005289a0 (CONDITIONAL_JUMP)  ; LAB_005289a0
    MOV dword ptr [ESP + 0x4],0x3d4ccccd ; 00528998
    FLD float ptr [ESP + 0x4]           ; 005289a0
        ;   Label: LAB_005289a0
    FCOMP double ptr [0x00593a16]       ; 005289a4 | DAT_00593a16
    FNSTSW AX                           ; 005289aa
    SAHF                                ; 005289ac
    JA 0x005289de                       ; 005289ad
        ;   XREF to: 005289de (CONDITIONAL_JUMP)  ; LAB_005289de
    MOV EAX,dword ptr [ESP + 0x4]       ; 005289af
    MOV [0x005bea98],EAX                ; 005289b3 | DAT_005bea98
    RET                                 ; 005289b8
    MOV EDX,0x5939be                    ; 005289b9 | s_..\sound\sndmain.cpp_005939bd+1
        ;   Label: LAB_005289b9
    MOV ECX,0x1329                      ; 005289be
    PUSH 0x5939d3                       ; 005289c3 | = "setMaxSwSoundLatency - can't do this ..."
    MOV dword ptr [0x01cc4800],EDX      ; 005289c8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005289ce | DAT_01cc4804
    CALL FUN_004c8440                   ; 005289d4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005289d9
    JMP 0x00528989                      ; 005289dc
        ;   XREF to: 00528989 (UNCONDITIONAL_JUMP)  ; LAB_00528989
    MOV dword ptr [ESP + 0x4],0x40000000 ; 005289de
        ;   Label: LAB_005289de
    MOV EAX,dword ptr [ESP + 0x4]       ; 005289e6
    MOV [0x005bea98],EAX                ; 005289ea | DAT_005bea98
    RET                                 ; 005289ef

