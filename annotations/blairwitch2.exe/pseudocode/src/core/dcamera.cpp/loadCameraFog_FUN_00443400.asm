; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_loadCameraFog_FUN_00443400(int param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
;
; XREF[2]:
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052cd80
;   core_setutil.cpp_C3DSCamera_load_FUN_0053a8e0 at 0053aac2
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_005ce75e
;   TerminatedCString s_f_f_f_005ce768
;   TerminatedCString s_f_f_005ce772
;   undefined4 DAT_005ce779
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443400
        ;   Label: core_dcamera.cpp_loadCameraFog_FUN_00443400
    PUSH ESI                            ; 00443401
    SUB ESP,0x100                       ; 00443402
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00443408
    MOV ESI,dword ptr [ESP + 0x110]     ; 0044340f
    PUSH ESI                            ; 00443416
    PUSH 0xff                           ; 00443417
    LEA EAX,[ESP + 0x8]                 ; 0044341c
    PUSH EAX                            ; 00443420
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 00443421
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 00443426
    LEA EAX,[EBX + 0x8]                 ; 00443429
    PUSH EAX                            ; 0044342c
    LEA EAX,[EBX + 0x4]                 ; 0044342d
    PUSH EAX                            ; 00443430
    PUSH EBX                            ; 00443431
    PUSH 0x5ce75e                       ; 00443432 | = "%d,%d,%d\n"
    PUSH ESI                            ; 00443437
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00443438
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x14                        ; 0044343d
    PUSH ESI                            ; 00443440
    PUSH 0xff                           ; 00443441
    LEA EAX,[ESP + 0x8]                 ; 00443446
    PUSH EAX                            ; 0044344a
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0044344b
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 00443450
    LEA EAX,[EBX + 0x14]                ; 00443453
    PUSH EAX                            ; 00443456
    LEA EAX,[EBX + 0x10]                ; 00443457
    PUSH EAX                            ; 0044345a
    LEA EAX,[EBX + 0xc]                 ; 0044345b
    PUSH EAX                            ; 0044345e
    PUSH 0x5ce768                       ; 0044345f | = "%f,%f,%f\n"
    PUSH ESI                            ; 00443464
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00443465
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x14                        ; 0044346a
    LEA EAX,[EBX + 0x1c]                ; 0044346d
    PUSH EAX                            ; 00443470
    LEA EAX,[EBX + 0x18]                ; 00443471
    PUSH EAX                            ; 00443474
    PUSH 0x5ce772                       ; 00443475 | = "%f,%f\n"
    PUSH ESI                            ; 0044347a
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0044347b
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0x10                        ; 00443480
    CMP dword ptr [ESP + 0x114],0x1a    ; 00443483
    JGE 0x0044349d                      ; 0044348b
        ;   XREF to: 0044349d (CONDITIONAL_JUMP)  ; LAB_0044349d
    MOV dword ptr [EBX + 0x20],0x42480000 ; 0044348d
    ADD ESP,0x100                       ; 00443494
    POP ESI                             ; 0044349a
    POP EBX                             ; 0044349b
    RET                                 ; 0044349c
    ADD EBX,0x20                        ; 0044349d
        ;   Label: LAB_0044349d
    PUSH EBX                            ; 004434a0
    PUSH 0x5ce779                       ; 004434a1 | DAT_005ce779
    PUSH ESI                            ; 004434a6
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004434a7
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    ADD ESP,0xc                         ; 004434ac
    ADD ESP,0x100                       ; 004434af
    POP ESI                             ; 004434b5
    POP EBX                             ; 004434b6
    RET                                 ; 004434b7

