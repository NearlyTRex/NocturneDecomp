; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(CDemonLight *this_ptr,int restore_viewport_state)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   restore_viewport_state
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[5]:
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054ede3
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260 at 00550461
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f9f3
;   core_set.cpp_FUN_00550da0 at 00550fd3
;   core_set.cpp_FUN_00551170 at 005513a4
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005d903d
;   TerminatedCString s_CDemonLight_endScene_Sce_005d9050
;   undefined4 DAT_005d907c
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044ce90
;   core_main.c_FUN_005030e0
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40
;   engine_matrix.c_popViewport_FUN_00483c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462ad0
        ;   Label: core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0
    PUSH ESI                            ; 00462ad1
    PUSH EDI                            ; 00462ad2
    PUSH EBP                            ; 00462ad3
    MOV EBP,ESP                         ; 00462ad4
    SUB ESP,0x4                         ; 00462ad6
    AND ESP,0xfffffff8                  ; 00462ad9
    MOV ESI,dword ptr [EBP + 0x14]      ; 00462adc
    CMP dword ptr [ESI + 0x11e4],0x0    ; 00462adf
    JZ 0x00462baa                       ; 00462ae6
        ;   XREF to: 00462baa (CONDITIONAL_JUMP)  ; LAB_00462baa
    CMP dword ptr [ESI + 0x168],0x0     ; 00462aec
        ;   Label: LAB_00462aec
    JNZ 0x00462b3a                      ; 00462af3
        ;   XREF to: 00462b3a (CONDITIONAL_JUMP)  ; LAB_00462b3a
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 00462af5
    IMUL EDX,dword ptr [ESI + 0x1cc4]   ; 00462afb
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 00462b02
    XOR EBX,EBX                         ; 00462b08
    TEST EDX,EDX                        ; 00462b0a
    JLE 0x00462b28                      ; 00462b0c
        ;   XREF to: 00462b28 (CONDITIONAL_JUMP)  ; LAB_00462b28
    XOR EAX,EAX                         ; 00462b0e
        ;   Label: LAB_00462b0e
    MOV AX,word ptr [ECX]               ; 00462b10
    CMP EAX,0xffff                      ; 00462b13
    JGE 0x00462b20                      ; 00462b18
        ;   XREF to: 00462b20 (CONDITIONAL_JUMP)  ; LAB_00462b20
    CMP EAX,EBX                         ; 00462b1a
    JLE 0x00462b20                      ; 00462b1c
        ;   XREF to: 00462b20 (CONDITIONAL_JUMP)  ; LAB_00462b20
    MOV EBX,EAX                         ; 00462b1e
    DEC EDX                             ; 00462b20
        ;   Label: LAB_00462b20
    ADD ECX,0x2                         ; 00462b21
    TEST EDX,EDX                        ; 00462b24
    JG 0x00462b0e                       ; 00462b26
        ;   XREF to: 00462b0e (CONDITIONAL_JUMP)  ; LAB_00462b0e
    MOV dword ptr [ESP],EBX             ; 00462b28
        ;   Label: LAB_00462b28
    FILD dword ptr [ESP]                ; 00462b2b
    FMUL double ptr [0x005d907c]        ; 00462b2e | DAT_005d907c
    FSTP float ptr [ESI + 0x140]        ; 00462b34
    PUSH 0x0                            ; 00462b3a
        ;   Label: LAB_00462b3a
    MOV EDX,dword ptr [0x00612560]      ; 00462b3c | DAT_00612560
    PUSH EDX                            ; 00462b42 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 00462b43
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00462b48
    MOV ECX,dword ptr [0x00612560]      ; 00462b4b | DAT_00612560
    PUSH ECX                            ; 00462b51 | DAT_01bc120c
    CALL engine_matrix.c_popViewport_FUN_00483c40 ; 00462b52
        ;   XREF to: 00483c40 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_00483c40()
    ADD ESP,0x4                         ; 00462b57
    MOV EBX,dword ptr [ESI + 0x1cc4]    ; 00462b5a
    XOR EAX,EAX                         ; 00462b60
    TEST EBX,EBX                        ; 00462b62
    JLE 0x00462b90                      ; 00462b64
        ;   XREF to: 00462b90 (CONDITIONAL_JUMP)  ; LAB_00462b90
    MOV EDX,ESI                         ; 00462b66
    MOV ECX,dword ptr [EDX + 0x1cd4]    ; 00462b68
        ;   Label: LAB_00462b68
    MOV dword ptr [EAX*0x4 + 0x1c4354c],ECX ; 00462b6e | DAT_01c4354c | DAT_01c43550
    INC EAX                             ; 00462b75
    MOV EDI,dword ptr [ESI + 0x1cc4]    ; 00462b76
    ADD EDX,0x4                         ; 00462b7c
    CMP EAX,EDI                         ; 00462b7f
    JL 0x00462b68                       ; 00462b81
        ;   XREF to: 00462b68 (CONDITIONAL_JUMP)  ; LAB_00462b68
    LEA EAX,[EAX]                       ; 00462b83
    LEA EDX,[EDX]                       ; 00462b89
    NOP                                 ; 00462b8f
    PUSH ESI                            ; 00462b90
        ;   Label: LAB_00462b90
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044ce90 ; 00462b91
        ;   XREF to: 0044ce90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044ce90(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00462b96
    MOV dword ptr [ESI + 0x11e4],0x0    ; 00462b99
    MOV ESP,EBP                         ; 00462ba3
    POP EBP                             ; 00462ba5
    POP EDI                             ; 00462ba6
    POP ESI                             ; 00462ba7
    POP EBX                             ; 00462ba8
    RET                                 ; 00462ba9
    MOV ECX,0x5d903d                    ; 00462baa | = "..\\core\\dlight.cpp"
        ;   Label: LAB_00462baa
    MOV EBX,0x164                       ; 00462baf
    PUSH 0x5d9050                       ; 00462bb4 | = "CDemonLight::endScene - Scene not open"
    MOV dword ptr [0x01d1d400],ECX      ; 00462bb9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00462bbf | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00462bc5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00462bca
    JMP 0x00462aec                      ; 00462bcd
        ;   XREF to: 00462aec (UNCONDITIONAL_JUMP)  ; LAB_00462aec

