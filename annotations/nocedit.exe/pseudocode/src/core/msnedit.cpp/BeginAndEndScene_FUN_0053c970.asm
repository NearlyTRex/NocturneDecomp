; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_BeginAndEndScene_FUN_0053c970(void)
;
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[2]:
;   core_msnedit.cpp_CDemonMission_FUN_0053ca00 at 0053ca1a
;   core_msnedit.cpp_FUN_0053c930 at 0053c961
;
; Referenced Globals:
;   undefined4 DAT_02f7c53c
;   CDemonCamera g_CDemonCameraInstance
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_msnedit.cpp_FUN_00535c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c970
        ;   Label: core_msnedit.cpp_BeginAndEndScene_FUN_0053c970
    PUSH ESI                            ; 0053c971
    SUB ESP,0xc                         ; 0053c972
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053c975
    MOV EBX,dword ptr [ESP + 0x20]      ; 0053c979
    MOV ESI,dword ptr [ESP + 0x24]      ; 0053c97d
    CMP dword ptr [ESP + 0x1c],0x0      ; 0053c981
    JZ 0x0053c9ac                       ; 0053c986
        ;   XREF to: 0053c9ac (CONDITIONAL_JUMP)  ; LAB_0053c9ac
    MOV ECX,dword ptr [0x02f7c53c]      ; 0053c988 | DAT_02f7c53c
    CMP ECX,0x3                         ; 0053c98e
    JZ 0x0053c9ac                       ; 0053c991
        ;   XREF to: 0053c9ac (CONDITIONAL_JUMP)  ; LAB_0053c9ac
    CMP ECX,0x4                         ; 0053c993
    JZ 0x0053c9ac                       ; 0053c996
        ;   XREF to: 0053c9ac (CONDITIONAL_JUMP)  ; LAB_0053c9ac
    CMP EBX,dword ptr [EAX + 0x14]      ; 0053c998
    JLE 0x0053c9ac                      ; 0053c99b
        ;   XREF to: 0053c9ac (CONDITIONAL_JUMP)  ; LAB_0053c9ac
    CMP EBX,dword ptr [EAX + 0x1c]      ; 0053c99d
    JGE 0x0053c9ac                      ; 0053c9a0
        ;   XREF to: 0053c9ac (CONDITIONAL_JUMP)  ; LAB_0053c9ac
    CMP ESI,dword ptr [EAX + 0x18]      ; 0053c9a2
    JLE 0x0053c9ac                      ; 0053c9a5
        ;   XREF to: 0053c9ac (CONDITIONAL_JUMP)  ; LAB_0053c9ac
    CMP ESI,dword ptr [EAX + 0x20]      ; 0053c9a7
    JL 0x0053c9b2                       ; 0053c9aa
        ;   XREF to: 0053c9b2 (CONDITIONAL_JUMP)  ; LAB_0053c9b2
    ADD ESP,0xc                         ; 0053c9ac
        ;   Label: LAB_0053c9ac
    POP ESI                             ; 0053c9af
    POP EBX                             ; 0053c9b0
    RET                                 ; 0053c9b1
    PUSH 0x1                            ; 0053c9b2
        ;   Label: LAB_0053c9b2
    PUSH 0x32758e4                      ; 0053c9b4 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0053c9b9
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0053c9be
    PUSH ESI                            ; 0053c9c1
    PUSH EBX                            ; 0053c9c2
    LEA EAX,[ESP + 0x8]                 ; 0053c9c3
    PUSH EAX                            ; 0053c9c7
    CALL core_msnedit.cpp_FUN_00535c60  ; 0053c9c8
        ;   XREF to: 00535c60 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00535c60()
    ADD ESP,0xc                         ; 0053c9cd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0053c9d0
    FLD float ptr [EAX]                 ; 0053c9d4
    PUSH 0x0                            ; 0053c9d6
    FSTP float ptr [EDX + 0x20]         ; 0053c9d8
    PUSH 0x32758e4                      ; 0053c9db | g_CDemonCameraInstance
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053c9e0
    MOV dword ptr [EDX + 0x24],ECX      ; 0053c9e3
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053c9e6
    MOV dword ptr [EDX + 0x28],ECX      ; 0053c9e9
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0053c9ec
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0053c9f1
    ADD ESP,0xc                         ; 0053c9f4
    POP ESI                             ; 0053c9f7
    POP EBX                             ; 0053c9f8
    RET                                 ; 0053c9f9

