; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_FUN_004c7a60(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_elephant.cpp_CElephantGun_fire_FUN_004a7160 at 004a7444
;   core_gun.cpp_CGun_FUN_004f0350 at 004f0596
;   core_shotgun.cpp_FUN_00588060 at 00588360
;   core_tommygun.cpp_FUN_005ddb30 at 005dddbc
;   core_turret.cpp_CTurret_fire_FUN_005e3750 at 005e3b4b
;
; Referenced Globals:
;   int g_SparkActiveCount
;   CMuzzleFlash[20] g_MuzzleFlashPool
;
; Called Functions:
;   core_fire.cpp_FUN_004c1940
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c7a60
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c7a60
    PUSH EDI                            ; 004c7a61
    MOV EDX,dword ptr [0x02d58a00]      ; 004c7a62 | g_SparkActiveCount
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c7a68
    SUB EAX,EDX                         ; 004c7a6f
    SHL EAX,0x3                         ; 004c7a71
    SUB EAX,EDX                         ; 004c7a74
    SHL EAX,0x2                         ; 004c7a76
    INC EDX                             ; 004c7a79
    ADD EAX,0x2d58a04                   ; 004c7a7a | g_MuzzleFlashPool
    MOV dword ptr [0x02d58a00],EDX      ; 004c7a7f | g_SparkActiveCount
    CMP EDX,0x14                        ; 004c7a85
    JL 0x004c7a94                       ; 004c7a88
        ;   XREF to: 004c7a94 (CONDITIONAL_JUMP)  ; LAB_004c7a94
    PUSH EBX                            ; 004c7a8a
    XOR EBX,EBX                         ; 004c7a8b
    MOV dword ptr [0x02d58a00],EBX      ; 004c7a8d | g_SparkActiveCount
    POP EBX                             ; 004c7a93
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c7a94
        ;   Label: LAB_004c7a94
    PUSH ESI                            ; 004c7a98
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c7a99
    PUSH EDI                            ; 004c7a9d
    PUSH EAX                            ; 004c7a9e
    CALL core_fire.cpp_FUN_004c1940     ; 004c7a9f
        ;   XREF to: 004c1940 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004c1940()
    ADD ESP,0xc                         ; 004c7aa4
    POP EDI                             ; 004c7aa7
    POP ESI                             ; 004c7aa8
    RET                                 ; 004c7aa9

