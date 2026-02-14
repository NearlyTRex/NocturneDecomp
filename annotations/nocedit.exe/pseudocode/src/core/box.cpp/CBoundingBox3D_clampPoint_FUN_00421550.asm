; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(CBoundingBox3D *this_ptr,CVector3f *out_point,CVector3f *in_point)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
; CVector3f *      Stack[0xc]:4   in_point
;
; XREF[4]:
;   core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0 at 00421603
;   core_boxactor.cpp_CBoxActor_FUN_00422590 at 004225dc
;   core_enemy.cpp_CEnemy_FUN_004a9a50 at 004a9abb
;   core_platfrm.cpp_CPlatform_process_FUN_0054cc30 at 0054d289
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421550
        ;   Label: core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
    PUSH ESI                            ; 00421551
    MOV ECX,dword ptr [ESP + 0xc]       ; 00421552
    MOV EDX,dword ptr [ESP + 0x10]      ; 00421556
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042155a
    MOV EAX,dword ptr [ESI]             ; 0042155e
    LEA EBX,[ESI + 0x4]                 ; 00421560
    MOV dword ptr [EDX],EAX             ; 00421563
    LEA EAX,[EDX + 0x4]                 ; 00421565
    MOV EBX,dword ptr [EBX]             ; 00421568
    MOV dword ptr [EAX],EBX             ; 0042156a
    LEA EBX,[EAX + 0x4]                 ; 0042156c
    LEA EAX,[ESI + 0x8]                 ; 0042156f
    MOV EAX,dword ptr [EAX]             ; 00421572
    MOV dword ptr [EBX],EAX             ; 00421574
    FLD float ptr [EDX]                 ; 00421576
    FCOMP float ptr [ECX]               ; 00421578
    FNSTSW AX                           ; 0042157a
    SAHF                                ; 0042157c
    JC 0x004215d1                       ; 0042157d
        ;   XREF to: 004215d1 (CONDITIONAL_JUMP)  ; LAB_004215d1
    FLD float ptr [EDX]                 ; 0042157f
        ;   Label: LAB_0042157f
    FCOMP float ptr [ECX + 0xc]         ; 00421581
    FNSTSW AX                           ; 00421584
    SAHF                                ; 00421586
    JBE 0x0042158e                      ; 00421587
        ;   XREF to: 0042158e (CONDITIONAL_JUMP)  ; LAB_0042158e
    MOV EAX,dword ptr [ECX + 0xc]       ; 00421589
    MOV dword ptr [EDX],EAX             ; 0042158c
    FLD float ptr [EDX + 0x4]           ; 0042158e
        ;   Label: LAB_0042158e
    FCOMP float ptr [ECX + 0x4]         ; 00421591
    FNSTSW AX                           ; 00421594
    SAHF                                ; 00421596
    JNC 0x0042159f                      ; 00421597
        ;   XREF to: 0042159f (CONDITIONAL_JUMP)  ; LAB_0042159f
    MOV EAX,dword ptr [ECX + 0x4]       ; 00421599
    MOV dword ptr [EDX + 0x4],EAX       ; 0042159c
    FLD float ptr [EDX + 0x4]           ; 0042159f
        ;   Label: LAB_0042159f
    FCOMP float ptr [ECX + 0x10]        ; 004215a2
    FNSTSW AX                           ; 004215a5
    SAHF                                ; 004215a7
    JBE 0x004215b0                      ; 004215a8
        ;   XREF to: 004215b0 (CONDITIONAL_JUMP)  ; LAB_004215b0
    MOV EAX,dword ptr [ECX + 0x10]      ; 004215aa
    MOV dword ptr [EDX + 0x4],EAX       ; 004215ad
    FLD float ptr [EDX + 0x8]           ; 004215b0
        ;   Label: LAB_004215b0
    FCOMP float ptr [ECX + 0x8]         ; 004215b3
    FNSTSW AX                           ; 004215b6
    SAHF                                ; 004215b8
    JNC 0x004215c1                      ; 004215b9
        ;   XREF to: 004215c1 (CONDITIONAL_JUMP)  ; LAB_004215c1
    MOV EAX,dword ptr [ECX + 0x8]       ; 004215bb
    MOV dword ptr [EDX + 0x8],EAX       ; 004215be
    FLD float ptr [EDX + 0x8]           ; 004215c1
        ;   Label: LAB_004215c1
    FCOMP float ptr [ECX + 0x14]        ; 004215c4
    FNSTSW AX                           ; 004215c7
    SAHF                                ; 004215c9
    JA 0x004215d7                       ; 004215ca
        ;   XREF to: 004215d7 (CONDITIONAL_JUMP)  ; LAB_004215d7
    MOV EAX,EDX                         ; 004215cc
    POP ESI                             ; 004215ce
    POP EBX                             ; 004215cf
    RET                                 ; 004215d0
    MOV EAX,dword ptr [ECX]             ; 004215d1
        ;   Label: LAB_004215d1
    MOV dword ptr [EDX],EAX             ; 004215d3
    JMP 0x0042157f                      ; 004215d5
        ;   XREF to: 0042157f (UNCONDITIONAL_JUMP)  ; LAB_0042157f
    MOV EAX,dword ptr [ECX + 0x14]      ; 004215d7
        ;   Label: LAB_004215d7
    MOV dword ptr [EDX + 0x8],EAX       ; 004215da
    MOV EAX,EDX                         ; 004215dd
    POP ESI                             ; 004215df
    POP EBX                             ; 004215e0
    RET                                 ; 004215e1

