; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_process_FUN_00576530(CTrap *this_ptr,float delta_time)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CWerewolfClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576530
        ;   Label: core_trap.cpp_CTrap_process_FUN_00576530
    PUSH ESI                            ; 00576531
    PUSH EDI                            ; 00576532
    PUSH EBP                            ; 00576533
    SUB ESP,0xb4                        ; 00576534
    MOV EBP,dword ptr [ESP + 0xc8]      ; 0057653a
    CMP dword ptr [EBP + 0x430],0x0     ; 00576541
    JNZ 0x0057659c                      ; 00576548
        ;   XREF to: 0057659c (CONDITIONAL_JUMP)  ; LAB_0057659c
    MOV ECX,dword ptr [EBP + 0x434]     ; 0057654a
    TEST ECX,ECX                        ; 00576550
    JNZ 0x005765a7                      ; 00576552
        ;   XREF to: 005765a7 (CONDITIONAL_JUMP)  ; LAB_005765a7
    LEA ESI,[ESP + 0x64]                ; 00576554
        ;   Label: LAB_00576554
    PUSH EBP                            ; 00576558
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00576559
    LEA EDI,[ESP + 0x80]                ; 0057655f
    XOR EBX,EBX                         ; 00576566
    CALL dword ptr [EAX + 0x24]         ; 00576568
    MOV ECX,0x6                         ; 0057656b
    ADD ESP,0x4                         ; 00576570
    LEA ESI,[ESP + 0x64]                ; 00576573
    MOV dword ptr [ESP + 0xb0],EBX      ; 00576577
    MOV dword ptr [ESP + 0xac],EBX      ; 0057657e
    MOVSD.REP ES:EDI,ESI                ; 00576585
    MOV EBX,dword ptr [0x0061b5a8]      ; 00576587 | g_CDemonSetPtr
        ;   Label: LAB_00576587
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0057658d
    CMP EAX,dword ptr [EBX + 0x150fec]  ; 00576594
    JL 0x005765fc                       ; 0057659a
        ;   XREF to: 005765fc (CONDITIONAL_JUMP)  ; LAB_005765fc
    ADD ESP,0xb4                        ; 0057659c
        ;   Label: LAB_0057659c
    POP EBP                             ; 005765a2
    POP EDI                             ; 005765a3
    POP ESI                             ; 005765a4
    POP EBX                             ; 005765a5
    RET                                 ; 005765a6
    PUSH ECX                            ; 005765a7
        ;   Label: LAB_005765a7
    MOV EBX,dword ptr [ECX + 0x2b0]     ; 005765a8
    CALL dword ptr [EBX + 0x114]        ; 005765ae
    ADD ESP,0x4                         ; 005765b4
    TEST EAX,EAX                        ; 005765b7
    JZ 0x0057659c                       ; 005765b9
        ;   XREF to: 0057659c (CONDITIONAL_JUMP)  ; LAB_0057659c
    MOV EAX,dword ptr [EBP + 0x434]     ; 005765bb
    MOV dword ptr [EAX + 0x10b24],0x0   ; 005765c1
    MOV dword ptr [EBP + 0x434],0x0     ; 005765cb
    JMP 0x00576554                      ; 005765d5
        ;   XREF to: 00576554 (UNCONDITIONAL_JUMP)  ; LAB_00576554
    MOV EDX,dword ptr [ESP + 0xb0]      ; 005765da
        ;   Label: LAB_005765da
    MOV EAX,dword ptr [ESP + 0xac]      ; 005765e1
    INC EDX                             ; 005765e8
    ADD EAX,0x4                         ; 005765e9
    MOV dword ptr [ESP + 0xb0],EDX      ; 005765ec
    MOV dword ptr [ESP + 0xac],EAX      ; 005765f3
    JMP 0x00576587                      ; 005765fa
        ;   XREF to: 00576587 (UNCONDITIONAL_JUMP)  ; LAB_00576587
    MOV EDX,dword ptr [ESP + 0xac]      ; 005765fc
        ;   Label: LAB_005765fc
    MOV EAX,[0x02662d54]                ; 00576603 | g_CWerewolfClassInfo.name_hash
    ADD EBX,EDX                         ; 00576608
    PUSH EAX                            ; 0057660a
    MOV ECX,dword ptr [EBX + 0x150ff0]  ; 0057660b
    PUSH ECX                            ; 00576611
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00576612
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 00576617
    ADD ESP,0x8                         ; 00576619
    TEST EAX,EAX                        ; 0057661c
    JZ 0x005765da                       ; 0057661e
        ;   XREF to: 005765da (CONDITIONAL_JUMP)  ; LAB_005765da
    CMP dword ptr [EAX + 0x10b24],0x0   ; 00576620
    JNZ 0x005765da                      ; 00576627
        ;   XREF to: 005765da (CONDITIONAL_JUMP)  ; LAB_005765da
    LEA ESI,[ESP + 0x3c]                ; 00576629
    PUSH ESI                            ; 0057662d
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 0057662e
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00576633
    LEA ESI,[ESP + 0x3c]                ; 00576636
    PUSH ESI                            ; 0057663a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057663b
    PUSH EBX                            ; 00576641
    CALL dword ptr [EAX + 0x44]         ; 00576642
    ADD ESP,0x8                         ; 00576645
    FLD float ptr [EBP + 0x24]          ; 00576648
    FADD float ptr [ESP + 0x8c]         ; 0057664b
    FCOMP float ptr [EBX + 0x24]        ; 00576652
    FNSTSW AX                           ; 00576655
    SAHF                                ; 00576657
    JC 0x005765da                       ; 00576658
        ;   XREF to: 005765da (CONDITIONAL_JUMP)  ; LAB_005765da
    FLD float ptr [EBX + 0x24]          ; 0057665a
    FADD float ptr [ESP + 0x54]         ; 0057665d
    FLD float ptr [EBP + 0x24]          ; 00576661
    FADD float ptr [ESP + 0x80]         ; 00576664
    FCOMPP                              ; 0057666b
    FNSTSW AX                           ; 0057666d
    SAHF                                ; 0057666f
    JA 0x005765da                       ; 00576670
        ;   XREF to: 005765da (CONDITIONAL_JUMP)  ; LAB_005765da
    LEA ESI,[EBX + 0x20]                ; 00576676
    PUSH ESI                            ; 00576679
    PUSH EBP                            ; 0057667a
    LEA ESI,[ESP + 0x9c]                ; 0057667b
    LEA EDI,[ESP + 0xa8]                ; 00576682
    CALL core_actor.cpp_FUN_00408de0    ; 00576689
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x9c]                ; 0057668e
    ADD ESP,0x8                         ; 00576695
    MOVSD ES:EDI,ESI                    ; 00576698
    MOVSD ES:EDI,ESI                    ; 00576699
    MOVSD ES:EDI,ESI                    ; 0057669a
    FLD float ptr [ESP + 0xa0]          ; 0057669b
    FADD float ptr [ESP + 0x58]         ; 005766a2
    FCOMP float ptr [ESP + 0x7c]        ; 005766a6
    FNSTSW AX                           ; 005766aa
    SAHF                                ; 005766ac
    JC 0x005765da                       ; 005766ad
        ;   XREF to: 005765da (CONDITIONAL_JUMP)  ; LAB_005765da
    FLD float ptr [ESP + 0xa0]          ; 005766b3
    FSUB float ptr [ESP + 0x58]         ; 005766ba
    FCOMP float ptr [ESP + 0x88]        ; 005766be
    FNSTSW AX                           ; 005766c5
    SAHF                                ; 005766c7
    JA 0x005765da                       ; 005766c8
        ;   XREF to: 005765da (CONDITIONAL_JUMP)  ; LAB_005765da
    FLD float ptr [ESP + 0xa8]          ; 005766ce
    FADD float ptr [ESP + 0x58]         ; 005766d5
    FCOMP float ptr [ESP + 0x84]        ; 005766d9
    FNSTSW AX                           ; 005766e0
    SAHF                                ; 005766e2
    JC 0x005765da                       ; 005766e3
        ;   XREF to: 005765da (CONDITIONAL_JUMP)  ; LAB_005765da
    FLD float ptr [ESP + 0xa8]          ; 005766e9
    FSUB float ptr [ESP + 0x58]         ; 005766f0
    FCOMP float ptr [ESP + 0x90]        ; 005766f4
    FNSTSW AX                           ; 005766fb
    SAHF                                ; 005766fd
    JA 0x005765da                       ; 005766fe
        ;   XREF to: 005765da (CONDITIONAL_JUMP)  ; LAB_005765da
    MOV dword ptr [EBP + 0x434],EBX     ; 00576704
    MOV EAX,ESP                         ; 0057670a
    MOV dword ptr [EBX + 0x10b28],0x40000000 ; 0057670c
    PUSH EAX                            ; 00576716
    MOV dword ptr [EBX + 0x10b24],EBP   ; 00576717
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0057671d
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00576722
    MOV EAX,ESP                         ; 00576725
    MOV EDI,0x41200000                  ; 00576727
    PUSH EAX                            ; 0057672c
    MOV dword ptr [ESP + 0x8],EDI       ; 0057672d
    PUSH EBX                            ; 00576731
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 00576732
    CALL dword ptr [ESI + 0x110]        ; 00576738
    ADD ESP,0x8                         ; 0057673e
    ADD ESP,0xb4                        ; 00576741
    POP EBP                             ; 00576747
    POP EDI                             ; 00576748
    POP ESI                             ; 00576749
    POP EBX                             ; 0057674a
    RET                                 ; 0057674b

