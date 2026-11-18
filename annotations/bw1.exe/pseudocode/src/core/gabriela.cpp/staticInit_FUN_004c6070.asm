; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_staticInit_FUN_004c6070(void)
;
;
; Referenced Globals:
;   float g_FLOAT_00600d70 = 0.1414286
;   float g_FLOAT_00600d74 = 30
;   float g_FLOAT_00600d78 = 0.4074074
;   float g_FLOAT_00600d7c = 30
;   float g_FLOAT_00600d80 = 0.1052632
;   float g_FLOAT_00600d84 = 20
;   float g_FLOAT_01cc90c8
;   float g_FLOAT_01cc90cc
;   float g_FLOAT_01cc90d0
;   UVector3 g_GabriellaWeaponEuler
;   undefined4 g_GabriellaWeaponEuler+4
;   undefined4 g_GabriellaWeaponEuler+8
;   UVector3 g_GabriellaWeaponAttachEuler
;   undefined4 g_GabriellaWeaponAttachEuler+4
;   undefined4 g_GabriellaWeaponAttachEuler+8
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6070
        ;   Label: core_gabriela.cpp_staticInit_FUN_004c6070
    PUSH ESI                            ; 004c6071
    PUSH EDI                            ; 004c6072
    PUSH EBP                            ; 004c6073
    FLD float ptr [0x00600d70]          ; 004c6074 | g_FLOAT_00600d70
    FMUL float ptr [0x00600d74]         ; 004c607a | g_FLOAT_00600d74
    FLD float ptr [0x00600d78]          ; 004c6080 | g_FLOAT_00600d78
    FMUL float ptr [0x00600d7c]         ; 004c6086 | g_FLOAT_00600d7c
    FLD float ptr [0x00600d80]          ; 004c608c | g_FLOAT_00600d80
    FMUL float ptr [0x00600d84]         ; 004c6092 | g_FLOAT_00600d84
    MOV EDX,0x3f028f5c                  ; 004c6098
    MOV ECX,0xbca3d70a                  ; 004c609d
    MOV EBX,0x3db851ec                  ; 004c60a2
    MOV ESI,0x3e4ccccd                  ; 004c60a7
    MOV EDI,0xbea147ae                  ; 004c60ac
    PUSH 0x1d06ad8                      ; 004c60b1
    MOV EAX,0x3fc90fdb                  ; 004c60b6
    XOR EBP,EBP                         ; 004c60bb
    PUSH 0x3                            ; 004c60bd
    MOV dword ptr [0x01cc90d4],EDX      ; 004c60bf | g_GabriellaWeaponEuler
    MOV dword ptr [0x01cc90d8],ECX      ; 004c60c5 | g_GabriellaWeaponEuler+4
    MOV dword ptr [0x01cc90dc],EBX      ; 004c60cb | g_GabriellaWeaponEuler+8
    MOV dword ptr [0x01cc90e0],ESI      ; 004c60d1 | g_GabriellaWeaponAttachEuler
    MOV dword ptr [0x01cc90e4],EDI      ; 004c60d7 | g_GabriellaWeaponAttachEuler+4
    MOV dword ptr [0x01cc90e8],EBP      ; 004c60dd | g_GabriellaWeaponAttachEuler+8
    MOV [0x01cc90ec],EAX                ; 004c60e3 | g_GabriellaWeaponAttachOffset
    MOV dword ptr [0x01cc90f0],EBP      ; 004c60e8 | g_GabriellaWeaponAttachOffset+4
    MOV dword ptr [0x01cc9100],EBP      ; 004c60ee | g_FLOAT_01cc9100
    FXCH ST2                            ; 004c60f4
    FSTP float ptr [0x01cc90c8]         ; 004c60f6 | g_FLOAT_01cc90c8
    FSTP float ptr [0x01cc90cc]         ; 004c60fc | g_FLOAT_01cc90cc
    PUSH 0x61d884                       ; 004c6102
    FSTP float ptr [0x01cc90d0]         ; 004c6107 | g_FLOAT_01cc90d0
    PUSH 0x4c6240                       ; 004c610d
    MOV ECX,0x3eb33333                  ; 004c6112
    MOV EBX,0x40133333                  ; 004c6117
    PUSH 0x5e0df4                       ; 004c611c
    MOV ESI,0x408ccccd                  ; 004c6121
    MOV dword ptr [0x01cc90f4],ECX      ; 004c6126 | g_GabriellaWeaponAttachOffset+8
    PUSH 0x1cc9158                      ; 004c612c
    MOV dword ptr [0x01cc90f8],EBX      ; 004c6131 | g_FLOAT_01cc90f8
    MOV dword ptr [0x01cc90fc],ESI      ; 004c6137 | g_FLOAT_01cc90fc
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004c613d
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c6142
    POP EBP                             ; 004c6145
    POP EDI                             ; 004c6146
    POP ESI                             ; 004c6147
    POP EBX                             ; 004c6148
    RET                                 ; 004c6149

