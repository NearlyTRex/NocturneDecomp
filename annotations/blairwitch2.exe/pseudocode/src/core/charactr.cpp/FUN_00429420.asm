; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00429420(CCharacter *this_ptr,float delta_time,int disable_search)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   disable_search
;
; XREF[5]:
;   core_doc.cpp_FUN_00450c60 at 004515e2
;   core_dog.cpp_FUN_0045e360 at 0045e3a8
;   core_hostage.cpp_FUN_004d1660 at 004d1d20
;   core_npc.cpp_CNPC_process_FUN_005105b0 at 00510842
;   unkafter_basicene.cpp_FUN_0059f0e0 at 0059f34f
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005cd072
;   TerminatedCString s_Bip01_head_005cd07d
;   TerminatedCString s_Bip01_head_005cd0a4
;   TerminatedCString s_Bip01_head_005cd0af
;   undefined4 DAT_005cd0ba
;   undefined4 DAT_005cd0be
;   undefined4 DAT_005cd0c6
;   undefined4 DAT_005cd0ce
;   undefined4 DAT_005cd0d6
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1372328_0x14f0a8
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040d0c0
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_FUN_00540e80
;   core_skeleton.cpp_FUN_00546a90
;   core_vecdir.cpp_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429420
        ;   Label: core_charactr.cpp_FUN_00429420
    PUSH ESI                            ; 00429421
    PUSH EDI                            ; 00429422
    PUSH EBP                            ; 00429423
    MOV EBP,ESP                         ; 00429424
    SUB ESP,0x19c                       ; 00429426
    AND ESP,0xfffffff8                  ; 0042942c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042942f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00429432
    PUSH EBX                            ; 00429435
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00429436
    CALL dword ptr [EAX + 0x114]        ; 0042943c
    ADD ESP,0x4                         ; 00429442
    TEST EAX,EAX                        ; 00429445
    JZ 0x0042944e                       ; 00429447
        ;   XREF to: 0042944e (CONDITIONAL_JUMP)  ; LAB_0042944e
    MOV ESI,0x1                         ; 00429449
    LEA EAX,[EBX + 0x2b4]               ; 0042944e
        ;   Label: LAB_0042944e
    PUSH EAX                            ; 00429454
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00429455
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042945a
    PUSH 0x0                            ; 0042945d
    PUSH 0x5cd072                       ; 0042945f | = "Bip01 head"
    PUSH EAX                            ; 00429464
    MOV dword ptr [ESP + 0x194],EAX     ; 00429465
    CALL core_skeleton.cpp_FUN_00540e80 ; 0042946c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00429471
    CMP EAX,-0x1                        ; 00429474
    JNZ 0x0042947e                      ; 00429477
        ;   XREF to: 0042947e (CONDITIONAL_JUMP)  ; LAB_0042947e
    MOV ESI,0x1                         ; 00429479
    XOR EDX,EDX                         ; 0042947e
        ;   Label: LAB_0042947e
    MOV dword ptr [ESP + 0x18c],EDX     ; 00429480
    TEST ESI,ESI                        ; 00429487
    JZ 0x004294dc                       ; 00429489
        ;   XREF to: 004294dc (CONDITIONAL_JUMP)  ; LAB_004294dc
    MOV dword ptr [EBX + 0x27e4],EDX    ; 0042948b
        ;   Label: LAB_0042948b
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00429491
        ;   Label: LAB_00429491
    MOV dword ptr [EBX + 0x27cc],EAX    ; 00429498
    TEST EAX,EAX                        ; 0042949e
    JNZ 0x00429683                      ; 004294a0
        ;   XREF to: 00429683 (CONDITIONAL_JUMP)  ; LAB_00429683
    CMP dword ptr [EBX + 0x27cc],0x0    ; 004294a6
        ;   Label: LAB_004294a6
    JNZ 0x00429a92                      ; 004294ad
        ;   XREF to: 00429a92 (CONDITIONAL_JUMP)  ; LAB_00429a92
    FLD float ptr [EBP + 0x18]          ; 004294b3
        ;   Label: LAB_004294b3
    FDIV float ptr [0x005cd0ce]         ; 004294b6 | DAT_005cd0ce
    FSUBR float ptr [EBX + 0x27dc]      ; 004294bc
    FST float ptr [EBX + 0x27dc]        ; 004294c2
    FLDZ                                ; 004294c8
    FCOMPP                              ; 004294ca
    FNSTSW AX                           ; 004294cc
    SAHF                                ; 004294ce
    JA 0x00429a6d                       ; 004294cf
        ;   XREF to: 00429a6d (CONDITIONAL_JUMP)  ; LAB_00429a6d
    MOV ESP,EBP                         ; 004294d5
    POP EBP                             ; 004294d7
    POP EDI                             ; 004294d8
    POP ESI                             ; 004294d9
    POP EBX                             ; 004294da
    RET                                 ; 004294db
    MOV ECX,dword ptr [EBX + 0x27d0]    ; 004294dc
        ;   Label: LAB_004294dc
    TEST ECX,ECX                        ; 004294e2
    JZ 0x004294ef                       ; 004294e4
        ;   XREF to: 004294ef (CONDITIONAL_JUMP)  ; LAB_004294ef
    MOV dword ptr [ESP + 0x18c],ECX     ; 004294e6
    JMP 0x0042948b                      ; 004294ed
        ;   XREF to: 0042948b (UNCONDITIONAL_JUMP)  ; LAB_0042948b
    FLD float ptr [EBX + 0x27e4]        ; 004294ef
        ;   Label: LAB_004294ef
    FLDZ                                ; 004294f5
    FCOMPP                              ; 004294f7
    FNSTSW AX                           ; 004294f9
    SAHF                                ; 004294fb
    JNC 0x0042951f                      ; 004294fc
        ;   XREF to: 0042951f (CONDITIONAL_JUMP)  ; LAB_0042951f
    FLD float ptr [EBX + 0x27e4]        ; 004294fe
    MOV EAX,dword ptr [EBX + 0x27cc]    ; 00429504
    FSUB float ptr [EBP + 0x18]         ; 0042950a
    MOV dword ptr [ESP + 0x18c],EAX     ; 0042950d
    FSTP float ptr [EBX + 0x27e4]       ; 00429514
    JMP 0x00429491                      ; 0042951a
        ;   XREF to: 00429491 (UNCONDITIONAL_JUMP)  ; LAB_00429491
    PUSH EDX                            ; 0042951f
        ;   Label: LAB_0042951f
    PUSH 0x5cd07d                       ; 00429520 | = "Bip01 head"
    MOV ESI,dword ptr [ESP + 0x190]     ; 00429525
    PUSH ESI                            ; 0042952c
    CALL core_skeleton.cpp_FUN_00540e80 ; 0042952d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00429532
    CMP EAX,-0x1                        ; 00429535
    JZ 0x004295de                       ; 00429538
        ;   XREF to: 004295de (CONDITIONAL_JUMP)  ; LAB_004295de
    PUSH EAX                            ; 0042953e
    LEA EAX,[EBX + 0x2b4]               ; 0042953f
    PUSH EAX                            ; 00429545
    LEA ESI,[ESP + 0x5c]                ; 00429546
    LEA EDI,[ESP + 0xbc]                ; 0042954a
    CALL core_skeleton.cpp_FUN_00546a90 ; 00429551
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 00429556
    LEA EAX,[ESP + 0xb4]                ; 00429559
    LEA ESI,[ESP + 0x54]                ; 00429560
    PUSH EAX                            ; 00429564
    MOVSD ES:EDI,ESI                    ; 00429565
    MOVSD ES:EDI,ESI                    ; 00429566
    MOVSD ES:EDI,ESI                    ; 00429567
    PUSH EBX                            ; 00429568
    LEA ESI,[ESP + 0xe0]                ; 00429569
    LEA EDI,[ESP + 0x8c]                ; 00429570
    CALL core_actor.cpp_FUN_00408d70    ; 00429577
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xe0]                ; 0042957c
    LEA EAX,[ESP + 0x8c]                ; 00429583
    ADD ESP,0x8                         ; 0042958a
    LEA EDX,[ESP + 0x9c]                ; 0042958d
    MOVSD ES:EDI,ESI                    ; 00429594
    MOVSD ES:EDI,ESI                    ; 00429595
    MOVSD ES:EDI,ESI                    ; 00429596
    CMP EDX,EAX                         ; 00429597
    JNZ 0x004295b2                      ; 00429599
        ;   XREF to: 004295b2 (CONDITIONAL_JUMP)  ; LAB_004295b2
    MOV EDX,dword ptr [0x0061b5a8]      ; 0042959b | g_CDemonSetPtr
        ;   Label: LAB_0042959b
    XOR EAX,EAX                         ; 004295a1
    CMP EAX,dword ptr [EDX + 0x14f0a8]  ; 004295a3 | g_CDemonSetInstance.field1372328_0x14f0a8
        ;   Label: LAB_004295a3
    JGE 0x0042964f                      ; 004295a9
        ;   XREF to: 0042964f (CONDITIONAL_JUMP)  ; LAB_0042964f
    INC EAX                             ; 004295af
    JMP 0x004295a3                      ; 004295b0
        ;   XREF to: 004295a3 (UNCONDITIONAL_JUMP)  ; LAB_004295a3
    MOV EAX,dword ptr [ESP + 0x84]      ; 004295b2
        ;   Label: LAB_004295b2
    MOV dword ptr [ESP + 0x9c],EAX      ; 004295b9
    MOV EAX,dword ptr [ESP + 0x88]      ; 004295c0
    MOV dword ptr [ESP + 0xa0],EAX      ; 004295c7
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004295ce
    MOV dword ptr [ESP + 0xa4],EAX      ; 004295d5
    JMP 0x0042959b                      ; 004295dc
        ;   XREF to: 0042959b (UNCONDITIONAL_JUMP)  ; LAB_0042959b
    MOV dword ptr [ESP + 0x7c],0x40b00000 ; 004295de
        ;   Label: LAB_004295de
    LEA EAX,[ESP + 0x78]                ; 004295e6
    XOR EDI,EDI                         ; 004295ea
    PUSH EAX                            ; 004295ec
    LEA ESI,[ESP + 0x124]               ; 004295ed
    MOV dword ptr [ESP + 0x7c],EDI      ; 004295f4
    PUSH EBX                            ; 004295f8
    MOV dword ptr [ESP + 0x88],EDI      ; 004295f9
    LEA EDI,[ESP + 0x20]                ; 00429600
    CALL core_actor.cpp_FUN_00408d70    ; 00429604
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x128]               ; 00429609
    LEA EAX,[ESP + 0x20]                ; 00429610
    ADD ESP,0x8                         ; 00429614
    LEA EDX,[ESP + 0x9c]                ; 00429617
    MOVSD ES:EDI,ESI                    ; 0042961e
    MOVSD ES:EDI,ESI                    ; 0042961f
    MOVSD ES:EDI,ESI                    ; 00429620
    CMP EDX,EAX                         ; 00429621
    JZ 0x0042959b                       ; 00429623
        ;   XREF to: 0042959b (CONDITIONAL_JUMP)  ; LAB_0042959b
    MOV EAX,dword ptr [ESP + 0x18]      ; 00429629
    MOV dword ptr [ESP + 0x9c],EAX      ; 0042962d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00429634
    MOV dword ptr [ESP + 0xa0],EAX      ; 00429638
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042963f
    MOV dword ptr [ESP + 0xa4],EAX      ; 00429643
    JMP 0x0042959b                      ; 0042964a
        ;   XREF to: 0042959b (UNCONDITIONAL_JUMP)  ; LAB_0042959b
    PUSH EDX                            ; 0042964f | g_CDemonSetInstance
        ;   Label: LAB_0042964f
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00429650
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00429655
    PUSH 0x40000000                     ; 00429658
    PUSH 0x3f800000                     ; 0042965d
    CALL core_actor.cpp_FUN_0040cf60    ; 00429662
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x1a0],EAX     ; 00429667
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0042966e
    MOV dword ptr [EBX + 0x27e4],EAX    ; 00429675
    ADD ESP,0x8                         ; 0042967b
    JMP 0x00429491                      ; 0042967e
        ;   XREF to: 00429491 (UNCONDITIONAL_JUMP)  ; LAB_00429491
    PUSH 0x0                            ; 00429683
        ;   Label: LAB_00429683
    PUSH 0x5cd0a4                       ; 00429685 | = "Bip01 head"
    MOV EDI,dword ptr [ESP + 0x190]     ; 0042968a
    PUSH EDI                            ; 00429691
    CALL core_skeleton.cpp_FUN_00540e80 ; 00429692
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00429697
    CMP EAX,-0x1                        ; 0042969a
    JZ 0x0042985e                       ; 0042969d
        ;   XREF to: 0042985e (CONDITIONAL_JUMP)  ; LAB_0042985e
    PUSH EAX                            ; 004296a3
    LEA EAX,[EBX + 0x2b4]               ; 004296a4
    PUSH EAX                            ; 004296aa
    LEA ESI,[ESP + 0x14]                ; 004296ab
    LEA EDI,[ESP + 0x98]                ; 004296af
    CALL core_skeleton.cpp_FUN_00546a90 ; 004296b6
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 004296bb
    LEA EAX,[ESP + 0x90]                ; 004296be
    LEA ESI,[ESP + 0xc]                 ; 004296c5
    PUSH EAX                            ; 004296c9
    MOVSD ES:EDI,ESI                    ; 004296ca
    MOVSD ES:EDI,ESI                    ; 004296cb
    MOVSD ES:EDI,ESI                    ; 004296cc
    PUSH EBX                            ; 004296cd
    LEA ESI,[ESP + 0x38]                ; 004296ce
    LEA EDI,[ESP + 0xec]                ; 004296d2
    CALL core_actor.cpp_FUN_00408d70    ; 004296d9
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x38]                ; 004296de
    LEA EAX,[ESP + 0xec]                ; 004296e2
    ADD ESP,0x8                         ; 004296e9
    LEA EDX,[ESP + 0x60]                ; 004296ec
    MOVSD ES:EDI,ESI                    ; 004296f0
    MOVSD ES:EDI,ESI                    ; 004296f1
    MOVSD ES:EDI,ESI                    ; 004296f2
    CMP EDX,EAX                         ; 004296f3
    JZ 0x00429718                       ; 004296f5
        ;   XREF to: 00429718 (CONDITIONAL_JUMP)  ; LAB_00429718
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004296f7
    MOV dword ptr [ESP + 0x60],EAX      ; 004296fe
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00429702
    MOV dword ptr [ESP + 0x64],EAX      ; 00429709
    MOV EAX,dword ptr [ESP + 0xec]      ; 0042970d
    MOV dword ptr [ESP + 0x68],EAX      ; 00429714
        ;   Label: LAB_00429714
    MOV ESI,dword ptr [0x007bdc94]      ; 00429718 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00429718
    PUSH ESI                            ; 0042971e
    MOV EDI,dword ptr [EBX + 0x27cc]    ; 0042971f
    PUSH EDI                            ; 00429725
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00429726
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x19c],EAX     ; 0042972b
    ADD ESP,0x8                         ; 00429732
    MOV dword ptr [ESP + 0x190],EAX     ; 00429735
    TEST EAX,EAX                        ; 0042973c
    JNZ 0x004298c3                      ; 0042973e
        ;   XREF to: 004298c3 (CONDITIONAL_JUMP)  ; LAB_004298c3
    MOV EDX,dword ptr [EBX + 0x27cc]    ; 00429744
    MOV EAX,ESP                         ; 0042974a
    ADD EDX,0x20                        ; 0042974c
    CMP EAX,EDX                         ; 0042974f
    JZ 0x00429766                       ; 00429751
        ;   XREF to: 00429766 (CONDITIONAL_JUMP)  ; LAB_00429766
    MOV EAX,dword ptr [EDX]             ; 00429753
    MOV dword ptr [ESP],EAX             ; 00429755
    MOV EAX,dword ptr [EDX + 0x4]       ; 00429758
    MOV dword ptr [ESP + 0x4],EAX       ; 0042975b
    MOV EAX,dword ptr [EDX + 0x8]       ; 0042975f
    MOV dword ptr [ESP + 0x8],EAX       ; 00429762
        ;   Label: LAB_00429762
    FLD float ptr [ESP]                 ; 00429766
        ;   Label: LAB_00429766
    FLD float ptr [ESP + 0x4]           ; 00429769
    FLD float ptr [ESP + 0x8]           ; 0042976d
    LEA EDI,[ESP + 0x144]               ; 00429771
    LEA ESI,[ESP + 0xcc]                ; 00429778
    LEA EAX,[ESP + 0x144]               ; 0042977f
    FXCH ST2                            ; 00429786
    FSUB float ptr [ESP + 0x60]         ; 00429788
    FXCH                                ; 0042978c
    FSUB float ptr [ESP + 0x64]         ; 0042978e
    FXCH ST2                            ; 00429792
    FSUB float ptr [ESP + 0x68]         ; 00429794
    PUSH EAX                            ; 00429798
    FXCH                                ; 00429799
    FSTP float ptr [ESP + 0xd0]         ; 0042979b
    FXCH                                ; 004297a2
    FSTP float ptr [ESP + 0xd4]         ; 004297a4
    FSTP float ptr [ESP + 0xd8]         ; 004297ab
    MOVSD ES:EDI,ESI                    ; 004297b2
    MOVSD ES:EDI,ESI                    ; 004297b3
    MOVSD ES:EDI,ESI                    ; 004297b4
    PUSH EBX                            ; 004297b5
    LEA ESI,[ESP + 0x134]               ; 004297b6
    LEA EDI,[ESP + 0xb0]                ; 004297bd
    CALL core_actor.cpp_FUN_00408d30    ; 004297c4
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x134]               ; 004297c9
    ADD ESP,0x8                         ; 004297d0
    LEA EAX,[ESP + 0xa8]                ; 004297d3
    MOVSD ES:EDI,ESI                    ; 004297da
    MOVSD ES:EDI,ESI                    ; 004297db
    MOVSD ES:EDI,ESI                    ; 004297dc
    PUSH EAX                            ; 004297dd
    LEA ESI,[ESP + 0x10c]               ; 004297de
    LEA EDI,[ESP + 0x40]                ; 004297e5
    CALL core_vecdir.cpp_FUN_005838f0   ; 004297e9
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x10c]               ; 004297ee
    LEA EDX,[ESP + 0x40]                ; 004297f5
    ADD ESP,0x4                         ; 004297f9
    LEA EAX,[ESP + 0x24]                ; 004297fc
    MOVSD ES:EDI,ESI                    ; 00429800
    MOVSD ES:EDI,ESI                    ; 00429801
    MOVSD ES:EDI,ESI                    ; 00429802
    CMP EAX,EDX                         ; 00429803
    JZ 0x0042981f                       ; 00429805
        ;   XREF to: 0042981f (CONDITIONAL_JUMP)  ; LAB_0042981f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00429807
    MOV dword ptr [ESP + 0x24],EAX      ; 0042980b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042980f
    MOV dword ptr [ESP + 0x28],EAX      ; 00429813
    MOV EAX,dword ptr [ESP + 0x44]      ; 00429817
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042981b
    FLD float ptr [ESP + 0x28]          ; 0042981f
        ;   Label: LAB_0042981f
    FABS                                ; 00429823
    FCOMP double ptr [0x005cd0be]       ; 00429825 | DAT_005cd0be
    FNSTSW AX                           ; 0042982b
    SAHF                                ; 0042982d
    JBE 0x0042983a                      ; 0042982e
        ;   XREF to: 0042983a (CONDITIONAL_JUMP)  ; LAB_0042983a
    MOV dword ptr [EBX + 0x27cc],0x0    ; 00429830
    FLD float ptr [ESP + 0x24]          ; 0042983a
        ;   Label: LAB_0042983a
    FABS                                ; 0042983e
    FCOMP double ptr [0x005cd0c6]       ; 00429840 | DAT_005cd0c6
    FNSTSW AX                           ; 00429846
    SAHF                                ; 00429848
    JBE 0x004294a6                      ; 00429849
        ;   XREF to: 004294a6 (CONDITIONAL_JUMP)  ; LAB_004294a6
    MOV dword ptr [EBX + 0x27cc],0x0    ; 0042984f
    JMP 0x004294b3                      ; 00429859
        ;   XREF to: 004294b3 (UNCONDITIONAL_JUMP)  ; LAB_004294b3
    XOR EAX,EAX                         ; 0042985e
        ;   Label: LAB_0042985e
    MOV dword ptr [ESP + 0x174],EAX     ; 00429860
    MOV dword ptr [ESP + 0x17c],EAX     ; 00429867
    LEA EAX,[ESP + 0x174]               ; 0042986e
    PUSH EAX                            ; 00429875
    MOV EDX,0x40b00000                  ; 00429876
    LEA ESI,[ESP + 0x70]                ; 0042987b
    PUSH EBX                            ; 0042987f
    LEA EDI,[ESP + 0x50]                ; 00429880
    MOV dword ptr [ESP + 0x180],EDX     ; 00429884
    CALL core_actor.cpp_FUN_00408d70    ; 0042988b
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x74]                ; 00429890
    LEA EDX,[ESP + 0x50]                ; 00429894
    ADD ESP,0x8                         ; 00429898
    LEA EAX,[ESP + 0x60]                ; 0042989b
    MOVSD ES:EDI,ESI                    ; 0042989f
    MOVSD ES:EDI,ESI                    ; 004298a0
    MOVSD ES:EDI,ESI                    ; 004298a1
    CMP EAX,EDX                         ; 004298a2
    JZ 0x00429718                       ; 004298a4
        ;   XREF to: 00429718 (CONDITIONAL_JUMP)  ; LAB_00429718
    MOV EAX,dword ptr [ESP + 0x48]      ; 004298aa
    MOV dword ptr [ESP + 0x60],EAX      ; 004298ae
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004298b2
    MOV dword ptr [ESP + 0x64],EAX      ; 004298b6
    MOV EAX,dword ptr [ESP + 0x50]      ; 004298ba
    JMP 0x00429714                      ; 004298be
        ;   XREF to: 00429714 (UNCONDITIONAL_JUMP)  ; LAB_00429714
    MOV EDX,dword ptr [ESP + 0x194]     ; 004298c3
        ;   Label: LAB_004298c3
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004298ca
    PUSH EDX                            ; 004298d0
    CALL dword ptr [EAX + 0x114]        ; 004298d1
    ADD ESP,0x4                         ; 004298d7
    TEST EAX,EAX                        ; 004298da
    JNZ 0x00429943                      ; 004298dc
        ;   XREF to: 00429943 (CONDITIONAL_JUMP)  ; LAB_00429943
    PUSH 0x0                            ; 004298de
        ;   Label: LAB_004298de
    MOV ESI,dword ptr [ESP + 0x194]     ; 004298e0
    PUSH 0x5cd0af                       ; 004298e7 | = "Bip01 head"
    ADD ESI,0x2b4                       ; 004298ec
    PUSH ESI                            ; 004298f2
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004298f3
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004298f8
    PUSH EAX                            ; 004298fb
    CALL core_skeleton.cpp_FUN_00540e80 ; 004298fc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00429901
    CMP EAX,-0x1                        ; 00429904
    JNZ 0x004299e9                      ; 00429907
        ;   XREF to: 004299e9 (CONDITIONAL_JUMP)  ; LAB_004299e9
    MOV EDX,dword ptr [ESP + 0x190]     ; 0042990d
    MOV EAX,ESP                         ; 00429914
    ADD EDX,0x20                        ; 00429916
    CMP EAX,EDX                         ; 00429919
    JZ 0x00429930                       ; 0042991b
        ;   XREF to: 00429930 (CONDITIONAL_JUMP)  ; LAB_00429930
    MOV EAX,dword ptr [EDX]             ; 0042991d
    MOV dword ptr [ESP],EAX             ; 0042991f
    MOV EAX,dword ptr [EDX + 0x4]       ; 00429922
    MOV dword ptr [ESP + 0x4],EAX       ; 00429925
    MOV EAX,dword ptr [EDX + 0x8]       ; 00429929
    MOV dword ptr [ESP + 0x8],EAX       ; 0042992c
    FLD float ptr [ESP + 0x4]           ; 00429930
        ;   Label: LAB_00429930
    FADD float ptr [0x005cd0ba]         ; 00429934 | DAT_005cd0ba
    FSTP float ptr [ESP + 0x4]          ; 0042993a
    JMP 0x00429766                      ; 0042993e
        ;   XREF to: 00429766 (UNCONDITIONAL_JUMP)  ; LAB_00429766
    MOV EDX,dword ptr [ESP + 0x194]     ; 00429943
        ;   Label: LAB_00429943
    MOV EAX,dword ptr [ESP + 0x194]     ; 0042994a
    MOV CL,byte ptr [EDX + 0x2514]      ; 00429951
    ADD EAX,0x2b4                       ; 00429957
    TEST CL,CL                          ; 0042995c
    JZ 0x004298de                       ; 0042995e
        ;   XREF to: 004298de (CONDITIONAL_JUMP)  ; LAB_004298de
    PUSH 0x0                            ; 00429964
    PUSH EAX                            ; 00429966
    LEA ESI,[ESP + 0x11c]               ; 00429967
    LEA EDI,[ESP + 0x104]               ; 0042996e
    CALL core_skeleton.cpp_FUN_00546a90 ; 00429975
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x11c]               ; 0042997a
    ADD ESP,0x8                         ; 00429981
    LEA EAX,[ESP + 0xfc]                ; 00429984
    MOV ECX,dword ptr [ESP + 0x194]     ; 0042998b
    PUSH EAX                            ; 00429992
    MOVSD ES:EDI,ESI                    ; 00429993
    MOVSD ES:EDI,ESI                    ; 00429994
    MOVSD ES:EDI,ESI                    ; 00429995
    PUSH ECX                            ; 00429996
    LEA ESI,[ESP + 0x158]               ; 00429997
    LEA EDI,[ESP + 0x170]               ; 0042999e
    CALL core_actor.cpp_FUN_00408d70    ; 004299a5
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x158]               ; 004299aa
    LEA EAX,[ESP + 0x170]               ; 004299b1
    ADD ESP,0x8                         ; 004299b8
    MOV EDX,ESP                         ; 004299bb
    MOVSD ES:EDI,ESI                    ; 004299bd
    MOVSD ES:EDI,ESI                    ; 004299be
    MOVSD ES:EDI,ESI                    ; 004299bf
    CMP EDX,EAX                         ; 004299c0
    JZ 0x00429766                       ; 004299c2
        ;   XREF to: 00429766 (CONDITIONAL_JUMP)  ; LAB_00429766
    MOV EAX,dword ptr [ESP + 0x168]     ; 004299c8
    MOV dword ptr [ESP],EAX             ; 004299cf
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004299d2
    MOV dword ptr [ESP + 0x4],EAX       ; 004299d9
    MOV EAX,dword ptr [ESP + 0x170]     ; 004299dd
    JMP 0x00429762                      ; 004299e4
        ;   XREF to: 00429762 (UNCONDITIONAL_JUMP)  ; LAB_00429762
    PUSH EAX                            ; 004299e9
        ;   Label: LAB_004299e9
    PUSH ESI                            ; 004299ea
    LEA ESI,[ESP + 0xf8]                ; 004299eb
    LEA EDI,[ESP + 0x164]               ; 004299f2
    CALL core_skeleton.cpp_FUN_00546a90 ; 004299f9
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0xf8]                ; 004299fe
    ADD ESP,0x8                         ; 00429a05
    LEA EAX,[ESP + 0x15c]               ; 00429a08
    MOVSD ES:EDI,ESI                    ; 00429a0f
    MOVSD ES:EDI,ESI                    ; 00429a10
    MOVSD ES:EDI,ESI                    ; 00429a11
    PUSH EAX                            ; 00429a12
    MOV ESI,dword ptr [ESP + 0x194]     ; 00429a13
    PUSH ESI                            ; 00429a1a
    LEA ESI,[ESP + 0x140]               ; 00429a1b
    LEA EDI,[ESP + 0xc8]                ; 00429a22
    CALL core_actor.cpp_FUN_00408d70    ; 00429a29
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x140]               ; 00429a2e
    LEA EAX,[ESP + 0xc8]                ; 00429a35
    ADD ESP,0x8                         ; 00429a3c
    MOV EDX,ESP                         ; 00429a3f
    MOVSD ES:EDI,ESI                    ; 00429a41
    MOVSD ES:EDI,ESI                    ; 00429a42
    MOVSD ES:EDI,ESI                    ; 00429a43
    CMP EDX,EAX                         ; 00429a44
    JZ 0x00429766                       ; 00429a46
        ;   XREF to: 00429766 (CONDITIONAL_JUMP)  ; LAB_00429766
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00429a4c
    MOV dword ptr [ESP],EAX             ; 00429a53
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00429a56
    MOV dword ptr [ESP + 0x4],EAX       ; 00429a5d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00429a61
    JMP 0x00429762                      ; 00429a68
        ;   XREF to: 00429762 (UNCONDITIONAL_JUMP)  ; LAB_00429762
    MOV dword ptr [EBX + 0x27d8],0x0    ; 00429a6d
        ;   Label: LAB_00429a6d
    MOV dword ptr [EBX + 0x27dc],0x0    ; 00429a77
    MOV dword ptr [EBX + 0x27d4],0x0    ; 00429a81
    MOV ESP,EBP                         ; 00429a8b
    POP EBP                             ; 00429a8d
    POP EDI                             ; 00429a8e
    POP ESI                             ; 00429a8f
    POP EBX                             ; 00429a90
    RET                                 ; 00429a91
    FLD float ptr [EBP + 0x18]          ; 00429a92
        ;   Label: LAB_00429a92
    FDIV float ptr [0x005cd0ce]         ; 00429a95 | DAT_005cd0ce
    FADD float ptr [EBX + 0x27dc]       ; 00429a9b
    FST float ptr [EBX + 0x27dc]        ; 00429aa1
    FLD1                                ; 00429aa7
    FCOMPP                              ; 00429aa9
    FNSTSW AX                           ; 00429aab
    SAHF                                ; 00429aad
    JNC 0x00429aba                      ; 00429aae
        ;   XREF to: 00429aba (CONDITIONAL_JUMP)  ; LAB_00429aba
    MOV dword ptr [EBX + 0x27dc],0x3f800000 ; 00429ab0
    FLD float ptr [ESP + 0x28]          ; 00429aba
        ;   Label: LAB_00429aba
    FSUB float ptr [EBX + 0x27d4]       ; 00429abe
    SUB ESP,0x4                         ; 00429ac4
    FSTP float ptr [ESP]                ; 00429ac7
    CALL core_actor.cpp_FUN_0040d0c0    ; 00429aca
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x19c],EAX     ; 00429acf
    FLD float ptr [ESP + 0x19c]         ; 00429ad6
    FMUL double ptr [0x005cd0d6]        ; 00429add | DAT_005cd0d6
    ADD ESP,0x4                         ; 00429ae3
    FADD float ptr [EBX + 0x27d4]       ; 00429ae6
    FSTP float ptr [EBX + 0x27d4]       ; 00429aec
    FLD float ptr [ESP + 0x24]          ; 00429af2
    FSUB float ptr [EBX + 0x27d8]       ; 00429af6
    SUB ESP,0x4                         ; 00429afc
    FSTP float ptr [ESP]                ; 00429aff
    CALL core_actor.cpp_FUN_0040d0c0    ; 00429b02
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x19c],EAX     ; 00429b07
    FLD float ptr [ESP + 0x19c]         ; 00429b0e
    FMUL double ptr [0x005cd0d6]        ; 00429b15 | DAT_005cd0d6
    ADD ESP,0x4                         ; 00429b1b
    FADD float ptr [EBX + 0x27d8]       ; 00429b1e
    FSTP float ptr [EBX + 0x27d8]       ; 00429b24
    MOV ESP,EBP                         ; 00429b2a
    POP EBP                             ; 00429b2c
    POP EDI                             ; 00429b2d
    POP ESI                             ; 00429b2e
    POP EBX                             ; 00429b2f
    RET                                 ; 00429b30

