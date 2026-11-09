; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_004292e0(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_chain.cpp_factoryFuncChain_FUN_004292b0 at 004292c3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004292e0
        ;   Label: core_chain.cpp_CChain_ctor_FUN_004292e0
    PUSH EDI                            ; 004292e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004292e2
    PUSH EDX                            ; 004292e6
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004292e7
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004292ec
    PUSH 0x5dd1d0                       ; 004292ef
    PUSH 0x14                           ; 004292f4
    ADD EAX,0x28c                       ; 004292f6
    PUSH EAX                            ; 004292fb
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004292fc
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    LEA EDX,[EAX + 0xfffffd74]          ; 00429301
    MOV dword ptr [EDX + 0x154],0x5dd0f4 ; 00429307
    MOV dword ptr [EDX + 0x158],0xa     ; 00429311
    MOV dword ptr [EDX + 0x15c],0x40a00000 ; 0042931b
    MOV dword ptr [EDX + 0x55c],0x3f800000 ; 00429325
    MOV dword ptr [EDX + 0x560],0x3f000000 ; 0042932f
    MOV dword ptr [EDX + 0x564],0x42000000 ; 00429339
    MOV ESI,0x5b7ed6                    ; 00429343
    MOV dword ptr [EDX + 0x568],0x3f666666 ; 00429348
    ADD ESP,0xc                         ; 00429352
    MOV dword ptr [EDX + 0x164],0x0     ; 00429355
    LEA EDI,[EDX + 0x174]               ; 0042935f
    MOV dword ptr [EDX + 0x168],0x0     ; 00429365
    PUSH EDI                            ; 0042936f
    MOV AL,byte ptr [ESI]               ; 00429370
        ;   Label: LAB_00429370
    MOV byte ptr [EDI],AL               ; 00429372
    CMP AL,0x0                          ; 00429374
    JZ 0x00429388                       ; 00429376
        ;   XREF to: 00429388 (CONDITIONAL_JUMP)  ; LAB_00429388
    MOV AL,byte ptr [ESI + 0x1]         ; 00429378
    ADD ESI,0x2                         ; 0042937b
    MOV byte ptr [EDI + 0x1],AL         ; 0042937e
    ADD EDI,0x2                         ; 00429381
    CMP AL,0x0                          ; 00429384
    JNZ 0x00429370                      ; 00429386
        ;   XREF to: 00429370 (CONDITIONAL_JUMP)  ; LAB_00429370
    POP EDI                             ; 00429388
        ;   Label: LAB_00429388
    MOV dword ptr [EDX + 0x16c],0xd     ; 00429389
    MOV dword ptr [EDX + 0x170],0x0     ; 00429393
    MOV ESI,0x5b7ee4                    ; 0042939d
    MOV dword ptr [EDX + 0xfc],0x1      ; 004293a2
    LEA EDI,[EDX + 0x1b4]               ; 004293ac
    MOV dword ptr [EDX + 0xf8],0x0      ; 004293b2
    PUSH EDI                            ; 004293bc
    MOV AL,byte ptr [ESI]               ; 004293bd
        ;   Label: LAB_004293bd
    MOV byte ptr [EDI],AL               ; 004293bf
    CMP AL,0x0                          ; 004293c1
    JZ 0x004293d5                       ; 004293c3
        ;   XREF to: 004293d5 (CONDITIONAL_JUMP)  ; LAB_004293d5
    MOV AL,byte ptr [ESI + 0x1]         ; 004293c5
    ADD ESI,0x2                         ; 004293c8
    MOV byte ptr [EDI + 0x1],AL         ; 004293cb
    ADD EDI,0x2                         ; 004293ce
    CMP AL,0x0                          ; 004293d1
    JNZ 0x004293bd                      ; 004293d3
        ;   XREF to: 004293bd (CONDITIONAL_JUMP)  ; LAB_004293bd
    POP EDI                             ; 004293d5
        ;   Label: LAB_004293d5
    MOV ESI,0x5b7ef3                    ; 004293d6
    LEA EDI,[EDX + 0x21c]               ; 004293db
    PUSH EDI                            ; 004293e1
    MOV AL,byte ptr [ESI]               ; 004293e2
        ;   Label: LAB_004293e2
    MOV byte ptr [EDI],AL               ; 004293e4
    CMP AL,0x0                          ; 004293e6
    JZ 0x004293fa                       ; 004293e8
        ;   XREF to: 004293fa (CONDITIONAL_JUMP)  ; LAB_004293fa
    MOV AL,byte ptr [ESI + 0x1]         ; 004293ea
    ADD ESI,0x2                         ; 004293ed
    MOV byte ptr [EDI + 0x1],AL         ; 004293f0
    ADD EDI,0x2                         ; 004293f3
    CMP AL,0x0                          ; 004293f6
    JNZ 0x004293e2                      ; 004293f8
        ;   XREF to: 004293e2 (CONDITIONAL_JUMP)  ; LAB_004293e2
    POP EDI                             ; 004293fa
        ;   Label: LAB_004293fa
    MOV dword ptr [EDX + 0x574],0x0     ; 004293fb
    MOV EAX,EDX                         ; 00429405
    MOV dword ptr [EDX + 0x288],0x1     ; 00429407
    POP EDI                             ; 00429411
    POP ESI                             ; 00429412
    RET                                 ; 00429413

