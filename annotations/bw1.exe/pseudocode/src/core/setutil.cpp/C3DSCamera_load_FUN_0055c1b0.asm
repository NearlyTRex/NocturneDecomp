; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_0055c1b0(C3DSCamera *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   core_set.cpp_FUN_0054d3c0 at 0054d8e1
;
; Referenced Globals:
;   undefined4 DAT_005f1081
;   TerminatedCString s_f_f_f_005f1085
;   TerminatedCString s_f_f_f_005f108f
;   undefined4 DAT_005f1099
;   TerminatedCString s_f_f_f_005f109d
;   TerminatedCString s_f_f_f_005f10a7
;   TerminatedCString s_f_f_f_005f10b1
;   undefined4 DAT_005f10bb
;   TerminatedCString s_f_f_f_005f10bf
;   TerminatedCString s_f_f_f_005f10c9
;   undefined4 DAT_005f10d3
;   undefined4 DAT_005f10d7
;   TerminatedCString s_core_setutil_cpp_005f10db
;   TerminatedCString s_Panning_cameras_not_supp_005f10ef
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   ... and 13 more
;
; Called Functions:
;   core_dcamera.cpp_loadCameraFog_FUN_00454ab0
;   core_main.c_FUN_005030e0
;   core_setutil.cpp_C3DSCamera_reset_FUN_0055c140
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_stdio.c_sscanf_FUN_005c2cac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c1b0
        ;   Label: core_setutil.cpp_C3DSCamera_load_FUN_0055c1b0
    PUSH ESI                            ; 0055c1b1
    PUSH EDI                            ; 0055c1b2
    PUSH EBP                            ; 0055c1b3
    SUB ESP,0x100                       ; 0055c1b4
    MOV EBX,dword ptr [ESP + 0x114]     ; 0055c1ba
    MOV ESI,dword ptr [ESP + 0x118]     ; 0055c1c1
    PUSH EBX                            ; 0055c1c8
    CALL core_setutil.cpp_C3DSCamera_reset_FUN_0055c140 ; 0055c1c9
        ;   XREF to: 0055c140 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_reset_FUN_0055c140()
    MOV EAX,[0x00622c18]                ; 0055c1ce | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0055c1d3 | g_CDemonSetInstance.field130_0x15acc0
    ADD ESP,0x4                         ; 0055c1d9
    CMP EDX,0xb                         ; 0055c1dc
    JGE 0x0055c45e                      ; 0055c1df
        ;   XREF to: 0055c45e (CONDITIONAL_JUMP)  ; LAB_0055c45e
    PUSH ESI                            ; 0055c1e5
        ;   Label: LAB_0055c1e5
    PUSH 0xff                           ; 0055c1e6
    LEA EAX,[ESP + 0x8]                 ; 0055c1eb
    PUSH EAX                            ; 0055c1ef
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c1f0
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c1f5
    PUSH EBX                            ; 0055c1f8
    PUSH 0x5f1081                       ; 0055c1f9 | DAT_005f1081
    LEA EAX,[ESP + 0x8]                 ; 0055c1fe
    PUSH EAX                            ; 0055c202
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 0055c203
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    MOV EAX,[0x00622c18]                ; 0055c208 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0055c20d | g_CDemonSetInstance.field130_0x15acc0
    ADD ESP,0xc                         ; 0055c213
    CMP ECX,0xb                         ; 0055c216
    JL 0x0055c22e                       ; 0055c219
        ;   XREF to: 0055c22e (CONDITIONAL_JUMP)  ; LAB_0055c22e
    PUSH ESI                            ; 0055c21b
    PUSH 0xff                           ; 0055c21c
    LEA EAX,[ESP + 0x8]                 ; 0055c221
    PUSH EAX                            ; 0055c225
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c226
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c22b
    LEA EAX,[EBX + 0x108]               ; 0055c22e
        ;   Label: LAB_0055c22e
    PUSH EAX                            ; 0055c234
    LEA EAX,[EBX + 0x104]               ; 0055c235
    PUSH EAX                            ; 0055c23b
    LEA EAX,[EBX + 0x100]               ; 0055c23c
    PUSH EAX                            ; 0055c242
    PUSH 0x5f1085                       ; 0055c243 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0055c248
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c249
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055c24e | g_CDemonSetPtr
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 0055c253 | g_CDemonSetInstance.field130_0x15acc0
    ADD ESP,0x14                        ; 0055c259
    CMP EDI,0xb                         ; 0055c25c
    JL 0x0055c274                       ; 0055c25f
        ;   XREF to: 0055c274 (CONDITIONAL_JUMP)  ; LAB_0055c274
    PUSH ESI                            ; 0055c261
    PUSH 0xff                           ; 0055c262
    LEA EAX,[ESP + 0x8]                 ; 0055c267
    PUSH EAX                            ; 0055c26b
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c26c
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c271
    LEA EAX,[EBX + 0x110]               ; 0055c274
        ;   Label: LAB_0055c274
    PUSH EAX                            ; 0055c27a
    LEA EAX,[EBX + 0x114]               ; 0055c27b
    PUSH EAX                            ; 0055c281
    LEA EAX,[EBX + 0x10c]               ; 0055c282
    PUSH EAX                            ; 0055c288
    PUSH 0x5f108f                       ; 0055c289 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0055c28e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c28f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055c294 | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 0055c299 | g_CDemonSetInstance.field130_0x15acc0
    ADD ESP,0x14                        ; 0055c29f
    CMP EBP,0xb                         ; 0055c2a2
    JL 0x0055c2ba                       ; 0055c2a5
        ;   XREF to: 0055c2ba (CONDITIONAL_JUMP)  ; LAB_0055c2ba
    PUSH ESI                            ; 0055c2a7
    PUSH 0xff                           ; 0055c2a8
    LEA EAX,[ESP + 0x8]                 ; 0055c2ad
    PUSH EAX                            ; 0055c2b1
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c2b2
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c2b7
    LEA EAX,[EBX + 0x144]               ; 0055c2ba
        ;   Label: LAB_0055c2ba
    PUSH EAX                            ; 0055c2c0
    PUSH 0x5f1099                       ; 0055c2c1 | DAT_005f1099
    PUSH ESI                            ; 0055c2c6
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c2c7
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0055c2cc
    PUSH ESI                            ; 0055c2cf
    PUSH 0xff                           ; 0055c2d0
    LEA EAX,[ESP + 0x8]                 ; 0055c2d5
    PUSH EAX                            ; 0055c2d9
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c2da
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c2df
    LEA EAX,[EBX + 0x120]               ; 0055c2e2
    PUSH EAX                            ; 0055c2e8
    LEA EAX,[EBX + 0x11c]               ; 0055c2e9
    PUSH EAX                            ; 0055c2ef
    LEA EAX,[EBX + 0x118]               ; 0055c2f0
    PUSH EAX                            ; 0055c2f6
    PUSH 0x5f109d                       ; 0055c2f7 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0055c2fc
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c2fd
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 0055c302
    LEA EAX,[EBX + 0x12c]               ; 0055c305
    PUSH EAX                            ; 0055c30b
    LEA EAX,[EBX + 0x128]               ; 0055c30c
    PUSH EAX                            ; 0055c312
    LEA EAX,[EBX + 0x124]               ; 0055c313
    PUSH EAX                            ; 0055c319
    PUSH 0x5f10a7                       ; 0055c31a | = "%f,%f,%f\n"
    PUSH ESI                            ; 0055c31f
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c320
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 0055c325
    LEA EAX,[EBX + 0x138]               ; 0055c328
    PUSH EAX                            ; 0055c32e
    LEA EAX,[EBX + 0x134]               ; 0055c32f
    PUSH EAX                            ; 0055c335
    LEA EAX,[EBX + 0x130]               ; 0055c336
    PUSH EAX                            ; 0055c33c
    PUSH 0x5f10b1                       ; 0055c33d | = "%f,%f,%f\n"
    PUSH ESI                            ; 0055c342
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c343
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055c348 | g_CDemonSetPtr
    LEA EDI,[EBX + 0x154]               ; 0055c34d
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0055c353 | g_CDemonSetInstance.field130_0x15acc0
    ADD ESP,0x14                        ; 0055c359
    CMP EDX,0x12                        ; 0055c35c
    JL 0x0055c476                       ; 0055c35f
        ;   XREF to: 0055c476 (CONDITIONAL_JUMP)  ; LAB_0055c476
    LEA EAX,[EBX + 0x150]               ; 0055c365
    PUSH EAX                            ; 0055c36b
    PUSH 0x5f10bb                       ; 0055c36c | DAT_005f10bb
    PUSH ESI                            ; 0055c371
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c372
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV ECX,dword ptr [EBX + 0x150]     ; 0055c377
    ADD ESP,0xc                         ; 0055c37d
    TEST ECX,ECX                        ; 0055c380
    JNZ 0x0055c39a                      ; 0055c382
        ;   XREF to: 0055c39a (CONDITIONAL_JUMP)  ; LAB_0055c39a
    MOV EAX,[0x00622c18]                ; 0055c384 | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 0055c389 | g_CDemonSetInstance.field130_0x15acc0
    PUSH EBP                            ; 0055c38f
    PUSH ESI                            ; 0055c390
    PUSH EDI                            ; 0055c391
    CALL core_dcamera.cpp_loadCameraFog_FUN_00454ab0 ; 0055c392
        ;   XREF to: 00454ab0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_loadCameraFog_FUN_00454ab0()
    ADD ESP,0xc                         ; 0055c397
    MOV EAX,[0x00622c18]                ; 0055c39a | g_CDemonSetPtr
        ;   Label: LAB_0055c39a
    CMP dword ptr [EAX + 0x15acc0],0x17 ; 0055c39f | g_CDemonSetInstance.field130_0x15acc0
    JL 0x0055c401                       ; 0055c3a6
        ;   XREF to: 0055c401 (CONDITIONAL_JUMP)  ; LAB_0055c401
    PUSH ESI                            ; 0055c3a8
    PUSH 0xff                           ; 0055c3a9
    LEA EAX,[ESP + 0x8]                 ; 0055c3ae
    PUSH EAX                            ; 0055c3b2
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c3b3
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c3b8
    LEA EAX,[EBX + 0x184]               ; 0055c3bb
    PUSH EAX                            ; 0055c3c1
    LEA EAX,[EBX + 0x180]               ; 0055c3c2
    PUSH EAX                            ; 0055c3c8
    LEA EAX,[EBX + 0x17c]               ; 0055c3c9
    PUSH EAX                            ; 0055c3cf
    PUSH 0x5f10bf                       ; 0055c3d0 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0055c3d5
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c3d6
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 0055c3db
    LEA EAX,[EBX + 0x190]               ; 0055c3de
    PUSH EAX                            ; 0055c3e4
    LEA EAX,[EBX + 0x18c]               ; 0055c3e5
    PUSH EAX                            ; 0055c3eb
    LEA EAX,[EBX + 0x188]               ; 0055c3ec
    PUSH EAX                            ; 0055c3f2
    PUSH 0x5f10c9                       ; 0055c3f3 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0055c3f8
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c3f9
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 0055c3fe
    MOV EAX,[0x00622c18]                ; 0055c401 | g_CDemonSetPtr
        ;   Label: LAB_0055c401
    CMP dword ptr [EAX + 0x15acc0],0x17 ; 0055c406 | g_CDemonSetInstance.field130_0x15acc0
    JL 0x0055c437                       ; 0055c40d
        ;   XREF to: 0055c437 (CONDITIONAL_JUMP)  ; LAB_0055c437
    PUSH ESI                            ; 0055c40f
    PUSH 0xff                           ; 0055c410
    LEA EAX,[ESP + 0x8]                 ; 0055c415
    PUSH EAX                            ; 0055c419
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c41a
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c41f
    LEA EAX,[EBX + 0x178]               ; 0055c422
    PUSH EAX                            ; 0055c428
    PUSH 0x5f10d3                       ; 0055c429 | DAT_005f10d3
    PUSH ESI                            ; 0055c42e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c42f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0055c434
    MOV EAX,[0x00622c18]                ; 0055c437 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0055c437
    CMP dword ptr [EAX + 0x15acc0],0x1b ; 0055c43c | g_CDemonSetInstance.field130_0x15acc0
    JZ 0x0055c4ce                       ; 0055c443
        ;   XREF to: 0055c4ce (CONDITIONAL_JUMP)  ; LAB_0055c4ce
    MOV dword ptr [EBX + 0x140],0x0     ; 0055c449
    ADD ESP,0x100                       ; 0055c453
        ;   Label: LAB_0055c453
    POP EBP                             ; 0055c459
    POP EDI                             ; 0055c45a
    POP ESI                             ; 0055c45b
    POP EBX                             ; 0055c45c
    RET                                 ; 0055c45d
    PUSH ESI                            ; 0055c45e
        ;   Label: LAB_0055c45e
    PUSH 0xff                           ; 0055c45f
    LEA EAX,[ESP + 0x8]                 ; 0055c464
    PUSH EAX                            ; 0055c468
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c469
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c46e
    JMP 0x0055c1e5                      ; 0055c471
        ;   XREF to: 0055c1e5 (UNCONDITIONAL_JUMP)  ; LAB_0055c1e5
    MOV dword ptr [EBX + 0x150],0x1     ; 0055c476
        ;   Label: LAB_0055c476
    MOV EBP,dword ptr [EAX + 0x15ac40]  ; 0055c480 | g_CDemonSetInstance.field44_0x15ac40
    ADD EAX,0x15ac40                    ; 0055c486
    MOV dword ptr [EDI],EBP             ; 0055c48b
    MOV ECX,EDI                         ; 0055c48d
    MOV EBP,dword ptr [EAX + 0x4]       ; 0055c48f | g_CDemonSetInstance.field48_0x15ac44
    MOV EDX,EAX                         ; 0055c492
    MOV dword ptr [EDI + 0x4],EBP       ; 0055c494
    ADD EDI,0xc                         ; 0055c497
    MOV EBP,dword ptr [EAX + 0x8]       ; 0055c49a | g_CDemonSetInstance.field52_0x15ac48
    ADD EAX,0xc                         ; 0055c49d
    MOV dword ptr [EDI + -0x4],EBP      ; 0055c4a0
    CMP EDI,EAX                         ; 0055c4a3
    JZ 0x0055c4b7                       ; 0055c4a5
        ;   XREF to: 0055c4b7 (CONDITIONAL_JUMP)  ; LAB_0055c4b7
    MOV EBP,dword ptr [EAX]             ; 0055c4a7 | g_CDemonSetInstance.field56_0x15ac4c
    MOV dword ptr [EDI],EBP             ; 0055c4a9
    MOV EBP,dword ptr [EAX + 0x4]       ; 0055c4ab | g_CDemonSetInstance.field60_0x15ac50
    MOV dword ptr [EDI + 0x4],EBP       ; 0055c4ae
    MOV EBP,dword ptr [EAX + 0x8]       ; 0055c4b1 | g_CDemonSetInstance.field64_0x15ac54
    MOV dword ptr [EDI + 0x8],EBP       ; 0055c4b4
    MOV EAX,dword ptr [EDX + 0x18]      ; 0055c4b7 | g_CDemonSetInstance.field68_0x15ac58
        ;   Label: LAB_0055c4b7
    MOV dword ptr [ECX + 0x18],EAX      ; 0055c4ba
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0055c4bd | g_CDemonSetInstance.field72_0x15ac5c
    MOV dword ptr [ECX + 0x1c],EAX      ; 0055c4c0
    MOV EAX,dword ptr [EDX + 0x20]      ; 0055c4c3 | g_CDemonSetInstance.field76_0x15ac60
    MOV dword ptr [ECX + 0x20],EAX      ; 0055c4c6
    JMP 0x0055c39a                      ; 0055c4c9
        ;   XREF to: 0055c39a (UNCONDITIONAL_JUMP)  ; LAB_0055c39a
    PUSH ESI                            ; 0055c4ce
        ;   Label: LAB_0055c4ce
    PUSH 0xff                           ; 0055c4cf
    LEA EAX,[ESP + 0x8]                 ; 0055c4d4
    PUSH EAX                            ; 0055c4d8
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c4d9
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c4de
    LEA EAX,[EBX + 0x140]               ; 0055c4e1
    PUSH EAX                            ; 0055c4e7
    PUSH 0x5f10d7                       ; 0055c4e8 | DAT_005f10d7
    PUSH ESI                            ; 0055c4ed
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c4ee
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EBP,dword ptr [EBX + 0x140]     ; 0055c4f3
    ADD ESP,0xc                         ; 0055c4f9
    TEST EBP,EBP                        ; 0055c4fc
    JZ 0x0055c453                       ; 0055c4fe
        ;   XREF to: 0055c453 (CONDITIONAL_JUMP)  ; LAB_0055c453
    MOV EAX,0x5f10db                    ; 0055c504 | = "..\\core\\setutil.cpp"
    MOV EDX,0xd5                        ; 0055c509
    PUSH 0x5f10ef                       ; 0055c50e | = "Panning cameras not supported, bucko!"
    MOV [0x01d1d400],EAX                ; 0055c513 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0055c518 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055c51e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0055c523
    ADD ESP,0x100                       ; 0055c526
    POP EBP                             ; 0055c52c
    POP EDI                             ; 0055c52d
    POP ESI                             ; 0055c52e
    POP EBX                             ; 0055c52f
    RET                                 ; 0055c530

