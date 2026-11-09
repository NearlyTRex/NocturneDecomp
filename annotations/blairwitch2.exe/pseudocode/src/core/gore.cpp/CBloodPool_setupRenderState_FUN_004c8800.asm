; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_gore.cpp_CGore_renderDecals_FUN_004c94c0 at 004c9535
;   core_gore.cpp_FUN_004c9670 at 004c96d5
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
;   undefined4 DAT_01cb828c
;   undefined4 DAT_01cb8290
;   undefined4 DAT_01cb8294
;   undefined4 DAT_01cb8298
;   undefined4 DAT_01cb829c
;   undefined4 DAT_01cb82a0
;   ... and 3 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8800
        ;   Label: core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800
    PUSH ESI                            ; 004c8801
    PUSH EDI                            ; 004c8802
    PUSH EBP                            ; 004c8803
    MOV EDX,0x4                         ; 004c8804
    MOV EBX,0x1                         ; 004c8809
    MOV ESI,0x2                         ; 004c880e
    MOV EDI,0x3                         ; 004c8813
    MOV EBP,0x80000                     ; 004c8818
    MOV EAX,0xf80000                    ; 004c881d
    XOR ECX,ECX                         ; 004c8822
    MOV dword ptr [0x01cb828c],EDX      ; 004c8824 | DAT_01cb828c
    MOV dword ptr [0x01cb82a0],ECX      ; 004c882a | DAT_01cb82a0
    MOV dword ptr [0x01cb82a4],EBX      ; 004c8830 | DAT_01cb82a4
    MOV dword ptr [0x01cb82a8],ESI      ; 004c8836 | DAT_01cb82a8
    MOV dword ptr [0x01cb82ac],EDI      ; 004c883c | DAT_01cb82ac
    MOV dword ptr [0x0062202c],EBP      ; 004c8842 | DAT_0062202c
    MOV [0x00622030],EAX                ; 004c8848 | DAT_00622030
    MOV [0x0062205c],EAX                ; 004c884d | DAT_0062205c
    MOV [0x00622060],EAX                ; 004c8852 | DAT_00622060
    MOV [0x0062208c],EAX                ; 004c8857 | DAT_0062208c
    MOV dword ptr [0x00622090],EBP      ; 004c885c | DAT_00622090
    MOV dword ptr [0x006220bc],EBP      ; 004c8862 | DAT_006220bc
    MOV dword ptr [0x006220c0],EBP      ; 004c8868 | DAT_006220c0
    MOV EDX,0xffff                      ; 004c886e
    MOV dword ptr [0x01cb8290],ECX      ; 004c8873 | DAT_01cb8290
    PUSH EDX                            ; 004c8879
    MOV ESI,dword ptr [0x0060b280]      ; 004c887a | DAT_0060b280
    MOV dword ptr [0x01cb8298],ECX      ; 004c8880 | DAT_01cb8298
    PUSH ESI                            ; 004c8886
    MOV dword ptr [0x01cb829c],ECX      ; 004c8887 | DAT_01cb829c
    MOV dword ptr [0x01cb8294],EDX      ; 004c888d | DAT_01cb8294
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004c8893
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c8898
    POP EBP                             ; 004c889b
    POP EDI                             ; 004c889c
    POP ESI                             ; 004c889d
    POP EBX                             ; 004c889e
    RET                                 ; 004c889f

