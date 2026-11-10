; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390(CDemonSet *this_ptr,CDemonGlobe *globe)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
;
; XREF[1]:
;   core_flame.cpp_CFlame_renderTransparent_FUN_004a6090 at 004a616f
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00600530
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d81080
;   undefined4 DAT_01d82088
;   undefined4 DAT_0203aec4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860
;
; *****************************************************************************

section .text

    MOV EAX,[0x00600530]                ; 00537390 | DAT_00600530 | DAT_01d81080
        ;   Label: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390
    CMP dword ptr [EAX + 0x1008],0x0    ; 00537395 | DAT_01d82088
    JNZ 0x005373a9                      ; 0053739c
        ;   XREF to: 005373a9 (CONDITIONAL_JUMP)  ; LAB_005373a9
    MOV ECX,dword ptr [0x0203aec4]      ; 0053739e | DAT_0203aec4
    CMP ECX,0x64                        ; 005373a4
    JL 0x005373aa                       ; 005373a7
        ;   XREF to: 005373aa (CONDITIONAL_JUMP)  ; LAB_005373aa
    RET                                 ; 005373a9
        ;   Label: LAB_005373a9
    PUSH ESI                            ; 005373aa
        ;   Label: LAB_005373aa
    PUSH EBX                            ; 005373ab
    MOV EBX,dword ptr [0x005f2afc]      ; 005373ac | DAT_005f2afc
    MOV EDX,dword ptr [ESP + 0x10]      ; 005373b2
    PUSH EBX                            ; 005373b6 | DAT_01bdd7e4
    MOV dword ptr [ECX*0x4 + 0x203aec8],EDX ; 005373b7
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860 ; 005373be
        ;   XREF to: 0046d860 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(CDemonRenderer * this_ptr)
    MOV EDX,dword ptr [0x0203aec4]      ; 005373c3 | DAT_0203aec4
    ADD ESP,0x4                         ; 005373c9
    LEA ESI,[EDX + 0x1]                 ; 005373cc
    MOV dword ptr [EDX*0x4 + 0x203b058],EAX ; 005373cf
    MOV dword ptr [0x0203aec4],ESI      ; 005373d6 | DAT_0203aec4
    POP EBX                             ; 005373dc
    POP ESI                             ; 005373dd
    RET                                 ; 005373de

