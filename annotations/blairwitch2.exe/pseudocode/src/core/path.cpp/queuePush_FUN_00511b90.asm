; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_queuePush_FUN_00511b90(int grid_x,int cost,int grid_z,char direction)
;
; Parameters:
; int              Stack[0x4]:4   grid_x
; int              Stack[0x8]:4   cost
; int              Stack[0xc]:4   grid_z
; char             Stack[0x10]:1   direction
;
; Referenced Globals:
;   int g_PathfindingQueueTail
;   int g_PathfindingNodesExpanded
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511b90
        ;   Label: core_path.cpp_queuePush_FUN_00511b90
    MOV ECX,dword ptr [0x01e5ec70]      ; 00511b91 | g_PathfindingQueueTail
    MOV EDX,dword ptr [ESP + 0x10]      ; 00511b97
    LEA EAX,[EDX*0x4 + 0x0]             ; 00511b9b
    SUB EAX,EDX                         ; 00511ba2
    SHL EAX,0x3                         ; 00511ba4
    ADD EAX,EDX                         ; 00511ba7
    MOV EDX,dword ptr [ESP + 0x8]       ; 00511ba9
    SHL EAX,0x2                         ; 00511bad
    ADD EAX,EDX                         ; 00511bb0
    MOV DL,byte ptr [ESP + 0x14]        ; 00511bb2
    MOV byte ptr [EAX + 0x1e5ec78],DL   ; 00511bb6
    LEA EAX,[ECX*0x4 + 0x0]             ; 00511bbc
    MOV EBX,dword ptr [0x01e613ec]      ; 00511bc3 | g_PathfindingNodesExpanded
    SUB EAX,ECX                         ; 00511bc9
    MOV EDX,dword ptr [ESP + 0x8]       ; 00511bcb
    INC EBX                             ; 00511bcf
    MOV dword ptr [EAX*0x4 + 0x1e5020c],EDX ; 00511bd0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00511bd7
    MOV dword ptr [0x01e613ec],EBX      ; 00511bdb | g_PathfindingNodesExpanded
    MOV dword ptr [EAX*0x4 + 0x1e50210],EDX ; 00511be1
    MOV EDX,dword ptr [ESP + 0x10]      ; 00511be8
    INC ECX                             ; 00511bec
    MOV dword ptr [EAX*0x4 + 0x1e50214],EDX ; 00511bed
    CMP ECX,0x1388                      ; 00511bf4
    JL 0x00511bfe                       ; 00511bfa
        ;   XREF to: 00511bfe (CONDITIONAL_JUMP)  ; LAB_00511bfe
    XOR ECX,ECX                         ; 00511bfc
    MOV dword ptr [0x01e5ec70],ECX      ; 00511bfe | g_PathfindingQueueTail
        ;   Label: LAB_00511bfe
    POP EBX                             ; 00511c04
    RET                                 ; 00511c05

