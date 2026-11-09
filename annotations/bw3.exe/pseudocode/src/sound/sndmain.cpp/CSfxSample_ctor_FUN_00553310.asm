; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * sound_sndmain_cpp_CSfxSample_ctor_FUN_00553310(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_init_FUN_00555840
;   unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00553310
        ;   Label: sound_sndmain.cpp_CSfxSample_ctor_FUN_00553310
    PUSH EAX                            ; 00553314
    CALL sound_sndmain.cpp_CSfxSample_init_FUN_00555840 ; 00553315
        ;   XREF to: 00555840 (UNCONDITIONAL_CALL)  ; CSfxSample * sound_sndmain.cpp_CSfxSample_init_FUN_00555840(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0055331a
    ADD EAX,0x17c                       ; 0055331d
    PUSH EAX                            ; 00553322
    CALL unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0 ; 00553323
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    MOV dword ptr [EAX + -0x5c],0x0     ; 00553328
    MOV dword ptr [EAX + -0x28],0x0     ; 0055332f
    MOV dword ptr [EAX + -0x24],0x0     ; 00553336
    MOV dword ptr [EAX + -0x2c],0x0     ; 0055333d
    MOV dword ptr [EAX + -0x20],0x0     ; 00553344
    MOV dword ptr [EAX + -0x1c],0xffffffff ; 0055334b
    MOV dword ptr [EAX + -0x8],0x0      ; 00553352
    MOV dword ptr [EAX + 0x30],0x0      ; 00553359
    MOV dword ptr [EAX + -0x18],0x0     ; 00553360
    ADD ESP,0x4                         ; 00553367
    MOV dword ptr [EAX + -0x14],0x0     ; 0055336a
    SUB EAX,0x17c                       ; 00553371
    RET                                 ; 00553376

