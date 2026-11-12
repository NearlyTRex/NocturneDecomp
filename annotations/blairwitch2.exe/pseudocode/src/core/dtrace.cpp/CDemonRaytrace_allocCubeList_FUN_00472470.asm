; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00472470(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_calloc_FUN_005b98d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472470
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00472470
    PUSH EBP                            ; 00472471
    MOV EBX,dword ptr [ESP + 0xc]       ; 00472472
    MOV EAX,dword ptr [EBX + 0x40]      ; 00472476
    IMUL EAX,dword ptr [EBX + 0x44]     ; 00472479
    IMUL EAX,dword ptr [EBX + 0x48]     ; 0047247d
    PUSH EAX                            ; 00472481
    PUSH 0x58                           ; 00472482
    CALL crt_memory.c_calloc_FUN_005b98d0 ; 00472484
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_calloc_FUN_005b98d0()
    ADD ESP,0x8                         ; 00472489
    MOV dword ptr [EBX + 0x4c],EAX      ; 0047248c
    TEST EAX,EAX                        ; 0047248f
    JZ 0x00472496                       ; 00472491
        ;   XREF to: 00472496 (CONDITIONAL_JUMP)  ; LAB_00472496
    POP EBP                             ; 00472493
    POP EBX                             ; 00472494
    RET                                 ; 00472495
    PUSH EDI                            ; 00472496
        ;   Label: LAB_00472496
    MOV EDI,0x5d194b                    ; 00472497
    MOV EBP,0x88                        ; 0047249c
    PUSH 0x5d195e                       ; 004724a1
    MOV dword ptr [0x01d046a0],EDI      ; 004724a6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004724ac | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004724b2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004724b7
    POP EDI                             ; 004724ba
    POP EBP                             ; 004724bb
    POP EBX                             ; 004724bc
    RET                                 ; 004724bd

