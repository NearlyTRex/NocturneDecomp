; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005ab530(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_box.cpp_FUN_00420ee0
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0
;   core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab530
        ;   Label: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005ab530
    PUSH ESI                            ; 005ab531
    PUSH EDI                            ; 005ab532
    PUSH EBP                            ; 005ab533
    MOV EBP,ESP                         ; 005ab534
    SUB ESP,0xd0                        ; 005ab536
    AND ESP,0xfffffff8                  ; 005ab53c
    PUSH 0x0                            ; 005ab53f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005ab541
    PUSH EDX                            ; 005ab544
    MOV ECX,dword ptr [EBP + 0x18]      ; 005ab545
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ab548
    PUSH ECX                            ; 005ab54b
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ab54c
    MOV EAX,dword ptr [EAX + 0x154]     ; 005ab54f
    PUSH EBX                            ; 005ab555
    LEA ESI,[ESP + 0x60]                ; 005ab556
    LEA EDI,[ESP + 0x78]                ; 005ab55a
    CALL dword ptr [EAX + 0x1c]         ; 005ab55e
    MOV ECX,0x6                         ; 005ab561
    ADD ESP,0x4                         ; 005ab566
    LEA EAX,[ESP + 0x74]                ; 005ab569
    LEA ESI,[ESP + 0x5c]                ; 005ab56d
    PUSH EAX                            ; 005ab571
    MOVSD.REP ES:EDI,ESI                ; 005ab572
    CALL core_box.cpp_FUN_00420ee0      ; 005ab574
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420ee0()
    MOV dword ptr [ESP + 0xdc],EAX      ; 005ab579
    FLD float ptr [ESP + 0xdc]          ; 005ab580
    ADD ESP,0x10                        ; 005ab587
    FLDZ                                ; 005ab58a
    FXCH                                ; 005ab58c
    FSTP double ptr [ESP]               ; 005ab58e
    FCOMP double ptr [ESP]              ; 005ab591
    FNSTSW AX                           ; 005ab594
    SAHF                                ; 005ab596
    JA 0x005ab6e4                       ; 005ab597
        ;   XREF to: 005ab6e4 (CONDITIONAL_JUMP)  ; LAB_005ab6e4
    FLD1                                ; 005ab59d
    FCOMP double ptr [ESP]              ; 005ab59f
    FNSTSW AX                           ; 005ab5a2
    SAHF                                ; 005ab5a4
    JC 0x005ab6e4                       ; 005ab5a5
        ;   XREF to: 005ab6e4 (CONDITIONAL_JUMP)  ; LAB_005ab6e4
    MOV ESI,0x40000000                  ; 005ab5ab
    MOV EAX,dword ptr [EBX + 0x2b234]   ; 005ab5b0
    ADD EBX,0x7fa8                      ; 005ab5b6
    XOR EDI,EDI                         ; 005ab5bc
    MOV dword ptr [ESP + 0xbc],EAX      ; 005ab5be
    MOV dword ptr [ESP + 0xc8],EDI      ; 005ab5c5
    MOV dword ptr [ESP + 0x10],ESI      ; 005ab5cc
    TEST EAX,EAX                        ; 005ab5d0
    JLE 0x005ab667                      ; 005ab5d2
        ;   XREF to: 005ab667 (CONDITIONAL_JUMP)  ; LAB_005ab667
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ab5d8
    ADD EAX,0x29c                       ; 005ab5db
    MOV dword ptr [ESP + 0xc4],EAX      ; 005ab5e0
    MOV EAX,dword ptr [EBX + 0x30]      ; 005ab5e7
        ;   Label: LAB_005ab5e7
    MOV ECX,dword ptr [ESP + 0xc4]      ; 005ab5ea
    SHL EAX,0x5                         ; 005ab5f1
    ADD EAX,ECX                         ; 005ab5f4
    PUSH EAX                            ; 005ab5f6
    MOV EAX,dword ptr [EBX + 0x24]      ; 005ab5f7
    SHL EAX,0x5                         ; 005ab5fa
    ADD EAX,ECX                         ; 005ab5fd
    PUSH EAX                            ; 005ab5ff
    MOV EAX,dword ptr [EBX + 0x18]      ; 005ab600
    SHL EAX,0x5                         ; 005ab603
    ADD EAX,ECX                         ; 005ab606
    PUSH EAX                            ; 005ab608
    LEA EAX,[ESP + 0x24]                ; 005ab609
    PUSH EAX                            ; 005ab60d
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005ab60e
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005ab613
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005ab616
    PUSH EAX                            ; 005ab619
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ab61a
    PUSH EDX                            ; 005ab61d
    LEA EAX,[ESP + 0x20]                ; 005ab61e
    PUSH EAX                            ; 005ab622
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40 ; 005ab623
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0xd8],EAX      ; 005ab628
    FLD float ptr [ESP + 0xd8]          ; 005ab62f
    ADD ESP,0xc                         ; 005ab636
    FST float ptr [ESP + 0x14]          ; 005ab639
    FCOMP float ptr [ESP + 0x10]        ; 005ab63d
    FNSTSW AX                           ; 005ab641
    SAHF                                ; 005ab643
    JC 0x005ab6fd                       ; 005ab644
        ;   XREF to: 005ab6fd (CONDITIONAL_JUMP)  ; LAB_005ab6fd
    MOV ESI,dword ptr [ESP + 0xc8]      ; 005ab64a
        ;   Label: LAB_005ab64a
    MOV EDI,dword ptr [ESP + 0xbc]      ; 005ab651
    INC ESI                             ; 005ab658
    ADD EBX,0x48                        ; 005ab659
    MOV dword ptr [ESP + 0xc8],ESI      ; 005ab65c
    CMP ESI,EDI                         ; 005ab663
    JL 0x005ab5e7                       ; 005ab665
        ;   XREF to: 005ab5e7 (CONDITIONAL_JUMP)  ; LAB_005ab5e7
    FLD float ptr [ESP + 0x10]          ; 005ab667
        ;   Label: LAB_005ab667
    FLD1                                ; 005ab66b
    FCOMPP                              ; 005ab66d
    FNSTSW AX                           ; 005ab66f
    SAHF                                ; 005ab671
    JBE 0x005ab6cb                      ; 005ab672
        ;   XREF to: 005ab6cb (CONDITIONAL_JUMP)  ; LAB_005ab6cb
    LEA EAX,[ESP + 0x98]                ; 005ab674
    PUSH EAX                            ; 005ab67b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ab67c
    PUSH EAX                            ; 005ab67f
    LEA ESI,[ESP + 0xac]                ; 005ab680
    LEA EDI,[ESP + 0x94]                ; 005ab687
    CALL core_actor.cpp_FUN_00408ac0    ; 005ab68e
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xac]                ; 005ab693
    ADD ESP,0x8                         ; 005ab69a
    LEA EAX,[ESP + 0x8c]                ; 005ab69d
    MOV EDX,dword ptr [EBP + 0x20]      ; 005ab6a4
    MOVSD ES:EDI,ESI                    ; 005ab6a7
    MOVSD ES:EDI,ESI                    ; 005ab6a8
    MOVSD ES:EDI,ESI                    ; 005ab6a9
    CMP EAX,EDX                         ; 005ab6aa
    JZ 0x005ab6cb                       ; 005ab6ac
        ;   XREF to: 005ab6cb (CONDITIONAL_JUMP)  ; LAB_005ab6cb
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005ab6ae
    MOV dword ptr [EDX],EAX             ; 005ab6b5
    MOV EAX,dword ptr [ESP + 0x90]      ; 005ab6b7
    MOV dword ptr [EDX + 0x4],EAX       ; 005ab6be
    MOV EAX,dword ptr [ESP + 0x94]      ; 005ab6c1
    MOV dword ptr [EDX + 0x8],EAX       ; 005ab6c8
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ab6cb
        ;   Label: LAB_005ab6cb
    MOV dword ptr [ESP + 0xc0],EAX      ; 005ab6cf
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005ab6d6
    MOV ESP,EBP                         ; 005ab6dd
    POP EBP                             ; 005ab6df
    POP EDI                             ; 005ab6e0
    POP ESI                             ; 005ab6e1
    POP EBX                             ; 005ab6e2
    RET                                 ; 005ab6e3
    MOV dword ptr [ESP + 0xc0],0x40000000 ; 005ab6e4
        ;   Label: LAB_005ab6e4
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005ab6ef
    MOV ESP,EBP                         ; 005ab6f6
    POP EBP                             ; 005ab6f8
    POP EDI                             ; 005ab6f9
    POP ESI                             ; 005ab6fa
    POP EBX                             ; 005ab6fb
    RET                                 ; 005ab6fc
    FLD float ptr [ESP + 0x14]          ; 005ab6fd
        ;   Label: LAB_005ab6fd
    FLDZ                                ; 005ab701
    FXCH                                ; 005ab703
    FSTP double ptr [ESP + 0x8]         ; 005ab705
    FCOMP double ptr [ESP + 0x8]        ; 005ab709
    FNSTSW AX                           ; 005ab70d
    SAHF                                ; 005ab70f
    JA 0x005ab64a                       ; 005ab710
        ;   XREF to: 005ab64a (CONDITIONAL_JUMP)  ; LAB_005ab64a
    FLD1                                ; 005ab716
    FCOMP double ptr [ESP + 0x8]        ; 005ab718
    FNSTSW AX                           ; 005ab71c
    SAHF                                ; 005ab71e
    JC 0x005ab64a                       ; 005ab71f
        ;   XREF to: 005ab64a (CONDITIONAL_JUMP)  ; LAB_005ab64a
    FLD float ptr [ESP + 0x3c]          ; 005ab725
    FLD float ptr [ESP + 0x40]          ; 005ab729
    FLD float ptr [ESP + 0x44]          ; 005ab72d
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ab731
    LEA EDI,[ESP + 0x80]                ; 005ab735
    LEA ESI,[ESP + 0xb0]                ; 005ab73c
    LEA EDX,[ESP + 0x80]                ; 005ab743
    FXCH ST2                            ; 005ab74a
    FCHS                                ; 005ab74c
    FXCH                                ; 005ab74e
    FCHS                                ; 005ab750
    FXCH ST2                            ; 005ab752
    FCHS                                ; 005ab754
    FXCH                                ; 005ab756
    FSTP float ptr [ESP + 0xb0]         ; 005ab758
    FXCH                                ; 005ab75f
    FSTP float ptr [ESP + 0xb4]         ; 005ab761
    FSTP float ptr [ESP + 0xb8]         ; 005ab768
    MOV dword ptr [ESP + 0x10],EAX      ; 005ab76f
    LEA EAX,[ESP + 0x98]                ; 005ab773
    MOVSD ES:EDI,ESI                    ; 005ab77a
    MOVSD ES:EDI,ESI                    ; 005ab77b
    MOVSD ES:EDI,ESI                    ; 005ab77c
    CMP EAX,EDX                         ; 005ab77d
    JZ 0x005ab64a                       ; 005ab77f
        ;   XREF to: 005ab64a (CONDITIONAL_JUMP)  ; LAB_005ab64a
    MOV EAX,dword ptr [ESP + 0x80]      ; 005ab785
    MOV dword ptr [ESP + 0x98],EAX      ; 005ab78c
    MOV EAX,dword ptr [ESP + 0x84]      ; 005ab793
    MOV dword ptr [ESP + 0x9c],EAX      ; 005ab79a
    MOV EAX,dword ptr [ESP + 0x88]      ; 005ab7a1
    MOV dword ptr [ESP + 0xa0],EAX      ; 005ab7a8
    JMP 0x005ab64a                      ; 005ab7af
        ;   XREF to: 005ab64a (UNCONDITIONAL_JUMP)  ; LAB_005ab64a

