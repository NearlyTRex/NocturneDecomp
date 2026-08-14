; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005f1820(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0x50]:48  local_50
; CVector3f        Stack[-0x20]:12  local_20
; CVector3f        Stack[-0x14]:12  local_14
;
; Referenced Globals:
;   float FLOAT_00657db0 = -1
;   double DOUBLE_00657db4 = 0.800000000000000
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   UVector3 g_ZeroVector
;   CVector3f g_WerewolfEyeGlowOffsetLeft
;   CVector3f g_WerewolfEyeGlowOffsetRight
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0
;   core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005f1230
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f1820
        ;   Label: core_werewolf.cpp_CWerewolf_renderTransparent_FUN_005f1820
    PUSH EBP                            ; 005f1821
    SUB ESP,0x48                        ; 005f1822
    MOV EBX,dword ptr [ESP + 0x54]      ; 005f1825
    CMP dword ptr [EBX + 0x2620],0x0    ; 005f1829
    JZ 0x005f1948                       ; 005f1830
        ;   XREF to: 005f1948 (CONDITIONAL_JUMP)  ; LAB_005f1948
    CMP dword ptr [EBX + 0xbe28],0x0    ; 005f1836
    JNZ 0x005f1948                      ; 005f183d
        ;   XREF to: 005f1948 (CONDITIONAL_JUMP)  ; LAB_005f1948
    FLD float ptr [EBX + 0xbf00]        ; 005f1843
    FLD1                                ; 005f1849
    FCOMPP                              ; 005f184b
    FNSTSW AX                           ; 005f184d
    SAHF                                ; 005f184f
    JC 0x005f1950                       ; 005f1850
        ;   XREF to: 005f1950 (CONDITIONAL_JUMP)  ; LAB_005f1950
    FLD float ptr [EBX + 0xbf00]        ; 005f1856
        ;   Label: LAB_005f1856
    FCOMP double ptr [0x00657db4]       ; 005f185c | DOUBLE_00657db4
    FNSTSW AX                           ; 005f1862
    SAHF                                ; 005f1864
    JA 0x005f1967                       ; 005f1865
        ;   XREF to: 005f1967 (CONDITIONAL_JUMP)  ; LAB_005f1967
    CMP dword ptr [EBX + 0x2620],0x0    ; 005f186b
    JZ 0x005f1933                       ; 005f1872
        ;   XREF to: 005f1933 (CONDITIONAL_JUMP)  ; LAB_005f1933
    PUSH EDI                            ; 005f1878
    PUSH ESI                            ; 005f1879
    PUSH EBX                            ; 005f187a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005f187b
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0xbed0]    ; 005f1880
    LEA EAX,[EDX*0x4 + 0x0]             ; 005f1886
    SUB EAX,EDX                         ; 005f188d
    SHL EAX,0x4                         ; 005f188f
    ADD ESP,0x4                         ; 005f1892
    LEA ESI,[EBX + EAX*0x1 + 0xfd8]     ; 005f1895
    LEA EAX,[ESP + 0x44]                ; 005f189c
    LEA EDI,[ESP + 0x8]                 ; 005f18a0
    PUSH EAX                            ; 005f18a4
    LEA EAX,[ESP + 0xc]                 ; 005f18a5
    JMP 0x03fc3b28                      ; 005f18a9
        ;   XREF to: 03fc3b28 (UNCONDITIONAL_JUMP)  ; LAB_03fc3b28
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005f18b1
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f * matrix_in, CVector3f * euler_out)
        ;   Label: LAB_005f18b1
    ADD ESP,0x8                         ; 005f18b6
    LEA EAX,[ESP + 0x38]                ; 005f18b9
    PUSH EAX                            ; 005f18bd
    LEA EAX,[ESP + 0xc]                 ; 005f18be
    PUSH EAX                            ; 005f18c2
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005f18c3
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 005f18c8
    LEA EAX,[ESP + 0x38]                ; 005f18cb
    PUSH EAX                            ; 005f18cf
    PUSH 0x3f87558                      ; 005f18d0 | g_ZeroVector
    MOV EDI,dword ptr [0x006703ec]      ; 005f18d5 | g_CDemonRendererPtr2
    PUSH EDI                            ; 005f18db | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005f18dc
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 005f18e1
    PUSH 0x0                            ; 005f18e4
    LEA EAX,[ESP + 0x48]                ; 005f18e6
    PUSH EAX                            ; 005f18ea
    MOV EBP,dword ptr [0x006703ec]      ; 005f18eb | g_CDemonRendererPtr2
    PUSH EBP                            ; 005f18f1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005f18f2
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 005f18f7
    PUSH 0x3f96b44                      ; 005f18fa | g_WerewolfEyeGlowOffsetLeft
    PUSH EBX                            ; 005f18ff
    CALL core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005f1230 ; 005f1900
        ;   XREF to: 005f1230 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005f1230(CWerewolf * this_ptr, CVector3f * eye_position)
    ADD ESP,0x8                         ; 005f1905
    PUSH 0x3f96b50                      ; 005f1908 | g_WerewolfEyeGlowOffsetRight
    PUSH EBX                            ; 005f190d
    CALL core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005f1230 ; 005f190e
        ;   XREF to: 005f1230 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005f1230(CWerewolf * this_ptr, CVector3f * eye_position)
    ADD ESP,0x8                         ; 005f1913
    PUSH EBX                            ; 005f1916
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005f1917
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005f191c
    PUSH EBX                            ; 005f191f
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005f1920
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005f1925
    PUSH EBX                            ; 005f1928
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005f1929
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005f192e
    POP ESI                             ; 005f1931
    POP EDI                             ; 005f1932
    PUSH EBX                            ; 005f1933
        ;   Label: LAB_005f1933
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0 ; 005f1934
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005f1939
    MOV EAX,dword ptr [EBX + 0x2620]    ; 005f193c
    ADD ESP,0x48                        ; 005f1942
    POP EBP                             ; 005f1945
    POP EBX                             ; 005f1946
    RET                                 ; 005f1947
    XOR EAX,EAX                         ; 005f1948
        ;   Label: LAB_005f1948
    ADD ESP,0x48                        ; 005f194a
    POP EBP                             ; 005f194d
    POP EBX                             ; 005f194e
    RET                                 ; 005f194f
    FLD float ptr [EBX + 0xbf00]        ; 005f1950
        ;   Label: LAB_005f1950
    FADD float ptr [0x00657db0]         ; 005f1956 | FLOAT_00657db0
    FSTP float ptr [EBX + 0xbf00]       ; 005f195c
    JMP 0x005f1856                      ; 005f1962
        ;   XREF to: 005f1856 (UNCONDITIONAL_JUMP)  ; LAB_005f1856
    PUSH EBX                            ; 005f1967
        ;   Label: LAB_005f1967
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0 ; 005f1968
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005f196d
    ADD ESP,0x48                        ; 005f1970
    POP EBP                             ; 005f1973
    POP EBX                             ; 005f1974
    RET                                 ; 005f1975
    MOV ECX,0xc                         ; 03fc3b28
        ;   Label: LAB_03fc3b28
    PUSH EAX                            ; 03fc3b2d
    MOV ECX,dword ptr [ESI]             ; 03fc3b2e
    MOV dword ptr [EDI],ECX             ; 03fc3b30
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3b32
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3b35
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3b38
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3b3b
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3b3e
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3b41
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3b44
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3b47
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3b4a
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3b4d
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3b50
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3b53
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3b56
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3b59
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3b5c
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3b5f
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3b62
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3b65
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3b68
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3b6b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3b6e
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3b71
    ADD ESI,0x30                        ; 03fc3b74
    ADD EDI,0x30                        ; 03fc3b77
    XOR ECX,ECX                         ; 03fc3b7a
    JMP 0x005f18b1                      ; 03fc3b7c
        ;   XREF to: 005f18b1 (UNCONDITIONAL_JUMP)  ; LAB_005f18b1

