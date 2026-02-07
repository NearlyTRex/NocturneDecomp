; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_00547c00(CPathMap *this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_s_0063ea24
;   int g_WindowWidth = 0x140
;   char*[9] g_DirectionCharacters
;   int g_PathfindingCurrentX
;   int g_PathfindingCurrentZ
;   int g_PathfindingDestX
;   int g_PathfindingDestZ
;   char[101][100] g_PathfindingVisited
;   undefined4 DAT_030d2859
;   undefined4 DAT_030d28bc
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547c00
        ;   Label: core_path.cpp_CPathMap_previewPathfinding_FUN_00547c00
    PUSH ESI                            ; 00547c01
    PUSH EDI                            ; 00547c02
    PUSH EBP                            ; 00547c03
    SUB ESP,0x10c                       ; 00547c04
    XOR EBP,EBP                         ; 00547c0a
    MOV ECX,0x441                       ; 00547c0c
    MOV dword ptr [ESP + 0x104],EBP     ; 00547c11
    MOV dword ptr [ESP + 0x108],ECX     ; 00547c18
    MOV EAX,dword ptr [ESP + 0x108]     ; 00547c1f
        ;   Label: LAB_00547c1f
    MOV EDI,dword ptr [ESP + 0x104]     ; 00547c26
    XOR ESI,ESI                         ; 00547c2d
    XOR EBX,EBX                         ; 00547c2f
    MOV dword ptr [ESP + 0x100],EAX     ; 00547c31
    XOR EAX,EAX                         ; 00547c38
        ;   Label: LAB_00547c38
    MOV AL,byte ptr [EDI + 0x30d2858]   ; 00547c3a | g_PathfindingVisited | DAT_030d2859 | DAT_030d28bc
    MOV EDX,dword ptr [EAX*0x4 + 0x680c50] ; 00547c40 | g_DirectionCharacters
    PUSH EDX                            ; 00547c47
    PUSH 0x63ea24                       ; 00547c48 | = "%s"
    LEA EAX,[ESP + 0x8]                 ; 00547c4d
    PUSH EAX                            ; 00547c51
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00547c52
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV ECX,dword ptr [0x030c3ddc]      ; 00547c57 | g_PathfindingCurrentX
    ADD ESP,0xc                         ; 00547c5d
    CMP EBX,ECX                         ; 00547c60
    JNZ 0x00547c70                      ; 00547c62
        ;   XREF to: 00547c70 (CONDITIONAL_JUMP)  ; LAB_00547c70
    CMP EBP,dword ptr [0x030c3de0]      ; 00547c64 | g_PathfindingCurrentZ
    JNZ 0x00547c70                      ; 00547c6a
        ;   XREF to: 00547c70 (CONDITIONAL_JUMP)  ; LAB_00547c70
    MOV byte ptr [ESP],0x73             ; 00547c6c
    CMP EBX,dword ptr [0x030c3de4]      ; 00547c70 | g_PathfindingDestX
        ;   Label: LAB_00547c70
    JNZ 0x00547c84                      ; 00547c76
        ;   XREF to: 00547c84 (CONDITIONAL_JUMP)  ; LAB_00547c84
    CMP EBP,dword ptr [0x030c3de8]      ; 00547c78 | g_PathfindingDestZ
    JNZ 0x00547c84                      ; 00547c7e
        ;   XREF to: 00547c84 (CONDITIONAL_JUMP)  ; LAB_00547c84
    MOV byte ptr [ESP],0x64             ; 00547c80
    MOV EAX,dword ptr [ESP + 0x100]     ; 00547c84
        ;   Label: LAB_00547c84
    PUSH EAX                            ; 00547c8b
    MOV EAX,[0x00679394]                ; 00547c8c | g_WindowWidth
    MOV EDX,EAX                         ; 00547c91
    SAR EDX,0x1f                        ; 00547c93
    SUB EAX,EDX                         ; 00547c96
    SAR EAX,0x1                         ; 00547c98
    ADD EAX,ESI                         ; 00547c9a
    PUSH EAX                            ; 00547c9c
    LEA EAX,[ESP + 0x8]                 ; 00547c9d
    INC EDI                             ; 00547ca1
    PUSH EAX                            ; 00547ca2
    INC EBX                             ; 00547ca3
    ADD ESI,0xe                         ; 00547ca4
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00547ca7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00547cac
    CMP EBX,0x64                        ; 00547caf
    JL 0x00547c38                       ; 00547cb2
        ;   XREF to: 00547c38 (CONDITIONAL_JUMP)  ; LAB_00547c38
    MOV ECX,dword ptr [ESP + 0x108]     ; 00547cb4
    MOV EDX,dword ptr [ESP + 0x104]     ; 00547cbb
    INC EBP                             ; 00547cc2
    SUB ECX,0xb                         ; 00547cc3
    ADD EDX,0x64                        ; 00547cc6
    MOV dword ptr [ESP + 0x108],ECX     ; 00547cc9
    MOV dword ptr [ESP + 0x104],EDX     ; 00547cd0
    CMP EBP,0x64                        ; 00547cd7
    JL 0x00547c1f                       ; 00547cda
        ;   XREF to: 00547c1f (CONDITIONAL_JUMP)  ; LAB_00547c1f
    ADD ESP,0x10c                       ; 00547ce0
    POP EBP                             ; 00547ce6
    POP EDI                             ; 00547ce7
    POP ESI                             ; 00547ce8
    POP EBX                             ; 00547ce9
    LEA EAX,[EAX]                       ; 00547cea
    RET                                 ; 00547cf0

