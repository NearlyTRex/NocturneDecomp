; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_batman.cpp_FUN_00413970 at 00413a29
;   core_biggs.cpp_FUN_00414e00 at 00414f17
;   core_boneguy.cpp_FUN_0041d000 at 0041d08f
;   core_charactr.cpp_FUN_0042f240 at 0042f2b8
;   core_charactr.cpp_FUN_0042f320 at 0042f375
;   core_charactr.cpp_FUN_004301e0 at 00430350
;   core_dracbrid.cpp_FUN_0047cfe0 at 0047d0ed
;   core_moloch.cpp_FUN_00521070 at 0052119e
;   core_passngr.cpp_FUN_00532cd0 at 00532d44
;   core_succubus.cpp_FUN_00592aa0 at 00592c2a
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01bc120c
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field568_0x238
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042f3c0
;   core_charactr.cpp_FUN_0042e580
;   core_charactr.cpp_FUN_0042ea10
;   core_charactr.cpp_FUN_0042fe00
;   core_charactr.cpp_FUN_00430060
;   core_cloth.cpp_CClothList_render_FUN_00441ff0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e960
        ;   Label: core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960
    PUSH EDI                            ; 0042e961
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042e962
    CMP dword ptr [EBX + 0xb9e8],0x0    ; 0042e966
    JZ 0x0042e9c5                       ; 0042e96d
        ;   XREF to: 0042e9c5 (CONDITIONAL_JUMP)  ; LAB_0042e9c5
    MOV ECX,dword ptr [0x00612560]      ; 0042e96f | DAT_00612560
        ;   Label: LAB_0042e96f
    PUSH ECX                            ; 0042e975 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0042e976
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042e97b
    TEST EAX,EAX                        ; 0042e97e
    JNZ 0x0042e9aa                      ; 0042e980
        ;   XREF to: 0042e9aa (CONDITIONAL_JUMP)  ; LAB_0042e9aa
    CMP dword ptr [EBX + 0x27a4],0x0    ; 0042e982
    JNZ 0x0042e994                      ; 0042e989
        ;   XREF to: 0042e994 (CONDITIONAL_JUMP)  ; LAB_0042e994
    PUSH EBX                            ; 0042e98b
    CALL core_charactr.cpp_FUN_0042fe00 ; 0042e98c
        ;   XREF to: 0042fe00 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042fe00(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042e991
    FLDZ                                ; 0042e994
        ;   Label: LAB_0042e994
    FCOMP float ptr [EBX + 0xb9f0]      ; 0042e996
    FNSTSW AX                           ; 0042e99c
    SAHF                                ; 0042e99e
    JNC 0x0042e9aa                      ; 0042e99f
        ;   XREF to: 0042e9aa (CONDITIONAL_JUMP)  ; LAB_0042e9aa
    PUSH EBX                            ; 0042e9a1
    CALL core_charactr.cpp_FUN_00430060 ; 0042e9a2
        ;   XREF to: 00430060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00430060(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042e9a7
    PUSH EBX                            ; 0042e9aa
        ;   Label: LAB_0042e9aa
    CALL core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042f3c0 ; 0042e9ab
        ;   XREF to: 0042f3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042f3c0(CCharacter * this_ptr)
    MOV EAX,[0x0061d95c]                ; 0042e9b0 | g_CGamePtr | g_CGameInstance
    MOV EDI,dword ptr [EAX + 0x238]     ; 0042e9b5 | g_CGameInstance.field568_0x238
    ADD ESP,0x4                         ; 0042e9bb
    TEST EDI,EDI                        ; 0042e9be
    JNZ 0x0042e9fc                      ; 0042e9c0
        ;   XREF to: 0042e9fc (CONDITIONAL_JUMP)  ; LAB_0042e9fc
    POP EDI                             ; 0042e9c2
    POP EBX                             ; 0042e9c3
    RET                                 ; 0042e9c4
    PUSH ESI                            ; 0042e9c5
        ;   Label: LAB_0042e9c5
    PUSH EBX                            ; 0042e9c6
    CALL core_charactr.cpp_FUN_0042e580 ; 0042e9c7
        ;   XREF to: 0042e580 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042e580()
    ADD ESP,0x4                         ; 0042e9cc
    PUSH 0x0                            ; 0042e9cf
    PUSH 0x1                            ; 0042e9d1
    PUSH -0x1                           ; 0042e9d3
    PUSH -0x1                           ; 0042e9d5
    LEA ESI,[EBX + 0x158]               ; 0042e9d7
    PUSH ESI                            ; 0042e9dd
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810 ; 0042e9de
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0042e9e3
    PUSH ESI                            ; 0042e9e6
    LEA EAX,[EBX + 0x2ca0]              ; 0042e9e7
    PUSH EAX                            ; 0042e9ed
    CALL core_cloth.cpp_CClothList_render_FUN_00441ff0 ; 0042e9ee
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_render_FUN_00441ff0(CClothList * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 0042e9f3
    POP ESI                             ; 0042e9f6
    JMP 0x0042e96f                      ; 0042e9f7
        ;   XREF to: 0042e96f (UNCONDITIONAL_JUMP)  ; LAB_0042e96f
    PUSH EBX                            ; 0042e9fc
        ;   Label: LAB_0042e9fc
    CALL core_charactr.cpp_FUN_0042ea10 ; 0042e9fd
        ;   XREF to: 0042ea10 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042ea10(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042ea02
    POP EDI                             ; 0042ea05
    POP EBX                             ; 0042ea06
    RET                                 ; 0042ea07

