; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510 at 00518645
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c777dc
;   undefined4 DAT_01c777e0
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   FUN_00461720
;   FUN_0050d910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ded0
        ;   Label: core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
    PUSH EBP                            ; 0050ded1
    MOV EAX,[0x005b9354]                ; 0050ded2 | DAT_005b9354 | DAT_01c775ec
    CMP dword ptr [EAX + 0x1f0],0x0     ; 0050ded7 | DAT_01c777dc
    JNZ 0x0050df1a                      ; 0050dede
        ;   XREF to: 0050df1a (CONDITIONAL_JUMP)  ; LAB_0050df1a
    CMP dword ptr [EAX + 0x1f4],0x0     ; 0050dee0 | DAT_01c777e0
    JZ 0x0050defc                       ; 0050dee7
        ;   XREF to: 0050defc (CONDITIONAL_JUMP)  ; LAB_0050defc
    MOV EBX,dword ptr [0x005ae704]      ; 0050dee9 | DAT_005ae704
    PUSH EBX                            ; 0050deef | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0050def0
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 0050def5
    TEST EAX,EAX                        ; 0050def8
    JZ 0x0050df1d                       ; 0050defa
        ;   XREF to: 0050df1d (CONDITIONAL_JUMP)  ; LAB_0050df1d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050defc
        ;   Label: LAB_0050defc
    PUSH EAX                            ; 0050df00
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050df01
    PUSH EDX                            ; 0050df05
    MOV ECX,dword ptr [ESP + 0x18]      ; 0050df06
    PUSH ECX                            ; 0050df0a
    MOV EBX,dword ptr [0x005ae704]      ; 0050df0b | DAT_005ae704
    PUSH EBX                            ; 0050df11 | DAT_01b4d738
    CALL FUN_00461720                   ; 0050df12
        ;   XREF to: 00461720 (UNCONDITIONAL_CALL)  ; undefined FUN_00461720()
    ADD ESP,0x10                        ; 0050df17
    POP EBP                             ; 0050df1a
        ;   Label: LAB_0050df1a
    POP EBX                             ; 0050df1b
    RET                                 ; 0050df1c
    PUSH EDI                            ; 0050df1d
        ;   Label: LAB_0050df1d
    PUSH ESI                            ; 0050df1e
    PUSH 0xffff                         ; 0050df1f
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050df24
    PUSH ESI                            ; 0050df28
    MOV EDI,dword ptr [ESP + 0x20]      ; 0050df29
    PUSH EDI                            ; 0050df2d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050df2e
    PUSH EBP                            ; 0050df32
    CALL FUN_0050d910                   ; 0050df33
        ;   XREF to: 0050d910 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d910()
    ADD ESP,0x10                        ; 0050df38
    POP ESI                             ; 0050df3b
    POP EDI                             ; 0050df3c
    POP EBP                             ; 0050df3d
    POP EBX                             ; 0050df3e
    RET                                 ; 0050df3f

