; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_FUN_005595a0(CDemonSet *this_ptr,CVector3f *point)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_actor.cpp_FUN_0040c870 at 0040c8eb
;   core_charactr.cpp_FUN_00434790 at 00434925
;
; Referenced Globals:
;   undefined4 DAT_005f0fc9
;   CWater* g_CWaterPtr = 02c8afb0
;   undefined4 g_CWaterInstance.field4_0x4
;   undefined4 g_CWaterActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005595a0
        ;   Label: core_setcolid.cpp_FUN_005595a0
    PUSH ESI                            ; 005595a1
    PUSH EDI                            ; 005595a2
    PUSH EBP                            ; 005595a3
    SUB ESP,0x4c                        ; 005595a4
    MOV EAX,[0x00625c90]                ; 005595a7 | g_CWaterPtr
    TEST dword ptr [EAX + 0x4],0x7fffffff ; 005595ac | g_CWaterInstance.field4_0x4
    JZ 0x005595c4                       ; 005595b3
        ;   XREF to: 005595c4 (CONDITIONAL_JUMP)  ; LAB_005595c4
    MOV EBX,dword ptr [ESP + 0x64]      ; 005595b5
    FLD float ptr [EBX + 0x4]           ; 005595b9
    FCOMP float ptr [EAX + 0x4]         ; 005595bc | g_CWaterInstance.field4_0x4
    FNSTSW AX                           ; 005595bf
    SAHF                                ; 005595c1
    JC 0x0055961b                       ; 005595c2
        ;   XREF to: 0055961b (CONDITIONAL_JUMP)  ; LAB_0055961b
    MOV EAX,dword ptr [ESP + 0x60]      ; 005595c4
        ;   Label: LAB_005595c4
    XOR ECX,ECX                         ; 005595c8
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 005595ca
    MOV dword ptr [ESP + 0x48],ECX      ; 005595d0
    TEST EBX,EBX                        ; 005595d4
    JLE 0x0055960f                      ; 005595d6
        ;   XREF to: 0055960f (CONDITIONAL_JUMP)  ; LAB_0055960f
    MOV EBP,EAX                         ; 005595d8
    MOV EAX,[0x02c97380]                ; 005595da | g_CWaterActorClassInfo.name_hash
        ;   Label: LAB_005595da
    PUSH EAX                            ; 005595df
    MOV EDX,dword ptr [EBP + 0x14d168]  ; 005595e0
    PUSH EDX                            ; 005595e6
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005595e7
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 005595ec
    ADD ESP,0x8                         ; 005595ee
    TEST EAX,EAX                        ; 005595f1
    JNZ 0x00559622                      ; 005595f3
        ;   XREF to: 00559622 (CONDITIONAL_JUMP)  ; LAB_00559622
    MOV ESI,dword ptr [ESP + 0x48]      ; 005595f5
        ;   Label: LAB_005595f5
    MOV EBX,dword ptr [ESP + 0x60]      ; 005595f9
    ADD EBP,0x4                         ; 005595fd
    INC ESI                             ; 00559600
    MOV EDI,dword ptr [EBX + 0x14d164]  ; 00559601
    MOV dword ptr [ESP + 0x48],ESI      ; 00559607
    CMP ESI,EDI                         ; 0055960b
    JL 0x005595da                       ; 0055960d
        ;   XREF to: 005595da (CONDITIONAL_JUMP)  ; LAB_005595da
    XOR ESI,ESI                         ; 0055960f
        ;   Label: LAB_0055960f
    MOV EAX,ESI                         ; 00559611
        ;   Label: LAB_00559611
    ADD ESP,0x4c                        ; 00559613
    POP EBP                             ; 00559616
    POP EDI                             ; 00559617
    POP ESI                             ; 00559618
    POP EBX                             ; 00559619
    RET                                 ; 0055961a
    MOV ESI,0x1                         ; 0055961b
        ;   Label: LAB_0055961b
    JMP 0x00559611                      ; 00559620
        ;   XREF to: 00559611 (UNCONDITIONAL_JUMP)  ; LAB_00559611
    MOV ECX,dword ptr [ESP + 0x64]      ; 00559622
        ;   Label: LAB_00559622
    PUSH ECX                            ; 00559626
    PUSH EAX                            ; 00559627
    LEA ESI,[ESP + 0x44]                ; 00559628
    LEA EDI,[ESP + 0x38]                ; 0055962c
    CALL core_actor.cpp_FUN_00408bb0    ; 00559630
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x44]                ; 00559635
    ADD ESP,0x8                         ; 00559639
    MOVSD ES:EDI,ESI                    ; 0055963c
    MOVSD ES:EDI,ESI                    ; 0055963d
    MOVSD ES:EDI,ESI                    ; 0055963e
    PUSH EBX                            ; 0055963f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00559640
    LEA ESI,[ESP + 0x4]                 ; 00559646
    LEA EDI,[ESP + 0x1c]                ; 0055964a
    CALL dword ptr [EAX + 0x1c]         ; 0055964e
    MOV ECX,0x6                         ; 00559651
    LEA ESI,[ESP + 0x4]                 ; 00559656
    ADD ESP,0x4                         ; 0055965a
    MOVSD.REP ES:EDI,ESI                ; 0055965d
    FLD float ptr [ESP + 0x1c]          ; 0055965f
    FADD float ptr [0x005f0fc9]         ; 00559663 | DAT_005f0fc9
    FLD float ptr [ESP + 0x18]          ; 00559669
    FXCH                                ; 0055966d
    FSTP float ptr [ESP + 0x1c]         ; 0055966f
    FCOMP float ptr [ESP + 0x30]        ; 00559673
    FNSTSW AX                           ; 00559677
    SAHF                                ; 00559679
    JA 0x005595f5                       ; 0055967a
        ;   XREF to: 005595f5 (CONDITIONAL_JUMP)  ; LAB_005595f5
    FLD float ptr [ESP + 0x1c]          ; 00559680
    FCOMP float ptr [ESP + 0x34]        ; 00559684
    FNSTSW AX                           ; 00559688
    SAHF                                ; 0055968a
    JA 0x005595f5                       ; 0055968b
        ;   XREF to: 005595f5 (CONDITIONAL_JUMP)  ; LAB_005595f5
    FLD float ptr [ESP + 0x20]          ; 00559691
    FCOMP float ptr [ESP + 0x38]        ; 00559695
    FNSTSW AX                           ; 00559699
    SAHF                                ; 0055969b
    JA 0x005595f5                       ; 0055969c
        ;   XREF to: 005595f5 (CONDITIONAL_JUMP)  ; LAB_005595f5
    FLD float ptr [ESP + 0x24]          ; 005596a2
    FCOMP float ptr [ESP + 0x30]        ; 005596a6
    FNSTSW AX                           ; 005596aa
    SAHF                                ; 005596ac
    JC 0x005595f5                       ; 005596ad
        ;   XREF to: 005595f5 (CONDITIONAL_JUMP)  ; LAB_005595f5
    FLD float ptr [ESP + 0x28]          ; 005596b3
    FCOMP float ptr [ESP + 0x34]        ; 005596b7
    FNSTSW AX                           ; 005596bb
    SAHF                                ; 005596bd
    JC 0x005595f5                       ; 005596be
        ;   XREF to: 005595f5 (CONDITIONAL_JUMP)  ; LAB_005595f5
    FLD float ptr [ESP + 0x2c]          ; 005596c4
    FCOMP float ptr [ESP + 0x38]        ; 005596c8
    FNSTSW AX                           ; 005596cc
    SAHF                                ; 005596ce
    JC 0x005595f5                       ; 005596cf
        ;   XREF to: 005595f5 (CONDITIONAL_JUMP)  ; LAB_005595f5
    MOV ESI,0x1                         ; 005596d5
    MOV EAX,ESI                         ; 005596da
    ADD ESP,0x4c                        ; 005596dc
    POP EBP                             ; 005596df
    POP EDI                             ; 005596e0
    POP ESI                             ; 005596e1
    POP EBX                             ; 005596e2
    RET                                 ; 005596e3

