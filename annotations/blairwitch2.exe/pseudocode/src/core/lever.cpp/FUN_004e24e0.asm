; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lever_cpp_FUN_004e24e0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_hero.cpp_FUN_004cf2b0 at 004cf3d2
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e24e0
        ;   Label: core_lever.cpp_FUN_004e24e0
    PUSH ESI                            ; 004e24e1
    PUSH EDI                            ; 004e24e2
    PUSH EBP                            ; 004e24e3
    MOV EBP,ESP                         ; 004e24e4
    SUB ESP,0x18                        ; 004e24e6
    AND ESP,0xfffffff8                  ; 004e24e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e24ec
    CMP dword ptr [EBX + 0x968],0x2     ; 004e24ef
    JNZ 0x004e2504                      ; 004e24f6
        ;   XREF to: 004e2504 (CONDITIONAL_JUMP)  ; LAB_004e2504
    MOV EAX,0x1                         ; 004e24f8
        ;   Label: LAB_004e24f8
    MOV ESP,EBP                         ; 004e24fd
    POP EBP                             ; 004e24ff
    POP EDI                             ; 004e2500
    POP ESI                             ; 004e2501
    POP EBX                             ; 004e2502
    RET                                 ; 004e2503
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e2504
        ;   Label: LAB_004e2504
    PUSH ECX                            ; 004e2507
    PUSH EBX                            ; 004e2508
    LEA ESI,[ESP + 0x14]                ; 004e2509
    LEA EDI,[ESP + 0x8]                 ; 004e250d
    CALL core_actor.cpp_FUN_00408de0    ; 004e2511
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x14]                ; 004e2516
    ADD ESP,0x8                         ; 004e251a
    MOVSD ES:EDI,ESI                    ; 004e251d
    MOVSD ES:EDI,ESI                    ; 004e251e
    MOVSD ES:EDI,ESI                    ; 004e251f
    CMP dword ptr [EBX + 0x968],0x0     ; 004e2520
    JNZ 0x004e2536                      ; 004e2527
        ;   XREF to: 004e2536 (CONDITIONAL_JUMP)  ; LAB_004e2536
    FLD float ptr [ESP + 0x8]           ; 004e2529
    FLDZ                                ; 004e252d
    FCOMPP                              ; 004e252f
    FNSTSW AX                           ; 004e2531
    SAHF                                ; 004e2533
    JC 0x004e24f8                       ; 004e2534
        ;   XREF to: 004e24f8 (CONDITIONAL_JUMP)  ; LAB_004e24f8
    MOV EDI,dword ptr [EBX + 0x968]     ; 004e2536
        ;   Label: LAB_004e2536
    CMP EDI,0x1                         ; 004e253c
    JNZ 0x004e2557                      ; 004e253f
        ;   XREF to: 004e2557 (CONDITIONAL_JUMP)  ; LAB_004e2557
    FLD float ptr [ESP + 0x8]           ; 004e2541
    FLDZ                                ; 004e2545
    FCOMPP                              ; 004e2547
    FNSTSW AX                           ; 004e2549
    SAHF                                ; 004e254b
    JBE 0x004e2557                      ; 004e254c
        ;   XREF to: 004e2557 (CONDITIONAL_JUMP)  ; LAB_004e2557
    MOV EAX,EDI                         ; 004e254e
    MOV ESP,EBP                         ; 004e2550
    POP EBP                             ; 004e2552
    POP EDI                             ; 004e2553
    POP ESI                             ; 004e2554
    POP EBX                             ; 004e2555
    RET                                 ; 004e2556
    XOR EAX,EAX                         ; 004e2557
        ;   Label: LAB_004e2557
    MOV ESP,EBP                         ; 004e2559
    POP EBP                             ; 004e255b
    POP EDI                             ; 004e255c
    POP ESI                             ; 004e255d
    POP EBX                             ; 004e255e
    RET                                 ; 004e255f

