; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056cd60(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a357
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c462
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_0056d380
;   core_set.cpp_CDemonSet_FUN_00570ca0
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
;   core_set.cpp_FUN_00570af0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cd60
        ;   Label: core_set.cpp_CDemonSet_FUN_0056cd60
    PUSH ESI                            ; 0056cd61
    PUSH EDI                            ; 0056cd62
    PUSH EBP                            ; 0056cd63
    SUB ESP,0x34                        ; 0056cd64
    MOV EDI,dword ptr [ESP + 0x48]      ; 0056cd67
    MOV EBP,dword ptr [EDI + 0x15f6e4]  ; 0056cd6b
    DEC EBP                             ; 0056cd71
    TEST EBP,EBP                        ; 0056cd72
    JL 0x0056cdad                       ; 0056cd74 | LAB_0056cdad
        ;   XREF to: 0056cdad (CONDITIONAL_JUMP)
    LEA EAX,[EBP*0x4 + 0x0]             ; 0056cd76
    ADD EAX,EDI                         ; 0056cd7d
    MOV dword ptr [ESP + 0x30],EAX      ; 0056cd7f
    MOV EBX,dword ptr [ESP + 0x30]      ; 0056cd83
        ;   Label: LAB_0056cd83
    MOV EBX,dword ptr [EBX + 0x15f6e8]  ; 0056cd87
    CMP dword ptr [EBX + 0xf8],0x0      ; 0056cd8d
    JNZ 0x0056cdb5                      ; 0056cd94 | LAB_0056cdb5
        ;   XREF to: 0056cdb5 (CONDITIONAL_JUMP)
    AND byte ptr [EBX + 0x140],0xfb     ; 0056cd96
    MOV EDX,dword ptr [ESP + 0x30]      ; 0056cd9d
        ;   Label: LAB_0056cd9d
    SUB EDX,0x4                         ; 0056cda1
    DEC EBP                             ; 0056cda4
    MOV dword ptr [ESP + 0x30],EDX      ; 0056cda5
    TEST EBP,EBP                        ; 0056cda9
    JGE 0x0056cd83                      ; 0056cdab | LAB_0056cd83
        ;   XREF to: 0056cd83 (CONDITIONAL_JUMP)
    ADD ESP,0x34                        ; 0056cdad
        ;   Label: LAB_0056cdad
    POP EBP                             ; 0056cdb0
    POP EDI                             ; 0056cdb1
    POP ESI                             ; 0056cdb2
    POP EBX                             ; 0056cdb3
    RET                                 ; 0056cdb4
    MOV ESI,ESP                         ; 0056cdb5
        ;   Label: LAB_0056cdb5
    PUSH ESI                            ; 0056cdb7
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056cdb8
    PUSH EBX                            ; 0056cdbe
    CALL dword ptr [EAX + 0x14]         ; 0056cdbf
    MOV ESI,EAX                         ; 0056cdc2
    MOV EDX,EAX                         ; 0056cdc4
    LEA EAX,[ESP + 0x20]                ; 0056cdc6
    ADD ESP,0x8                         ; 0056cdca
    CMP EAX,ESI                         ; 0056cdcd
    JZ 0x0056cde5                       ; 0056cdcf | LAB_0056cde5
        ;   XREF to: 0056cde5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 0056cdd1
    MOV dword ptr [ESP + 0x18],EAX      ; 0056cdd3
    MOV EAX,dword ptr [ESI + 0x4]       ; 0056cdd7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056cdda
    MOV EAX,dword ptr [ESI + 0x8]       ; 0056cdde
    MOV dword ptr [ESP + 0x20],EAX      ; 0056cde1
    LEA EAX,[ESP + 0x24]                ; 0056cde5
        ;   Label: LAB_0056cde5
    LEA ESI,[EDX + 0xc]                 ; 0056cde9
    CMP EAX,ESI                         ; 0056cdec
    JZ 0x0056ce04                       ; 0056cdee | LAB_0056ce04
        ;   XREF to: 0056ce04 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 0056cdf0
    MOV dword ptr [ESP + 0x24],EAX      ; 0056cdf2
    MOV EAX,dword ptr [ESI + 0x4]       ; 0056cdf6
    MOV dword ptr [ESP + 0x28],EAX      ; 0056cdf9
    MOV EAX,dword ptr [ESI + 0x8]       ; 0056cdfd
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056ce00
    LEA EAX,[EBX + 0x3c]                ; 0056ce04
        ;   Label: LAB_0056ce04
    PUSH EAX                            ; 0056ce07
    LEA EAX,[ESP + 0x28]                ; 0056ce08
    PUSH EAX                            ; 0056ce0c
    LEA EAX,[ESP + 0x20]                ; 0056ce0d
    PUSH EAX                            ; 0056ce11
    LEA EAX,[EBX + 0x30]                ; 0056ce12
    PUSH EAX                            ; 0056ce15
    LEA EAX,[EBX + 0x20]                ; 0056ce16
    PUSH EAX                            ; 0056ce19
    PUSH EDI                            ; 0056ce1a
    CALL core_set.cpp_CDemonSet_FUN_0056d380 ; 0056ce1b | void core_set.cpp_CDemonSet_FUN_0056d380(CDemonSet * this_ptr)
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0056ce20
    MOV ESI,dword ptr [EBX + 0x110]     ; 0056ce23
    PUSH ESI                            ; 0056ce29
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0056ce2a
    PUSH EAX                            ; 0056ce30
    MOV EDX,dword ptr [EBX + 0x108]     ; 0056ce31
    PUSH EDX                            ; 0056ce37
    PUSH EDI                            ; 0056ce38
    CALL core_set.cpp_CDemonSet_FUN_00570ca0 ; 0056ce39 | void core_set.cpp_CDemonSet_FUN_00570ca0(CDemonSet * this_ptr)
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0056ce3e
    PUSH 0xffff                         ; 0056ce41
    MOV ECX,dword ptr [0x006703ec]      ; 0056ce46 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 0056ce4c | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0056ce4d | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056ce52
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056ce55
    PUSH EBX                            ; 0056ce5b
    CALL dword ptr [EAX + 0x8]          ; 0056ce5c
    ADD ESP,0x4                         ; 0056ce5f
    TEST EAX,EAX                        ; 0056ce62
    JZ 0x0056cef4                       ; 0056ce64 | LAB_0056cef4
        ;   XREF to: 0056cef4 (CONDITIONAL_JUMP)
    OR byte ptr [EBX + 0x140],0x4       ; 0056ce6a
    PUSH 0x1                            ; 0056ce71
        ;   Label: LAB_0056ce71
    MOV ESI,dword ptr [0x006703ec]      ; 0056ce73 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 0056ce79 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056ce7a | void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056ce7f
    MOV EAX,dword ptr [EDI + 0x15acb4]  ; 0056ce82
    XOR ESI,ESI                         ; 0056ce88
    TEST EAX,EAX                        ; 0056ce8a
    JLE 0x0056ced7                      ; 0056ce8c | LAB_0056ced7
        ;   XREF to: 0056ced7 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0056ce8e
        ;   Label: LAB_0056ce8e
    PUSH ESI                            ; 0056ce90
    PUSH EDI                            ; 0056ce91
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056ce92 | void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056ce97
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056ce9a
    PUSH EBX                            ; 0056cea0
    CALL dword ptr [EAX + 0x8]          ; 0056cea1
    ADD ESP,0x4                         ; 0056cea4
    TEST EAX,EAX                        ; 0056cea7
    JZ 0x0056ceb2                       ; 0056cea9 | LAB_0056ceb2
        ;   XREF to: 0056ceb2 (CONDITIONAL_JUMP)
    OR byte ptr [EBX + 0x140],0x4       ; 0056ceab
    PUSH 0x1                            ; 0056ceb2
        ;   Label: LAB_0056ceb2
    MOV EDX,dword ptr [0x006703ec]      ; 0056ceb4 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 0056ceba | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0056cebb | void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056cec0
    PUSH EDI                            ; 0056cec3
    INC ESI                             ; 0056cec4
    CALL core_set.cpp_FUN_00570af0      ; 0056cec5 | undefined core_set.cpp_FUN_00570af0()
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EDI + 0x15acb4]  ; 0056ceca
    ADD ESP,0x4                         ; 0056ced0
    CMP ESI,ECX                         ; 0056ced3
    JL 0x0056ce8e                       ; 0056ced5 | LAB_0056ce8e
        ;   XREF to: 0056ce8e (CONDITIONAL_JUMP)
    PUSH 0x10000                        ; 0056ced7
        ;   Label: LAB_0056ced7
    PUSH 0x10000                        ; 0056cedc
    PUSH 0x10000                        ; 0056cee1
    PUSH EDI                            ; 0056cee6
    CALL core_set.cpp_CDemonSet_FUN_00570ca0 ; 0056cee7 | void core_set.cpp_CDemonSet_FUN_00570ca0(CDemonSet * this_ptr)
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0056ceec
    JMP 0x0056cd9d                      ; 0056ceef | LAB_0056cd9d
        ;   XREF to: 0056cd9d (UNCONDITIONAL_JUMP)
    AND byte ptr [EBX + 0x140],0xfb     ; 0056cef4
        ;   Label: LAB_0056cef4
    JMP 0x0056ce71                      ; 0056cefb | LAB_0056ce71
        ;   XREF to: 0056ce71 (UNCONDITIONAL_JUMP)

