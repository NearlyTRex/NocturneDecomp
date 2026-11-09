; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_setupRenderState_FUN_004c7f80(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004c94c0 at 004c94ea
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_0062208c
;   undefined4 DAT_00622090
;   undefined4 DAT_006220bc
;   undefined4 DAT_006220c0
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01cb828c
;   undefined4 DAT_01cb82a0
;   undefined4 DAT_01cb82a4
;   undefined4 DAT_01cb82a8
;   undefined4 DAT_01cb82ac
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7f80
        ;   Label: core_gore.cpp_CBloodSplat_setupRenderState_FUN_004c7f80
    PUSH ESI                            ; 004c7f81
    PUSH EDI                            ; 004c7f82
    PUSH EBP                            ; 004c7f83
    MOV EDX,0x4                         ; 004c7f84
    MOV EBX,0x1                         ; 004c7f89
    MOV ESI,0x2                         ; 004c7f8e
    MOV EDI,0x3                         ; 004c7f93
    MOV EBP,0x80000                     ; 004c7f98
    MOV EAX,0xf80000                    ; 004c7f9d
    PUSH 0x8000                         ; 004c7fa2
    XOR ECX,ECX                         ; 004c7fa7
    MOV dword ptr [0x01cb828c],EDX      ; 004c7fa9 | DAT_01cb828c
    MOV dword ptr [0x01cb82a0],ECX      ; 004c7faf | DAT_01cb82a0
    MOV dword ptr [0x01cb82a4],EBX      ; 004c7fb5 | DAT_01cb82a4
    MOV dword ptr [0x01cb82a8],ESI      ; 004c7fbb | DAT_01cb82a8
    MOV dword ptr [0x01cb82ac],EDI      ; 004c7fc1 | DAT_01cb82ac
    MOV dword ptr [0x0062202c],EBP      ; 004c7fc7 | DAT_0062202c
    MOV [0x00622030],EAX                ; 004c7fcd | DAT_00622030
    MOV [0x0062205c],EAX                ; 004c7fd2 | DAT_0062205c
    MOV [0x00622060],EAX                ; 004c7fd7 | DAT_00622060
    MOV [0x0062208c],EAX                ; 004c7fdc | DAT_0062208c
    MOV EAX,[0x0060b280]                ; 004c7fe1 | DAT_0060b280
    MOV dword ptr [0x00622090],EBP      ; 004c7fe6 | DAT_00622090
    PUSH EAX                            ; 004c7fec | DAT_01ba5c50
    MOV dword ptr [0x006220bc],EBP      ; 004c7fed | DAT_006220bc
    MOV dword ptr [0x006220c0],EBP      ; 004c7ff3 | DAT_006220c0
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004c7ff9
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c7ffe
    POP EBP                             ; 004c8001
    POP EDI                             ; 004c8002
    POP ESI                             ; 004c8003
    POP EBX                             ; 004c8004
    RET                                 ; 004c8005

