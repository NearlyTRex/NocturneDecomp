; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_process_FUN_00549410(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a63cf
;
; Referenced Globals:
;   undefined4 DAT_01bd1d80
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00549410
        ;   Label: core_terrain.cpp_CTerrain_process_FUN_00549410
    MOV EDX,0x6270                      ; 00549414
    MOV EAX,[0x01bd1d80]                ; 00549419 | DAT_01bd1d80
    IMUL EDX                            ; 0054941e
    SHRD EAX,EDX,0x10                   ; 00549420
    MOV EDX,dword ptr [ECX]             ; 00549424
    ADD EDX,EAX                         ; 00549426
    MOV dword ptr [ECX],EDX             ; 00549428
    CMP EDX,0x8000000                   ; 0054942a
    JG 0x00549433                       ; 00549430
        ;   XREF to: 00549433 (CONDITIONAL_JUMP)  ; LAB_00549433
    RET                                 ; 00549432
    PUSH ESI                            ; 00549433
        ;   Label: LAB_00549433
    LEA ESI,[EDX + 0xf8000000]          ; 00549434
    MOV dword ptr [ECX],ESI             ; 0054943a
    POP ESI                             ; 0054943c
    RET                                 ; 0054943d

