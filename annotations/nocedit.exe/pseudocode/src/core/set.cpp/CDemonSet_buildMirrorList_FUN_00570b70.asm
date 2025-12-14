; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a25c
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_0064602b
;   TerminatedCString s_CDemonSet_buildMirrorLis_0064603b
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 g_CGlassClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570b70
        ;   Label: core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70
    PUSH ESI                            ; 00570b71
    PUSH EDI                            ; 00570b72
    PUSH EBP                            ; 00570b73
    SUB ESP,0x18                        ; 00570b74
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00570b77
    MOV EDX,dword ptr [ESI + 0x14d154]  ; 00570b7b
    MOV dword ptr [ESI + 0x15acb4],0x0  ; 00570b81
    XOR EBP,EBP                         ; 00570b8b
    TEST EDX,EDX                        ; 00570b8d
    JLE 0x00570c4c                      ; 00570b8f
        ;   XREF to: 00570c4c (CONDITIONAL_JUMP)  ; LAB_00570c4c
    MOV EDI,ESI                         ; 00570b95
    MOV EBX,dword ptr [0x02d83360]      ; 00570b97 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00570b97
    PUSH EBX                            ; 00570b9d
    MOV EAX,dword ptr [EDI + 0x14d158]  ; 00570b9e
    PUSH EAX                            ; 00570ba4
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00570ba5
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 00570baa
    ADD ESP,0x8                         ; 00570bac
    TEST EAX,EAX                        ; 00570baf
    JZ 0x00570c3a                       ; 00570bb1
        ;   XREF to: 00570c3a (CONDITIONAL_JUMP)  ; LAB_00570c3a
    CMP dword ptr [EAX + 0x1e8],0x0     ; 00570bb7
    JZ 0x00570c3a                       ; 00570bbe
        ;   XREF to: 00570c3a (CONDITIONAL_JUMP)  ; LAB_00570c3a
    PUSH EBX                            ; 00570bc4
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00570bc5
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00570bca
    MOV EAX,ESP                         ; 00570bcd
    PUSH EAX                            ; 00570bcf
    MOV EDX,dword ptr [EBX + 0x154]     ; 00570bd0
    PUSH EBX                            ; 00570bd6
    CALL dword ptr [EDX + 0x14]         ; 00570bd7
    ADD ESP,0x8                         ; 00570bda
    PUSH EAX                            ; 00570bdd
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00570bde
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00570be3
    TEST EAX,EAX                        ; 00570be6
    JZ 0x00570c2b                       ; 00570be8
        ;   XREF to: 00570c2b (CONDITIONAL_JUMP)  ; LAB_00570c2b
    MOV EAX,dword ptr [ESI + 0x15acb4]  ; 00570bea
    MOV dword ptr [ESI + EAX*0x4 + 0x15acb8],EBX ; 00570bf0
    MOV EDX,dword ptr [ESI + 0x15acb4]  ; 00570bf7
    INC EDX                             ; 00570bfd
    MOV dword ptr [ESI + 0x15acb4],EDX  ; 00570bfe
    CMP EDX,0x64                        ; 00570c04
    JL 0x00570c2b                       ; 00570c07
        ;   XREF to: 00570c2b (CONDITIONAL_JUMP)  ; LAB_00570c2b
    MOV EBX,0x64602b                    ; 00570c09 | = "..\\core\\set.cpp"
    MOV EAX,0x11d4                      ; 00570c0e
    PUSH 0x64603b                       ; 00570c13 | = "CDemonSet::buildMirrorList - Too many..."
    MOV dword ptr [0x02f0ca48],EBX      ; 00570c18 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00570c1e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00570c23
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00570c28
    MOV EDX,dword ptr [0x006703ec]      ; 00570c2b | g_CDemonRendererPtr
        ;   Label: LAB_00570c2b
    PUSH EDX                            ; 00570c31 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00570c32
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    INC EBP                             ; 00570c3a
        ;   Label: LAB_00570c3a
    MOV ECX,dword ptr [ESI + 0x14d154]  ; 00570c3b
    ADD EDI,0x4                         ; 00570c41
    CMP EBP,ECX                         ; 00570c44
    JL 0x00570b97                       ; 00570c46
        ;   XREF to: 00570b97 (CONDITIONAL_JUMP)  ; LAB_00570b97
    ADD ESP,0x18                        ; 00570c4c
        ;   Label: LAB_00570c4c
    POP EBP                             ; 00570c4f
    POP EDI                             ; 00570c50
    POP ESI                             ; 00570c51
    POP EBX                             ; 00570c52
    RET                                 ; 00570c53

