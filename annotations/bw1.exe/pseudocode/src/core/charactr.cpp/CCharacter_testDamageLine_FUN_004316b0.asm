; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_004316b0(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start
; CVector3f *      Stack[0xc]:4   end
; SDamageInfo *    Stack[0x10]:4   damage_info
; CVector3f *      Stack[0x14]:4   out_hit
;
; Referenced Globals:
;   undefined4 DAT_005d5a6f
;   undefined4 DAT_005d5a77
;   undefined4 DAT_005d5a7b
;   CGore* g_CGorePtr = 01cd0e3c
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004316b0
        ;   Label: core_charactr.cpp_CCharacter_testDamageLine_FUN_004316b0
    PUSH ESI                            ; 004316b1
    PUSH EDI                            ; 004316b2
    PUSH EBP                            ; 004316b3
    MOV EBP,ESP                         ; 004316b4
    SUB ESP,0xe4                        ; 004316b6
    AND ESP,0xfffffff8                  ; 004316bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004316bf
    CMP dword ptr [EBX + 0x27b0],0x0    ; 004316c2
    JZ 0x004316d4                       ; 004316c9
        ;   XREF to: 004316d4 (CONDITIONAL_JUMP)  ; LAB_004316d4
    XOR EAX,EAX                         ; 004316cb
    MOV ESP,EBP                         ; 004316cd
    POP EBP                             ; 004316cf
    POP EDI                             ; 004316d0
    POP ESI                             ; 004316d1
    POP EBX                             ; 004316d2
    RET                                 ; 004316d3
    MOV ECX,dword ptr [EBP + 0x18]      ; 004316d4
        ;   Label: LAB_004316d4
    PUSH ECX                            ; 004316d7
    PUSH EBX                            ; 004316d8
    LEA ESI,[ESP + 0x88]                ; 004316d9
    LEA EDI,[ESP + 0x40]                ; 004316e0
    CALL core_actor.cpp_FUN_00408bb0    ; 004316e4
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x88]                ; 004316e9
    ADD ESP,0x8                         ; 004316f0
    MOVSD ES:EDI,ESI                    ; 004316f3
    MOVSD ES:EDI,ESI                    ; 004316f4
    MOVSD ES:EDI,ESI                    ; 004316f5
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004316f6
    PUSH ESI                            ; 004316f9
    PUSH EBX                            ; 004316fa
    LEA ESI,[ESP + 0x7c]                ; 004316fb
    CALL core_actor.cpp_FUN_00408bb0    ; 004316ff
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 00431704
    LEA EDX,[ESP + 0x8c]                ; 00431707
    LEA EDI,[ESP + 0x50]                ; 0043170e
    PUSH EDX                            ; 00431712
    LEA EDX,[ESP + 0x54]                ; 00431713
    LEA ESI,[ESP + 0x78]                ; 00431717
    PUSH EDX                            ; 0043171b
    LEA EDX,[ESP + 0x40]                ; 0043171c
    MOVSD ES:EDI,ESI                    ; 00431720
    MOVSD ES:EDI,ESI                    ; 00431721
    MOVSD ES:EDI,ESI                    ; 00431722
    PUSH EDX                            ; 00431723
    MOV EAX,dword ptr [EBX + 0x154]     ; 00431724
    PUSH EBX                            ; 0043172a
    CALL dword ptr [EAX + 0xb0]         ; 0043172b
    ADD ESP,0x10                        ; 00431731
    TEST EAX,EAX                        ; 00431734
    JZ 0x0043195d                       ; 00431736
        ;   XREF to: 0043195d (CONDITIONAL_JUMP)  ; LAB_0043195d
    CMP dword ptr [EBP + 0x24],0x0      ; 0043173c
    JNZ 0x00431970                      ; 00431740
        ;   XREF to: 00431970 (CONDITIONAL_JUMP)  ; LAB_00431970
    MOV EAX,dword ptr [EBP + 0x20]      ; 00431746
        ;   Label: LAB_00431746
    FLDZ                                ; 00431749
    FLD float ptr [EAX + 0x4]           ; 0043174b
    FSTP double ptr [ESP]               ; 0043174e
    FCOMP double ptr [ESP]              ; 00431751
    FNSTSW AX                           ; 00431754
    SAHF                                ; 00431756
    JNC 0x004318a5                      ; 00431757
        ;   XREF to: 004318a5 (CONDITIONAL_JUMP)  ; LAB_004318a5
    FLD double ptr [ESP]                ; 0043175d
    FMUL double ptr [0x005d5a6f]        ; 00431760 | DAT_005d5a6f
    CALL crt_math.c_round_FUN_005c03a0  ; 00431766
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xd4]        ; 0043176b
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00431772
    INC EAX                             ; 00431779
    MOV dword ptr [ESP + 0xdc],EAX      ; 0043177a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00431781
    FLD float ptr [EAX]                 ; 00431784
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431786
    FSUB float ptr [EAX]                ; 00431789
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043178b
    FLD float ptr [EAX + 0x4]           ; 0043178e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431791
    FSUB float ptr [EAX + 0x4]          ; 00431794
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00431797
    LEA EDI,[ESP + 0x20]                ; 0043179a
    LEA ESI,[ESP + 0x44]                ; 0043179e
    FLD float ptr [EAX + 0x8]           ; 004317a2
    MOV EAX,dword ptr [EBP + 0x18]      ; 004317a5
    FXCH ST2                            ; 004317a8
    FSTP float ptr [ESP + 0x44]         ; 004317aa
    FXCH                                ; 004317ae
    FSUB float ptr [EAX + 0x8]          ; 004317b0
    FXCH                                ; 004317b3
    FSTP float ptr [ESP + 0x48]         ; 004317b5
    FSTP float ptr [ESP + 0x4c]         ; 004317b9
    MOVSD ES:EDI,ESI                    ; 004317bd
    MOVSD ES:EDI,ESI                    ; 004317be
    MOVSD ES:EDI,ESI                    ; 004317bf
    FLD float ptr [ESP + 0x24]          ; 004317c0
    FMUL ST0                            ; 004317c4
    FLD float ptr [ESP + 0x20]          ; 004317c6
    FMUL ST0                            ; 004317ca
    FADDP                               ; 004317cc
    FLD float ptr [ESP + 0x28]          ; 004317ce
    FMUL ST0                            ; 004317d2
    FADDP                               ; 004317d4
    FSQRT                               ; 004317d6
    FLDZ                                ; 004317d8
    FXCH                                ; 004317da
    FSTP float ptr [ESP + 0xe0]         ; 004317dc
    FCOMP float ptr [ESP + 0xe0]        ; 004317e3
    FNSTSW AX                           ; 004317ea
    SAHF                                ; 004317ec
    JNC 0x004319cd                      ; 004317ed
        ;   XREF to: 004319cd (CONDITIONAL_JUMP)  ; LAB_004319cd
    FLD1                                ; 004317f3
    FLD float ptr [ESP + 0x20]          ; 004317f5
    FXCH                                ; 004317f9
    FDIV float ptr [ESP + 0xe0]         ; 004317fb
    FXCH                                ; 00431802
    FMUL ST1                            ; 00431804
    FLD float ptr [ESP + 0x24]          ; 00431806
    FMUL ST2                            ; 0043180a
    FLD float ptr [ESP + 0x28]          ; 0043180c
    FMULP ST3                           ; 00431810
    FXCH                                ; 00431812
    FSTP float ptr [ESP + 0x20]         ; 00431814
    FSTP float ptr [ESP + 0x24]         ; 00431818
    FSTP float ptr [ESP + 0x28]         ; 0043181c
    FLD float ptr [0x005d5a77]          ; 00431820 | DAT_005d5a77
        ;   Label: LAB_00431820
    FLD float ptr [ESP + 0x20]          ; 00431826
    FMUL ST1                            ; 0043182a
    FLD float ptr [ESP + 0x24]          ; 0043182c
    FMUL ST2                            ; 00431830
    FLD float ptr [ESP + 0x28]          ; 00431832
    FMULP ST3                           ; 00431836
    LEA EDI,[ESP + 0xc8]                ; 00431838
    LEA EAX,[ESP + 0x8c]                ; 0043183f
    LEA ESI,[ESP + 0x8]                 ; 00431846
    PUSH EAX                            ; 0043184a
    FXCH                                ; 0043184b
    FSTP float ptr [ESP + 0xc]          ; 0043184d
    FSTP float ptr [ESP + 0x10]         ; 00431851
    FSTP float ptr [ESP + 0x14]         ; 00431855
    MOVSD ES:EDI,ESI                    ; 00431859
    MOVSD ES:EDI,ESI                    ; 0043185a
    MOVSD ES:EDI,ESI                    ; 0043185b
    PUSH EBX                            ; 0043185c
    LEA ESI,[ESP + 0x64]                ; 0043185d
    LEA EDI,[ESP + 0xc4]                ; 00431861
    CALL core_actor.cpp_FUN_00408b40    ; 00431868
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x64]                ; 0043186d
    ADD ESP,0x8                         ; 00431871
    MOVSD ES:EDI,ESI                    ; 00431874
    MOVSD ES:EDI,ESI                    ; 00431875
    MOVSD ES:EDI,ESI                    ; 00431876
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 00431877
    PUSH EAX                            ; 0043187d
    MOV EDX,dword ptr [ESP + 0xe0]      ; 0043187e
    PUSH EDX                            ; 00431885
    LEA EAX,[ESP + 0xd0]                ; 00431886
    PUSH EAX                            ; 0043188d
    LEA EAX,[ESP + 0xc8]                ; 0043188e
    PUSH EAX                            ; 00431895
    MOV ECX,dword ptr [0x0061dca4]      ; 00431896 | g_CGorePtr
    PUSH ECX                            ; 0043189c
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 0043189d
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004318a2
    FLD float ptr [ESP + 0x38]          ; 004318a5
        ;   Label: LAB_004318a5
    FLD float ptr [ESP + 0x3c]          ; 004318a9
    FLD float ptr [ESP + 0x40]          ; 004318ad
    LEA EDI,[ESP + 0xb0]                ; 004318b1
    LEA ESI,[ESP + 0x2c]                ; 004318b8
    FXCH ST2                            ; 004318bc
    FADD float ptr [ESP + 0x50]         ; 004318be
    FXCH                                ; 004318c2
    FADD float ptr [ESP + 0x54]         ; 004318c4
    FXCH ST2                            ; 004318c8
    FADD float ptr [ESP + 0x58]         ; 004318ca
    FXCH                                ; 004318ce
    FSTP float ptr [ESP + 0x2c]         ; 004318d0
    FXCH                                ; 004318d4
    FSTP float ptr [ESP + 0x30]         ; 004318d6
    FSTP float ptr [ESP + 0x34]         ; 004318da
    MOVSD ES:EDI,ESI                    ; 004318de
    MOVSD ES:EDI,ESI                    ; 004318df
    MOVSD ES:EDI,ESI                    ; 004318e0
    FLD float ptr [0x005d5a7b]          ; 004318e1 | DAT_005d5a7b
    FLD float ptr [ESP + 0xb0]          ; 004318e7
    FMUL ST1                            ; 004318ee
    FLD float ptr [ESP + 0xb4]          ; 004318f0
    FMUL ST2                            ; 004318f7
    FLD float ptr [ESP + 0xb8]          ; 004318f9
    FMULP ST3                           ; 00431900
    MOV EDX,dword ptr [EBP + 0x20]      ; 00431902
    LEA EAX,[ESP + 0x68]                ; 00431905
    ADD EDX,0x1c                        ; 00431909
    LEA EDI,[ESP + 0x68]                ; 0043190c
    LEA ESI,[ESP + 0x14]                ; 00431910
    FXCH                                ; 00431914
    FSTP float ptr [ESP + 0x14]         ; 00431916
    FSTP float ptr [ESP + 0x18]         ; 0043191a
    FSTP float ptr [ESP + 0x1c]         ; 0043191e
    MOVSD ES:EDI,ESI                    ; 00431922
    MOVSD ES:EDI,ESI                    ; 00431923
    MOVSD ES:EDI,ESI                    ; 00431924
    CMP EDX,EAX                         ; 00431925
    JZ 0x0043193d                       ; 00431927
        ;   XREF to: 0043193d (CONDITIONAL_JUMP)  ; LAB_0043193d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00431929
    MOV dword ptr [EDX],EAX             ; 0043192d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0043192f
    MOV dword ptr [EDX + 0x4],EAX       ; 00431933
    MOV EAX,dword ptr [ESP + 0x70]      ; 00431936
    MOV dword ptr [EDX + 0x8],EAX       ; 0043193a
    MOV ESI,dword ptr [EBP + 0x20]      ; 0043193d
        ;   Label: LAB_0043193d
    PUSH ESI                            ; 00431940
    MOV EAX,dword ptr [EBX + 0x154]     ; 00431941
    PUSH EBX                            ; 00431947
    CALL dword ptr [EAX + 0x108]        ; 00431948
    MOV EAX,0x1                         ; 0043194e
    ADD ESP,0x8                         ; 00431953
    MOV ESP,EBP                         ; 00431956
    POP EBP                             ; 00431958
    POP EDI                             ; 00431959
    POP ESI                             ; 0043195a
    POP EBX                             ; 0043195b
    RET                                 ; 0043195c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043195d
        ;   Label: LAB_0043195d
    MOV dword ptr [EAX + 0x4],0x0       ; 00431960
    XOR EAX,EAX                         ; 00431967
    MOV ESP,EBP                         ; 00431969
    POP EBP                             ; 0043196b
    POP EDI                             ; 0043196c
    POP ESI                             ; 0043196d
    POP EBX                             ; 0043196e
    RET                                 ; 0043196f
    LEA EAX,[ESP + 0x8c]                ; 00431970
        ;   Label: LAB_00431970
    PUSH EAX                            ; 00431977
    PUSH EBX                            ; 00431978
    LEA ESI,[ESP + 0xa0]                ; 00431979
    LEA EDI,[ESP + 0xac]                ; 00431980
    CALL core_actor.cpp_FUN_00408b40    ; 00431987
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xa0]                ; 0043198c
    ADD ESP,0x8                         ; 00431993
    LEA EAX,[ESP + 0xa4]                ; 00431996
    MOV EDX,dword ptr [EBP + 0x24]      ; 0043199d
    MOVSD ES:EDI,ESI                    ; 004319a0
    MOVSD ES:EDI,ESI                    ; 004319a1
    MOVSD ES:EDI,ESI                    ; 004319a2
    CMP EAX,EDX                         ; 004319a3
    JZ 0x00431746                       ; 004319a5
        ;   XREF to: 00431746 (CONDITIONAL_JUMP)  ; LAB_00431746
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004319ab
    MOV dword ptr [EDX],EAX             ; 004319b2
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004319b4
    MOV dword ptr [EDX + 0x4],EAX       ; 004319bb
    MOV EAX,dword ptr [ESP + 0xac]      ; 004319be
    MOV dword ptr [EDX + 0x8],EAX       ; 004319c5
    JMP 0x00431746                      ; 004319c8
        ;   XREF to: 00431746 (UNCONDITIONAL_JUMP)  ; LAB_00431746
    XOR ECX,ECX                         ; 004319cd
        ;   Label: LAB_004319cd
    MOV dword ptr [ESP + 0x24],ECX      ; 004319cf
    MOV dword ptr [ESP + 0x20],ECX      ; 004319d3
    MOV dword ptr [ESP + 0x28],ECX      ; 004319d7
    JMP 0x00431820                      ; 004319db
        ;   XREF to: 00431820 (UNCONDITIONAL_JUMP)  ; LAB_00431820

