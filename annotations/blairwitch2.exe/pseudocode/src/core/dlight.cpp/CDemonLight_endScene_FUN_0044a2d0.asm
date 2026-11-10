; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(CDemonLight *this_ptr,int restore_viewport_state)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   restore_viewport_state
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[5]:
;   core_set.cpp_CDemonSet_initScene_FUN_0052d980 at 0052db08
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 at 0052f181
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e713
;   core_set.cpp_FUN_0052fad0 at 0052fd03
;   core_set.cpp_FUN_0052fea0 at 005300c4
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf320
;   TerminatedCString s_CDemonLight_endScene_Sce_005cf333
;   undefined4 DAT_005cf35f
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0
;   core_main.c_FUN_004e4500
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940
;   engine_matrix.c_popViewport_FUN_0046b740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a2d0
        ;   Label: core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0
    PUSH ESI                            ; 0044a2d1
    PUSH EDI                            ; 0044a2d2
    PUSH EBP                            ; 0044a2d3
    MOV EBP,ESP                         ; 0044a2d4
    SUB ESP,0x4                         ; 0044a2d6
    AND ESP,0xfffffff8                  ; 0044a2d9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044a2dc
    CMP dword ptr [ESI + 0x11e4],0x0    ; 0044a2df
    JZ 0x0044a3aa                       ; 0044a2e6
        ;   XREF to: 0044a3aa (CONDITIONAL_JUMP)  ; LAB_0044a3aa
    CMP dword ptr [ESI + 0x168],0x0     ; 0044a2ec
        ;   Label: LAB_0044a2ec
    JNZ 0x0044a33a                      ; 0044a2f3
        ;   XREF to: 0044a33a (CONDITIONAL_JUMP)  ; LAB_0044a33a
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0044a2f5
    IMUL EDX,dword ptr [ESI + 0x1cc4]   ; 0044a2fb
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 0044a302
    XOR EBX,EBX                         ; 0044a308
    TEST EDX,EDX                        ; 0044a30a
    JLE 0x0044a328                      ; 0044a30c
        ;   XREF to: 0044a328 (CONDITIONAL_JUMP)  ; LAB_0044a328
    XOR EAX,EAX                         ; 0044a30e
        ;   Label: LAB_0044a30e
    MOV AX,word ptr [ECX]               ; 0044a310
    CMP EAX,0xffff                      ; 0044a313
    JGE 0x0044a320                      ; 0044a318
        ;   XREF to: 0044a320 (CONDITIONAL_JUMP)  ; LAB_0044a320
    CMP EAX,EBX                         ; 0044a31a
    JLE 0x0044a320                      ; 0044a31c
        ;   XREF to: 0044a320 (CONDITIONAL_JUMP)  ; LAB_0044a320
    MOV EBX,EAX                         ; 0044a31e
    DEC EDX                             ; 0044a320
        ;   Label: LAB_0044a320
    ADD ECX,0x2                         ; 0044a321
    TEST EDX,EDX                        ; 0044a324
    JG 0x0044a30e                       ; 0044a326
        ;   XREF to: 0044a30e (CONDITIONAL_JUMP)  ; LAB_0044a30e
    MOV dword ptr [ESP],EBX             ; 0044a328
        ;   Label: LAB_0044a328
    FILD dword ptr [ESP]                ; 0044a32b
    FMUL double ptr [0x005cf35f]        ; 0044a32e | DAT_005cf35f
    FSTP float ptr [ESI + 0x140]        ; 0044a334
    PUSH 0x0                            ; 0044a33a
        ;   Label: LAB_0044a33a
    MOV EDX,dword ptr [0x0060b280]      ; 0044a33c | DAT_0060b280
    PUSH EDX                            ; 0044a342 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940 ; 0044a343
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0044a348
    MOV ECX,dword ptr [0x0060b280]      ; 0044a34b | DAT_0060b280
    PUSH ECX                            ; 0044a351 | DAT_01ba5c50
    CALL engine_matrix.c_popViewport_FUN_0046b740 ; 0044a352
        ;   XREF to: 0046b740 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0046b740()
    ADD ESP,0x4                         ; 0044a357
    MOV EBX,dword ptr [ESI + 0x1cc4]    ; 0044a35a
    XOR EAX,EAX                         ; 0044a360
    TEST EBX,EBX                        ; 0044a362
    JLE 0x0044a390                      ; 0044a364
        ;   XREF to: 0044a390 (CONDITIONAL_JUMP)  ; LAB_0044a390
    MOV EDX,ESI                         ; 0044a366
    MOV ECX,dword ptr [EDX + 0x1cd4]    ; 0044a368
        ;   Label: LAB_0044a368
    MOV dword ptr [EAX*0x4 + 0x1c2a38c],ECX ; 0044a36e | DAT_01c2a38c | DAT_01c2a390
    INC EAX                             ; 0044a375
    MOV EDI,dword ptr [ESI + 0x1cc4]    ; 0044a376
    ADD EDX,0x4                         ; 0044a37c
    CMP EAX,EDI                         ; 0044a37f
    JL 0x0044a368                       ; 0044a381
        ;   XREF to: 0044a368 (CONDITIONAL_JUMP)  ; LAB_0044a368
    LEA EAX,[EAX]                       ; 0044a383
    LEA EDX,[EDX]                       ; 0044a389
    NOP                                 ; 0044a38f
    PUSH ESI                            ; 0044a390
        ;   Label: LAB_0044a390
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0 ; 0044a391
        ;   XREF to: 0043b7d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044a396
    MOV dword ptr [ESI + 0x11e4],0x0    ; 0044a399
    MOV ESP,EBP                         ; 0044a3a3
    POP EBP                             ; 0044a3a5
    POP EDI                             ; 0044a3a6
    POP ESI                             ; 0044a3a7
    POP EBX                             ; 0044a3a8
    RET                                 ; 0044a3a9
    MOV ECX,0x5cf320                    ; 0044a3aa | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044a3aa
    MOV EBX,0x165                       ; 0044a3af
    PUSH 0x5cf333                       ; 0044a3b4 | = "CDemonLight::endScene - Scene not open"
    MOV dword ptr [0x01d046a0],ECX      ; 0044a3b9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0044a3bf | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044a3c5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044a3ca
    JMP 0x0044a2ec                      ; 0044a3cd
        ;   XREF to: 0044a2ec (UNCONDITIONAL_JUMP)  ; LAB_0044a2ec

