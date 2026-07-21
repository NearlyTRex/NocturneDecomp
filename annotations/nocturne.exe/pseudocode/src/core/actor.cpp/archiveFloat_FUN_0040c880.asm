; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveFloat_FUN_0040c880(float *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[64]:
;   FUN_00412d80 at 00412d9b
;   FUN_00415160 at 0041517b
;   FUN_00419ce0 at 00419d03
;   FUN_0043c2e0 at 0043c2fa
;   FUN_00454dc0 at 00454dda
;   FUN_004630e0 at 004630fa
;   FUN_0048e830 at 0048e872
;   FUN_004948f0 at 0049491e
;   FUN_004b49a0 at 004b4a28
;   FUN_004bc9c0 at 004bc9db
;   ... and 54 more
;
; Referenced Globals:
;   undefined4 DAT_00577c79
;   undefined4 DAT_00577c7c
;   string s_Floating_point_value_005acc60
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_archiveDescription_FUN_0040c3a0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
;   crt_stdio.c_fprintf_FUN_005644f0
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c880
        ;   Label: core_actor.cpp_archiveFloat_FUN_0040c880
    PUSH EDI                            ; 0040c881
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040c882
    CMP dword ptr [0x00763e88],0x1      ; 0040c886 | DAT_00763e88
    JNZ 0x0040c8d4                      ; 0040c88d
        ;   XREF to: 0040c8d4 (CONDITIONAL_JUMP)  ; LAB_0040c8d4
    PUSH EAX                            ; 0040c88f
    PUSH 0x577c79                       ; 0040c890 | DAT_00577c79
    MOV EBX,dword ptr [0x00763e84]      ; 0040c895 | DAT_00763e84
    PUSH EBX                            ; 0040c89b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c89c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0040c8a1
    CMP EAX,0x1                         ; 0040c8a4
    JNZ 0x0040c8be                      ; 0040c8a7
        ;   XREF to: 0040c8be (CONDITIONAL_JUMP)  ; LAB_0040c8be
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040c8a9
        ;   Label: LAB_0040c8a9
    PUSH EDI                            ; 0040c8ad
    PUSH 0x5acc60                       ; 0040c8ae | = "Floating point value"
    CALL core_actor.cpp_archiveDescription_FUN_0040c3a0 ; 0040c8b3
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDescription_FUN_0040c3a0()
    ADD ESP,0x8                         ; 0040c8b8
    POP EDI                             ; 0040c8bb
    POP EBX                             ; 0040c8bc
    RET                                 ; 0040c8bd
    PUSH ESI                            ; 0040c8be
        ;   Label: LAB_0040c8be
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040c8bf
    PUSH ESI                            ; 0040c8c3
    PUSH 0x5acc60                       ; 0040c8c4 | = "Floating point value"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040c8c9
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040c8ce
    POP ESI                             ; 0040c8d1
    JMP 0x0040c8a9                      ; 0040c8d2
        ;   XREF to: 0040c8a9 (UNCONDITIONAL_JUMP)  ; LAB_0040c8a9
    SUB ESP,0x8                         ; 0040c8d4
        ;   Label: LAB_0040c8d4
    FLD float ptr [EAX]                 ; 0040c8d7
    FSTP double ptr [ESP]               ; 0040c8d9
    PUSH 0x5acc90                       ; 0040c8dc | DAT_005acc90
    PUSH 0x577c7c                       ; 0040c8e1 | DAT_00577c7c
    MOV ECX,dword ptr [0x00763e84]      ; 0040c8e6 | DAT_00763e84
    PUSH ECX                            ; 0040c8ec
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040c8ed
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x14                        ; 0040c8f2
    JMP 0x0040c8a9                      ; 0040c8f5
        ;   XREF to: 0040c8a9 (UNCONDITIONAL_JUMP)  ; LAB_0040c8a9

