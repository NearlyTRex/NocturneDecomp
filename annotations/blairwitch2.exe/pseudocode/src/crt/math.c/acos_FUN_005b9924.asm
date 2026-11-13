; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 crt_math_c_acos_FUN_005b9924(void)
;
;
; XREF[15]:
;   core_dirmat.cpp_FUN_004496e0 at 00449a2c
;   core_dirmat.cpp_angleFromSinCos_FUN_00449610 at 004496c1
;   core_doc.cpp_FUN_00453d80 at 00454368
;   core_doc.cpp_FUN_0045ab40 at 0045b06a
;   core_doc.cpp_adjustAimAngleForOffset_FUN_00459db0 at 00459dfd
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0049db20 at 0049e32a
;   core_fire.cpp_safeAcos_FUN_004933c0 at 004933ff
;   core_stranger.cpp_CStranger_aimLeftPistol_FUN_0056ca10 at 0056cf3a
;   core_stranger.cpp_FUN_00565ff0 at 005665cd
;   core_stranger.cpp_FUN_0056bcc0 at 0056bd0d
;   ... and 5 more
;
; Referenced Globals:
;   undefined4 DAT_0061eeac
;
; Called Functions:
;   crt_math.c_atan2_FUN_005b9989
;   crt_unknown.c_FUN_005bfc46
;
; *****************************************************************************

section .text

    PUSH AX                             ; 005b9924
        ;   Label: crt_math.c_acos_FUN_005b9924
    FLD ST0                             ; 005b9926
    FMUL ST0                            ; 005b9928
    FLD1                                ; 005b992a
    FSUBRP                              ; 005b992c
    FTST                                ; 005b992e
    FNSTSW AX                           ; 005b9930
    SAHF                                ; 005b9932
    JNZ 0x005b9944                      ; 005b9933
        ;   XREF to: 005b9944 (CONDITIONAL_JUMP)  ; LAB_005b9944
    FCOMPP                              ; 005b9935
    FNSTSW AX                           ; 005b9937
    SAHF                                ; 005b9939
    JA 0x005b9940                       ; 005b993a
        ;   XREF to: 005b9940 (CONDITIONAL_JUMP)  ; LAB_005b9940
    FLDZ                                ; 005b993c
    JMP 0x005b9942                      ; 005b993e
        ;   XREF to: 005b9942 (UNCONDITIONAL_JUMP)  ; LAB_005b9942
    FLDPI                               ; 005b9940
        ;   Label: LAB_005b9940
    JMP 0x005b995e                      ; 005b9942
        ;   XREF to: 005b995e (UNCONDITIONAL_JUMP)  ; LAB_005b995e
        ;   Label: LAB_005b9942
    MOV AL,0x1                          ; 005b9944
        ;   Label: LAB_005b9944
    CALL crt_unknown.c_FUN_005bfc46     ; 005b9946
        ;   XREF to: 005bfc46 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfc46()
    CMP AL,0x0                          ; 005b994b
    JNZ 0x005b995e                      ; 005b994d
        ;   XREF to: 005b995e (CONDITIONAL_JUMP)  ; LAB_005b995e
    FXCH                                ; 005b994f
    CALL crt_math.c_atan2_FUN_005b9989  ; 005b9951
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FLD extended double ptr [0x0061eeac] ; 005b9956 | DAT_0061eeac
    FSUBRP                              ; 005b995c
    POP AX                              ; 005b995e
        ;   Label: LAB_005b995e
    RET                                 ; 005b9960

