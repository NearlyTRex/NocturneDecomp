; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_lods
; int              Stack[0xc]:4   num_texture_sets
; int              Stack[0x10]:4   num_textures
; int              Stack[0x14]:4   num_parts
;
; XREF[3]:
;   core_skeledit.cpp_CDeformableModel_FUN_0058b660 at 0058b7ac
;   core_skeledit.cpp_CDeformableModel_FUN_0058c190 at 0058c2e7
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 at 0059bb99
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064e50e
;   TerminatedCString s_Too_many_texture_sets_in_0064e523
;   TerminatedCString s_core_skeleton_cpp_0064e575
;   TerminatedCString s_Too_many_textures_in_CDe_0064e58a
;   TerminatedCString s_core_skeleton_cpp_0064e5d8
;   TerminatedCString s_Too_many_parts_in_CDefor_0064e5ed
;   TerminatedCString s_core_skeleton_cpp_0064e638
;   TerminatedCString s_Too_many_LODs_in_CDeform_0064e64d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a3f0
        ;   Label: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
    PUSH ESI                            ; 0059a3f1
    PUSH EDI                            ; 0059a3f2
    PUSH EBP                            ; 0059a3f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059a3f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0059a3f8
    MOV ESI,dword ptr [ESP + 0x20]      ; 0059a3fc
    MOV EBP,dword ptr [ESP + 0x24]      ; 0059a400
    PUSH EBX                            ; 0059a404
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0 ; 0059a405
        ;   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059a40a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059a40d
    CMP EDX,0x5                         ; 0059a411
    JG 0x0059a4e5                       ; 0059a414
        ;   XREF to: 0059a4e5 (CONDITIONAL_JUMP)  ; LAB_0059a4e5
    CMP ESI,0x50                        ; 0059a41a
        ;   Label: LAB_0059a41a
    JLE 0x0059a444                      ; 0059a41d
        ;   XREF to: 0059a444 (CONDITIONAL_JUMP)  ; LAB_0059a444
    PUSH ESI                            ; 0059a41f
    PUSH 0x50                           ; 0059a420
    MOV ECX,0x64e575                    ; 0059a422 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x265                       ; 0059a427
    PUSH 0x64e58a                       ; 0059a42c | = "Too many textures in CDeformableModel..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0059a431 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0059a437 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059a43c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0059a441
    CMP EBP,0x1e                        ; 0059a444
        ;   Label: LAB_0059a444
    JLE 0x0059a46f                      ; 0059a447
        ;   XREF to: 0059a46f (CONDITIONAL_JUMP)  ; LAB_0059a46f
    PUSH EBP                            ; 0059a449
    PUSH 0x1e                           ; 0059a44a
    MOV EDX,0x64e5d8                    ; 0059a44c | = "..\\core\\skeleton.cpp"
    MOV ECX,0x269                       ; 0059a451
    PUSH 0x64e5ed                       ; 0059a456 | = "Too many parts in CDeformableModel::a..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0059a45b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0059a461 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059a467
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0059a46c
    CMP EDI,0x5                         ; 0059a46f
        ;   Label: LAB_0059a46f
    JLE 0x0059a499                      ; 0059a472
        ;   XREF to: 0059a499 (CONDITIONAL_JUMP)  ; LAB_0059a499
    PUSH EDI                            ; 0059a474
    PUSH 0x5                            ; 0059a475
    MOV EAX,0x64e638                    ; 0059a477 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x26d                       ; 0059a47c
    PUSH 0x64e64d                       ; 0059a481 | = "Too many LODs in CDeformableModel::al..."
    MOV [0x02f0ca48],EAX                ; 0059a486 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0059a48b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059a491
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0059a496
    MOV dword ptr [EBX + 0xbc],ESI      ; 0059a499
        ;   Label: LAB_0059a499
    MOV dword ptr [EBX + 0x7140],EBP    ; 0059a49f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059a4a5
    MOV dword ptr [EBX],EDI             ; 0059a4a9
    XOR EDX,EDX                         ; 0059a4ab
    MOV dword ptr [EBX + 0xb8],EAX      ; 0059a4ad
    TEST EDI,EDI                        ; 0059a4b3
    JLE 0x0059a4e0                      ; 0059a4b5
        ;   XREF to: 0059a4e0 (CONDITIONAL_JUMP)  ; LAB_0059a4e0
    MOV EAX,EBX                         ; 0059a4b7
    MOV dword ptr [EAX + 0x4],0x1       ; 0059a4b9
        ;   Label: LAB_0059a4b9
    MOV dword ptr [EAX + 0x8],0x0       ; 0059a4c0
    INC EDX                             ; 0059a4c7
    MOV ESI,dword ptr [EBX]             ; 0059a4c8
    ADD EAX,0x8                         ; 0059a4ca
    CMP EDX,ESI                         ; 0059a4cd
    JL 0x0059a4b9                       ; 0059a4cf
        ;   XREF to: 0059a4b9 (CONDITIONAL_JUMP)  ; LAB_0059a4b9
    LEA EAX,[EAX]                       ; 0059a4d1
    LEA EDX,[EDX]                       ; 0059a4d7
    LEA EAX,[EAX]                       ; 0059a4dd
    POP EBP                             ; 0059a4e0
        ;   Label: LAB_0059a4e0
    POP EDI                             ; 0059a4e1
    POP ESI                             ; 0059a4e2
    POP EBX                             ; 0059a4e3
    RET                                 ; 0059a4e4
    PUSH EDX                            ; 0059a4e5
        ;   Label: LAB_0059a4e5
    PUSH 0x5                            ; 0059a4e6
    MOV ECX,0x64e50e                    ; 0059a4e8 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x261                       ; 0059a4ed
    PUSH 0x64e523                       ; 0059a4f2 | = "Too many texture sets in CDeformableM..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0059a4f7 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0059a4fd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059a502
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0059a507
    JMP 0x0059a41a                      ; 0059a50a
        ;   XREF to: 0059a41a (UNCONDITIONAL_JUMP)  ; LAB_0059a41a

