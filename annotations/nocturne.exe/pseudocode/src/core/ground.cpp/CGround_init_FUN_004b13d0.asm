; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_init_FUN_004b13d0(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_init_FUN_005492b0 at 005492c2
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_00585382
;   TerminatedCString s_CGround_init_Out_of_memo_00585395
;   TerminatedCString s_core_ground_cpp_005853b3
;   TerminatedCString s_CGround_init_Out_of_memo_005853c6
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004b1470
;   core_main.c_FUN_004c8440
;   core_texlist.cpp_CTextureList_ctor_FUN_00544930
;   crt_memory.c_malloc_FUN_005635b0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b13d0
        ;   Label: core_ground.cpp_CGround_init_FUN_004b13d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b13d1
    PUSH EBX                            ; 004b13d5
    CALL core_ground.cpp_CGround_free_FUN_004b1470 ; 004b13d6
        ;   XREF to: 004b1470 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004b1470(CGround * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 004b13db
    IMUL EAX,dword ptr [EBX + 0x4]      ; 004b13dd
    ADD ESP,0x4                         ; 004b13e1
    SHL EAX,0x2                         ; 004b13e4
    PUSH EAX                            ; 004b13e7
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004b13e8
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 004b13ed
    MOV dword ptr [EBX + 0x24],EAX      ; 004b13f0
    TEST EAX,EAX                        ; 004b13f3
    JZ 0x004b141a                       ; 004b13f5
        ;   XREF to: 004b141a (CONDITIONAL_JUMP)  ; LAB_004b141a
    PUSH 0x6d64                         ; 004b13f7
        ;   Label: LAB_004b13f7
    CALL crt_unknown.c_FUN_0056497c     ; 004b13fc
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004b1401
    TEST EAX,EAX                        ; 004b1404
    JZ 0x004b1411                       ; 004b1406
        ;   XREF to: 004b1411 (CONDITIONAL_JUMP)  ; LAB_004b1411
    PUSH EAX                            ; 004b1408
    CALL core_texlist.cpp_CTextureList_ctor_FUN_00544930 ; 004b1409
        ;   XREF to: 00544930 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_ctor_FUN_00544930(CTextureList * this_ptr)
    ADD ESP,0x4                         ; 004b140e
    MOV dword ptr [EBX + 0x28],EAX      ; 004b1411
        ;   Label: LAB_004b1411
    TEST EAX,EAX                        ; 004b1414
    JZ 0x004b1443                       ; 004b1416
        ;   XREF to: 004b1443 (CONDITIONAL_JUMP)  ; LAB_004b1443
    POP EBX                             ; 004b1418
    RET                                 ; 004b1419
    PUSH EDI                            ; 004b141a
        ;   Label: LAB_004b141a
    PUSH ESI                            ; 004b141b
    MOV ESI,0x585382                    ; 004b141c | = "..\\core\\ground.cpp"
    MOV EDI,0xd3                        ; 004b1421
    PUSH 0x585395                       ; 004b1426 | = "CGround::init - Out of memory"
    MOV dword ptr [0x01cc4800],ESI      ; 004b142b | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004b1431 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004b1437
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004b143c
    POP ESI                             ; 004b143f
    POP EDI                             ; 004b1440
    JMP 0x004b13f7                      ; 004b1441
        ;   XREF to: 004b13f7 (UNCONDITIONAL_JUMP)  ; LAB_004b13f7
    MOV EAX,0x5853b3                    ; 004b1443 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004b1443
    MOV EDX,0xd8                        ; 004b1448
    PUSH 0x5853c6                       ; 004b144d | = "CGround::init - Out of memory2"
    MOV [0x01cc4800],EAX                ; 004b1452 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004b1457 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004b145d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004b1462
    POP EBX                             ; 004b1465
    RET                                 ; 004b1466

