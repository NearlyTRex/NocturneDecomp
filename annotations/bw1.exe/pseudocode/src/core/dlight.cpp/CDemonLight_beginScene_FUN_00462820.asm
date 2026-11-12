; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(CDemonLight *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[5]:
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054edbb
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260 at 00550362
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f9c4
;   core_set.cpp_FUN_00550da0 at 00550f05
;   core_set.cpp_FUN_00551170 at 005512e6
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005d8fbc
;   TerminatedCString s_CDemonLight_beginScene_S_005d8fcf
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc0cd0
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d78
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044ce60
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90
;   core_main.c_FUN_005030e0
;   crt_watcom.c__memset_FUN_004ab020
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462820
        ;   Label: core_dlight.cpp_CDemonLight_beginScene_FUN_00462820
    PUSH ESI                            ; 00462821
    PUSH EDI                            ; 00462822
    PUSH EBP                            ; 00462823
    MOV EBX,dword ptr [ESP + 0x14]      ; 00462824
    CMP dword ptr [EBX + 0x11e4],0x0    ; 00462828
    JNZ 0x004629b1                      ; 0046282f
        ;   XREF to: 004629b1 (CONDITIONAL_JUMP)  ; LAB_004629b1
    MOV EDI,dword ptr [ESP + 0x18]      ; 00462835
        ;   Label: LAB_00462835
    PUSH EDI                            ; 00462839
    PUSH EBX                            ; 0046283a
    MOV dword ptr [EBX + 0x11e4],0x1    ; 0046283b
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044ce60 ; 00462845
        ;   XREF to: 0044ce60 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044ce60(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0046284a
    ADD ESP,0x8                         ; 00462850
    DEC EAX                             ; 00462853
    PUSH EAX                            ; 00462854
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 00462855
    DEC EAX                             ; 0046285b
    PUSH EAX                            ; 0046285c
    PUSH 0x0                            ; 0046285d
    PUSH 0x0                            ; 0046285f
    MOV EBP,dword ptr [0x00612560]      ; 00462861 | DAT_00612560
    PUSH EBP                            ; 00462867 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10 ; 00462868
        ;   XREF to: 00483c10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0046286d
    DEC EAX                             ; 00462873
    MOV dword ptr [EBX + 0x11dc],EAX    ; 00462874
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0046287a
    MOV dword ptr [EBX + 0x11d4],0x0    ; 00462880
    DEC EAX                             ; 0046288a
    ADD ESP,0x14                        ; 0046288b
    MOV dword ptr [EBX + 0x11e0],EAX    ; 0046288e
    LEA EAX,[EBX + 0x4]                 ; 00462894
    MOV dword ptr [EBX + 0x11d8],0x0    ; 00462897
    PUSH EAX                            ; 004628a1
    MOV EAX,[0x00612560]                ; 004628a2 | DAT_00612560
    MOV dword ptr [EBX + 0x1d0],0x0     ; 004628a7
    PUSH EAX                            ; 004628b1 | DAT_01bc120c
    MOV dword ptr [EBX + 0x168],EDI     ; 004628b2
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 004628b8
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004628bd
    MOV EDX,dword ptr [0x00612560]      ; 004628c0 | DAT_00612560
    PUSH dword ptr [EBX + 0x38]         ; 004628c6
    PUSH EDX                            ; 004628c9 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0 ; 004628ca
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 004628cf
    LEA EAX,[EBX + 0x10]                ; 004628d2
    PUSH EAX                            ; 004628d5
    MOV ECX,dword ptr [0x00612560]      ; 004628d6 | DAT_00612560
    PUSH ECX                            ; 004628dc | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560 ; 004628dd
        ;   XREF to: 00483560 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 004628e2
    MOV EDX,dword ptr [0x01c51d60]      ; 004628e5 | DAT_01c51d60
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 004628eb
    IMUL EDX                            ; 004628f1
    SHRD EAX,EDX,0x10                   ; 004628f3
    MOV EDX,dword ptr [0x01c51d6c]      ; 004628f7 | DAT_01c51d6c
    MOV [0x01c51d60],EAX                ; 004628fd | DAT_01c51d60
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 00462902
    IMUL EDX                            ; 00462908
    SHRD EAX,EDX,0x10                   ; 0046290a
    MOV EDX,dword ptr [0x01c51d78]      ; 0046290e | DAT_01c51d78
    MOV [0x01c51d6c],EAX                ; 00462914 | DAT_01c51d6c
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 00462919
    IMUL EDX                            ; 0046291f
    SHRD EAX,EDX,0x10                   ; 00462921
    MOV [0x01c51d78],EAX                ; 00462925 | DAT_01c51d78
    TEST EDI,EDI                        ; 0046292a
    JZ 0x004629d9                       ; 0046292c
        ;   XREF to: 004629d9 (CONDITIONAL_JUMP)  ; LAB_004629d9
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 00462932
        ;   Label: LAB_00462932
    XOR EAX,EAX                         ; 00462938
    TEST EBP,EBP                        ; 0046293a
    JLE 0x00462980                      ; 0046293c
        ;   XREF to: 00462980 (CONDITIONAL_JUMP)  ; LAB_00462980
    MOV EDX,EBX                         ; 0046293e
    MOV ESI,dword ptr [EAX*0x4 + 0x1c4354c] ; 00462940 | DAT_01c4354c | DAT_01c43550
        ;   Label: LAB_00462940
    MOV dword ptr [EDX + 0x1cd4],ESI    ; 00462947
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 0046294d
    IMUL ESI,EAX                        ; 00462953
    MOV EDI,dword ptr [EBX + 0x2f94]    ; 00462956
    ADD ESI,ESI                         ; 0046295c
    ADD ESI,EDI                         ; 0046295e
    MOV dword ptr [EAX*0x4 + 0x1c4354c],ESI ; 00462960 | DAT_01c4354c | DAT_01c43550
    INC EAX                             ; 00462967
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 00462968
    ADD EDX,0x4                         ; 0046296e
    CMP EAX,ECX                         ; 00462971
    JL 0x00462940                       ; 00462973
        ;   XREF to: 00462940 (CONDITIONAL_JUMP)  ; LAB_00462940
    LEA EAX,[EAX]                       ; 00462975
    LEA EDX,[EDX]                       ; 0046297b
    MOV EBX,EBX                         ; 0046297e
    PUSH EBX                            ; 00462980
        ;   Label: LAB_00462980
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90 ; 00462981
        ;   XREF to: 0044dc90 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00462986
    PUSH 0x1                            ; 00462989
    MOV EBX,dword ptr [0x00612560]      ; 0046298b | DAT_00612560
    PUSH EBX                            ; 00462991 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 00462992
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00462997
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046299a
    TEST ESI,ESI                        ; 0046299e
    JZ 0x004629fe                       ; 004629a0
        ;   XREF to: 004629fe (CONDITIONAL_JUMP)  ; LAB_004629fe
    MOV dword ptr [0x01bc0cd0],0x8000   ; 004629a2 | DAT_01bc0cd0
    POP EBP                             ; 004629ac
    POP EDI                             ; 004629ad
    POP ESI                             ; 004629ae
    POP EBX                             ; 004629af
    RET                                 ; 004629b0
    MOV ECX,0x5d8fbc                    ; 004629b1 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_004629b1
    MOV ESI,0xf3                        ; 004629b6
    PUSH 0x5d8fcf                       ; 004629bb | = "CDemonLight::beginScene - Scene alrea..."
    MOV dword ptr [0x01d1d400],ECX      ; 004629c0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004629c6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004629cc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004629d1
    JMP 0x00462835                      ; 004629d4
        ;   XREF to: 00462835 (UNCONDITIONAL_JUMP)  ; LAB_00462835
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 004629d9
        ;   Label: LAB_004629d9
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 004629df
    ADD EAX,EAX                         ; 004629e6
    PUSH EAX                            ; 004629e8
    MOV EDX,0xff                        ; 004629e9
    MOV ECX,dword ptr [EBX + 0x2f94]    ; 004629ee
    CALL crt_watcom.c__memset_FUN_004ab020 ; 004629f4
        ;   XREF to: 004ab020 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memset_FUN_004ab020(void * dest, int fill_byte, uint size)
    JMP 0x00462932                      ; 004629f9
        ;   XREF to: 00462932 (UNCONDITIONAL_JUMP)  ; LAB_00462932
    MOV dword ptr [0x01bc0cd0],ESI      ; 004629fe | DAT_01bc0cd0
        ;   Label: LAB_004629fe
    POP EBP                             ; 00462a04
    POP EDI                             ; 00462a05
    POP ESI                             ; 00462a06
    POP EBX                             ; 00462a07
    RET                                 ; 00462a08

