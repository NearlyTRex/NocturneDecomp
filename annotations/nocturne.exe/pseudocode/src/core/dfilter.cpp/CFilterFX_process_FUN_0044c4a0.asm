; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_0044c4a0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a6077
;
; Referenced Globals:
;   TerminatedCString s_movscrn_raw_0057c0f5
;   double DOUBLE_0057c105 = 30
;   undefined4 DAT_005ad54c
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c4a0
        ;   Label: core_dfilter.cpp_CFilterFX_process_FUN_0044c4a0
    PUSH EDI                            ; 0044c4a1
    SUB ESP,0xc                         ; 0044c4a2
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044c4a5
    PUSH 0x57c0f5                       ; 0044c4a9 | = "movscrn.raw"
    MOV EDX,dword ptr [0x005ad54c]      ; 0044c4ae | DAT_005ad54c
    PUSH EDX                            ; 0044c4b4
    CALL core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60 ; 0044c4b5
        ;   XREF to: 0044be60 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60()
    ADD ESP,0x8                         ; 0044c4ba
    MOV EDI,EAX                         ; 0044c4bd
    TEST EAX,EAX                        ; 0044c4bf
    JZ 0x0044c52b                       ; 0044c4c1
        ;   XREF to: 0044c52b (CONDITIONAL_JUMP)  ; LAB_0044c52b
    CMP dword ptr [EBX + 0x4],0x0       ; 0044c4c3
    JZ 0x0044c52b                       ; 0044c4c7
        ;   XREF to: 0044c52b (CONDITIONAL_JUMP)  ; LAB_0044c52b
    PUSH ESI                            ; 0044c4c9
    MOV ESI,dword ptr [0x005b9354]      ; 0044c4ca | DAT_005b9354
    FLD float ptr [ESI + 0x264]         ; 0044c4d0 | DAT_01c77850
    FMUL double ptr [0x0057c105]        ; 0044c4d6 | DOUBLE_0057c105
    LEA EAX,[EBX + 0x8]                 ; 0044c4dc
    FADD float ptr [EAX]                ; 0044c4df
    FSTP float ptr [EAX]                ; 0044c4e1
    FILD dword ptr [EBX]                ; 0044c4e3
    FCOMP float ptr [EBX + 0x8]         ; 0044c4e5
    FNSTSW AX                           ; 0044c4e8
    SAHF                                ; 0044c4ea
    JA 0x0044c4f4                       ; 0044c4eb
        ;   XREF to: 0044c4f4 (CONDITIONAL_JUMP)  ; LAB_0044c4f4
    MOV dword ptr [EBX + 0x8],0x0       ; 0044c4ed
    FLD float ptr [EBX + 0x8]           ; 0044c4f4
        ;   Label: LAB_0044c4f4
    MOV ECX,0x2000                      ; 0044c4f7
    CALL crt_math.c_round_FUN_00563a30  ; 0044c4fc
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    MOV EDI,dword ptr [EDI + 0x48]      ; 0044c501
    FISTP dword ptr [ESP + 0xc]         ; 0044c504
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044c508
    MOV ESI,dword ptr [EBX + 0x4]       ; 0044c50c
    SHL EAX,0xd                         ; 0044c50f
    ADD EDI,0x1000                      ; 0044c512
    ADD ESI,EAX                         ; 0044c518
    PUSH EDI                            ; 0044c51a
    MOV EAX,ECX                         ; 0044c51b
    SHR ECX,0x2                         ; 0044c51d
    MOVSD.REP ES:EDI,ESI                ; 0044c520
    MOV CL,AL                           ; 0044c522
    AND CL,0x3                          ; 0044c524
    MOVSB.REP ES:EDI,ESI                ; 0044c527
    POP EDI                             ; 0044c529
    POP ESI                             ; 0044c52a
    ADD ESP,0xc                         ; 0044c52b
        ;   Label: LAB_0044c52b
    POP EDI                             ; 0044c52e
    POP EBX                             ; 0044c52f
    RET                                 ; 0044c530

