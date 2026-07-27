; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(int param_1,int param_2)
;
;
; XREF[5]:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390 at 00469a7d
;   core_mirror.cpp_FUN_004d7720 at 004d7749
;   core_mirror.cpp_FUN_004d77f0 at 004d7956
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490 at 0050e4b7
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00550800 at 00550c4e
;
; Referenced Globals:
;   undefined4 DAT_005ae708
;   undefined4 DAT_01b4d764
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f190
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
    PUSH ESI                            ; 0045f191
    PUSH EBP                            ; 0045f192
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045f193
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045f197
    XOR EDX,EDX                         ; 0045f19b
    MOV ECX,dword ptr [EBX + 0xc]       ; 0045f19d
    MOV dword ptr [0x01b4d764],EDX      ; 0045f1a0 | DAT_01b4d764
    TEST ECX,ECX                        ; 0045f1a6
    JNZ 0x0045f228                      ; 0045f1a8
        ;   XREF to: 0045f228 (CONDITIONAL_JUMP)  ; LAB_0045f228
    PUSH EDI                            ; 0045f1ae
        ;   Label: LAB_0045f1ae
    CMP dword ptr [EBX + 0x4],0x0       ; 0045f1af
    JZ 0x0045f240                       ; 0045f1b3
        ;   XREF to: 0045f240 (CONDITIONAL_JUMP)  ; LAB_0045f240
    XOR EDI,EDI                         ; 0045f1b9
    MOV ECX,0x463ff5                    ; 0045f1bb
    MOV dword ptr [0x01c039a0],EDI      ; 0045f1c0 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDI      ; 0045f1c6 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],ECX      ; 0045f1cc | DAT_01c00c7c
    MOV EAX,[0x01c02594]                ; 0045f1d2 | DAT_01c02594
        ;   Label: LAB_0045f1d2
    MOV EDI,dword ptr [EBX + 0x4]       ; 0045f1d7
    TEST EAX,EAX                        ; 0045f1da
    JZ 0x0045f1e9                       ; 0045f1dc
        ;   XREF to: 0045f1e9 (CONDITIONAL_JUMP)  ; LAB_0045f1e9
    PUSH 0x1                            ; 0045f1de
    PUSH EBX                            ; 0045f1e0
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 0045f1e1
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070()
    ADD ESP,0x8                         ; 0045f1e6
    LEA EAX,[ESI + 0x18]                ; 0045f1e9
        ;   Label: LAB_0045f1e9
    PUSH EAX                            ; 0045f1ec
    MOV EDX,dword ptr [ESI + 0x4]       ; 0045f1ed
    PUSH EDX                            ; 0045f1f0
    PUSH EBX                            ; 0045f1f1
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f1f2
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    MOV ECX,dword ptr [0x01c02594]      ; 0045f1f7 | DAT_01c02594
    ADD ESP,0xc                         ; 0045f1fd
    TEST ECX,ECX                        ; 0045f200
    JZ 0x0045f20e                       ; 0045f202
        ;   XREF to: 0045f20e (CONDITIONAL_JUMP)  ; LAB_0045f20e
    PUSH EDI                            ; 0045f204
    PUSH EBX                            ; 0045f205
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070 ; 0045f206
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070()
    ADD ESP,0x8                         ; 0045f20b
    MOV EBX,dword ptr [0x005ae708]      ; 0045f20e | DAT_005ae708
        ;   Label: LAB_0045f20e
    MOV EAX,[0x01b4d764]                ; 0045f214 | DAT_01b4d764
    CMP EAX,EBX                         ; 0045f219
    SETGE AL                            ; 0045f21b
    AND EAX,0xff                        ; 0045f21e
    POP EDI                             ; 0045f223
    POP EBP                             ; 0045f224
    POP ESI                             ; 0045f225
    POP EBX                             ; 0045f226
    RET                                 ; 0045f227
    LEA EAX,[ESI + 0x8]                 ; 0045f228
        ;   Label: LAB_0045f228
    PUSH EAX                            ; 0045f22b
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045f22c
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0045f231
    TEST EAX,EAX                        ; 0045f234
    JNZ 0x0045f1ae                      ; 0045f236
        ;   XREF to: 0045f1ae (CONDITIONAL_JUMP)  ; LAB_0045f1ae
    POP EBP                             ; 0045f23c
    POP ESI                             ; 0045f23d
    POP EBX                             ; 0045f23e
    RET                                 ; 0045f23f
    MOV EAX,0xc0                        ; 0045f240
        ;   Label: LAB_0045f240
    MOV EDX,0x6                         ; 0045f245
    MOV EBP,0x463f77                    ; 0045f24a
    MOV [0x01c039a0],EAX                ; 0045f24f | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 0045f254 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],EBP      ; 0045f25a | DAT_01c00c7c
    JMP 0x0045f1d2                      ; 0045f260
        ;   XREF to: 0045f1d2 (UNCONDITIONAL_JUMP)  ; LAB_0045f1d2

