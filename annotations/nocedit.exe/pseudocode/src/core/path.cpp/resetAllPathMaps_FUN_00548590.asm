; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_resetAllPathMaps_FUN_00548590(void)
;
;
; XREF[4]:
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569d40
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00574440 at 005744a2
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00574560 at 0057456d
;   core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_005744d0 at 00574532
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0063ea48
;   TerminatedCString s_Global_pathmap_list_corr_0063ea59
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_PathMapCount
;   CPathMap*[200] g_PathMapList
;   undefined4 g_PathMapList[1]
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_path.cpp_CPathMap_reset_FUN_00548510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548590
        ;   Label: core_path.cpp_resetAllPathMaps_FUN_00548590
    PUSH ESI                            ; 00548591
    PUSH EDI                            ; 00548592
    MOV EDX,dword ptr [0x030c3ab8]      ; 00548593 | g_PathMapCount
    XOR ESI,ESI                         ; 00548599
    TEST EDX,EDX                        ; 0054859b
    JLE 0x005485e9                      ; 0054859d
        ;   XREF to: 005485e9 (CONDITIONAL_JUMP)  ; LAB_005485e9
    XOR EBX,EBX                         ; 0054859f
    CMP dword ptr [EBX + 0x30c3abc],0x0 ; 005485a1 | g_PathMapList | g_PathMapList[1]
        ;   Label: LAB_005485a1
    JNZ 0x005485cc                      ; 005485a8
        ;   XREF to: 005485cc (CONDITIONAL_JUMP)  ; LAB_005485cc
    MOV EAX,0x63ea48                    ; 005485aa | = "..\\core\\path.cpp"
    MOV EDX,0x6a1                       ; 005485af
    PUSH 0x63ea59                       ; 005485b4 | = "Global pathmap list corruption"
    MOV [0x02f0ca48],EAX                ; 005485b9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005485be | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005485c4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005485c9
    MOV ECX,dword ptr [EBX + 0x30c3abc] ; 005485cc | g_PathMapList | g_PathMapList[1]
        ;   Label: LAB_005485cc
    PUSH ECX                            ; 005485d2
    ADD EBX,0x4                         ; 005485d3
    INC ESI                             ; 005485d6
    CALL core_path.cpp_CPathMap_reset_FUN_00548510 ; 005485d7
        ;   XREF to: 00548510 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_00548510(CPathMap * this_ptr)
    MOV EDI,dword ptr [0x030c3ab8]      ; 005485dc | g_PathMapCount
    ADD ESP,0x4                         ; 005485e2
    CMP ESI,EDI                         ; 005485e5
    JL 0x005485a1                       ; 005485e7
        ;   XREF to: 005485a1 (CONDITIONAL_JUMP)  ; LAB_005485a1
    POP EDI                             ; 005485e9
        ;   Label: LAB_005485e9
    POP ESI                             ; 005485ea
    POP EBX                             ; 005485eb
    RET                                 ; 005485ec

