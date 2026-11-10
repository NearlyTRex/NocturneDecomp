; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_lever_cpp_CLever_renderOpaque_FUN_004e2140(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2140
        ;   Label: core_lever.cpp_CLever_renderOpaque_FUN_004e2140
    PUSH ESI                            ; 004e2141
    PUSH EDI                            ; 004e2142
    PUSH EBP                            ; 004e2143
    MOV EBP,ESP                         ; 004e2144
    SUB ESP,0x34                        ; 004e2146
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e2149
    PUSH EBX                            ; 004e214c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004e214d
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e2152
    PUSH 0x0                            ; 004e2155
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e2157
    PUSH EBX                            ; 004e215d
    LEA ESI,[EBP + -0x1c]               ; 004e215e
    LEA EDI,[EBP + -0x34]               ; 004e2161
    CALL dword ptr [EAX + 0x24]         ; 004e2164
    MOV ECX,0x6                         ; 004e2167
    ADD ESP,0x4                         ; 004e216c
    LEA EAX,[EBP + -0x34]               ; 004e216f
    LEA ESI,[EBP + -0x1c]               ; 004e2172
    PUSH EAX                            ; 004e2175
    MOVSD.REP ES:EDI,ESI                ; 004e2176
    CALL core_box.cpp_FUN_0041a840      ; 004e2178
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004e217d
    MOV EDI,EAX                         ; 004e2180
    TEST EAX,EAX                        ; 004e2182
    JNZ 0x004e2198                      ; 004e2184
        ;   XREF to: 004e2198 (CONDITIONAL_JUMP)  ; LAB_004e2198
    PUSH EBX                            ; 004e2186
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004e2187
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e218c
    MOV EAX,EDI                         ; 004e218f
    MOV ESP,EBP                         ; 004e2191
    POP EBP                             ; 004e2193
    POP EDI                             ; 004e2194
    POP ESI                             ; 004e2195
    POP EBX                             ; 004e2196
    RET                                 ; 004e2197
    PUSH -0x1                           ; 004e2198
        ;   Label: LAB_004e2198
    LEA ESI,[EBX + 0x2b4]               ; 004e219a
    PUSH ESI                            ; 004e21a0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004e21a1
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 004e21a6
    DEC EAX                             ; 004e21ac
    MOV dword ptr [EBP + -0x4],EAX      ; 004e21ad
    ADD ESP,0x4                         ; 004e21b0
    FILD dword ptr [EBP + -0x4]         ; 004e21b3
    FMUL float ptr [EBX + 0x438]        ; 004e21b6
    SUB ESP,0x4                         ; 004e21bc
    FSTP float ptr [ESP]                ; 004e21bf
    PUSH ESI                            ; 004e21c2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004e21c3
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004e21c8
    PUSH EBX                            ; 004e21cb
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004e21cc
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e21d1
    MOV EAX,EDI                         ; 004e21d4
    MOV ESP,EBP                         ; 004e21d6
    POP EBP                             ; 004e21d8
    POP EDI                             ; 004e21d9
    POP ESI                             ; 004e21da
    POP EBX                             ; 004e21db
    RET                                 ; 004e21dc

