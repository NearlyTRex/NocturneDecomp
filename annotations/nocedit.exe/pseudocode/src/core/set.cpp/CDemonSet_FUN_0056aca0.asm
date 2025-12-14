; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056aca0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_set.cpp_CDemonSet_FUN_0056be80 at 0056bfc6
;   core_set.cpp_CDemonSet_FUN_0056c990 at 0056cb18
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b600
;   core_set.cpp_FUN_005713c0 at 005713d8
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_0056d380
;   core_set.cpp_CDemonSet_FUN_00570ca0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056aca0
        ;   Label: core_set.cpp_CDemonSet_FUN_0056aca0
    PUSH ESI                            ; 0056aca1
    PUSH EDI                            ; 0056aca2
    PUSH EBP                            ; 0056aca3
    SUB ESP,0x30                        ; 0056aca4
    MOV ESI,dword ptr [ESP + 0x44]      ; 0056aca7
    MOV EAX,[0x0067d550]                ; 0056acab | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 0056acb0 | DAT_02f33744
    JNZ 0x0056adb6                      ; 0056acb4
        ;   XREF to: 0056adb6 (CONDITIONAL_JUMP)  ; LAB_0056adb6
    MOV EBX,dword ptr [ESI + 0x15f6e4]  ; 0056acba
        ;   Label: LAB_0056acba
    XOR EBP,EBP                         ; 0056acc0
    TEST EBX,EBX                        ; 0056acc2
    JLE 0x0056adae                      ; 0056acc4
        ;   XREF to: 0056adae (CONDITIONAL_JUMP)  ; LAB_0056adae
    MOV EDI,ESI                         ; 0056acca
    MOV EAX,ESP                         ; 0056accc
        ;   Label: LAB_0056accc
    MOV EBX,dword ptr [EDI + 0x15f6e8]  ; 0056acce
    PUSH EAX                            ; 0056acd4
    MOV EDX,dword ptr [EBX + 0x154]     ; 0056acd5
    PUSH EBX                            ; 0056acdb
    CALL dword ptr [EDX + 0x14]         ; 0056acdc
    MOV EDX,EAX                         ; 0056acdf
    MOV ECX,EAX                         ; 0056ace1
    LEA EAX,[ESP + 0x20]                ; 0056ace3
    ADD ESP,0x8                         ; 0056ace7
    CMP EAX,EDX                         ; 0056acea
    JNZ 0x0056adc1                      ; 0056acec
        ;   XREF to: 0056adc1 (CONDITIONAL_JUMP)  ; LAB_0056adc1
    LEA EAX,[ESP + 0x24]                ; 0056acf2
        ;   Label: LAB_0056acf2
    LEA EDX,[ECX + 0xc]                 ; 0056acf6
    CMP EAX,EDX                         ; 0056acf9
    JZ 0x0056ad11                       ; 0056acfb
        ;   XREF to: 0056ad11 (CONDITIONAL_JUMP)  ; LAB_0056ad11
    MOV EAX,dword ptr [EDX]             ; 0056acfd
    MOV dword ptr [ESP + 0x24],EAX      ; 0056acff
    MOV EAX,dword ptr [EDX + 0x4]       ; 0056ad03
    MOV dword ptr [ESP + 0x28],EAX      ; 0056ad06
    MOV EAX,dword ptr [EDX + 0x8]       ; 0056ad0a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056ad0d
    LEA EAX,[EBX + 0x3c]                ; 0056ad11
        ;   Label: LAB_0056ad11
    PUSH EAX                            ; 0056ad14
    LEA EAX,[ESP + 0x28]                ; 0056ad15
    PUSH EAX                            ; 0056ad19
    LEA EAX,[ESP + 0x20]                ; 0056ad1a
    PUSH EAX                            ; 0056ad1e
    LEA EAX,[EBX + 0x30]                ; 0056ad1f
    PUSH EAX                            ; 0056ad22
    LEA EAX,[EBX + 0x20]                ; 0056ad23
    PUSH EAX                            ; 0056ad26
    PUSH ESI                            ; 0056ad27
    CALL core_set.cpp_CDemonSet_FUN_0056d380 ; 0056ad28
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d380(CDemonSet * this_ptr)
    ADD ESP,0x18                        ; 0056ad2d
    MOV EAX,dword ptr [EBX + 0x110]     ; 0056ad30
    PUSH EAX                            ; 0056ad36
    MOV EDX,dword ptr [EBX + 0x10c]     ; 0056ad37
    PUSH EDX                            ; 0056ad3d
    MOV ECX,dword ptr [EBX + 0x108]     ; 0056ad3e
    PUSH ECX                            ; 0056ad44
    PUSH ESI                            ; 0056ad45
    CALL core_set.cpp_CDemonSet_FUN_00570ca0 ; 0056ad46
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570ca0(CDemonSet * this_ptr)
    ADD ESP,0x10                        ; 0056ad4b
    PUSH 0xffff                         ; 0056ad4e
    MOV EAX,[0x006703ec]                ; 0056ad53 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EAX                            ; 0056ad58 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0056ad59
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0056ad5e
    MOV EDX,dword ptr [ESP + 0x48]      ; 0056ad61
    PUSH EDX                            ; 0056ad65
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056ad66
    PUSH EBX                            ; 0056ad6c
    CALL dword ptr [EAX + 0x10]         ; 0056ad6d
    ADD ESP,0x8                         ; 0056ad70
    PUSH 0x10000                        ; 0056ad73
    PUSH 0x10000                        ; 0056ad78
    PUSH 0x10000                        ; 0056ad7d
    PUSH ESI                            ; 0056ad82
    CALL core_set.cpp_CDemonSet_FUN_00570ca0 ; 0056ad83
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570ca0(CDemonSet * this_ptr)
    ADD ESP,0x10                        ; 0056ad88
    PUSH 0x1                            ; 0056ad8b
    MOV ECX,dword ptr [0x006703ec]      ; 0056ad8d | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH ECX                            ; 0056ad93 | g_CDemonRendererInstance
    ADD EDI,0x4                         ; 0056ad94
    INC EBP                             ; 0056ad97
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056ad98
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    MOV EBX,dword ptr [ESI + 0x15f6e4]  ; 0056ad9d
    ADD ESP,0x8                         ; 0056ada3
    CMP EBP,EBX                         ; 0056ada6
    JL 0x0056accc                       ; 0056ada8
        ;   XREF to: 0056accc (CONDITIONAL_JUMP)  ; LAB_0056accc
    ADD ESP,0x30                        ; 0056adae
        ;   Label: LAB_0056adae
    POP EBP                             ; 0056adb1
    POP EDI                             ; 0056adb2
    POP ESI                             ; 0056adb3
    POP EBX                             ; 0056adb4
    RET                                 ; 0056adb5
    XOR ECX,ECX                         ; 0056adb6
        ;   Label: LAB_0056adb6
    MOV dword ptr [ESP + 0x48],ECX      ; 0056adb8
    JMP 0x0056acba                      ; 0056adbc
        ;   XREF to: 0056acba (UNCONDITIONAL_JUMP)  ; LAB_0056acba
    MOV EAX,dword ptr [EDX]             ; 0056adc1
        ;   Label: LAB_0056adc1
    MOV dword ptr [ESP + 0x18],EAX      ; 0056adc3
    MOV EAX,dword ptr [EDX + 0x4]       ; 0056adc7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056adca
    MOV EAX,dword ptr [EDX + 0x8]       ; 0056adce
    MOV dword ptr [ESP + 0x20],EAX      ; 0056add1
    JMP 0x0056acf2                      ; 0056add5
        ;   XREF to: 0056acf2 (UNCONDITIONAL_JUMP)  ; LAB_0056acf2

