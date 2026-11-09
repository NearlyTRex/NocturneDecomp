; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_FUN_00524d70(CMotionController *this_ptr,int motion_index,float current_frame,float *inout_delta_time,SMotionTransition *out_transition)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   current_frame
; float *          Stack[0x10]:4   inout_delta_time
; SMotionTransition * Stack[0x14]:4   out_transition
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_motion.cpp_CMotionController_advance_FUN_00524270 at 005245e3
;
; Referenced Globals:
;   undefined4 DAT_005eaf73
;   undefined4 DAT_005eaf7b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524d70
        ;   Label: core_motion.cpp_FUN_00524d70
    PUSH ESI                            ; 00524d71
    PUSH EDI                            ; 00524d72
    PUSH EBP                            ; 00524d73
    MOV EBP,ESP                         ; 00524d74
    SUB ESP,0x1c                        ; 00524d76
    AND ESP,0xfffffff8                  ; 00524d79
    MOV EBX,dword ptr [EBP + 0x18]      ; 00524d7c
    MOV ESI,dword ptr [EBP + 0x14]      ; 00524d7f
    LEA ECX,[EBX*0x8 + 0x0]             ; 00524d82
    MOV EAX,dword ptr [EBP + 0x20]      ; 00524d89
    ADD ECX,EBX                         ; 00524d8c
    MOV ESI,dword ptr [ESI]             ; 00524d8e
    SHL ECX,0x5                         ; 00524d90
    LEA EBX,[ESI + 0x1c28]              ; 00524d93
    XOR EDX,EDX                         ; 00524d99
    ADD EBX,ECX                         ; 00524d9b
    FLD float ptr [EAX]                 ; 00524d9d
    FMUL float ptr [EBX + 0x20]         ; 00524d9f
    MOV dword ptr [ESP + 0x14],EDX      ; 00524da2
    FADD float ptr [EBP + 0x1c]         ; 00524da6
    XOR ESI,ESI                         ; 00524da9
    FSTP float ptr [ESP + 0xc]          ; 00524dab
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524daf
    MOV ECX,dword ptr [EBX + 0x78]      ; 00524db3
    MOV dword ptr [ESP + 0x10],EAX      ; 00524db6
    TEST ECX,ECX                        ; 00524dba
    JLE 0x00524de2                      ; 00524dbc
        ;   XREF to: 00524de2 (CONDITIONAL_JUMP)  ; LAB_00524de2
    MOV ECX,EBX                         ; 00524dbe
    FLD float ptr [EBP + 0x1c]          ; 00524dc0
        ;   Label: LAB_00524dc0
    FILD dword ptr [ECX + 0x7c]         ; 00524dc3
    FSTP float ptr [ESP + 0x8]          ; 00524dc6
    FCOMP float ptr [ESP + 0x8]         ; 00524dca
    FNSTSW AX                           ; 00524dce
    SAHF                                ; 00524dd0
    JBE 0x00524e89                      ; 00524dd1
        ;   XREF to: 00524e89 (CONDITIONAL_JUMP)  ; LAB_00524e89
    INC ESI                             ; 00524dd7
        ;   Label: LAB_00524dd7
    MOV EDI,dword ptr [EBX + 0x78]      ; 00524dd8
    ADD ECX,0x8                         ; 00524ddb
    CMP ESI,EDI                         ; 00524dde
    JL 0x00524dc0                       ; 00524de0
        ;   XREF to: 00524dc0 (CONDITIONAL_JUMP)  ; LAB_00524dc0
    FILD dword ptr [EBX + 0x28]         ; 00524de2
        ;   Label: LAB_00524de2
    FADD double ptr [0x005eaf73]        ; 00524de5 | DAT_005eaf73
    FLD float ptr [ESP + 0xc]           ; 00524deb
    FCOMPP                              ; 00524def
    FNSTSW AX                           ; 00524df1
    SAHF                                ; 00524df3
    JC 0x00524ec2                       ; 00524df4
        ;   XREF to: 00524ec2 (CONDITIONAL_JUMP)  ; LAB_00524ec2
    FILD dword ptr [EBX + 0x28]         ; 00524dfa
    FILD dword ptr [EBX + 0x68]         ; 00524dfd
    FLD1                                ; 00524e00
    FDIVRP                              ; 00524e02
    FXCH                                ; 00524e04
    FMUL ST1                            ; 00524e06
    PUSH 0x3f800000                     ; 00524e08
    MOV EAX,dword ptr [EBP + 0x14]      ; 00524e0d
    FILD dword ptr [EBX + 0x60]         ; 00524e10
    FXCH                                ; 00524e13
    FADD ST0,ST1                        ; 00524e15
    SUB ESP,0x4                         ; 00524e17
    FLD float ptr [EBP + 0x1c]          ; 00524e1a
    FMULP ST3                           ; 00524e1d
    MOV EAX,dword ptr [EAX + 0x50]      ; 00524e1f
    FSTP float ptr [ESP]                ; 00524e22
    FADDP                               ; 00524e25
    SUB ESP,0x4                         ; 00524e27
    MOV ECX,dword ptr [EBP + 0x14]      ; 00524e2a
    FSTP float ptr [ESP]                ; 00524e2d
    PUSH ECX                            ; 00524e30
    CALL dword ptr [EAX + 0x8]          ; 00524e31
    MOV ECX,0x6                         ; 00524e34
    ADD ESP,0x10                        ; 00524e39
    LEA ESI,[EBX + 0x2c]                ; 00524e3c
    MOV EDI,dword ptr [EBP + 0x24]      ; 00524e3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00524e42
    MOVSD.REP ES:EDI,ESI                ; 00524e45
    MOV ESI,dword ptr [EAX + 0x2c]      ; 00524e47
    TEST ESI,ESI                        ; 00524e4a
    JZ 0x00524e70                       ; 00524e4c
        ;   XREF to: 00524e70 (CONDITIONAL_JUMP)  ; LAB_00524e70
    MOV EDI,dword ptr [ESI + 0x4]       ; 00524e4e
    MOV ECX,ESI                         ; 00524e51
    CMP EDI,0x2                         ; 00524e53
    JNZ 0x00524e70                      ; 00524e56
        ;   XREF to: 00524e70 (CONDITIONAL_JUMP)  ; LAB_00524e70
    MOV ECX,dword ptr [EBP + 0x24]      ; 00524e58
    MOV EAX,dword ptr [ESI + 0x8]       ; 00524e5b
    MOV dword ptr [ECX + 0x8],EAX       ; 00524e5e
    MOV ECX,dword ptr [EBP + 0x14]      ; 00524e61
    MOV ECX,dword ptr [ECX + 0x2c]      ; 00524e64
    MOV EAX,dword ptr [EBP + 0x24]      ; 00524e67
    MOV EDX,dword ptr [ECX + 0xc]       ; 00524e6a
    MOV dword ptr [EAX + 0xc],EDX       ; 00524e6d
    FILD dword ptr [EBX + 0x28]         ; 00524e70
        ;   Label: LAB_00524e70
    FSUB float ptr [EBP + 0x1c]         ; 00524e73
        ;   Label: LAB_00524e73
    FDIV float ptr [EBX + 0x20]         ; 00524e76
    MOV EAX,dword ptr [EBP + 0x20]      ; 00524e79
    FSTP float ptr [EAX]                ; 00524e7c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00524e7e
        ;   Label: LAB_00524e7e
    MOV ESP,EBP                         ; 00524e82
    POP EBP                             ; 00524e84
    POP EDI                             ; 00524e85
    POP ESI                             ; 00524e86
    POP EBX                             ; 00524e87
    RET                                 ; 00524e88
    FLD float ptr [ESP + 0xc]           ; 00524e89
        ;   Label: LAB_00524e89
    FADD double ptr [0x005eaf7b]        ; 00524e8d | DAT_005eaf7b
    FLD float ptr [ESP + 0x8]           ; 00524e93
    FSTP double ptr [ESP]               ; 00524e97
    FCOMP double ptr [ESP]              ; 00524e9a
    FNSTSW AX                           ; 00524e9d
    SAHF                                ; 00524e9f
    JC 0x00524dd7                       ; 00524ea0
        ;   XREF to: 00524dd7 (CONDITIONAL_JUMP)  ; LAB_00524dd7
    FLD double ptr [ESP]                ; 00524ea6
    MOV EAX,dword ptr [ECX + 0x80]      ; 00524ea9
    FADD double ptr [0x005eaf7b]        ; 00524eaf | DAT_005eaf7b
    MOV dword ptr [ESP + 0x14],EAX      ; 00524eb5
    FSTP float ptr [ESP + 0xc]          ; 00524eb9
    JMP 0x00524dd7                      ; 00524ebd
        ;   XREF to: 00524dd7 (UNCONDITIONAL_JUMP)  ; LAB_00524dd7
    FLD float ptr [ESP + 0xc]           ; 00524ec2
        ;   Label: LAB_00524ec2
    FILD dword ptr [EBX + 0x68]         ; 00524ec6
    FLD1                                ; 00524ec9
    FDIVRP                              ; 00524ecb
    FXCH                                ; 00524ecd
    FMUL ST1                            ; 00524ecf
    PUSH 0x3f800000                     ; 00524ed1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00524ed6
    FILD dword ptr [EBX + 0x60]         ; 00524ed9
    FXCH                                ; 00524edc
    FADD ST0,ST1                        ; 00524ede
    SUB ESP,0x4                         ; 00524ee0
    FLD float ptr [EBP + 0x1c]          ; 00524ee3
    FMULP ST3                           ; 00524ee6
    MOV EAX,dword ptr [EAX + 0x50]      ; 00524ee8
    FSTP float ptr [ESP]                ; 00524eeb
    FADDP                               ; 00524eee
    SUB ESP,0x4                         ; 00524ef0
    MOV EDX,dword ptr [EBP + 0x14]      ; 00524ef3
    FSTP float ptr [ESP]                ; 00524ef6
    PUSH EDX                            ; 00524ef9
    CALL dword ptr [EAX + 0x8]          ; 00524efa
    ADD ESP,0x10                        ; 00524efd
    MOV EAX,dword ptr [EBP + 0x24]      ; 00524f00
    MOV ECX,dword ptr [EBP + 0x24]      ; 00524f03
    MOV dword ptr [EAX + 0x4],0x1       ; 00524f06
    MOV EAX,dword ptr [EBP + 0x18]      ; 00524f0d
    MOV dword ptr [ECX + 0x14],0x0      ; 00524f10
    MOV dword ptr [ECX + 0x8],EAX       ; 00524f17
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524f1a
    MOV dword ptr [ECX + 0xc],EAX       ; 00524f1e
    FLD float ptr [ECX + 0xc]           ; 00524f21
    FCOMP float ptr [ESP + 0x10]        ; 00524f24
    FNSTSW AX                           ; 00524f28
    SAHF                                ; 00524f2a
    JNC 0x00524e7e                      ; 00524f2b
        ;   XREF to: 00524e7e (CONDITIONAL_JUMP)  ; LAB_00524e7e
    FLD float ptr [ECX + 0xc]           ; 00524f31
    JMP 0x00524e73                      ; 00524f34
        ;   XREF to: 00524e73 (UNCONDITIONAL_JUMP)  ; LAB_00524e73

