; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0460(int param_1)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004ec7fe at 004ec805
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0460
        ;   Label: engine_mini3d.cpp_FUN_004f0460
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f0461
    SHL EAX,0x5                         ; 004f0465
    ADD EAX,0x20                        ; 004f0468
    PUSH EAX                            ; 004f046b
    CALL crt_memory.c_malloc_FUN_005a3650 ; 004f046c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 004f0471
    MOV EBX,EAX                         ; 004f0474
    TEST EAX,EAX                        ; 004f0476
    JZ 0x004f0488                       ; 004f0478
        ;   XREF to: 004f0488 (CONDITIONAL_JUMP)  ; LAB_004f0488
    LEA EAX,[EBX + 0x20]                ; 004f047a
    AND AL,0xe0                         ; 004f047d
    MOV BH,AL                           ; 004f047f
    SUB BH,BL                           ; 004f0481
    MOV byte ptr [EAX + -0x1],BH        ; 004f0483
    POP EBX                             ; 004f0486
    RET                                 ; 004f0487
    PUSH ESI                            ; 004f0488
        ;   Label: LAB_004f0488
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f0489
    PUSH ESI                            ; 004f048d
    MOV EDX,0x5c8199                    ; 004f048e
    MOV ECX,0xddf                       ; 004f0493
    PUSH 0x5c81ae                       ; 004f0498
    MOV dword ptr [0x01d71de0],EDX      ; 004f049d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f04a3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f04a9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004f04ae
    POP ESI                             ; 004f04b1
    LEA EAX,[EBX + 0x20]                ; 004f04b2
    AND AL,0xe0                         ; 004f04b5
    MOV BH,AL                           ; 004f04b7
    SUB BH,BL                           ; 004f04b9
    MOV byte ptr [EAX + -0x1],BH        ; 004f04bb
    POP EBX                             ; 004f04be
    RET                                 ; 004f04bf

