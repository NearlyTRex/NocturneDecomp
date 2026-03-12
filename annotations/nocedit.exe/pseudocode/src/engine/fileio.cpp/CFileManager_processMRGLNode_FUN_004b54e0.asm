; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager *this_ptr,SMRGLHeaderExtended *mrgl_node)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; SMRGLHeaderExtended * Stack[0x8]:4   mrgl_node
; Local Variables:
; SMRGLHeaderExtended * Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610 at 004b5626
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_00627628
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0
;   engine_model.c_freeMRGLData_FUN_005280b0
;   engine_model.c_getMRGLSize_FUN_00528700
;   engine_model.c_loadModelFile_FUN_00527ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b54e0
        ;   Label: engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
    PUSH ESI                            ; 004b54e1
    PUSH EDI                            ; 004b54e2
    PUSH EBP                            ; 004b54e3
    SUB ESP,0x8                         ; 004b54e4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004b54e7
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b54eb
    MOV EDX,dword ptr [EAX]             ; 004b54ef
    MOV dword ptr [ESP + 0x4],EAX       ; 004b54f1
    CMP EDX,0x20                        ; 004b54f5
    JZ 0x004b5584                       ; 004b54f8
        ;   XREF to: 004b5584 (CONDITIONAL_JUMP)  ; LAB_004b5584
    CMP EDX,0x26                        ; 004b54fe
    JZ 0x004b55d8                       ; 004b5501
        ;   XREF to: 004b55d8 (CONDITIONAL_JUMP)  ; LAB_004b55d8
    LEA EAX,[EAX]                       ; 004b5507
    LEA EDX,[EDX]                       ; 004b550d
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b5510
        ;   Label: LAB_004b5510
    MOV EBX,dword ptr [EAX]             ; 004b5514
    TEST EBX,EBX                        ; 004b5516
    JZ 0x004b55d0                       ; 004b5518
        ;   XREF to: 004b55d0 (CONDITIONAL_JUMP)  ; LAB_004b55d0
    CMP EBX,0xd                         ; 004b551e
    JZ 0x004b5528                       ; 004b5521
        ;   XREF to: 004b5528 (CONDITIONAL_JUMP)  ; LAB_004b5528
    CMP EBX,0x40                        ; 004b5523
    JNZ 0x004b5539                      ; 004b5526
        ;   XREF to: 004b5539 (CONDITIONAL_JUMP)  ; LAB_004b5539
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b5528
        ;   Label: LAB_004b5528
    ADD EAX,0x8                         ; 004b552c
    PUSH EAX                            ; 004b552f
    PUSH EDI                            ; 004b5530
    CALL engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0 ; 004b5531
        ;   XREF to: 004b53e0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0(CFileManager * this_ptr, char * texture_filename)
    ADD ESP,0x8                         ; 004b5536
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b5539
        ;   Label: LAB_004b5539
    CMP dword ptr [EAX],0x1d            ; 004b553d
    JNZ 0x004b5565                      ; 004b5540
        ;   XREF to: 004b5565 (CONDITIONAL_JUMP)  ; LAB_004b5565
    MOV EBP,EAX                         ; 004b5542
    MOV ECX,dword ptr [EAX + 0x8]       ; 004b5544
    XOR ESI,ESI                         ; 004b5547
    LEA EBX,[EAX + 0x1c]                ; 004b5549
    TEST ECX,ECX                        ; 004b554c
    JLE 0x004b5565                      ; 004b554e
        ;   XREF to: 004b5565 (CONDITIONAL_JUMP)  ; LAB_004b5565
    PUSH EBX                            ; 004b5550
        ;   Label: LAB_004b5550
    PUSH EDI                            ; 004b5551
    INC ESI                             ; 004b5552
    CALL engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0 ; 004b5553
        ;   XREF to: 004b53e0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0(CFileManager * this_ptr, char * texture_filename)
    ADD EBX,0x20                        ; 004b5558
    MOV EAX,dword ptr [EBP + 0x8]       ; 004b555b
    ADD ESP,0x8                         ; 004b555e
    CMP ESI,EAX                         ; 004b5561
    JL 0x004b5550                       ; 004b5563
        ;   XREF to: 004b5550 (CONDITIONAL_JUMP)  ; LAB_004b5550
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b5565
        ;   Label: LAB_004b5565
    PUSH EDX                            ; 004b5569
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 004b556a
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 004b556f
    SHR EAX,0x2                         ; 004b5572
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b5575
    SHL EAX,0x2                         ; 004b5579
    ADD ECX,EAX                         ; 004b557c
    MOV dword ptr [ESP + 0x4],ECX       ; 004b557e
    JMP 0x004b5510                      ; 004b5582
        ;   XREF to: 004b5510 (UNCONDITIONAL_JUMP)  ; LAB_004b5510
    MOV dword ptr [ESP],EAX             ; 004b5584
        ;   Label: LAB_004b5584
    MOV ESI,dword ptr [EAX + 0x8]       ; 004b5587
    XOR EBP,EBP                         ; 004b558a
    TEST ESI,ESI                        ; 004b558c
    JLE 0x004b55d0                      ; 004b558e
        ;   XREF to: 004b55d0 (CONDITIONAL_JUMP)  ; LAB_004b55d0
    LEA EBX,[EAX + 0x18]                ; 004b5590
    PUSH EBX                            ; 004b5593
        ;   Label: LAB_004b5593
    CALL engine_model.c_loadModelFile_FUN_00527ec0 ; 004b5594
        ;   XREF to: 00527ec0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
    ADD ESP,0x4                         ; 004b5599
    PUSH EBX                            ; 004b559c
    PUSH 0x627628                       ; 004b559d | = "MODELS\\%s\n"
    MOV EDX,dword ptr [EDI]             ; 004b55a2
    PUSH EDX                            ; 004b55a4
    MOV ESI,EAX                         ; 004b55a5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004b55a7
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004b55ac
    PUSH ESI                            ; 004b55af
    PUSH EDI                            ; 004b55b0
    CALL engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 ; 004b55b1
        ;   XREF to: 004b54e0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager * this_ptr, SMRGLHeaderExtended * mrgl_node)
    ADD ESP,0x8                         ; 004b55b6
    PUSH ESI                            ; 004b55b9
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 004b55ba
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 004b55bf
    MOV EAX,dword ptr [ESP]             ; 004b55c2
    INC EBP                             ; 004b55c5
    MOV ECX,dword ptr [EAX + 0x8]       ; 004b55c6
    ADD EBX,0x10                        ; 004b55c9
    CMP EBP,ECX                         ; 004b55cc
    JL 0x004b5593                       ; 004b55ce
        ;   XREF to: 004b5593 (CONDITIONAL_JUMP)  ; LAB_004b5593
    ADD ESP,0x8                         ; 004b55d0
        ;   Label: LAB_004b55d0
    POP EBP                             ; 004b55d3
    POP EDI                             ; 004b55d4
    POP ESI                             ; 004b55d5
    POP EBX                             ; 004b55d6
    RET                                 ; 004b55d7
    MOV ESI,EAX                         ; 004b55d8
        ;   Label: LAB_004b55d8
    MOV EBX,dword ptr [EAX + 0x18]      ; 004b55da
    XOR EBP,EBP                         ; 004b55dd
    TEST EBX,EBX                        ; 004b55df
    JLE 0x004b5510                      ; 004b55e1
        ;   XREF to: 004b5510 (CONDITIONAL_JUMP)  ; LAB_004b5510
    LEA EBX,[EAX + 0x24]                ; 004b55e7
    PUSH EBX                            ; 004b55ea
        ;   Label: LAB_004b55ea
    PUSH EDI                            ; 004b55eb
    INC EBP                             ; 004b55ec
    CALL engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0 ; 004b55ed
        ;   XREF to: 004b53e0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0(CFileManager * this_ptr, char * texture_filename)
    ADD EBX,0x18                        ; 004b55f2
    MOV EAX,dword ptr [ESI + 0x18]      ; 004b55f5
    ADD ESP,0x8                         ; 004b55f8
    CMP EBP,EAX                         ; 004b55fb
    JL 0x004b55ea                       ; 004b55fd
        ;   XREF to: 004b55ea (CONDITIONAL_JUMP)  ; LAB_004b55ea
    JMP 0x004b5510                      ; 004b55ff
        ;   XREF to: 004b5510 (UNCONDITIONAL_JUMP)  ; LAB_004b5510

