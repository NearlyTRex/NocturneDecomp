; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 004107fe
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413c70 at 00413e0f
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00419b80 at 00419c2d
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00464ac0 at 00464c6e
;   core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80 at 004dc20a
;   core_morph.cpp_CMorphModel_renderFaces_FUN_005b6c90 at 005b6d6f
;   core_shadow.cpp_FUN_0053e6c0 at 0053e7c0
;   core_vessel.cpp_CCryptVessel_renderOpaque_FUN_00585810 at 0058594a
;
; Referenced Globals:
;   undefined4 DAT_01ba5cc4
;   undefined4 DAT_01ba5ccc
;   undefined4 DAT_01ba5cd0
;
; Called Functions:
;   crt_stdlib.c__qsort_FUN_005b78b8
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0046c900
        ;   Label: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046c901
    CMP dword ptr [EBP + 0x4],0x0       ; 0046c905
    JNZ 0x0046c9e3                      ; 0046c909
        ;   XREF to: 0046c9e3 (CONDITIONAL_JUMP)  ; LAB_0046c9e3
    PUSH EDI                            ; 0046c90f
    PUSH ESI                            ; 0046c910
    PUSH EBX                            ; 0046c911
    MOV ECX,dword ptr [0x01ba5cc4]      ; 0046c912 | DAT_01ba5cc4
    TEST ECX,ECX                        ; 0046c918
    JLE 0x0046c940                      ; 0046c91a
        ;   XREF to: 0046c940 (CONDITIONAL_JUMP)  ; LAB_0046c940
    MOV EBX,0x1ba5ccc                   ; 0046c91c
    LEA ESI,[ECX*0x4 + 0x0]             ; 0046c921
    XOR EAX,EAX                         ; 0046c928
    MOV dword ptr [EAX + 0x1bccdcc],EBX ; 0046c92a
        ;   Label: LAB_0046c92a
    ADD EAX,0x4                         ; 0046c930
    ADD EBX,0x20                        ; 0046c933
    CMP EAX,ESI                         ; 0046c936
    JL 0x0046c92a                       ; 0046c938
        ;   XREF to: 0046c92a (CONDITIONAL_JUMP)  ; LAB_0046c92a
    LEA EAX,[EAX]                       ; 0046c93a
    CMP dword ptr [EBP + 0x1c],0x1      ; 0046c940
        ;   Label: LAB_0046c940
    JZ 0x0046c9e5                       ; 0046c944
        ;   XREF to: 0046c9e5 (CONDITIONAL_JUMP)  ; LAB_0046c9e5
    PUSH 0x46c8a0                       ; 0046c94a
    PUSH 0x4                            ; 0046c94f
    MOV ESI,dword ptr [0x01ba5cc4]      ; 0046c951 | DAT_01ba5cc4
    PUSH ESI                            ; 0046c957
    PUSH 0x1bccdcc                      ; 0046c958
        ;   Label: LAB_0046c958
    CALL crt_stdlib.c__qsort_FUN_005b78b8 ; 0046c95d
        ;   XREF to: 005b78b8 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__qsort_FUN_005b78b8()
    ADD ESP,0x10                        ; 0046c962
    MOV EAX,dword ptr [EBP + 0x10]      ; 0046c965
    MOV dword ptr [EBP + 0x1c],0x0      ; 0046c968
    TEST EAX,EAX                        ; 0046c96f
    JZ 0x0046c97e                       ; 0046c971
        ;   XREF to: 0046c97e (CONDITIONAL_JUMP)  ; LAB_0046c97e
    PUSH 0x1                            ; 0046c973
    PUSH EBP                            ; 0046c975
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0046c976
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0046c97b
    MOV EDI,0xffffffff                  ; 0046c97e
        ;   Label: LAB_0046c97e
    MOV EDX,dword ptr [0x01ba5cc4]      ; 0046c983 | DAT_01ba5cc4
    XOR ESI,ESI                         ; 0046c989
    TEST EDX,EDX                        ; 0046c98b
    JLE 0x0046c9d5                      ; 0046c98d
        ;   XREF to: 0046c9d5 (CONDITIONAL_JUMP)  ; LAB_0046c9d5
    XOR EBX,EBX                         ; 0046c98f
    MOV EAX,dword ptr [EBX + 0x1bccdcc] ; 0046c991
        ;   Label: LAB_0046c991
    MOV EDX,dword ptr [EAX]             ; 0046c997 | DAT_01ba5ccc
    CMP EDI,EDX                         ; 0046c999
    JZ 0x0046c9b1                       ; 0046c99b
        ;   XREF to: 0046c9b1 (CONDITIONAL_JUMP)  ; LAB_0046c9b1
    MOV EDI,EDX                         ; 0046c99d
    IMUL EAX,EDX,0x48                   ; 0046c99f
    ADD EAX,0x1bd1bec                   ; 0046c9a2
    PUSH EAX                            ; 0046c9a7
    PUSH EBP                            ; 0046c9a8
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0046c9a9
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0046c9ae
    MOV EAX,dword ptr [EBX + 0x1bccdcc] ; 0046c9b1
        ;   Label: LAB_0046c9b1
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046c9b7 | DAT_01ba5cd0
    PUSH ECX                            ; 0046c9ba
    ADD EAX,0xc                         ; 0046c9bb
    PUSH EAX                            ; 0046c9be
    PUSH EBP                            ; 0046c9bf
    ADD EBX,0x4                         ; 0046c9c0
    INC ESI                             ; 0046c9c3
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80 ; 0046c9c4
        ;   XREF to: 00469e80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80(CDemonRenderer * this_ptr, SInputFace * face, int render_flags)
    MOV EAX,[0x01ba5cc4]                ; 0046c9c9 | DAT_01ba5cc4
    ADD ESP,0xc                         ; 0046c9ce
    CMP ESI,EAX                         ; 0046c9d1
    JL 0x0046c991                       ; 0046c9d3
        ;   XREF to: 0046c991 (CONDITIONAL_JUMP)  ; LAB_0046c991
    PUSH 0x0                            ; 0046c9d5
        ;   Label: LAB_0046c9d5
    PUSH EBP                            ; 0046c9d7
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0046c9d8
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0046c9dd
    POP EBX                             ; 0046c9e0
    POP ESI                             ; 0046c9e1
    POP EDI                             ; 0046c9e2
    POP EBP                             ; 0046c9e3
        ;   Label: LAB_0046c9e3
    RET                                 ; 0046c9e4
    PUSH 0x46c8d0                       ; 0046c9e5
        ;   Label: LAB_0046c9e5
    PUSH 0x4                            ; 0046c9ea
    MOV EDI,dword ptr [0x01ba5cc4]      ; 0046c9ec | DAT_01ba5cc4
    PUSH EDI                            ; 0046c9f2
    JMP 0x0046c958                      ; 0046c9f3
        ;   XREF to: 0046c958 (UNCONDITIONAL_JUMP)  ; LAB_0046c958

