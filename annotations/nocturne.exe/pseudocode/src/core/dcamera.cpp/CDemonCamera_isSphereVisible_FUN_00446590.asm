; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00446590(CDemonCamera *this_ptr,CVector3f *position,float radius)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   radius
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60 at 0048ac50
;
; Referenced Globals:
;   float FLOAT_0059bddc = 256
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446590
        ;   Label: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00446590
    PUSH ESI                            ; 00446591
    PUSH EDI                            ; 00446592
    PUSH EBP                            ; 00446593
    MOV EBP,ESP                         ; 00446594
    SUB ESP,0x20                        ; 00446596
    MOV EAX,dword ptr [EBP + 0x18]      ; 00446599
    LEA EBX,[EBP + -0x20]               ; 0044659c
    FLD float ptr [EAX]                 ; 0044659f
    FMUL float ptr [0x0059bddc]         ; 004465a1 | FLOAT_0059bddc
    FISTP dword ptr [EBX]               ; 004465a7
    FLD float ptr [EAX + 0x4]           ; 004465a9
    FMUL float ptr [0x0059bddc]         ; 004465ac | FLOAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 004465b2
    FLD float ptr [EAX + 0x8]           ; 004465b5
    FMUL float ptr [0x0059bddc]         ; 004465b8 | FLOAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 004465be
    FLD float ptr [EBP + 0x1c]          ; 004465c1
    FLD float ptr [0x0059bddc]          ; 004465c7 | FLOAT_0059bddc
    FMULP                               ; 004465cd
    FIST dword ptr [EBP + 0xfffffff8]   ; 004465cf
    FISTP dword ptr [EBP + 0xfffffffc]  ; 004465d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004465db
    MOV EDX,dword ptr [EBP + -0x20]     ; 004465de
    SUB EDX,dword ptr [EAX + 0x16c]     ; 004465e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004465e7
    MOV dword ptr [EBP + -0x20],EDX     ; 004465ea
    MOV ECX,dword ptr [EBP + -0x1c]     ; 004465ed
    SUB ECX,dword ptr [EAX + 0x170]     ; 004465f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004465f6
    MOV dword ptr [EBP + -0x1c],ECX     ; 004465f9
    MOV EBX,dword ptr [EBP + -0x18]     ; 004465fc
    SUB EBX,dword ptr [EAX + 0x174]     ; 004465ff
    MOV EAX,EDX                         ; 00446605
    MOV dword ptr [EBP + -0x18],EBX     ; 00446607
    CDQ                                 ; 0044660a
    XOR EAX,EDX                         ; 0044660b
    SUB EAX,EDX                         ; 0044660d
    CMP EAX,dword ptr [EBP + -0x8]      ; 0044660f
    JGE 0x00446625                      ; 00446612
        ;   XREF to: 00446625 (CONDITIONAL_JUMP)  ; LAB_00446625
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00446614
    CDQ                                 ; 00446617
    XOR EAX,EDX                         ; 00446618
    SUB EAX,EDX                         ; 0044661a
    CMP EAX,dword ptr [EBP + -0x8]      ; 0044661c
    JL 0x0044671e                       ; 0044661f
        ;   XREF to: 0044671e (CONDITIONAL_JUMP)  ; LAB_0044671e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446625
        ;   Label: LAB_00446625
    MOV EAX,dword ptr [EBP + -0x20]     ; 00446628
    MOV EDX,dword ptr [EDX + 0x178]     ; 0044662b
    IMUL EDX                            ; 00446631
    SHRD EAX,EDX,0x10                   ; 00446633
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446637
    MOV ECX,EAX                         ; 0044663a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0044663c
    MOV EDX,dword ptr [EDX + 0x184]     ; 0044663f
    IMUL EDX                            ; 00446645
    SHRD EAX,EDX,0x10                   ; 00446647
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044664b
    ADD ECX,EAX                         ; 0044664e
    MOV EAX,dword ptr [EBP + -0x18]     ; 00446650
    MOV EDX,dword ptr [EDX + 0x190]     ; 00446653
    IMUL EDX                            ; 00446659
    SHRD EAX,EDX,0x10                   ; 0044665b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044665f
    ADD ECX,EAX                         ; 00446662
    MOV EAX,dword ptr [EBP + -0x20]     ; 00446664
    MOV EDX,dword ptr [EDX + 0x17c]     ; 00446667
    MOV dword ptr [EBP + -0x14],ECX     ; 0044666d
    IMUL EDX                            ; 00446670
    SHRD EAX,EDX,0x10                   ; 00446672
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446676
    MOV ECX,EAX                         ; 00446679
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0044667b
    MOV EDX,dword ptr [EDX + 0x188]     ; 0044667e
    IMUL EDX                            ; 00446684
    SHRD EAX,EDX,0x10                   ; 00446686
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044668a
    ADD ECX,EAX                         ; 0044668d
    MOV EAX,dword ptr [EBP + -0x18]     ; 0044668f
    MOV EDX,dword ptr [EDX + 0x194]     ; 00446692
    IMUL EDX                            ; 00446698
    SHRD EAX,EDX,0x10                   ; 0044669a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044669e
    ADD ECX,EAX                         ; 004466a1
    MOV EAX,dword ptr [EBP + -0x20]     ; 004466a3
    MOV EDX,dword ptr [EDX + 0x180]     ; 004466a6
    MOV dword ptr [EBP + -0x10],ECX     ; 004466ac
    IMUL EDX                            ; 004466af
    SHRD EAX,EDX,0x10                   ; 004466b1
    MOV EDX,dword ptr [EBP + 0x14]      ; 004466b5
    MOV ECX,EAX                         ; 004466b8
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004466ba
    MOV EDX,dword ptr [EDX + 0x18c]     ; 004466bd
    IMUL EDX                            ; 004466c3
    SHRD EAX,EDX,0x10                   ; 004466c5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004466c9
    ADD ECX,EAX                         ; 004466cc
    MOV EAX,dword ptr [EBP + -0x18]     ; 004466ce
    MOV EDX,dword ptr [EDX + 0x198]     ; 004466d1
    IMUL EDX                            ; 004466d7
    SHRD EAX,EDX,0x10                   ; 004466d9
    ADD ECX,EAX                         ; 004466dd
    MOV EAX,dword ptr [EBP + -0x14]     ; 004466df
    MOV dword ptr [EBP + -0xc],ECX      ; 004466e2
    MOV ECX,dword ptr [EBP + -0x8]      ; 004466e5
    MOV EBX,dword ptr [EBP + -0xc]      ; 004466e8
    SUB EAX,ECX                         ; 004466eb
    CMP EAX,EBX                         ; 004466ed
    JG 0x00446715                       ; 004466ef
        ;   XREF to: 00446715 (CONDITIONAL_JUMP)  ; LAB_00446715
    MOV EDX,dword ptr [EBP + -0x14]     ; 004466f1
    MOV ESI,dword ptr [EBP + -0x8]      ; 004466f4
    MOV EAX,EBX                         ; 004466f7
    ADD EDX,ESI                         ; 004466f9
    NEG EAX                             ; 004466fb
    CMP EDX,EAX                         ; 004466fd
    JL 0x00446715                       ; 004466ff
        ;   XREF to: 00446715 (CONDITIONAL_JUMP)  ; LAB_00446715
    MOV EDX,dword ptr [EBP + -0x10]     ; 00446701
    SUB EDX,dword ptr [EBP + -0x4]      ; 00446704
    CMP EDX,EBX                         ; 00446707
    JG 0x00446715                       ; 00446709
        ;   XREF to: 00446715 (CONDITIONAL_JUMP)  ; LAB_00446715
    MOV EDX,dword ptr [EBP + -0x10]     ; 0044670b
    ADD EDX,dword ptr [EBP + -0x4]      ; 0044670e
    CMP EDX,EAX                         ; 00446711
    JGE 0x0044672f                      ; 00446713
        ;   XREF to: 0044672f (CONDITIONAL_JUMP)  ; LAB_0044672f
    XOR EAX,EAX                         ; 00446715
        ;   Label: LAB_00446715
    MOV ESP,EBP                         ; 00446717
    POP EBP                             ; 00446719
        ;   Label: LAB_00446719
    POP EDI                             ; 0044671a
    POP ESI                             ; 0044671b
    POP EBX                             ; 0044671c
    RET                                 ; 0044671d
    MOV EAX,dword ptr [EBP + -0x18]     ; 0044671e
        ;   Label: LAB_0044671e
    CDQ                                 ; 00446721
    XOR EAX,EDX                         ; 00446722
    SUB EAX,EDX                         ; 00446724
    CMP EAX,dword ptr [EBP + -0x8]      ; 00446726
    JGE 0x00446625                      ; 00446729
        ;   XREF to: 00446625 (CONDITIONAL_JUMP)  ; LAB_00446625
    MOV EAX,0x1                         ; 0044672f
        ;   Label: LAB_0044672f
    MOV ESP,EBP                         ; 00446734
    POP EBP                             ; 00446736
    POP EDI                             ; 00446737
    POP ESI                             ; 00446738
    POP EBX                             ; 00446739
    RET                                 ; 0044673a

