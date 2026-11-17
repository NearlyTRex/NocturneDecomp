; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750(CDemonSet *this_ptr,CDemonGlobe *globe)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
;
; XREF[2]:
;   core_cross.cpp_CCross_renderTransparent_FUN_005a6bc0 at 005a6c88
;   core_flame.cpp_CFlame_renderTransparent_FUN_0049f850 at 0049f92f
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   CDemonMission* g_CDemonMission_PTR_00618170 = 01d182f0
;   CDemonRenderer g_CDemonRenderer_01ba5c50
;   undefined4 DAT_01d182f0
;   undefined4 DAT_01d192f8
;   int g_INT_01fc97b0
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
;
; *****************************************************************************

section .text

    MOV EAX,[0x00618170]                ; 00530750 | g_CDemonMission_PTR_00618170 | DAT_01d182f0
        ;   Label: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750
    CMP dword ptr [EAX + 0x1008],0x0    ; 00530755 | DAT_01d192f8
    JNZ 0x00530769                      ; 0053075c
        ;   XREF to: 00530769 (CONDITIONAL_JUMP)  ; LAB_00530769
    MOV ECX,dword ptr [0x01fc97b0]      ; 0053075e | g_INT_01fc97b0
    CMP ECX,0x64                        ; 00530764
    JL 0x0053076a                       ; 00530767
        ;   XREF to: 0053076a (CONDITIONAL_JUMP)  ; LAB_0053076a
    RET                                 ; 00530769
        ;   Label: LAB_00530769
    PUSH ESI                            ; 0053076a
        ;   Label: LAB_0053076a
    PUSH EBX                            ; 0053076b
    MOV EBX,dword ptr [0x0060b280]      ; 0053076c | g_CDemonRenderer_PTR_0060b280
    MOV EDX,dword ptr [ESP + 0x10]      ; 00530772
    PUSH EBX                            ; 00530776 | g_CDemonRenderer_01ba5c50
    MOV dword ptr [ECX*0x4 + 0x1fc97b4],EDX ; 00530777
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80 ; 0053077e
        ;   XREF to: 0046bc80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer * this_ptr)
    MOV EDX,dword ptr [0x01fc97b0]      ; 00530783 | g_INT_01fc97b0
    ADD ESP,0x4                         ; 00530789
    LEA ESI,[EDX + 0x1]                 ; 0053078c
    MOV dword ptr [EDX*0x4 + 0x1fc9944],EAX ; 0053078f
    MOV dword ptr [0x01fc97b0],ESI      ; 00530796 | g_INT_01fc97b0
    POP EBX                             ; 0053079c
    POP ESI                             ; 0053079d
    RET                                 ; 0053079e

