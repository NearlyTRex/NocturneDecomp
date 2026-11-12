; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_00534360(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 at 0052d1ac
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005e5b8a
;   TerminatedCString s_CDemonSet_buildMirrorLis_005e5b9a
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 g_CGlassClassInfo.name_hash
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_main.c_FUN_004e4500
;   engine_drender.cpp_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534360
        ;   Label: core_set.cpp_CDemonSet_buildMirrorList_FUN_00534360
    PUSH ESI                            ; 00534361
    PUSH EDI                            ; 00534362
    PUSH EBP                            ; 00534363
    SUB ESP,0x38                        ; 00534364
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00534367
    MOV ECX,dword ptr [EBP + 0x14d164]  ; 0053436b
    XOR EDX,EDX                         ; 00534371
    MOV dword ptr [EBP + 0x15acc8],0x0  ; 00534373
    MOV dword ptr [ESP + 0x34],EDX      ; 0053437d
    TEST ECX,ECX                        ; 00534381
    JLE 0x0053446c                      ; 00534383
        ;   XREF to: 0053446c (CONDITIONAL_JUMP)  ; LAB_0053446c
    MOV dword ptr [ESP + 0x30],EBP      ; 00534389
    MOV EDX,dword ptr [0x01cb8280]      ; 0053438d | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0053438d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00534393
    PUSH EDX                            ; 00534397
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 00534398
    PUSH EAX                            ; 0053439e
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0053439f
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 005343a4
    ADD ESP,0x8                         ; 005343a6
    TEST EAX,EAX                        ; 005343a9
    JZ 0x0053444a                       ; 005343ab
        ;   XREF to: 0053444a (CONDITIONAL_JUMP)  ; LAB_0053444a
    CMP dword ptr [EAX + 0x344],0x0     ; 005343b1
    JZ 0x0053444a                       ; 005343b8
        ;   XREF to: 0053444a (CONDITIONAL_JUMP)  ; LAB_0053444a
    PUSH EAX                            ; 005343be
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 005343bf
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005343c4
    PUSH 0x0                            ; 005343c7
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005343c9
    PUSH EBX                            ; 005343cf
    LEA ESI,[ESP + 0x20]                ; 005343d0
    LEA EDI,[ESP + 0x8]                 ; 005343d4
    CALL dword ptr [EAX + 0x24]         ; 005343d8
    MOV ECX,0x6                         ; 005343db
    ADD ESP,0x4                         ; 005343e0
    LEA EAX,[ESP + 0x4]                 ; 005343e3
    LEA ESI,[ESP + 0x1c]                ; 005343e7
    PUSH EAX                            ; 005343eb
    MOVSD.REP ES:EDI,ESI                ; 005343ec
    CALL core_box.cpp_FUN_0041a840      ; 005343ee
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 005343f3
    TEST EAX,EAX                        ; 005343f6
    JZ 0x0053443b                       ; 005343f8
        ;   XREF to: 0053443b (CONDITIONAL_JUMP)  ; LAB_0053443b
    MOV EAX,dword ptr [EBP + 0x15acc8]  ; 005343fa
    MOV dword ptr [EBP + EAX*0x4 + 0x15accc],EBX ; 00534400
    MOV EBX,dword ptr [EBP + 0x15acc8]  ; 00534407
    INC EBX                             ; 0053440d
    MOV dword ptr [EBP + 0x15acc8],EBX  ; 0053440e
    CMP EBX,0x64                        ; 00534414
    JL 0x0053443b                       ; 00534417
        ;   XREF to: 0053443b (CONDITIONAL_JUMP)  ; LAB_0053443b
    MOV EDI,0x5e5b8a                    ; 00534419 | = "..\\core\\set.cpp"
    MOV EAX,0x12d6                      ; 0053441e
    PUSH 0x5e5b9a                       ; 00534423 | = "CDemonSet::buildMirrorList - Too many..."
    MOV dword ptr [0x01d046a0],EDI      ; 00534428 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0053442e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00534433
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00534438
    MOV EDX,dword ptr [0x0060b280]      ; 0053443b | DAT_0060b280
        ;   Label: LAB_0053443b
    PUSH EDX                            ; 00534441 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00534442
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00534447
    MOV EBX,dword ptr [ESP + 0x30]      ; 0053444a
        ;   Label: LAB_0053444a
    MOV ESI,dword ptr [ESP + 0x34]      ; 0053444e
    MOV EDI,dword ptr [EBP + 0x14d164]  ; 00534452
    ADD EBX,0x4                         ; 00534458
    INC ESI                             ; 0053445b
    MOV dword ptr [ESP + 0x30],EBX      ; 0053445c
    MOV dword ptr [ESP + 0x34],ESI      ; 00534460
    CMP ESI,EDI                         ; 00534464
    JL 0x0053438d                       ; 00534466
        ;   XREF to: 0053438d (CONDITIONAL_JUMP)  ; LAB_0053438d
    ADD ESP,0x38                        ; 0053446c
        ;   Label: LAB_0053446c
    POP EBP                             ; 0053446f
    POP EDI                             ; 00534470
    POP ESI                             ; 00534471
    POP EBX                             ; 00534472
    RET                                 ; 00534473

