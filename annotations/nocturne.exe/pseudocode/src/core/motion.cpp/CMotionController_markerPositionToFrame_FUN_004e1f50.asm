; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50(CMotionController *this_ptr,int motion_index,float marker_position)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   marker_position
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900 at 00497c52
;   core_ghoul.cpp_FUN_004a9270 at 004a9530
;   core_hostage.cpp_FUN_004b6d80 at 004b808a
;   core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0 at 004fd161
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0053a260 at 0053a363
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10 at 00539d59
;   core_stranger.cpp_FUN_005384d0 at 0053967c
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1f50
        ;   Label: core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
    PUSH EDI                            ; 004e1f51
    PUSH EBP                            ; 004e1f52
    MOV EBP,ESP                         ; 004e1f53
    SUB ESP,0x18                        ; 004e1f55
    AND ESP,0xfffffff8                  ; 004e1f58
    IMUL EDX,dword ptr [EBP + 0x14],0x54c ; 004e1f5b
    MOV EAX,dword ptr [EBP + 0x10]      ; 004e1f62
    MOV EAX,dword ptr [EAX]             ; 004e1f65
    FLD float ptr [EBP + 0x18]          ; 004e1f67
    ADD EAX,0x968                       ; 004e1f6a
    FLDZ                                ; 004e1f6f
    ADD EDX,EAX                         ; 004e1f71
    FCOMPP                              ; 004e1f73
    FNSTSW AX                           ; 004e1f75
    SAHF                                ; 004e1f77
    JNC 0x004e2038                      ; 004e1f78
        ;   XREF to: 004e2038 (CONDITIONAL_JUMP)  ; LAB_004e2038
    MOV EAX,dword ptr [EDX + 0x520]     ; 004e1f7e
    INC EAX                             ; 004e1f84
    MOV dword ptr [ESP + 0x14],EAX      ; 004e1f85
    FILD dword ptr [ESP + 0x14]         ; 004e1f89
    FCOMP float ptr [EBP + 0x18]        ; 004e1f8d
    FNSTSW AX                           ; 004e1f90
    SAHF                                ; 004e1f92
    JBE 0x004e2040                      ; 004e1f93
        ;   XREF to: 004e2040 (CONDITIONAL_JUMP)  ; LAB_004e2040
    FLD float ptr [EBP + 0x18]          ; 004e1f99
    FLD ST0                             ; 004e1f9c
    CALL crt_math.c_round_FUN_00563a30  ; 004e1f9e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0xc]         ; 004e1fa3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1fa7
    MOV dword ptr [ESP + 0x14],EAX      ; 004e1fab
    FILD dword ptr [ESP + 0x14]         ; 004e1faf
    FSUBP                               ; 004e1fb3
    XOR EBX,EBX                         ; 004e1fb5
    FSTP float ptr [ESP]                ; 004e1fb7
    TEST EAX,EAX                        ; 004e1fba
    JLE 0x004e1fc5                      ; 004e1fbc
        ;   XREF to: 004e1fc5 (CONDITIONAL_JUMP)  ; LAB_004e1fc5
    MOV EBX,dword ptr [EDX + EAX*0x4 + 0x520] ; 004e1fbe
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1fc5
        ;   Label: LAB_004e1fc5
    MOV EDI,dword ptr [EDX + 0x520]     ; 004e1fc9
    MOV ECX,dword ptr [EDX + 0x64]      ; 004e1fcf
    CMP EAX,EDI                         ; 004e1fd2
    JGE 0x004e1fdd                      ; 004e1fd4
        ;   XREF to: 004e1fdd (CONDITIONAL_JUMP)  ; LAB_004e1fdd
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x524] ; 004e1fd6
    FLD float ptr [ESP]                 ; 004e1fdd
        ;   Label: LAB_004e1fdd
    FLD ST0                             ; 004e1fe0
    FLD1                                ; 004e1fe2
    FSUBRP                              ; 004e1fe4
    MOV dword ptr [ESP + 0x14],EBX      ; 004e1fe6
    FILD dword ptr [ESP + 0x14]         ; 004e1fea
    FMULP                               ; 004e1fee
    MOV dword ptr [ESP + 0x14],ECX      ; 004e1ff0
    FILD dword ptr [ESP + 0x14]         ; 004e1ff4
    FMULP ST2                           ; 004e1ff8
    FADDP                               ; 004e1ffa
    FST float ptr [ESP + 0x4]           ; 004e1ffc
    FLDZ                                ; 004e2000
    FCOMPP                              ; 004e2002
    FNSTSW AX                           ; 004e2004
    SAHF                                ; 004e2006
    JA 0x004e2052                       ; 004e2007
        ;   XREF to: 004e2052 (CONDITIONAL_JUMP)  ; LAB_004e2052
    MOV EAX,dword ptr [EDX + 0x64]      ; 004e2009
    DEC EAX                             ; 004e200c
    MOV dword ptr [ESP + 0x14],EAX      ; 004e200d
    FLD float ptr [ESP + 0x4]           ; 004e2011
    FILD dword ptr [ESP + 0x14]         ; 004e2015
    FSTP float ptr [ESP + 0x8]          ; 004e2019
    FCOMP float ptr [ESP + 0x8]         ; 004e201d
    FNSTSW AX                           ; 004e2021
    SAHF                                ; 004e2023
    JBE 0x004e2056                      ; 004e2024
        ;   XREF to: 004e2056 (CONDITIONAL_JUMP)  ; LAB_004e2056
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e2026
    MOV dword ptr [ESP + 0x10],EAX      ; 004e202a
        ;   Label: LAB_004e202a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e202e
        ;   Label: LAB_004e202e
    MOV ESP,EBP                         ; 004e2032
    POP EBP                             ; 004e2034
    POP EDI                             ; 004e2035
    POP EBX                             ; 004e2036
    RET                                 ; 004e2037
    XOR EDX,EDX                         ; 004e2038
        ;   Label: LAB_004e2038
    MOV dword ptr [ESP + 0x10],EDX      ; 004e203a
    JMP 0x004e202e                      ; 004e203e
        ;   XREF to: 004e202e (UNCONDITIONAL_JUMP)  ; LAB_004e202e
    MOV EAX,dword ptr [EDX + 0x64]      ; 004e2040
        ;   Label: LAB_004e2040
    DEC EAX                             ; 004e2043
    MOV dword ptr [ESP + 0x14],EAX      ; 004e2044
    FILD dword ptr [ESP + 0x14]         ; 004e2048
    FSTP float ptr [ESP + 0x10]         ; 004e204c
    JMP 0x004e202e                      ; 004e2050
        ;   XREF to: 004e202e (UNCONDITIONAL_JUMP)  ; LAB_004e202e
    XOR EAX,EAX                         ; 004e2052
        ;   Label: LAB_004e2052
    JMP 0x004e202a                      ; 004e2054
        ;   XREF to: 004e202a (UNCONDITIONAL_JUMP)  ; LAB_004e202a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e2056
        ;   Label: LAB_004e2056
    MOV dword ptr [ESP + 0x10],EAX      ; 004e205a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e205e
    MOV ESP,EBP                         ; 004e2062
    POP EBP                             ; 004e2064
    POP EDI                             ; 004e2065
    POP EBX                             ; 004e2066
    RET                                 ; 004e2067

