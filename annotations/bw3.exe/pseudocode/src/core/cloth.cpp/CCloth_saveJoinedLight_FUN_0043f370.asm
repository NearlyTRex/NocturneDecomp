; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043f370(CCloth *this_ptr,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   model_ptr
;
; XREF[1]:
;   core_cloth.cpp_CClothList_render_FUN_0043fc50 at 0043fc76
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005b914c
;   TerminatedCString s_CCloth_saveJoinedLight_C_005b915e
;   TerminatedCString s_core_cloth_cpp_005b9198
;   TerminatedCString s_CCloth_saveJoinedLight_M_005b91aa
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f370
        ;   Label: core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043f370
    PUSH ESI                            ; 0043f371
    PUSH EDI                            ; 0043f372
    PUSH EBP                            ; 0043f373
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043f374
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043f378
    TEST EDI,EDI                        ; 0043f37c
    JZ 0x0043f405                       ; 0043f37e
        ;   XREF to: 0043f405 (CONDITIONAL_JUMP)  ; LAB_0043f405
    MOV EDI,dword ptr [EDI + 0x2320]    ; 0043f384
        ;   Label: LAB_0043f384
    TEST EDI,EDI                        ; 0043f38a
    JL 0x0043f42d                       ; 0043f38c
        ;   XREF to: 0043f42d (CONDITIONAL_JUMP)  ; LAB_0043f42d
    MOV EAX,dword ptr [EBP + 0x39ce8]   ; 0043f392
        ;   Label: LAB_0043f392
    XOR ESI,ESI                         ; 0043f398
    TEST EAX,EAX                        ; 0043f39a
    JLE 0x0043f400                      ; 0043f39c
        ;   XREF to: 0043f400 (CONDITIONAL_JUMP)  ; LAB_0043f400
    LEA EAX,[EDI*0x4 + 0x0]             ; 0043f39e
    SUB EAX,EDI                         ; 0043f3a5
    SHL EAX,0x3                         ; 0043f3a7
    ADD EAX,EDI                         ; 0043f3aa
    SHL EAX,0x4                         ; 0043f3ac
    LEA EBX,[EAX + EBP*0x1]             ; 0043f3af
    MOV EAX,EBP                         ; 0043f3b2
    MOV ECX,dword ptr [EBX + 0x39e7c]   ; 0043f3b4
        ;   Label: LAB_0043f3b4
    IMUL ECX,ECX,0x30                   ; 0043f3ba
    MOV EDX,dword ptr [0x005f2afc]      ; 0043f3bd | DAT_005f2afc
    MOV EDI,dword ptr [EDX]             ; 0043f3c3 | DAT_01bdd7e4
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x20] ; 0043f3c5
    MOV dword ptr [EAX + 0x3a64c],EDI   ; 0043f3c9
    MOV EDI,dword ptr [EDX]             ; 0043f3cf | DAT_01bdd7e4
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x24] ; 0043f3d1
    MOV dword ptr [EAX + 0x3a7dc],EDI   ; 0043f3d5
    MOV EDX,dword ptr [EDX]             ; 0043f3db | DAT_01bdd7e4
    ADD EAX,0x4                         ; 0043f3dd
    MOV EDX,dword ptr [ECX + EDX*0x1 + 0x28] ; 0043f3e0
    MOV dword ptr [EAX + 0x3a968],EDX   ; 0043f3e4
    INC ESI                             ; 0043f3ea
    MOV EDX,dword ptr [EBP + 0x39ce8]   ; 0043f3eb
    ADD EBX,0x4                         ; 0043f3f1
    CMP ESI,EDX                         ; 0043f3f4
    JL 0x0043f3b4                       ; 0043f3f6
        ;   XREF to: 0043f3b4 (CONDITIONAL_JUMP)  ; LAB_0043f3b4
    LEA EAX,[EAX]                       ; 0043f3f8
    MOV EDX,EDX                         ; 0043f3fe
    POP EBP                             ; 0043f400
        ;   Label: LAB_0043f400
    POP EDI                             ; 0043f401
    POP ESI                             ; 0043f402
    POP EBX                             ; 0043f403
    RET                                 ; 0043f404
    MOV EDX,0x5b914c                    ; 0043f405 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_0043f405
    MOV ECX,0x4f0                       ; 0043f40a
    PUSH 0x5b915e                       ; 0043f40f | = "CCloth::saveJoinedLight - Can't save ..."
    MOV dword ptr [0x01d71de0],EDX      ; 0043f414 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0043f41a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043f420
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043f425
    JMP 0x0043f384                      ; 0043f428
        ;   XREF to: 0043f384 (UNCONDITIONAL_JUMP)  ; LAB_0043f384
    MOV EBX,0x5b9198                    ; 0043f42d | = "..\\core\\cloth.cpp"
        ;   Label: LAB_0043f42d
    MOV ESI,0x4f5                       ; 0043f432
    PUSH 0x5b91aa                       ; 0043f437 | = "CCloth::saveJoinedLight - Model wasn'..."
    MOV dword ptr [0x01d71de0],EBX      ; 0043f43c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0043f442 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043f448
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043f44d
    JMP 0x0043f392                      ; 0043f450
        ;   XREF to: 0043f392 (UNCONDITIONAL_JUMP)  ; LAB_0043f392

