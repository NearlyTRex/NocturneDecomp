; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0(CAmmo * this_ptr, FILE * file_handle)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; Referenced Globals:
;   TerminatedCString s_gatbullet_kfm_00614afc
;   TerminatedCString s_holybullet_kfm_00614b0a
;   TerminatedCString s_woodbullet_kfm_00614b19
;   TerminatedCString s_silverbullet_kfm_00614b28
;   TerminatedCString s_goldbullet_kfm_00614b39
;   TerminatedCString s_lithiumbullet_kfm_00614b48
;   TerminatedCString s_mercurybullet_kfm_00614b5a
;   TerminatedCString s_shell_kfm_00614b6c
;   TerminatedCString s_stake_kfm_00614b76
;   TerminatedCString s_dynamitebundle_kfm_00614b80
;   TerminatedCString s_tommybullet_kfm_00614b93
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004113e0
        ;   Label: core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0
    PUSH ESI                            ; 004113e1
    PUSH EBP                            ; 004113e2
    MOV EBP,ESP                         ; 004113e3
    MOV EBX,dword ptr [EBP + 0x10]      ; 004113e5
    LEA ESI,[EBX + 0x158]               ; 004113e8
    PUSH 0x614afc                       ; 004113ee | = "gatbullet.kfm" | s_gatbullet_kfm_00614afc = gatbullet.kfm
    ADD EBX,0x1d0                       ; 004113f3
    PUSH EBX                            ; 004113f9
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004113fa | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004113ff
    TEST EAX,EAX                        ; 00411402
    JNZ 0x0041140a                      ; 00411404 | LAB_0041140a
        ;   XREF to: 0041140a (CONDITIONAL_JUMP)
    POP EBP                             ; 00411406
        ;   Label: LAB_00411406
    POP ESI                             ; 00411407
    POP EBX                             ; 00411408
    RET                                 ; 00411409
    PUSH 0x614b0a                       ; 0041140a | = "holybullet.kfm" | s_holybullet_kfm_00614b0a = holybullet.kfm
        ;   Label: LAB_0041140a
    PUSH EBX                            ; 0041140f
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00411410 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411415
    TEST EAX,EAX                        ; 00411418
    JZ 0x00411406                       ; 0041141a | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    PUSH 0x614b19                       ; 0041141c | = "woodbullet.kfm" | s_woodbullet_kfm_00614b19 = woodbullet.kfm
    PUSH EBX                            ; 00411421
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00411422 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411427
    TEST EAX,EAX                        ; 0041142a
    JZ 0x00411406                       ; 0041142c | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    PUSH 0x614b28                       ; 0041142e | = "silverbullet.kfm" | s_silverbullet_kfm_00614b28 = silverbullet.kfm
    PUSH EBX                            ; 00411433
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00411434 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411439
    TEST EAX,EAX                        ; 0041143c
    JZ 0x00411406                       ; 0041143e | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    PUSH 0x614b39                       ; 00411440 | = "goldbullet.kfm" | s_goldbullet_kfm_00614b39 = goldbullet.kfm
    PUSH EBX                            ; 00411445
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00411446 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041144b
    TEST EAX,EAX                        ; 0041144e
    JZ 0x00411406                       ; 00411450 | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    PUSH 0x614b48                       ; 00411452 | = "lithiumbullet.kfm" | s_lithiumbullet_kfm_00614b48 = lithiumbullet.kfm
    PUSH EBX                            ; 00411457
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00411458 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041145d
    TEST EAX,EAX                        ; 00411460
    JZ 0x00411406                       ; 00411462 | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    PUSH 0x614b5a                       ; 00411464 | = "mercurybullet.kfm" | s_mercurybullet_kfm_00614b5a = mercurybullet.kfm
    PUSH EBX                            ; 00411469
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0041146a | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041146f
    TEST EAX,EAX                        ; 00411472
    JZ 0x00411406                       ; 00411474 | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    PUSH 0x614b6c                       ; 00411476 | = "shell.kfm" | s_shell_kfm_00614b6c = shell.kfm
    PUSH EBX                            ; 0041147b
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0041147c | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411481
    TEST EAX,EAX                        ; 00411484
    JZ 0x00411406                       ; 00411486 | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    PUSH 0x614b76                       ; 0041148c | = "stake.kfm" | s_stake_kfm_00614b76 = stake.kfm
    PUSH EBX                            ; 00411491
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00411492 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411497
    TEST EAX,EAX                        ; 0041149a
    JZ 0x00411406                       ; 0041149c | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    PUSH 0x614b80                       ; 004114a2 | = "dynamitebundle.kfm" | s_dynamitebundle_kfm_00614b80 = dynamitebundle.kfm
    PUSH EBX                            ; 004114a7
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004114a8 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004114ad
    TEST EAX,EAX                        ; 004114b0
    JZ 0x00411406                       ; 004114b2 | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    PUSH 0x614b93                       ; 004114b8 | = "tommybullet.kfm" | s_tommybullet_kfm_00614b93 = tommybullet.kfm
    PUSH EBX                            ; 004114bd
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004114be | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004114c3
    TEST EAX,EAX                        ; 004114c6
    JZ 0x00411406                       ; 004114c8 | LAB_00411406
        ;   XREF to: 00411406 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x14]      ; 004114ce
    PUSH EDX                            ; 004114d1
    PUSH ESI                            ; 004114d2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 ; 004114d3 | void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004114d8
    POP EBP                             ; 004114db
    POP ESI                             ; 004114dc
    POP EBX                             ; 004114dd
    RET                                 ; 004114de

