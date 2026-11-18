; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_00535440(CPathMap *this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   int g_PathfindingMaxClimbHeight
;   int g_PathfindingCurrentX
;   int g_PathfindingCurrentZ
;   int g_PathfindingDestX
;   int g_PathfindingDestZ
;
; Called Functions:
;   core_path.cpp_CPathMap_searchGrid_FUN_00535490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535440
        ;   Label: core_path.cpp_CPathMap_setupPathSearch_FUN_00535440
    PUSH EDI                            ; 00535441
    PUSH EBP                            ; 00535442
    MOV EAX,dword ptr [ESP + 0x10]      ; 00535443
    MOV EDX,0x64                        ; 00535447
    MOV ECX,0x63                        ; 0053544c
    MOV EBX,0x32                        ; 00535451
    MOV EDI,0x2                         ; 00535456
    MOV EBP,dword ptr [EAX + 0x10]      ; 0053545b
    MOV dword ptr [0x01e6c178],EDX      ; 0053545e | g_PathfindingDestZ
    PUSH EBP                            ; 00535464
    MOV dword ptr [0x01e6c174],ECX      ; 00535465 | g_PathfindingDestX
    MOV dword ptr [0x01e6c16c],EBX      ; 0053546b | g_PathfindingCurrentX
    PUSH EAX                            ; 00535471
    MOV dword ptr [0x01e6c170],EBX      ; 00535472 | g_PathfindingCurrentZ
    MOV dword ptr [0x01e6be44],EDI      ; 00535478 | g_PathfindingMaxClimbHeight
    CALL core_path.cpp_CPathMap_searchGrid_FUN_00535490 ; 0053547e
        ;   XREF to: 00535490 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_searchGrid_FUN_00535490(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 00535483
    POP EBP                             ; 00535486
    POP EDI                             ; 00535487
    POP EBX                             ; 00535488
    RET                                 ; 00535489

