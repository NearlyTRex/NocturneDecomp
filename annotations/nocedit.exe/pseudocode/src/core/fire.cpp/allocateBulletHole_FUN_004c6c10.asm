; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBulletHole * core_fire.cpp_allocateBulletHole_FUN_004c6c10(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c76a0 at 004c7852
;
; Referenced Globals:
;   int g_BulletHoleActiveCount
;   int g_BulletHoleAllocIndex
;   CBulletHole[256] g_BulletHolePool
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6c10
        ;   Label: core_fire.cpp_allocateBulletHole_FUN_004c6c10
    MOV ECX,dword ptr [0x02d2a1f0]      ; 004c6c11 | int g_BulletHoleAllocIndex
    MOV EBX,dword ptr [0x02d2a1ec]      ; 004c6c17 | int g_BulletHoleActiveCount
    LEA EAX,[ECX*0x4 + 0x0]             ; 004c6c1d
    MOV EDX,EAX                         ; 004c6c24
    SHL EAX,0x4                         ; 004c6c26
    SUB EAX,EDX                         ; 004c6c29
    INC ECX                             ; 004c6c2b
    ADD EAX,0x2d2a1f4                   ; 004c6c2c | CBulletHole[256] g_BulletHolePool
    CMP ECX,0x100                       ; 004c6c31
    JL 0x004c6c3b                       ; 004c6c37 | LAB_004c6c3b
        ;   XREF to: 004c6c3b (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 004c6c39
    INC EBX                             ; 004c6c3b
        ;   Label: LAB_004c6c3b
    CMP EBX,0x100                       ; 004c6c3c
    JLE 0x004c6c49                      ; 004c6c42 | LAB_004c6c49
        ;   XREF to: 004c6c49 (CONDITIONAL_JUMP)
    MOV EBX,0x100                       ; 004c6c44
    MOV dword ptr [0x02d2a1ec],EBX      ; 004c6c49 | int g_BulletHoleActiveCount
        ;   Label: LAB_004c6c49
    MOV dword ptr [0x02d2a1f0],ECX      ; 004c6c4f | int g_BulletHoleAllocIndex
    POP EBX                             ; 004c6c55
    RET                                 ; 004c6c56

