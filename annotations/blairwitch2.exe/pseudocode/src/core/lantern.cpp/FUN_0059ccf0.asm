; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lantern_cpp_FUN_0059ccf0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ef7b1
;   undefined4 DAT_005ef7b9
;   undefined4 DAT_005ef7c1
;   undefined4 DAT_005ef7c9
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
;   core_lantern.cpp_FUN_0059ced0
;   core_set.cpp_FUN_00530630
;   core_weapon.cpp_FUN_00589c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ccf0
        ;   Label: core_lantern.cpp_FUN_0059ccf0
    SUB ESP,0x4                         ; 0059ccf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059ccf4
    PUSH dword ptr [ESP + 0x10]         ; 0059ccf8
    PUSH EBX                            ; 0059ccfc
    CALL core_weapon.cpp_FUN_00589c80   ; 0059ccfd
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_00589c80()
    FLD float ptr [EBX + 0x700]         ; 0059cd02
    FLDZ                                ; 0059cd08
    ADD ESP,0x8                         ; 0059cd0a
    FCOMPP                              ; 0059cd0d
    FNSTSW AX                           ; 0059cd0f
    SAHF                                ; 0059cd11
    JNC 0x0059cea9                      ; 0059cd12
        ;   XREF to: 0059cea9 (CONDITIONAL_JUMP)  ; LAB_0059cea9
    FLD float ptr [EBX + 0x6d4]         ; 0059cd18
    FSUB float ptr [ESP + 0x10]         ; 0059cd1e
    MOV dword ptr [EBX + 0x6f8],0x0     ; 0059cd22
    FST float ptr [EBX + 0x6d4]         ; 0059cd2c
    FLDZ                                ; 0059cd32
    FCOMPP                              ; 0059cd34
    FNSTSW AX                           ; 0059cd36
    SAHF                                ; 0059cd38
    JC 0x0059ce79                       ; 0059cd39
        ;   XREF to: 0059ce79 (CONDITIONAL_JUMP)  ; LAB_0059ce79
    PUSH 0x3f800000                     ; 0059cd3f
    PUSH 0x3f333333                     ; 0059cd44
    CALL core_actor.cpp_FUN_0040cf60    ; 0059cd49
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 0059cd4e
    FLD float ptr [ESP + 0x8]           ; 0059cd52
    ADD ESP,0x8                         ; 0059cd56
    PUSH 0x3e4ccccd                     ; 0059cd59
    PUSH 0x3dcccccd                     ; 0059cd5e
    FSTP float ptr [EBX + 0x6f8]        ; 0059cd63
    CALL core_actor.cpp_FUN_0040cf60    ; 0059cd69
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    FLD double ptr [0x005ef7b1]         ; 0059cd6e | DAT_005ef7b1
    FLD float ptr [EBX + 0x6f8]         ; 0059cd74
    FMUL ST1                            ; 0059cd7a
    FLD float ptr [EBX + 0x6f8]         ; 0059cd7c
    MOV dword ptr [ESP + 0x8],EAX       ; 0059cd82
    FMULP ST2                           ; 0059cd86
    FLD float ptr [ESP + 0x8]           ; 0059cd88
    FMUL float ptr [EBX + 0x6f8]        ; 0059cd8c
    FXCH                                ; 0059cd92
    FLD double ptr [0x005ef7b9]         ; 0059cd94 | DAT_005ef7b9
    FXCH                                ; 0059cd9a
    FADD ST0,ST1                        ; 0059cd9c
    FLD float ptr [EBX + 0x700]         ; 0059cd9e
    FXCH                                ; 0059cda4
    FSTP float ptr [EBX + 0x6f0]        ; 0059cda6
    FMUL float ptr [EBX + 0x6f0]        ; 0059cdac
    FXCH ST3                            ; 0059cdb2
    FADDP                               ; 0059cdb4
    FLD float ptr [EBX + 0x700]         ; 0059cdb6
    FXCH                                ; 0059cdbc
    FSTP float ptr [EBX + 0x6f4]        ; 0059cdbe
    FMUL float ptr [EBX + 0x6f4]        ; 0059cdc4
    MOV EAX,dword ptr [EBX + 0x704]     ; 0059cdca
    FXCH                                ; 0059cdd0
    FSTP float ptr [EBX + 0x6d4]        ; 0059cdd2
    FXCH                                ; 0059cdd8
    FSTP float ptr [EBX + 0x6f0]        ; 0059cdda
    FSTP float ptr [EBX + 0x6f4]        ; 0059cde0
    MOV dword ptr [EAX + 0x1cb4],0x1    ; 0059cde6
    MOV EAX,dword ptr [EBX + 0x704]     ; 0059cdf0
    MOV dword ptr [EAX + 0x1cbc],0x1    ; 0059cdf6
    MOV EAX,dword ptr [EBX + 0x704]     ; 0059ce00
    MOV EDX,dword ptr [EBX + 0x6f0]     ; 0059ce06
    MOV dword ptr [EAX + 0x140],EDX     ; 0059ce0c
    MOV EAX,dword ptr [EBX + 0x704]     ; 0059ce12
    MOV EDX,dword ptr [EBX + 0x6f4]     ; 0059ce18
    MOV dword ptr [EAX + 0x38],EDX      ; 0059ce1e
    MOV EAX,dword ptr [EBX + 0x704]     ; 0059ce21
    MOV dword ptr [EAX + 0x1cd0],0x1    ; 0059ce27
    ADD ESP,0x8                         ; 0059ce31
    FLD float ptr [EBX + 0x700]         ; 0059ce34
    FMUL float ptr [EBX + 0x6f8]        ; 0059ce3a
    SUB ESP,0x4                         ; 0059ce40
    FSTP float ptr [ESP]                ; 0059ce43
    MOV EDX,dword ptr [EBX + 0x704]     ; 0059ce46
    PUSH EDX                            ; 0059ce4c
    CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570 ; 0059ce4d
        ;   XREF to: 0044d570 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(CDemonLight * this_ptr, float intensity)
    FLD float ptr [EBX + 0x6f8]         ; 0059ce52
    FMUL double ptr [0x005ef7c1]        ; 0059ce58 | DAT_005ef7c1
    FADD double ptr [0x005ef7c9]        ; 0059ce5e | DAT_005ef7c9
    FMUL float ptr [EBX + 0x700]        ; 0059ce64
    MOV EAX,dword ptr [EBX + 0x704]     ; 0059ce6a
    ADD ESP,0x8                         ; 0059ce70
    FSTP float ptr [EAX + 0x2fac]       ; 0059ce73
    PUSH ESI                            ; 0059ce79
        ;   Label: LAB_0059ce79
    PUSH EBX                            ; 0059ce7a
    CALL core_lantern.cpp_FUN_0059ced0  ; 0059ce7b
        ;   XREF to: 0059ced0 (UNCONDITIONAL_CALL)  ; undefined core_lantern.cpp_FUN_0059ced0()
    ADD ESP,0x4                         ; 0059ce80
    MOV ECX,dword ptr [EBX + 0x704]     ; 0059ce83
    PUSH ECX                            ; 0059ce89
    MOV ESI,dword ptr [0x0061b5a8]      ; 0059ce8a | g_CDemonSetPtr
    PUSH ESI                            ; 0059ce90
    CALL core_set.cpp_FUN_00530630      ; 0059ce91
        ;   XREF to: 00530630 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00530630(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 0059ce96
    MOV dword ptr [EBX + 0xfc],0x1      ; 0059ce99
    POP ESI                             ; 0059cea3
    ADD ESP,0x4                         ; 0059cea4
    POP EBX                             ; 0059cea7
    RET                                 ; 0059cea8
    MOV dword ptr [EBX + 0xfc],0x0      ; 0059cea9
        ;   Label: LAB_0059cea9
    MOV dword ptr [EBX + 0x700],0x0     ; 0059ceb3
    ADD ESP,0x4                         ; 0059cebd
    POP EBX                             ; 0059cec0
    RET                                 ; 0059cec1

