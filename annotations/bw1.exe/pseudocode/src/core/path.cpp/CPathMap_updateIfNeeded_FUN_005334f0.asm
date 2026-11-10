; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_005334f0(CPathMap *this_ptr,CVector3f *source_position,int force_update)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   source_position
; int              Stack[0xc]:4   force_update
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850 at 00408898
;   core_path.cpp_getOrCreatePathMap_FUN_00535080 at 0053515d
;   core_set.cpp_CDemonSet_processActors_FUN_0054fc20 at 0054fe5c
;
; Referenced Globals:
;   undefined4 DAT_005ec9f4
;   undefined4 DAT_01c43530
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048ef40
;   core_path.cpp_CPathMap_reset_FUN_00535200
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005334f0
        ;   Label: core_path.cpp_CPathMap_updateIfNeeded_FUN_005334f0
    PUSH ESI                            ; 005334f1
    PUSH EDI                            ; 005334f2
    PUSH EBP                            ; 005334f3
    MOV EBP,ESP                         ; 005334f4
    SUB ESP,0x24                        ; 005334f6
    AND ESP,0xfffffff8                  ; 005334f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005334fc
    CMP dword ptr [EBP + 0x1c],0x0      ; 005334ff
    JNZ 0x005335e5                      ; 00533503
        ;   XREF to: 005335e5 (CONDITIONAL_JUMP)  ; LAB_005335e5
    MOV EAX,[0x01c43530]                ; 00533509 | DAT_01c43530
    MOV ECX,dword ptr [EBX + 0x138d8]   ; 0053350e
    SUB ECX,EAX                         ; 00533514
    MOV dword ptr [EBX + 0x138d8],ECX   ; 00533516
    TEST ECX,ECX                        ; 0053351c
    JL 0x005335f7                       ; 0053351e
        ;   XREF to: 005335f7 (CONDITIONAL_JUMP)  ; LAB_005335f7
    MOV ESI,dword ptr [EBP + 0x18]      ; 00533524
    LEA EDI,[ESP + 0xc]                 ; 00533527
    LEA EAX,[EBX + 0x138c0]             ; 0053352b
    FLD float ptr [ESI + 0x4]           ; 00533531
    FLD float ptr [ESI + 0x8]           ; 00533534
    FLD float ptr [ESI]                 ; 00533537
    MOV ESI,ESP                         ; 00533539
    FSUB float ptr [EAX]                ; 0053353b
    FXCH ST2                            ; 0053353d
    FSUB float ptr [EAX + 0x4]          ; 0053353f
    FXCH                                ; 00533542
    FSUB float ptr [EAX + 0x8]          ; 00533544
    FXCH ST2                            ; 00533547
    FSTP float ptr [ESP]                ; 00533549
    FSTP float ptr [ESP + 0x4]          ; 0053354c
    FSTP float ptr [ESP + 0x8]          ; 00533550
    MOVSD ES:EDI,ESI                    ; 00533554
    MOVSD ES:EDI,ESI                    ; 00533555
    MOVSD ES:EDI,ESI                    ; 00533556
    FLD float ptr [ESP + 0xc]           ; 00533557
    FABS                                ; 0053355b
    FCOMP double ptr [0x005ec9f4]       ; 0053355d | DAT_005ec9f4
    FNSTSW AX                           ; 00533563
    SAHF                                ; 00533565
    JNC 0x0053358a                      ; 00533566
        ;   XREF to: 0053358a (CONDITIONAL_JUMP)  ; LAB_0053358a
    FLD float ptr [ESP + 0x10]          ; 00533568
    FABS                                ; 0053356c
    FCOMP double ptr [0x005ec9f4]       ; 0053356e | DAT_005ec9f4
    FNSTSW AX                           ; 00533574
    SAHF                                ; 00533576
    JNC 0x0053358a                      ; 00533577
        ;   XREF to: 0053358a (CONDITIONAL_JUMP)  ; LAB_0053358a
    FLD float ptr [ESP + 0x14]          ; 00533579
    FABS                                ; 0053357d
    FCOMP double ptr [0x005ec9f4]       ; 0053357f | DAT_005ec9f4
    FNSTSW AX                           ; 00533585
    SAHF                                ; 00533587
    JC 0x005335de                       ; 00533588
        ;   XREF to: 005335de (CONDITIONAL_JUMP)  ; LAB_005335de
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053358a
        ;   Label: LAB_0053358a
    CMP EBX,EAX                         ; 0053358d
    JZ 0x005335a1                       ; 0053358f
        ;   XREF to: 005335a1 (CONDITIONAL_JUMP)  ; LAB_005335a1
    MOV EDX,dword ptr [EAX]             ; 00533591
    MOV dword ptr [EBX],EDX             ; 00533593
    MOV EDX,dword ptr [EAX + 0x4]       ; 00533595
    MOV dword ptr [EBX + 0x4],EDX       ; 00533598
    MOV EDX,dword ptr [EAX + 0x8]       ; 0053359b
    MOV dword ptr [EBX + 0x8],EDX       ; 0053359e
    PUSH EBX                            ; 005335a1
        ;   Label: LAB_005335a1
    PUSH 0x1fe5c1c                      ; 005335a2 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x20]                ; 005335a7
    CALL core_dtrace.cpp_FUN_0048ef40   ; 005335ab
        ;   XREF to: 0048ef40 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ef40()
    LEA ESI,[ESP + 0x20]                ; 005335b0
    LEA EDI,[EBX + 0xc]                 ; 005335b4
    ADD ESP,0x8                         ; 005335b7
    MOVSD ES:EDI,ESI                    ; 005335ba
    MOVSD ES:EDI,ESI                    ; 005335bb
    MOVSD ES:EDI,ESI                    ; 005335bc
    MOV EAX,dword ptr [EBX + 0xc]       ; 005335bd
    CMP EAX,dword ptr [EBX + 0x138b0]   ; 005335c0
    JNZ 0x00533605                      ; 005335c6
        ;   XREF to: 00533605 (CONDITIONAL_JUMP)  ; LAB_00533605
    MOV ECX,dword ptr [EBX + 0x138b4]   ; 005335c8
    CMP ECX,dword ptr [EBX + 0x10]      ; 005335ce
    JNZ 0x00533605                      ; 005335d1
        ;   XREF to: 00533605 (CONDITIONAL_JUMP)  ; LAB_00533605
    MOV ESI,dword ptr [EBX + 0x138b8]   ; 005335d3
    CMP ESI,dword ptr [EBX + 0x14]      ; 005335d9
    JNZ 0x00533605                      ; 005335dc
        ;   XREF to: 00533605 (CONDITIONAL_JUMP)  ; LAB_00533605
    MOV ESP,EBP                         ; 005335de
        ;   Label: LAB_005335de
    POP EBP                             ; 005335e0
    POP EDI                             ; 005335e1
    POP ESI                             ; 005335e2
    POP EBX                             ; 005335e3
    RET                                 ; 005335e4
    CALL crt_stdlib.c_rand_FUN_005c084c ; 005335e5
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
        ;   Label: LAB_005335e5
    AND EAX,0x3fff                      ; 005335ea
    MOV dword ptr [EBX + 0x138d8],EAX   ; 005335ef
    JMP 0x0053358a                      ; 005335f5
        ;   XREF to: 0053358a (UNCONDITIONAL_JUMP)  ; LAB_0053358a
    LEA EDI,[ECX + 0x4000]              ; 005335f7
        ;   Label: LAB_005335f7
    MOV dword ptr [EBX + 0x138d8],EDI   ; 005335fd
    JMP 0x0053358a                      ; 00533603
        ;   XREF to: 0053358a (UNCONDITIONAL_JUMP)  ; LAB_0053358a
    LEA EDI,[EBX + 0x138b0]             ; 00533605
        ;   Label: LAB_00533605
    LEA ESI,[EBX + 0xc]                 ; 0053360b
    MOVSD ES:EDI,ESI                    ; 0053360e
    MOVSD ES:EDI,ESI                    ; 0053360f
    MOVSD ES:EDI,ESI                    ; 00533610
    MOV EAX,dword ptr [EBX + 0xc]       ; 00533611
    SUB EAX,0x32                        ; 00533614
    MOV dword ptr [EBX + 0x24],EAX      ; 00533617
    MOV EAX,dword ptr [EBX + 0x10]      ; 0053361a
    MOV dword ptr [EBX + 0x28],EAX      ; 0053361d
    MOV EAX,dword ptr [EBX + 0x14]      ; 00533620
    SUB EAX,0x32                        ; 00533623
    PUSH EBX                            ; 00533626
    MOV dword ptr [EBX + 0x2c],EAX      ; 00533627
    CALL core_path.cpp_CPathMap_reset_FUN_00535200 ; 0053362a
        ;   XREF to: 00535200 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_00535200(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 0053362f
    MOV ESP,EBP                         ; 00533632
    POP EBP                             ; 00533634
    POP EDI                             ; 00533635
    POP ESI                             ; 00533636
    POP EBX                             ; 00533637
    RET                                 ; 00533638

