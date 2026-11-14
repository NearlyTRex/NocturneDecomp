; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bmppuzzl_cpp_CChemPuzzle_reset_FUN_004132c0(CChemPuzzle *this_ptr)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004132c0
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_reset_FUN_004132c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004132c1
    MOV dword ptr [EBX + 0x1c],0x0      ; 004132c5
    MOV dword ptr [EBX + 0x28],0x0      ; 004132cc
    MOV dword ptr [EBX + 0x2c],0x0      ; 004132d3
    MOV dword ptr [EBX + 0x30],0x0      ; 004132da
    MOV dword ptr [EBX + 0x930],0xffffffff ; 004132e1
    MOV dword ptr [EBX + 0x54],0x0      ; 004132eb
    MOV dword ptr [EBX + 0x24],0x0      ; 004132f2
    MOV dword ptr [EBX + 0x34],0x0      ; 004132f9
    MOV EAX,EBX                         ; 00413300
    MOV dword ptr [EBX + 0x18],0x0      ; 00413302
    LEA EDX,[EBX + 0x10]                ; 00413309
    ADD EAX,0x4                         ; 0041330c
        ;   Label: LAB_0041330c
    MOV dword ptr [EAX + 0x930],0x0     ; 0041330f
    CMP EAX,EDX                         ; 00413319
    JNZ 0x0041330c                      ; 0041331b
        ;   XREF to: 0041330c (CONDITIONAL_JUMP)  ; LAB_0041330c
    MOV EAX,EBX                         ; 0041331d
    LEA EDX,[EBX + 0xc]                 ; 0041331f
    ADD EAX,0x4                         ; 00413322
        ;   Label: LAB_00413322
    MOV dword ptr [EAX + 0x34],0xffffffff ; 00413325
    CMP EAX,EDX                         ; 0041332c
    JNZ 0x00413322                      ; 0041332e
        ;   XREF to: 00413322 (CONDITIONAL_JUMP)  ; LAB_00413322
    MOV EAX,EBX                         ; 00413330
    LEA EDX,[EBX + 0x10]                ; 00413332
    ADD EAX,0x4                         ; 00413335
        ;   Label: LAB_00413335
    MOV dword ptr [EAX + 0x40],0x0      ; 00413338
    CMP EAX,EDX                         ; 0041333f
    JNZ 0x00413335                      ; 00413341
        ;   XREF to: 00413335 (CONDITIONAL_JUMP)  ; LAB_00413335
    MOV EAX,EBX                         ; 00413343
    LEA EDX,[EBX + 0x18]                ; 00413345
    ADD EAX,0x4                         ; 00413348
        ;   Label: LAB_00413348
    MOV dword ptr [EAX + 0x54],0x0      ; 0041334b
    CMP EAX,EDX                         ; 00413352
    JNZ 0x00413348                      ; 00413354
        ;   XREF to: 00413348 (CONDITIONAL_JUMP)  ; LAB_00413348
    PUSH 0x2                            ; 00413356
    PUSH 0x0                            ; 00413358
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0041335a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041335f
    PUSH 0x2                            ; 00413362
    PUSH 0x0                            ; 00413364
    MOV dword ptr [EBX + 0x44],EAX      ; 00413366
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00413369
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041336e
    PUSH 0x2                            ; 00413371
    PUSH 0x0                            ; 00413373
    MOV dword ptr [EBX + 0x48],EAX      ; 00413375
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00413378
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041337d
    PUSH 0x2                            ; 00413380
    PUSH 0x0                            ; 00413382
    MOV dword ptr [EBX + 0x4c],EAX      ; 00413384
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00413387
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041338c
    MOV dword ptr [EBX + 0x50],EAX      ; 0041338f
    MOV EAX,EBX                         ; 00413392
    ADD EBX,0x18                        ; 00413394
    ADD EAX,0x4                         ; 00413397
        ;   Label: LAB_00413397
    MOV dword ptr [EAX + 0x54],0x0      ; 0041339a
    CMP EAX,EBX                         ; 004133a1
    JNZ 0x00413397                      ; 004133a3
        ;   XREF to: 00413397 (CONDITIONAL_JUMP)  ; LAB_00413397
    POP EBX                             ; 004133a5
    LEA EAX,[EAX]                       ; 004133a6
    LEA EDX,[EDX]                       ; 004133ac

