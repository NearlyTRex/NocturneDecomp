; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00427680(int param_1,int *param_2)
;
;
; XREF[16]:
;   core_armour.cpp_CArmour_getCollisionType_FUN_0040f100 at 0040f10a
;   core_batcreat.cpp_CBatCreature_getCollisionType_FUN_00412a00 at 00412a0a
;   core_batman.cpp_FUN_00414600 at 00414616
;   core_biggs.cpp_CBiggs_getCollisionType_FUN_004153f0 at 004153fa
;   core_boneguy.cpp_FUN_0041a3b0 at 0041a3c6
;   core_construc.cpp_FUN_00438370 at 00438386
;   core_dracbrid.cpp_FUN_00464aa0 at 00464ab6
;   core_gargoyle.cpp_CGargoyle_getCollisionType_FUN_004c1220 at 004c122a
;   core_hotdemon.cpp_CHotDemon_getCollisionType_FUN_004d4660 at 004d466a
;   core_imp.cpp_CImp_getCollisionType_FUN_004d80b0 at 004d80ba
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427680
        ;   Label: core_charactr.cpp_FUN_00427680
    PUSH ESI                            ; 00427681
    PUSH EBP                            ; 00427682
    MOV EBX,dword ptr [ESP + 0x10]      ; 00427683
    MOV ESI,dword ptr [ESP + 0x14]      ; 00427687
    MOV EDX,dword ptr [ESI]             ; 0042768b
    CMP EDX,0x2                         ; 0042768d
    JZ 0x004276fc                       ; 00427690
        ;   XREF to: 004276fc (CONDITIONAL_JUMP)  ; LAB_004276fc
    CMP dword ptr [EBX + 0x2814],0x0    ; 00427692
    JZ 0x00427702                       ; 00427699
        ;   XREF to: 00427702 (CONDITIONAL_JUMP)  ; LAB_00427702
    CMP EDX,0x3                         ; 0042769b
    JNZ 0x004276fc                      ; 0042769e
        ;   XREF to: 004276fc (CONDITIONAL_JUMP)  ; LAB_004276fc
    MOV EBP,dword ptr [ESI]             ; 004276a0
        ;   Label: LAB_004276a0
    CMP EBP,0x1                         ; 004276a2
    JZ 0x0042771d                       ; 004276a5
        ;   XREF to: 0042771d (CONDITIONAL_JUMP)  ; LAB_0042771d
    CMP EBP,0x3                         ; 004276ab
    JZ 0x0042771d                       ; 004276ae
        ;   XREF to: 0042771d (CONDITIONAL_JUMP)  ; LAB_0042771d
    FLD float ptr [EBX + 0x3444]        ; 004276b0
    FMUL float ptr [EBX + 0x2824]       ; 004276b6
    FSTP float ptr [ESI + 0x18]         ; 004276bc
    FLD float ptr [EBX + 0x3440]        ; 004276bf
    FMUL float ptr [EBX + 0x2824]       ; 004276c5
    FLD float ptr [ESI + 0x18]          ; 004276cb
    FXCH                                ; 004276ce
    FSTP float ptr [ESI + 0x14]         ; 004276d0
    FCOMP float ptr [ESI + 0x14]        ; 004276d3
    FNSTSW AX                           ; 004276d6
    SAHF                                ; 004276d8
    JNC 0x004276e4                      ; 004276d9
        ;   XREF to: 004276e4 (CONDITIONAL_JUMP)  ; LAB_004276e4
    MOV EAX,dword ptr [EBX + 0x24fc]    ; 004276db
    MOV dword ptr [ESI + 0x18],EAX      ; 004276e1
    FLD float ptr [EBX + 0x3434]        ; 004276e4
        ;   Label: LAB_004276e4
    FMUL float ptr [EBX + 0x2824]       ; 004276ea
    MOV EAX,0x2                         ; 004276f0
    FSTP float ptr [ESI + 0x1c]         ; 004276f5
    POP EBP                             ; 004276f8
    POP ESI                             ; 004276f9
    POP EBX                             ; 004276fa
    RET                                 ; 004276fb
    XOR EAX,EAX                         ; 004276fc
        ;   Label: LAB_004276fc
    POP EBP                             ; 004276fe
    POP ESI                             ; 004276ff
    POP EBX                             ; 00427700
    RET                                 ; 00427701
    PUSH EBX                            ; 00427702
        ;   Label: LAB_00427702
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00427703
    CALL dword ptr [EAX + 0x114]        ; 00427709
    ADD ESP,0x4                         ; 0042770f
    CMP EAX,0x1                         ; 00427712
    JLE 0x004276a0                      ; 00427715
        ;   XREF to: 004276a0 (CONDITIONAL_JUMP)  ; LAB_004276a0
    XOR EAX,EAX                         ; 00427717
    POP EBP                             ; 00427719
    POP ESI                             ; 0042771a
    POP EBX                             ; 0042771b
    RET                                 ; 0042771c
    ADD EBX,0x2b4                       ; 0042771d
        ;   Label: LAB_0042771d
    MOV EAX,0x1                         ; 00427723
    MOV dword ptr [ESI + 0x20],EBX      ; 00427728
    POP EBP                             ; 0042772b
    POP ESI                             ; 0042772c
    POP EBX                             ; 0042772d
    RET                                 ; 0042772e

