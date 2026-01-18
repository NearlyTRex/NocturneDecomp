; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310()
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 at 0057a99d
;   core_setedit.cpp_FUN_005801b0 at 005801c0
;   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 at 0057fd0d
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_00648567
;   TerminatedCString s_core_setedit_cpp_0064857b
;   TerminatedCString s_Out_of_memory_0064858f
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   uint*[1024] g_ZBufferScanlineArray
;   undefined4 g_ZBufferScanlineArray[1]
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580310
        ;   Label: core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
    PUSH ESI                            ; 00580311
    PUSH EDI                            ; 00580312
    PUSH EBP                            ; 00580313
    SUB ESP,0x18                        ; 00580314
    CMP dword ptr [0x03659384],0x0      ; 00580317 | DAT_03659384
    JNZ 0x0058032b                      ; 0058031e
        ;   XREF to: 0058032b (CONDITIONAL_JUMP)  ; LAB_0058032b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00580320
    MOV ECX,dword ptr [EAX]             ; 00580324
    CMP ECX,0x1                         ; 00580326
    JGE 0x00580333                      ; 00580329
        ;   XREF to: 00580333 (CONDITIONAL_JUMP)  ; LAB_00580333
    ADD ESP,0x18                        ; 0058032b
        ;   Label: LAB_0058032b
    POP EBP                             ; 0058032e
    POP EDI                             ; 0058032f
    POP ESI                             ; 00580330
    POP EBX                             ; 00580331
    RET                                 ; 00580332
    IMUL EAX,ECX,0x4b030                ; 00580333
        ;   Label: LAB_00580333
    PUSH 0x1007                         ; 00580339
    PUSH 0x648567                       ; 0058033e | = "..\\core\\setedit.cpp"
    PUSH EAX                            ; 00580343
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00580344
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00580349
    MOV [0x03659384],EAX                ; 0058034c | DAT_03659384
    TEST EAX,EAX                        ; 00580351
    JNZ 0x00580378                      ; 00580353
        ;   XREF to: 00580378 (CONDITIONAL_JUMP)  ; LAB_00580378
    MOV ESI,0x64857b                    ; 00580355 | = "..\\core\\setedit.cpp"
    MOV EDI,0x1008                      ; 0058035a
    PUSH 0x64858f                       ; 0058035f | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],ESI      ; 00580364 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0058036a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00580370
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00580375
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00580378
        ;   Label: LAB_00580378
    XOR EBP,EBP                         ; 0058037c
    MOV EDX,dword ptr [EAX]             ; 0058037e
    MOV dword ptr [ESP + 0x10],EBP      ; 00580380
    TEST EDX,EDX                        ; 00580384
    JLE 0x0058032b                      ; 00580386
        ;   XREF to: 0058032b (CONDITIONAL_JUMP)  ; LAB_0058032b
    ADD EAX,0x4                         ; 00580388
    MOV dword ptr [ESP],EAX             ; 0058038b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058038e
    ADD EAX,0x110                       ; 00580392
    MOV dword ptr [ESP + 0xc],EAX       ; 00580397
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058039b
    ADD EAX,0x104                       ; 0058039f
    MOV dword ptr [ESP + 0x4],EBP       ; 005803a4
    MOV dword ptr [ESP + 0x8],EAX       ; 005803a8
    IMUL EBX,dword ptr [ESP + 0x10],0x1a4 ; 005803ac
        ;   Label: LAB_005803ac
    PUSH 0xf0                           ; 005803b4
    PUSH 0x140                          ; 005803b9
    PUSH 0x0                            ; 005803be
    MOV ECX,dword ptr [ESP + 0x10]      ; 005803c0
    MOV EAX,[0x03659384]                ; 005803c4 | DAT_03659384
    PUSH 0x0                            ; 005803c9
    MOV EBP,dword ptr [0x006703ec]      ; 005803cb | g_CDemonRendererPtr2
    ADD ECX,EAX                         ; 005803d1
    PUSH EBP                            ; 005803d3 | g_CDemonRendererInstance
    MOV EDI,dword ptr [ESP + 0x14]      ; 005803d4
    MOV dword ptr [ESP + 0x28],ECX      ; 005803d8
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 005803dc
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 005803e1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005803e4
    PUSH EAX                            ; 005803e8
    MOV EDX,dword ptr [0x006703ec]      ; 005803e9 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005803ef | g_CDemonRendererInstance
    ADD EBX,EDI                         ; 005803f0
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 005803f2
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
    ADD ESP,0x8                         ; 005803f7
    MOV ECX,dword ptr [0x006703ec]      ; 005803fa | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH dword ptr [EBX + 0x144]        ; 00580400
    PUSH ECX                            ; 00580406 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 00580407
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0058040c
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058040f
    PUSH EBX                            ; 00580413
    MOV ESI,dword ptr [0x006703ec]      ; 00580414 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0058041a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 0058041b
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr)
    ADD ESP,0x8                         ; 00580420
    MOV ECX,dword ptr [ESP + 0x14]      ; 00580423
    MOV EAX,[0x02d052e8]                ; 00580427 | g_TransformMatrix
    MOV dword ptr [ECX + 0xc],EAX       ; 0058042c
    MOV EAX,[0x02d052ec]                ; 0058042f | g_TransformMatrix[0][1]
    MOV dword ptr [ECX + 0x10],EAX      ; 00580434
    MOV EAX,[0x02d052f0]                ; 00580437 | g_TransformMatrix[0][2]
    MOV dword ptr [ECX + 0x14],EAX      ; 0058043c
    MOV EAX,[0x02d052f4]                ; 0058043f | g_TransformMatrix[1][0]
    MOV dword ptr [ECX + 0x18],EAX      ; 00580444
    MOV EAX,[0x02d052f8]                ; 00580447 | g_TransformMatrix[1][1]
    MOV dword ptr [ECX + 0x1c],EAX      ; 0058044c
    MOV EAX,[0x02d052fc]                ; 0058044f | g_TransformMatrix[1][2]
    MOV dword ptr [ECX + 0x20],EAX      ; 00580454
    MOV EAX,[0x02d05300]                ; 00580457 | g_TransformMatrix[2][0]
    MOV dword ptr [ECX + 0x24],EAX      ; 0058045c
    MOV EAX,[0x02d05304]                ; 0058045f | g_TransformMatrix[2][1]
    MOV dword ptr [ECX + 0x28],EAX      ; 00580464
    MOV EAX,[0x02d05308]                ; 00580467 | g_TransformMatrix[2][2]
    MOV dword ptr [ECX + 0x2c],EAX      ; 0058046c
    MOV EAX,[0x02d052c4]                ; 0058046f | g_CameraOriginX
    MOV EDI,dword ptr [0x006703ec]      ; 00580474 | g_CDemonRendererPtr2
    MOV dword ptr [ECX],EAX             ; 0058047a
    MOV EAX,[0x02d052c8]                ; 0058047c | g_CameraOriginY
    PUSH 0x3f87558                      ; 00580481 | g_ZeroVector
    MOV dword ptr [ECX + 0x4],EAX       ; 00580486
    MOV EAX,[0x02d052cc]                ; 00580489 | g_CameraOriginZ
    PUSH EDI                            ; 0058048e | g_CDemonRendererInstance
    MOV dword ptr [ECX + 0x8],EAX       ; 0058048f
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00580492
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00580497
    PUSH 0x0                            ; 0058049a
    MOV EBP,dword ptr [ESP + 0x30]      ; 0058049c
    PUSH 0x461c3f9a                     ; 005804a0
    PUSH EBP                            ; 005804a5
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 005804a6
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 005804ab
    XOR EBP,EBP                         ; 005804ae
    MOV ECX,dword ptr [ESP + 0x14]      ; 005804b0
        ;   Label: LAB_005804b0
    MOV EDI,EBP                         ; 005804b4
    XOR EBX,EBX                         ; 005804b6
    ADD ECX,EBP                         ; 005804b8
    MOV EAX,dword ptr [EDI + 0x2cf7d5c] ; 005804ba | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
        ;   Label: LAB_005804ba
    MOV ESI,dword ptr [EBX + EAX*0x1]   ; 005804c0
    TEST ESI,ESI                        ; 005804c3
    JLE 0x0058054b                      ; 005804c5
        ;   XREF to: 0058054b (CONDITIONAL_JUMP)  ; LAB_0058054b
    MOV EAX,0x7fffffff                  ; 005804cb
    MOV EDX,EAX                         ; 005804d0
    SAR EDX,0x1f                        ; 005804d2
    IDIV ESI                            ; 005804d5
    MOV dword ptr [ECX + 0x30],EAX      ; 005804d7
    ADD EBX,0x4                         ; 005804da
        ;   Label: LAB_005804da
    ADD ECX,0x3c0                       ; 005804dd
    CMP EBX,0x500                       ; 005804e3
    JNZ 0x005804ba                      ; 005804e9
        ;   XREF to: 005804ba (CONDITIONAL_JUMP)  ; LAB_005804ba
    ADD EBP,0x4                         ; 005804eb
    CMP EBP,0x3c0                       ; 005804ee
    JNZ 0x005804b0                      ; 005804f4
        ;   XREF to: 005804b0 (CONDITIONAL_JUMP)  ; LAB_005804b0
    MOV ECX,dword ptr [0x006703ec]      ; 005804f6 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 005804fc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 ; 005804fd
        ;   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00580502
    MOV EBX,dword ptr [ESP + 0xc]       ; 00580505
    MOV ESI,dword ptr [ESP + 0x8]       ; 00580509
    MOV EDI,dword ptr [ESP + 0x4]       ; 0058050d
    MOV EBP,dword ptr [ESP + 0x10]      ; 00580511
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00580515
    ADD EBX,0x1a4                       ; 00580519
    ADD ESI,0x1a4                       ; 0058051f
    ADD EDI,0x4b030                     ; 00580525
    INC EBP                             ; 0058052b
    MOV EDX,dword ptr [ECX]             ; 0058052c
    MOV dword ptr [ESP + 0xc],EBX       ; 0058052e
    MOV dword ptr [ESP + 0x8],ESI       ; 00580532
    MOV dword ptr [ESP + 0x4],EDI       ; 00580536
    MOV dword ptr [ESP + 0x10],EBP      ; 0058053a
    CMP EBP,EDX                         ; 0058053e
    JGE 0x0058032b                      ; 00580540
        ;   XREF to: 0058032b (CONDITIONAL_JUMP)  ; LAB_0058032b
    JMP 0x005803ac                      ; 00580546
        ;   XREF to: 005803ac (UNCONDITIONAL_JUMP)  ; LAB_005803ac
    MOV dword ptr [ECX + 0x30],0x7fffffff ; 0058054b
        ;   Label: LAB_0058054b
    JMP 0x005804da                      ; 00580552
        ;   XREF to: 005804da (UNCONDITIONAL_JUMP)  ; LAB_005804da

