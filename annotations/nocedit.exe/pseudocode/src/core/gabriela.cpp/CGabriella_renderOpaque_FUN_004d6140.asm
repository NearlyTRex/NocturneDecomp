; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004d6140(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_0062b075 = 0.900000000000000
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 g_CDynamiteClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;   core_cloth.cpp_CCloth_render_FUN_0043bae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6140
        ;   Label: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004d6140
    PUSH ESI                            ; 004d6141
    PUSH EDI                            ; 004d6142
    PUSH EBP                            ; 004d6143
    MOV EBP,ESP                         ; 004d6144
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d6146
    PUSH EBX                            ; 004d6149
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 004d614a
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d614f
    MOV ESI,EAX                         ; 004d6152
    TEST EAX,EAX                        ; 004d6154
    JNZ 0x004d6173                      ; 004d6156
        ;   XREF to: 004d6173 (CONDITIONAL_JUMP)  ; LAB_004d6173
    TEST ESI,ESI                        ; 004d6158
        ;   Label: LAB_004d6158
    JZ 0x004d616c                       ; 004d615a
        ;   XREF to: 004d616c (CONDITIONAL_JUMP)  ; LAB_004d616c
    LEA EDI,[EBX + 0x1f738]             ; 004d615c
    MOV EAX,dword ptr [EDI + 0x330]     ; 004d6162
    TEST EAX,EAX                        ; 004d6168
    JNZ 0x004d619e                      ; 004d616a
        ;   XREF to: 004d619e (CONDITIONAL_JUMP)  ; LAB_004d619e
    MOV EAX,ESI                         ; 004d616c
        ;   Label: LAB_004d616c
    POP EBP                             ; 004d616e
    POP EDI                             ; 004d616f
    POP ESI                             ; 004d6170
    POP EBX                             ; 004d6171
    RET                                 ; 004d6172
    PUSH EBX                            ; 004d6173
        ;   Label: LAB_004d6173
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004d6174
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004d6179
    PUSH 0x0                            ; 004d617c
    LEA EAX,[EBX + 0x1fc14]             ; 004d617e
    PUSH EAX                            ; 004d6184
    CALL core_cloth.cpp_CCloth_render_FUN_0043bae0 ; 004d6185
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_0043bae0(CCloth * this_ptr, int use_joined_light)
    ADD ESP,0x8                         ; 004d618a
    MOV EDX,dword ptr [0x006703ec]      ; 004d618d | g_CDemonRendererPtr2
    PUSH EDX                            ; 004d6193 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004d6194
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004d6199
    JMP 0x004d6158                      ; 004d619c
        ;   XREF to: 004d6158 (UNCONDITIONAL_JUMP)  ; LAB_004d6158
    PUSH EAX                            ; 004d619e
        ;   Label: LAB_004d619e
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d619f
    CALL dword ptr [EDX + 0x8]          ; 004d61a5
    FLD float ptr [EBX + 0x1fbdc]       ; 004d61a8
    ADD ESP,0x4                         ; 004d61ae
    FCOMP double ptr [0x0062b075]       ; 004d61b1 | DOUBLE_0062b075
    FNSTSW AX                           ; 004d61b7
    SAHF                                ; 004d61b9
    JBE 0x004d616c                      ; 004d61ba
        ;   XREF to: 004d616c (CONDITIONAL_JUMP)  ; LAB_004d616c
    MOV ECX,dword ptr [0x02ceed20]      ; 004d61bc | g_CDynamiteClassInfo.name_hash
    PUSH ECX                            ; 004d61c2
    MOV EAX,dword ptr [EDI + 0x330]     ; 004d61c3
    PUSH EAX                            ; 004d61c9
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d61ca
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d61cf
    TEST EAX,EAX                        ; 004d61d2
    JZ 0x004d6201                       ; 004d61d4
        ;   XREF to: 004d6201 (CONDITIONAL_JUMP)  ; LAB_004d6201
    FLD float ptr [EAX + 0x580]         ; 004d61d6
    FMUL ST0                            ; 004d61dc
    FLD float ptr [EAX + 0x57c]         ; 004d61de
    FMUL ST0                            ; 004d61e4
    FADDP                               ; 004d61e6
    FLD float ptr [EAX + 0x584]         ; 004d61e8
    FMUL ST0                            ; 004d61ee
    FADDP                               ; 004d61f0
    FSQRT                               ; 004d61f2
    FLDZ                                ; 004d61f4
    FCOMPP                              ; 004d61f6
    FNSTSW AX                           ; 004d61f8
    SAHF                                ; 004d61fa
    JNC 0x004d616c                      ; 004d61fb
        ;   XREF to: 004d616c (CONDITIONAL_JUMP)  ; LAB_004d616c
    LEA EAX,[EBX + 0x1f738]             ; 004d6201
        ;   Label: LAB_004d6201
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d6207
    PUSH EAX                            ; 004d620d
    MOV EBX,dword ptr [EAX + 0x154]     ; 004d620e
    CALL dword ptr [EBX + 0x104]        ; 004d6214
    ADD ESP,0x4                         ; 004d621a
    MOV EAX,ESI                         ; 004d621d
    POP EBP                             ; 004d621f
    POP EDI                             ; 004d6220
    POP ESI                             ; 004d6221
    POP EBX                             ; 004d6222
    RET                                 ; 004d6223

