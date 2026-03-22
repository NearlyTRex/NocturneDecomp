; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   other_poly
; CPolyIntersectResult * Stack[0xc]:4   out_result
; Local Variables:
; int[1261]        Stack[-0x19c4]:5044  aiStackY_19c4
; undefined8       Stack[-0x5e0]:8  uStack_5e0
; undefined8       Stack[-0x5d8]:8  uStack_5d8
; undefined8       Stack[-0x5d0]:8  uStack_5d0
; undefined4       Stack[-0x5c8]:4  uStack_5c8
; undefined4       Stack[-0x5c4]:4  uStack_5c4
; undefined4       Stack[-0x5c0]:4  uStack_5c0
; undefined4       Stack[-0x5bc]:4  uStack_5bc
; undefined4       Stack[-0x5b8]:4  uStack_5b8
; undefined4       Stack[-0x5b4]:4  uStack_5b4
; undefined4       Stack[-0x5b0]:4  uStack_5b0
; undefined4       Stack[-0x5ac]:4  uStack_5ac
; undefined4       Stack[-0x5a8]:4  uStack_5a8
; undefined4       Stack[-0x5a4]:4  uStack_5a4
; undefined4       Stack[-0x5a0]:4  uStack_5a0
; undefined4       Stack[-0x59c]:4  uStack_59c
; undefined8       Stack[-0x568]:8  uStack_568
; undefined8       Stack[-0x560]:8  uStack_560
; undefined4       Stack[-0x558]:4  uStack_558
; undefined4       Stack[-0x554]:4  uStack_554
; undefined4       Stack[-0x550]:4  uStack_550
; undefined4       Stack[-0x54c]:4  uStack_54c
; undefined4       Stack[-0x548]:4  uStack_548
; undefined4       Stack[-0x544]:4  uStack_544
; undefined4       Stack[-0x540]:4  uStack_540
; undefined4       Stack[-0x53c]:4  uStack_53c
; double           Stack[-0x518]:8  dStack_518
; double           Stack[-0x510]:8  dStack_510
; double           Stack[-0x508]:8  dStack_508
; double           Stack[-0x500]:8  dStack_500
; double           Stack[-0x4f8]:8  dStack_4f8
; double           Stack[-0x4f0]:8  dStack_4f0
; double           Stack[-0x4e8]:8  dStack_4e8
; double           Stack[-0x4e0]:8  dStack_4e0
; double           Stack[-0x4d8]:8  dStack_4d8
; CVector3d        Stack[-0x4d0]:24  CStack_4d0
; double           Stack[-0x4b8]:8  dStack_4b8
; double           Stack[-0x4b0]:8  dStack_4b0
; double           Stack[-0x4a8]:8  dStack_4a8
; double           Stack[-0x4a0]:8  dStack_4a0
; double           Stack[-0x498]:8  dStack_498
; double           Stack[-0x490]:8  dStack_490
; double           Stack[-0x488]:8  dStack_488
; double           Stack[-0x480]:8  dStack_480
; double           Stack[-0x478]:8  dStack_478
; double           Stack[-0x470]:8  dStack_470
; double           Stack[-0x468]:8  dStack_468
; double           Stack[-0x460]:8  dStack_460
; CVector3d        Stack[-0x458]:24  local_458
; undefined4       Stack[-0x440]:4  uStack_440
; undefined4       Stack[-0x43c]:4  uStack_43c
; undefined4       Stack[-0x438]:4  uStack_438
; undefined4       Stack[-0x434]:4  uStack_434
; undefined4       Stack[-0x430]:4  uStack_430
; undefined4       Stack[-0x42c]:4  uStack_42c
; double           Stack[-0x428]:8  dStack_428
; double           Stack[-0x420]:8  dStack_420
; double           Stack[-0x418]:8  dStack_418
; CVector3d        Stack[-0x410]:24  CStack_410
; double           Stack[-0x3f8]:8  dStack_3f8
; double           Stack[-0x3f0]:8  dStack_3f0
; double           Stack[-0x3e8]:8  dStack_3e8
; undefined4       Stack[-0x3e0]:4  uStack_3e0
; undefined4       Stack[-0x3dc]:4  uStack_3dc
; undefined4       Stack[-0x3d8]:4  uStack_3d8
; undefined4       Stack[-0x3d4]:4  uStack_3d4
; undefined4       Stack[-0x3d0]:4  uStack_3d0
; undefined4       Stack[-0x3cc]:4  uStack_3cc
; CVector3d        Stack[-0x3c8]:24  local_3c8
; double           Stack[-0x3b0]:8  dStack_3b0
; double           Stack[-0x3a8]:8  dStack_3a8
; double           Stack[-0x3a0]:8  dStack_3a0
; double           Stack[-0x398]:8  dStack_398
; double           Stack[-0x390]:8  dStack_390
; double           Stack[-0x388]:8  dStack_388
; double           Stack[-0x380]:8  dStack_380
; double           Stack[-0x378]:8  dStack_378
; double           Stack[-0x370]:8  dStack_370
; double           Stack[-0x368]:8  dStack_368
; double           Stack[-0x360]:8  dStack_360
; double           Stack[-0x358]:8  dStack_358
; undefined4       Stack[-0x350]:4  uStack_350
; undefined4       Stack[-0x34c]:4  uStack_34c
; undefined4       Stack[-0x348]:4  uStack_348
; undefined4       Stack[-0x344]:4  uStack_344
; undefined4       Stack[-0x340]:4  uStack_340
; undefined4       Stack[-0x33c]:4  uStack_33c
; double           Stack[-0x338]:8  dStack_338
; double           Stack[-0x330]:8  dStack_330
; double           Stack[-0x328]:8  dStack_328
; double           Stack[-0x320]:8  dStack_320
; double           Stack[-0x318]:8  dStack_318
; double           Stack[-0x310]:8  dStack_310
; double           Stack[-0x308]:8  dStack_308
; double           Stack[-0x300]:8  dStack_300
; double           Stack[-0x2f8]:8  dStack_2f8
; CVector3d        Stack[-0x2f0]:24  CStack_2f0
; double           Stack[-0x2d8]:8  dStack_2d8
; double           Stack[-0x2d0]:8  dStack_2d0
; double           Stack[-0x2c8]:8  dStack_2c8
; double           Stack[-0x2c0]:8  dStack_2c0
; double           Stack[-0x2b8]:8  dStack_2b8
; double           Stack[-0x2b0]:8  dStack_2b0
; double           Stack[-0x2a8]:8  dStack_2a8
; double           Stack[-0x2a0]:8  dStack_2a0
; double           Stack[-0x298]:8  dStack_298
; double           Stack[-0x290]:8  dStack_290
; double           Stack[-0x288]:8  dStack_288
; double           Stack[-0x280]:8  dStack_280
; double           Stack[-0x278]:8  dStack_278
; double           Stack[-0x270]:8  dStack_270
; double           Stack[-0x268]:8  dStack_268
; double           Stack[-0x260]:8  dStack_260
; double           Stack[-0x258]:8  dStack_258
; double           Stack[-0x250]:8  dStack_250
; double           Stack[-0x248]:8  dStack_248
; double           Stack[-0x240]:8  dStack_240
; double           Stack[-0x238]:8  dStack_238
; double           Stack[-0x230]:8  dStack_230
; double           Stack[-0x228]:8  dStack_228
; double           Stack[-0x220]:8  dStack_220
; undefined4       Stack[-0x218]:4  uStack_218
; undefined4       Stack[-0x214]:4  uStack_214
; undefined4       Stack[-0x210]:4  uStack_210
; undefined4       Stack[-0x20c]:4  uStack_20c
; undefined4       Stack[-0x208]:4  uStack_208
; undefined4       Stack[-0x204]:4  uStack_204
; double           Stack[-0x200]:8  dStack_200
; double           Stack[-0x1f8]:8  dStack_1f8
; double           Stack[-0x1f0]:8  dStack_1f0
; undefined8       Stack[-0x1e8]:8  uStack_1e8
; double           Stack[-0x1e0]:8  dStack_1e0
; undefined8       Stack[-0x1d8]:8  uStack_1d8
; double           Stack[-0x1d0]:8  dStack_1d0
; undefined4       Stack[-0x1c8]:4  uStack_1c8
; undefined4       Stack[-0x1c4]:4  uStack_1c4
; double           Stack[-0x1c0]:8  dStack_1c0
; undefined4       Stack[-0x1b8]:4  uStack_1b8
; undefined4       Stack[-0x1b4]:4  uStack_1b4
; double           Stack[-0x1b0]:8  dStack_1b0
; undefined4       Stack[-0x1a8]:4  uStack_1a8
; undefined4       Stack[-0x1a4]:4  uStack_1a4
; double           Stack[-0x1a0]:8  dStack_1a0
; undefined4       Stack[-0x198]:4  uStack_198
; undefined4       Stack[-0x194]:4  uStack_194
; double           Stack[-0x190]:8  dStack_190
; undefined8       Stack[-0x188]:8  uStack_188
; double           Stack[-0x180]:8  dStack_180
; undefined4       Stack[-0x178]:4  uStack_178
; undefined4       Stack[-0x174]:4  uStack_174
; double           Stack[-0x170]:8  dStack_170
; undefined8       Stack[-0x168]:8  uStack_168
; double           Stack[-0x160]:8  dStack_160
; undefined8       Stack[-0x158]:8  uStack_158
; double           Stack[-0x150]:8  dStack_150
; undefined8       Stack[-0x148]:8  uStack_148
; double           Stack[-0x140]:8  dStack_140
; undefined4       Stack[-0x138]:4  uStack_138
; undefined4[4]    Stack[-0x134]:16  auStack_134
; undefined4       Stack[-0x124]:4  uStack_124
; undefined4       Stack[-0x120]:4  uStack_120
; undefined4       Stack[-0x11c]:4  uStack_11c
; undefined8       Stack[-0x118]:8  uStack_118
; double           Stack[-0x110]:8  dStack_110
; undefined4       Stack[-0x108]:4  uStack_108
; undefined4       Stack[-0x104]:4  uStack_104
; double           Stack[-0x100]:8  dStack_100
; undefined8       Stack[-0xf8]:8  uStack_f8
; double           Stack[-0xf0]:8  dStack_f0
; undefined8       Stack[-0xe8]:8  uStack_e8
; double           Stack[-0xe0]:8  dStack_e0
; undefined4       Stack[-0xd8]:4  uStack_d8
; int[4]           Stack[-0xd4]:16  aiStack_d4
; CVector3d *      Stack[-0xc4]:4  pCStack_c4
; CVector3d *      Stack[-0xc0]:4  pCStack_c0
; CVector3d *      Stack[-0xbc]:4  pCStack_bc
; double *         Stack[-0xb8]:4  pdStack_b8
; double *         Stack[-0xb4]:4  pdStack_b4
; int              Stack[-0xb0]:4  iStack_b0
; int              Stack[-0xac]:4  iStack_ac
; int              Stack[-0xa8]:4  iStack_a8
; int              Stack[-0xa4]:4  iStack_a4
; double *         Stack[-0xa0]:4  pdStack_a0
; double *         Stack[-0x9c]:4  pdStack_9c
; double *         Stack[-0x98]:4  pdStack_98
; double *         Stack[-0x94]:4  pdStack_94
; int              Stack[-0x90]:4  iStack_90
; CVector2d *      Stack[-0x8c]:4  pCStack_8c
; CVector2d *      Stack[-0x88]:4  pCStack_88
; CVector2d *      Stack[-0x84]:4  pCStack_84
; CVector2d *      Stack[-0x80]:4  pCStack_80
; CVector2d *      Stack[-0x7c]:4  pCStack_7c
; CVector2d *      Stack[-0x78]:4  pCStack_78
; CVector2d *      Stack[-0x74]:4  pCStack_74
; CVector2d *      Stack[-0x70]:4  pCStack_70
; int              Stack[-0x6c]:4  iStack_6c
; CVector2d *      Stack[-0x68]:4  pCStack_68
; CVector2d *      Stack[-0x64]:4  pCStack_64
; CVector2d *      Stack[-0x60]:4  pCStack_60
; CVector2d *      Stack[-0x5c]:4  pCStack_5c
; int              Stack[-0x58]:4  iStack_58
; int              Stack[-0x54]:4  iStack_54
; int              Stack[-0x50]:4  iStack_50
; int              Stack[-0x4c]:4  iStack_4c
; CVector3d *      Stack[-0x48]:4  pCStack_48
; CVector3d *      Stack[-0x44]:4  pCStack_44
; CVector3d *      Stack[-0x40]:4  pCStack_40
; CVector3d *      Stack[-0x3c]:4  pCStack_3c
; CVector3d *      Stack[-0x38]:4  pCStack_38
; double *         Stack[-0x34]:4  pdStack_34
; CVector3d *      Stack[-0x30]:4  pCStack_30
; CVector3d *      Stack[-0x2c]:4  pCStack_2c
; CVector3d *      Stack[-0x28]:4  pCStack_28
; double *         Stack[-0x24]:4  pdStack_24
; double *         Stack[-0x20]:4  pdStack_20
; double *         Stack[-0x1c]:4  pdStack_1c
; double *         Stack[-0x18]:4  pdStack_18
;
; Referenced Globals:
;   double DOUBLE_006542e2 = 1.00000000000000E-8
;   double DOUBLE_006542ea = -1.00000000000000E-8
;   WatcomTypeInfo g_CP2DTypeInfo
;   WatcomTypeInfo g_CP3DTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce580
        ;   Label: shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580
    PUSH ESI                            ; 005ce581
    PUSH EDI                            ; 005ce582
    PUSH EBP                            ; 005ce583
    MOV EBP,ESP                         ; 005ce584
    SUB ESP,0x5ec                       ; 005ce586
    AND ESP,0xfffffff8                  ; 005ce58c
    MOV ESI,dword ptr [EBP + 0x14]      ; 005ce58f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005ce592
    LEA EAX,[ESP + 0x1a8]               ; 005ce595
    PUSH EAX                            ; 005ce59c
    LEA EAX,[ESP + 0x23c]               ; 005ce59d
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ce5a4
    PUSH EAX                            ; 005ce5a7
    MOV ECX,dword ptr [EBP + 0x18]      ; 005ce5a8
    MOV EDX,dword ptr [EDX + 0x64]      ; 005ce5ab
    PUSH ECX                            ; 005ce5ae
    CALL dword ptr [EDX + 0x58]         ; 005ce5af
    ADD ESP,0xc                         ; 005ce5b2
    LEA EAX,[ESP + 0x310]               ; 005ce5b5
    PUSH EAX                            ; 005ce5bc
    LEA EAX,[ESP + 0x134]               ; 005ce5bd
    PUSH EAX                            ; 005ce5c4
    MOV EDX,dword ptr [ESI + 0x64]      ; 005ce5c5
    PUSH ESI                            ; 005ce5c8
    CALL dword ptr [EDX + 0x58]         ; 005ce5c9
    ADD ESP,0xc                         ; 005ce5cc
    FLD double ptr [ESP + 0x238]        ; 005ce5cf
    FCOMP double ptr [ESP + 0x310]      ; 005ce5d6
    FNSTSW AX                           ; 005ce5dd
    SAHF                                ; 005ce5df
    JA 0x005ce641                       ; 005ce5e0
        ;   XREF to: 005ce641 (CONDITIONAL_JUMP)  ; LAB_005ce641
    FLD double ptr [ESP + 0x130]        ; 005ce5e2
    FCOMP double ptr [ESP + 0x1a8]      ; 005ce5e9
    FNSTSW AX                           ; 005ce5f0
    SAHF                                ; 005ce5f2
    JA 0x005ce641                       ; 005ce5f3
        ;   XREF to: 005ce641 (CONDITIONAL_JUMP)  ; LAB_005ce641
    FLD double ptr [ESP + 0x240]        ; 005ce5f5
    FCOMP double ptr [ESP + 0x318]      ; 005ce5fc
    FNSTSW AX                           ; 005ce603
    SAHF                                ; 005ce605
    JA 0x005ce641                       ; 005ce606
        ;   XREF to: 005ce641 (CONDITIONAL_JUMP)  ; LAB_005ce641
    FLD double ptr [ESP + 0x138]        ; 005ce608
    FCOMP double ptr [ESP + 0x1b0]      ; 005ce60f
    FNSTSW AX                           ; 005ce616
    SAHF                                ; 005ce618
    JA 0x005ce641                       ; 005ce619
        ;   XREF to: 005ce641 (CONDITIONAL_JUMP)  ; LAB_005ce641
    FLD double ptr [ESP + 0x248]        ; 005ce61b
    FCOMP double ptr [ESP + 0x320]      ; 005ce622
    FNSTSW AX                           ; 005ce629
    SAHF                                ; 005ce62b
    JA 0x005ce641                       ; 005ce62c
        ;   XREF to: 005ce641 (CONDITIONAL_JUMP)  ; LAB_005ce641
    FLD double ptr [ESP + 0x140]        ; 005ce62e
    FCOMP double ptr [ESP + 0x1b8]      ; 005ce635
    FNSTSW AX                           ; 005ce63c
    SAHF                                ; 005ce63e
    JBE 0x005ce64a                      ; 005ce63f
        ;   XREF to: 005ce64a (CONDITIONAL_JUMP)  ; LAB_005ce64a
    XOR EAX,EAX                         ; 005ce641
        ;   Label: LAB_005ce641
    MOV ESP,EBP                         ; 005ce643
    POP EBP                             ; 005ce645
    POP EDI                             ; 005ce646
    POP ESI                             ; 005ce647
    POP EBX                             ; 005ce648
    RET                                 ; 005ce649
    LEA EAX,[ESP + 0x1f0]               ; 005ce64a
        ;   Label: LAB_005ce64a
    PUSH EAX                            ; 005ce651
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ce652
    MOV EAX,dword ptr [EAX + 0x8]       ; 005ce655
    MOV ECX,dword ptr [EBP + 0x18]      ; 005ce658
    SHL EAX,0x3                         ; 005ce65b
    MOV ECX,dword ptr [ECX]             ; 005ce65e
    MOV EDX,EAX                         ; 005ce660
    SHL EAX,0x3                         ; 005ce662
    MOV ECX,dword ptr [ECX + 0x4]       ; 005ce665
    SUB EAX,EDX                         ; 005ce668
    ADD EAX,ECX                         ; 005ce66a
    PUSH EAX                            ; 005ce66c
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ce66d
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ce670
    SHL EAX,0x3                         ; 005ce673
    MOV EDX,EAX                         ; 005ce676
    SHL EAX,0x3                         ; 005ce678
    SUB EAX,EDX                         ; 005ce67b
    ADD EAX,ECX                         ; 005ce67d
    PUSH EAX                            ; 005ce67f
    MOV EDI,dword ptr [ESI + 0x64]      ; 005ce680
    PUSH ESI                            ; 005ce683
    CALL dword ptr [EDI + 0x60]         ; 005ce684
    ADD ESP,0x10                        ; 005ce687
    TEST EAX,EAX                        ; 005ce68a
    JNZ 0x005ce6d6                      ; 005ce68c
        ;   XREF to: 005ce6d6 (CONDITIONAL_JUMP)  ; LAB_005ce6d6
    LEA EAX,[ESP + 0x1f0]               ; 005ce68e
    PUSH EAX                            ; 005ce695
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ce696
    MOV EAX,dword ptr [EAX + 0xc]       ; 005ce699
    MOV ECX,dword ptr [EBP + 0x18]      ; 005ce69c
    SHL EAX,0x3                         ; 005ce69f
    MOV ECX,dword ptr [ECX]             ; 005ce6a2
    MOV EDX,EAX                         ; 005ce6a4
    SHL EAX,0x3                         ; 005ce6a6
    MOV ECX,dword ptr [ECX + 0x4]       ; 005ce6a9
    SUB EAX,EDX                         ; 005ce6ac
    ADD EAX,ECX                         ; 005ce6ae
    PUSH EAX                            ; 005ce6b0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ce6b1
    MOV EAX,dword ptr [EAX + 0x8]       ; 005ce6b4
    SHL EAX,0x3                         ; 005ce6b7
    MOV EDX,EAX                         ; 005ce6ba
    SHL EAX,0x3                         ; 005ce6bc
    SUB EAX,EDX                         ; 005ce6bf
    ADD ECX,EAX                         ; 005ce6c1
    PUSH ECX                            ; 005ce6c3
    MOV EDI,dword ptr [ESI + 0x64]      ; 005ce6c4
    PUSH ESI                            ; 005ce6c7
    CALL dword ptr [EDI + 0x60]         ; 005ce6c8
    ADD ESP,0x10                        ; 005ce6cb
    TEST EAX,EAX                        ; 005ce6ce
    JZ 0x005cf169                       ; 005ce6d0
        ;   XREF to: 005cf169 (CONDITIONAL_JUMP)  ; LAB_005cf169
    PUSH 0x148                          ; 005ce6d6
        ;   Label: LAB_005ce6d6
    PUSH 0x0                            ; 005ce6db
    PUSH EBX                            ; 005ce6dd
    CALL crt_memory.c_memset_FUN_005fde40 ; 005ce6de
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ce6e3
    PUSH 0x663cc0                       ; 005ce6e6 | g_CP3DTypeInfo
    PUSH 0x5                            ; 005ce6eb
    LEA EAX,[ESP + 0x28]                ; 005ce6ed
    MOV EDI,dword ptr [ESI]             ; 005ce6f1
    PUSH EAX                            ; 005ce6f3
    MOV EDI,dword ptr [EDI + 0x4]       ; 005ce6f4
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005ce6f7
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV EAX,dword ptr [ESI + 0x4]       ; 005ce6fc
    SHL EAX,0x3                         ; 005ce6ff
    MOV EDX,EAX                         ; 005ce702
    SHL EAX,0x3                         ; 005ce704
    SUB EAX,EDX                         ; 005ce707
    LEA EDX,[EDI + EAX*0x1]             ; 005ce709
    ADD ESP,0xc                         ; 005ce70c
    MOV EAX,dword ptr [EDX]             ; 005ce70f
    MOV dword ptr [ESP + 0x20],EAX      ; 005ce711
    MOV EAX,dword ptr [EDX + 0x4]       ; 005ce715
    MOV dword ptr [ESP + 0x24],EAX      ; 005ce718
    MOV EAX,dword ptr [EDX + 0x8]       ; 005ce71c
    MOV dword ptr [ESP + 0x28],EAX      ; 005ce71f
    MOV EAX,dword ptr [EDX + 0xc]       ; 005ce723
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ce726
    MOV EAX,dword ptr [EDX + 0x10]      ; 005ce72a
    MOV dword ptr [ESP + 0x30],EAX      ; 005ce72d
    MOV EAX,dword ptr [EDX + 0x14]      ; 005ce731
    MOV dword ptr [ESP + 0x34],EAX      ; 005ce734
    MOV EAX,dword ptr [ESI + 0x8]       ; 005ce738
    SHL EAX,0x3                         ; 005ce73b
    MOV EDX,EAX                         ; 005ce73e
    SHL EAX,0x3                         ; 005ce740
    SUB EAX,EDX                         ; 005ce743
    LEA EDX,[EDI + EAX*0x1]             ; 005ce745
    MOV EAX,dword ptr [EDX]             ; 005ce748
    MOV dword ptr [ESP + 0x38],EAX      ; 005ce74a
    MOV EAX,dword ptr [EDX + 0x4]       ; 005ce74e
    MOV dword ptr [ESP + 0x3c],EAX      ; 005ce751
    MOV EAX,dword ptr [EDX + 0x8]       ; 005ce755
    MOV dword ptr [ESP + 0x40],EAX      ; 005ce758
    MOV EAX,dword ptr [EDX + 0xc]       ; 005ce75c
    MOV dword ptr [ESP + 0x44],EAX      ; 005ce75f
    MOV EAX,dword ptr [EDX + 0x10]      ; 005ce763
    MOV dword ptr [ESP + 0x48],EAX      ; 005ce766
    MOV EAX,dword ptr [EDX + 0x14]      ; 005ce76a
    MOV dword ptr [ESP + 0x4c],EAX      ; 005ce76d
    MOV EAX,dword ptr [ESI + 0xc]       ; 005ce771
    SHL EAX,0x3                         ; 005ce774
    MOV EDX,EAX                         ; 005ce777
    SHL EAX,0x3                         ; 005ce779
    SUB EAX,EDX                         ; 005ce77c
    LEA EDX,[EDI + EAX*0x1]             ; 005ce77e
    MOV EAX,dword ptr [EDX]             ; 005ce781
    MOV dword ptr [ESP + 0x50],EAX      ; 005ce783
    MOV EAX,dword ptr [EDX + 0x4]       ; 005ce787
    MOV dword ptr [ESP + 0x54],EAX      ; 005ce78a
    MOV EAX,dword ptr [EDX + 0x8]       ; 005ce78e
    MOV dword ptr [ESP + 0x58],EAX      ; 005ce791
    MOV EAX,dword ptr [EDX + 0xc]       ; 005ce795
    MOV dword ptr [ESP + 0x5c],EAX      ; 005ce798
    MOV EAX,dword ptr [EDX + 0x10]      ; 005ce79c
    MOV dword ptr [ESP + 0x60],EAX      ; 005ce79f
    PUSH 0x663ca0                       ; 005ce7a3 | g_CP2DTypeInfo
    MOV EAX,dword ptr [EDX + 0x14]      ; 005ce7a8
    PUSH 0x5                            ; 005ce7ab
    MOV dword ptr [ESP + 0x6c],EAX      ; 005ce7ad
    LEA EAX,[ESP + 0xa0]                ; 005ce7b1
    PUSH EAX                            ; 005ce7b8
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005ce7b9
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EDX,[ESI + 0x10]                ; 005ce7be
    ADD ESP,0xc                         ; 005ce7c1
    MOV EAX,dword ptr [EDX]             ; 005ce7c4
    MOV dword ptr [ESP + 0x98],EAX      ; 005ce7c6
    MOV EAX,dword ptr [EDX + 0x4]       ; 005ce7cd
    MOV dword ptr [ESP + 0x9c],EAX      ; 005ce7d0
    MOV EAX,dword ptr [EDX + 0x8]       ; 005ce7d7
    MOV dword ptr [ESP + 0xa0],EAX      ; 005ce7da
    MOV EAX,dword ptr [EDX + 0xc]       ; 005ce7e1
    LEA EDX,[ESI + 0x20]                ; 005ce7e4
    MOV dword ptr [ESP + 0xa4],EAX      ; 005ce7e7
    MOV EAX,dword ptr [EDX]             ; 005ce7ee
    MOV dword ptr [ESP + 0xa8],EAX      ; 005ce7f0
    MOV EAX,dword ptr [EDX + 0x4]       ; 005ce7f7
    MOV dword ptr [ESP + 0xac],EAX      ; 005ce7fa
    MOV EAX,dword ptr [EDX + 0x8]       ; 005ce801
    MOV dword ptr [ESP + 0xb0],EAX      ; 005ce804
    MOV EAX,dword ptr [EDX + 0xc]       ; 005ce80b
    MOV dword ptr [ESP + 0xb4],EAX      ; 005ce80e
    MOV EAX,dword ptr [ESI + 0x30]      ; 005ce815
    MOV dword ptr [ESP + 0xb8],EAX      ; 005ce818
    MOV EAX,dword ptr [ESI + 0x34]      ; 005ce81f
    MOV dword ptr [ESP + 0xbc],EAX      ; 005ce822
    MOV EAX,dword ptr [ESI + 0x38]      ; 005ce829
    MOV dword ptr [ESP + 0xc0],EAX      ; 005ce82c
    MOV EAX,dword ptr [ESI + 0x3c]      ; 005ce833
    MOV dword ptr [ESP + 0xc4],EAX      ; 005ce836
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ce83d
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ce840
    SHL EAX,0x3                         ; 005ce843
    LEA ESI,[EAX*0x8 + 0x0]             ; 005ce846
    SUB ESI,EAX                         ; 005ce84d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ce84f
    MOV EAX,dword ptr [EAX]             ; 005ce852
    LEA EDI,[ESP + 0x2e0]               ; 005ce854
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ce85b
    MOV ECX,0x6                         ; 005ce85e
    ADD ESI,EAX                         ; 005ce863
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ce865
    MOVSD.REP ES:EDI,ESI                ; 005ce868
    MOV EDX,dword ptr [EAX + 0x40]      ; 005ce86a
    MOV dword ptr [ESP + 0x3e8],EDX     ; 005ce86d
    MOV EDX,dword ptr [EAX + 0x44]      ; 005ce874
    MOV dword ptr [ESP + 0x3ec],EDX     ; 005ce877
    MOV EDX,dword ptr [EAX + 0x48]      ; 005ce87e
    MOV dword ptr [ESP + 0x3f0],EDX     ; 005ce881
    MOV EDX,dword ptr [EAX + 0x4c]      ; 005ce888
    MOV dword ptr [ESP + 0x3f4],EDX     ; 005ce88b
    MOV EDX,dword ptr [EAX + 0x50]      ; 005ce892
    MOV EAX,dword ptr [EAX + 0x54]      ; 005ce895
    MOV dword ptr [ESP + 0x3f8],EDX     ; 005ce898
    MOV dword ptr [ESP + 0x3fc],EAX     ; 005ce89f
    FLD double ptr [ESP + 0x2e0]        ; 005ce8a6
    FMUL double ptr [ESP + 0x3e8]       ; 005ce8ad
    FLD double ptr [ESP + 0x2e8]        ; 005ce8b4
    FMUL double ptr [ESP + 0x3f0]       ; 005ce8bb
    FLD double ptr [ESP + 0x2f0]        ; 005ce8c2
    FMUL double ptr [ESP + 0x3f8]       ; 005ce8c9
    FLD double ptr [ESP + 0x3e8]        ; 005ce8d0
    FMUL double ptr [ESP + 0x20]        ; 005ce8d7
    FLD double ptr [ESP + 0x3f0]        ; 005ce8db
    FMUL double ptr [ESP + 0x28]        ; 005ce8e2
    FLD double ptr [ESP + 0x3f8]        ; 005ce8e6
    FMUL double ptr [ESP + 0x30]        ; 005ce8ed
    FLD double ptr [ESP + 0x3e8]        ; 005ce8f1
    FMUL double ptr [ESP + 0x38]        ; 005ce8f8
    FXCH ST6                            ; 005ce8fc
    FSTP double ptr [ESP + 0x250]       ; 005ce8fe
    FLD double ptr [ESP + 0x3f0]        ; 005ce905
    FMUL double ptr [ESP + 0x40]        ; 005ce90c
    FXCH ST5                            ; 005ce910
    FSTP double ptr [ESP + 0x258]       ; 005ce912
    FLD double ptr [ESP + 0x3f8]        ; 005ce919
    FMUL double ptr [ESP + 0x48]        ; 005ce920
    FXCH ST4                            ; 005ce924
    FSTP double ptr [ESP + 0x260]       ; 005ce926
    FLD double ptr [ESP + 0x3e8]        ; 005ce92d
    FMUL double ptr [ESP + 0x50]        ; 005ce934
    MOV ECX,0x6                         ; 005ce938
    LEA EDI,[ESP + 0x3b8]               ; 005ce93d
    LEA ESI,[ESP + 0x250]               ; 005ce944
    FXCH ST3                            ; 005ce94b
    FSTP double ptr [ESP + 0x118]       ; 005ce94d
    FLD double ptr [ESP + 0x3f0]        ; 005ce954
    FMUL double ptr [ESP + 0x58]        ; 005ce95b
    FXCH ST2                            ; 005ce95f
    FSTP double ptr [ESP + 0x120]       ; 005ce961
    FLD double ptr [ESP + 0x3f8]        ; 005ce968
    FMUL double ptr [ESP + 0x60]        ; 005ce96f
    FXCH                                ; 005ce973
    FSTP double ptr [ESP + 0x128]       ; 005ce975
    FXCH ST5                            ; 005ce97c
    FSTP double ptr [ESP + 0x328]       ; 005ce97e
    FXCH ST3                            ; 005ce985
    FSTP double ptr [ESP + 0x330]       ; 005ce987
    FXCH                                ; 005ce98e
    FSTP double ptr [ESP + 0x338]       ; 005ce990
    FSTP double ptr [ESP + 0x340]       ; 005ce997
    FSTP double ptr [ESP + 0x348]       ; 005ce99e
    MOVSD.REP ES:EDI,ESI                ; 005ce9a5
    FSTP double ptr [ESP + 0x350]       ; 005ce9a7
    MOV ECX,0x6                         ; 005ce9ae
    LEA EDI,[ESP + 0x268]               ; 005ce9b3
    LEA ESI,[ESP + 0x118]               ; 005ce9ba
    FLD double ptr [ESP + 0x3b8]        ; 005ce9c1
    MOVSD.REP ES:EDI,ESI                ; 005ce9c8
    FADD double ptr [ESP + 0x3c0]       ; 005ce9ca
    FLD double ptr [ESP + 0x268]        ; 005ce9d1
    MOV ECX,0x6                         ; 005ce9d8
    LEA EDI,[ESP + 0x388]               ; 005ce9dd
    FXCH                                ; 005ce9e4
    FADD double ptr [ESP + 0x3c8]       ; 005ce9e6
    LEA ESI,[ESP + 0x328]               ; 005ce9ed
    FCHS                                ; 005ce9f4
    MOVSD.REP ES:EDI,ESI                ; 005ce9f6
    FXCH                                ; 005ce9f8
    FADD double ptr [ESP + 0x270]       ; 005ce9fa
    FLD double ptr [ESP + 0x388]        ; 005cea01
    FXCH ST2                            ; 005cea08
    FSTP double ptr [ESP + 0x18]        ; 005cea0a
    MOV ECX,0x6                         ; 005cea0e
    LEA EDI,[ESP + 0x190]               ; 005cea13
    LEA ESI,[ESP + 0x340]               ; 005cea1a
    FADD double ptr [ESP + 0x278]       ; 005cea21
    FXCH                                ; 005cea28
    FADD double ptr [ESP + 0x390]       ; 005cea2a
    MOVSD.REP ES:EDI,ESI                ; 005cea31
    FXCH                                ; 005cea33
    FADD double ptr [ESP + 0x18]        ; 005cea35
    FLD double ptr [ESP + 0x190]        ; 005cea39
    FXCH                                ; 005cea40
    FSTP double ptr [ESP + 0x208]       ; 005cea42
    FXCH                                ; 005cea49
    FADD double ptr [ESP + 0x398]       ; 005cea4b
    FXCH                                ; 005cea52
    FADD double ptr [ESP + 0x198]       ; 005cea54
    FLD double ptr [ESP + 0x208]        ; 005cea5b
    FXCH                                ; 005cea62
    FADD double ptr [ESP + 0x1a0]       ; 005cea64
    FXCH ST2                            ; 005cea6b
    FADD double ptr [ESP + 0x18]        ; 005cea6d
    FXCH ST2                            ; 005cea71
    FADD double ptr [ESP + 0x18]        ; 005cea73
    FXCH ST2                            ; 005cea77
    FSTP double ptr [ESP + 0x210]       ; 005cea79
    FXCH                                ; 005cea80
    FSTP double ptr [ESP + 0x218]       ; 005cea82
    FCOMP double ptr [0x006542e2]       ; 005cea89 | DOUBLE_006542e2
    FNSTSW AX                           ; 005cea8f
    SAHF                                ; 005cea91
    JNC 0x005ceab6                      ; 005cea92
        ;   XREF to: 005ceab6 (CONDITIONAL_JUMP)  ; LAB_005ceab6
    FLD double ptr [ESP + 0x208]        ; 005cea94
    FCOMP double ptr [0x006542ea]       ; 005cea9b | DOUBLE_006542ea
    FNSTSW AX                           ; 005ceaa1
    SAHF                                ; 005ceaa3
    JBE 0x005ceab6                      ; 005ceaa4
        ;   XREF to: 005ceab6 (CONDITIONAL_JUMP)  ; LAB_005ceab6
    XOR ESI,ESI                         ; 005ceaa6
    MOV dword ptr [ESP + 0x208],ESI     ; 005ceaa8
    MOV dword ptr [ESP + 0x20c],ESI     ; 005ceaaf
    FLD double ptr [ESP + 0x210]        ; 005ceab6
        ;   Label: LAB_005ceab6
    FCOMP double ptr [0x006542e2]       ; 005ceabd | DOUBLE_006542e2
    FNSTSW AX                           ; 005ceac3
    SAHF                                ; 005ceac5
    JNC 0x005ceaea                      ; 005ceac6
        ;   XREF to: 005ceaea (CONDITIONAL_JUMP)  ; LAB_005ceaea
    FLD double ptr [ESP + 0x210]        ; 005ceac8
    FCOMP double ptr [0x006542ea]       ; 005ceacf | DOUBLE_006542ea
    FNSTSW AX                           ; 005cead5
    SAHF                                ; 005cead7
    JBE 0x005ceaea                      ; 005cead8
        ;   XREF to: 005ceaea (CONDITIONAL_JUMP)  ; LAB_005ceaea
    XOR EAX,EAX                         ; 005ceada
    MOV dword ptr [ESP + 0x210],EAX     ; 005ceadc
    MOV dword ptr [ESP + 0x214],EAX     ; 005ceae3
    FLD double ptr [ESP + 0x218]        ; 005ceaea
        ;   Label: LAB_005ceaea
    FCOMP double ptr [0x006542e2]       ; 005ceaf1 | DOUBLE_006542e2
    FNSTSW AX                           ; 005ceaf7
    SAHF                                ; 005ceaf9
    JNC 0x005ceb1e                      ; 005ceafa
        ;   XREF to: 005ceb1e (CONDITIONAL_JUMP)  ; LAB_005ceb1e
    FLD double ptr [ESP + 0x218]        ; 005ceafc
    FCOMP double ptr [0x006542ea]       ; 005ceb03 | DOUBLE_006542ea
    FNSTSW AX                           ; 005ceb09
    SAHF                                ; 005ceb0b
    JBE 0x005ceb1e                      ; 005ceb0c
        ;   XREF to: 005ceb1e (CONDITIONAL_JUMP)  ; LAB_005ceb1e
    XOR ECX,ECX                         ; 005ceb0e
    MOV dword ptr [ESP + 0x218],ECX     ; 005ceb10
    MOV dword ptr [ESP + 0x21c],ECX     ; 005ceb17
    FLDZ                                ; 005ceb1e
        ;   Label: LAB_005ceb1e
    FCOMP double ptr [ESP + 0x208]      ; 005ceb20
    FNSTSW AX                           ; 005ceb27
    SAHF                                ; 005ceb29
    JA 0x005ceb4c                       ; 005ceb2a
        ;   XREF to: 005ceb4c (CONDITIONAL_JUMP)  ; LAB_005ceb4c
    FLDZ                                ; 005ceb2c
    FCOMP double ptr [ESP + 0x210]      ; 005ceb2e
    FNSTSW AX                           ; 005ceb35
    SAHF                                ; 005ceb37
    JA 0x005ceb4c                       ; 005ceb38
        ;   XREF to: 005ceb4c (CONDITIONAL_JUMP)  ; LAB_005ceb4c
    FLDZ                                ; 005ceb3a
    FCOMP double ptr [ESP + 0x218]      ; 005ceb3c
    FNSTSW AX                           ; 005ceb43
    SAHF                                ; 005ceb45
    JBE 0x005ce641                      ; 005ceb46
        ;   XREF to: 005ce641 (CONDITIONAL_JUMP)  ; LAB_005ce641
    FLDZ                                ; 005ceb4c
        ;   Label: LAB_005ceb4c
    FCOMP double ptr [ESP + 0x208]      ; 005ceb4e
    FNSTSW AX                           ; 005ceb55
    SAHF                                ; 005ceb57
    JC 0x005ceb7a                       ; 005ceb58
        ;   XREF to: 005ceb7a (CONDITIONAL_JUMP)  ; LAB_005ceb7a
    FLDZ                                ; 005ceb5a
    FCOMP double ptr [ESP + 0x210]      ; 005ceb5c
    FNSTSW AX                           ; 005ceb63
    SAHF                                ; 005ceb65
    JC 0x005ceb7a                       ; 005ceb66
        ;   XREF to: 005ceb7a (CONDITIONAL_JUMP)  ; LAB_005ceb7a
    FLDZ                                ; 005ceb68
    FCOMP double ptr [ESP + 0x218]      ; 005ceb6a
    FNSTSW AX                           ; 005ceb71
    SAHF                                ; 005ceb73
    JNC 0x005ce641                      ; 005ceb74
        ;   XREF to: 005ce641 (CONDITIONAL_JUMP)  ; LAB_005ce641
    MOV EDI,dword ptr [ESP + 0x20c]     ; 005ceb7a
        ;   Label: LAB_005ceb7a
    MOV EAX,dword ptr [ESP + 0x208]     ; 005ceb81
    TEST EDI,0x7fffffff                 ; 005ceb88
    JNZ 0x005cf287                      ; 005ceb8e
        ;   XREF to: 005cf287 (CONDITIONAL_JUMP)  ; LAB_005cf287
    TEST EAX,EAX                        ; 005ceb94
    JNZ 0x005cf287                      ; 005ceb96
        ;   XREF to: 005cf287 (CONDITIONAL_JUMP)  ; LAB_005cf287
    MOV EDX,0x3                         ; 005ceb9c
        ;   Label: LAB_005ceb9c
    MOV ECX,dword ptr [ESP + 0x20c]     ; 005ceba1
    MOV ESI,dword ptr [ESP + 0x208]     ; 005ceba8
    MOV dword ptr [ESP + 0x558],EDX     ; 005cebaf
    TEST ECX,0x7fffffff                 ; 005cebb6
    JNZ 0x005cfb29                      ; 005cebbc
        ;   XREF to: 005cfb29 (CONDITIONAL_JUMP)  ; LAB_005cfb29
    TEST ESI,ESI                        ; 005cebc2
    JNZ 0x005cfb29                      ; 005cebc4
        ;   XREF to: 005cfb29 (CONDITIONAL_JUMP)  ; LAB_005cfb29
    MOV ESI,0x1                         ; 005cebca
    MOV EDI,0x2                         ; 005cebcf
    XOR ECX,ECX                         ; 005cebd4
    MOV dword ptr [ESP + 0x5b4],ESI     ; 005cebd6
    MOV dword ptr [ESP + 0x5ac],EDI     ; 005cebdd
    MOV dword ptr [ESP + 0x594],ECX     ; 005cebe4
    MOV EAX,dword ptr [ESP + 0x5b4]     ; 005cebeb
        ;   Label: LAB_005cebeb
    SHL EAX,0x3                         ; 005cebf2
    MOV dword ptr [ESP + 0x570],EAX     ; 005cebf5
    MOV EDX,dword ptr [ESP + 0x570]     ; 005cebfc
    MOV EAX,dword ptr [ESP + 0x5ac]     ; 005cec03
    FLD double ptr [ESP + EDX*0x1 + 0x208] ; 005cec0a
    FSUB double ptr [ESP + EAX*0x8 + 0x208] ; 005cec11
    FDIVR double ptr [ESP + EDX*0x1 + 0x208] ; 005cec18
    MOV EDX,EAX                         ; 005cec1f
    SHL EAX,0x2                         ; 005cec21
    SUB EAX,EDX                         ; 005cec24
    LEA EDX,[ESP + 0x20]                ; 005cec26
    SHL EAX,0x3                         ; 005cec2a
    ADD EDX,EAX                         ; 005cec2d
    MOV dword ptr [ESP + 0x5e8],EDX     ; 005cec2f
    MOV EDX,dword ptr [ESP + 0x5b4]     ; 005cec36
    LEA EAX,[EDX*0x4 + 0x0]             ; 005cec3d
    SUB EAX,EDX                         ; 005cec44
    LEA EDX,[EAX*0x8 + 0x0]             ; 005cec46
    LEA EAX,[ESP + 0x20]                ; 005cec4d
    ADD EAX,EDX                         ; 005cec51
    FLD double ptr [EAX]                ; 005cec53
    MOV dword ptr [ESP + 0x564],EAX     ; 005cec55
    MOV EAX,dword ptr [ESP + 0x5e8]     ; 005cec5c
    FSUB double ptr [EAX]               ; 005cec63
    MOV EAX,dword ptr [ESP + 0x564]     ; 005cec65
    FLD double ptr [EAX + 0x8]          ; 005cec6c
    MOV EAX,dword ptr [ESP + 0x5e8]     ; 005cec6f
    MOV ECX,0x6                         ; 005cec76
    FSUB double ptr [EAX + 0x8]         ; 005cec7b
    MOV EAX,dword ptr [ESP + 0x564]     ; 005cec7e
    LEA EDI,[ESP + 0x148]               ; 005cec85
    LEA ESI,[ESP + 0x3d0]               ; 005cec8c
    FLD double ptr [EAX + 0x10]         ; 005cec93
    MOV EAX,dword ptr [ESP + 0x5e8]     ; 005cec96
    FXCH ST2                            ; 005cec9d
    FSTP double ptr [ESP + 0x3d0]       ; 005cec9f
    FXCH                                ; 005ceca6
    FSUB double ptr [EAX + 0x10]        ; 005ceca8
    FXCH                                ; 005cecab
    FSTP double ptr [ESP + 0x3d8]       ; 005cecad
    FSTP double ptr [ESP + 0x3e0]       ; 005cecb4
    MOVSD.REP ES:EDI,ESI                ; 005cecbb
    FSTP double ptr [ESP + 0x8]         ; 005cecbd
    FLD double ptr [ESP + 0x148]        ; 005cecc1
    FMUL double ptr [ESP + 0x8]         ; 005cecc8
    FLD double ptr [ESP + 0x150]        ; 005ceccc
    FMUL double ptr [ESP + 0x8]         ; 005cecd3
    FLD double ptr [ESP + 0x158]        ; 005cecd7
    FMUL double ptr [ESP + 0x8]         ; 005cecde
    MOV EAX,dword ptr [ESP + 0x564]     ; 005cece2
    MOV ECX,0x6                         ; 005cece9
    LEA EDI,[ESP + 0x3a0]               ; 005cecee
    LEA ESI,[ESP + 0x370]               ; 005cecf5
    FXCH ST2                            ; 005cecfc
    FSTP double ptr [ESP + 0x370]       ; 005cecfe
    FSTP double ptr [ESP + 0x378]       ; 005ced05
    FSTP double ptr [ESP + 0x380]       ; 005ced0c
    MOVSD.REP ES:EDI,ESI                ; 005ced13
    MOV EDX,dword ptr [ESP + 0x558]     ; 005ced15
    FLD double ptr [EAX + 0x8]          ; 005ced1c
    FLD double ptr [EAX + 0x10]         ; 005ced1f
    FLD double ptr [EAX]                ; 005ced22
    MOV ECX,0x6                         ; 005ced24
    LEA EDI,[ESP + 0x220]               ; 005ced29
    LEA ESI,[ESP + 0x1d8]               ; 005ced30
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ced37
    FSUB double ptr [ESP + 0x3a0]       ; 005ced3e
    FXCH ST2                            ; 005ced45
    FSUB double ptr [ESP + 0x3a8]       ; 005ced47
    FXCH                                ; 005ced4e
    FSUB double ptr [ESP + 0x3b0]       ; 005ced50
    FXCH ST2                            ; 005ced57
    FSTP double ptr [ESP + 0x1d8]       ; 005ced59
    FSTP double ptr [ESP + 0x1e0]       ; 005ced60
    FSTP double ptr [ESP + 0x1e8]       ; 005ced67
    SUB EAX,EDX                         ; 005ced6e
    LEA EDX,[ESP + 0x20]                ; 005ced70
    SHL EAX,0x3                         ; 005ced74
    MOVSD.REP ES:EDI,ESI                ; 005ced77
    ADD EDX,EAX                         ; 005ced79
    MOV EAX,dword ptr [ESP + 0x220]     ; 005ced7b
    MOV dword ptr [EDX],EAX             ; 005ced82
    MOV EAX,dword ptr [ESP + 0x224]     ; 005ced84
    MOV dword ptr [EDX + 0x4],EAX       ; 005ced8b
    MOV EAX,dword ptr [ESP + 0x228]     ; 005ced8e
    MOV dword ptr [EDX + 0x8],EAX       ; 005ced95
    MOV EAX,dword ptr [ESP + 0x22c]     ; 005ced98
    MOV dword ptr [EDX + 0xc],EAX       ; 005ced9f
    MOV EAX,dword ptr [ESP + 0x230]     ; 005ceda2
    MOV dword ptr [EDX + 0x10],EAX      ; 005ceda9
    MOV EAX,dword ptr [ESP + 0x234]     ; 005cedac
    MOV dword ptr [EDX + 0x14],EAX      ; 005cedb3
    MOV EAX,dword ptr [ESP + 0x5ac]     ; 005cedb6
    LEA ECX,[ESP + 0x98]                ; 005cedbd
    SHL EAX,0x4                         ; 005cedc4
    ADD ECX,EAX                         ; 005cedc7
    MOV dword ptr [ESP + 0x5cc],ECX     ; 005cedc9
    MOV ECX,dword ptr [ESP + 0x5b4]     ; 005cedd0
    LEA EAX,[ESP + 0x98]                ; 005cedd7
    SHL ECX,0x4                         ; 005cedde
    ADD EAX,ECX                         ; 005cede1
    FLD double ptr [EAX]                ; 005cede3
    MOV dword ptr [ESP + 0x5e4],EAX     ; 005cede5
    MOV EAX,dword ptr [ESP + 0x5cc]     ; 005cedec
    FSUB double ptr [EAX]               ; 005cedf3
    MOV EAX,dword ptr [ESP + 0x5e4]     ; 005cedf5
    FLD double ptr [EAX + 0x8]          ; 005cedfc
    MOV EAX,dword ptr [ESP + 0x5cc]     ; 005cedff
    LEA EDI,[ESP + 0x4f8]               ; 005cee06
    LEA ESI,[ESP + 0x428]               ; 005cee0d
    FSUB double ptr [EAX + 0x8]         ; 005cee14
    FXCH                                ; 005cee17
    FSTP double ptr [ESP + 0x428]       ; 005cee19
    FSTP double ptr [ESP + 0x430]       ; 005cee20
    JMP 0x006058d9                      ; 005cee27
        ;   XREF to: 006058d9 (UNCONDITIONAL_JUMP)  ; LAB_006058d9
    FMUL double ptr [ESP + 0x8]         ; 005cee32
        ;   Label: LAB_005cee32
    FLD double ptr [ESP + 0x500]        ; 005cee36
    FMUL double ptr [ESP + 0x8]         ; 005cee3d
    MOV EAX,dword ptr [ESP + 0x5e4]     ; 005cee41
    LEA EDI,[ESP + 0x468]               ; 005cee48
    LEA ESI,[ESP + 0x518]               ; 005cee4f
    FXCH                                ; 005cee56
    FSTP double ptr [ESP + 0x518]       ; 005cee58
    FSTP double ptr [ESP + 0x520]       ; 005cee5f
    JMP 0x00605901                      ; 005cee66
        ;   XREF to: 00605901 (UNCONDITIONAL_JUMP)  ; LAB_00605901
    FLD double ptr [EAX]                ; 005cee6d
        ;   Label: LAB_005cee6d
    LEA EDI,[ESP + 0x4c8]               ; 005cee6f
    LEA ESI,[ESP + 0x508]               ; 005cee76
    MOV EAX,dword ptr [ESP + 0x558]     ; 005cee7d
    FSUB double ptr [ESP + 0x468]       ; 005cee84
    FXCH                                ; 005cee8b
    FSUB double ptr [ESP + 0x470]       ; 005cee8d
    FXCH                                ; 005cee94
    FSTP double ptr [ESP + 0x508]       ; 005cee96
    FSTP double ptr [ESP + 0x510]       ; 005cee9d
    JMP 0x00605925                      ; 005ceea4
        ;   XREF to: 00605925 (UNCONDITIONAL_JUMP)  ; LAB_00605925
    LEA ESI,[ESP + 0x98]                ; 005ceeab
        ;   Label: LAB_005ceeab
    ADD ESI,EAX                         ; 005ceeb2
    MOV EAX,dword ptr [ESP + 0x4c8]     ; 005ceeb4
    MOV dword ptr [ESI],EAX             ; 005ceebb
    MOV EAX,dword ptr [ESP + 0x4cc]     ; 005ceebd
    MOV dword ptr [ESI + 0x4],EAX       ; 005ceec4
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 005ceec7
    MOV dword ptr [ESI + 0x8],EAX       ; 005ceece
    MOV EAX,dword ptr [ESP + 0x4d4]     ; 005ceed1
    MOV dword ptr [ESI + 0xc],EAX       ; 005ceed8
    LEA EAX,[EBX + 0x128]               ; 005ceedb
    MOV dword ptr [ESP + 0x584],EAX     ; 005ceee1
    LEA EAX,[EBX + 0xd8]                ; 005ceee8
    MOV dword ptr [ESP + 0x5d4],EAX     ; 005ceeee
    LEA EAX,[EBX + 0x118]               ; 005ceef5
    MOV dword ptr [ESP + 0x598],EAX     ; 005ceefb
    LEA EAX,[EBX + 0xc0]                ; 005cef02
    MOV dword ptr [ESP + 0x544],EAX     ; 005cef08
    LEA EAX,[EBX + 0x108]               ; 005cef0f
    MOV dword ptr [ESP + 0x578],EAX     ; 005cef15
    LEA EAX,[EBX + 0xa8]                ; 005cef1c
    MOV dword ptr [ESP + 0x5d8],EAX     ; 005cef22
    LEA EAX,[EBX + 0x84]                ; 005cef29
    MOV dword ptr [ESP + 0x57c],EAX     ; 005cef2f
    LEA EAX,[EBX + 0x34]                ; 005cef36
    MOV dword ptr [ESP + 0x5c8],EAX     ; 005cef39
    LEA EAX,[EBX + 0x74]                ; 005cef40
    MOV dword ptr [ESP + 0x58c],EAX     ; 005cef43
    LEA EAX,[EBX + 0x1c]                ; 005cef4a
    MOV dword ptr [ESP + 0x5c4],EAX     ; 005cef4d
    LEA EAX,[EBX + 0x64]                ; 005cef54
    MOV dword ptr [ESP + 0x590],EAX     ; 005cef57
    LEA EAX,[EBX + 0x4]                 ; 005cef5e
    MOV ECX,dword ptr [ESP + 0x594]     ; 005cef61
    MOV dword ptr [ESP + 0x53c],EAX     ; 005cef68
    LEA EAX,[ECX*0x4 + 0x0]             ; 005cef6f
    SUB EAX,ECX                         ; 005cef76
    LEA ECX,[EAX*0x8 + 0x0]             ; 005cef78
    MOV EAX,dword ptr [ESP + 0x594]     ; 005cef7f
    LEA EDI,[ESP + 0x98]                ; 005cef86
    SHL EAX,0x4                         ; 005cef8d
    ADD EDI,EAX                         ; 005cef90
    LEA EAX,[ESP + 0x20]                ; 005cef92
    ADD ECX,EAX                         ; 005cef96
    MOV EAX,dword ptr [ESP + 0x570]     ; 005cef98
    FLDZ                                ; 005cef9f
    FCOMP double ptr [ESP + EAX*0x1 + 0x208] ; 005cefa1
    FNSTSW AX                           ; 005cefa8
    SAHF                                ; 005cefaa
    JNC 0x005cfb8f                      ; 005cefab
        ;   XREF to: 005cfb8f (CONDITIONAL_JUMP)  ; LAB_005cfb8f
    MOV dword ptr [EBX],0x3             ; 005cefb1
    MOV EAX,dword ptr [ESP + 0x53c]     ; 005cefb7
    FLD double ptr [ECX]                ; 005cefbe
    FSTP double ptr [EAX]               ; 005cefc0
    FLD double ptr [ECX + 0x8]          ; 005cefc2
    FSTP double ptr [EAX + 0x8]         ; 005cefc5
    FLD double ptr [ECX + 0x10]         ; 005cefc8
    FSTP double ptr [EAX + 0x10]        ; 005cefcb
    MOV EAX,dword ptr [ESP + 0x590]     ; 005cefce
    FLD double ptr [EDI]                ; 005cefd5
    FSTP double ptr [EAX]               ; 005cefd7
    FLD double ptr [EDI + 0x8]          ; 005cefd9
    FSTP double ptr [EAX + 0x8]         ; 005cefdc
    MOV EAX,dword ptr [ESP + 0x564]     ; 005cefdf
    FLD double ptr [EAX]                ; 005cefe6
    MOV EAX,dword ptr [ESP + 0x5c4]     ; 005cefe8
    FSTP double ptr [EAX]               ; 005cefef
    MOV EAX,dword ptr [ESP + 0x564]     ; 005ceff1
    FLD double ptr [EAX + 0x8]          ; 005ceff8
    MOV EAX,dword ptr [ESP + 0x5c4]     ; 005ceffb
    FSTP double ptr [EAX + 0x8]         ; 005cf002
    MOV EAX,dword ptr [ESP + 0x564]     ; 005cf005
    FLD double ptr [EAX + 0x10]         ; 005cf00c
    MOV EAX,dword ptr [ESP + 0x5c4]     ; 005cf00f
    FSTP double ptr [EAX + 0x10]        ; 005cf016
    MOV EAX,dword ptr [ESP + 0x5e4]     ; 005cf019
    FLD double ptr [EAX]                ; 005cf020
    MOV EAX,dword ptr [ESP + 0x58c]     ; 005cf022
    FSTP double ptr [EAX]               ; 005cf029
    MOV EAX,dword ptr [ESP + 0x5e4]     ; 005cf02b
    FLD double ptr [EAX + 0x8]          ; 005cf032
    MOV EAX,dword ptr [ESP + 0x58c]     ; 005cf035
    FSTP double ptr [EAX + 0x8]         ; 005cf03c
    MOV EAX,dword ptr [ESP + 0x5c8]     ; 005cf03f
    FLD double ptr [EDX]                ; 005cf046
    FSTP double ptr [EAX]               ; 005cf048
    FLD double ptr [EDX + 0x8]          ; 005cf04a
    FSTP double ptr [EAX + 0x8]         ; 005cf04d
    FLD double ptr [EDX + 0x10]         ; 005cf050
    FSTP double ptr [EAX + 0x10]        ; 005cf053
    MOV EAX,dword ptr [ESP + 0x57c]     ; 005cf056
    FLD double ptr [ESI]                ; 005cf05d
    FSTP double ptr [EAX]               ; 005cf05f
    FLD double ptr [ESI + 0x8]          ; 005cf061
    FSTP double ptr [EAX + 0x8]         ; 005cf064
    MOV dword ptr [EBX + 0xa4],0x3      ; 005cf067
    MOV EAX,dword ptr [ESP + 0x5d8]     ; 005cf071
    MOV EBX,dword ptr [ECX]             ; 005cf078
    MOV dword ptr [EAX],EBX             ; 005cf07a
    MOV EBX,dword ptr [ECX + 0x4]       ; 005cf07c
    MOV dword ptr [EAX + 0x4],EBX       ; 005cf07f
    MOV EBX,dword ptr [ECX + 0x8]       ; 005cf082
    MOV dword ptr [EAX + 0x8],EBX       ; 005cf085
    MOV EBX,dword ptr [ECX + 0xc]       ; 005cf088
    MOV dword ptr [EAX + 0xc],EBX       ; 005cf08b
    MOV EBX,dword ptr [ECX + 0x10]      ; 005cf08e
    MOV dword ptr [EAX + 0x10],EBX      ; 005cf091
    MOV EBX,dword ptr [ECX + 0x14]      ; 005cf094
    MOV dword ptr [EAX + 0x14],EBX      ; 005cf097
    MOV EAX,dword ptr [ESP + 0x578]     ; 005cf09a
    MOV ECX,dword ptr [EDI]             ; 005cf0a1
    MOV dword ptr [EAX],ECX             ; 005cf0a3
    MOV ECX,dword ptr [EDI + 0x4]       ; 005cf0a5
    MOV dword ptr [EAX + 0x4],ECX       ; 005cf0a8
    MOV ECX,dword ptr [EDI + 0x8]       ; 005cf0ab
    MOV dword ptr [EAX + 0x8],ECX       ; 005cf0ae
    MOV ECX,dword ptr [EDI + 0xc]       ; 005cf0b1
    MOV dword ptr [EAX + 0xc],ECX       ; 005cf0b4
    MOV EAX,dword ptr [ESP + 0x544]     ; 005cf0b7
    MOV ECX,dword ptr [EDX]             ; 005cf0be
    MOV dword ptr [EAX],ECX             ; 005cf0c0
    MOV ECX,dword ptr [EDX + 0x4]       ; 005cf0c2
    MOV dword ptr [EAX + 0x4],ECX       ; 005cf0c5
    MOV ECX,dword ptr [EDX + 0x8]       ; 005cf0c8
    MOV dword ptr [EAX + 0x8],ECX       ; 005cf0cb
    MOV ECX,dword ptr [EDX + 0xc]       ; 005cf0ce
    MOV dword ptr [EAX + 0xc],ECX       ; 005cf0d1
    MOV ECX,dword ptr [EDX + 0x10]      ; 005cf0d4
    MOV dword ptr [EAX + 0x10],ECX      ; 005cf0d7
    MOV ECX,dword ptr [EDX + 0x14]      ; 005cf0da
    MOV dword ptr [EAX + 0x14],ECX      ; 005cf0dd
    MOV EAX,dword ptr [ESP + 0x598]     ; 005cf0e0
    MOV EDX,dword ptr [ESI]             ; 005cf0e7
    MOV dword ptr [EAX],EDX             ; 005cf0e9
    MOV EDX,dword ptr [ESI + 0x4]       ; 005cf0eb
    MOV dword ptr [EAX + 0x4],EDX       ; 005cf0ee
    MOV EDX,dword ptr [ESI + 0x8]       ; 005cf0f1
    MOV dword ptr [EAX + 0x8],EDX       ; 005cf0f4
    MOV EDX,dword ptr [ESI + 0xc]       ; 005cf0f7
    MOV dword ptr [EAX + 0xc],EDX       ; 005cf0fa
    MOV EAX,dword ptr [ESP + 0x5e8]     ; 005cf0fd
    FLD double ptr [EAX]                ; 005cf104
    MOV EAX,dword ptr [ESP + 0x5d4]     ; 005cf106
    FSTP double ptr [EAX]               ; 005cf10d
    MOV EAX,dword ptr [ESP + 0x5e8]     ; 005cf10f
    FLD double ptr [EAX + 0x8]          ; 005cf116
    MOV EAX,dword ptr [ESP + 0x5d4]     ; 005cf119
    FSTP double ptr [EAX + 0x8]         ; 005cf120
    MOV EAX,dword ptr [ESP + 0x5e8]     ; 005cf123
    FLD double ptr [EAX + 0x10]         ; 005cf12a
    MOV EAX,dword ptr [ESP + 0x5d4]     ; 005cf12d
    FSTP double ptr [EAX + 0x10]        ; 005cf134
    MOV EAX,dword ptr [ESP + 0x5cc]     ; 005cf137
    FLD double ptr [EAX]                ; 005cf13e
    MOV EAX,dword ptr [ESP + 0x584]     ; 005cf140
    FSTP double ptr [EAX]               ; 005cf147
    MOV EAX,dword ptr [ESP + 0x5cc]     ; 005cf149
    FLD double ptr [EAX + 0x8]          ; 005cf150
    MOV EAX,dword ptr [ESP + 0x584]     ; 005cf153
    FSTP double ptr [EAX + 0x8]         ; 005cf15a
    MOV EAX,0x1                         ; 005cf15d
    MOV ESP,EBP                         ; 005cf162
    POP EBP                             ; 005cf164
    POP EDI                             ; 005cf165
    POP ESI                             ; 005cf166
    POP EBX                             ; 005cf167
    RET                                 ; 005cf168
    LEA EAX,[ESP + 0x1f0]               ; 005cf169
        ;   Label: LAB_005cf169
    PUSH EAX                            ; 005cf170
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cf171
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cf174
    MOV ECX,dword ptr [EBP + 0x18]      ; 005cf177
    SHL EAX,0x3                         ; 005cf17a
    MOV ECX,dword ptr [ECX]             ; 005cf17d
    MOV EDX,EAX                         ; 005cf17f
    SHL EAX,0x3                         ; 005cf181
    MOV ECX,dword ptr [ECX + 0x4]       ; 005cf184
    SUB EAX,EDX                         ; 005cf187
    ADD EAX,ECX                         ; 005cf189
    PUSH EAX                            ; 005cf18b
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cf18c
    MOV EAX,dword ptr [EAX + 0xc]       ; 005cf18f
    SHL EAX,0x3                         ; 005cf192
    MOV EDX,EAX                         ; 005cf195
    SHL EAX,0x3                         ; 005cf197
    SUB EAX,EDX                         ; 005cf19a
    ADD EAX,ECX                         ; 005cf19c
    PUSH EAX                            ; 005cf19e
    MOV EDI,dword ptr [ESI + 0x64]      ; 005cf19f
    PUSH ESI                            ; 005cf1a2
    CALL dword ptr [EDI + 0x60]         ; 005cf1a3
    ADD ESP,0x10                        ; 005cf1a6
    TEST EAX,EAX                        ; 005cf1a9
    JNZ 0x005ce6d6                      ; 005cf1ab
        ;   XREF to: 005ce6d6 (CONDITIONAL_JUMP)  ; LAB_005ce6d6
    LEA EAX,[ESP + 0x1f0]               ; 005cf1b1
    PUSH EAX                            ; 005cf1b8
    MOV EAX,dword ptr [ESI + 0x8]       ; 005cf1b9
    SHL EAX,0x3                         ; 005cf1bc
    MOV ECX,dword ptr [ESI]             ; 005cf1bf
    MOV EDX,EAX                         ; 005cf1c1
    SHL EAX,0x3                         ; 005cf1c3
    MOV ECX,dword ptr [ECX + 0x4]       ; 005cf1c6
    SUB EAX,EDX                         ; 005cf1c9
    ADD EAX,ECX                         ; 005cf1cb
    PUSH EAX                            ; 005cf1cd
    MOV EAX,dword ptr [ESI + 0x4]       ; 005cf1ce
    SHL EAX,0x3                         ; 005cf1d1
    MOV EDX,EAX                         ; 005cf1d4
    SHL EAX,0x3                         ; 005cf1d6
    SUB EAX,EDX                         ; 005cf1d9
    ADD ECX,EAX                         ; 005cf1db
    MOV EDI,dword ptr [EBP + 0x18]      ; 005cf1dd
    PUSH ECX                            ; 005cf1e0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005cf1e1
    MOV EDI,dword ptr [EDI + 0x64]      ; 005cf1e4
    PUSH EAX                            ; 005cf1e7
    CALL dword ptr [EDI + 0x60]         ; 005cf1e8
    ADD ESP,0x10                        ; 005cf1eb
    TEST EAX,EAX                        ; 005cf1ee
    JNZ 0x005ce6d6                      ; 005cf1f0
        ;   XREF to: 005ce6d6 (CONDITIONAL_JUMP)  ; LAB_005ce6d6
    LEA EAX,[ESP + 0x1f0]               ; 005cf1f6
    PUSH EAX                            ; 005cf1fd
    MOV EAX,dword ptr [ESI + 0xc]       ; 005cf1fe
    SHL EAX,0x3                         ; 005cf201
    MOV ECX,dword ptr [ESI]             ; 005cf204
    MOV EDX,EAX                         ; 005cf206
    SHL EAX,0x3                         ; 005cf208
    MOV ECX,dword ptr [ECX + 0x4]       ; 005cf20b
    SUB EAX,EDX                         ; 005cf20e
    ADD EAX,ECX                         ; 005cf210
    PUSH EAX                            ; 005cf212
    MOV EAX,dword ptr [ESI + 0x8]       ; 005cf213
    SHL EAX,0x3                         ; 005cf216
    MOV EDX,EAX                         ; 005cf219
    SHL EAX,0x3                         ; 005cf21b
    SUB EAX,EDX                         ; 005cf21e
    ADD EAX,ECX                         ; 005cf220
    MOV EDI,dword ptr [EBP + 0x18]      ; 005cf222
    PUSH EAX                            ; 005cf225
    MOV EDX,dword ptr [EBP + 0x18]      ; 005cf226
    MOV EDI,dword ptr [EDI + 0x64]      ; 005cf229
    PUSH EDX                            ; 005cf22c
    CALL dword ptr [EDI + 0x60]         ; 005cf22d
    ADD ESP,0x10                        ; 005cf230
    TEST EAX,EAX                        ; 005cf233
    JNZ 0x005ce6d6                      ; 005cf235
        ;   XREF to: 005ce6d6 (CONDITIONAL_JUMP)  ; LAB_005ce6d6
    LEA EAX,[ESP + 0x1f0]               ; 005cf23b
    PUSH EAX                            ; 005cf242
    MOV EAX,dword ptr [ESI + 0x4]       ; 005cf243
    SHL EAX,0x3                         ; 005cf246
    MOV ECX,dword ptr [ESI]             ; 005cf249
    MOV EDX,EAX                         ; 005cf24b
    SHL EAX,0x3                         ; 005cf24d
    MOV ECX,dword ptr [ECX + 0x4]       ; 005cf250
    SUB EAX,EDX                         ; 005cf253
    ADD EAX,ECX                         ; 005cf255
    PUSH EAX                            ; 005cf257
    MOV EAX,dword ptr [ESI + 0xc]       ; 005cf258
    SHL EAX,0x3                         ; 005cf25b
    MOV EDX,EAX                         ; 005cf25e
    SHL EAX,0x3                         ; 005cf260
    SUB EAX,EDX                         ; 005cf263
    ADD EAX,ECX                         ; 005cf265
    MOV EDI,dword ptr [EBP + 0x18]      ; 005cf267
    PUSH EAX                            ; 005cf26a
    MOV ECX,dword ptr [EBP + 0x18]      ; 005cf26b
    MOV EDI,dword ptr [EDI + 0x64]      ; 005cf26e
    PUSH ECX                            ; 005cf271
    CALL dword ptr [EDI + 0x60]         ; 005cf272
    ADD ESP,0x10                        ; 005cf275
    TEST EAX,EAX                        ; 005cf278
    JNZ 0x005ce6d6                      ; 005cf27a
        ;   XREF to: 005ce6d6 (CONDITIONAL_JUMP)  ; LAB_005ce6d6
    MOV ESP,EBP                         ; 005cf280
    POP EBP                             ; 005cf282
    POP EDI                             ; 005cf283
    POP ESI                             ; 005cf284
    POP EBX                             ; 005cf285
    RET                                 ; 005cf286
    MOV EDX,dword ptr [ESP + 0x214]     ; 005cf287
        ;   Label: LAB_005cf287
    MOV ECX,dword ptr [ESP + 0x210]     ; 005cf28e
    TEST EDX,0x7fffffff                 ; 005cf295
    JNZ 0x005cf2a5                      ; 005cf29b
        ;   XREF to: 005cf2a5 (CONDITIONAL_JUMP)  ; LAB_005cf2a5
    TEST ECX,ECX                        ; 005cf29d
    JZ 0x005ceb9c                       ; 005cf29f
        ;   XREF to: 005ceb9c (CONDITIONAL_JUMP)  ; LAB_005ceb9c
    MOV ESI,dword ptr [ESP + 0x21c]     ; 005cf2a5
        ;   Label: LAB_005cf2a5
    MOV EDI,dword ptr [ESP + 0x218]     ; 005cf2ac
    TEST ESI,0x7fffffff                 ; 005cf2b3
    JNZ 0x005cf2c3                      ; 005cf2b9
        ;   XREF to: 005cf2c3 (CONDITIONAL_JUMP)  ; LAB_005cf2c3
    TEST EDI,EDI                        ; 005cf2bb
    JZ 0x005ceb9c                       ; 005cf2bd
        ;   XREF to: 005ceb9c (CONDITIONAL_JUMP)  ; LAB_005ceb9c
    FLDZ                                ; 005cf2c3
        ;   Label: LAB_005cf2c3
    MOV EAX,0x3                         ; 005cf2c5
    MOV EDX,0x4                         ; 005cf2ca
    MOV dword ptr [ESP + 0x554],EAX     ; 005cf2cf
    MOV dword ptr [ESP + 0x550],EDX     ; 005cf2d6
    FCOMP double ptr [ESP + 0x210]      ; 005cf2dd
    FNSTSW AX                           ; 005cf2e4
    SAHF                                ; 005cf2e6
    JA 0x005cfd47                       ; 005cf2e7
        ;   XREF to: 005cfd47 (CONDITIONAL_JUMP)  ; LAB_005cfd47
    FLDZ                                ; 005cf2ed
    FCOMP double ptr [ESP + 0x218]      ; 005cf2ef
    FNSTSW AX                           ; 005cf2f6
    SAHF                                ; 005cf2f8
    JA 0x005cfd47                       ; 005cf2f9
        ;   XREF to: 005cfd47 (CONDITIONAL_JUMP)  ; LAB_005cfd47
    MOV EDI,0x1                         ; 005cf2ff
        ;   Label: LAB_005cf2ff
    MOV EAX,0x2                         ; 005cf304
    XOR ESI,ESI                         ; 005cf309
    MOV dword ptr [ESP + 0x538],EDI     ; 005cf30b
    MOV dword ptr [ESP + 0x5a8],EAX     ; 005cf312
    MOV dword ptr [ESP + 0x5b0],ESI     ; 005cf319
    MOV EDX,dword ptr [ESP + 0x5b0]     ; 005cf320
        ;   Label: LAB_005cf320
    MOV EAX,dword ptr [ESP + 0x538]     ; 005cf327
    SHL EDX,0x3                         ; 005cf32e
    FLD double ptr [ESP + EAX*0x8 + 0x208] ; 005cf331
    FSUB double ptr [ESP + EDX*0x1 + 0x208] ; 005cf338
    FDIVR double ptr [ESP + EAX*0x8 + 0x208] ; 005cf33f
    MOV dword ptr [ESP + 0x55c],EDX     ; 005cf346
    MOV EDX,dword ptr [ESP + 0x5b0]     ; 005cf34d
    LEA EAX,[EDX*0x4 + 0x0]             ; 005cf354
    SUB EAX,EDX                         ; 005cf35b
    LEA EDX,[EAX*0x8 + 0x0]             ; 005cf35d
    LEA EAX,[ESP + 0x20]                ; 005cf364
    ADD EAX,EDX                         ; 005cf368
    MOV EDX,dword ptr [ESP + 0x538]     ; 005cf36a
    MOV dword ptr [ESP + 0x568],EAX     ; 005cf371
    LEA EAX,[EDX*0x4 + 0x0]             ; 005cf378
    SUB EAX,EDX                         ; 005cf37f
    LEA EDX,[ESP + 0x20]                ; 005cf381
    SHL EAX,0x3                         ; 005cf385
    MOV ECX,0x6                         ; 005cf388
    ADD EDX,EAX                         ; 005cf38d
    LEA EDI,[ESP + 0x178]               ; 005cf38f
    LEA ESI,[ESP + 0x358]               ; 005cf396
    FLD double ptr [EDX]                ; 005cf39d
    FLD double ptr [EDX + 0x8]          ; 005cf39f
    MOV EAX,dword ptr [ESP + 0x568]     ; 005cf3a2
    FLD double ptr [EDX + 0x10]         ; 005cf3a9
    FXCH ST2                            ; 005cf3ac
    FSUB double ptr [EAX]               ; 005cf3ae
    FXCH                                ; 005cf3b0
    FSUB double ptr [EAX + 0x8]         ; 005cf3b2
    FXCH ST2                            ; 005cf3b5
    FSUB double ptr [EAX + 0x10]        ; 005cf3b7
    FXCH                                ; 005cf3ba
    FSTP double ptr [ESP + 0x358]       ; 005cf3bc
    FXCH                                ; 005cf3c3
    FSTP double ptr [ESP + 0x360]       ; 005cf3c5
    FSTP double ptr [ESP + 0x368]       ; 005cf3cc
    MOVSD.REP ES:EDI,ESI                ; 005cf3d3
    FSTP double ptr [ESP + 0x10]        ; 005cf3d5
    FLD double ptr [ESP + 0x178]        ; 005cf3d9
    FMUL double ptr [ESP + 0x10]        ; 005cf3e0
    FLD double ptr [ESP + 0x180]        ; 005cf3e4
    FMUL double ptr [ESP + 0x10]        ; 005cf3eb
    FLD double ptr [ESP + 0x188]        ; 005cf3ef
    FMUL double ptr [ESP + 0x10]        ; 005cf3f6
    MOV ECX,0x6                         ; 005cf3fa
    LEA EDI,[ESP + 0x160]               ; 005cf3ff
    LEA ESI,[ESP + 0x2c8]               ; 005cf406
    FXCH ST2                            ; 005cf40d
    FSTP double ptr [ESP + 0x2c8]       ; 005cf40f
    FSTP double ptr [ESP + 0x2d0]       ; 005cf416
    FSTP double ptr [ESP + 0x2d8]       ; 005cf41d
    MOVSD.REP ES:EDI,ESI                ; 005cf424
    MOV dword ptr [ESP + 0x560],EDX     ; 005cf426
    FLD double ptr [EDX + 0x8]          ; 005cf42d
    FLD double ptr [EDX + 0x10]         ; 005cf430
    FLD double ptr [EDX]                ; 005cf433
    MOV ECX,0x6                         ; 005cf435
    LEA EDI,[ESP + 0x2b0]               ; 005cf43a
    LEA ESI,[ESP + 0xe8]                ; 005cf441
    MOV EDX,dword ptr [ESP + 0x554]     ; 005cf448
    FSUB double ptr [ESP + 0x160]       ; 005cf44f
    FXCH ST2                            ; 005cf456
    FSUB double ptr [ESP + 0x168]       ; 005cf458
    FXCH                                ; 005cf45f
    FSUB double ptr [ESP + 0x170]       ; 005cf461
    FXCH ST2                            ; 005cf468
    FSTP double ptr [ESP + 0xe8]        ; 005cf46a
    FSTP double ptr [ESP + 0xf0]        ; 005cf471
    LEA EAX,[EDX*0x4 + 0x0]             ; 005cf478
    FSTP double ptr [ESP + 0xf8]        ; 005cf47f
    SUB EAX,EDX                         ; 005cf486
    LEA EDX,[ESP + 0x20]                ; 005cf488
    SHL EAX,0x3                         ; 005cf48c
    MOVSD.REP ES:EDI,ESI                ; 005cf48f
    ADD EDX,EAX                         ; 005cf491
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 005cf493
    MOV dword ptr [EDX],EAX             ; 005cf49a
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 005cf49c
    MOV dword ptr [EDX + 0x4],EAX       ; 005cf4a3
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 005cf4a6
    MOV dword ptr [EDX + 0x8],EAX       ; 005cf4ad
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 005cf4b0
    MOV dword ptr [EDX + 0xc],EAX       ; 005cf4b7
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005cf4ba
    MOV ECX,dword ptr [ESP + 0x5b0]     ; 005cf4c1
    MOV dword ptr [EDX + 0x10],EAX      ; 005cf4c8
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 005cf4cb
    SHL ECX,0x4                         ; 005cf4d2
    MOV dword ptr [EDX + 0x14],EAX      ; 005cf4d5
    LEA EAX,[ESP + 0x98]                ; 005cf4d8
    ADD EAX,ECX                         ; 005cf4df
    MOV dword ptr [ESP + 0x5dc],EAX     ; 005cf4e1
    MOV EAX,dword ptr [ESP + 0x538]     ; 005cf4e8
    LEA ECX,[ESP + 0x98]                ; 005cf4ef
    SHL EAX,0x4                         ; 005cf4f6
    ADD ECX,EAX                         ; 005cf4f9
    LEA EDI,[ESP + 0x448]               ; 005cf4fb
    LEA ESI,[ESP + 0x478]               ; 005cf502
    FLD double ptr [ECX]                ; 005cf509
    MOV EAX,dword ptr [ESP + 0x5dc]     ; 005cf50b
    FLD double ptr [ECX + 0x8]          ; 005cf512
    FXCH                                ; 005cf515
    FSUB double ptr [EAX]               ; 005cf517
    FXCH                                ; 005cf519
    FSUB double ptr [EAX + 0x8]         ; 005cf51b
    FXCH                                ; 005cf51e
    FSTP double ptr [ESP + 0x478]       ; 005cf520
    FSTP double ptr [ESP + 0x480]       ; 005cf527
    JMP 0x00605949                      ; 005cf52e
        ;   XREF to: 00605949 (UNCONDITIONAL_JUMP)  ; LAB_00605949
    FMUL double ptr [ESP + 0x10]        ; 005cf539
        ;   Label: LAB_005cf539
    FLD double ptr [ESP + 0x450]        ; 005cf53d
    FMUL double ptr [ESP + 0x10]        ; 005cf544
    MOV dword ptr [ESP + 0x5e0],ECX     ; 005cf548
    LEA EDI,[ESP + 0x438]               ; 005cf54f
    LEA ESI,[ESP + 0x4e8]               ; 005cf556
    FXCH                                ; 005cf55d
    FSTP double ptr [ESP + 0x4e8]       ; 005cf55f
    FSTP double ptr [ESP + 0x4f0]       ; 005cf566
    JMP 0x00605971                      ; 005cf56d
        ;   XREF to: 00605971 (UNCONDITIONAL_JUMP)  ; LAB_00605971
    FLD double ptr [ECX + 0x8]          ; 005cf578
        ;   Label: LAB_005cf578
    FLD double ptr [ECX]                ; 005cf57b
    LEA EDI,[ESP + 0x4d8]               ; 005cf57d
    LEA ESI,[ESP + 0x4b8]               ; 005cf584
    MOV ECX,dword ptr [ESP + 0x554]     ; 005cf58b
    FSUB double ptr [ESP + 0x438]       ; 005cf592
    FXCH                                ; 005cf599
    FSUB double ptr [ESP + 0x440]       ; 005cf59b
    SHL ECX,0x4                         ; 005cf5a2
    FXCH                                ; 005cf5a5
    FSTP double ptr [ESP + 0x4b8]       ; 005cf5a7
    ADD EAX,ECX                         ; 005cf5ae
    FSTP double ptr [ESP + 0x4c0]       ; 005cf5b0
    MOV dword ptr [ESP + 0x54c],EAX     ; 005cf5b7
    JMP 0x00605999                      ; 005cf5be
        ;   XREF to: 00605999 (UNCONDITIONAL_JUMP)  ; LAB_00605999
    MOV EAX,dword ptr [ESP + 0x4d8]     ; 005cf5c9
        ;   Label: LAB_005cf5c9
    MOV dword ptr [ECX],EAX             ; 005cf5d0
    MOV EAX,dword ptr [ESP + 0x4dc]     ; 005cf5d2
    MOV dword ptr [ECX + 0x4],EAX       ; 005cf5d9
    MOV EAX,dword ptr [ESP + 0x4e0]     ; 005cf5dc
    MOV dword ptr [ECX + 0x8],EAX       ; 005cf5e3
    MOV EAX,dword ptr [ESP + 0x4e4]     ; 005cf5e6
    MOV dword ptr [ECX + 0xc],EAX       ; 005cf5ed
    MOV EAX,dword ptr [ESP + 0x5a8]     ; 005cf5f0
    MOV ECX,dword ptr [ESP + 0x55c]     ; 005cf5f7
    FLD double ptr [ESP + EAX*0x8 + 0x208] ; 005cf5fe
    FSUB double ptr [ESP + ECX*0x1 + 0x208] ; 005cf605
    FDIVR double ptr [ESP + EAX*0x8 + 0x208] ; 005cf60c
    MOV ECX,EAX                         ; 005cf613
    SHL EAX,0x2                         ; 005cf615
    SUB EAX,ECX                         ; 005cf618
    LEA ECX,[ESP + 0x20]                ; 005cf61a
    SHL EAX,0x3                         ; 005cf61e
    ADD ECX,EAX                         ; 005cf621
    LEA EDI,[ESP + 0x298]               ; 005cf623
    LEA ESI,[ESP + 0x100]               ; 005cf62a
    FLD double ptr [ECX + 0x8]          ; 005cf631
    FLD double ptr [ECX + 0x10]         ; 005cf634
    FLD double ptr [ECX]                ; 005cf637
    MOV EAX,dword ptr [ESP + 0x568]     ; 005cf639
    MOV dword ptr [ESP + 0x56c],ECX     ; 005cf640
    MOV ECX,0x6                         ; 005cf647
    FSUB double ptr [EAX]               ; 005cf64c
    FXCH ST2                            ; 005cf64e
    FSUB double ptr [EAX + 0x8]         ; 005cf650
    FXCH                                ; 005cf653
    FSUB double ptr [EAX + 0x10]        ; 005cf655
    FXCH ST2                            ; 005cf658
    FSTP double ptr [ESP + 0x100]       ; 005cf65a
    FSTP double ptr [ESP + 0x108]       ; 005cf661
    FSTP double ptr [ESP + 0x110]       ; 005cf668
    MOVSD.REP ES:EDI,ESI                ; 005cf66f
    FSTP double ptr [ESP]               ; 005cf671
    FLD double ptr [ESP + 0x298]        ; 005cf674
    FMUL double ptr [ESP]               ; 005cf67b
    FLD double ptr [ESP + 0x2a0]        ; 005cf67e
    FMUL double ptr [ESP]               ; 005cf685
    FLD double ptr [ESP + 0x2a8]        ; 005cf688
    FMUL double ptr [ESP]               ; 005cf68f
    MOV ECX,0x6                         ; 005cf692
    LEA EDI,[ESP + 0x400]               ; 005cf697
    LEA ESI,[ESP + 0x2f8]               ; 005cf69e
    FXCH ST2                            ; 005cf6a5
    FSTP double ptr [ESP + 0x2f8]       ; 005cf6a7
    FSTP double ptr [ESP + 0x300]       ; 005cf6ae
    FSTP double ptr [ESP + 0x308]       ; 005cf6b5
    MOVSD.REP ES:EDI,ESI                ; 005cf6bc
    MOV EAX,dword ptr [ESP + 0x56c]     ; 005cf6be
    MOV ECX,0x6                         ; 005cf6c5
    LEA EDI,[ESP + 0x1c0]               ; 005cf6ca
    LEA ESI,[ESP + 0x280]               ; 005cf6d1
    FLD double ptr [EAX]                ; 005cf6d8
    FLD double ptr [EAX + 0x8]          ; 005cf6da
    FLD double ptr [EAX + 0x10]         ; 005cf6dd
    FXCH ST2                            ; 005cf6e0
    FSUB double ptr [ESP + 0x400]       ; 005cf6e2
    FXCH                                ; 005cf6e9
    FSUB double ptr [ESP + 0x408]       ; 005cf6eb
    FXCH ST2                            ; 005cf6f2
    FSUB double ptr [ESP + 0x410]       ; 005cf6f4
    FXCH                                ; 005cf6fb
    FSTP double ptr [ESP + 0x280]       ; 005cf6fd
    FXCH                                ; 005cf704
    FSTP double ptr [ESP + 0x288]       ; 005cf706
    FSTP double ptr [ESP + 0x290]       ; 005cf70d
    MOVSD.REP ES:EDI,ESI                ; 005cf714
    MOV ECX,dword ptr [ESP + 0x550]     ; 005cf716
    LEA EAX,[ECX*0x4 + 0x0]             ; 005cf71d
    SUB EAX,ECX                         ; 005cf724
    LEA ECX,[ESP + 0x20]                ; 005cf726
    SHL EAX,0x3                         ; 005cf72a
    ADD ECX,EAX                         ; 005cf72d
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005cf72f
    MOV dword ptr [ECX],EAX             ; 005cf736
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 005cf738
    MOV dword ptr [ECX + 0x4],EAX       ; 005cf73f
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 005cf742
    MOV dword ptr [ECX + 0x8],EAX       ; 005cf749
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 005cf74c
    MOV dword ptr [ECX + 0xc],EAX       ; 005cf753
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 005cf756
    MOV dword ptr [ECX + 0x10],EAX      ; 005cf75d
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 005cf760
    MOV dword ptr [ECX + 0x14],EAX      ; 005cf767
    MOV EAX,dword ptr [ESP + 0x5a8]     ; 005cf76a
    LEA ESI,[ESP + 0x98]                ; 005cf771
    SHL EAX,0x4                         ; 005cf778
    ADD ESI,EAX                         ; 005cf77b
    LEA EDI,[ESP + 0x488]               ; 005cf77d
    FLD double ptr [ESI + 0x8]          ; 005cf784
    FLD double ptr [ESI]                ; 005cf787
    MOV EAX,dword ptr [ESP + 0x5dc]     ; 005cf789
    MOV dword ptr [ESP + 0x548],ESI     ; 005cf790
    LEA ESI,[ESP + 0x498]               ; 005cf797
    FSUB double ptr [EAX]               ; 005cf79e
    FXCH                                ; 005cf7a0
    FSUB double ptr [EAX + 0x8]         ; 005cf7a2
    FXCH                                ; 005cf7a5
    FSTP double ptr [ESP + 0x498]       ; 005cf7a7
    FSTP double ptr [ESP + 0x4a0]       ; 005cf7ae
    JMP 0x0060f38f                      ; 005cf7b5
        ;   XREF to: 0060f38f (UNCONDITIONAL_JUMP)  ; LAB_0060f38f
    FLD double ptr [ESP + 0x488]        ; 005cf7bc
        ;   Label: LAB_005cf7bc
    FMUL ST1                            ; 005cf7c3
    FLD double ptr [ESP + 0x490]        ; 005cf7c5
    FMULP ST2                           ; 005cf7cc
    MOV EAX,dword ptr [ESP + 0x548]     ; 005cf7ce
    LEA EDI,[ESP + 0x458]               ; 005cf7d5
    LEA ESI,[ESP + 0x4a8]               ; 005cf7dc
    FSTP double ptr [ESP + 0x4a8]       ; 005cf7e3
    FSTP double ptr [ESP + 0x4b0]       ; 005cf7ea
    JMP 0x0060f3b3                      ; 005cf7f1
        ;   XREF to: 0060f3b3 (UNCONDITIONAL_JUMP)  ; LAB_0060f3b3
    FLD double ptr [EAX + 0x8]          ; 005cf7f7
        ;   Label: LAB_005cf7f7
    LEA EDI,[ESP + 0x528]               ; 005cf7fa
    LEA ESI,[ESP + 0x418]               ; 005cf801
    FXCH                                ; 005cf808
    FSUB double ptr [ESP + 0x458]       ; 005cf80a
    FXCH                                ; 005cf811
    FSUB double ptr [ESP + 0x460]       ; 005cf813
    FXCH                                ; 005cf81a
    FSTP double ptr [ESP + 0x418]       ; 005cf81c
    FSTP double ptr [ESP + 0x420]       ; 005cf823
    JMP 0x0060f3d6                      ; 005cf82a
        ;   XREF to: 0060f3d6 (UNCONDITIONAL_JUMP)  ; LAB_0060f3d6
    LEA EAX,[ESP + 0x98]                ; 005cf835
        ;   Label: LAB_005cf835
    SHL ESI,0x4                         ; 005cf83c
    ADD ESI,EAX                         ; 005cf83f
    MOV EAX,dword ptr [ESP + 0x528]     ; 005cf841
    MOV dword ptr [ESI],EAX             ; 005cf848
    MOV EAX,dword ptr [ESP + 0x52c]     ; 005cf84a
    MOV dword ptr [ESI + 0x4],EAX       ; 005cf851
    MOV EAX,dword ptr [ESP + 0x530]     ; 005cf854
    MOV dword ptr [ESI + 0x8],EAX       ; 005cf85b
    MOV EAX,dword ptr [ESP + 0x534]     ; 005cf85e
    MOV dword ptr [ESI + 0xc],EAX       ; 005cf865
    LEA EAX,[EBX + 0x128]               ; 005cf868
    MOV dword ptr [ESP + 0x588],EAX     ; 005cf86e
    LEA EAX,[EBX + 0xd8]                ; 005cf875
    MOV dword ptr [ESP + 0x5bc],EAX     ; 005cf87b
    LEA EAX,[EBX + 0x118]               ; 005cf882
    MOV dword ptr [ESP + 0x580],EAX     ; 005cf888
    LEA EAX,[EBX + 0xc0]                ; 005cf88f
    MOV dword ptr [ESP + 0x5c0],EAX     ; 005cf895
    LEA EAX,[EBX + 0x108]               ; 005cf89c
    LEA EDI,[EBX + 0xa8]                ; 005cf8a2
    MOV dword ptr [ESP + 0x574],EAX     ; 005cf8a8
    LEA EAX,[EBX + 0x84]                ; 005cf8af
    MOV dword ptr [ESP + 0x5a0],EAX     ; 005cf8b5
    LEA EAX,[EBX + 0x34]                ; 005cf8bc
    MOV dword ptr [ESP + 0x5b8],EAX     ; 005cf8bf
    LEA EAX,[EBX + 0x74]                ; 005cf8c6
    MOV dword ptr [ESP + 0x5a4],EAX     ; 005cf8c9
    LEA EAX,[EBX + 0x1c]                ; 005cf8d0
    MOV dword ptr [ESP + 0x5d0],EAX     ; 005cf8d3
    LEA EAX,[EBX + 0x64]                ; 005cf8da
    MOV dword ptr [ESP + 0x59c],EAX     ; 005cf8dd
    LEA EAX,[EBX + 0x4]                 ; 005cf8e4
    MOV dword ptr [ESP + 0x540],EAX     ; 005cf8e7
    MOV EAX,dword ptr [ESP + 0x55c]     ; 005cf8ee
    FLDZ                                ; 005cf8f5
    FCOMP double ptr [ESP + EAX*0x1 + 0x208] ; 005cf8f7
    FNSTSW AX                           ; 005cf8fe
    SAHF                                ; 005cf900
    JNC 0x005cfdeb                      ; 005cf901
        ;   XREF to: 005cfdeb (CONDITIONAL_JUMP)  ; LAB_005cfdeb
    MOV EAX,dword ptr [ESP + 0x568]     ; 005cf907
    MOV dword ptr [EBX],0x3             ; 005cf90e
    FLD double ptr [EAX]                ; 005cf914
    MOV EAX,dword ptr [ESP + 0x540]     ; 005cf916
    FSTP double ptr [EAX]               ; 005cf91d
    MOV EAX,dword ptr [ESP + 0x568]     ; 005cf91f
    FLD double ptr [EAX + 0x8]          ; 005cf926
    MOV EAX,dword ptr [ESP + 0x540]     ; 005cf929
    FSTP double ptr [EAX + 0x8]         ; 005cf930
    MOV EAX,dword ptr [ESP + 0x568]     ; 005cf933
    FLD double ptr [EAX + 0x10]         ; 005cf93a
    MOV EAX,dword ptr [ESP + 0x540]     ; 005cf93d
    FSTP double ptr [EAX + 0x10]        ; 005cf944
    MOV EAX,dword ptr [ESP + 0x5dc]     ; 005cf947
    FLD double ptr [EAX]                ; 005cf94e
    MOV EAX,dword ptr [ESP + 0x59c]     ; 005cf950
    FSTP double ptr [EAX]               ; 005cf957
    MOV EAX,dword ptr [ESP + 0x5dc]     ; 005cf959
    FLD double ptr [EAX + 0x8]          ; 005cf960
    MOV EAX,dword ptr [ESP + 0x59c]     ; 005cf963
    FSTP double ptr [EAX + 0x8]         ; 005cf96a
    MOV EAX,dword ptr [ESP + 0x5d0]     ; 005cf96d
    FLD double ptr [EDX]                ; 005cf974
    FSTP double ptr [EAX]               ; 005cf976
    FLD double ptr [EDX + 0x8]          ; 005cf978
    FSTP double ptr [EAX + 0x8]         ; 005cf97b
    FLD double ptr [EDX + 0x10]         ; 005cf97e
    FSTP double ptr [EAX + 0x10]        ; 005cf981
    MOV EAX,dword ptr [ESP + 0x54c]     ; 005cf984
    FLD double ptr [EAX]                ; 005cf98b
    MOV EAX,dword ptr [ESP + 0x5a4]     ; 005cf98d
    FSTP double ptr [EAX]               ; 005cf994
    MOV EAX,dword ptr [ESP + 0x54c]     ; 005cf996
    FLD double ptr [EAX + 0x8]          ; 005cf99d
    MOV EAX,dword ptr [ESP + 0x5a4]     ; 005cf9a0
    FSTP double ptr [EAX + 0x8]         ; 005cf9a7
    MOV EAX,dword ptr [ESP + 0x5b8]     ; 005cf9aa
    FLD double ptr [ECX]                ; 005cf9b1
    FSTP double ptr [EAX]               ; 005cf9b3
    FLD double ptr [ECX + 0x8]          ; 005cf9b5
    FSTP double ptr [EAX + 0x8]         ; 005cf9b8
    FLD double ptr [ECX + 0x10]         ; 005cf9bb
    FSTP double ptr [EAX + 0x10]        ; 005cf9be
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 005cf9c1
    FLD double ptr [ESI]                ; 005cf9c8
    FSTP double ptr [EAX]               ; 005cf9ca
    FLD double ptr [ESI + 0x8]          ; 005cf9cc
    FSTP double ptr [EAX + 0x8]         ; 005cf9cf
    MOV dword ptr [EBX + 0xa4],0x4      ; 005cf9d2
    MOV EAX,dword ptr [ESP + 0x54c]     ; 005cf9dc
    FLD double ptr [EDX]                ; 005cf9e3
    FSTP double ptr [EDI]               ; 005cf9e5
    FLD double ptr [EDX + 0x8]          ; 005cf9e7
    FSTP double ptr [EDI + 0x8]         ; 005cf9ea
    FLD double ptr [EDX + 0x10]         ; 005cf9ed
    FSTP double ptr [EDI + 0x10]        ; 005cf9f0
    FLD double ptr [EAX]                ; 005cf9f3
    MOV EAX,dword ptr [ESP + 0x574]     ; 005cf9f5
    FSTP double ptr [EAX]               ; 005cf9fc
    MOV EAX,dword ptr [ESP + 0x54c]     ; 005cf9fe
    FLD double ptr [EAX + 0x8]          ; 005cfa05
    MOV EAX,dword ptr [ESP + 0x574]     ; 005cfa08
    FSTP double ptr [EAX + 0x8]         ; 005cfa0f
    MOV EAX,dword ptr [ESP + 0x560]     ; 005cfa12
    FLD double ptr [EAX]                ; 005cfa19
    MOV EAX,dword ptr [ESP + 0x5c0]     ; 005cfa1b
    FSTP double ptr [EAX]               ; 005cfa22
    MOV EAX,dword ptr [ESP + 0x560]     ; 005cfa24
    FLD double ptr [EAX + 0x8]          ; 005cfa2b
    MOV EAX,dword ptr [ESP + 0x5c0]     ; 005cfa2e
    FSTP double ptr [EAX + 0x8]         ; 005cfa35
    MOV EAX,dword ptr [ESP + 0x560]     ; 005cfa38
    FLD double ptr [EAX + 0x10]         ; 005cfa3f
    MOV EAX,dword ptr [ESP + 0x5c0]     ; 005cfa42
    FSTP double ptr [EAX + 0x10]        ; 005cfa49
    MOV EAX,dword ptr [ESP + 0x5e0]     ; 005cfa4c
    FLD double ptr [EAX]                ; 005cfa53
    MOV EAX,dword ptr [ESP + 0x580]     ; 005cfa55
    FSTP double ptr [EAX]               ; 005cfa5c
    MOV EAX,dword ptr [ESP + 0x5e0]     ; 005cfa5e
    FLD double ptr [EAX + 0x8]          ; 005cfa65
    MOV EAX,dword ptr [ESP + 0x580]     ; 005cfa68
    FSTP double ptr [EAX + 0x8]         ; 005cfa6f
    MOV EAX,dword ptr [ESP + 0x56c]     ; 005cfa72
    FLD double ptr [EAX]                ; 005cfa79
    MOV EAX,dword ptr [ESP + 0x5bc]     ; 005cfa7b
    FSTP double ptr [EAX]               ; 005cfa82
    MOV EAX,dword ptr [ESP + 0x56c]     ; 005cfa84
    FLD double ptr [EAX + 0x8]          ; 005cfa8b
    MOV EAX,dword ptr [ESP + 0x5bc]     ; 005cfa8e
    FSTP double ptr [EAX + 0x8]         ; 005cfa95
    MOV EAX,dword ptr [ESP + 0x56c]     ; 005cfa98
    FLD double ptr [EAX + 0x10]         ; 005cfa9f
    MOV EAX,dword ptr [ESP + 0x5bc]     ; 005cfaa2
    FSTP double ptr [EAX + 0x10]        ; 005cfaa9
    MOV EAX,dword ptr [ESP + 0x548]     ; 005cfaac
    FLD double ptr [EAX]                ; 005cfab3
    MOV EAX,dword ptr [ESP + 0x588]     ; 005cfab5
    FSTP double ptr [EAX]               ; 005cfabc
    MOV EAX,dword ptr [ESP + 0x548]     ; 005cfabe
    FLD double ptr [EAX + 0x8]          ; 005cfac5
    MOV EAX,dword ptr [ESP + 0x588]     ; 005cfac8
    FSTP double ptr [EAX + 0x8]         ; 005cfacf
    LEA EAX,[EBX + 0xf0]                ; 005cfad2
    MOV EDX,dword ptr [ECX]             ; 005cfad8
    MOV dword ptr [EAX],EDX             ; 005cfada
    MOV EDX,dword ptr [ECX + 0x4]       ; 005cfadc
    MOV dword ptr [EAX + 0x4],EDX       ; 005cfadf
    MOV EDX,dword ptr [ECX + 0x8]       ; 005cfae2
    MOV dword ptr [EAX + 0x8],EDX       ; 005cfae5
    MOV EDX,dword ptr [ECX + 0xc]       ; 005cfae8
    MOV dword ptr [EAX + 0xc],EDX       ; 005cfaeb
    MOV EDX,dword ptr [ECX + 0x10]      ; 005cfaee
    MOV dword ptr [EAX + 0x10],EDX      ; 005cfaf1
    MOV EDX,dword ptr [ECX + 0x14]      ; 005cfaf4
    MOV dword ptr [EAX + 0x14],EDX      ; 005cfaf7
    MOV EAX,dword ptr [ESI]             ; 005cfafa
    MOV dword ptr [EBX + 0x138],EAX     ; 005cfafc
    MOV EAX,dword ptr [ESI + 0x4]       ; 005cfb02
    MOV dword ptr [EBX + 0x13c],EAX     ; 005cfb05
    MOV EAX,dword ptr [ESI + 0x8]       ; 005cfb0b
    MOV dword ptr [EBX + 0x140],EAX     ; 005cfb0e
    MOV EAX,dword ptr [ESI + 0xc]       ; 005cfb14
    MOV dword ptr [EBX + 0x144],EAX     ; 005cfb17
    MOV EAX,0x1                         ; 005cfb1d
    MOV ESP,EBP                         ; 005cfb22
    POP EBP                             ; 005cfb24
    POP EDI                             ; 005cfb25
    POP ESI                             ; 005cfb26
    POP EBX                             ; 005cfb27
    RET                                 ; 005cfb28
    MOV EDI,dword ptr [ESP + 0x214]     ; 005cfb29
        ;   Label: LAB_005cfb29
    MOV EAX,dword ptr [ESP + 0x210]     ; 005cfb30
    TEST EDI,0x7fffffff                 ; 005cfb37
    JNZ 0x005cfb69                      ; 005cfb3d
        ;   XREF to: 005cfb69 (CONDITIONAL_JUMP)  ; LAB_005cfb69
    TEST EAX,EAX                        ; 005cfb3f
    JNZ 0x005cfb69                      ; 005cfb41
        ;   XREF to: 005cfb69 (CONDITIONAL_JUMP)  ; LAB_005cfb69
    MOV EAX,0x2                         ; 005cfb43
    MOV EDI,0x1                         ; 005cfb48
    XOR EDX,EDX                         ; 005cfb4d
    MOV dword ptr [ESP + 0x5b4],EAX     ; 005cfb4f
    MOV dword ptr [ESP + 0x5ac],EDX     ; 005cfb56
    MOV dword ptr [ESP + 0x594],EDI     ; 005cfb5d
    JMP 0x005cebeb                      ; 005cfb64
        ;   XREF to: 005cebeb (UNCONDITIONAL_JUMP)  ; LAB_005cebeb
    MOV ESI,0x1                         ; 005cfb69
        ;   Label: LAB_005cfb69
    XOR ECX,ECX                         ; 005cfb6e
    MOV EDX,0x2                         ; 005cfb70
    MOV dword ptr [ESP + 0x5b4],ECX     ; 005cfb75
    MOV dword ptr [ESP + 0x5ac],ESI     ; 005cfb7c
    MOV dword ptr [ESP + 0x594],EDX     ; 005cfb83
    JMP 0x005cebeb                      ; 005cfb8a
        ;   XREF to: 005cebeb (UNCONDITIONAL_JUMP)  ; LAB_005cebeb
    MOV dword ptr [EBX + 0xa4],0x3      ; 005cfb8f
        ;   Label: LAB_005cfb8f
    MOV EAX,dword ptr [ESP + 0x5d8]     ; 005cfb99
    FLD double ptr [ECX]                ; 005cfba0
    FSTP double ptr [EAX]               ; 005cfba2
    FLD double ptr [ECX + 0x8]          ; 005cfba4
    FSTP double ptr [EAX + 0x8]         ; 005cfba7
    FLD double ptr [ECX + 0x10]         ; 005cfbaa
    FSTP double ptr [EAX + 0x10]        ; 005cfbad
    MOV EAX,dword ptr [ESP + 0x578]     ; 005cfbb0
    FLD double ptr [EDI]                ; 005cfbb7
    FSTP double ptr [EAX]               ; 005cfbb9
    FLD double ptr [EDI + 0x8]          ; 005cfbbb
    FSTP double ptr [EAX + 0x8]         ; 005cfbbe
    MOV EAX,dword ptr [ESP + 0x564]     ; 005cfbc1
    FLD double ptr [EAX]                ; 005cfbc8
    MOV EAX,dword ptr [ESP + 0x544]     ; 005cfbca
    FSTP double ptr [EAX]               ; 005cfbd1
    MOV EAX,dword ptr [ESP + 0x564]     ; 005cfbd3
    FLD double ptr [EAX + 0x8]          ; 005cfbda
    MOV EAX,dword ptr [ESP + 0x544]     ; 005cfbdd
    FSTP double ptr [EAX + 0x8]         ; 005cfbe4
    MOV EAX,dword ptr [ESP + 0x564]     ; 005cfbe7
    FLD double ptr [EAX + 0x10]         ; 005cfbee
    MOV EAX,dword ptr [ESP + 0x544]     ; 005cfbf1
    FSTP double ptr [EAX + 0x10]        ; 005cfbf8
    MOV EAX,dword ptr [ESP + 0x5e4]     ; 005cfbfb
    FLD double ptr [EAX]                ; 005cfc02
    MOV EAX,dword ptr [ESP + 0x598]     ; 005cfc04
    FSTP double ptr [EAX]               ; 005cfc0b
    MOV EAX,dword ptr [ESP + 0x5e4]     ; 005cfc0d
    FLD double ptr [EAX + 0x8]          ; 005cfc14
    MOV EAX,dword ptr [ESP + 0x598]     ; 005cfc17
    FSTP double ptr [EAX + 0x8]         ; 005cfc1e
    MOV EAX,dword ptr [ESP + 0x5d4]     ; 005cfc21
    FLD double ptr [EDX]                ; 005cfc28
    FSTP double ptr [EAX]               ; 005cfc2a
    FLD double ptr [EDX + 0x8]          ; 005cfc2c
    FSTP double ptr [EAX + 0x8]         ; 005cfc2f
    FLD double ptr [EDX + 0x10]         ; 005cfc32
    FSTP double ptr [EAX + 0x10]        ; 005cfc35
    MOV EAX,dword ptr [ESP + 0x584]     ; 005cfc38
    FLD double ptr [ESI]                ; 005cfc3f
    FSTP double ptr [EAX]               ; 005cfc41
    FLD double ptr [ESI + 0x8]          ; 005cfc43
    FSTP double ptr [EAX + 0x8]         ; 005cfc46
    MOV dword ptr [EBX],0x3             ; 005cfc49
    MOV EAX,dword ptr [ESP + 0x53c]     ; 005cfc4f
    MOV EBX,dword ptr [ECX]             ; 005cfc56
    MOV dword ptr [EAX],EBX             ; 005cfc58
    MOV EBX,dword ptr [ECX + 0x4]       ; 005cfc5a
    MOV dword ptr [EAX + 0x4],EBX       ; 005cfc5d
    MOV EBX,dword ptr [ECX + 0x8]       ; 005cfc60
    MOV dword ptr [EAX + 0x8],EBX       ; 005cfc63
    MOV EBX,dword ptr [ECX + 0xc]       ; 005cfc66
    MOV dword ptr [EAX + 0xc],EBX       ; 005cfc69
    MOV EBX,dword ptr [ECX + 0x10]      ; 005cfc6c
    MOV dword ptr [EAX + 0x10],EBX      ; 005cfc6f
    MOV EBX,dword ptr [ECX + 0x14]      ; 005cfc72
    MOV dword ptr [EAX + 0x14],EBX      ; 005cfc75
    MOV EAX,dword ptr [ESP + 0x590]     ; 005cfc78
    MOV ECX,dword ptr [EDI]             ; 005cfc7f
    MOV dword ptr [EAX],ECX             ; 005cfc81
    MOV ECX,dword ptr [EDI + 0x4]       ; 005cfc83
    MOV dword ptr [EAX + 0x4],ECX       ; 005cfc86
    MOV ECX,dword ptr [EDI + 0x8]       ; 005cfc89
    MOV dword ptr [EAX + 0x8],ECX       ; 005cfc8c
    MOV ECX,dword ptr [EDI + 0xc]       ; 005cfc8f
    MOV dword ptr [EAX + 0xc],ECX       ; 005cfc92
    MOV EAX,dword ptr [ESP + 0x5c4]     ; 005cfc95
    MOV ECX,dword ptr [EDX]             ; 005cfc9c
    MOV dword ptr [EAX],ECX             ; 005cfc9e
    MOV ECX,dword ptr [EDX + 0x4]       ; 005cfca0
    MOV dword ptr [EAX + 0x4],ECX       ; 005cfca3
    MOV ECX,dword ptr [EDX + 0x8]       ; 005cfca6
    MOV dword ptr [EAX + 0x8],ECX       ; 005cfca9
    MOV ECX,dword ptr [EDX + 0xc]       ; 005cfcac
    MOV dword ptr [EAX + 0xc],ECX       ; 005cfcaf
    MOV ECX,dword ptr [EDX + 0x10]      ; 005cfcb2
    MOV dword ptr [EAX + 0x10],ECX      ; 005cfcb5
    MOV ECX,dword ptr [EDX + 0x14]      ; 005cfcb8
    MOV dword ptr [EAX + 0x14],ECX      ; 005cfcbb
    MOV EAX,dword ptr [ESP + 0x58c]     ; 005cfcbe
    MOV EDX,dword ptr [ESI]             ; 005cfcc5
    MOV dword ptr [EAX],EDX             ; 005cfcc7
    MOV EDX,dword ptr [ESI + 0x4]       ; 005cfcc9
    MOV dword ptr [EAX + 0x4],EDX       ; 005cfccc
    MOV EDX,dword ptr [ESI + 0x8]       ; 005cfccf
    MOV dword ptr [EAX + 0x8],EDX       ; 005cfcd2
    MOV EDX,dword ptr [ESI + 0xc]       ; 005cfcd5
    MOV dword ptr [EAX + 0xc],EDX       ; 005cfcd8
    MOV EAX,dword ptr [ESP + 0x5e8]     ; 005cfcdb
    FLD double ptr [EAX]                ; 005cfce2
    MOV EAX,dword ptr [ESP + 0x5c8]     ; 005cfce4
    FSTP double ptr [EAX]               ; 005cfceb
    MOV EAX,dword ptr [ESP + 0x5e8]     ; 005cfced
    FLD double ptr [EAX + 0x8]          ; 005cfcf4
    MOV EAX,dword ptr [ESP + 0x5c8]     ; 005cfcf7
    FSTP double ptr [EAX + 0x8]         ; 005cfcfe
    MOV EAX,dword ptr [ESP + 0x5e8]     ; 005cfd01
    FLD double ptr [EAX + 0x10]         ; 005cfd08
    MOV EAX,dword ptr [ESP + 0x5c8]     ; 005cfd0b
    FSTP double ptr [EAX + 0x10]        ; 005cfd12
    MOV EAX,dword ptr [ESP + 0x5cc]     ; 005cfd15
    FLD double ptr [EAX]                ; 005cfd1c
    MOV EAX,dword ptr [ESP + 0x57c]     ; 005cfd1e
    FSTP double ptr [EAX]               ; 005cfd25
    MOV EAX,dword ptr [ESP + 0x5cc]     ; 005cfd27
    FLD double ptr [EAX + 0x8]          ; 005cfd2e
    MOV EAX,dword ptr [ESP + 0x57c]     ; 005cfd31
    FSTP double ptr [EAX + 0x8]         ; 005cfd38
    MOV EAX,0x1                         ; 005cfd3b
    MOV ESP,EBP                         ; 005cfd40
    POP EBP                             ; 005cfd42
    POP EDI                             ; 005cfd43
    POP ESI                             ; 005cfd44
    POP EBX                             ; 005cfd45
    RET                                 ; 005cfd46
    FLDZ                                ; 005cfd47
        ;   Label: LAB_005cfd47
    FCOMP double ptr [ESP + 0x210]      ; 005cfd49
    FNSTSW AX                           ; 005cfd50
    SAHF                                ; 005cfd52
    JBE 0x005cfd67                      ; 005cfd53
        ;   XREF to: 005cfd67 (CONDITIONAL_JUMP)  ; LAB_005cfd67
    FLDZ                                ; 005cfd55
    FCOMP double ptr [ESP + 0x218]      ; 005cfd57
    FNSTSW AX                           ; 005cfd5e
    SAHF                                ; 005cfd60
    JA 0x005cf2ff                       ; 005cfd61
        ;   XREF to: 005cf2ff (CONDITIONAL_JUMP)  ; LAB_005cf2ff
    FLDZ                                ; 005cfd67
        ;   Label: LAB_005cfd67
    FCOMP double ptr [ESP + 0x208]      ; 005cfd69
    FNSTSW AX                           ; 005cfd70
    SAHF                                ; 005cfd72
    JA 0x005cfda9                       ; 005cfd73
        ;   XREF to: 005cfda9 (CONDITIONAL_JUMP)  ; LAB_005cfda9
    FLDZ                                ; 005cfd75
    FCOMP double ptr [ESP + 0x218]      ; 005cfd77
    FNSTSW AX                           ; 005cfd7e
    SAHF                                ; 005cfd80
    JA 0x005cfda9                       ; 005cfd81
        ;   XREF to: 005cfda9 (CONDITIONAL_JUMP)  ; LAB_005cfda9
    MOV EDX,0x2                         ; 005cfd83
        ;   Label: LAB_005cfd83
    MOV EAX,0x1                         ; 005cfd88
    XOR ECX,ECX                         ; 005cfd8d
    MOV dword ptr [ESP + 0x538],EDX     ; 005cfd8f
    MOV dword ptr [ESP + 0x5a8],ECX     ; 005cfd96
    MOV dword ptr [ESP + 0x5b0],EAX     ; 005cfd9d
    JMP 0x005cf320                      ; 005cfda4
        ;   XREF to: 005cf320 (UNCONDITIONAL_JUMP)  ; LAB_005cf320
    FLDZ                                ; 005cfda9
        ;   Label: LAB_005cfda9
    FCOMP double ptr [ESP + 0x208]      ; 005cfdab
    FNSTSW AX                           ; 005cfdb2
    SAHF                                ; 005cfdb4
    JBE 0x005cfdc5                      ; 005cfdb5
        ;   XREF to: 005cfdc5 (CONDITIONAL_JUMP)  ; LAB_005cfdc5
    FLDZ                                ; 005cfdb7
    FCOMP double ptr [ESP + 0x218]      ; 005cfdb9
    FNSTSW AX                           ; 005cfdc0
    SAHF                                ; 005cfdc2
    JA 0x005cfd83                       ; 005cfdc3
        ;   XREF to: 005cfd83 (CONDITIONAL_JUMP)  ; LAB_005cfd83
    MOV EDI,0x1                         ; 005cfdc5
        ;   Label: LAB_005cfdc5
    XOR ESI,ESI                         ; 005cfdca
    MOV ECX,0x2                         ; 005cfdcc
    MOV dword ptr [ESP + 0x538],ESI     ; 005cfdd1
    MOV dword ptr [ESP + 0x5a8],EDI     ; 005cfdd8
    MOV dword ptr [ESP + 0x5b0],ECX     ; 005cfddf
    JMP 0x005cf320                      ; 005cfde6
        ;   XREF to: 005cf320 (UNCONDITIONAL_JUMP)  ; LAB_005cf320
    MOV dword ptr [EBX],0x4             ; 005cfdeb
        ;   Label: LAB_005cfdeb
    MOV EAX,dword ptr [ESP + 0x540]     ; 005cfdf1
    FLD double ptr [EDX]                ; 005cfdf8
    FSTP double ptr [EAX]               ; 005cfdfa
    FLD double ptr [EDX + 0x8]          ; 005cfdfc
    FSTP double ptr [EAX + 0x8]         ; 005cfdff
    FLD double ptr [EDX + 0x10]         ; 005cfe02
    FSTP double ptr [EAX + 0x10]        ; 005cfe05
    MOV EAX,dword ptr [ESP + 0x54c]     ; 005cfe08
    FLD double ptr [EAX]                ; 005cfe0f
    MOV EAX,dword ptr [ESP + 0x59c]     ; 005cfe11
    FSTP double ptr [EAX]               ; 005cfe18
    MOV EAX,dword ptr [ESP + 0x54c]     ; 005cfe1a
    FLD double ptr [EAX + 0x8]          ; 005cfe21
    MOV EAX,dword ptr [ESP + 0x59c]     ; 005cfe24
    FSTP double ptr [EAX + 0x8]         ; 005cfe2b
    MOV EAX,dword ptr [ESP + 0x560]     ; 005cfe2e
    FLD double ptr [EAX]                ; 005cfe35
    MOV EAX,dword ptr [ESP + 0x5d0]     ; 005cfe37
    FSTP double ptr [EAX]               ; 005cfe3e
    MOV EAX,dword ptr [ESP + 0x560]     ; 005cfe40
    FLD double ptr [EAX + 0x8]          ; 005cfe47
    MOV EAX,dword ptr [ESP + 0x5d0]     ; 005cfe4a
    FSTP double ptr [EAX + 0x8]         ; 005cfe51
    MOV EAX,dword ptr [ESP + 0x560]     ; 005cfe54
    FLD double ptr [EAX + 0x10]         ; 005cfe5b
    MOV EAX,dword ptr [ESP + 0x5d0]     ; 005cfe5e
    FSTP double ptr [EAX + 0x10]        ; 005cfe65
    MOV EAX,dword ptr [ESP + 0x5e0]     ; 005cfe68
    FLD double ptr [EAX]                ; 005cfe6f
    MOV EAX,dword ptr [ESP + 0x5a4]     ; 005cfe71
    FSTP double ptr [EAX]               ; 005cfe78
    MOV EAX,dword ptr [ESP + 0x5e0]     ; 005cfe7a
    FLD double ptr [EAX + 0x8]          ; 005cfe81
    MOV EAX,dword ptr [ESP + 0x5a4]     ; 005cfe84
    FSTP double ptr [EAX + 0x8]         ; 005cfe8b
    MOV EAX,dword ptr [ESP + 0x56c]     ; 005cfe8e
    FLD double ptr [EAX]                ; 005cfe95
    MOV EAX,dword ptr [ESP + 0x5b8]     ; 005cfe97
    FSTP double ptr [EAX]               ; 005cfe9e
    MOV EAX,dword ptr [ESP + 0x56c]     ; 005cfea0
    FLD double ptr [EAX + 0x8]          ; 005cfea7
    MOV EAX,dword ptr [ESP + 0x5b8]     ; 005cfeaa
    FSTP double ptr [EAX + 0x8]         ; 005cfeb1
    MOV EAX,dword ptr [ESP + 0x56c]     ; 005cfeb4
    FLD double ptr [EAX + 0x10]         ; 005cfebb
    MOV EAX,dword ptr [ESP + 0x5b8]     ; 005cfebe
    FSTP double ptr [EAX + 0x10]        ; 005cfec5
    MOV EAX,dword ptr [ESP + 0x548]     ; 005cfec8
    FLD double ptr [EAX]                ; 005cfecf
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 005cfed1
    FSTP double ptr [EAX]               ; 005cfed8
    MOV EAX,dword ptr [ESP + 0x548]     ; 005cfeda
    FLD double ptr [EAX + 0x8]          ; 005cfee1
    MOV EAX,dword ptr [ESP + 0x5a0]     ; 005cfee4
    FSTP double ptr [EAX + 0x8]         ; 005cfeeb
    LEA EAX,[EBX + 0x4c]                ; 005cfeee
    FLD double ptr [ECX]                ; 005cfef1
    FSTP double ptr [EAX]               ; 005cfef3
    FLD double ptr [ECX + 0x8]          ; 005cfef5
    FSTP double ptr [EAX + 0x8]         ; 005cfef8
    FLD double ptr [ECX + 0x10]         ; 005cfefb
    FSTP double ptr [EAX + 0x10]        ; 005cfefe
    LEA EAX,[EBX + 0x94]                ; 005cff01
    FLD double ptr [ESI]                ; 005cff07
    FSTP double ptr [EAX]               ; 005cff09
    FLD double ptr [ESI + 0x8]          ; 005cff0b
    FSTP double ptr [EAX + 0x8]         ; 005cff0e
    MOV EAX,dword ptr [ESP + 0x568]     ; 005cff11
    MOV dword ptr [EBX + 0xa4],0x3      ; 005cff18
    MOV EBX,dword ptr [EAX]             ; 005cff22
    MOV dword ptr [EDI],EBX             ; 005cff24
    MOV EBX,dword ptr [EAX + 0x4]       ; 005cff26
    MOV dword ptr [EDI + 0x4],EBX       ; 005cff29
    MOV EBX,dword ptr [EAX + 0x8]       ; 005cff2c
    MOV dword ptr [EDI + 0x8],EBX       ; 005cff2f
    MOV EBX,dword ptr [EAX + 0xc]       ; 005cff32
    MOV dword ptr [EDI + 0xc],EBX       ; 005cff35
    FLD double ptr [EAX + 0x10]         ; 005cff38
    MOV EAX,dword ptr [ESP + 0x5dc]     ; 005cff3b
    FSTP double ptr [EDI + 0x10]        ; 005cff42
    FLD double ptr [EAX]                ; 005cff45
    MOV EAX,dword ptr [ESP + 0x574]     ; 005cff47
    FSTP double ptr [EAX]               ; 005cff4e
    MOV EAX,dword ptr [ESP + 0x5dc]     ; 005cff50
    FLD double ptr [EAX + 0x8]          ; 005cff57
    MOV EAX,dword ptr [ESP + 0x574]     ; 005cff5a
    FSTP double ptr [EAX + 0x8]         ; 005cff61
    MOV EAX,dword ptr [ESP + 0x5c0]     ; 005cff64
    MOV EBX,dword ptr [EDX]             ; 005cff6b
    MOV dword ptr [EAX],EBX             ; 005cff6d
    MOV EBX,dword ptr [EDX + 0x4]       ; 005cff6f
    MOV dword ptr [EAX + 0x4],EBX       ; 005cff72
    MOV EBX,dword ptr [EDX + 0x8]       ; 005cff75
    MOV dword ptr [EAX + 0x8],EBX       ; 005cff78
    MOV EBX,dword ptr [EDX + 0xc]       ; 005cff7b
    MOV dword ptr [EAX + 0xc],EBX       ; 005cff7e
    MOV EBX,dword ptr [EDX + 0x10]      ; 005cff81
    MOV dword ptr [EAX + 0x10],EBX      ; 005cff84
    MOV EBX,dword ptr [EDX + 0x14]      ; 005cff87
    MOV dword ptr [EAX + 0x14],EBX      ; 005cff8a
    MOV EAX,dword ptr [ESP + 0x54c]     ; 005cff8d
    FLD double ptr [EAX]                ; 005cff94
    MOV EAX,dword ptr [ESP + 0x580]     ; 005cff96
    FSTP double ptr [EAX]               ; 005cff9d
    MOV EAX,dword ptr [ESP + 0x54c]     ; 005cff9f
    FLD double ptr [EAX + 0x8]          ; 005cffa6
    MOV EAX,dword ptr [ESP + 0x580]     ; 005cffa9
    FSTP double ptr [EAX + 0x8]         ; 005cffb0
    MOV EAX,dword ptr [ESP + 0x5bc]     ; 005cffb3
    MOV EDX,dword ptr [ECX]             ; 005cffba
    MOV dword ptr [EAX],EDX             ; 005cffbc
    MOV EDX,dword ptr [ECX + 0x4]       ; 005cffbe
    MOV dword ptr [EAX + 0x4],EDX       ; 005cffc1
    MOV EDX,dword ptr [ECX + 0x8]       ; 005cffc4
    MOV dword ptr [EAX + 0x8],EDX       ; 005cffc7
    MOV EDX,dword ptr [ECX + 0xc]       ; 005cffca
    MOV dword ptr [EAX + 0xc],EDX       ; 005cffcd
    MOV EDX,dword ptr [ECX + 0x10]      ; 005cffd0
    MOV dword ptr [EAX + 0x10],EDX      ; 005cffd3
    MOV EDX,dword ptr [ECX + 0x14]      ; 005cffd6
    MOV dword ptr [EAX + 0x14],EDX      ; 005cffd9
    MOV EAX,dword ptr [ESP + 0x588]     ; 005cffdc
    MOV EDX,dword ptr [ESI]             ; 005cffe3
    MOV dword ptr [EAX],EDX             ; 005cffe5
    MOV EDX,dword ptr [ESI + 0x4]       ; 005cffe7
    MOV dword ptr [EAX + 0x4],EDX       ; 005cffea
    MOV EDX,dword ptr [ESI + 0x8]       ; 005cffed
    MOV dword ptr [EAX + 0x8],EDX       ; 005cfff0
    MOV EDX,dword ptr [ESI + 0xc]       ; 005cfff3
    MOV dword ptr [EAX + 0xc],EDX       ; 005cfff6
    MOV EAX,0x1                         ; 005cfff9
    MOV ESP,EBP                         ; 005cfffe
    POP EBP                             ; 005d0000
    POP EDI                             ; 005d0001
    POP ESI                             ; 005d0002
    POP EBX                             ; 005d0003
    RET                                 ; 005d0004
    MOV ECX,dword ptr [ESI]             ; 006058d9
        ;   Label: LAB_006058d9
    MOV dword ptr [EDI],ECX             ; 006058db
    MOV ECX,dword ptr [ESI + 0x4]       ; 006058dd
    MOV dword ptr [EDI + 0x4],ECX       ; 006058e0
    MOV ECX,dword ptr [ESI + 0x8]       ; 006058e3
    MOV dword ptr [EDI + 0x8],ECX       ; 006058e6
    MOV ECX,dword ptr [ESI + 0xc]       ; 006058e9
    MOV dword ptr [EDI + 0xc],ECX       ; 006058ec
    ADD ESI,0x10                        ; 006058ef
    ADD EDI,0x10                        ; 006058f2
    FLD double ptr [ESP + 0x4f8]        ; 006058f5
    JMP 0x005cee32                      ; 006058fc
        ;   XREF to: 005cee32 (UNCONDITIONAL_JUMP)  ; LAB_005cee32
    MOV ECX,dword ptr [ESI]             ; 00605901
        ;   Label: LAB_00605901
    MOV dword ptr [EDI],ECX             ; 00605903
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605905
    MOV dword ptr [EDI + 0x4],ECX       ; 00605908
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060590b
    MOV dword ptr [EDI + 0x8],ECX       ; 0060590e
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605911
    MOV dword ptr [EDI + 0xc],ECX       ; 00605914
    ADD ESI,0x10                        ; 00605917
    ADD EDI,0x10                        ; 0060591a
    FLD double ptr [EAX + 0x8]          ; 0060591d
    JMP 0x005cee6d                      ; 00605920
        ;   XREF to: 005cee6d (UNCONDITIONAL_JUMP)  ; LAB_005cee6d
    MOV ECX,dword ptr [ESI]             ; 00605925
        ;   Label: LAB_00605925
    MOV dword ptr [EDI],ECX             ; 00605927
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605929
    MOV dword ptr [EDI + 0x4],ECX       ; 0060592c
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060592f
    MOV dword ptr [EDI + 0x8],ECX       ; 00605932
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605935
    MOV dword ptr [EDI + 0xc],ECX       ; 00605938
    ADD ESI,0x10                        ; 0060593b
    ADD EDI,0x10                        ; 0060593e
    SHL EAX,0x4                         ; 00605941
    JMP 0x005ceeab                      ; 00605944
        ;   XREF to: 005ceeab (UNCONDITIONAL_JUMP)  ; LAB_005ceeab
    MOV ECX,dword ptr [ESI]             ; 00605949
        ;   Label: LAB_00605949
    MOV dword ptr [EDI],ECX             ; 0060594b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060594d
    MOV dword ptr [EDI + 0x4],ECX       ; 00605950
        ;   Label: SUB_00605950
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605953
    MOV dword ptr [EDI + 0x8],ECX       ; 00605956
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605959
    MOV dword ptr [EDI + 0xc],ECX       ; 0060595c
        ;   Label: SUB_0060595c
    ADD ESI,0x10                        ; 0060595f
    ADD EDI,0x10                        ; 00605962
    FLD double ptr [ESP + 0x448]        ; 00605965
    JMP 0x005cf539                      ; 0060596c
        ;   XREF to: 005cf539 (UNCONDITIONAL_JUMP)  ; LAB_005cf539
    MOV ECX,dword ptr [ESI]             ; 00605971
        ;   Label: LAB_00605971
    MOV dword ptr [EDI],ECX             ; 00605973
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605975
    MOV dword ptr [EDI + 0x4],ECX       ; 00605978
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060597b
    MOV dword ptr [EDI + 0x8],ECX       ; 0060597e
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605981
    MOV dword ptr [EDI + 0xc],ECX       ; 00605984
    ADD ESI,0x10                        ; 00605987
    ADD EDI,0x10                        ; 0060598a
    LEA EAX,[ESP + 0x98]                ; 0060598d
    JMP 0x005cf578                      ; 00605994
        ;   XREF to: 005cf578 (UNCONDITIONAL_JUMP)  ; LAB_005cf578
    MOV ECX,dword ptr [ESI]             ; 00605999
        ;   Label: LAB_00605999
    MOV dword ptr [EDI],ECX             ; 0060599b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060599d
    MOV dword ptr [EDI + 0x4],ECX       ; 006059a0
    MOV ECX,dword ptr [ESI + 0x8]       ; 006059a3
    MOV dword ptr [EDI + 0x8],ECX       ; 006059a6
    MOV ECX,dword ptr [ESI + 0xc]       ; 006059a9
    MOV dword ptr [EDI + 0xc],ECX       ; 006059ac
    ADD ESI,0x10                        ; 006059af
    ADD EDI,0x10                        ; 006059b2
    MOV ECX,dword ptr [ESP + 0x54c]     ; 006059b5
    JMP 0x005cf5c9                      ; 006059bc
        ;   XREF to: 005cf5c9 (UNCONDITIONAL_JUMP)  ; LAB_005cf5c9
    MOV ECX,dword ptr [ESI]             ; 0060f38f
        ;   Label: LAB_0060f38f
    MOV dword ptr [EDI],ECX             ; 0060f391
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f393
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f396
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f399
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f39c
        ;   Label: SUB_0060f39c
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f39f
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f3a2
    ADD ESI,0x10                        ; 0060f3a5
    ADD EDI,0x10                        ; 0060f3a8
    FLD double ptr [ESP]                ; 0060f3ab
    JMP 0x005cf7bc                      ; 0060f3ae
        ;   XREF to: 005cf7bc (UNCONDITIONAL_JUMP)  ; LAB_005cf7bc
    MOV ECX,dword ptr [ESI]             ; 0060f3b3
        ;   Label: LAB_0060f3b3
    MOV dword ptr [EDI],ECX             ; 0060f3b5
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f3b7
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f3ba
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f3bd
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f3c0
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f3c3
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f3c6
    ADD ESI,0x10                        ; 0060f3c9
    ADD EDI,0x10                        ; 0060f3cc
    FLD double ptr [EAX]                ; 0060f3cf
    JMP 0x005cf7f7                      ; 0060f3d1
        ;   XREF to: 005cf7f7 (UNCONDITIONAL_JUMP)  ; LAB_005cf7f7
    MOV ECX,dword ptr [ESI]             ; 0060f3d6
        ;   Label: LAB_0060f3d6
    MOV dword ptr [EDI],ECX             ; 0060f3d8
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060f3da
    MOV dword ptr [EDI + 0x4],ECX       ; 0060f3dd
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060f3e0
    MOV dword ptr [EDI + 0x8],ECX       ; 0060f3e3
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060f3e6
    MOV dword ptr [EDI + 0xc],ECX       ; 0060f3e9
    ADD ESI,0x10                        ; 0060f3ec
    ADD EDI,0x10                        ; 0060f3ef
    MOV ESI,dword ptr [ESP + 0x550]     ; 0060f3f2
    JMP 0x005cf835                      ; 0060f3f9
        ;   XREF to: 005cf835 (UNCONDITIONAL_JUMP)  ; LAB_005cf835

