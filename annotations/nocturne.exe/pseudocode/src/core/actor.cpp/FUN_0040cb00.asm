; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040cb00(undefined4 param_1,undefined4 param_2)
;
;
; XREF[29]:
;   FUN_0040fb60 at 0040fb9d
;   FUN_00415160 at 0041519d
;   FUN_00419ce0 at 00419d41
;   FUN_0043c2e0 at 0043c32d
;   FUN_00454dc0 at 00454e0d
;   FUN_004630e0 at 0046312d
;   FUN_004b49a0 at 004b49da
;   FUN_004bc9c0 at 004bc9fd
;   FUN_004c5250 at 004c529d
;   FUN_004eed10 at 004eed4d
;   ... and 19 more
;
; Referenced Globals:
;   TerminatedCString s_motion_state_info_openin_00577c8c
;   TerminatedCString s_motion_state_info_closin_00577cac
;   TerminatedCString s_s_s_00577ccc
;   TerminatedCString s_s_00577cd7
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040bff0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
;   core_motion.cpp_CMotionController_load_FUN_004e2180
;   core_motion.cpp_CMotionController_save_FUN_004e2220
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cb00
        ;   Label: core_actor.cpp_FUN_0040cb00
    PUSH ESI                            ; 0040cb01
    PUSH EBP                            ; 0040cb02
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040cb03
    CMP dword ptr [0x00763e88],0x1      ; 0040cb07 | DAT_00763e88
    JNZ 0x0040cb86                      ; 0040cb0e
        ;   XREF to: 0040cb86 (CONDITIONAL_JUMP)  ; LAB_0040cb86
    MOV EBP,dword ptr [0x00763e84]      ; 0040cb14 | DAT_00763e84
        ;   Label: LAB_0040cb14
    PUSH EBP                            ; 0040cb1a
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040cb1b
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0040cb20
    MOV ESI,EAX                         ; 0040cb23
    TEST EAX,EAX                        ; 0040cb25
    JL 0x0040cb5f                       ; 0040cb27
        ;   XREF to: 0040cb5f (CONDITIONAL_JUMP)  ; LAB_0040cb5f
    CMP ESI,0xa                         ; 0040cb29
        ;   Label: LAB_0040cb29
    JNZ 0x0040cb14                      ; 0040cb2c
        ;   XREF to: 0040cb14 (CONDITIONAL_JUMP)  ; LAB_0040cb14
    MOV EAX,[0x00763e84]                ; 0040cb2e | DAT_00763e84
    PUSH EAX                            ; 0040cb33
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040cb34
    PUSH EDX                            ; 0040cb38
    CALL core_motion.cpp_CMotionController_load_FUN_004e2180 ; 0040cb39
        ;   XREF to: 004e2180 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_load_FUN_004e2180()
    ADD ESP,0x8                         ; 0040cb3e
    MOV ECX,dword ptr [0x00763e84]      ; 0040cb41 | DAT_00763e84
        ;   Label: LAB_0040cb41
    PUSH ECX                            ; 0040cb47
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040cb48
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0040cb4d
    MOV ESI,EAX                         ; 0040cb50
    TEST EAX,EAX                        ; 0040cb52
    JL 0x0040cb6f                       ; 0040cb54
        ;   XREF to: 0040cb6f (CONDITIONAL_JUMP)  ; LAB_0040cb6f
    CMP ESI,0xa                         ; 0040cb56
    JNZ 0x0040cb41                      ; 0040cb59
        ;   XREF to: 0040cb41 (CONDITIONAL_JUMP)  ; LAB_0040cb41
    POP EBP                             ; 0040cb5b
    POP ESI                             ; 0040cb5c
    POP EBX                             ; 0040cb5d
    RET                                 ; 0040cb5e
    PUSH EBX                            ; 0040cb5f
        ;   Label: LAB_0040cb5f
    PUSH 0x577c8c                       ; 0040cb60 | = "motion state info opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040cb65
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040cb6a
    JMP 0x0040cb29                      ; 0040cb6d
        ;   XREF to: 0040cb29 (UNCONDITIONAL_JUMP)  ; LAB_0040cb29
    PUSH EBX                            ; 0040cb6f
        ;   Label: LAB_0040cb6f
    PUSH 0x577cac                       ; 0040cb70 | = "motion state info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040cb75
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_handleActorPropertyParseError_FUN_0040c320()
    ADD ESP,0x8                         ; 0040cb7a
    CMP ESI,0xa                         ; 0040cb7d
    JNZ 0x0040cb41                      ; 0040cb80
        ;   XREF to: 0040cb41 (CONDITIONAL_JUMP)  ; LAB_0040cb41
    POP EBP                             ; 0040cb82
    POP ESI                             ; 0040cb83
    POP EBX                             ; 0040cb84
    RET                                 ; 0040cb85
    PUSH EDI                            ; 0040cb86
        ;   Label: LAB_0040cb86
    PUSH EBX                            ; 0040cb87
    PUSH 0x5acc90                       ; 0040cb88 | DAT_005acc90
    PUSH 0x577ccc                       ; 0040cb8d | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00763e84]      ; 0040cb92 | DAT_00763e84
    PUSH ECX                            ; 0040cb98
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040cb99
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0040cb9e
    PUSH 0x1                            ; 0040cba1
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 0040cba3
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_adjustIndentationLevel_FUN_0040bff0()
    ADD ESP,0x4                         ; 0040cba8
    PUSH 0x5acc90                       ; 0040cbab | DAT_005acc90
    MOV EBX,dword ptr [0x00763e84]      ; 0040cbb0 | DAT_00763e84
    PUSH EBX                            ; 0040cbb6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040cbb7
    PUSH ESI                            ; 0040cbbb
    CALL core_motion.cpp_CMotionController_save_FUN_004e2220 ; 0040cbbc
        ;   XREF to: 004e2220 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_save_FUN_004e2220()
    ADD ESP,0xc                         ; 0040cbc1
    PUSH -0x1                           ; 0040cbc4
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 0040cbc6
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_adjustIndentationLevel_FUN_0040bff0()
    ADD ESP,0x4                         ; 0040cbcb
    PUSH 0x5acc90                       ; 0040cbce | DAT_005acc90
    PUSH 0x577cd7                       ; 0040cbd3 | = "%s}\n"
    MOV EDI,dword ptr [0x00763e84]      ; 0040cbd8 | DAT_00763e84
    PUSH EDI                            ; 0040cbde
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040cbdf
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0040cbe4
    POP EDI                             ; 0040cbe7
    POP EBP                             ; 0040cbe8
    POP ESI                             ; 0040cbe9
    POP EBX                             ; 0040cbea
    RET                                 ; 0040cbeb

