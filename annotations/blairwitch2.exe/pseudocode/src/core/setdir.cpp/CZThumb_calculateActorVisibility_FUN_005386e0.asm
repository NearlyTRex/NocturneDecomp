; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_005386e0(CZThumb *this_ptr,CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int apply_scaling)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3i *      Stack[0xc]:4   bounding_box_vertices
; SMRGLHeaderPrimitive * Stack[0x10]:4   primitives
; int              Stack[0x14]:4   apply_scaling
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_setdir.cpp_FUN_00538d10 at 0053973f
;   core_setdir.cpp_testCameraVisibility_FUN_00538be0 at 00538ca4
;
; Referenced Globals:
;   undefined4 DAT_005e5fe5
;   undefined4 DAT_005e5fed
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0
;   core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00538970
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   engine_matrix.c_projectTransformedPoint_FUN_004e8eb0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005386e0
        ;   Label: core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0
    PUSH ESI                            ; 005386e1
    PUSH EDI                            ; 005386e2
    PUSH EBP                            ; 005386e3
    MOV EBP,ESP                         ; 005386e4
    SUB ESP,0x3c                        ; 005386e6
    AND ESP,0xfffffff8                  ; 005386e9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005386ec
    PUSH EDX                            ; 005386ef
    CALL core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0 ; 005386f0
        ;   XREF to: 005389b0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 005386f5
    MOV EAX,dword ptr [EBP + 0x18]      ; 005386f8
    ADD EAX,0x20                        ; 005386fb
    XOR EBX,EBX                         ; 005386fe
    PUSH EAX                            ; 00538700
    MOV ESI,dword ptr [0x0060b280]      ; 00538701 | DAT_0060b280
    MOV ECX,0x800000ff                  ; 00538707
    PUSH ESI                            ; 0053870c | DAT_01ba5c50
    MOV dword ptr [ESP + 0x3c],ECX      ; 0053870d
    MOV dword ptr [ESP + 0x34],EBX      ; 00538711
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00538715
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0053871a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053871d
    MOV EAX,dword ptr [EAX + 0x30]      ; 00538720
    MOV dword ptr [ESP + 0x1c],EAX      ; 00538723
    MOV EAX,dword ptr [EBP + 0x18]      ; 00538727
    MOV EAX,dword ptr [EAX + 0x38]      ; 0053872a
    MOV dword ptr [ESP + 0x24],EAX      ; 0053872d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538731
    MOV EAX,dword ptr [EAX + 0x18]      ; 00538734
    PUSH EBX                            ; 00538737
    MOV dword ptr [ESP + 0x24],EAX      ; 00538738
    LEA EAX,[ESP + 0x20]                ; 0053873c
    PUSH EAX                            ; 00538740
    MOV EDI,dword ptr [0x0060b280]      ; 00538741 | DAT_0060b280
    PUSH EDI                            ; 00538747 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00538748
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0053874d
    XOR ESI,ESI                         ; 00538750
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00538752
    MOV EAX,[0x0060b280]                ; 00538755 | DAT_0060b280
        ;   Label: LAB_00538755
    MOV EAX,dword ptr [EAX]             ; 0053875a | DAT_01ba5c50
    PUSH EDI                            ; 0053875c
    ADD EAX,ESI                         ; 0053875d
    PUSH EAX                            ; 0053875f
    CALL engine_special.cpp_FUN_0055d723 ; 00538760
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 00538765 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 0053876a | DAT_01ba5c50
    ADD EDI,0xc                         ; 0053876c
    ADD ESP,0x8                         ; 0053876f
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x10] ; 00538772
    MOV EDX,dword ptr [ESP + 0x34]      ; 00538776
    MOV EAX,ECX                         ; 0053877a
    AND EDX,ECX                         ; 0053877c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0053877e
    ADD ESI,0x30                        ; 00538782
    OR ECX,EAX                          ; 00538785
    MOV dword ptr [ESP + 0x34],EDX      ; 00538787
    MOV dword ptr [ESP + 0x2c],ECX      ; 0053878b
    CMP ESI,0x180                       ; 0053878f
    JNZ 0x00538755                      ; 00538795
        ;   XREF to: 00538755 (CONDITIONAL_JUMP)  ; LAB_00538755
    TEST byte ptr [ESP + 0x37],0x80     ; 00538797
    JZ 0x005387a9                       ; 0053879c
        ;   XREF to: 005387a9 (CONDITIONAL_JUMP)  ; LAB_005387a9
    TEST byte ptr [ESP + 0x34],0xff     ; 0053879e
    JNZ 0x00538938                      ; 005387a3
        ;   XREF to: 00538938 (CONDITIONAL_JUMP)  ; LAB_00538938
    MOV EAX,dword ptr [EBP + 0x20]      ; 005387a9
        ;   Label: LAB_005387a9
    XOR EBX,EBX                         ; 005387ac
    XOR ECX,ECX                         ; 005387ae
    MOV dword ptr [ESP + 0x30],EBX      ; 005387b0
    LEA EBX,[EAX + 0x1b0]               ; 005387b4
    MOV EDX,dword ptr [ESP + 0x30]      ; 005387ba
        ;   Label: LAB_005387ba
    MOV dword ptr [ESP + ECX*0x1 + 0x4],EAX ; 005387be
    ADD ECX,0x4                         ; 005387c2
    INC EDX                             ; 005387c5
    ADD EAX,0x48                        ; 005387c6
    MOV dword ptr [ESP + 0x30],EDX      ; 005387c9
    CMP EAX,EBX                         ; 005387cd
    JNZ 0x005387ba                      ; 005387cf
        ;   XREF to: 005387ba (CONDITIONAL_JUMP)  ; LAB_005387ba
    MOV ECX,dword ptr [EBP + 0x18]      ; 005387d1
    PUSH ECX                            ; 005387d4
    XOR EDI,EDI                         ; 005387d5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 005387d7
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005387dc
    MOV ECX,dword ptr [0x0060b280]      ; 005387df | DAT_0060b280
        ;   Label: LAB_005387df
    MOV ECX,dword ptr [ECX]             ; 005387e5 | DAT_01ba5c50
    ADD ECX,EDI                         ; 005387e7
    MOV EBX,dword ptr [ECX + 0x8]       ; 005387e9
    TEST EBX,EBX                        ; 005387ec
    JLE 0x0053881b                      ; 005387ee
        ;   XREF to: 0053881b (CONDITIONAL_JUMP)  ; LAB_0053881b
    LEA ESI,[EBX + 0x80]                ; 005387f0
    MOV EAX,dword ptr [ECX]             ; 005387f6
    MOV EDX,ESI                         ; 005387f8
    IMUL EDX                            ; 005387fa
    IDIV EBX                            ; 005387fc
    MOV dword ptr [ECX],EAX             ; 005387fe
    MOV EDX,ESI                         ; 00538800
    MOV EBX,dword ptr [ECX + 0x8]       ; 00538802
    MOV EAX,dword ptr [ECX + 0x4]       ; 00538805
    IMUL EDX                            ; 00538808
    IDIV EBX                            ; 0053880a
    MOV dword ptr [ECX + 0x4],EAX       ; 0053880c
    PUSH ECX                            ; 0053880f
    MOV dword ptr [ECX + 0x8],ESI       ; 00538810
    CALL engine_matrix.c_projectTransformedPoint_FUN_004e8eb0 ; 00538813
        ;   XREF to: 004e8eb0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectTransformedPoint_FUN_004e8eb0(SProjectedVertex * point)
    ADD ESP,0x4                         ; 00538818
    ADD EDI,0x30                        ; 0053881b
        ;   Label: LAB_0053881b
    CMP EDI,0x180                       ; 0053881e
    JNZ 0x005387df                      ; 00538824
        ;   XREF to: 005387df (CONDITIONAL_JUMP)  ; LAB_005387df
    MOV ESI,0x3f800000                  ; 00538826
    MOV EDI,dword ptr [EBP + 0x24]      ; 0053882b
    MOV dword ptr [ESP],ESI             ; 0053882e
    TEST EDI,EDI                        ; 00538831
    JZ 0x00538867                       ; 00538833
        ;   XREF to: 00538867 (CONDITIONAL_JUMP)  ; LAB_00538867
    XOR EAX,EAX                         ; 00538835
    MOV ECX,dword ptr [0x0060b280]      ; 00538837 | DAT_0060b280
        ;   Label: LAB_00538837
    MOV ECX,dword ptr [ECX]             ; 0053883d | DAT_01ba5c50
    ADD ECX,EAX                         ; 0053883f
    TEST byte ptr [ECX + 0x13],0x80     ; 00538841
    JZ 0x0053885d                       ; 00538845
        ;   XREF to: 0053885d (CONDITIONAL_JUMP)  ; LAB_0053885d
    CMP dword ptr [ECX + 0x8],0x0       ; 00538847
    JLE 0x00538961                      ; 0053884b
        ;   XREF to: 00538961 (CONDITIONAL_JUMP)  ; LAB_00538961
    FLD float ptr [ESP]                 ; 00538851
    FMUL double ptr [0x005e5fe5]        ; 00538854 | DAT_005e5fe5
    FSTP float ptr [ESP]                ; 0053885a
        ;   Label: LAB_0053885a
    ADD EAX,0x30                        ; 0053885d
        ;   Label: LAB_0053885d
    CMP EAX,0x180                       ; 00538860
    JNZ 0x00538837                      ; 00538865
        ;   XREF to: 00538837 (CONDITIONAL_JUMP)  ; LAB_00538837
    PUSH 0x0                            ; 00538867
        ;   Label: LAB_00538867
    MOV ECX,dword ptr [0x0060b280]      ; 00538869 | DAT_0060b280
    PUSH ECX                            ; 0053886f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 00538870
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00538875
    MOV EBX,dword ptr [EBP + 0x14]      ; 00538878
    PUSH EBX                            ; 0053887b
    CALL core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00538970 ; 0053887c
        ;   XREF to: 00538970 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00538970(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 00538881
    PUSH 0x1                            ; 00538884
    MOV ESI,dword ptr [0x0060b280]      ; 00538886 | DAT_0060b280
    PUSH ESI                            ; 0053888c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0053888d
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00538892
    TEST byte ptr [ESP + 0x2f],0x80     ; 00538895
    SETNZ AL                            ; 0053889a
    AND EAX,0xff                        ; 0053889d
    PUSH EAX                            ; 005388a2
    MOV EDI,dword ptr [0x0060b280]      ; 005388a3 | DAT_0060b280
    PUSH EDI                            ; 005388a9 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 005388aa
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005388af
    MOV EAX,dword ptr [ESP + 0x30]      ; 005388b2
    XOR EBX,EBX                         ; 005388b6
    TEST EAX,EAX                        ; 005388b8
    JLE 0x005388f0                      ; 005388ba
        ;   XREF to: 005388f0 (CONDITIONAL_JUMP)  ; LAB_005388f0
    LEA EDI,[EAX*0x4 + 0x0]             ; 005388bc
    XOR ESI,ESI                         ; 005388c3
    MOV EDX,dword ptr [ESP + ESI*0x1 + 0x4] ; 005388c5
        ;   Label: LAB_005388c5
    PUSH EDX                            ; 005388c9
    MOV ECX,dword ptr [0x0060b280]      ; 005388ca | DAT_0060b280
    PUSH ECX                            ; 005388d0 | DAT_01ba5c50
    ADD ESI,0x4                         ; 005388d1
    CALL engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0 ; 005388d4
        ;   XREF to: 004698a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 005388d9
    ADD EBX,EAX                         ; 005388dc
    CMP ESI,EDI                         ; 005388de
    JL 0x005388c5                       ; 005388e0
        ;   XREF to: 005388c5 (CONDITIONAL_JUMP)  ; LAB_005388c5
    LEA EAX,[EAX]                       ; 005388e2
    LEA EDX,[EDX]                       ; 005388e8
    MOV EAX,EAX                         ; 005388ee
    PUSH 0x1                            ; 005388f0
        ;   Label: LAB_005388f0
    MOV ESI,dword ptr [0x0060b280]      ; 005388f2 | DAT_0060b280
    PUSH ESI                            ; 005388f8 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 005388f9
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005388fe
    PUSH 0x0                            ; 00538901
    MOV EDI,dword ptr [0x0060b280]      ; 00538903 | DAT_0060b280
    PUSH EDI                            ; 00538909 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0053890a
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0053890f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00538912
    PUSH EAX                            ; 00538915
    CALL core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30 ; 00538916
        ;   XREF to: 00538a30 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 0053891b
    MOV dword ptr [ESP + 0x38],EBX      ; 0053891e
    FILD dword ptr [ESP + 0x38]         ; 00538922
    FMUL float ptr [ESP]                ; 00538926
    FSTP float ptr [ESP + 0x28]         ; 00538929
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053892d
    MOV ESP,EBP                         ; 00538931
    POP EBP                             ; 00538933
    POP EDI                             ; 00538934
    POP ESI                             ; 00538935
    POP EBX                             ; 00538936
    RET                                 ; 00538937
    MOV ESI,dword ptr [EBP + 0x18]      ; 00538938
        ;   Label: LAB_00538938
    PUSH ESI                            ; 0053893b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0053893c
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00538941
    MOV EDI,dword ptr [EBP + 0x14]      ; 00538944
    PUSH EDI                            ; 00538947
    CALL core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30 ; 00538948
        ;   XREF to: 00538a30 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 0053894d
    XOR EAX,EAX                         ; 00538950
    MOV dword ptr [ESP + 0x28],EAX      ; 00538952
    MOV EAX,dword ptr [ESP + 0x28]      ; 00538956
    MOV ESP,EBP                         ; 0053895a
    POP EBP                             ; 0053895c
    POP EDI                             ; 0053895d
    POP ESI                             ; 0053895e
    POP EBX                             ; 0053895f
    RET                                 ; 00538960
    FLD float ptr [ESP]                 ; 00538961
        ;   Label: LAB_00538961
    FMUL double ptr [0x005e5fed]        ; 00538964 | DAT_005e5fed
    JMP 0x0053885a                      ; 0053896a
        ;   XREF to: 0053885a (UNCONDITIONAL_JUMP)  ; LAB_0053885a

