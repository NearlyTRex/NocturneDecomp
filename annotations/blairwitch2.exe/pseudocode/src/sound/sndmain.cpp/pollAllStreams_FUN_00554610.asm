; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_00554610(int paused_mode)
;
; Parameters:
; int              Stack[0x4]:4   paused_mode
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_00553580 at 005535cf
;
; Referenced Globals:
;   undefined4 DAT_005e9426
;   undefined4 DAT_005e942e
;   undefined4 DAT_005e9436
;   undefined4 DAT_005fbc30
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0054ddf0
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554610
        ;   Label: sound_sndmain.cpp_pollAllStreams_FUN_00554610
    PUSH ESI                            ; 00554611
    PUSH EBP                            ; 00554612
    MOV EBP,ESP                         ; 00554613
    SUB ESP,0x10                        ; 00554615
    AND ESP,0xfffffff8                  ; 00554618
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 0055461b
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    FLD float ptr [0x005fbc30]          ; 00554620 | DAT_005fbc30
    MOV EDX,dword ptr [EBP + 0x10]      ; 00554626
    FST double ptr [ESP]                ; 00554629
    FLD ST0                             ; 0055462c
    FADD double ptr [0x005e9426]        ; 0055462e | DAT_005e9426
    FXCH                                ; 00554634
    FADD double ptr [0x005e942e]        ; 00554636 | DAT_005e942e
    FXCH                                ; 0055463c
    FSTP float ptr [ESP + 0xc]          ; 0055463e
    FSTP float ptr [ESP + 0x8]          ; 00554642
    TEST EDX,EDX                        ; 00554646
    JNZ 0x0055467b                      ; 00554648
        ;   XREF to: 0055467b (CONDITIONAL_JUMP)  ; LAB_0055467b
    MOV EBX,0x2641924                   ; 0055464a
        ;   Label: LAB_0055464a
    LEA ESI,[EBX + 0x6b00]              ; 0055464f
    PUSH dword ptr [ESP + 0x8]          ; 00554655
        ;   Label: LAB_00554655
    PUSH dword ptr [ESP + 0x10]         ; 00554659
    PUSH EBX                            ; 0055465d
    CALL sound_sndmain.cpp_FUN_0054ddf0 ; 0055465e
        ;   XREF to: 0054ddf0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054ddf0()
    ADD EBX,0x1ac                       ; 00554663
    ADD ESP,0xc                         ; 00554669
    CMP EBX,ESI                         ; 0055466c
    JNZ 0x00554655                      ; 0055466e
        ;   XREF to: 00554655 (CONDITIONAL_JUMP)  ; LAB_00554655
    CALL sound_sndmain.cpp_FUN_00551440 ; 00554670
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    MOV ESP,EBP                         ; 00554675
    POP EBP                             ; 00554677
    POP ESI                             ; 00554678
    POP EBX                             ; 00554679
    RET                                 ; 0055467a
    FLD double ptr [ESP]                ; 0055467b
        ;   Label: LAB_0055467b
    MOV EBX,dword ptr [0x005fbc30]      ; 0055467e | DAT_005fbc30
    FADD double ptr [0x005e9436]        ; 00554684 | DAT_005e9436
    MOV dword ptr [ESP + 0x8],EBX       ; 0055468a
    FSTP float ptr [ESP + 0xc]          ; 0055468e
    JMP 0x0055464a                      ; 00554692
        ;   XREF to: 0055464a (UNCONDITIONAL_JUMP)  ; LAB_0055464a

