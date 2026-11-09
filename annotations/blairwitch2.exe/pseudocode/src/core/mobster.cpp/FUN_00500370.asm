; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_FUN_00500370(CMobster *this_ptr,int taunt_category)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   taunt_category
; Local Variables:
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mobster.cpp_FUN_004fde80 at 004fe652
;
; Referenced Globals:
;   TerminatedCString s_mobster_cheese_c_c_d_wav_005def19
;   undefined4 DAT_005def35
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   undefined4 g_CGameInstance.field28_0x1c
;   undefined4 g_CMobsterClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.field1380332_0x150fec
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_sound.cpp_CSound_getSoundDuration_FUN_0055af90
;   crt_unknown.c_FUN_005b7790
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500370
        ;   Label: core_mobster.cpp_FUN_00500370
    PUSH ESI                            ; 00500371
    PUSH EDI                            ; 00500372
    PUSH EBP                            ; 00500373
    MOV EBP,ESP                         ; 00500374
    SUB ESP,0x70                        ; 00500376
    AND ESP,0xfffffff8                  ; 00500379
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050037c
    FLD float ptr [ESI + 0x10b10]       ; 0050037f
    FLDZ                                ; 00500385
    FCOMPP                              ; 00500387
    FNSTSW AX                           ; 00500389
    SAHF                                ; 0050038b
    JC 0x005003d8                       ; 0050038c
        ;   XREF to: 005003d8 (CONDITIONAL_JUMP)  ; LAB_005003d8
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050038e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00500391
    XOR EDI,EDI                         ; 00500394
    ADD EAX,0x60                        ; 00500396
    SHL EBX,0x2                         ; 00500399
    MOV dword ptr [ESP + 0x64],EAX      ; 0050039c
    MOV EDX,dword ptr [EBX + 0x1d1c6fc] ; 005003a0
        ;   Label: LAB_005003a0
    INC EDX                             ; 005003a6
    MOV EAX,[0x00616494]                ; 005003a7 | g_CGamePtr
    MOV dword ptr [EBX + 0x1d1c6fc],EDX ; 005003ac
    CMP dword ptr [EAX + 0x1c],0x0      ; 005003b2 | g_CGameInstance.field28_0x1c
    JNZ 0x005003df                      ; 005003b6
        ;   XREF to: 005003df (CONDITIONAL_JUMP)  ; LAB_005003df
    CMP dword ptr [EBP + 0x18],0x1      ; 005003b8
    JNZ 0x005003df                      ; 005003bc
        ;   XREF to: 005003df (CONDITIONAL_JUMP)  ; LAB_005003df
    CMP EDX,0x6                         ; 005003be
    JNZ 0x005003df                      ; 005003c1
        ;   XREF to: 005003df (CONDITIONAL_JUMP)  ; LAB_005003df
    INC EDI                             ; 005003c3
        ;   Label: LAB_005003c3
    CMP EDI,0x3                         ; 005003c4
    JL 0x005003a0                       ; 005003c7
        ;   XREF to: 005003a0 (CONDITIONAL_JUMP)  ; LAB_005003a0
    FLD float ptr [ESI + 0x10b10]       ; 005003c9
        ;   Label: LAB_005003c9
    FLDZ                                ; 005003cf
    FCOMPP                              ; 005003d1
    FNSTSW AX                           ; 005003d3
    SAHF                                ; 005003d5
    JC 0x0050043f                       ; 005003d6
        ;   XREF to: 0050043f (CONDITIONAL_JUMP)  ; LAB_0050043f
    MOV ESP,EBP                         ; 005003d8
        ;   Label: LAB_005003d8
    POP EBP                             ; 005003da
    POP EDI                             ; 005003db
    POP ESI                             ; 005003dc
    POP EBX                             ; 005003dd
    RET                                 ; 005003de
    MOV ECX,dword ptr [EBX + 0x1d1c6fc] ; 005003df
        ;   Label: LAB_005003df
    PUSH ECX                            ; 005003e5
    MOV EAX,dword ptr [ESP + 0x68]      ; 005003e6
    PUSH EAX                            ; 005003ea
    XOR EAX,EAX                         ; 005003eb
    MOV AL,byte ptr [ESI + 0x10b0c]     ; 005003ed
    PUSH EAX                            ; 005003f3
    PUSH 0x5def19                       ; 005003f4 | = "mobster-cheese-%c-%c-%d.wav"
    LEA EAX,[ESP + 0x10]                ; 005003f9
    PUSH EAX                            ; 005003fd
    CALL crt_unknown.c_FUN_005b7790     ; 005003fe
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x14                        ; 00500403
    MOV EAX,ESP                         ; 00500406
    PUSH EAX                            ; 00500408
    MOV EDX,dword ptr [0x0061c068]      ; 00500409 | DAT_0061c068
    PUSH EDX                            ; 0050040f
    CALL core_sound.cpp_CSound_getSoundDuration_FUN_0055af90 ; 00500410
        ;   XREF to: 0055af90 (UNCONDITIONAL_CALL)  ; float core_sound.cpp_CSound_getSoundDuration_FUN_0055af90(CSound * this_ptr, char * sound_name)
    MOV dword ptr [ESP + 0x74],EAX      ; 00500415
    MOV EAX,dword ptr [ESP + 0x74]      ; 00500419
    MOV dword ptr [ESI + 0x10b10],EAX   ; 0050041d
    ADD ESP,0x8                         ; 00500423
    FLD float ptr [ESI + 0x10b10]       ; 00500426
    FLDZ                                ; 0050042c
    FCOMPP                              ; 0050042e
    FNSTSW AX                           ; 00500430
    SAHF                                ; 00500432
    JC 0x005003c9                       ; 00500433
        ;   XREF to: 005003c9 (CONDITIONAL_JUMP)  ; LAB_005003c9
    XOR ECX,ECX                         ; 00500435
    MOV dword ptr [EBX + 0x1d1c6fc],ECX ; 00500437
    JMP 0x005003c3                      ; 0050043d
        ;   XREF to: 005003c3 (UNCONDITIONAL_JUMP)  ; LAB_005003c3
    FLD float ptr [ESI + 0x10b10]       ; 0050043f
        ;   Label: LAB_0050043f
    MOV EBX,dword ptr [ESI + 0x10b98]   ; 00500445
    FADD float ptr [0x005def35]         ; 0050044b | DAT_005def35
    PUSH EBX                            ; 00500451
    FSTP float ptr [ESI + 0x10b10]      ; 00500452
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00500458
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0050045d
    TEST EAX,EAX                        ; 00500460
    JNZ 0x005003d8                      ; 00500462
        ;   XREF to: 005003d8 (CONDITIONAL_JUMP)  ; LAB_005003d8
    MOV dword ptr [ESP + 0x68],EAX      ; 00500468
    XOR EDI,EDI                         ; 0050046c
    XOR EBX,EBX                         ; 0050046e
    MOV EAX,[0x0061b5a8]                ; 00500470 | g_CDemonSetPtr
        ;   Label: LAB_00500470
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 00500475 | g_CDemonSetInstance.field1380332_0x150fec
    JGE 0x005004ca                      ; 0050047b
        ;   XREF to: 005004ca (CONDITIONAL_JUMP)  ; LAB_005004ca
    MOV EDX,dword ptr [ESP + 0x68]      ; 0050047d
    MOV ECX,dword ptr [0x01d1c778]      ; 00500481 | g_CMobsterClassInfo.name_hash
    ADD EAX,EDX                         ; 00500487
    PUSH ECX                            ; 00500489
    MOV ECX,dword ptr [EAX + 0x150ff0]  ; 0050048a
    PUSH ECX                            ; 00500490
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00500491
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 00500496
    TEST EAX,EAX                        ; 00500499
    JNZ 0x005004ab                      ; 0050049b
        ;   XREF to: 005004ab (CONDITIONAL_JUMP)  ; LAB_005004ab
    MOV ECX,dword ptr [ESP + 0x68]      ; 0050049d
        ;   Label: LAB_0050049d
    ADD ECX,0x4                         ; 005004a1
    INC EDI                             ; 005004a4
    MOV dword ptr [ESP + 0x68],ECX      ; 005004a5
    JMP 0x00500470                      ; 005004a9
        ;   XREF to: 00500470 (UNCONDITIONAL_JUMP)  ; LAB_00500470
    MOV EDX,dword ptr [EAX + 0x10b90]   ; 005004ab
        ;   Label: LAB_005004ab
    PUSH EDX                            ; 005004b1
    CALL sound_sndmain.cpp_FUN_00550b70 ; 005004b2
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 005004b7
    TEST EAX,EAX                        ; 005004ba
    JZ 0x0050049d                       ; 005004bc
        ;   XREF to: 0050049d (CONDITIONAL_JUMP)  ; LAB_0050049d
    INC EBX                             ; 005004be
    CMP EBX,0x3                         ; 005004bf
    JG 0x005003d8                       ; 005004c2
        ;   XREF to: 005003d8 (CONDITIONAL_JUMP)  ; LAB_005003d8
    JMP 0x0050049d                      ; 005004c8
        ;   XREF to: 0050049d (UNCONDITIONAL_JUMP)  ; LAB_0050049d
    MOV EAX,ESP                         ; 005004ca
        ;   Label: LAB_005004ca
    PUSH EAX                            ; 005004cc
    MOV EBX,dword ptr [ESI + 0x2b0]     ; 005004cd
    PUSH ESI                            ; 005004d3
    CALL dword ptr [EBX + 0x34]         ; 005004d4
    ADD ESP,0x8                         ; 005004d7
    MOV dword ptr [ESI + 0x10b90],EAX   ; 005004da
    MOV ESP,EBP                         ; 005004e0
    POP EBP                             ; 005004e2
    POP EDI                             ; 005004e3
    POP ESI                             ; 005004e4
    POP EBX                             ; 005004e5
    RET                                 ; 005004e6

