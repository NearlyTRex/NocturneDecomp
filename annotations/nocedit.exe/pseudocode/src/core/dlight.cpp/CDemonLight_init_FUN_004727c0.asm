; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_init_FUN_004727c0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[6]:
;   core_boxactor.cpp_CLightActor_setup_FUN_00422a20 at 00422a3e
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db1ac
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e271
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539167
;   core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50 at 0057ae9d
;   core_setutil.cpp_C3DSLight_create_FUN_00586a90 at 00586ae8
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061ee4b
;   TerminatedCString s_core_dlight_cpp_0061ee5e
;   TerminatedCString s_CDemonCamera_init_Unable_0061ee71
;   TerminatedCString s_core_dlight_cpp_0061eea3
;   double DOUBLE_0061eebb = 7
;   CDemonFilter* g_GlobalFilters = 020a4878
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
;   core_dlight.cpp_CDemonLight_free_FUN_004728b0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004727c0
        ;   Label: core_dlight.cpp_CDemonLight_init_FUN_004727c0
    PUSH EBP                            ; 004727c1
    SUB ESP,0x4                         ; 004727c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004727c5
    PUSH EBX                            ; 004727c9
    CALL core_dlight.cpp_CDemonLight_free_FUN_004728b0 ; 004727ca
        ;   XREF to: 004728b0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_free_FUN_004728b0(CDemonLight * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 004727cf
    IMUL EDX,dword ptr [EBX + 0x1cc4]   ; 004727d5
    ADD ESP,0x4                         ; 004727dc
    PUSH 0x6b                           ; 004727df
    ADD EDX,EDX                         ; 004727e1
    PUSH 0x61ee4b                       ; 004727e3 | = "..\\core\\dlight.cpp"
    ADD EDX,0x210                       ; 004727e8
    PUSH EDX                            ; 004727ee
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004727ef
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004727f4
    MOV dword ptr [EBX + 0x2f98],EAX    ; 004727f7
    TEST EAX,EAX                        ; 004727fd
    JZ 0x0047287a                       ; 004727ff
        ;   XREF to: 0047287a (CONDITIONAL_JUMP)  ; LAB_0047287a
    MOV EAX,dword ptr [EBX + 0x2f98]    ; 00472801
        ;   Label: LAB_00472801
    ADD EAX,0x10                        ; 00472807
    AND AL,0xf0                         ; 0047280a
    MOV dword ptr [EBX + 0x2f94],EAX    ; 0047280c
    MOV EDX,dword ptr [EBX + 0x1cc0]    ; 00472812
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 00472818
    IMUL EDX,EAX                        ; 0047281e
    MOV EAX,EDX                         ; 00472821
    SAR EDX,0x1f                        ; 00472823
    SHL EDX,0x3                         ; 00472826
    SBB EAX,EDX                         ; 00472829
    SAR EAX,0x3                         ; 0047282b
    PUSH 0x71                           ; 0047282e
    PUSH 0x61eea3                       ; 00472830 | = "..\\core\\dlight.cpp"
    PUSH EAX                            ; 00472835
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00472836
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    FLD float ptr [EBX + 0x2fa8]        ; 0047283b
    FMUL double ptr [0x0061eebb]        ; 00472841 | DOUBLE_0061eebb
    ADD ESP,0xc                         ; 00472847
    MOV dword ptr [EBX + 0x2fa0],EAX    ; 0047284a
    PUSH 0x0                            ; 00472850
    CALL crt_math.c_round_FUN_005fe6b0  ; 00472852
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH 0x0                            ; 00472857
    FISTP dword ptr [ESP + 0x8]         ; 00472859
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047285d
    PUSH 0x0                            ; 00472861
    MOV EDX,dword ptr [EAX*0x4 + 0x66ef9c] ; 00472863 | g_GlobalFilters
    PUSH EDX                            ; 0047286a
    PUSH EBX                            ; 0047286b
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770 ; 0047286c
        ;   XREF to: 00474770 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00472871
    ADD ESP,0x4                         ; 00472874
    POP EBP                             ; 00472877
    POP EBX                             ; 00472878
    RET                                 ; 00472879
    PUSH EDI                            ; 0047287a
        ;   Label: LAB_0047287a
    MOV EDI,0x61ee5e                    ; 0047287b | = "..\\core\\dlight.cpp"
    MOV EBP,0x6c                        ; 00472880
    PUSH 0x61ee71                       ; 00472885 | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0047288a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00472890 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00472896
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047289b
    POP EDI                             ; 0047289e
    JMP 0x00472801                      ; 0047289f
        ;   XREF to: 00472801 (UNCONDITIONAL_JUMP)  ; LAB_00472801

