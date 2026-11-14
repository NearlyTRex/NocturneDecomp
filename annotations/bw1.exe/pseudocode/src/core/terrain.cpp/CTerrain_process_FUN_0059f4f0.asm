; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_process_FUN_0059f4f0(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d841f
;
; Referenced Globals:
;   undefined4 DAT_01c43530
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0059f4f0
        ;   Label: core_terrain.cpp_CTerrain_process_FUN_0059f4f0
    MOV EDX,0x6270                      ; 0059f4f4
    MOV EAX,[0x01c43530]                ; 0059f4f9 | DAT_01c43530
    IMUL EDX                            ; 0059f4fe
    SHRD EAX,EDX,0x10                   ; 0059f500
    MOV EDX,dword ptr [ECX]             ; 0059f504
    ADD EDX,EAX                         ; 0059f506
    MOV dword ptr [ECX],EDX             ; 0059f508
    CMP EDX,0x8000000                   ; 0059f50a
    JG 0x0059f513                       ; 0059f510
        ;   XREF to: 0059f513 (CONDITIONAL_JUMP)  ; LAB_0059f513
    RET                                 ; 0059f512
    PUSH ESI                            ; 0059f513
        ;   Label: LAB_0059f513
    LEA ESI,[EDX + 0xf8000000]          ; 0059f514
    MOV dword ptr [ECX],ESI             ; 0059f51a
    POP ESI                             ; 0059f51c
    RET                                 ; 0059f51d

