; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_00568570(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568570
        ;   Label: core_stairs.cpp_CStairs_customRayIntersect_FUN_00568570
    PUSH ESI                            ; 00568571
    PUSH EDI                            ; 00568572
    PUSH EBP                            ; 00568573
    MOV EBP,ESP                         ; 00568574
    SUB ESP,0x48                        ; 00568576
    AND ESP,0xfffffff8                  ; 00568579
    MOV EDX,0x3f8147ae                  ; 0056857c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00568581
    XOR ECX,ECX                         ; 00568584
    MOV dword ptr [ESP + 0x3c],EDX      ; 00568586
    MOV dword ptr [ESP + 0x40],ECX      ; 0056858a
    ADD EBX,0x170                       ; 0056858e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00568594
        ;   Label: LAB_00568594
    MOV EAX,dword ptr [EAX + 0x16c]     ; 00568597
    MOV ESI,dword ptr [ESP + 0x40]      ; 0056859d
    ADD EAX,EAX                         ; 005685a1
    CMP EAX,ESI                         ; 005685a3
    JG 0x005685b2                       ; 005685a5
        ;   XREF to: 005685b2 (CONDITIONAL_JUMP)  ; LAB_005685b2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005685a7
    MOV ESP,EBP                         ; 005685ab
    POP EBP                             ; 005685ad
    POP EDI                             ; 005685ae
    POP ESI                             ; 005685af
    POP EBX                             ; 005685b0
    RET                                 ; 005685b1
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005685b2
        ;   Label: LAB_005685b2
    PUSH EDI                            ; 005685b5
    MOV EAX,dword ptr [EBP + 0x18]      ; 005685b6
    PUSH EAX                            ; 005685b9
    PUSH EBX                            ; 005685ba
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0 ; 005685bb
        ;   XREF to: 00478ac0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0()
    MOV dword ptr [ESP + 0x50],EAX      ; 005685c0
    FLD float ptr [ESP + 0x50]          ; 005685c4
    ADD ESP,0xc                         ; 005685c8
    FLDZ                                ; 005685cb
    FXCH                                ; 005685cd
    FST float ptr [ESP + 0x8]           ; 005685cf
    FSTP double ptr [ESP]               ; 005685d3
    FCOMP double ptr [ESP]              ; 005685d6
    FNSTSW AX                           ; 005685d9
    SAHF                                ; 005685db
    JA 0x00568676                       ; 005685dc
        ;   XREF to: 00568676 (CONDITIONAL_JUMP)  ; LAB_00568676
    FLD float ptr [ESP + 0x8]           ; 005685e2
    FCOMP float ptr [ESP + 0x3c]        ; 005685e6
    FNSTSW AX                           ; 005685ea
    SAHF                                ; 005685ec
    JNC 0x00568676                      ; 005685ed
        ;   XREF to: 00568676 (CONDITIONAL_JUMP)  ; LAB_00568676
    FLD1                                ; 005685f3
    FCOMP double ptr [ESP]              ; 005685f5
    FNSTSW AX                           ; 005685f8
    SAHF                                ; 005685fa
    JC 0x00568676                       ; 005685fb
        ;   XREF to: 00568676 (CONDITIONAL_JUMP)  ; LAB_00568676
    MOV EAX,dword ptr [ESP + 0x8]       ; 005685fd
    LEA EDI,[ESP + 0x30]                ; 00568601
    MOV dword ptr [ESP + 0x3c],EAX      ; 00568605
    LEA EAX,[EBX + 0x24]                ; 00568609
    LEA ESI,[ESP + 0x18]                ; 0056860c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00568610
    FLD float ptr [EAX]                 ; 00568613
    FLD float ptr [EAX + 0x4]           ; 00568615
    FLD float ptr [EAX + 0x8]           ; 00568618
    FXCH ST2                            ; 0056861b
    FCHS                                ; 0056861d
    FXCH                                ; 0056861f
    FCHS                                ; 00568621
    FXCH ST2                            ; 00568623
    FCHS                                ; 00568625
    LEA EAX,[ESP + 0x30]                ; 00568627
    FXCH                                ; 0056862b
    FSTP float ptr [ESP + 0x18]         ; 0056862d
    FXCH                                ; 00568631
    FSTP float ptr [ESP + 0x1c]         ; 00568633
    FSTP float ptr [ESP + 0x20]         ; 00568637
    PUSH EAX                            ; 0056863b
    MOVSD ES:EDI,ESI                    ; 0056863c
    MOVSD ES:EDI,ESI                    ; 0056863d
    MOVSD ES:EDI,ESI                    ; 0056863e
    PUSH EDX                            ; 0056863f
    LEA ESI,[ESP + 0x14]                ; 00568640
    LEA EDI,[ESP + 0x2c]                ; 00568644
    CALL core_actor.cpp_FUN_00408b00    ; 00568648
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x14]                ; 0056864d
    ADD ESP,0x8                         ; 00568651
    LEA EAX,[ESP + 0x24]                ; 00568654
    MOV ECX,dword ptr [EBP + 0x20]      ; 00568658
    MOVSD ES:EDI,ESI                    ; 0056865b
    MOVSD ES:EDI,ESI                    ; 0056865c
    MOVSD ES:EDI,ESI                    ; 0056865d
    CMP EAX,ECX                         ; 0056865e
    JZ 0x00568676                       ; 00568660
        ;   XREF to: 00568676 (CONDITIONAL_JUMP)  ; LAB_00568676
    MOV EAX,dword ptr [ESP + 0x24]      ; 00568662
    MOV dword ptr [ECX],EAX             ; 00568666
    MOV EAX,dword ptr [ESP + 0x28]      ; 00568668
    MOV dword ptr [ECX + 0x4],EAX       ; 0056866c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0056866f
    MOV dword ptr [ECX + 0x8],EAX       ; 00568673
    MOV ESI,dword ptr [ESP + 0x40]      ; 00568676
        ;   Label: LAB_00568676
    INC ESI                             ; 0056867a
    ADD EBX,0x38                        ; 0056867b
    MOV dword ptr [ESP + 0x40],ESI      ; 0056867e
    JMP 0x00568594                      ; 00568682
        ;   XREF to: 00568594 (UNCONDITIONAL_JUMP)  ; LAB_00568594

