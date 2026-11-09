; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_FUN_00478550(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   search_radius
; float *          Stack[0x10]:4   out_height
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_0044f670 at 0044f713
;   core_setcolid.cpp_FUN_00534ea0 at 0053534a
;   core_stairs.cpp_FUN_005621e0 at 00562214
;
; Referenced Globals:
;   undefined4 DAT_005d1df3
;   undefined4 DAT_005d1dfb
;   undefined4 DAT_01c21e74
;   undefined4 DAT_01c21e78
;   undefined4 DAT_01c21e7c
;   undefined4 DAT_01c21e80
;
; Called Functions:
;   core_dtri.cpp_rayEdgeHeightTest_FUN_004783e0
;   core_dtri.cpp_rayTriangleIntersection_FUN_00477a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478550
        ;   Label: core_dtri.cpp_FUN_00478550
    PUSH ESI                            ; 00478551
    PUSH EDI                            ; 00478552
    PUSH EBP                            ; 00478553
    MOV EBP,ESP                         ; 00478554
    SUB ESP,0x78                        ; 00478556
    AND ESP,0xfffffff8                  ; 00478559
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047855c
    FLD float ptr [EBX + 0x28]          ; 0047855f
    FCOMP double ptr [0x005d1df3]       ; 00478562 | DAT_005d1df3
    FNSTSW AX                           ; 00478568
    SAHF                                ; 0047856a
    JA 0x004787a9                       ; 0047856b
        ;   XREF to: 004787a9 (CONDITIONAL_JUMP)  ; LAB_004787a9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00478571
    FLD float ptr [EBX]                 ; 00478574
    FSUB float ptr [EAX]                ; 00478576
    FSTP float ptr [ESP + 0x48]         ; 00478578
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047857c
    MOV dword ptr [ESP + 0x4c],EAX      ; 0047857f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00478583
    FLD float ptr [EBX + 0x8]           ; 00478586
    FSUB float ptr [EAX + 0x8]          ; 00478589
    FSTP float ptr [ESP + 0x50]         ; 0047858c
    FLD float ptr [EBX + 0xc]           ; 00478590
    FSUB float ptr [EAX]                ; 00478593
    FSTP float ptr [ESP + 0x3c]         ; 00478595
    MOV EAX,dword ptr [EBX + 0x10]      ; 00478599
    MOV dword ptr [ESP + 0x40],EAX      ; 0047859c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004785a0
    FLD float ptr [EBX + 0x14]          ; 004785a3
    FSUB float ptr [EAX + 0x8]          ; 004785a6
    FSTP float ptr [ESP + 0x44]         ; 004785a9
    FLD float ptr [EBX + 0x18]          ; 004785ad
    FSUB float ptr [EAX]                ; 004785b0
    FSTP float ptr [ESP + 0xc]          ; 004785b2
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004785b6
    MOV dword ptr [ESP + 0x10],EAX      ; 004785b9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004785bd
    FLD float ptr [EBX + 0x20]          ; 004785c0
    FSUB float ptr [EAX + 0x8]          ; 004785c3
    FLD float ptr [ESP + 0x4c]          ; 004785c6
    FXCH                                ; 004785ca
    FSTP float ptr [ESP + 0x14]         ; 004785cc
    FCOMP float ptr [ESP + 0x40]        ; 004785d0
    FNSTSW AX                           ; 004785d4
    SAHF                                ; 004785d6
    JC 0x004787b2                       ; 004785d7
        ;   XREF to: 004787b2 (CONDITIONAL_JUMP)  ; LAB_004787b2
    FLD float ptr [ESP + 0x40]          ; 004785dd
        ;   Label: LAB_004785dd
    FCOMP float ptr [ESP + 0x10]        ; 004785e1
    FNSTSW AX                           ; 004785e5
    SAHF                                ; 004785e7
    JNC 0x0047863d                      ; 004785e8
        ;   XREF to: 0047863d (CONDITIONAL_JUMP)  ; LAB_0047863d
    LEA EDI,[ESP + 0x24]                ; 004785ea
    LEA ESI,[ESP + 0x3c]                ; 004785ee
    MOVSD ES:EDI,ESI                    ; 004785f2
    MOVSD ES:EDI,ESI                    ; 004785f3
    MOVSD ES:EDI,ESI                    ; 004785f4
    LEA EAX,[ESP + 0xc]                 ; 004785f5
    LEA ESI,[ESP + 0x3c]                ; 004785f9
    CMP ESI,EAX                         ; 004785fd
    JZ 0x00478619                       ; 004785ff
        ;   XREF to: 00478619 (CONDITIONAL_JUMP)  ; LAB_00478619
    MOV EAX,dword ptr [ESP + 0xc]       ; 00478601
    MOV dword ptr [ESP + 0x3c],EAX      ; 00478605
    MOV EAX,dword ptr [ESP + 0x10]      ; 00478609
    MOV dword ptr [ESP + 0x40],EAX      ; 0047860d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00478611
    MOV dword ptr [ESP + 0x44],EAX      ; 00478615
    LEA EAX,[ESP + 0xc]                 ; 00478619
        ;   Label: LAB_00478619
    LEA ESI,[ESP + 0x24]                ; 0047861d
    CMP EAX,ESI                         ; 00478621
    JZ 0x0047863d                       ; 00478623
        ;   XREF to: 0047863d (CONDITIONAL_JUMP)  ; LAB_0047863d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478625
    MOV dword ptr [ESP + 0xc],EAX       ; 00478629
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047862d
    MOV dword ptr [ESP + 0x10],EAX      ; 00478631
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00478635
    MOV dword ptr [ESP + 0x14],EAX      ; 00478639
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047863d
        ;   Label: LAB_0047863d
    FLD float ptr [ESP + 0x10]          ; 00478640
    FCOMP float ptr [EAX + 0x4]         ; 00478644
    FNSTSW AX                           ; 00478647
    SAHF                                ; 00478649
    JA 0x004787a9                       ; 0047864a
        ;   XREF to: 004787a9 (CONDITIONAL_JUMP)  ; LAB_004787a9
    FLD float ptr [ESP + 0x4c]          ; 00478650
    FCOMP float ptr [ESP + 0x40]        ; 00478654
    FNSTSW AX                           ; 00478658
    SAHF                                ; 0047865a
    JNC 0x004786b0                      ; 0047865b
        ;   XREF to: 004786b0 (CONDITIONAL_JUMP)  ; LAB_004786b0
    LEA EDI,[ESP + 0x30]                ; 0047865d
    LEA ESI,[ESP + 0x48]                ; 00478661
    MOVSD ES:EDI,ESI                    ; 00478665
    MOVSD ES:EDI,ESI                    ; 00478666
    MOVSD ES:EDI,ESI                    ; 00478667
    LEA EAX,[ESP + 0x3c]                ; 00478668
    LEA ESI,[ESP + 0x48]                ; 0047866c
    CMP ESI,EAX                         ; 00478670
    JZ 0x0047868c                       ; 00478672
        ;   XREF to: 0047868c (CONDITIONAL_JUMP)  ; LAB_0047868c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00478674
    MOV dword ptr [ESP + 0x48],EAX      ; 00478678
    MOV EAX,dword ptr [ESP + 0x40]      ; 0047867c
    MOV dword ptr [ESP + 0x4c],EAX      ; 00478680
    MOV EAX,dword ptr [ESP + 0x44]      ; 00478684
    MOV dword ptr [ESP + 0x50],EAX      ; 00478688
    LEA ESI,[ESP + 0x3c]                ; 0047868c
        ;   Label: LAB_0047868c
    LEA EAX,[ESP + 0x30]                ; 00478690
    CMP ESI,EAX                         ; 00478694
    JZ 0x004786b0                       ; 00478696
        ;   XREF to: 004786b0 (CONDITIONAL_JUMP)  ; LAB_004786b0
    MOV EAX,dword ptr [ESP + 0x30]      ; 00478698
    MOV dword ptr [ESP + 0x3c],EAX      ; 0047869c
    MOV EAX,dword ptr [ESP + 0x34]      ; 004786a0
    MOV dword ptr [ESP + 0x40],EAX      ; 004786a4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004786a8
    MOV dword ptr [ESP + 0x44],EAX      ; 004786ac
    MOV EAX,dword ptr [EBP + 0x20]      ; 004786b0
        ;   Label: LAB_004786b0
    FLD float ptr [ESP + 0x4c]          ; 004786b3
    FCOMP float ptr [EAX]               ; 004786b7
    FNSTSW AX                           ; 004786b9
    SAHF                                ; 004786bb
    JC 0x004787a9                       ; 004786bc
        ;   XREF to: 004787a9 (CONDITIONAL_JUMP)  ; LAB_004787a9
    FLD float ptr [ESP + 0x50]          ; 004786c2
    FMUL ST0                            ; 004786c6
    FLD float ptr [ESP + 0x48]          ; 004786c8
    FMUL ST0                            ; 004786cc
    FLD float ptr [EBP + 0x1c]          ; 004786ce
    FMUL ST0                            ; 004786d1
    FXCH                                ; 004786d3
    FADDP ST2,ST0                       ; 004786d5
    FCOMPP                              ; 004786d7
    FNSTSW AX                           ; 004786d9
    SAHF                                ; 004786db
    JA 0x0047880e                       ; 004786dc
        ;   XREF to: 0047880e (CONDITIONAL_JUMP)  ; LAB_0047880e
    MOV EDX,dword ptr [EBP + 0x20]      ; 004786e2
    PUSH EDX                            ; 004786e5
    LEA EAX,[ESP + 0x40]                ; 004786e6
    PUSH dword ptr [EBP + 0x1c]         ; 004786ea
    PUSH EAX                            ; 004786ed
    LEA EAX,[ESP + 0x54]                ; 004786ee
    PUSH EAX                            ; 004786f2
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_004783e0 ; 004786f3
        ;   XREF to: 004783e0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_004783e0()
    ADD ESP,0x10                        ; 004786f8
    MOV ECX,dword ptr [EBP + 0x20]      ; 004786fb
    PUSH ECX                            ; 004786fe
    MOV ESI,EAX                         ; 004786ff
    LEA EAX,[ESP + 0x10]                ; 00478701
    PUSH dword ptr [EBP + 0x1c]         ; 00478705
    PUSH EAX                            ; 00478708
    LEA EAX,[ESP + 0x48]                ; 00478709
    PUSH EAX                            ; 0047870d
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_004783e0 ; 0047870e
        ;   XREF to: 004783e0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_004783e0()
    ADD ESP,0x10                        ; 00478713
    MOV EDI,dword ptr [EBP + 0x20]      ; 00478716
    PUSH EDI                            ; 00478719
    OR ESI,EAX                          ; 0047871a
    LEA EAX,[ESP + 0x4c]                ; 0047871c
    PUSH dword ptr [EBP + 0x1c]         ; 00478720
    PUSH EAX                            ; 00478723
    LEA EAX,[ESP + 0x18]                ; 00478724
    PUSH EAX                            ; 00478728
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_004783e0 ; 00478729
        ;   XREF to: 004783e0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_004783e0()
    FLD float ptr [EBX + 0x24]          ; 0047872e
    FMUL ST0                            ; 00478731
    FLD float ptr [EBX + 0x2c]          ; 00478733
    FMUL ST0                            ; 00478736
    FADDP                               ; 00478738
    OR ESI,EAX                          ; 0047873a
    FSQRT                               ; 0047873c
    ADD ESP,0x10                        ; 0047873e
    MOV AH,byte ptr [0x01c21e80]        ; 00478741 | DAT_01c21e80
    FSTP double ptr [ESP]               ; 00478747
    TEST AH,0x1                         ; 0047874a
    JZ 0x00478823                       ; 0047874d
        ;   XREF to: 00478823 (CONDITIONAL_JUMP)  ; LAB_00478823
    FLD double ptr [ESP]                ; 00478753
        ;   Label: LAB_00478753
    FCOMP double ptr [0x005d1dfb]       ; 00478756 | DAT_005d1dfb
    FNSTSW AX                           ; 0047875c
    SAHF                                ; 0047875e
    JNC 0x0047884a                      ; 0047875f
        ;   XREF to: 0047884a (CONDITIONAL_JUMP)  ; LAB_0047884a
    TEST ESI,ESI                        ; 00478765
    JNZ 0x004787a0                      ; 00478767
        ;   XREF to: 004787a0 (CONDITIONAL_JUMP)  ; LAB_004787a0
    PUSH 0x1c21e74                      ; 00478769 | DAT_01c21e74
    MOV EDI,dword ptr [EBP + 0x18]      ; 0047876e
    PUSH EDI                            ; 00478771
    PUSH EBX                            ; 00478772
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00477a50 ; 00478773
        ;   XREF to: 00477a50 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_00477a50()
    MOV dword ptr [ESP + 0x80],EAX      ; 00478778
    FLD float ptr [ESP + 0x80]          ; 0047877f
    FLDZ                                ; 00478786
    ADD ESP,0xc                         ; 00478788
    FCOMPP                              ; 0047878b
    FNSTSW AX                           ; 0047878d
    SAHF                                ; 0047878f
    JA 0x004787a0                       ; 00478790
        ;   XREF to: 004787a0 (CONDITIONAL_JUMP)  ; LAB_004787a0
    MOV EBX,dword ptr [EBP + 0x20]      ; 00478792
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00478795
    MOV ESI,0x1                         ; 00478799
    MOV dword ptr [EBX],EAX             ; 0047879e
    MOV EAX,ESI                         ; 004787a0
        ;   Label: LAB_004787a0
    MOV ESP,EBP                         ; 004787a2
    POP EBP                             ; 004787a4
    POP EDI                             ; 004787a5
    POP ESI                             ; 004787a6
    POP EBX                             ; 004787a7
    RET                                 ; 004787a8
    XOR EAX,EAX                         ; 004787a9
        ;   Label: LAB_004787a9
    MOV ESP,EBP                         ; 004787ab
    POP EBP                             ; 004787ad
    POP EDI                             ; 004787ae
    POP ESI                             ; 004787af
    POP EBX                             ; 004787b0
    RET                                 ; 004787b1
    LEA EDI,[ESP + 0x18]                ; 004787b2
        ;   Label: LAB_004787b2
    LEA ESI,[ESP + 0x48]                ; 004787b6
    MOVSD ES:EDI,ESI                    ; 004787ba
    MOVSD ES:EDI,ESI                    ; 004787bb
    MOVSD ES:EDI,ESI                    ; 004787bc
    LEA EAX,[ESP + 0x3c]                ; 004787bd
    LEA ESI,[ESP + 0x48]                ; 004787c1
    CMP ESI,EAX                         ; 004787c5
    JZ 0x004787e1                       ; 004787c7
        ;   XREF to: 004787e1 (CONDITIONAL_JUMP)  ; LAB_004787e1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004787c9
    MOV dword ptr [ESP + 0x48],EAX      ; 004787cd
    MOV EAX,dword ptr [ESP + 0x40]      ; 004787d1
    MOV dword ptr [ESP + 0x4c],EAX      ; 004787d5
    MOV EAX,dword ptr [ESP + 0x44]      ; 004787d9
    MOV dword ptr [ESP + 0x50],EAX      ; 004787dd
    LEA ESI,[ESP + 0x3c]                ; 004787e1
        ;   Label: LAB_004787e1
    LEA EAX,[ESP + 0x18]                ; 004787e5
    CMP ESI,EAX                         ; 004787e9
    JZ 0x004785dd                       ; 004787eb
        ;   XREF to: 004785dd (CONDITIONAL_JUMP)  ; LAB_004785dd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004787f1
    MOV dword ptr [ESP + 0x3c],EAX      ; 004787f5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004787f9
    MOV dword ptr [ESP + 0x40],EAX      ; 004787fd
    MOV EAX,dword ptr [ESP + 0x20]      ; 00478801
    MOV dword ptr [ESP + 0x44],EAX      ; 00478805
    JMP 0x004785dd                      ; 00478809
        ;   XREF to: 004785dd (UNCONDITIONAL_JUMP)  ; LAB_004785dd
    MOV EBX,dword ptr [EBP + 0x20]      ; 0047880e
        ;   Label: LAB_0047880e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00478811
    MOV dword ptr [EBX],EAX             ; 00478815
    MOV EAX,0x1                         ; 00478817
    MOV ESP,EBP                         ; 0047881c
    POP EBP                             ; 0047881e
    POP EDI                             ; 0047881f
    POP ESI                             ; 00478820
    POP EBX                             ; 00478821
    RET                                 ; 00478822
    MOV DL,AH                           ; 00478823
        ;   Label: LAB_00478823
    OR DL,0x1                           ; 00478825
    XOR EAX,EAX                         ; 00478828
    MOV byte ptr [0x01c21e80],DL        ; 0047882a | DAT_01c21e80
    MOV [0x01c21e74],EAX                ; 00478830 | DAT_01c21e74
    MOV EDX,0xc2c80000                  ; 00478835
    MOV [0x01c21e7c],EAX                ; 0047883a | DAT_01c21e7c
    MOV dword ptr [0x01c21e78],EDX      ; 0047883f | DAT_01c21e78
    JMP 0x00478753                      ; 00478845
        ;   XREF to: 00478753 (UNCONDITIONAL_JUMP)  ; LAB_00478753
    FLD float ptr [EBX + 0x24]          ; 0047884a
        ;   Label: LAB_0047884a
    FLD float ptr [EBP + 0x1c]          ; 0047884d
    FDIV double ptr [ESP]               ; 00478850
    FXCH                                ; 00478853
    FMUL ST1                            ; 00478855
    MOV EAX,dword ptr [EBP + 0x18]      ; 00478857
    FADD float ptr [EAX]                ; 0047885a
    FSTP float ptr [ESP + 0x54]         ; 0047885c
    FMUL float ptr [EBX + 0x2c]         ; 00478860
    FADD float ptr [EAX + 0x8]          ; 00478863
    FSTP float ptr [ESP + 0x5c]         ; 00478866
    MOV EAX,dword ptr [EAX + 0x4]       ; 0047886a
    PUSH 0x1c21e74                      ; 0047886d | DAT_01c21e74
    MOV dword ptr [ESP + 0x5c],EAX      ; 00478872
    LEA EAX,[ESP + 0x58]                ; 00478876
    PUSH EAX                            ; 0047887a
    PUSH EBX                            ; 0047887b
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00477a50 ; 0047887c
        ;   XREF to: 00477a50 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_00477a50()
    MOV dword ptr [ESP + 0x80],EAX      ; 00478881
    FLD float ptr [ESP + 0x80]          ; 00478888
    ADD ESP,0xc                         ; 0047888f
    FST float ptr [ESP + 0x8]           ; 00478892
    FLDZ                                ; 00478896
    FCOMPP                              ; 00478898
    FNSTSW AX                           ; 0047889a
    SAHF                                ; 0047889c
    JA 0x004787a0                       ; 0047889d
        ;   XREF to: 004787a0 (CONDITIONAL_JUMP)  ; LAB_004787a0
    FLD float ptr [ESP + 0x8]           ; 004788a3
    FMUL float ptr [0x01c21e78]         ; 004788a7 | DAT_01c21e78
    FADD float ptr [ESP + 0x58]         ; 004788ad
    MOV EAX,dword ptr [EBP + 0x20]      ; 004788b1
    FST float ptr [ESP + 0x70]          ; 004788b4
    FCOMP float ptr [EAX]               ; 004788b8
    FNSTSW AX                           ; 004788ba
    SAHF                                ; 004788bc
    JBE 0x004787a0                      ; 004788bd
        ;   XREF to: 004787a0 (CONDITIONAL_JUMP)  ; LAB_004787a0
    MOV EBX,dword ptr [EBP + 0x20]      ; 004788c3
    MOV EAX,dword ptr [ESP + 0x70]      ; 004788c6
    MOV ESI,0x1                         ; 004788ca
    MOV dword ptr [EBX],EAX             ; 004788cf
    MOV EAX,ESI                         ; 004788d1
    MOV ESP,EBP                         ; 004788d3
    POP EBP                             ; 004788d5
    POP EDI                             ; 004788d6
    POP ESI                             ; 004788d7
    POP EBX                             ; 004788d8
    RET                                 ; 004788d9

