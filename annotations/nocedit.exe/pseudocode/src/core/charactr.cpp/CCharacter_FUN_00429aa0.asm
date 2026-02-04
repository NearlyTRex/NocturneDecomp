; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_00429aa0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 00417456
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0 at 00418ab3
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_0041d1b0 at 0041d22b
;   core_charactr.cpp_CCharacter_renderBackground_FUN_0042a390 at 0042a3cd
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 at 0042a324
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 at 00485cda
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750 at 0052986a
;   core_passngr.cpp_CPassenger_renderOpaque_FUN_005460c0 at 00546120
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590 at 005c76fd
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonRenderer g_CDemonRendererInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81cb8
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_00429b40
;   core_charactr.cpp_CCharacter_FUN_0042a420
;   core_charactr.cpp_CCharacter_FUN_0042ad00
;   core_charactr.cpp_CCharacter_FUN_0042af60
;   core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429aa0
        ;   Label: core_charactr.cpp_CCharacter_FUN_00429aa0
    PUSH EDI                            ; 00429aa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00429aa2
    MOV EDX,dword ptr [EBX + 0xb7d8]    ; 00429aa6
    TEST EDX,EDX                        ; 00429aac
    JZ 0x00429b06                       ; 00429aae
        ;   XREF to: 00429b06 (CONDITIONAL_JUMP)  ; LAB_00429b06
    MOV ECX,dword ptr [0x006703ec]      ; 00429ab0 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_00429ab0
    PUSH ECX                            ; 00429ab6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00429ab7
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00429abc
    TEST EAX,EAX                        ; 00429abf
    JNZ 0x00429aeb                      ; 00429ac1
        ;   XREF to: 00429aeb (CONDITIONAL_JUMP)  ; LAB_00429aeb
    CMP dword ptr [EBX + 0x2614],0x0    ; 00429ac3
    JNZ 0x00429ad5                      ; 00429aca
        ;   XREF to: 00429ad5 (CONDITIONAL_JUMP)  ; LAB_00429ad5
    PUSH EBX                            ; 00429acc
    CALL core_charactr.cpp_CCharacter_FUN_0042ad00 ; 00429acd
        ;   XREF to: 0042ad00 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ad00(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00429ad2
    FLDZ                                ; 00429ad5
        ;   Label: LAB_00429ad5
    FCOMP float ptr [EBX + 0xb7e0]      ; 00429ad7
    FNSTSW AX                           ; 00429add
    SAHF                                ; 00429adf
    JNC 0x00429aeb                      ; 00429ae0
        ;   XREF to: 00429aeb (CONDITIONAL_JUMP)  ; LAB_00429aeb
    PUSH EBX                            ; 00429ae2
    CALL core_charactr.cpp_CCharacter_FUN_0042af60 ; 00429ae3
        ;   XREF to: 0042af60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042af60(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00429ae8
    PUSH EBX                            ; 00429aeb
        ;   Label: LAB_00429aeb
    CALL core_charactr.cpp_CCharacter_FUN_0042a420 ; 00429aec
        ;   XREF to: 0042a420 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042a420(CCharacter * this_ptr)
    MOV EAX,[0x0067b654]                ; 00429af1 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x21c]     ; 00429af6 | DAT_02d81cb8
    ADD ESP,0x4                         ; 00429afc
    TEST EDI,EDI                        ; 00429aff
    JNZ 0x00429b30                      ; 00429b01
        ;   XREF to: 00429b30 (CONDITIONAL_JUMP)  ; LAB_00429b30
    POP EDI                             ; 00429b03
    POP EBX                             ; 00429b04
    RET                                 ; 00429b05
    PUSH ESI                            ; 00429b06
        ;   Label: LAB_00429b06
    PUSH EDX                            ; 00429b07
    PUSH 0x1                            ; 00429b08
    PUSH -0x1                           ; 00429b0a
    PUSH -0x1                           ; 00429b0c
    LEA ESI,[EBX + 0x158]               ; 00429b0e
    PUSH ESI                            ; 00429b14
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 00429b15
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00429b1a
    PUSH ESI                            ; 00429b1d
    LEA EAX,[EBX + 0x2a94]              ; 00429b1e
    PUSH EAX                            ; 00429b24
    CALL core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320 ; 00429b25
        ;   XREF to: 0043c320 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320()
    ADD ESP,0x8                         ; 00429b2a
    POP ESI                             ; 00429b2d
    JMP 0x00429ab0                      ; 00429b2e
        ;   XREF to: 00429ab0 (UNCONDITIONAL_JUMP)  ; LAB_00429ab0
    PUSH EBX                            ; 00429b30
        ;   Label: LAB_00429b30
    CALL core_charactr.cpp_CCharacter_FUN_00429b40 ; 00429b31
        ;   XREF to: 00429b40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429b40(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00429b36
    POP EDI                             ; 00429b39
    POP EBX                             ; 00429b3a
    RET                                 ; 00429b3b

