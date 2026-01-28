; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_crate_cpp_FUN_00448660(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448660
        ;   Label: core_crate.cpp_FUN_00448660
    SUB ESP,0x20                        ; 00448661
    MOV EBX,dword ptr [ESP + 0x28]      ; 00448664
    CMP dword ptr [EBX + 0x2d4],0x0     ; 00448668
    JNZ 0x00448801                      ; 0044866f
        ;   XREF to: 00448801 (CONDITIONAL_JUMP)  ; LAB_00448801
    LEA EDX,[EBX + 0x20]                ; 00448675
    LEA EAX,[EBX + 0xe0]                ; 00448678
    FLD float ptr [EAX]                 ; 0044867e
    FADD float ptr [EDX]                ; 00448680
    FSTP float ptr [EDX]                ; 00448682
    FLD float ptr [EAX + 0x4]           ; 00448684
    FADD float ptr [EDX + 0x4]          ; 00448687
    FSTP float ptr [EDX + 0x4]          ; 0044868a
    FLD float ptr [EAX + 0x8]           ; 0044868d
    FADD float ptr [EDX + 0x8]          ; 00448690
    FSTP float ptr [EDX + 0x8]          ; 00448693
    MOV dword ptr [EAX + 0x8],0x0       ; 00448696
    LEA EDX,[EBX + 0x30]                ; 0044869d
    MOV ECX,dword ptr [EAX + 0x8]       ; 004486a0
    MOV dword ptr [EAX + 0x4],ECX       ; 004486a3
    MOV ECX,dword ptr [EAX + 0x4]       ; 004486a6
    MOV dword ptr [EAX],ECX             ; 004486a9
    LEA EAX,[EBX + 0xec]                ; 004486ab
    FLD float ptr [EAX]                 ; 004486b1
    FADD float ptr [EDX]                ; 004486b3
    FSTP float ptr [EDX]                ; 004486b5
    FLD float ptr [EAX + 0x4]           ; 004486b7
    FADD float ptr [EDX + 0x4]          ; 004486ba
    FSTP float ptr [EDX + 0x4]          ; 004486bd
    FLD float ptr [EAX + 0x8]           ; 004486c0
    FADD float ptr [EDX + 0x8]          ; 004486c3
    FSTP float ptr [EDX + 0x8]          ; 004486c6
    MOV dword ptr [EAX + 0x8],0x0       ; 004486c9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004486d0
    MOV dword ptr [EAX + 0x4],EDX       ; 004486d3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004486d6
    MOV dword ptr [EAX],EDX             ; 004486d9
    FLD float ptr [EBX + 0x2e0]         ; 004486db
    FCOMP float ptr [EBX + 0x20]        ; 004486e1
    FNSTSW AX                           ; 004486e4
    SAHF                                ; 004486e6
    JNZ 0x004486fb                      ; 004486e7
        ;   XREF to: 004486fb (CONDITIONAL_JUMP)  ; LAB_004486fb
    FLD float ptr [EBX + 0x2e4]         ; 004486e9
    FCOMP float ptr [EBX + 0x24]        ; 004486ef
    FNSTSW AX                           ; 004486f2
    SAHF                                ; 004486f4
    JZ 0x00448810                       ; 004486f5
        ;   XREF to: 00448810 (CONDITIONAL_JUMP)  ; LAB_00448810
    PUSH 0x0                            ; 004486fb
        ;   Label: LAB_004486fb
    MOV EAX,dword ptr [EBX + 0x154]     ; 004486fd
    PUSH dword ptr [EBX + 0x2d8]        ; 00448703
    PUSH EBX                            ; 00448709
    CALL dword ptr [EAX + 0x38]         ; 0044870a
    MOV dword ptr [ESP + 0x28],EAX      ; 0044870d
    LEA EDX,[EBX + 0x2e0]               ; 00448711
    FLD float ptr [ESP + 0x28]          ; 00448717
    ADD ESP,0xc                         ; 0044871b
    LEA EAX,[EBX + 0x20]                ; 0044871e
    FSTP float ptr [ESP + 0x18]         ; 00448721
    CMP EDX,EAX                         ; 00448725
    JZ 0x00448739                       ; 00448727
        ;   XREF to: 00448739 (CONDITIONAL_JUMP)  ; LAB_00448739
    MOV ECX,dword ptr [EAX]             ; 00448729
    MOV dword ptr [EDX],ECX             ; 0044872b
    MOV ECX,dword ptr [EAX + 0x4]       ; 0044872d
    MOV dword ptr [EDX + 0x4],ECX       ; 00448730
    MOV ECX,dword ptr [EAX + 0x8]       ; 00448733
    MOV dword ptr [EDX + 0x8],ECX       ; 00448736
    LEA EDX,[EBX + 0x2ec]               ; 00448739
        ;   Label: LAB_00448739
    LEA EAX,[EBX + 0x30]                ; 0044873f
    CMP EDX,EAX                         ; 00448742
    JZ 0x00448756                       ; 00448744
        ;   XREF to: 00448756 (CONDITIONAL_JUMP)  ; LAB_00448756
    MOV ECX,dword ptr [EAX]             ; 00448746
    MOV dword ptr [EDX],ECX             ; 00448748
    MOV ECX,dword ptr [EAX + 0x4]       ; 0044874a
    MOV dword ptr [EDX + 0x4],ECX       ; 0044874d
    MOV ECX,dword ptr [EAX + 0x8]       ; 00448750
    MOV dword ptr [EDX + 0x8],ECX       ; 00448753
    MOV EAX,dword ptr [ESP + 0x18]      ; 00448756
        ;   Label: LAB_00448756
    MOV dword ptr [EBX + 0x2f8],EAX     ; 0044875a
    PUSH EDI                            ; 00448760
        ;   Label: LAB_00448760
    PUSH ESI                            ; 00448761
    CMP dword ptr [EBX + 0x2dc],0x0     ; 00448762
    JNZ 0x0044877b                      ; 00448769
        ;   XREF to: 0044877b (CONDITIONAL_JUMP)  ; LAB_0044877b
    MOV ESI,dword ptr [EBX + 0xdc]      ; 0044876b
    TEST ESI,ESI                        ; 00448771
    JZ 0x0044877b                       ; 00448773
        ;   XREF to: 0044877b (CONDITIONAL_JUMP)  ; LAB_0044877b
    MOV dword ptr [EBX + 0x2dc],ESI     ; 00448775
    MOV EDI,dword ptr [EBX + 0x2dc]     ; 0044877b
        ;   Label: LAB_0044877b
    TEST EDI,EDI                        ; 00448781
    JZ 0x00448867                       ; 00448783
        ;   XREF to: 00448867 (CONDITIONAL_JUMP)  ; LAB_00448867
    MOV EAX,EDI                         ; 00448789
    MOV dword ptr [EBX + 0xdc],EDI      ; 0044878b
    LEA EDX,[EBX + 0x20]                ; 00448791
    MOV ECX,dword ptr [EAX + 0x20]      ; 00448794
    MOV dword ptr [EDX],ECX             ; 00448797
    MOV ECX,dword ptr [EAX + 0x24]      ; 00448799
    MOV dword ptr [EDX + 0x4],ECX       ; 0044879c
    MOV ECX,dword ptr [EAX + 0x28]      ; 0044879f
    MOV dword ptr [EDX + 0x8],ECX       ; 004487a2
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004487a5
    MOV dword ptr [EDX + 0xc],EAX       ; 004487a8
    MOV EAX,dword ptr [EBX + 0xdc]      ; 004487ab
    LEA EDX,[EBX + 0x30]                ; 004487b1
    ADD EAX,0x30                        ; 004487b4
    CMP EDX,EAX                         ; 004487b7
    JZ 0x004487cb                       ; 004487b9
        ;   XREF to: 004487cb (CONDITIONAL_JUMP)  ; LAB_004487cb
    MOV ECX,dword ptr [EAX]             ; 004487bb
    MOV dword ptr [EDX],ECX             ; 004487bd
    MOV ECX,dword ptr [EAX + 0x4]       ; 004487bf
    MOV dword ptr [EDX + 0x4],ECX       ; 004487c2
    MOV ECX,dword ptr [EAX + 0x8]       ; 004487c5
    MOV dword ptr [EDX + 0x8],ECX       ; 004487c8
    LEA EDX,[ESP + 0x8]                 ; 004487cb
        ;   Label: LAB_004487cb
    MOV EAX,dword ptr [EBX + 0xdc]      ; 004487cf
    PUSH EDX                            ; 004487d5
    MOV ECX,dword ptr [EAX + 0x154]     ; 004487d6
    PUSH EAX                            ; 004487dc
    CALL dword ptr [ECX + 0x14]         ; 004487dd
    ADD ESP,0x8                         ; 004487e0
    FLD float ptr [ESP + 0x18]          ; 004487e3
    FSUB float ptr [ESP + 0xc]          ; 004487e7
    FADD float ptr [EBX + 0x24]         ; 004487eb
    FSTP float ptr [EBX + 0x24]         ; 004487ee
    PUSH EBX                            ; 004487f1
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004487f2
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004487f7
    POP ESI                             ; 004487fa
    POP EDI                             ; 004487fb
    ADD ESP,0x20                        ; 004487fc
    POP EBX                             ; 004487ff
    RET                                 ; 00448800
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00448801
        ;   Label: LAB_00448801
    ADD ESP,0x20                        ; 0044880b
    POP EBX                             ; 0044880e
    RET                                 ; 0044880f
    FLD float ptr [EBX + 0x2e8]         ; 00448810
        ;   Label: LAB_00448810
    FCOMP float ptr [EBX + 0x28]        ; 00448816
    FNSTSW AX                           ; 00448819
    SAHF                                ; 0044881b
    JNZ 0x004486fb                      ; 0044881c
        ;   XREF to: 004486fb (CONDITIONAL_JUMP)  ; LAB_004486fb
    FLD float ptr [EBX + 0x2ec]         ; 00448822
    FCOMP float ptr [EBX + 0x30]        ; 00448828
    FNSTSW AX                           ; 0044882b
    SAHF                                ; 0044882d
    JNZ 0x004486fb                      ; 0044882e
        ;   XREF to: 004486fb (CONDITIONAL_JUMP)  ; LAB_004486fb
    FLD float ptr [EBX + 0x2f0]         ; 00448834
    FCOMP float ptr [EBX + 0x34]        ; 0044883a
    FNSTSW AX                           ; 0044883d
    SAHF                                ; 0044883f
    JNZ 0x004486fb                      ; 00448840
        ;   XREF to: 004486fb (CONDITIONAL_JUMP)  ; LAB_004486fb
    FLD float ptr [EBX + 0x2f4]         ; 00448846
    FCOMP float ptr [EBX + 0x38]        ; 0044884c
    FNSTSW AX                           ; 0044884f
    SAHF                                ; 00448851
    JNZ 0x004486fb                      ; 00448852
        ;   XREF to: 004486fb (CONDITIONAL_JUMP)  ; LAB_004486fb
    MOV EAX,dword ptr [EBX + 0x2f8]     ; 00448858
    MOV dword ptr [ESP + 0x18],EAX      ; 0044885e
    JMP 0x00448760                      ; 00448862
        ;   XREF to: 00448760 (UNCONDITIONAL_JUMP)  ; LAB_00448760
    MOV EAX,dword ptr [ESP + 0x20]      ; 00448867
        ;   Label: LAB_00448867
    MOV dword ptr [EBX + 0x24],EAX      ; 0044886b
    PUSH EBX                            ; 0044886e
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0044886f
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00448874
    POP ESI                             ; 00448877
    POP EDI                             ; 00448878
    ADD ESP,0x20                        ; 00448879
    POP EBX                             ; 0044887c
    RET                                 ; 0044887d

