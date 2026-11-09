; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_process_FUN_005724e0(CTerrain *this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004bf4b0 at 004bf86f
;
; Referenced Globals:
;   undefined4 DAT_01c5fad0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 005724e0
        ;   Label: core_terrain.cpp_CTerrain_process_FUN_005724e0
    MOV EDX,0x6270                      ; 005724e4
    MOV EAX,[0x01c5fad0]                ; 005724e9 | DAT_01c5fad0
    IMUL EDX                            ; 005724ee
    SHRD EAX,EDX,0x10                   ; 005724f0
    MOV EDX,dword ptr [ECX]             ; 005724f4
    ADD EDX,EAX                         ; 005724f6
    MOV dword ptr [ECX],EDX             ; 005724f8
    CMP EDX,0x8000000                   ; 005724fa
    JG 0x00572503                       ; 00572500
        ;   XREF to: 00572503 (CONDITIONAL_JUMP)  ; LAB_00572503
    RET                                 ; 00572502
    PUSH ESI                            ; 00572503
        ;   Label: LAB_00572503
    LEA ESI,[EDX + 0xf8000000]          ; 00572504
    MOV dword ptr [ECX],ESI             ; 0057250a
    POP ESI                             ; 0057250c
    RET                                 ; 0057250d

