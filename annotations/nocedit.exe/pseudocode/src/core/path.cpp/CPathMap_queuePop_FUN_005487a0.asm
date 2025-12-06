; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_path.cpp_CPathMap_queuePop_FUN_005487a0(CPathMap * this_ptr, int start_height)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_height
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_path.cpp_CPathMap_CallToQueuePop_FUN_00548750 at 0054878e
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 at 00547942
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0063e878
;   TerminatedCString s_queuePop_empty_queue_0063e889
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_PathfindingMaxClimbHeight
;   int g_PathfindingCurrentX
;   int g_PathfindingCurrentZ
;   int g_PathfindingDestX
;   int g_PathfindingDestZ
;   CPathQueueNode[5000] g_PathfindingQueue
;   undefined4 g_PathfindingQueue[0].cost
;   undefined4 g_PathfindingQueue[0].z
;   undefined4 DAT_030c3df8
;   undefined4 DAT_030c3dfc
;   undefined4 DAT_030c3e00
;   ... and 15 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005487a0
        ;   Label: core_path.cpp_CPathMap_queuePop_FUN_005487a0
    PUSH ESI                            ; 005487a1
    PUSH EDI                            ; 005487a2
    PUSH EBP                            ; 005487a3
    SUB ESP,0x18                        ; 005487a4
    MOV EBX,dword ptr [0x030d2850]      ; 005487a7 | int g_PathfindingQueueTail
    PUSH 0x2774                         ; 005487ad
    PUSH 0x0                            ; 005487b2
    PUSH 0x30d2858                      ; 005487b4 | char[101][100] g_PathfindingVisited
    MOV ESI,0x1                         ; 005487b9
    CALL crt_memory.c_memset_FUN_005fde40 ; 005487be | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x030c3ddc]      ; 005487c3 | int g_PathfindingCurrentX
    MOV EBX,dword ptr [0x030c3de0]      ; 005487c9 | int g_PathfindingCurrentZ
    ADD ESP,0xc                         ; 005487cf
    MOV dword ptr [0x030d4fcc],ESI      ; 005487d2 | int g_PathfindingNodesExpanded
    XOR EDX,EDX                         ; 005487d8
    LEA EAX,[EBX*0x4 + 0x0]             ; 005487da
    MOV dword ptr [0x030d284c],EDX      ; 005487e1 | int g_PathfindingQueueHead
    SUB EAX,EBX                         ; 005487e7
    MOV dword ptr [ESP + 0x4],ESI       ; 005487e9
    SHL EAX,0x3                         ; 005487ed
    MOV dword ptr [0x030c3dec],ECX      ; 005487f0 | CPathQueueNode[5000] g_PathfindingQueue
    ADD EAX,EBX                         ; 005487f6
    MOV DL,byte ptr [ESP + 0x4]         ; 005487f8
    MOV dword ptr [0x030c3df4],EBX      ; 005487fc | g_PathfindingQueue[0].z
    MOV byte ptr [ECX + EAX*0x4 + 0x30d2858],DL ; 00548802 | char[101][100] g_PathfindingVisited
    MOV EAX,dword ptr [ESP + 0x30]      ; 00548809
    MOV EBX,ESI                         ; 0054880d
    MOV [0x030c3df0],EAX                ; 0054880f | g_PathfindingQueue[0].cost
    IMUL EAX,dword ptr [0x030c3de8],0x64 ; 00548814 | int g_PathfindingDestZ
        ;   Label: LAB_00548814
    ADD EAX,dword ptr [0x030c3de4]      ; 0054881b | int g_PathfindingDestX
    CMP byte ptr [EAX + 0x30d2858],0x0  ; 00548821 | char[101][100] g_PathfindingVisited
    JNZ 0x00548959                      ; 00548828 | LAB_00548959
        ;   XREF to: 00548959 (CONDITIONAL_JUMP)
    LEA ESI,[ESP + 0xc]                 ; 0054882e
    LEA EBP,[ESP + 0x10]                ; 00548832
    LEA EDI,[ESP + 0x8]                 ; 00548836
    MOV EAX,[0x030d284c]                ; 0054883a | int g_PathfindingQueueHead
    MOV dword ptr [0x030d2850],EBX      ; 0054883f | int g_PathfindingQueueTail
    CMP EAX,EBX                         ; 00548845
    JZ 0x00548960                       ; 00548847 | LAB_00548960
        ;   XREF to: 00548960 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [0x030d284c],0xc ; 0054884d | int g_PathfindingQueueHead
        ;   Label: LAB_0054884d
    MOV EDX,dword ptr [EAX + 0x30c3dec] ; 00548854 | CPathQueueNode[5000] g_PathfindingQueue
    MOV dword ptr [EDI],EDX             ; 0054885a
    MOV EDX,dword ptr [EAX + 0x30c3df0] ; 0054885c | g_PathfindingQueue[0].cost
    MOV ECX,dword ptr [0x030d284c]      ; 00548862 | int g_PathfindingQueueHead
    MOV dword ptr [ESI],EDX             ; 00548868
    INC ECX                             ; 0054886a
    MOV EAX,dword ptr [EAX + 0x30c3df4] ; 0054886b | g_PathfindingQueue[0].z
    MOV dword ptr [0x030d284c],ECX      ; 00548871 | int g_PathfindingQueueHead
    MOV dword ptr [EBP],EAX             ; 00548877
    CMP ECX,0x1388                      ; 0054887a
    JL 0x0054888a                       ; 00548880 | LAB_0054888a
        ;   XREF to: 0054888a (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 00548882
    MOV dword ptr [0x030d284c],EDI      ; 00548884 | int g_PathfindingQueueHead
    MOV EBP,dword ptr [ESP + 0xc]       ; 0054888a
        ;   Label: LAB_0054888a
    PUSH EBP                            ; 0054888e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054888f
    PUSH EAX                            ; 00548893
    MOV EAX,dword ptr [ESP + 0x18]      ; 00548894
    INC EAX                             ; 00548898
    PUSH EAX                            ; 00548899
    MOV EDX,dword ptr [ESP + 0x38]      ; 0054889a
    PUSH EDX                            ; 0054889e
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 0054889f | int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005488a4
    MOV EBP,EAX                         ; 005488a7
    MOV ECX,dword ptr [ESP + 0xc]       ; 005488a9
    MOV EAX,dword ptr [ESP + 0x8]       ; 005488ad
    PUSH ECX                            ; 005488b1
    INC EAX                             ; 005488b2
    PUSH EAX                            ; 005488b3
    MOV ESI,dword ptr [ESP + 0x18]      ; 005488b4
    PUSH ESI                            ; 005488b8
    MOV EDI,dword ptr [ESP + 0x38]      ; 005488b9
    PUSH EDI                            ; 005488bd
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 005488be | int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005488c3
    MOV EDI,EAX                         ; 005488c6
    MOV EAX,dword ptr [ESP + 0xc]       ; 005488c8
    PUSH EAX                            ; 005488cc
    MOV EDX,dword ptr [ESP + 0xc]       ; 005488cd
    MOV EAX,dword ptr [ESP + 0x14]      ; 005488d1
    PUSH EDX                            ; 005488d5
    DEC EAX                             ; 005488d6
    PUSH EAX                            ; 005488d7
    MOV ECX,dword ptr [ESP + 0x38]      ; 005488d8
    PUSH ECX                            ; 005488dc
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 005488dd | int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005488e2
    MOV ESI,EAX                         ; 005488e5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005488e7
    PUSH EAX                            ; 005488eb
    MOV EAX,dword ptr [ESP + 0xc]       ; 005488ec
    DEC EAX                             ; 005488f0
    PUSH EAX                            ; 005488f1
    MOV EDX,dword ptr [ESP + 0x18]      ; 005488f2
    PUSH EDX                            ; 005488f6
    MOV ECX,dword ptr [ESP + 0x38]      ; 005488f7
    PUSH ECX                            ; 005488fb
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 005488fc | int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x030c3ddc]      ; 00548901 | int g_PathfindingCurrentX
    ADD ESP,0x10                        ; 00548907
    MOV ECX,EAX                         ; 0054890a
    CMP EDX,dword ptr [ESP + 0x8]       ; 0054890c
    JZ 0x00548987                       ; 00548910 | LAB_00548987
        ;   XREF to: 00548987 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548912
        ;   Label: LAB_00548912
    CMP EAX,dword ptr [0x030c3de4]      ; 00548916 | int g_PathfindingDestX
    JZ 0x00548be5                       ; 0054891c | LAB_00548be5
        ;   XREF to: 00548be5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 00548922
        ;   Label: LAB_00548922
    MOV EDX,dword ptr [0x030c3ab4]      ; 00548926 | int g_PathfindingMaxClimbHeight
    SUB EAX,EBP                         ; 0054892c
    CMP EAX,EDX                         ; 0054892e
    JL 0x00548bfa                       ; 00548930 | LAB_00548bfa
        ;   XREF to: 00548bfa (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x030d2850]      ; 00548936 | int g_PathfindingQueueTail
        ;   Label: LAB_00548936
    MOV EAX,[0x030d284c]                ; 0054893c | int g_PathfindingQueueHead
    CMP EAX,EBX                         ; 00548941
    JNZ 0x00548814                      ; 00548943 | LAB_00548814
        ;   XREF to: 00548814 (CONDITIONAL_JUMP)
    XOR EAX,EBX                         ; 00548949
    MOV dword ptr [0x030d2850],EBX      ; 0054894b | int g_PathfindingQueueTail
        ;   Label: LAB_0054894b
    ADD ESP,0x18                        ; 00548951
    POP EBP                             ; 00548954
    POP EDI                             ; 00548955
    POP ESI                             ; 00548956
    POP EBX                             ; 00548957
    RET                                 ; 00548958
    MOV EAX,0x1                         ; 00548959
        ;   Label: LAB_00548959
    JMP 0x0054894b                      ; 0054895e | LAB_0054894b
        ;   XREF to: 0054894b (UNCONDITIONAL_JUMP)
    MOV ECX,0x63e878                    ; 00548960 | = "..\\core\\path.cpp" | s_core_path_cpp_0063e878 = ..\core\path.cpp
        ;   Label: LAB_00548960
    MOV EAX,0xdf                        ; 00548965
    PUSH 0x63e889                       ; 0054896a | = "queuePop - empty queue?!" | s_queuePop_empty_queue_0063e889 = queuePop - empty queue?!
    MOV dword ptr [0x02f0ca48],ECX      ; 0054896f | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00548975 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054897a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054897f
    JMP 0x0054884d                      ; 00548982 | LAB_0054884d
        ;   XREF to: 0054884d (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x10]      ; 00548987
        ;   Label: LAB_00548987
    CMP EAX,dword ptr [0x030c3de0]      ; 0054898b | int g_PathfindingCurrentZ
    JNZ 0x00548912                      ; 00548991 | LAB_00548912
        ;   XREF to: 00548912 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x10]      ; 00548997
        ;   Label: LAB_00548997
    CMP EAX,0x63                        ; 0054899b
    JGE 0x00548a30                      ; 0054899e | LAB_00548a30
        ;   XREF to: 00548a30 (CONDITIONAL_JUMP)
    INC EAX                             ; 005489a4
    IMUL EAX,EAX,0x64                   ; 005489a5
    ADD EAX,dword ptr [ESP + 0x8]       ; 005489a8
    CMP byte ptr [EAX + 0x30d2858],0x0  ; 005489ac | char[101][100] g_PathfindingVisited
    JNZ 0x00548a30                      ; 005489b3 | LAB_00548a30
        ;   XREF to: 00548a30 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0xc]       ; 005489b9
    MOV EAX,EBP                         ; 005489bd
    SUB EAX,EDX                         ; 005489bf
    CDQ                                 ; 005489c1
    XOR EAX,EDX                         ; 005489c2
    SUB EAX,EDX                         ; 005489c4
    CMP EAX,dword ptr [0x030c3ab4]      ; 005489c6 | int g_PathfindingMaxClimbHeight
    JGE 0x00548a30                      ; 005489cc | LAB_00548a30
        ;   XREF to: 00548a30 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x10]      ; 005489ce
    INC EAX                             ; 005489d2
    MOV dword ptr [ESP + 0x14],EAX      ; 005489d3
    IMUL EAX,EAX,0x64                   ; 005489d7
    ADD EAX,dword ptr [ESP + 0x8]       ; 005489da
    MOV EDX,0x1                         ; 005489de
    MOV EBX,dword ptr [0x030d2850]      ; 005489e3 | int g_PathfindingQueueTail
    MOV byte ptr [EAX + 0x30d2858],DL   ; 005489e9 | char[101][100] g_PathfindingVisited
    IMUL EDX,EBX,0xc                    ; 005489ef
    MOV EAX,dword ptr [ESP + 0x8]       ; 005489f2
    MOV dword ptr [EDX + 0x30c3dec],EAX ; 005489f6 | DAT_030c3df8
    INC EBX                             ; 005489fc
    MOV dword ptr [EDX + 0x30c3df0],EBP ; 005489fd | DAT_030c3dfc
    MOV EAX,dword ptr [ESP + 0x14]      ; 00548a03
    MOV EBP,dword ptr [0x030d4fcc]      ; 00548a07 | int g_PathfindingNodesExpanded
    MOV dword ptr [0x030d2850],EBX      ; 00548a0d | int g_PathfindingQueueTail
    INC EBP                             ; 00548a13
    MOV dword ptr [EDX + 0x30c3df4],EAX ; 00548a14 | DAT_030c3e00
    MOV dword ptr [0x030d4fcc],EBP      ; 00548a1a | int g_PathfindingNodesExpanded
    CMP EBX,0x1388                      ; 00548a20
    JL 0x00548a30                       ; 00548a26 | LAB_00548a30
        ;   XREF to: 00548a30 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00548a28
    MOV dword ptr [0x030d2850],EBX      ; 00548a2a | int g_PathfindingQueueTail
    CMP dword ptr [ESP + 0x8],0x63      ; 00548a30
        ;   Label: LAB_00548a30
    JGE 0x00548ab7                      ; 00548a35 | LAB_00548ab7
        ;   XREF to: 00548ab7 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 00548a3b
    ADD EAX,dword ptr [ESP + 0x8]       ; 00548a40
    CMP byte ptr [EAX + 0x30d2859],0x0  ; 00548a44 | DAT_030d2859
    JNZ 0x00548ab7                      ; 00548a4b | LAB_00548ab7
        ;   XREF to: 00548ab7 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0xc]       ; 00548a4d
    MOV EAX,EDI                         ; 00548a51
    SUB EAX,EDX                         ; 00548a53
    CDQ                                 ; 00548a55
    XOR EAX,EDX                         ; 00548a56
    SUB EAX,EDX                         ; 00548a58
    CMP EAX,dword ptr [0x030c3ab4]      ; 00548a5a | int g_PathfindingMaxClimbHeight
    JGE 0x00548ab7                      ; 00548a60 | LAB_00548ab7
        ;   XREF to: 00548ab7 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x10]      ; 00548a62
    IMUL EBX,EBP,0x64                   ; 00548a66
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548a69
    MOV EDX,0x3                         ; 00548a6d
    MOV byte ptr [EBX + EAX*0x1 + 0x30d2859],DL ; 00548a72 | DAT_030d2859
    MOV EBX,dword ptr [0x030d2850]      ; 00548a79 | int g_PathfindingQueueTail
    IMUL EDX,EBX,0xc                    ; 00548a7f
    INC EAX                             ; 00548a82
    MOV dword ptr [EDX + 0x30c3dec],EAX ; 00548a83 | CPathQueueNode[5000] g_PathfindingQueue
    INC EBX                             ; 00548a89
    MOV dword ptr [EDX + 0x30c3df0],EDI ; 00548a8a | g_PathfindingQueue[0].cost
    MOV EAX,[0x030d4fcc]                ; 00548a90 | int g_PathfindingNodesExpanded
    MOV dword ptr [EDX + 0x30c3df4],EBP ; 00548a95 | g_PathfindingQueue[0].z
    INC EAX                             ; 00548a9b
    MOV dword ptr [0x030d2850],EBX      ; 00548a9c | int g_PathfindingQueueTail
    MOV [0x030d4fcc],EAX                ; 00548aa2 | int g_PathfindingNodesExpanded
    CMP EBX,0x1388                      ; 00548aa7
    JL 0x00548ab7                       ; 00548aad | LAB_00548ab7
        ;   XREF to: 00548ab7 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00548aaf
    MOV dword ptr [0x030d2850],EBX      ; 00548ab1 | int g_PathfindingQueueTail
    MOV EDX,dword ptr [ESP + 0x10]      ; 00548ab7
        ;   Label: LAB_00548ab7
    TEST EDX,EDX                        ; 00548abb
    JLE 0x00548b45                      ; 00548abd | LAB_00548b45
        ;   XREF to: 00548b45 (CONDITIONAL_JUMP)
    LEA EAX,[EDX + -0x1]                ; 00548ac3
    IMUL EAX,EAX,0x64                   ; 00548ac6
    ADD EAX,dword ptr [ESP + 0x8]       ; 00548ac9
    CMP byte ptr [EAX + 0x30d2858],0x0  ; 00548acd | char[101][100] g_PathfindingVisited
    JNZ 0x00548b45                      ; 00548ad4 | LAB_00548b45
        ;   XREF to: 00548b45 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0xc]       ; 00548ad6
    MOV EAX,ESI                         ; 00548ada
    SUB EAX,EBP                         ; 00548adc
    CDQ                                 ; 00548ade
    XOR EAX,EDX                         ; 00548adf
    SUB EAX,EDX                         ; 00548ae1
    CMP EAX,dword ptr [0x030c3ab4]      ; 00548ae3 | int g_PathfindingMaxClimbHeight
    JGE 0x00548b45                      ; 00548ae9 | LAB_00548b45
        ;   XREF to: 00548b45 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x10]      ; 00548aeb
    DEC EDI                             ; 00548aef
    IMUL EDX,EDI,0x64                   ; 00548af0
    ADD EDX,dword ptr [ESP + 0x8]       ; 00548af3
    MOV EAX,0x2                         ; 00548af7
    MOV EBX,dword ptr [0x030d2850]      ; 00548afc | int g_PathfindingQueueTail
    MOV byte ptr [EDX + 0x30d2858],AL   ; 00548b02 | char[101][100] g_PathfindingVisited
    IMUL EDX,EBX,0xc                    ; 00548b08
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548b0b
    MOV dword ptr [EDX + 0x30c3dec],EAX ; 00548b0f | CPathQueueNode[5000] g_PathfindingQueue
    INC EBX                             ; 00548b15
    MOV dword ptr [EDX + 0x30c3df0],ESI ; 00548b16 | g_PathfindingQueue[0].cost
    MOV ESI,dword ptr [0x030d4fcc]      ; 00548b1c | int g_PathfindingNodesExpanded
    MOV dword ptr [EDX + 0x30c3df4],EDI ; 00548b22 | g_PathfindingQueue[0].z
    INC ESI                             ; 00548b28
    MOV dword ptr [0x030d2850],EBX      ; 00548b29 | int g_PathfindingQueueTail
    MOV dword ptr [0x030d4fcc],ESI      ; 00548b2f | int g_PathfindingNodesExpanded
    CMP EBX,0x1388                      ; 00548b35
    JL 0x00548b45                       ; 00548b3b | LAB_00548b45
        ;   XREF to: 00548b45 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00548b3d
    MOV dword ptr [0x030d2850],EBX      ; 00548b3f | int g_PathfindingQueueTail
    MOV EDI,dword ptr [ESP + 0x8]       ; 00548b45
        ;   Label: LAB_00548b45
    TEST EDI,EDI                        ; 00548b49
    JLE 0x00548936                      ; 00548b4b | LAB_00548936
        ;   XREF to: 00548936 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 00548b51
    ADD EAX,EDI                         ; 00548b56
    CMP byte ptr [EAX + 0x30d2857],0x0  ; 00548b58 | DAT_030d2857
    JNZ 0x00548936                      ; 00548b5f | LAB_00548936
        ;   XREF to: 00548936 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0xc]       ; 00548b65
    MOV EAX,ECX                         ; 00548b69
    SUB EAX,ESI                         ; 00548b6b
    CDQ                                 ; 00548b6d
    XOR EAX,EDX                         ; 00548b6e
    SUB EAX,EDX                         ; 00548b70
    CMP EAX,dword ptr [0x030c3ab4]      ; 00548b72 | int g_PathfindingMaxClimbHeight
    JGE 0x00548936                      ; 00548b78 | LAB_00548936
        ;   XREF to: 00548936 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [ESP + 0x10],0x64 ; 00548b7e
    MOV dword ptr [ESP],0x4             ; 00548b83
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548b8a
    MOV BL,byte ptr [ESP]               ; 00548b8e
    MOV byte ptr [EDX + EAX*0x1 + 0x30d2857],BL ; 00548b91 | DAT_030d2857
    MOV EBX,dword ptr [0x030d2850]      ; 00548b98 | int g_PathfindingQueueTail
    IMUL EDX,EBX,0xc                    ; 00548b9e
    MOV ESI,dword ptr [0x030d4fcc]      ; 00548ba1 | int g_PathfindingNodesExpanded
    INC ESI                             ; 00548ba7
    DEC EAX                             ; 00548ba8
    MOV dword ptr [0x030d4fcc],ESI      ; 00548ba9 | int g_PathfindingNodesExpanded
    MOV dword ptr [EDX + 0x30c3dec],EAX ; 00548baf | CPathQueueNode[5000] g_PathfindingQueue
    INC EBX                             ; 00548bb5
    MOV dword ptr [EDX + 0x30c3df0],ECX ; 00548bb6 | g_PathfindingQueue[0].cost
    MOV EAX,dword ptr [ESP + 0x10]      ; 00548bbc
    MOV dword ptr [0x030d2850],EBX      ; 00548bc0 | int g_PathfindingQueueTail
    MOV dword ptr [EDX + 0x30c3df4],EAX ; 00548bc6 | g_PathfindingQueue[0].z
    CMP EBX,0x1388                      ; 00548bcc
    JL 0x00548936                       ; 00548bd2 | LAB_00548936
        ;   XREF to: 00548936 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00548bd8
    MOV dword ptr [0x030d2850],EBX      ; 00548bda | int g_PathfindingQueueTail
    JMP 0x00548936                      ; 00548be0 | LAB_00548936
        ;   XREF to: 00548936 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x10]      ; 00548be5
        ;   Label: LAB_00548be5
    CMP EAX,dword ptr [0x030c3de8]      ; 00548be9 | int g_PathfindingDestZ
    JNZ 0x00548922                      ; 00548bef | LAB_00548922
        ;   XREF to: 00548922 (CONDITIONAL_JUMP)
    JMP 0x00548997                      ; 00548bf5 | LAB_00548997
        ;   XREF to: 00548997 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 00548bfa
        ;   Label: LAB_00548bfa
    SUB EAX,ESI                         ; 00548bfe
    CMP EAX,EDX                         ; 00548c00
    JGE 0x00548936                      ; 00548c02 | LAB_00548936
        ;   XREF to: 00548936 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 00548c08
    SUB EAX,EDI                         ; 00548c0c
    CMP EAX,EDX                         ; 00548c0e
    JGE 0x00548936                      ; 00548c10 | LAB_00548936
        ;   XREF to: 00548936 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 00548c16
    SUB EAX,ECX                         ; 00548c1a
    CMP EAX,EDX                         ; 00548c1c
    JGE 0x00548936                      ; 00548c1e | LAB_00548936
        ;   XREF to: 00548936 (CONDITIONAL_JUMP)
    JMP 0x00548997                      ; 00548c24 | LAB_00548997
        ;   XREF to: 00548997 (UNCONDITIONAL_JUMP)

