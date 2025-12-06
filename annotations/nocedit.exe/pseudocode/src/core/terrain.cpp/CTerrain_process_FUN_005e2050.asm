; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_terrain.cpp_CTerrain_process_FUN_005e2050(CTerrain * this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e354f
;
; Referenced Globals:
;   int g_GlobalDeltaTimeInt
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 005e2050
        ;   Label: core_terrain.cpp_CTerrain_process_FUN_005e2050
    MOV EDX,0x6270                      ; 005e2054
    MOV EAX,[0x02cf6a80]                ; 005e2059 | int g_GlobalDeltaTimeInt
    IMUL EDX                            ; 005e205e
    SHRD EAX,EDX,0x10                   ; 005e2060
    MOV EDX,dword ptr [ECX]             ; 005e2064
    ADD EDX,EAX                         ; 005e2066
    MOV dword ptr [ECX],EDX             ; 005e2068
    CMP EDX,0x8000000                   ; 005e206a
    JG 0x005e2073                       ; 005e2070 | LAB_005e2073
        ;   XREF to: 005e2073 (CONDITIONAL_JUMP)
    RET                                 ; 005e2072
    PUSH ESI                            ; 005e2073
        ;   Label: LAB_005e2073
    LEA ESI,[EDX + 0xf8000000]          ; 005e2074
    MOV dword ptr [ECX],ESI             ; 005e207a
    POP ESI                             ; 005e207c
    RET                                 ; 005e207d

