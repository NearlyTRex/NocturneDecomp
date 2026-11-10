; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_005332c0(int param_1,int param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 at 005333eb
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005332c0
        ;   Label: core_set.cpp_qsortByDisplayListEntry_FUN_005332c0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005332c4
    FLD float ptr [EDX + 0x4]           ; 005332c8
    FCOMP float ptr [ECX + 0x4]         ; 005332cb
    FNSTSW AX                           ; 005332ce
    SAHF                                ; 005332d0
    JA 0x005332e4                       ; 005332d1
        ;   XREF to: 005332e4 (CONDITIONAL_JUMP)  ; LAB_005332e4
    FLD float ptr [EDX + 0x4]           ; 005332d3
    FCOMP float ptr [ECX + 0x4]         ; 005332d6
    FNSTSW AX                           ; 005332d9
    SAHF                                ; 005332db
    JNC 0x005332ea                      ; 005332dc
        ;   XREF to: 005332ea (CONDITIONAL_JUMP)  ; LAB_005332ea
    MOV EAX,0xffffffff                  ; 005332de
    RET                                 ; 005332e3
    MOV EAX,0x1                         ; 005332e4
        ;   Label: LAB_005332e4
    RET                                 ; 005332e9
    XOR EAX,EAX                         ; 005332ea
        ;   Label: LAB_005332ea
    RET                                 ; 005332ec

