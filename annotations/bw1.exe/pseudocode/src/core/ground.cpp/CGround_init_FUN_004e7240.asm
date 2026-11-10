; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_init_FUN_004e7240(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_init_FUN_0059f380 at 0059f392
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_005e4328
;   TerminatedCString s_CGround_init_Out_of_memo_005e433b
;   TerminatedCString s_core_ground_cpp_005e4359
;   TerminatedCString s_CGround_init_Out_of_memo_005e436c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004e72e0
;   core_main.c_FUN_005030e0
;   core_texlist.cpp_CTextureList_ctor_FUN_005960b0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;   crt_unknown.c_FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7240
        ;   Label: core_ground.cpp_CGround_init_FUN_004e7240
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7241
    PUSH EBX                            ; 004e7245
    CALL core_ground.cpp_CGround_free_FUN_004e72e0 ; 004e7246
        ;   XREF to: 004e72e0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004e72e0(CGround * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 004e724b
    IMUL EAX,dword ptr [EBX + 0x4]      ; 004e724d
    ADD ESP,0x4                         ; 004e7251
    SHL EAX,0x2                         ; 004e7254
    PUSH EAX                            ; 004e7257
    CALL crt_unknown.c_FUN_005c08d0     ; 004e7258
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004e725d
    MOV dword ptr [EBX + 0x24],EAX      ; 004e7260
    TEST EAX,EAX                        ; 004e7263
    JZ 0x004e728a                       ; 004e7265
        ;   XREF to: 004e728a (CONDITIONAL_JUMP)  ; LAB_004e728a
    PUSH 0x6d64                         ; 004e7267
        ;   Label: LAB_004e7267
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004e726c
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004e7271
    TEST EAX,EAX                        ; 004e7274
    JZ 0x004e7281                       ; 004e7276
        ;   XREF to: 004e7281 (CONDITIONAL_JUMP)  ; LAB_004e7281
    PUSH EAX                            ; 004e7278
    CALL core_texlist.cpp_CTextureList_ctor_FUN_005960b0 ; 004e7279
        ;   XREF to: 005960b0 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_ctor_FUN_005960b0(CTextureList * this_ptr)
    ADD ESP,0x4                         ; 004e727e
    MOV dword ptr [EBX + 0x28],EAX      ; 004e7281
        ;   Label: LAB_004e7281
    TEST EAX,EAX                        ; 004e7284
    JZ 0x004e72b3                       ; 004e7286
        ;   XREF to: 004e72b3 (CONDITIONAL_JUMP)  ; LAB_004e72b3
    POP EBX                             ; 004e7288
    RET                                 ; 004e7289
    PUSH EDI                            ; 004e728a
        ;   Label: LAB_004e728a
    PUSH ESI                            ; 004e728b
    MOV ESI,0x5e4328                    ; 004e728c | = "..\\core\\ground.cpp"
    MOV EDI,0xd5                        ; 004e7291
    PUSH 0x5e433b                       ; 004e7296 | = "CGround::init - Out of memory"
    MOV dword ptr [0x01d1d400],ESI      ; 004e729b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004e72a1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e72a7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004e72ac
    POP ESI                             ; 004e72af
    POP EDI                             ; 004e72b0
    JMP 0x004e7267                      ; 004e72b1
        ;   XREF to: 004e7267 (UNCONDITIONAL_JUMP)  ; LAB_004e7267
    MOV EAX,0x5e4359                    ; 004e72b3 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004e72b3
    MOV EDX,0xda                        ; 004e72b8
    PUSH 0x5e436c                       ; 004e72bd | = "CGround::init - Out of memory2"
    MOV [0x01d1d400],EAX                ; 004e72c2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004e72c7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e72cd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004e72d2
    POP EBX                             ; 004e72d5
    RET                                 ; 004e72d6

