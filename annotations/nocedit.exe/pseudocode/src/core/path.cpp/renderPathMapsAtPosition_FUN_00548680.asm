; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00548680(CVector3f *position,int depth,int red,int green,int fog)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; int              Stack[0x8]:4   depth
; int              Stack[0xc]:4   red
; int              Stack[0x10]:4   green
; int              Stack[0x14]:4   fog
; Local Variables:
; int[1013]        Stack[-0x1010]:4052  aiStackY_1010
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; CVector3i        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0063eaa8
;   TerminatedCString s_Global_pathmap_list_corr_0063eab9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_PathMapCount
;   CPathMap*[200] g_PathMapList
;   undefined4 DAT_030c3ac0
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548680
        ;   Label: core_path.cpp_renderPathMapsAtPosition_FUN_00548680
    PUSH ESI                            ; 00548681
    PUSH EDI                            ; 00548682
    PUSH EBP                            ; 00548683
    SUB ESP,0x18                        ; 00548684
    MOV EBP,dword ptr [ESP + 0x34]      ; 00548687
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0054868b
    PUSH EDX                            ; 0054868f
    PUSH 0x3277d14                      ; 00548690 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x14]                ; 00548695
    LEA EDI,[ESP + 0x8]                 ; 00548699
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880 ; 0054869d
        ;   XREF to: 00499880 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    LEA ESI,[ESP + 0x14]                ; 005486a2
    ADD ESP,0x8                         ; 005486a6
    MOVSD ES:EDI,ESI                    ; 005486a9
    MOVSD ES:EDI,ESI                    ; 005486aa
    MOVSD ES:EDI,ESI                    ; 005486ab
    MOV ECX,dword ptr [0x030c3ab8]      ; 005486ac | g_PathMapCount
    XOR ESI,ESI                         ; 005486b2
    TEST ECX,ECX                        ; 005486b4
    JLE 0x005486e3                      ; 005486b6
        ;   XREF to: 005486e3 (CONDITIONAL_JUMP)  ; LAB_005486e3
    XOR EBX,EBX                         ; 005486b8
    CMP dword ptr [EBX + 0x30c3abc],0x0 ; 005486ba | g_PathMapList | DAT_030c3ac0
        ;   Label: LAB_005486ba
    JZ 0x005486eb                       ; 005486c1
        ;   XREF to: 005486eb (CONDITIONAL_JUMP)  ; LAB_005486eb
    MOV EDX,dword ptr [EBX + 0x30c3abc] ; 005486c3 | g_PathMapList | DAT_030c3ac0
        ;   Label: LAB_005486c3
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 005486c9
    JLE 0x00548710                      ; 005486d3
        ;   XREF to: 00548710 (CONDITIONAL_JUMP)  ; LAB_00548710
    MOV EDI,dword ptr [0x030c3ab8]      ; 005486d5 | g_PathMapCount
        ;   Label: LAB_005486d5
    INC ESI                             ; 005486db
    ADD EBX,0x4                         ; 005486dc
    CMP ESI,EDI                         ; 005486df
    JL 0x005486ba                       ; 005486e1
        ;   XREF to: 005486ba (CONDITIONAL_JUMP)  ; LAB_005486ba
    ADD ESP,0x18                        ; 005486e3
        ;   Label: LAB_005486e3
    POP EBP                             ; 005486e6
    POP EDI                             ; 005486e7
    POP ESI                             ; 005486e8
    POP EBX                             ; 005486e9
    RET                                 ; 005486ea
    MOV EDX,0x63eaa8                    ; 005486eb | = "..\\core\\path.cpp"
        ;   Label: LAB_005486eb
    MOV ECX,0x6b5                       ; 005486f0
    PUSH 0x63eab9                       ; 005486f5 | = "Global pathmap list corruption"
    MOV dword ptr [0x02f0ca48],EDX      ; 005486fa | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00548700 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00548706
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054870b
    JMP 0x005486c3                      ; 0054870e
        ;   XREF to: 005486c3 (UNCONDITIONAL_JUMP)  ; LAB_005486c3
    MOV ECX,dword ptr [ESP]             ; 00548710
        ;   Label: LAB_00548710
    CMP ECX,dword ptr [EDX + 0xc]       ; 00548713
    JNZ 0x005486d5                      ; 00548716
        ;   XREF to: 005486d5 (CONDITIONAL_JUMP)  ; LAB_005486d5
    MOV EDI,dword ptr [ESP + 0x4]       ; 00548718
    CMP EDI,dword ptr [EDX + 0x10]      ; 0054871c
    JNZ 0x005486d5                      ; 0054871f
        ;   XREF to: 005486d5 (CONDITIONAL_JUMP)  ; LAB_005486d5
    MOV ECX,dword ptr [ESP + 0x8]       ; 00548721
    CMP ECX,dword ptr [EDX + 0x14]      ; 00548725
    JNZ 0x005486d5                      ; 00548728
        ;   XREF to: 005486d5 (CONDITIONAL_JUMP)  ; LAB_005486d5
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0054872a
    PUSH EDI                            ; 0054872e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0054872f
    PUSH EAX                            ; 00548733
    PUSH EBP                            ; 00548734
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00548735
    PUSH ECX                            ; 00548739
    PUSH EDX                            ; 0054873a
    CALL core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0 ; 0054873b
        ;   XREF to: 00547fc0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0(CPathMap * this_ptr, int depth, int red, int green, ...)
    ADD ESP,0x14                        ; 00548740
    JMP 0x005486d5                      ; 00548743
        ;   XREF to: 005486d5 (UNCONDITIONAL_JUMP)  ; LAB_005486d5

