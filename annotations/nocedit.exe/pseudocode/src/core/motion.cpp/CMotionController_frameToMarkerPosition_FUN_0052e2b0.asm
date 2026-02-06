; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d3525
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e7c72
;   core_mimic.cpp_CMimic_FUN_0051fcc0 at 005201b9
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597644
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bc3f0
;   core_stranger.cpp_CStranger_FUN_005bfb60 at 005bfcbd
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005fada1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e2b0
        ;   Label: core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
    PUSH ESI                            ; 0052e2b1
    PUSH EDI                            ; 0052e2b2
    PUSH EBP                            ; 0052e2b3
    SUB ESP,0xc                         ; 0052e2b4
    MOV EDI,dword ptr [ESP + 0x20]      ; 0052e2b7
    IMUL EBX,dword ptr [EDI + 0x4],0x54c ; 0052e2bb
    MOV EDX,dword ptr [EDI]             ; 0052e2c2
    FLD float ptr [EDI + 0x8]           ; 0052e2c4
    ADD EDX,0x968                       ; 0052e2c7
    FLDZ                                ; 0052e2cd
    ADD EBX,EDX                         ; 0052e2cf
    FCOMPP                              ; 0052e2d1
    FNSTSW AX                           ; 0052e2d3
    SAHF                                ; 0052e2d5
    JNC 0x0052e345                      ; 0052e2d6
        ;   XREF to: 0052e345 (CONDITIONAL_JUMP)  ; LAB_0052e345
    FILD dword ptr [EBX + 0x64]         ; 0052e2d8
    FCOMP float ptr [EDI + 0x8]         ; 0052e2db
    FNSTSW AX                           ; 0052e2de
    SAHF                                ; 0052e2e0
    JBE 0x0052e34c                      ; 0052e2e1
        ;   XREF to: 0052e34c (CONDITIONAL_JUMP)  ; LAB_0052e34c
    MOV EBP,dword ptr [EBX + 0x520]     ; 0052e2e3
    XOR ECX,ECX                         ; 0052e2e9
    XOR ESI,ESI                         ; 0052e2eb
    TEST EBP,EBP                        ; 0052e2ed
    JLE 0x0052e315                      ; 0052e2ef
        ;   XREF to: 0052e315 (CONDITIONAL_JUMP)  ; LAB_0052e315
    MOV EDX,EBX                         ; 0052e2f1
    FILD dword ptr [EDX + 0x524]        ; 0052e2f3
        ;   Label: LAB_0052e2f3
    FCOMP float ptr [EDI + 0x8]         ; 0052e2f9
    FNSTSW AX                           ; 0052e2fc
    SAHF                                ; 0052e2fe
    JA 0x0052e35d                       ; 0052e2ff
        ;   XREF to: 0052e35d (CONDITIONAL_JUMP)  ; LAB_0052e35d
    ADD EDX,0x4                         ; 0052e301
    INC ECX                             ; 0052e304
    MOV EBP,dword ptr [EBX + 0x520]     ; 0052e305
    MOV ESI,dword ptr [EDX + 0x520]     ; 0052e30b
    CMP ECX,EBP                         ; 0052e311
    JL 0x0052e2f3                       ; 0052e313
        ;   XREF to: 0052e2f3 (CONDITIONAL_JUMP)  ; LAB_0052e2f3
    MOV dword ptr [ESP + 0x4],ESI       ; 0052e315
        ;   Label: LAB_0052e315
    MOV EDX,dword ptr [EBX + 0x64]      ; 0052e319
    FILD dword ptr [ESP + 0x4]          ; 0052e31c
    SUB EDX,ESI                         ; 0052e320
    FSUBR float ptr [EDI + 0x8]         ; 0052e322
    MOV dword ptr [ESP + 0x4],EDX       ; 0052e325
    FILD dword ptr [ESP + 0x4]          ; 0052e329
    FDIVP                               ; 0052e32d
    FILD dword ptr [EBX + 0x520]        ; 0052e32f
    FADDP                               ; 0052e335
    FSTP float ptr [ESP]                ; 0052e337
        ;   Label: LAB_0052e337
    MOV EAX,dword ptr [ESP]             ; 0052e33a
        ;   Label: LAB_0052e33a
    ADD ESP,0xc                         ; 0052e33d
    POP EBP                             ; 0052e340
    POP EDI                             ; 0052e341
    POP ESI                             ; 0052e342
    POP EBX                             ; 0052e343
    RET                                 ; 0052e344
    XOR EAX,EAX                         ; 0052e345
        ;   Label: LAB_0052e345
    MOV dword ptr [ESP],EAX             ; 0052e347
    JMP 0x0052e33a                      ; 0052e34a
        ;   XREF to: 0052e33a (UNCONDITIONAL_JUMP)  ; LAB_0052e33a
    MOV EDX,dword ptr [EBX + 0x520]     ; 0052e34c
        ;   Label: LAB_0052e34c
    INC EDX                             ; 0052e352
    MOV dword ptr [ESP + 0x4],EDX       ; 0052e353
    FILD dword ptr [ESP + 0x4]          ; 0052e357
    JMP 0x0052e337                      ; 0052e35b
        ;   XREF to: 0052e337 (UNCONDITIONAL_JUMP)  ; LAB_0052e337
    MOV EDX,dword ptr [EDX + 0x524]     ; 0052e35d
        ;   Label: LAB_0052e35d
    SUB EDX,ESI                         ; 0052e363
    MOV dword ptr [ESP + 0x4],EDX       ; 0052e365
    MOV dword ptr [ESP + 0x8],ESI       ; 0052e369
    FILD dword ptr [ESP + 0x4]          ; 0052e36d
    FILD dword ptr [ESP + 0x8]          ; 0052e371
    FSUBR float ptr [EDI + 0x8]         ; 0052e375
    FDIVRP                              ; 0052e378
    MOV dword ptr [ESP + 0x8],ECX       ; 0052e37a
    FILD dword ptr [ESP + 0x8]          ; 0052e37e
    FADDP                               ; 0052e382
    FSTP float ptr [ESP]                ; 0052e384
    MOV EAX,dword ptr [ESP]             ; 0052e387
    ADD ESP,0xc                         ; 0052e38a
    POP EBP                             ; 0052e38d
    POP EDI                             ; 0052e38e
    POP ESI                             ; 0052e38f
    POP EBX                             ; 0052e390
    RET                                 ; 0052e391

