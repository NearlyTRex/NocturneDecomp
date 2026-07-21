; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_process_FUN_00554030(int param_1,float param_2)
;
;
; XREF[9]:
;   FUN_004777a0 at 004777c1
;   FUN_0048eb30 at 0048eb43
;   FUN_004c79a0 at 004c79af
;   FUN_00515db0 at 00515dd1
;   FUN_005464a0 at 005464b6
;   core_baron.cpp_CBaronWeapon_process_FUN_004113d0 at 004113e6
;   core_crossbow.cpp_CCrossbow_process_FUN_0043cfd0 at 0043cfdd
;   core_dynamite.cpp_CDynamite_process_FUN_0046edc0 at 0046edd2
;   core_melee.cpp_CMelee_process_FUN_004cf0c0 at 004cf0cd
;
; Referenced Globals:
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_01c74640
;   undefined4 DAT_01c775e8
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c77830
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_box.cpp_CBox_process_FUN_0041acb0
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554030
        ;   Label: core_weapon.cpp_CWeapon_process_FUN_00554030
    PUSH ESI                            ; 00554031
    MOV EBX,dword ptr [ESP + 0xc]       ; 00554032
    FLD float ptr [EBX + 0x2f8]         ; 00554036
    FLDZ                                ; 0055403c
    FCOMPP                              ; 0055403e
    FNSTSW AX                           ; 00554040
    SAHF                                ; 00554042
    JC 0x0055410a                       ; 00554043
        ;   XREF to: 0055410a (CONDITIONAL_JUMP)  ; LAB_0055410a
    MOV EDX,dword ptr [EBX + 0x2fc]     ; 00554049
        ;   Label: LAB_00554049
    TEST EDX,EDX                        ; 0055404f
    JNZ 0x005540d1                      ; 00554051
        ;   XREF to: 005540d1 (CONDITIONAL_JUMP)  ; LAB_005540d1
    CMP dword ptr [EBX + 0x2cc],0x0     ; 00554057
    JNZ 0x005540d1                      ; 0055405e
        ;   XREF to: 005540d1 (CONDITIONAL_JUMP)  ; LAB_005540d1
    FLD float ptr [EBX + 0x568]         ; 00554060
    FLDZ                                ; 00554066
    FCOMPP                              ; 00554068
    FNSTSW AX                           ; 0055406a
    SAHF                                ; 0055406c
    JNC 0x005540d1                      ; 0055406d
        ;   XREF to: 005540d1 (CONDITIONAL_JUMP)  ; LAB_005540d1
    FLD float ptr [EBX + 0x568]         ; 0055406f
    FSUB float ptr [ESP + 0x10]         ; 00554075
    FST float ptr [EBX + 0x568]         ; 00554079
    FLDZ                                ; 0055407f
    FCOMPP                              ; 00554081
    FNSTSW AX                           ; 00554083
    SAHF                                ; 00554085
    JBE 0x0055408e                      ; 00554086
        ;   XREF to: 0055408e (CONDITIONAL_JUMP)  ; LAB_0055408e
    MOV dword ptr [EBX + 0x568],EDX     ; 00554088
    LEA ESI,[EBX + 0x300]               ; 0055408e
        ;   Label: LAB_0055408e
    PUSH dword ptr [ESP + 0x10]         ; 00554094
    PUSH ESI                            ; 00554098
    CALL core_box.cpp_CBox_process_FUN_0041acb0 ; 00554099
        ;   XREF to: 0041acb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_process_FUN_0041acb0()
    LEA EAX,[EBX + 0x20]                ; 0055409e
    MOV EDX,dword ptr [ESI]             ; 005540a1
    MOV dword ptr [EAX],EDX             ; 005540a3
    MOV EDX,dword ptr [ESI + 0x4]       ; 005540a5
    MOV dword ptr [EAX + 0x4],EDX       ; 005540a8
    MOV EDX,dword ptr [ESI + 0x8]       ; 005540ab
    MOV dword ptr [EAX + 0x8],EDX       ; 005540ae
    LEA EAX,[EBX + 0x30]                ; 005540b1
    LEA EDX,[EBX + 0x30c]               ; 005540b4
    ADD ESP,0x8                         ; 005540ba
    CMP EAX,EDX                         ; 005540bd
    JZ 0x005540d1                       ; 005540bf
        ;   XREF to: 005540d1 (CONDITIONAL_JUMP)  ; LAB_005540d1
    MOV ECX,dword ptr [EDX]             ; 005540c1
    MOV dword ptr [EAX],ECX             ; 005540c3
    MOV ECX,dword ptr [EDX + 0x4]       ; 005540c5
    MOV dword ptr [EAX + 0x4],ECX       ; 005540c8
    MOV ECX,dword ptr [EDX + 0x8]       ; 005540cb
    MOV dword ptr [EAX + 0x8],ECX       ; 005540ce
    PUSH EBX                            ; 005540d1
        ;   Label: LAB_005540d1
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 005540d2
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    MOV EAX,[0x01cae0e8]                ; 005540d7 | DAT_01cae0e8
    MOV EDX,dword ptr [EBX + 0x2fc]     ; 005540dc
    MOV ESI,dword ptr [EAX*0x4 + 0x1cae0d8] ; 005540e2
    ADD ESP,0x4                         ; 005540e9
    CMP EDX,ESI                         ; 005540ec
    JNZ 0x00554107                      ; 005540ee
        ;   XREF to: 00554107 (CONDITIONAL_JUMP)  ; LAB_00554107
    MOV EAX,[0x005b9354]                ; 005540f0 | DAT_005b9354 | DAT_01c775ec
    CMP dword ptr [EAX + 0x244],0x0     ; 005540f5 | DAT_01c77830
    JZ 0x00554107                       ; 005540fc
        ;   XREF to: 00554107 (CONDITIONAL_JUMP)  ; LAB_00554107
    CMP dword ptr [EBX + 0x2e8],0x0     ; 005540fe
    JNZ 0x00554136                      ; 00554105
        ;   XREF to: 00554136 (CONDITIONAL_JUMP)  ; LAB_00554136
    POP ESI                             ; 00554107
        ;   Label: LAB_00554107
    POP EBX                             ; 00554108
    RET                                 ; 00554109
    FLD float ptr [EBX + 0x2f8]         ; 0055410a
        ;   Label: LAB_0055410a
    FSUB float ptr [ESP + 0x10]         ; 00554110
    FST float ptr [EBX + 0x2f8]         ; 00554114
    FLDZ                                ; 0055411a
    FCOMPP                              ; 0055411c
    FNSTSW AX                           ; 0055411e
    SAHF                                ; 00554120
    JBE 0x00554049                      ; 00554121
        ;   XREF to: 00554049 (CONDITIONAL_JUMP)  ; LAB_00554049
    MOV dword ptr [EBX + 0x2f8],0x0     ; 00554127
    JMP 0x00554049                      ; 00554131
        ;   XREF to: 00554049 (UNCONDITIONAL_JUMP)  ; LAB_00554049
    PUSH EBX                            ; 00554136
        ;   Label: LAB_00554136
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00554137
    CALL dword ptr [EAX + 0xec]         ; 0055413d
    FLD float ptr [0x01c775e8]          ; 00554143 | DAT_01c775e8
    FLDZ                                ; 00554149
    ADD ESP,0x4                         ; 0055414b
    FCOMPP                              ; 0055414e
    FNSTSW AX                           ; 00554150
    SAHF                                ; 00554152
    JNC 0x00554107                      ; 00554153
        ;   XREF to: 00554107 (CONDITIONAL_JUMP)  ; LAB_00554107
    PUSH 0x1c74640                      ; 00554155 | DAT_01c74640
    MOV EAX,[0x005be368]                ; 0055415a | DAT_005be368
    PUSH EAX                            ; 0055415f | DAT_01e57284
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970 ; 00554160
        ;   XREF to: 0050a970 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970()
    ADD ESP,0x8                         ; 00554165
    POP ESI                             ; 00554168
    POP EBX                             ; 00554169
    RET                                 ; 0055416a

