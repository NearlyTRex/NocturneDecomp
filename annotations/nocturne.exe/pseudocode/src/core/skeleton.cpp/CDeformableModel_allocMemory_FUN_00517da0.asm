; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_lods
; int              Stack[0xc]:4   num_texture_sets
; int              Stack[0x10]:4   num_textures
; int              Stack[0x14]:4   num_parts
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280 at 0051938b
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005913e8
;   TerminatedCString s_Too_many_texture_sets_in_005913fd
;   TerminatedCString s_core_skeleton_cpp_0059144f
;   TerminatedCString s_Too_many_textures_in_CDe_00591464
;   TerminatedCString s_core_skeleton_cpp_005914b2
;   TerminatedCString s_Too_many_parts_in_CDefor_005914c7
;   TerminatedCString s_core_skeleton_cpp_00591512
;   TerminatedCString s_Too_many_LODs_in_CDeform_00591527
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517da0
        ;   Label: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0
    PUSH ESI                            ; 00517da1
    PUSH EDI                            ; 00517da2
    PUSH EBP                            ; 00517da3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00517da4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00517da8
    MOV ESI,dword ptr [ESP + 0x20]      ; 00517dac
    MOV EBP,dword ptr [ESP + 0x24]      ; 00517db0
    PUSH EBX                            ; 00517db4
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0 ; 00517db5
        ;   XREF to: 00517cc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00517dba
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00517dbd
    CMP EDX,0x5                         ; 00517dc1
    JG 0x00517e95                       ; 00517dc4
        ;   XREF to: 00517e95 (CONDITIONAL_JUMP)  ; LAB_00517e95
    CMP ESI,0x8                         ; 00517dca
        ;   Label: LAB_00517dca
    JLE 0x00517df4                      ; 00517dcd
        ;   XREF to: 00517df4 (CONDITIONAL_JUMP)  ; LAB_00517df4
    PUSH ESI                            ; 00517dcf
    PUSH 0x8                            ; 00517dd0
    MOV ECX,0x59144f                    ; 00517dd2 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x265                       ; 00517dd7
    PUSH 0x591464                       ; 00517ddc | = "Too many textures in CDeformableModel..."
    MOV dword ptr [0x01cc4800],ECX      ; 00517de1 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00517de7 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00517dec
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 00517df1
    CMP EBP,0x1e                        ; 00517df4
        ;   Label: LAB_00517df4
    JLE 0x00517e1f                      ; 00517df7
        ;   XREF to: 00517e1f (CONDITIONAL_JUMP)  ; LAB_00517e1f
    PUSH EBP                            ; 00517df9
    PUSH 0x1e                           ; 00517dfa
    MOV EDX,0x5914b2                    ; 00517dfc | = "..\\core\\skeleton.cpp"
    MOV ECX,0x269                       ; 00517e01
    PUSH 0x5914c7                       ; 00517e06 | = "Too many parts in CDeformableModel::a..."
    MOV dword ptr [0x01cc4800],EDX      ; 00517e0b | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00517e11 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00517e17
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 00517e1c
    CMP EDI,0x5                         ; 00517e1f
        ;   Label: LAB_00517e1f
    JLE 0x00517e49                      ; 00517e22
        ;   XREF to: 00517e49 (CONDITIONAL_JUMP)  ; LAB_00517e49
    PUSH EDI                            ; 00517e24
    PUSH 0x5                            ; 00517e25
    MOV EAX,0x591512                    ; 00517e27 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x26d                       ; 00517e2c
    PUSH 0x591527                       ; 00517e31 | = "Too many LODs in CDeformableModel::al..."
    MOV [0x01cc4800],EAX                ; 00517e36 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00517e3b | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00517e41
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 00517e46
    MOV dword ptr [EBX + 0xbc],ESI      ; 00517e49
        ;   Label: LAB_00517e49
    MOV dword ptr [EBX + 0xc00],EBP     ; 00517e4f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00517e55
    MOV dword ptr [EBX],EDI             ; 00517e59
    XOR EDX,EDX                         ; 00517e5b
    MOV dword ptr [EBX + 0xb8],EAX      ; 00517e5d
    TEST EDI,EDI                        ; 00517e63
    JLE 0x00517e90                      ; 00517e65
        ;   XREF to: 00517e90 (CONDITIONAL_JUMP)  ; LAB_00517e90
    MOV EAX,EBX                         ; 00517e67
    MOV dword ptr [EAX + 0x4],0x1       ; 00517e69
        ;   Label: LAB_00517e69
    MOV dword ptr [EAX + 0x8],0x0       ; 00517e70
    INC EDX                             ; 00517e77
    MOV ESI,dword ptr [EBX]             ; 00517e78
    ADD EAX,0x8                         ; 00517e7a
    CMP EDX,ESI                         ; 00517e7d
    JL 0x00517e69                       ; 00517e7f
        ;   XREF to: 00517e69 (CONDITIONAL_JUMP)  ; LAB_00517e69
    LEA EAX,[EAX]                       ; 00517e81
    LEA EDX,[EDX]                       ; 00517e87
    LEA EAX,[EAX]                       ; 00517e8d
    POP EBP                             ; 00517e90
        ;   Label: LAB_00517e90
    POP EDI                             ; 00517e91
    POP ESI                             ; 00517e92
    POP EBX                             ; 00517e93
    RET                                 ; 00517e94
    PUSH EDX                            ; 00517e95
        ;   Label: LAB_00517e95
    PUSH 0x5                            ; 00517e96
    MOV ECX,0x5913e8                    ; 00517e98 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x261                       ; 00517e9d
    PUSH 0x5913fd                       ; 00517ea2 | = "Too many texture sets in CDeformableM..."
    MOV dword ptr [0x01cc4800],ECX      ; 00517ea7 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00517ead | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00517eb2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 00517eb7
    JMP 0x00517dca                      ; 00517eba
        ;   XREF to: 00517dca (UNCONDITIONAL_JUMP)  ; LAB_00517dca

