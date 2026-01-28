; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0(char *filename,int context)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   context
;
; XREF[9]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db328
;   core_main.c_finalizeGameSystems_FUN_00508570 at 00508584
;   core_main.c_initializeGameSystems_FUN_00507a60 at 005081f4
;   core_mission.cpp_CDemonMission_FUN_00523cf0 at 00523d01
;   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 at 00522d83
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 00523345
;   core_mission.cpp_CDemonMission_save_FUN_00522e30 at 00522e3c
;   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 at 00523615
;   core_mission.cpp_FUN_005248e0 at 005248ea
;
; Referenced Globals:
;   void* PTR_s_none_00636540_0067d1fc = 00636540
;   SMemHead* g_MemoryListHead
;   void* g_DebugContext
;
; Called Functions:
;   shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050efe0
        ;   Label: shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
    PUSH ESI                            ; 0050efe1
    PUSH EDI                            ; 0050efe2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050efe3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0050efe7
    MOV EBX,dword ptr [0x02f0d938]      ; 0050efeb | g_MemoryListHead
    TEST EBX,EBX                        ; 0050eff1
    JZ 0x0050f010                       ; 0050eff3
        ;   XREF to: 0050f010 (CONDITIONAL_JUMP)  ; LAB_0050f010
    PUSH EDI                            ; 0050eff5
        ;   Label: LAB_0050eff5
    PUSH ESI                            ; 0050eff6
    PUSH EBX                            ; 0050eff7
    CALL shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020 ; 0050eff8
        ;   XREF to: 0050f020 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead * header, char * filename, int line_number)
    MOV EBX,dword ptr [EBX + 0x4]       ; 0050effd
    ADD ESP,0xc                         ; 0050f000
    TEST EBX,EBX                        ; 0050f003
    JNZ 0x0050eff5                      ; 0050f005
        ;   XREF to: 0050eff5 (CONDITIONAL_JUMP)  ; LAB_0050eff5
    LEA EAX,[EAX]                       ; 0050f007
    LEA EDX,[EDX]                       ; 0050f00d
    MOV dword ptr [0x02f0d940],EDI      ; 0050f010 | g_DebugContext
        ;   Label: LAB_0050f010
    MOV dword ptr [0x0067d1fc],ESI      ; 0050f016 | PTR_s_none_00636540_0067d1fc
    POP EDI                             ; 0050f01c
    POP ESI                             ; 0050f01d
    POP EBX                             ; 0050f01e
    RET                                 ; 0050f01f

