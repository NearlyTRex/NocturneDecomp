; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053bcf0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_msnedit.cpp_CDemonMission_FUN_0053bc80 at 0053bc9b
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053abc5
;
; Called Functions:
;   core_msnedit.cpp_CDemonMission_FUN_0053c140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bcf0
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053bcf0
    PUSH ESI                            ; 0053bcf1
    SUB ESP,0x14                        ; 0053bcf2
    MOV EBX,dword ptr [ESP + 0x20]      ; 0053bcf5
    MOV dword ptr [ESP + 0xc],0x7149f2ca ; 0053bcf9
    MOV EDX,dword ptr [EBX + 0x548]     ; 0053bd01
    XOR ESI,ESI                         ; 0053bd07
    TEST EDX,EDX                        ; 0053bd09
    JZ 0x0053bd1e                       ; 0053bd0b
        ;   XREF to: 0053bd1e (CONDITIONAL_JUMP)  ; LAB_0053bd1e
    MOV ECX,dword ptr [EBX + 0x28]      ; 0053bd0d
        ;   Label: LAB_0053bd0d
    CMP EDX,ECX                         ; 0053bd10
    JNZ 0x0053bd2e                      ; 0053bd12
        ;   XREF to: 0053bd2e (CONDITIONAL_JUMP)  ; LAB_0053bd2e
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0053bd14
        ;   Label: LAB_0053bd14
    TEST EDX,EDX                        ; 0053bd1a
    JNZ 0x0053bd0d                      ; 0053bd1c
        ;   XREF to: 0053bd0d (CONDITIONAL_JUMP)  ; LAB_0053bd0d
    PUSH ESI                            ; 0053bd1e
        ;   Label: LAB_0053bd1e
    PUSH EBX                            ; 0053bd1f
    CALL core_msnedit.cpp_CDemonMission_FUN_0053c140 ; 0053bd20
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_FUN_0053c140(CDemonMission * this_ptr, int param_2)
    ADD ESP,0x8                         ; 0053bd25
    ADD ESP,0x14                        ; 0053bd28
    POP ESI                             ; 0053bd2b
    POP EBX                             ; 0053bd2c
    RET                                 ; 0053bd2d
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0053bd2e
        ;   Label: LAB_0053bd2e
    CMP EAX,dword ptr [ECX + 0x2c]      ; 0053bd31
    JNZ 0x0053bd14                      ; 0053bd34
        ;   XREF to: 0053bd14 (CONDITIONAL_JUMP)  ; LAB_0053bd14
    CMP dword ptr [EDX + 0x148],0x0     ; 0053bd36
    JNZ 0x0053bd14                      ; 0053bd3d
        ;   XREF to: 0053bd14 (CONDITIONAL_JUMP)  ; LAB_0053bd14
    LEA EAX,[EDX + 0x20]                ; 0053bd3f
    FLD float ptr [EAX]                 ; 0053bd42
    FSUB float ptr [ECX + 0x20]         ; 0053bd44
    FMUL ST0                            ; 0053bd47
    FLD float ptr [EAX + 0x4]           ; 0053bd49
    FSUB float ptr [ECX + 0x24]         ; 0053bd4c
    FMUL ST0                            ; 0053bd4f
    FLD float ptr [EAX + 0x8]           ; 0053bd51
    FXCH                                ; 0053bd54
    FADDP ST2,ST0                       ; 0053bd56
    FSUB float ptr [ECX + 0x28]         ; 0053bd58
    FMUL ST0                            ; 0053bd5b
    FADDP                               ; 0053bd5d
    FSQRT                               ; 0053bd5f
    FST float ptr [ESP + 0x10]          ; 0053bd61
    FCOMP float ptr [ESP + 0xc]         ; 0053bd65
    FNSTSW AX                           ; 0053bd69
    SAHF                                ; 0053bd6b
    JNC 0x0053bd14                      ; 0053bd6c
        ;   XREF to: 0053bd14 (CONDITIONAL_JUMP)  ; LAB_0053bd14
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053bd6e
    MOV ESI,EDX                         ; 0053bd72
    MOV dword ptr [ESP + 0xc],EAX       ; 0053bd74
    JMP 0x0053bd14                      ; 0053bd78
        ;   XREF to: 0053bd14 (UNCONDITIONAL_JUMP)  ; LAB_0053bd14

