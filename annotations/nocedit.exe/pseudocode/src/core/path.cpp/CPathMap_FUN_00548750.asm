; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_FUN_00548750(CPathMap *this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWaypoint_renderOpaque_FUN_005ebf70 at 005ec11d
;
; Referenced Globals:
;   int g_PathfindingMaxClimbHeight
;   int g_PathfindingCurrentX
;   int g_PathfindingCurrentZ
;   int g_PathfindingDestX
;   int g_PathfindingDestZ
;
; Called Functions:
;   core_path.cpp_CPathMap_queuePop_FUN_005487a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548750
        ;   Label: core_path.cpp_CPathMap_FUN_00548750
    PUSH EDI                            ; 00548751
    PUSH EBP                            ; 00548752
    MOV EAX,dword ptr [ESP + 0x10]      ; 00548753
    MOV EDX,0x64                        ; 00548757
    MOV ECX,0x63                        ; 0054875c
    MOV EBX,0x32                        ; 00548761
    MOV EDI,0x2                         ; 00548766
    MOV EBP,dword ptr [EAX + 0x10]      ; 0054876b
    MOV dword ptr [0x030c3de8],EDX      ; 0054876e | g_PathfindingDestZ
    PUSH EBP                            ; 00548774
    MOV dword ptr [0x030c3de4],ECX      ; 00548775 | g_PathfindingDestX
    MOV dword ptr [0x030c3ddc],EBX      ; 0054877b | g_PathfindingCurrentX
    PUSH EAX                            ; 00548781
    MOV dword ptr [0x030c3de0],EBX      ; 00548782 | g_PathfindingCurrentZ
    MOV dword ptr [0x030c3ab4],EDI      ; 00548788 | g_PathfindingMaxClimbHeight
    CALL core_path.cpp_CPathMap_queuePop_FUN_005487a0 ; 0054878e
        ;   XREF to: 005487a0 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_queuePop_FUN_005487a0(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 00548793
    POP EBP                             ; 00548796
    POP EDI                             ; 00548797
    POP EBX                             ; 00548798
    RET                                 ; 00548799

