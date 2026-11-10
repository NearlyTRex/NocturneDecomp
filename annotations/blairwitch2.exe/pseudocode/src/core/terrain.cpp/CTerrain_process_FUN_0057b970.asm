; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_process_FUN_0057b970(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd95a
;
; Referenced Globals:
;   undefined4 DAT_01c2a370
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0057b970
        ;   Label: core_terrain.cpp_CTerrain_process_FUN_0057b970
    MOV EDX,0x6270                      ; 0057b974
    MOV EAX,[0x01c2a370]                ; 0057b979 | DAT_01c2a370
    IMUL EDX                            ; 0057b97e
    SHRD EAX,EDX,0x10                   ; 0057b980
    MOV EDX,dword ptr [ECX]             ; 0057b984
    ADD EDX,EAX                         ; 0057b986
    MOV dword ptr [ECX],EDX             ; 0057b988
    CMP EDX,0x8000000                   ; 0057b98a
    JG 0x0057b993                       ; 0057b990
        ;   XREF to: 0057b993 (CONDITIONAL_JUMP)  ; LAB_0057b993
    RET                                 ; 0057b992
    PUSH ESI                            ; 0057b993
        ;   Label: LAB_0057b993
    LEA ESI,[EDX + 0xf8000000]          ; 0057b994
    MOV dword ptr [ECX],ESI             ; 0057b99a
    POP ESI                             ; 0057b99c
    RET                                 ; 0057b99d

