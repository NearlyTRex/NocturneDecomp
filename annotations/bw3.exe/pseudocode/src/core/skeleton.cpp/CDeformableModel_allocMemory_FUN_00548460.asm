; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00548460(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_lods
; int              Stack[0xc]:4   num_texture_sets
; int              Stack[0x10]:4   num_textures
; int              Stack[0x14]:4   num_parts
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00549a60 at 00549b6b
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1869
;   TerminatedCString s_Too_many_texture_sets_in_005d187e
;   TerminatedCString s_core_skeleton_cpp_005d18d0
;   TerminatedCString s_Too_many_textures_in_CDe_005d18e5
;   TerminatedCString s_core_skeleton_cpp_005d1933
;   TerminatedCString s_Too_many_parts_in_CDefor_005d1948
;   TerminatedCString s_core_skeleton_cpp_005d1993
;   TerminatedCString s_Too_many_LODs_in_CDeform_005d19a8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModel_free_FUN_00548370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548460
        ;   Label: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00548460
    PUSH ESI                            ; 00548461
    PUSH EDI                            ; 00548462
    PUSH EBP                            ; 00548463
    MOV EBX,dword ptr [ESP + 0x14]      ; 00548464
    MOV EDI,dword ptr [ESP + 0x18]      ; 00548468
    MOV ESI,dword ptr [ESP + 0x20]      ; 0054846c
    MOV EBP,dword ptr [ESP + 0x24]      ; 00548470
    PUSH EBX                            ; 00548474
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00548370 ; 00548475
        ;   XREF to: 00548370 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00548370(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0054847a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0054847d
    CMP EDX,0x5                         ; 00548481
    JG 0x00548555                       ; 00548484
        ;   XREF to: 00548555 (CONDITIONAL_JUMP)  ; LAB_00548555
    CMP ESI,0x8                         ; 0054848a
        ;   Label: LAB_0054848a
    JLE 0x005484b4                      ; 0054848d
        ;   XREF to: 005484b4 (CONDITIONAL_JUMP)  ; LAB_005484b4
    PUSH ESI                            ; 0054848f
    PUSH 0x8                            ; 00548490
    MOV ECX,0x5d18d0                    ; 00548492 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x275                       ; 00548497
    PUSH 0x5d18e5                       ; 0054849c | = "Too many textures in CDeformableModel..."
    MOV dword ptr [0x01d71de0],ECX      ; 005484a1 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005484a7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005484ac
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 005484b1
    CMP EBP,0x3c                        ; 005484b4
        ;   Label: LAB_005484b4
    JLE 0x005484df                      ; 005484b7
        ;   XREF to: 005484df (CONDITIONAL_JUMP)  ; LAB_005484df
    PUSH EBP                            ; 005484b9
    PUSH 0x3c                           ; 005484ba
    MOV EDX,0x5d1933                    ; 005484bc | = "..\\core\\skeleton.cpp"
    MOV ECX,0x279                       ; 005484c1
    PUSH 0x5d1948                       ; 005484c6 | = "Too many parts in CDeformableModel::a..."
    MOV dword ptr [0x01d71de0],EDX      ; 005484cb | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 005484d1 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005484d7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 005484dc
    CMP EDI,0x5                         ; 005484df
        ;   Label: LAB_005484df
    JLE 0x00548509                      ; 005484e2
        ;   XREF to: 00548509 (CONDITIONAL_JUMP)  ; LAB_00548509
    PUSH EDI                            ; 005484e4
    PUSH 0x5                            ; 005484e5
    MOV EAX,0x5d1993                    ; 005484e7 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x27d                       ; 005484ec
    PUSH 0x5d19a8                       ; 005484f1 | = "Too many LODs in CDeformableModel::al..."
    MOV [0x01d71de0],EAX                ; 005484f6 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 005484fb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00548501
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00548506
    MOV dword ptr [EBX + 0xbc],ESI      ; 00548509
        ;   Label: LAB_00548509
    MOV dword ptr [EBX + 0xc00],EBP     ; 0054850f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00548515
    MOV dword ptr [EBX],EDI             ; 00548519
    XOR EDX,EDX                         ; 0054851b
    MOV dword ptr [EBX + 0xb8],EAX      ; 0054851d
    TEST EDI,EDI                        ; 00548523
    JLE 0x00548550                      ; 00548525
        ;   XREF to: 00548550 (CONDITIONAL_JUMP)  ; LAB_00548550
    MOV EAX,EBX                         ; 00548527
    MOV dword ptr [EAX + 0x4],0x1       ; 00548529
        ;   Label: LAB_00548529
    MOV dword ptr [EAX + 0x8],0x0       ; 00548530
    INC EDX                             ; 00548537
    MOV ESI,dword ptr [EBX]             ; 00548538
    ADD EAX,0x8                         ; 0054853a
    CMP EDX,ESI                         ; 0054853d
    JL 0x00548529                       ; 0054853f
        ;   XREF to: 00548529 (CONDITIONAL_JUMP)  ; LAB_00548529
    LEA EAX,[EAX]                       ; 00548541
    LEA EDX,[EDX]                       ; 00548547
    LEA EAX,[EAX]                       ; 0054854d
    POP EBP                             ; 00548550
        ;   Label: LAB_00548550
    POP EDI                             ; 00548551
    POP ESI                             ; 00548552
    POP EBX                             ; 00548553
    RET                                 ; 00548554
    PUSH EDX                            ; 00548555
        ;   Label: LAB_00548555
    PUSH 0x5                            ; 00548556
    MOV ECX,0x5d1869                    ; 00548558 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x271                       ; 0054855d
    PUSH 0x5d187e                       ; 00548562 | = "Too many texture sets in CDeformableM..."
    MOV dword ptr [0x01d71de0],ECX      ; 00548567 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0054856d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00548572
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00548577
    JMP 0x0054848a                      ; 0054857a
        ;   XREF to: 0054848a (UNCONDITIONAL_JUMP)  ; LAB_0054848a

