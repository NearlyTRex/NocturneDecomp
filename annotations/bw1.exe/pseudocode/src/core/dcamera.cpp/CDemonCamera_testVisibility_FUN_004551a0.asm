; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_testVisibility_FUN_004551a0(CDemonCamera *this_ptr,CVector3i *corners)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   corners
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_00629014
;   undefined4 DAT_00629044
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_FUN_005558c0
;   engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004551a0
        ;   Label: core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004551a0
    PUSH ESI                            ; 004551a1
    PUSH EDI                            ; 004551a2
    PUSH EBP                            ; 004551a3
    SUB ESP,0x28                        ; 004551a4
    MOV EBP,dword ptr [ESP + 0x40]      ; 004551a7
    PUSH 0x152bc2c                      ; 004551ab
    MOV EDX,dword ptr [0x00612560]      ; 004551b0 | DAT_00612560
    PUSH EDX                            ; 004551b6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0 ; 004551b7
        ;   XREF to: 004851a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0(CDemonRenderer * this_ptr, SCameraViewportState * output_state)
    ADD ESP,0x8                         ; 004551bc
    PUSH 0x1483940                      ; 004551bf
    MOV ECX,dword ptr [0x00612560]      ; 004551c4 | DAT_00612560
    MOV EDI,0x629014                    ; 004551ca | DAT_00629014
    PUSH ECX                            ; 004551cf | DAT_01bc120c
    MOV ESI,EBP                         ; 004551d0
    ADD EBP,0x60                        ; 004551d2
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040 ; 004551d5
        ;   XREF to: 00485040 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040(CDemonRenderer * this_ptr, SCameraViewportState * camera_state)
    ADD ESP,0x8                         ; 004551da
    PUSH ESI                            ; 004551dd
        ;   Label: LAB_004551dd
    PUSH EDI                            ; 004551de | DAT_00629014 | DAT_00629044
    CALL engine_special.cpp_FUN_0058043c ; 004551df
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESI,0xc                         ; 004551e4
    ADD ESP,0x8                         ; 004551e7
    ADD EDI,0x30                        ; 004551ea
    CMP ESI,EBP                         ; 004551ed
    JNZ 0x004551dd                      ; 004551ef
        ;   XREF to: 004551dd (CONDITIONAL_JUMP)  ; LAB_004551dd
    MOV EBX,0x4                         ; 004551f1
    PUSH 0x1                            ; 004551f6
    MOV EDX,dword ptr [0x00612560]      ; 004551f8 | DAT_00612560
    XOR ESI,EBP                         ; 004551fe
    XOR EDI,EDI                         ; 00455200
    MOV EBP,0x2                         ; 00455202
    MOV dword ptr [ESP + 0x8],EBX       ; 00455207
    MOV dword ptr [ESP + 0x18],ESI      ; 0045520b
    MOV dword ptr [ESP + 0x14],EDI      ; 0045520f
    PUSH EDX                            ; 00455213 | DAT_01bc120c
    MOV dword ptr [ESP + 0x14],EDI      ; 00455214
    MOV dword ptr [ESP + 0x10],EDI      ; 00455218
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 0045521c
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    LEA EAX,[ESP + 0x8]                 ; 00455221
    ADD ESP,0x8                         ; 00455225
    XOR ESI,ESI                         ; 00455228
    MOV dword ptr [ESP + 0x18],EDI      ; 0045522a
    MOV dword ptr [ESP + 0x1c],EBX      ; 0045522e
    PUSH EAX                            ; 00455232
    MOV EAX,[0x00622c18]                ; 00455233 | g_CDemonSetPtr
    MOV EDI,0x6                         ; 00455238
    PUSH EAX                            ; 0045523d | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x2c],EBP      ; 0045523e
    MOV dword ptr [ESP + 0x28],EDI      ; 00455242
    CALL core_set.cpp_FUN_005558c0      ; 00455246
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0045524b
    TEST EAX,EAX                        ; 0045524e
    JZ 0x00455286                       ; 00455250
        ;   XREF to: 00455286 (CONDITIONAL_JUMP)  ; LAB_00455286
    MOV ESI,0x1                         ; 00455252
        ;   Label: LAB_00455252
    PUSH 0x0                            ; 00455257
        ;   Label: LAB_00455257
    MOV ECX,dword ptr [0x00612560]      ; 00455259 | DAT_00612560
    PUSH ECX                            ; 0045525f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00455260
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00455265
    PUSH 0x152bc2c                      ; 00455268
    MOV EBX,dword ptr [0x00612560]      ; 0045526d | DAT_00612560
    PUSH EBX                            ; 00455273 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040 ; 00455274
        ;   XREF to: 00485040 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_00485040(CDemonRenderer * this_ptr, SCameraViewportState * camera_state)
    ADD ESP,0x8                         ; 00455279
    MOV EAX,ESI                         ; 0045527c
    ADD ESP,0x28                        ; 0045527e
    POP EBP                             ; 00455281
    POP EDI                             ; 00455282
    POP ESI                             ; 00455283
    POP EBX                             ; 00455284
    RET                                 ; 00455285
    MOV EDX,0x1                         ; 00455286
        ;   Label: LAB_00455286
    MOV ECX,0x3                         ; 0045528b
    MOV EBX,0x7                         ; 00455290
    MOV EDI,0x5                         ; 00455295
    MOV EAX,ESP                         ; 0045529a
    MOV EBP,dword ptr [0x00622c18]      ; 0045529c | g_CDemonSetPtr
    PUSH EAX                            ; 004552a2
    MOV dword ptr [ESP + 0x1c],EDX      ; 004552a3
    MOV dword ptr [ESP + 0x20],ECX      ; 004552a7
    PUSH EBP                            ; 004552ab | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EBX      ; 004552ac
    MOV dword ptr [ESP + 0x2c],EDI      ; 004552b0
    CALL core_set.cpp_FUN_005558c0      ; 004552b4
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004552b9
    TEST EAX,EAX                        ; 004552bc
    JNZ 0x00455252                      ; 004552be
        ;   XREF to: 00455252 (CONDITIONAL_JUMP)  ; LAB_00455252
    MOV EDX,0x1                         ; 004552c0
    MOV dword ptr [ESP + 0x18],EAX      ; 004552c5
    MOV EAX,ESP                         ; 004552c9
    MOV dword ptr [ESP + 0x20],EDI      ; 004552cb
    PUSH EAX                            ; 004552cf
    MOV EDI,dword ptr [0x00622c18]      ; 004552d0 | g_CDemonSetPtr
    MOV EBX,0x4                         ; 004552d6
    PUSH EDI                            ; 004552db | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDX      ; 004552dc
    MOV dword ptr [ESP + 0x2c],EBX      ; 004552e0
    CALL core_set.cpp_FUN_005558c0      ; 004552e4
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004552e9
    TEST EAX,EAX                        ; 004552ec
    JNZ 0x00455252                      ; 004552ee
        ;   XREF to: 00455252 (CONDITIONAL_JUMP)  ; LAB_00455252
    MOV EBP,0x2                         ; 004552f4
    MOV EAX,0x6                         ; 004552f9
    MOV EDX,0x7                         ; 004552fe
    MOV dword ptr [ESP + 0x1c],EAX      ; 00455303
    MOV EAX,ESP                         ; 00455307
    MOV ECX,0x3                         ; 00455309
    PUSH EAX                            ; 0045530e
    MOV EBX,dword ptr [0x00622c18]      ; 0045530f | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBP      ; 00455315
    PUSH EBX                            ; 00455319 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EDX      ; 0045531a
    MOV dword ptr [ESP + 0x2c],ECX      ; 0045531e
    CALL core_set.cpp_FUN_005558c0      ; 00455322
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00455327
    TEST EAX,EAX                        ; 0045532a
    JNZ 0x00455252                      ; 0045532c
        ;   XREF to: 00455252 (CONDITIONAL_JUMP)  ; LAB_00455252
    MOV dword ptr [ESP + 0x20],0x3      ; 00455332
    MOV EAX,ESP                         ; 0045533a
    MOV EDX,0x1                         ; 0045533c
    PUSH EAX                            ; 00455341
    MOV ECX,dword ptr [0x00622c18]      ; 00455342 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 00455348
    PUSH ECX                            ; 0045534c | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EBP      ; 0045534d
    MOV dword ptr [ESP + 0x2c],EDX      ; 00455351
    CALL core_set.cpp_FUN_005558c0      ; 00455355
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0045535a
    TEST EAX,EAX                        ; 0045535d
    JNZ 0x00455252                      ; 0045535f
        ;   XREF to: 00455252 (CONDITIONAL_JUMP)  ; LAB_00455252
    MOV EBX,0x4                         ; 00455365
    MOV EAX,0x6                         ; 0045536a
    MOV EDI,0x5                         ; 0045536f
    MOV dword ptr [ESP + 0x24],EAX      ; 00455374
    MOV EAX,ESP                         ; 00455378
    MOV EBP,0x7                         ; 0045537a
    PUSH EAX                            ; 0045537f
    MOV EDX,dword ptr [0x00622c18]      ; 00455380 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBX      ; 00455386
    PUSH EDX                            ; 0045538a | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDI      ; 0045538b
    MOV dword ptr [ESP + 0x28],EBP      ; 0045538f
    CALL core_set.cpp_FUN_005558c0      ; 00455393
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00455398
    TEST EAX,EAX                        ; 0045539b
    JZ 0x00455257                       ; 0045539d
        ;   XREF to: 00455257 (CONDITIONAL_JUMP)  ; LAB_00455257
    JMP 0x00455252                      ; 004553a3
        ;   XREF to: 00455252 (UNCONDITIONAL_JUMP)  ; LAB_00455252

