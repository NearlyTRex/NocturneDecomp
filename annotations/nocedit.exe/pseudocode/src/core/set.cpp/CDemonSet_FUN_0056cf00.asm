; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_CDemonSet_FUN_0056cf00(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a366
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c4e6
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_0056d380
;   core_set.cpp_CDemonSet_FUN_00570ca0
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
;   core_set.cpp_FUN_00570af0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cf00
        ;   Label: core_set.cpp_CDemonSet_FUN_0056cf00
    PUSH ESI                            ; 0056cf01
    PUSH EDI                            ; 0056cf02
    PUSH EBP                            ; 0056cf03
    SUB ESP,0x34                        ; 0056cf04
    MOV EDI,dword ptr [ESP + 0x48]      ; 0056cf07
    MOV EBP,dword ptr [EDI + 0x15f6e4]  ; 0056cf0b
    DEC EBP                             ; 0056cf11
    TEST EBP,EBP                        ; 0056cf12
    JL 0x0056cf4d                       ; 0056cf14
        ;   XREF to: 0056cf4d (CONDITIONAL_JUMP)  ; LAB_0056cf4d
    LEA EAX,[EBP*0x4 + 0x0]             ; 0056cf16
    ADD EAX,EDI                         ; 0056cf1d
    MOV dword ptr [ESP + 0x30],EAX      ; 0056cf1f
    MOV EBX,dword ptr [ESP + 0x30]      ; 0056cf23
        ;   Label: LAB_0056cf23
    MOV EBX,dword ptr [EBX + 0x15f6e8]  ; 0056cf27
    CMP dword ptr [EBX + 0xfc],0x0      ; 0056cf2d
    JNZ 0x0056cf55                      ; 0056cf34
        ;   XREF to: 0056cf55 (CONDITIONAL_JUMP)  ; LAB_0056cf55
    AND byte ptr [EBX + 0x140],0xf7     ; 0056cf36
    MOV EDX,dword ptr [ESP + 0x30]      ; 0056cf3d
        ;   Label: LAB_0056cf3d
    SUB EDX,0x4                         ; 0056cf41
    DEC EBP                             ; 0056cf44
    MOV dword ptr [ESP + 0x30],EDX      ; 0056cf45
    TEST EBP,EBP                        ; 0056cf49
    JGE 0x0056cf23                      ; 0056cf4b
        ;   XREF to: 0056cf23 (CONDITIONAL_JUMP)  ; LAB_0056cf23
    ADD ESP,0x34                        ; 0056cf4d
        ;   Label: LAB_0056cf4d
    POP EBP                             ; 0056cf50
    POP EDI                             ; 0056cf51
    POP ESI                             ; 0056cf52
    POP EBX                             ; 0056cf53
    RET                                 ; 0056cf54
    MOV ESI,ESP                         ; 0056cf55
        ;   Label: LAB_0056cf55
    PUSH ESI                            ; 0056cf57
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056cf58
    PUSH EBX                            ; 0056cf5e
    CALL dword ptr [EAX + 0x14]         ; 0056cf5f
    MOV ESI,EAX                         ; 0056cf62
    MOV EDX,EAX                         ; 0056cf64
    LEA EAX,[ESP + 0x20]                ; 0056cf66
    ADD ESP,0x8                         ; 0056cf6a
    CMP EAX,ESI                         ; 0056cf6d
    JZ 0x0056cf85                       ; 0056cf6f
        ;   XREF to: 0056cf85 (CONDITIONAL_JUMP)  ; LAB_0056cf85
    MOV EAX,dword ptr [ESI]             ; 0056cf71
    MOV dword ptr [ESP + 0x18],EAX      ; 0056cf73
    MOV EAX,dword ptr [ESI + 0x4]       ; 0056cf77
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056cf7a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0056cf7e
    MOV dword ptr [ESP + 0x20],EAX      ; 0056cf81
    LEA EAX,[ESP + 0x24]                ; 0056cf85
        ;   Label: LAB_0056cf85
    LEA ESI,[EDX + 0xc]                 ; 0056cf89
    CMP EAX,ESI                         ; 0056cf8c
    JZ 0x0056cfa4                       ; 0056cf8e
        ;   XREF to: 0056cfa4 (CONDITIONAL_JUMP)  ; LAB_0056cfa4
    MOV EAX,dword ptr [ESI]             ; 0056cf90
    MOV dword ptr [ESP + 0x24],EAX      ; 0056cf92
    MOV EAX,dword ptr [ESI + 0x4]       ; 0056cf96
    MOV dword ptr [ESP + 0x28],EAX      ; 0056cf99
    MOV EAX,dword ptr [ESI + 0x8]       ; 0056cf9d
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056cfa0
    LEA EAX,[EBX + 0x3c]                ; 0056cfa4
        ;   Label: LAB_0056cfa4
    PUSH EAX                            ; 0056cfa7
    LEA EAX,[ESP + 0x28]                ; 0056cfa8
    PUSH EAX                            ; 0056cfac
    LEA EAX,[ESP + 0x20]                ; 0056cfad
    PUSH EAX                            ; 0056cfb1
    LEA EAX,[EBX + 0x30]                ; 0056cfb2
    PUSH EAX                            ; 0056cfb5
    LEA EAX,[EBX + 0x20]                ; 0056cfb6
    PUSH EAX                            ; 0056cfb9
    PUSH EDI                            ; 0056cfba
    CALL core_set.cpp_CDemonSet_FUN_0056d380 ; 0056cfbb
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d380(CDemonSet * this_ptr)
    ADD ESP,0x18                        ; 0056cfc0
    MOV ESI,dword ptr [EBX + 0x110]     ; 0056cfc3
    PUSH ESI                            ; 0056cfc9
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0056cfca
    PUSH EAX                            ; 0056cfd0
    MOV EDX,dword ptr [EBX + 0x108]     ; 0056cfd1
    PUSH EDX                            ; 0056cfd7
    PUSH EDI                            ; 0056cfd8
    CALL core_set.cpp_CDemonSet_FUN_00570ca0 ; 0056cfd9
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570ca0(CDemonSet * this_ptr)
    ADD ESP,0x10                        ; 0056cfde
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056cfe1
    PUSH EBX                            ; 0056cfe7
    CALL dword ptr [EAX + 0xc]          ; 0056cfe8
    ADD ESP,0x4                         ; 0056cfeb
    TEST EAX,EAX                        ; 0056cfee
    JZ 0x0056d080                       ; 0056cff0
        ;   XREF to: 0056d080 (CONDITIONAL_JUMP)  ; LAB_0056d080
    OR byte ptr [EBX + 0x140],0x8       ; 0056cff6
    PUSH 0x1                            ; 0056cffd
        ;   Label: LAB_0056cffd
    MOV ECX,dword ptr [0x006703ec]      ; 0056cfff | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0056d005 | g_CDemonRendererInstance
    XOR ESI,ESI                         ; 0056d006
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056d008
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    MOV EAX,dword ptr [EDI + 0x15acb4]  ; 0056d00d
    ADD ESP,0x8                         ; 0056d013
    TEST EAX,EAX                        ; 0056d016
    JLE 0x0056d063                      ; 0056d018
        ;   XREF to: 0056d063 (CONDITIONAL_JUMP)  ; LAB_0056d063
    PUSH 0x0                            ; 0056d01a
        ;   Label: LAB_0056d01a
    PUSH ESI                            ; 0056d01c
    PUSH EDI                            ; 0056d01d
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056d01e
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0056d023
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056d026
    PUSH EBX                            ; 0056d02c
    CALL dword ptr [EAX + 0xc]          ; 0056d02d
    ADD ESP,0x4                         ; 0056d030
    TEST EAX,EAX                        ; 0056d033
    JZ 0x0056d03e                       ; 0056d035
        ;   XREF to: 0056d03e (CONDITIONAL_JUMP)  ; LAB_0056d03e
    OR byte ptr [EBX + 0x140],0x8       ; 0056d037
    PUSH 0x1                            ; 0056d03e
        ;   Label: LAB_0056d03e
    MOV EDX,dword ptr [0x006703ec]      ; 0056d040 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0056d046 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056d047
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0056d04c
    PUSH EDI                            ; 0056d04f
    INC ESI                             ; 0056d050
    CALL core_set.cpp_FUN_00570af0      ; 0056d051
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00570af0()
    MOV ECX,dword ptr [EDI + 0x15acb4]  ; 0056d056
    ADD ESP,0x4                         ; 0056d05c
    CMP ESI,ECX                         ; 0056d05f
    JL 0x0056d01a                       ; 0056d061
        ;   XREF to: 0056d01a (CONDITIONAL_JUMP)  ; LAB_0056d01a
    PUSH 0x10000                        ; 0056d063
        ;   Label: LAB_0056d063
    PUSH 0x10000                        ; 0056d068
    PUSH 0x10000                        ; 0056d06d
    PUSH EDI                            ; 0056d072
    CALL core_set.cpp_CDemonSet_FUN_00570ca0 ; 0056d073
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570ca0(CDemonSet * this_ptr)
    ADD ESP,0x10                        ; 0056d078
    JMP 0x0056cf3d                      ; 0056d07b
        ;   XREF to: 0056cf3d (UNCONDITIONAL_JUMP)  ; LAB_0056cf3d
    AND byte ptr [EBX + 0x140],0xf7     ; 0056d080
        ;   Label: LAB_0056d080
    JMP 0x0056cffd                      ; 0056d087
        ;   XREF to: 0056cffd (UNCONDITIONAL_JUMP)  ; LAB_0056cffd

