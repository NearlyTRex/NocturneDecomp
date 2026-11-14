; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_getMemoryStats_FUN_00550310(char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b7717
;
; Referenced Globals:
;   TerminatedCString s_d_skeletons_d_bytes_d_mo_005d22ea
;   undefined4 g_DeformableModelPool[0].model_filename[0]
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0054bea0
;   core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00548210
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550310
        ;   Label: core_skeleton.cpp_getMemoryStats_FUN_00550310
    PUSH ESI                            ; 00550311
    PUSH EDI                            ; 00550312
    PUSH EBP                            ; 00550313
    SUB ESP,0xc                         ; 00550314
    MOV ESI,0x280305c                   ; 00550317
    XOR EBP,EBP                         ; 0055031c
    XOR EBX,EBX                         ; 0055031e
    XOR EDI,EDI                         ; 00550320
    IMUL EAX,EBX,0x1ec9c                ; 00550322
        ;   Label: LAB_00550322
    PUSH ESI                            ; 00550328
    MOV dword ptr [ESP + 0x4],EAX       ; 00550329
    CALL core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00548210 ; 0055032d
        ;   XREF to: 00548210 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00548210(CSkeleton * this_ptr)
    ADD ESP,0x4                         ; 00550332
    ADD EBP,EAX                         ; 00550335
    MOV EAX,dword ptr [ESP]             ; 00550337
    CMP byte ptr [EAX + 0x2820e84],0x0  ; 0055033a
    JZ 0x00550344                       ; 00550341
        ;   XREF to: 00550344 (CONDITIONAL_JUMP)  ; LAB_00550344
    INC EDI                             ; 00550343
    INC EBX                             ; 00550344
        ;   Label: LAB_00550344
    ADD ESI,0x1ec9c                     ; 00550345
    CMP EBX,0x28                        ; 0055034b
    JL 0x00550322                       ; 0055034e
        ;   XREF to: 00550322 (CONDITIONAL_JUMP)  ; LAB_00550322
    MOV ESI,0x272af5c                   ; 00550350
    XOR EDX,EDX                         ; 00550355
    XOR EBX,EBX                         ; 00550357
    MOV dword ptr [ESP + 0x8],EDX       ; 00550359
    ADD ESI,0x35b0                      ; 0055035d
    MOV dword ptr [ESP + 0x4],EDX       ; 00550363
    IMUL EAX,EBX,0x3600                 ; 00550367
        ;   Label: LAB_00550367
    ADD EAX,0x272af5c                   ; 0055036d
    PUSH EAX                            ; 00550372
    CALL core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0054bea0 ; 00550373
        ;   XREF to: 0054bea0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0054bea0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00550378
    ADD dword ptr [ESP + 0x8],EAX       ; 0055037b
    CMP byte ptr [ESI],0x0              ; 0055037f | g_DeformableModelPool[0].model_filename[0]
    JZ 0x00550388                       ; 00550382
        ;   XREF to: 00550388 (CONDITIONAL_JUMP)  ; LAB_00550388
    INC dword ptr [ESP + 0x4]           ; 00550384
    INC EBX                             ; 00550388
        ;   Label: LAB_00550388
    ADD ESI,0x3600                      ; 00550389
    CMP EBX,0x40                        ; 0055038f
    JL 0x00550367                       ; 00550392
        ;   XREF to: 00550367 (CONDITIONAL_JUMP)  ; LAB_00550367
    MOV EBX,dword ptr [ESP + 0x8]       ; 00550394
    PUSH EBX                            ; 00550398
    MOV ESI,dword ptr [ESP + 0x8]       ; 00550399
    PUSH ESI                            ; 0055039d
    PUSH EBP                            ; 0055039e
    PUSH EDI                            ; 0055039f
    PUSH 0x5d22ea                       ; 005503a0 | = "%d skeletons, %d bytes, %d models, %d..."
    MOV EDI,dword ptr [ESP + 0x34]      ; 005503a5
    PUSH EDI                            ; 005503a9
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005503aa
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x18                        ; 005503af
    ADD ESP,0xc                         ; 005503b2
    POP EBP                             ; 005503b5
    POP EDI                             ; 005503b6
    POP ESI                             ; 005503b7
    POP EBX                             ; 005503b8
    RET                                 ; 005503b9

