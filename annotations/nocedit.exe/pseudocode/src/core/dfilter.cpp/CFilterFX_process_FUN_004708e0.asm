; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dfilter.cpp_CFilterFX_process_FUN_004708e0(CFilterFx * this_ptr)
;
; Parameters:
; CFilterFx *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e31f7
;
; Referenced Globals:
;   TerminatedCString s_movscrn_raw_0061e84e
;   double g_MovieFrameRateMultiplier = 30
;   CFilterCache* g_CFilterCachePtr = 020a4c08
;   CGame* g_CGamePtr = 02d81a9c
;   CFilterCache g_CFilterCacheInstance
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004708e0
        ;   Label: core_dfilter.cpp_CFilterFX_process_FUN_004708e0
    PUSH EDI                            ; 004708e1
    SUB ESP,0xc                         ; 004708e2
    MOV EBX,dword ptr [ESP + 0x18]      ; 004708e5
    PUSH 0x61e84e                       ; 004708e9 | = "movscrn.raw" | s_movscrn_raw_0061e84e = movscrn.raw
    MOV EDX,dword ptr [0x0066efcc]      ; 004708ee | CFilterCache g_CFilterCacheInstance | CFilterCache * g_CFilterCachePtr
    PUSH EDX                            ; 004708f4 | CFilterCache g_CFilterCacheInstance
    CALL core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0 ; 004708f5 | CDemonFilter * core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0(CFilterCache * this_ptr, char * filter_name)
        ;   XREF to: 004701a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004708fa
    MOV EDI,EAX                         ; 004708fd
    TEST EAX,EAX                        ; 004708ff
    JZ 0x0047096b                       ; 00470901 | LAB_0047096b
        ;   XREF to: 0047096b (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x4],0x0       ; 00470903
    JZ 0x0047096b                       ; 00470907 | LAB_0047096b
        ;   XREF to: 0047096b (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00470909
    MOV ESI,dword ptr [0x0067b654]      ; 0047090a | CGame * g_CGamePtr
    FLD float ptr [ESI + 0x264]         ; 00470910 | g_CGameInstance.delta_time_float
    FMUL double ptr [0x0061e85e]        ; 00470916 | double g_MovieFrameRateMultiplier
    LEA EAX,[EBX + 0x8]                 ; 0047091c
    FADD float ptr [EAX]                ; 0047091f
    FSTP float ptr [EAX]                ; 00470921
    FILD dword ptr [EBX]                ; 00470923
    FCOMP float ptr [EBX + 0x8]         ; 00470925
    FNSTSW AX                           ; 00470928
    SAHF                                ; 0047092a
    JA 0x00470934                       ; 0047092b | LAB_00470934
        ;   XREF to: 00470934 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x8],0x0       ; 0047092d
    FLD float ptr [EBX + 0x8]           ; 00470934
        ;   Label: LAB_00470934
    MOV ECX,0x2000                      ; 00470937
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047093c | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EDI + 0x48]      ; 00470941
    FISTP dword ptr [ESP + 0xc]         ; 00470944
    MOV EAX,dword ptr [ESP + 0xc]       ; 00470948
    MOV ESI,dword ptr [EBX + 0x4]       ; 0047094c
    SHL EAX,0xd                         ; 0047094f
    ADD EDI,0x1000                      ; 00470952
    ADD ESI,EAX                         ; 00470958
    PUSH EDI                            ; 0047095a
    MOV EAX,ECX                         ; 0047095b
    SHR ECX,0x2                         ; 0047095d
    MOVSD.REP ES:EDI,ESI                ; 00470960
    MOV CL,AL                           ; 00470962
    AND CL,0x3                          ; 00470964
    MOVSB.REP ES:EDI,ESI                ; 00470967
    POP EDI                             ; 00470969
    POP ESI                             ; 0047096a
    ADD ESP,0xc                         ; 0047096b
        ;   Label: LAB_0047096b
    POP EDI                             ; 0047096e
    POP EBX                             ; 0047096f
    RET                                 ; 00470970

