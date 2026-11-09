; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(CDemonLight *this_ptr,int restore_viewport_state)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   restore_viewport_state
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[5]:
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 005345a3
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 005351b3
;   core_set.cpp_FUN_00535a80 at 00535c81
;   core_set.cpp_FUN_005365c0 at 005367f3
;   core_set.cpp_FUN_00536990 at 00536bb4
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005bb355
;   TerminatedCString s_CDemonLight_endScene_Sce_005bb368
;   undefined4 DAT_005bb394
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0
;   core_main.c_FUN_004e4330
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520
;   engine_matrix.c_popViewport_FUN_0046d320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c7e0
        ;   Label: core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0
    PUSH ESI                            ; 0045c7e1
    PUSH EDI                            ; 0045c7e2
    PUSH EBP                            ; 0045c7e3
    MOV EBP,ESP                         ; 0045c7e4
    SUB ESP,0x4                         ; 0045c7e6
    AND ESP,0xfffffff8                  ; 0045c7e9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0045c7ec
    CMP dword ptr [ESI + 0x11e4],0x0    ; 0045c7ef
    JZ 0x0045c8ba                       ; 0045c7f6
        ;   XREF to: 0045c8ba (CONDITIONAL_JUMP)  ; LAB_0045c8ba
    CMP dword ptr [ESI + 0x168],0x0     ; 0045c7fc
        ;   Label: LAB_0045c7fc
    JNZ 0x0045c84a                      ; 0045c803
        ;   XREF to: 0045c84a (CONDITIONAL_JUMP)  ; LAB_0045c84a
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0045c805
    IMUL EDX,dword ptr [ESI + 0x1cc4]   ; 0045c80b
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 0045c812
    XOR EBX,EBX                         ; 0045c818
    TEST EDX,EDX                        ; 0045c81a
    JLE 0x0045c838                      ; 0045c81c
        ;   XREF to: 0045c838 (CONDITIONAL_JUMP)  ; LAB_0045c838
    XOR EAX,EAX                         ; 0045c81e
        ;   Label: LAB_0045c81e
    MOV AX,word ptr [ECX]               ; 0045c820
    CMP EAX,0xffff                      ; 0045c823
    JGE 0x0045c830                      ; 0045c828
        ;   XREF to: 0045c830 (CONDITIONAL_JUMP)  ; LAB_0045c830
    CMP EAX,EBX                         ; 0045c82a
    JLE 0x0045c830                      ; 0045c82c
        ;   XREF to: 0045c830 (CONDITIONAL_JUMP)  ; LAB_0045c830
    MOV EBX,EAX                         ; 0045c82e
    DEC EDX                             ; 0045c830
        ;   Label: LAB_0045c830
    ADD ECX,0x2                         ; 0045c831
    TEST EDX,EDX                        ; 0045c834
    JG 0x0045c81e                       ; 0045c836
        ;   XREF to: 0045c81e (CONDITIONAL_JUMP)  ; LAB_0045c81e
    MOV dword ptr [ESP],EBX             ; 0045c838
        ;   Label: LAB_0045c838
    FILD dword ptr [ESP]                ; 0045c83b
    FMUL double ptr [0x005bb394]        ; 0045c83e | DAT_005bb394
    FSTP float ptr [ESI + 0x140]        ; 0045c844
    PUSH 0x0                            ; 0045c84a
        ;   Label: LAB_0045c84a
    MOV EDX,dword ptr [0x005f2afc]      ; 0045c84c | DAT_005f2afc
    PUSH EDX                            ; 0045c852 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 0045c853
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0045c858
    MOV ECX,dword ptr [0x005f2afc]      ; 0045c85b | DAT_005f2afc
    PUSH ECX                            ; 0045c861 | DAT_01bdd7e4
    CALL engine_matrix.c_popViewport_FUN_0046d320 ; 0045c862
        ;   XREF to: 0046d320 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0046d320()
    ADD ESP,0x4                         ; 0045c867
    MOV EBX,dword ptr [ESI + 0x1cc4]    ; 0045c86a
    XOR EAX,EAX                         ; 0045c870
    TEST EBX,EBX                        ; 0045c872
    JLE 0x0045c8a0                      ; 0045c874
        ;   XREF to: 0045c8a0 (CONDITIONAL_JUMP)  ; LAB_0045c8a0
    MOV EDX,ESI                         ; 0045c876
    MOV ECX,dword ptr [EDX + 0x1cd4]    ; 0045c878
        ;   Label: LAB_0045c878
    MOV dword ptr [EAX*0x4 + 0x1c5faec],ECX ; 0045c87e | DAT_01c5faec | DAT_01c5faf0
    INC EAX                             ; 0045c885
    MOV EDI,dword ptr [ESI + 0x1cc4]    ; 0045c886
    ADD EDX,0x4                         ; 0045c88c
    CMP EAX,EDI                         ; 0045c88f
    JL 0x0045c878                       ; 0045c891
        ;   XREF to: 0045c878 (CONDITIONAL_JUMP)  ; LAB_0045c878
    LEA EAX,[EAX]                       ; 0045c893
    LEA EDX,[EDX]                       ; 0045c899
    NOP                                 ; 0045c89f
    PUSH ESI                            ; 0045c8a0
        ;   Label: LAB_0045c8a0
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0 ; 0045c8a1
        ;   XREF to: 00448fd0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0045c8a6
    MOV dword ptr [ESI + 0x11e4],0x0    ; 0045c8a9
    MOV ESP,EBP                         ; 0045c8b3
    POP EBP                             ; 0045c8b5
    POP EDI                             ; 0045c8b6
    POP ESI                             ; 0045c8b7
    POP EBX                             ; 0045c8b8
    RET                                 ; 0045c8b9
    MOV ECX,0x5bb355                    ; 0045c8ba | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0045c8ba
    MOV EBX,0x164                       ; 0045c8bf
    PUSH 0x5bb368                       ; 0045c8c4 | = "CDemonLight::endScene - Scene not open"
    MOV dword ptr [0x01d71de0],ECX      ; 0045c8c9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0045c8cf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045c8d5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045c8da
    JMP 0x0045c7fc                      ; 0045c8dd
        ;   XREF to: 0045c7fc (UNCONDITIONAL_JUMP)  ; LAB_0045c7fc

