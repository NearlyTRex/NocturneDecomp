; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00541370(CDeformableModel *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00542850 at 005429c7
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e6cf5
;   TerminatedCString s_CDeformableModel_allocLO_005e6d0a
;   TerminatedCString s_core_skeleton_cpp_005e6d3d
;   TerminatedCString s_Out_of_hunk_in_CDeformab_005e6d52
;   WatcomTypeInfo g_SVertTypeInfo
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModel_free_FUN_00541160
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b8df8
;   crt_unknown.c_FUN_005ba29a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541370
        ;   Label: core_skeleton.cpp_FUN_00541370
    PUSH ESI                            ; 00541371
    PUSH EDI                            ; 00541372
    PUSH EBP                            ; 00541373
    MOV ESI,dword ptr [ESP + 0x14]      ; 00541374
    MOV EDI,dword ptr [ESP + 0x18]      ; 00541378
    TEST EDI,EDI                        ; 0054137c
    JL 0x00541384                       ; 0054137e
        ;   XREF to: 00541384 (CONDITIONAL_JUMP)  ; LAB_00541384
    CMP EDI,dword ptr [ESI]             ; 00541380
    JL 0x005413a8                       ; 00541382
        ;   XREF to: 005413a8 (CONDITIONAL_JUMP)  ; LAB_005413a8
    PUSH EDI                            ; 00541384
        ;   Label: LAB_00541384
    MOV ECX,0x5e6cf5                    ; 00541385 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x299                       ; 0054138a
    PUSH 0x5e6d0a                       ; 0054138f | = "CDeformableModel::allocLOD - invalid ..."
    MOV dword ptr [0x01d046a0],ECX      ; 00541394 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0054139a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005413a0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005413a5
    LEA EBX,[EDI*0x4 + 0x0]             ; 005413a8
        ;   Label: LAB_005413a8
    ADD EBX,ESI                         ; 005413af
    MOV EBP,dword ptr [EBX + 0x40]      ; 005413b1
    PUSH EBP                            ; 005413b4
    CALL crt_unknown.c_FUN_005b7fce     ; 005413b5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005413ba
    MOV EAX,dword ptr [EBX + 0x7c]      ; 005413bd
    PUSH EAX                            ; 005413c0
    CALL crt_unknown.c_FUN_005b7fce     ; 005413c1
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005413c6
    MOV EDX,dword ptr [EBX + 0x90]      ; 005413c9
    PUSH EDX                            ; 005413cf
    CALL crt_unknown.c_FUN_005b7fce     ; 005413d0
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005413d5
    MOV ECX,dword ptr [EBX + 0xa4]      ; 005413d8
    PUSH ECX                            ; 005413de
    CALL crt_unknown.c_FUN_005b7fce     ; 005413df
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005413e4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005413e7
    PUSH 0x5fb9d0                       ; 005413eb | g_SVertTypeInfo
    MOV dword ptr [EBX + 0x2c],EAX      ; 005413f0
    MOV EAX,dword ptr [ESP + 0x24]      ; 005413f3
    MOV EDX,dword ptr [EBX + 0x2c]      ; 005413f7
    MOV dword ptr [EBX + 0x54],EAX      ; 005413fa
    MOV EAX,dword ptr [ESP + 0x28]      ; 005413fd
    PUSH EDX                            ; 00541401
    MOV dword ptr [EBX + 0x68],EAX      ; 00541402
    LEA EAX,[EDX*0x4 + 0x0]             ; 00541405
    SUB EAX,EDX                         ; 0054140c
    SHL EAX,0x2                         ; 0054140e
    ADD EAX,EDX                         ; 00541411
    SHL EAX,0x2                         ; 00541413
    PUSH EAX                            ; 00541416
    CALL crt_unknown.c_FUN_005b8df8     ; 00541417
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    ADD ESP,0x4                         ; 0054141c
    PUSH EAX                            ; 0054141f
    CALL crt_unknown.c_FUN_005ba29a     ; 00541420
        ;   XREF to: 005ba29a (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba29a()
    MOV EDX,dword ptr [EBX + 0x54]      ; 00541425
    ADD EDX,dword ptr [EBX + 0x68]      ; 00541428
    MOV dword ptr [EBX + 0x40],EAX      ; 0054142b
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054142e
    ADD EAX,EDX                         ; 00541435
    ADD ESP,0xc                         ; 00541437
    ADD EAX,EAX                         ; 0054143a
    PUSH EAX                            ; 0054143c
    CALL crt_unknown.c_FUN_005b8df8     ; 0054143d
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    MOV dword ptr [EBX + 0x7c],EAX      ; 00541442
    MOV EDX,dword ptr [EBX + 0x68]      ; 00541445
    MOV EAX,dword ptr [EBX + 0x54]      ; 00541448
    ADD EAX,EDX                         ; 0054144b
    ADD ESP,0x4                         ; 0054144d
    SHL EAX,0x2                         ; 00541450
    PUSH EAX                            ; 00541453
    CALL crt_unknown.c_FUN_005b8df8     ; 00541454
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    ADD ESP,0x4                         ; 00541459
    MOV ECX,dword ptr [EBX + 0x68]      ; 0054145c
    MOV dword ptr [EBX + 0x90],EAX      ; 0054145f
    TEST ECX,ECX                        ; 00541465
    JLE 0x005414b1                      ; 00541467
        ;   XREF to: 005414b1 (CONDITIONAL_JUMP)  ; LAB_005414b1
    LEA EAX,[ECX*0x4 + 0x0]             ; 00541469
    PUSH EAX                            ; 00541470
    CALL crt_unknown.c_FUN_005b8df8     ; 00541471
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    ADD ESP,0x4                         ; 00541476
    MOV dword ptr [EBX + 0xa4],EAX      ; 00541479
    LEA EAX,[EDI*0x4 + 0x0]             ; 0054147f
        ;   Label: LAB_0054147f
    ADD EAX,ESI                         ; 00541486
    CMP dword ptr [EAX + 0x40],0x0      ; 00541488
    JZ 0x005414bd                       ; 0054148c
        ;   XREF to: 005414bd (CONDITIONAL_JUMP)  ; LAB_005414bd
    CMP dword ptr [EAX + 0x7c],0x0      ; 0054148e
    JZ 0x005414bd                       ; 00541492
        ;   XREF to: 005414bd (CONDITIONAL_JUMP)  ; LAB_005414bd
    CMP dword ptr [EAX + 0x90],0x0      ; 00541494
    JZ 0x005414bd                       ; 0054149b
        ;   XREF to: 005414bd (CONDITIONAL_JUMP)  ; LAB_005414bd
    CMP dword ptr [EAX + 0x68],0x0      ; 0054149d
    JLE 0x005414ac                      ; 005414a1
        ;   XREF to: 005414ac (CONDITIONAL_JUMP)  ; LAB_005414ac
    CMP dword ptr [EAX + 0xa4],0x0      ; 005414a3
    JZ 0x005414bd                       ; 005414aa
        ;   XREF to: 005414bd (CONDITIONAL_JUMP)  ; LAB_005414bd
    POP EBP                             ; 005414ac
        ;   Label: LAB_005414ac
    POP EDI                             ; 005414ad
    POP ESI                             ; 005414ae
    POP EBX                             ; 005414af
    RET                                 ; 005414b0
    MOV dword ptr [EBX + 0xa4],0x0      ; 005414b1
        ;   Label: LAB_005414b1
    JMP 0x0054147f                      ; 005414bb
        ;   XREF to: 0054147f (UNCONDITIONAL_JUMP)  ; LAB_0054147f
    PUSH ESI                            ; 005414bd
        ;   Label: LAB_005414bd
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00541160 ; 005414be
        ;   XREF to: 00541160 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00541160(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005414c3
    LEA EAX,[ESI + 0x68]                ; 005414c6
    PUSH EAX                            ; 005414c9
    LEA EAX,[ESI + 0x54]                ; 005414ca
    PUSH EAX                            ; 005414cd
    ADD ESI,0x2c                        ; 005414ce
    PUSH ESI                            ; 005414d1
    MOV EBX,0x5e6d3d                    ; 005414d2 | = "..\\core\\skeleton.cpp"
    MOV EDI,0x2bd                       ; 005414d7
    PUSH 0x5e6d52                       ; 005414dc | = "Out of hunk in CDeformableModel::allo..."
    MOV dword ptr [0x01d046a0],EBX      ; 005414e1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005414e7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005414ed
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 005414f2
    POP EBP                             ; 005414f5
    POP EDI                             ; 005414f6
    POP ESI                             ; 005414f7
    POP EBX                             ; 005414f8
    RET                                 ; 005414f9

