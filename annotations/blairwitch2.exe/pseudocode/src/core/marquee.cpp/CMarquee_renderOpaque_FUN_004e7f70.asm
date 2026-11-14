; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_marquee_cpp_CMarquee_renderOpaque_FUN_004e7f70(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7f70
        ;   Label: core_marquee.cpp_CMarquee_renderOpaque_FUN_004e7f70
    SUB ESP,0x30                        ; 004e7f71
    MOV EBX,dword ptr [ESP + 0x38]      ; 004e7f74
    MOV EDX,dword ptr [0x0060b280]      ; 004e7f78 | DAT_0060b280
    PUSH EDX                            ; 004e7f7e
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004e7f7f
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e7f84
    TEST EAX,EAX                        ; 004e7f87
    JZ 0x004e7f92                       ; 004e7f89
        ;   XREF to: 004e7f92 (CONDITIONAL_JUMP)  ; LAB_004e7f92
    XOR EAX,EAX                         ; 004e7f8b
    ADD ESP,0x30                        ; 004e7f8d
    POP EBX                             ; 004e7f90
    RET                                 ; 004e7f91
    PUSH EDI                            ; 004e7f92
        ;   Label: LAB_004e7f92
    PUSH ESI                            ; 004e7f93
    PUSH EBX                            ; 004e7f94
    MOV dword ptr [EBX + 0x2f8],EAX     ; 004e7f95
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004e7f9b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e7fa0
    PUSH 0x0                            ; 004e7fa3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e7fa5
    PUSH EBX                            ; 004e7fab
    LEA ESI,[ESP + 0x28]                ; 004e7fac
    LEA EDI,[ESP + 0x10]                ; 004e7fb0
    CALL dword ptr [EAX + 0x24]         ; 004e7fb4
    MOV ECX,0x6                         ; 004e7fb7
    ADD ESP,0x4                         ; 004e7fbc
    LEA EAX,[ESP + 0xc]                 ; 004e7fbf
    LEA ESI,[ESP + 0x24]                ; 004e7fc3
    PUSH EAX                            ; 004e7fc7
    MOVSD.REP ES:EDI,ESI                ; 004e7fc8
    CALL core_box.cpp_FUN_0041a840      ; 004e7fca
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004e7fcf
    PUSH EBX                            ; 004e7fd2
    MOV dword ptr [EBX + 0x2f8],EAX     ; 004e7fd3
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004e7fd9
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e7fde
    MOV EAX,dword ptr [EBX + 0x2f8]     ; 004e7fe1
    POP ESI                             ; 004e7fe7
    POP EDI                             ; 004e7fe8
    ADD ESP,0x30                        ; 004e7fe9
    POP EBX                             ; 004e7fec
    RET                                 ; 004e7fed

