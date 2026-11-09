; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_init_FUN_004ca9c0(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_init_FUN_0057b800 at 0057b812
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_005d9733
;   TerminatedCString s_CGround_init_Out_of_memo_005d9746
;   TerminatedCString s_core_ground_cpp_005d9764
;   TerminatedCString s_CGround_init_Out_of_memo_005d9777
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004caa60
;   core_main.c_FUN_004e4500
;   core_texlist.cpp_CTextureList_ctor_FUN_00573490
;   crt_unknown.c_FUN_005b8580
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca9c0
        ;   Label: core_ground.cpp_CGround_init_FUN_004ca9c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ca9c1
    PUSH EBX                            ; 004ca9c5
    CALL core_ground.cpp_CGround_free_FUN_004caa60 ; 004ca9c6
        ;   XREF to: 004caa60 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004caa60(CGround * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 004ca9cb
    IMUL EAX,dword ptr [EBX + 0x4]      ; 004ca9cd
    ADD ESP,0x4                         ; 004ca9d1
    SHL EAX,0x2                         ; 004ca9d4
    PUSH EAX                            ; 004ca9d7
    CALL crt_unknown.c_FUN_005b8580     ; 004ca9d8
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004ca9dd
    MOV dword ptr [EBX + 0x24],EAX      ; 004ca9e0
    TEST EAX,EAX                        ; 004ca9e3
    JZ 0x004caa0a                       ; 004ca9e5
        ;   XREF to: 004caa0a (CONDITIONAL_JUMP)  ; LAB_004caa0a
    PUSH 0x6d64                         ; 004ca9e7
        ;   Label: LAB_004ca9e7
    CALL crt_unknown.c_FUN_005b8be2     ; 004ca9ec
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004ca9f1
    TEST EAX,EAX                        ; 004ca9f4
    JZ 0x004caa01                       ; 004ca9f6
        ;   XREF to: 004caa01 (CONDITIONAL_JUMP)  ; LAB_004caa01
    PUSH EAX                            ; 004ca9f8
    CALL core_texlist.cpp_CTextureList_ctor_FUN_00573490 ; 004ca9f9
        ;   XREF to: 00573490 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_ctor_FUN_00573490(CTextureList * this_ptr)
    ADD ESP,0x4                         ; 004ca9fe
    MOV dword ptr [EBX + 0x28],EAX      ; 004caa01
        ;   Label: LAB_004caa01
    TEST EAX,EAX                        ; 004caa04
    JZ 0x004caa33                       ; 004caa06
        ;   XREF to: 004caa33 (CONDITIONAL_JUMP)  ; LAB_004caa33
    POP EBX                             ; 004caa08
    RET                                 ; 004caa09
    PUSH EDI                            ; 004caa0a
        ;   Label: LAB_004caa0a
    PUSH ESI                            ; 004caa0b
    MOV ESI,0x5d9733                    ; 004caa0c | = "..\\core\\ground.cpp"
    MOV EDI,0xe1                        ; 004caa11
    PUSH 0x5d9746                       ; 004caa16 | = "CGround::init - Out of memory"
    MOV dword ptr [0x01d046a0],ESI      ; 004caa1b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004caa21 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004caa27
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004caa2c
    POP ESI                             ; 004caa2f
    POP EDI                             ; 004caa30
    JMP 0x004ca9e7                      ; 004caa31
        ;   XREF to: 004ca9e7 (UNCONDITIONAL_JUMP)  ; LAB_004ca9e7
    MOV EAX,0x5d9764                    ; 004caa33 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004caa33
    MOV EDX,0xe6                        ; 004caa38
    PUSH 0x5d9777                       ; 004caa3d | = "CGround::init - Out of memory2"
    MOV [0x01d046a0],EAX                ; 004caa42 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004caa47 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004caa4d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004caa52
    POP EBX                             ; 004caa55
    RET                                 ; 004caa56

