; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_005638c0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_lods
; int              Stack[0xc]:4   num_texture_sets
; int              Stack[0x10]:4   num_textures
; int              Stack[0x14]:4   num_parts
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00564ed0 at 00564fdb
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f1d69
;   TerminatedCString s_Too_many_texture_sets_in_005f1d7e
;   TerminatedCString s_core_skeleton_cpp_005f1dd0
;   TerminatedCString s_Too_many_textures_in_CDe_005f1de5
;   TerminatedCString s_core_skeleton_cpp_005f1e33
;   TerminatedCString s_Too_many_parts_in_CDefor_005f1e48
;   TerminatedCString s_core_skeleton_cpp_005f1e93
;   TerminatedCString s_Too_many_LODs_in_CDeform_005f1ea8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModel_free_FUN_005637d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005638c0
        ;   Label: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_005638c0
    PUSH ESI                            ; 005638c1
    PUSH EDI                            ; 005638c2
    PUSH EBP                            ; 005638c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005638c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005638c8
    MOV ESI,dword ptr [ESP + 0x20]      ; 005638cc
    MOV EBP,dword ptr [ESP + 0x24]      ; 005638d0
    PUSH EBX                            ; 005638d4
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_005637d0 ; 005638d5
        ;   XREF to: 005637d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_005637d0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005638da
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005638dd
    CMP EDX,0x5                         ; 005638e1
    JG 0x005639b5                       ; 005638e4
        ;   XREF to: 005639b5 (CONDITIONAL_JUMP)  ; LAB_005639b5
    CMP ESI,0x8                         ; 005638ea
        ;   Label: LAB_005638ea
    JLE 0x00563914                      ; 005638ed
        ;   XREF to: 00563914 (CONDITIONAL_JUMP)  ; LAB_00563914
    PUSH ESI                            ; 005638ef
    PUSH 0x8                            ; 005638f0
    MOV ECX,0x5f1dd0                    ; 005638f2 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x27e                       ; 005638f7
    PUSH 0x5f1de5                       ; 005638fc | = "Too many textures in CDeformableModel..."
    MOV dword ptr [0x01d1d400],ECX      ; 00563901 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00563907 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056390c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00563911
    CMP EBP,0x3c                        ; 00563914
        ;   Label: LAB_00563914
    JLE 0x0056393f                      ; 00563917
        ;   XREF to: 0056393f (CONDITIONAL_JUMP)  ; LAB_0056393f
    PUSH EBP                            ; 00563919
    PUSH 0x3c                           ; 0056391a
    MOV EDX,0x5f1e33                    ; 0056391c | = "..\\core\\skeleton.cpp"
    MOV ECX,0x282                       ; 00563921
    PUSH 0x5f1e48                       ; 00563926 | = "Too many parts in CDeformableModel::a..."
    MOV dword ptr [0x01d1d400],EDX      ; 0056392b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00563931 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00563937
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0056393c
    CMP EDI,0x5                         ; 0056393f
        ;   Label: LAB_0056393f
    JLE 0x00563969                      ; 00563942
        ;   XREF to: 00563969 (CONDITIONAL_JUMP)  ; LAB_00563969
    PUSH EDI                            ; 00563944
    PUSH 0x5                            ; 00563945
    MOV EAX,0x5f1e93                    ; 00563947 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x286                       ; 0056394c
    PUSH 0x5f1ea8                       ; 00563951 | = "Too many LODs in CDeformableModel::al..."
    MOV [0x01d1d400],EAX                ; 00563956 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0056395b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00563961
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00563966
    MOV dword ptr [EBX + 0xbc],ESI      ; 00563969
        ;   Label: LAB_00563969
    MOV dword ptr [EBX + 0xc00],EBP     ; 0056396f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00563975
    MOV dword ptr [EBX],EDI             ; 00563979
    XOR EDX,EDX                         ; 0056397b
    MOV dword ptr [EBX + 0xb8],EAX      ; 0056397d
    TEST EDI,EDI                        ; 00563983
    JLE 0x005639b0                      ; 00563985
        ;   XREF to: 005639b0 (CONDITIONAL_JUMP)  ; LAB_005639b0
    MOV EAX,EBX                         ; 00563987
    MOV dword ptr [EAX + 0x4],0x1       ; 00563989
        ;   Label: LAB_00563989
    MOV dword ptr [EAX + 0x8],0x0       ; 00563990
    INC EDX                             ; 00563997
    MOV ESI,dword ptr [EBX]             ; 00563998
    ADD EAX,0x8                         ; 0056399a
    CMP EDX,ESI                         ; 0056399d
    JL 0x00563989                       ; 0056399f
        ;   XREF to: 00563989 (CONDITIONAL_JUMP)  ; LAB_00563989
    LEA EAX,[EAX]                       ; 005639a1
    LEA EDX,[EDX]                       ; 005639a7
    LEA EAX,[EAX]                       ; 005639ad
    POP EBP                             ; 005639b0
        ;   Label: LAB_005639b0
    POP EDI                             ; 005639b1
    POP ESI                             ; 005639b2
    POP EBX                             ; 005639b3
    RET                                 ; 005639b4
    PUSH EDX                            ; 005639b5
        ;   Label: LAB_005639b5
    PUSH 0x5                            ; 005639b6
    MOV ECX,0x5f1d69                    ; 005639b8 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x27a                       ; 005639bd
    PUSH 0x5f1d7e                       ; 005639c2 | = "Too many texture sets in CDeformableM..."
    MOV dword ptr [0x01d1d400],ECX      ; 005639c7 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005639cd | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005639d2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 005639d7
    JMP 0x005638ea                      ; 005639da
        ;   XREF to: 005638ea (UNCONDITIONAL_JUMP)  ; LAB_005638ea

