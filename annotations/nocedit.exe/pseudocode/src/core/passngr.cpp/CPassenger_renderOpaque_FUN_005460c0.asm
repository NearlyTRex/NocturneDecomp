; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_passngr_cpp_CPassenger_renderOpaque_FUN_005460c0(CPassenger *this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0
;   core_morph.cpp_CMorph_FUN_0052b600
;   core_morph.cpp_CMorph_FUN_0052bae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005460c0
        ;   Label: core_passngr.cpp_CPassenger_renderOpaque_FUN_005460c0
    SUB ESP,0x18                        ; 005460c1
    MOV EBX,dword ptr [ESP + 0x20]      ; 005460c4
    FLD float ptr [EBX + 0x20440]       ; 005460c8
    FLD1                                ; 005460ce
    FCOMPP                              ; 005460d0
    FNSTSW AX                           ; 005460d2
    SAHF                                ; 005460d4
    JC 0x005460e0                       ; 005460d5
        ;   XREF to: 005460e0 (CONDITIONAL_JUMP)  ; LAB_005460e0
    CMP dword ptr [EBX + 0x240c],0x0    ; 005460d7
    JZ 0x005460e7                       ; 005460de
        ;   XREF to: 005460e7 (CONDITIONAL_JUMP)  ; LAB_005460e7
    XOR EAX,EAX                         ; 005460e0
        ;   Label: LAB_005460e0
    ADD ESP,0x18                        ; 005460e2
    POP EBX                             ; 005460e5
    RET                                 ; 005460e6
    PUSH EDI                            ; 005460e7
        ;   Label: LAB_005460e7
    PUSH ESI                            ; 005460e8
    PUSH EBX                            ; 005460e9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005460ea
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005460ef
    LEA EAX,[ESP + 0x8]                 ; 005460f2
    PUSH EAX                            ; 005460f6
    MOV ESI,dword ptr [EBX + 0x154]     ; 005460f7
    PUSH EBX                            ; 005460fd
    CALL dword ptr [ESI + 0x14]         ; 005460fe
    ADD ESP,0x8                         ; 00546101
    PUSH EAX                            ; 00546104
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00546105
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0054610a
    MOV EDI,EAX                         ; 0054610d
    TEST EAX,EAX                        ; 0054610f
    JZ 0x00546128                       ; 00546111
        ;   XREF to: 00546128 (CONDITIONAL_JUMP)  ; LAB_00546128
    TEST dword ptr [EBX + 0x20440],0x7fffffff ; 00546113
    JNZ 0x0054613a                      ; 0054611d
        ;   XREF to: 0054613a (CONDITIONAL_JUMP)  ; LAB_0054613a
    PUSH EBX                            ; 0054611f
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0 ; 00546120
        ;   XREF to: 00429aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00546125
    PUSH EBX                            ; 00546128
        ;   Label: LAB_00546128
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00546129
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054612e
    MOV EAX,EDI                         ; 00546131
    POP ESI                             ; 00546133
    POP EDI                             ; 00546134
    ADD ESP,0x18                        ; 00546135
    POP EBX                             ; 00546138
    RET                                 ; 00546139
    PUSH 0x0                            ; 0054613a
        ;   Label: LAB_0054613a
    LEA EAX,[EBX + 0x158]               ; 0054613c
    PUSH EAX                            ; 00546142
    PUSH 0x0                            ; 00546143
    LEA ESI,[EBX + 0x1f814]             ; 00546145
    PUSH ESI                            ; 0054614b
    CALL core_morph.cpp_CMorph_FUN_0052b600 ; 0054614c
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b600(CMorph * this_ptr, int model_index)
    ADD ESP,0x10                        ; 00546151
    MOV EAX,dword ptr [EBX + 0x1f810]   ; 00546154
    PUSH 0x0                            ; 0054615a
    ADD EAX,0x158                       ; 0054615c
    PUSH EAX                            ; 00546161
    PUSH 0x1                            ; 00546162
    PUSH ESI                            ; 00546164
    CALL core_morph.cpp_CMorph_FUN_0052b600 ; 00546165
        ;   XREF to: 0052b600 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b600(CMorph * this_ptr, int model_index)
    ADD ESP,0x10                        ; 0054616a
    PUSH dword ptr [EBX + 0x20440]      ; 0054616d
    PUSH ESI                            ; 00546173
    CALL core_morph.cpp_CMorph_FUN_0052bae0 ; 00546174
        ;   XREF to: 0052bae0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052bae0(CMorph * this_ptr)
    ADD ESP,0x8                         ; 00546179
    PUSH EBX                            ; 0054617c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0054617d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00546182
    MOV EAX,EDI                         ; 00546185
    POP ESI                             ; 00546187
    POP EDI                             ; 00546188
    ADD ESP,0x18                        ; 00546189
    POP EBX                             ; 0054618c
    RET                                 ; 0054618d

