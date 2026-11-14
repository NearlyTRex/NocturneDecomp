; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_cross_cpp_CCross_renderTransparent_FUN_005a6bc0(CCross *this_ptr)
;
; Parameters:
; CCross *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f071d
;   undefined4 DAT_005f0725
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_026686d4
;   undefined4 DAT_026686d8
;   undefined4 DAT_026686f4
;   undefined4 DAT_026686f8
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750
;   core_set.cpp_FUN_005306e0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6bc0
        ;   Label: core_cross.cpp_CCross_renderTransparent_FUN_005a6bc0
    PUSH ESI                            ; 005a6bc1
    PUSH EDI                            ; 005a6bc2
    SUB ESP,0x18                        ; 005a6bc3
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a6bc6
    MOV AH,byte ptr [0x026686f8]        ; 005a6bca | DAT_026686f8
    TEST AH,0x1                         ; 005a6bd0
    JZ 0x005a6cb1                       ; 005a6bd3
        ;   XREF to: 005a6cb1 (CONDITIONAL_JUMP)  ; LAB_005a6cb1
    MOV EDI,ESP                         ; 005a6bd9
        ;   Label: LAB_005a6bd9
    LEA ESI,[EBX + 0x20]                ; 005a6bdb
    MOVSD ES:EDI,ESI                    ; 005a6bde
    MOVSD ES:EDI,ESI                    ; 005a6bdf
    MOVSD ES:EDI,ESI                    ; 005a6be0
    CMP dword ptr [EBX + 0x844],0x0     ; 005a6be1
    JNZ 0x005a6cc1                      ; 005a6be8
        ;   XREF to: 005a6cc1 (CONDITIONAL_JUMP)  ; LAB_005a6cc1
    MOV EAX,ESP                         ; 005a6bee
        ;   Label: LAB_005a6bee
    PUSH EAX                            ; 005a6bf0
    PUSH 0x26686b8                      ; 005a6bf1
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810 ; 005a6bf6
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_00448810(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 005a6bfb
    FLD float ptr [EBX + 0x828]         ; 005a6bfe
    FLD ST0                             ; 005a6c04
    FMUL double ptr [0x005f071d]        ; 005a6c06 | DAT_005f071d
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a6c0c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x14]        ; 005a6c11
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a6c15
    MOV dword ptr [ESP + 0x14],EAX      ; 005a6c19
    FILD dword ptr [ESP + 0x14]         ; 005a6c1d
    FMUL float ptr [EBX + 0x830]        ; 005a6c21
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a6c27
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x14]        ; 005a6c2c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a6c30
    MOV EDX,EAX                         ; 005a6c34
    SAR EDX,0x1f                        ; 005a6c36
    MOV [0x026686f4],EAX                ; 005a6c39 | DAT_026686f4
    SHL EDX,0x8                         ; 005a6c3e
    SBB EAX,EDX                         ; 005a6c41
    SAR EAX,0x8                         ; 005a6c43
    MOV EDX,EAX                         ; 005a6c46
    SAR EDX,0x1f                        ; 005a6c48
    SHL EDX,0x2                         ; 005a6c4b
    SBB EAX,EDX                         ; 005a6c4e
    SAR EAX,0x2                         ; 005a6c50
    FMUL double ptr [0x005f0725]        ; 005a6c53 | DAT_005f0725
    SUB ESP,0x4                         ; 005a6c59
    MOV [0x026686d4],AL                 ; 005a6c5c | DAT_026686d4
    FSTP float ptr [ESP]                ; 005a6c61
    PUSH 0x26686b8                      ; 005a6c64
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860 ; 005a6c69
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 005a6c6e
    PUSH 0x26686b8                      ; 005a6c71
    MOV EDI,dword ptr [0x0061b5a8]      ; 005a6c76 | g_CDemonSetPtr
    MOV ESI,0x1                         ; 005a6c7c
    PUSH EDI                            ; 005a6c81
    MOV dword ptr [0x026686d8],ESI      ; 005a6c82 | DAT_026686d8
    CALL core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750 ; 005a6c88
        ;   XREF to: 00530750 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 005a6c8d
    MOV EAX,dword ptr [EBX + 0x6d0]     ; 005a6c90
    MOV dword ptr [EBX + 0x844],ESI     ; 005a6c96
    ADD ESP,0x18                        ; 005a6c9c
    POP EDI                             ; 005a6c9f
    POP ESI                             ; 005a6ca0
    POP EBX                             ; 005a6ca1
    LEA EAX,[EAX]                       ; 005a6ca2
    LEA EDX,[EDX]                       ; 005a6ca8
    MOV EAX,EAX                         ; 005a6cae
    RET                                 ; 005a6cb0
        ;   Label: LAB_005a6cb0
    MOV DL,AH                           ; 005a6cb1
        ;   Label: LAB_005a6cb1
    OR DL,0x1                           ; 005a6cb3
    MOV byte ptr [0x026686f8],DL        ; 005a6cb6 | DAT_026686f8
    JMP 0x005a6bd9                      ; 005a6cbc
        ;   XREF to: 005a6bd9 (UNCONDITIONAL_JUMP)  ; LAB_005a6bd9
    PUSH 0x26686b8                      ; 005a6cc1
        ;   Label: LAB_005a6cc1
    MOV ECX,dword ptr [0x0061b5a8]      ; 005a6cc6 | g_CDemonSetPtr
    PUSH ECX                            ; 005a6ccc
    CALL core_set.cpp_FUN_005306e0      ; 005a6ccd
        ;   XREF to: 005306e0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_005306e0()
    ADD ESP,0x8                         ; 005a6cd2
    MOV dword ptr [EBX + 0x844],0x0     ; 005a6cd5
    JMP 0x005a6bee                      ; 005a6cdf
        ;   XREF to: 005a6bee (UNCONDITIONAL_JUMP)  ; LAB_005a6bee

