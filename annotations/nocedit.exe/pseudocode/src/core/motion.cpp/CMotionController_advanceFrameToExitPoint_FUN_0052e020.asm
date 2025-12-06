; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020(CMotionController * this_ptr, int motion_index, float current_frame, float * inout_delta_time, SMotionTransition * out_transition)
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_motion.cpp_CMotionController_advance_FUN_0052d610 at 0052d91c
;
; Referenced Globals:
;   double DOUBLE_0063ab17 = -0.000100000000000000
;   double DOUBLE_0063ab1f = 0.00100000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e020
        ;   Label: core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_0052e020
    PUSH ESI                            ; 0052e021
    PUSH EDI                            ; 0052e022
    PUSH EBP                            ; 0052e023
    MOV EBP,ESP                         ; 0052e024
    SUB ESP,0x1c                        ; 0052e026
    AND ESP,0xfffffff8                  ; 0052e029
    IMUL EBX,dword ptr [EBP + 0x18],0x54c ; 0052e02c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e033
    MOV EAX,dword ptr [EAX]             ; 0052e036
    ADD EAX,0x968                       ; 0052e038
    ADD EBX,EAX                         ; 0052e03d
    MOV EAX,dword ptr [EBP + 0x20]      ; 0052e03f
    FLD float ptr [EAX]                 ; 0052e042
    FMUL float ptr [EBX + 0x20]         ; 0052e044
    XOR ECX,ECX                         ; 0052e047
    XOR ESI,ESI                         ; 0052e049
    FADD float ptr [EBP + 0x1c]         ; 0052e04b
    MOV dword ptr [ESP + 0x10],ECX      ; 0052e04e
    FSTP float ptr [ESP + 0xc]          ; 0052e052
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052e056
    MOV EDI,dword ptr [EBX + 0x4a4]     ; 0052e05a
    MOV dword ptr [ESP + 0x14],EAX      ; 0052e060
    TEST EDI,EDI                        ; 0052e064
    JLE 0x0052e092                      ; 0052e066 | LAB_0052e092
        ;   XREF to: 0052e092 (CONDITIONAL_JUMP)
    MOV ECX,EBX                         ; 0052e068
    FLD float ptr [EBP + 0x1c]          ; 0052e06a
        ;   Label: LAB_0052e06a
    FILD dword ptr [ECX + 0x4a8]        ; 0052e06d
    FSTP float ptr [ESP + 0x8]          ; 0052e073
    FCOMP float ptr [ESP + 0x8]         ; 0052e077
    FNSTSW AX                           ; 0052e07b
    SAHF                                ; 0052e07d
    JBE 0x0052e12e                      ; 0052e07e | LAB_0052e12e
        ;   XREF to: 0052e12e (CONDITIONAL_JUMP)
    INC ESI                             ; 0052e084
        ;   Label: LAB_0052e084
    MOV EAX,dword ptr [EBX + 0x4a4]     ; 0052e085
    ADD ECX,0x8                         ; 0052e08b
    CMP ESI,EAX                         ; 0052e08e
    JL 0x0052e06a                       ; 0052e090 | LAB_0052e06a
        ;   XREF to: 0052e06a (CONDITIONAL_JUMP)
    FILD dword ptr [EBX + 0x28]         ; 0052e092
        ;   Label: LAB_0052e092
    FADD double ptr [0x0063ab17]        ; 0052e095 | double DOUBLE_0063ab17
    FLD float ptr [ESP + 0xc]           ; 0052e09b
    FCOMPP                              ; 0052e09f
    FNSTSW AX                           ; 0052e0a1
    SAHF                                ; 0052e0a3
    JC 0x0052e167                       ; 0052e0a4 | LAB_0052e167
        ;   XREF to: 0052e167 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x60]      ; 0052e0aa
    ADD ECX,dword ptr [EBX + 0x28]      ; 0052e0ad
    PUSH 0x3f800000                     ; 0052e0b0
    MOV dword ptr [ESP + 0x1c],ECX      ; 0052e0b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e0b9
    FILD dword ptr [ESP + 0x1c]         ; 0052e0bc
    SUB ESP,0x4                         ; 0052e0c0
    MOV EAX,dword ptr [EAX + 0x50]      ; 0052e0c3
    FSTP float ptr [ESP]                ; 0052e0c6
    FILD dword ptr [EBX + 0x60]         ; 0052e0c9
    FADD float ptr [EBP + 0x1c]         ; 0052e0cc
    SUB ESP,0x4                         ; 0052e0cf
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052e0d2
    FSTP float ptr [ESP]                ; 0052e0d5
    PUSH EDI                            ; 0052e0d8
    CALL dword ptr [EAX + 0x8]          ; 0052e0d9
    MOV ECX,0x6                         ; 0052e0dc
    ADD ESP,0x10                        ; 0052e0e1
    LEA ESI,[EBX + 0x2c]                ; 0052e0e4
    MOV EDI,dword ptr [EBP + 0x24]      ; 0052e0e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e0ea
    MOVSD.REP ES:EDI,ESI                ; 0052e0ed
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0052e0ef
    TEST EDX,EDX                        ; 0052e0f2
    JZ 0x0052e115                       ; 0052e0f4 | LAB_0052e115
        ;   XREF to: 0052e115 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX + 0x4]       ; 0052e0f6
    MOV ECX,EDX                         ; 0052e0f9
    CMP ESI,0x2                         ; 0052e0fb
    JNZ 0x0052e115                      ; 0052e0fe | LAB_0052e115
        ;   XREF to: 0052e115 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x24]      ; 0052e100
    MOV ECX,dword ptr [EDX + 0x8]       ; 0052e103
    MOV dword ptr [EAX + 0x8],ECX       ; 0052e106
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052e109
    MOV ECX,dword ptr [ECX + 0x2c]      ; 0052e10c
    MOV EDX,dword ptr [ECX + 0xc]       ; 0052e10f
    MOV dword ptr [EAX + 0xc],EDX       ; 0052e112
    FILD dword ptr [EBX + 0x28]         ; 0052e115
        ;   Label: LAB_0052e115
    FSUB float ptr [EBP + 0x1c]         ; 0052e118
        ;   Label: LAB_0052e118
    FDIV float ptr [EBX + 0x20]         ; 0052e11b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0052e11e
    FSTP float ptr [EAX]                ; 0052e121
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052e123
        ;   Label: LAB_0052e123
    MOV ESP,EBP                         ; 0052e127
    POP EBP                             ; 0052e129
    POP EDI                             ; 0052e12a
    POP ESI                             ; 0052e12b
    POP EBX                             ; 0052e12c
    RET                                 ; 0052e12d
    FLD float ptr [ESP + 0xc]           ; 0052e12e
        ;   Label: LAB_0052e12e
    FADD double ptr [0x0063ab1f]        ; 0052e132 | double DOUBLE_0063ab1f
    FLD float ptr [ESP + 0x8]           ; 0052e138
    FSTP double ptr [ESP]               ; 0052e13c
    FCOMP double ptr [ESP]              ; 0052e13f
    FNSTSW AX                           ; 0052e142
    SAHF                                ; 0052e144
    JC 0x0052e084                       ; 0052e145 | LAB_0052e084
        ;   XREF to: 0052e084 (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 0052e14b
    MOV EAX,dword ptr [ECX + 0x4ac]     ; 0052e14e
    FADD double ptr [0x0063ab1f]        ; 0052e154 | double DOUBLE_0063ab1f
    MOV dword ptr [ESP + 0x10],EAX      ; 0052e15a
    FSTP float ptr [ESP + 0xc]          ; 0052e15e
    JMP 0x0052e084                      ; 0052e162 | LAB_0052e084
        ;   XREF to: 0052e084 (UNCONDITIONAL_JUMP)
    PUSH 0x3f800000                     ; 0052e167
        ;   Label: LAB_0052e167
    FILD dword ptr [EBX + 0x60]         ; 0052e16c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e16f
    FLD ST0                             ; 0052e172
    FADD float ptr [ESP + 0x10]         ; 0052e174
    SUB ESP,0x4                         ; 0052e178
    MOV EAX,dword ptr [EAX + 0x50]      ; 0052e17b
    FSTP float ptr [ESP]                ; 0052e17e
    FADD float ptr [EBP + 0x1c]         ; 0052e181
    SUB ESP,0x4                         ; 0052e184
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e187
    FSTP float ptr [ESP]                ; 0052e18a
    PUSH EDX                            ; 0052e18d
    CALL dword ptr [EAX + 0x8]          ; 0052e18e
    ADD ESP,0x10                        ; 0052e191
    MOV EAX,dword ptr [EBP + 0x24]      ; 0052e194
    MOV ECX,dword ptr [EBP + 0x24]      ; 0052e197
    MOV dword ptr [EAX + 0x4],0x1       ; 0052e19a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052e1a1
    MOV dword ptr [ECX + 0x14],0x0      ; 0052e1a4
    MOV dword ptr [ECX + 0x8],EAX       ; 0052e1ab
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052e1ae
    MOV dword ptr [ECX + 0xc],EAX       ; 0052e1b2
    FLD float ptr [ECX + 0xc]           ; 0052e1b5
    FCOMP float ptr [ESP + 0x14]        ; 0052e1b8
    FNSTSW AX                           ; 0052e1bc
    SAHF                                ; 0052e1be
    JNC 0x0052e123                      ; 0052e1bf | LAB_0052e123
        ;   XREF to: 0052e123 (CONDITIONAL_JUMP)
    FLD float ptr [ECX + 0xc]           ; 0052e1c5
    JMP 0x0052e118                      ; 0052e1c8 | LAB_0052e118
        ;   XREF to: 0052e118 (UNCONDITIONAL_JUMP)

