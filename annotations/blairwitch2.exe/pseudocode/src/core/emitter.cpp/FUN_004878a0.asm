; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_FUN_004878a0(CDemonActor *param_1,int param_2)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004878a0
        ;   Label: core_emitter.cpp_FUN_004878a0
    SUB ESP,0x30                        ; 004878a1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004878a4
    CMP dword ptr [ESP + 0x3c],0x0      ; 004878a8
    JNZ 0x004878b4                      ; 004878ad
        ;   XREF to: 004878b4 (CONDITIONAL_JUMP)  ; LAB_004878b4
    ADD ESP,0x30                        ; 004878af
    POP EBX                             ; 004878b2
    RET                                 ; 004878b3
    PUSH EDI                            ; 004878b4
        ;   Label: LAB_004878b4
    PUSH ESI                            ; 004878b5
    PUSH EBX                            ; 004878b6
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004878b7
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004878bc
    PUSH 0x0                            ; 004878bf
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004878c1
    PUSH EBX                            ; 004878c7
    LEA ESI,[ESP + 0x10]                ; 004878c8
    LEA EDI,[ESP + 0x28]                ; 004878cc
    CALL dword ptr [EAX + 0x24]         ; 004878d0
    MOV ECX,0x6                         ; 004878d3
    ADD ESP,0x4                         ; 004878d8
    LEA EAX,[ESP + 0x24]                ; 004878db
    LEA ESI,[ESP + 0xc]                 ; 004878df
    PUSH EAX                            ; 004878e3
    MOVSD.REP ES:EDI,ESI                ; 004878e4
    CALL core_box.cpp_FUN_0041a840      ; 004878e6
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004878eb
    PUSH EBX                            ; 004878ee
    MOV dword ptr [EBX + 0x60c],EAX     ; 004878ef
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004878f5
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004878fa
    POP ESI                             ; 004878fd
    POP EDI                             ; 004878fe
    ADD ESP,0x30                        ; 004878ff
    POP EBX                             ; 00487902
    RET                                 ; 00487903

