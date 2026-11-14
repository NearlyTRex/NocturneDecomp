; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_initFly_FUN_004a7560(CFlies *this_ptr,int fly_index)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   fly_index
;
; XREF[2]:
;   core_flies.cpp_CFlies_process_FUN_004a6c30 at 004a6ed3
;   core_flies.cpp_CFlies_setup_FUN_004a6b50 at 004a6b6d
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_flies.cpp_FUN_004a7660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7560
        ;   Label: core_flies.cpp_CFlies_initFly_FUN_004a7560
    PUSH ESI                            ; 004a7561
    PUSH EDI                            ; 004a7562
    PUSH EBP                            ; 004a7563
    SUB ESP,0x3c                        ; 004a7564
    MOV EBX,dword ptr [ESP + 0x54]      ; 004a7567
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a756b
    PUSH 0x0                            ; 004a7572
    SUB EAX,EBX                         ; 004a7574
    MOV EDX,dword ptr [ESP + 0x54]      ; 004a7576
    SHL EAX,0x2                         ; 004a757a
    LEA ESI,[ESP + 0x28]                ; 004a757d
    ADD EBX,EAX                         ; 004a7581
    MOV EAX,dword ptr [ESP + 0x54]      ; 004a7583
    SHL EBX,0x2                         ; 004a7587
    ADD EAX,0x2c4                       ; 004a758a
    PUSH EDX                            ; 004a758f
    ADD EAX,EBX                         ; 004a7590
    LEA EDI,[ESP + 0x8]                 ; 004a7592
    MOV dword ptr [ESP + 0x38],EAX      ; 004a7596
    CALL core_flies.cpp_FUN_004a7660    ; 004a759a
        ;   XREF to: 004a7660 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_FUN_004a7660()
    ADD ESP,0x8                         ; 004a759f
    LEA ESI,[ESP + 0x24]                ; 004a75a2
    MOV EBX,dword ptr [ESP + 0x30]      ; 004a75a6
    MOV EAX,ESP                         ; 004a75aa
    ADD EBX,0x4                         ; 004a75ac
    MOVSD ES:EDI,ESI                    ; 004a75af
    MOVSD ES:EDI,ESI                    ; 004a75b0
    MOVSD ES:EDI,ESI                    ; 004a75b1
    CMP EBX,EAX                         ; 004a75b2
    JNZ 0x004a763d                      ; 004a75b4
        ;   XREF to: 004a763d (CONDITIONAL_JUMP)  ; LAB_004a763d
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a75ba
        ;   Label: LAB_004a75ba
    ADD EAX,0x4                         ; 004a75be
    MOV EBX,dword ptr [ESP + 0x30]      ; 004a75c1
    MOV EBP,EAX                         ; 004a75c5
    ADD EAX,0x24                        ; 004a75c7
    ADD EBX,0x10                        ; 004a75ca
    MOV dword ptr [ESP + 0x34],EAX      ; 004a75cd
    PUSH EBP                            ; 004a75d1
        ;   Label: LAB_004a75d1
    MOV ECX,dword ptr [ESP + 0x54]      ; 004a75d2
    PUSH ECX                            ; 004a75d6
    LEA ESI,[ESP + 0x20]                ; 004a75d7
    LEA EDI,[ESP + 0x14]                ; 004a75db
    CALL core_flies.cpp_FUN_004a7660    ; 004a75df
        ;   XREF to: 004a7660 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_FUN_004a7660()
    LEA ESI,[ESP + 0x20]                ; 004a75e4
    ADD ESP,0x8                         ; 004a75e8
    LEA EAX,[ESP + 0xc]                 ; 004a75eb
    MOVSD ES:EDI,ESI                    ; 004a75ef
    MOVSD ES:EDI,ESI                    ; 004a75f0
    MOVSD ES:EDI,ESI                    ; 004a75f1
    CMP EBX,EAX                         ; 004a75f2
    JZ 0x004a760a                       ; 004a75f4
        ;   XREF to: 004a760a (CONDITIONAL_JUMP)  ; LAB_004a760a
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a75f6
    MOV dword ptr [EBX],EAX             ; 004a75fa
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a75fc
    MOV dword ptr [EBX + 0x4],EAX       ; 004a7600
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a7603
    MOV dword ptr [EBX + 0x8],EAX       ; 004a7607
    MOV ESI,dword ptr [ESP + 0x34]      ; 004a760a
        ;   Label: LAB_004a760a
    ADD EBP,0xc                         ; 004a760e
    ADD EBX,0xc                         ; 004a7611
    CMP EBP,ESI                         ; 004a7614
    JNZ 0x004a75d1                      ; 004a7616
        ;   XREF to: 004a75d1 (CONDITIONAL_JUMP)  ; LAB_004a75d1
    PUSH 0x3f800000                     ; 004a7618
    PUSH 0x0                            ; 004a761d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004a761f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x40],EAX      ; 004a7624
    FLD float ptr [ESP + 0x40]          ; 004a7628
    ADD ESP,0x8                         ; 004a762c
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a762f
    FSTP float ptr [EAX]                ; 004a7633
    ADD ESP,0x3c                        ; 004a7635
    POP EBP                             ; 004a7638
    POP EDI                             ; 004a7639
    POP ESI                             ; 004a763a
    POP EBX                             ; 004a763b
    RET                                 ; 004a763c
    MOV EAX,dword ptr [ESP]             ; 004a763d
        ;   Label: LAB_004a763d
    MOV dword ptr [EBX],EAX             ; 004a7640
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a7642
    MOV dword ptr [EBX + 0x4],EAX       ; 004a7646
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a7649
    MOV dword ptr [EBX + 0x8],EAX       ; 004a764d
    JMP 0x004a75ba                      ; 004a7650
        ;   XREF to: 004a75ba (UNCONDITIONAL_JUMP)  ; LAB_004a75ba

