; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_FUN_0051ff60(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_scat.cpp_FUN_0051ecc0 at 0051f0ac
;
; Referenced Globals:
;   undefined4 DAT_005e2bb3
;   undefined4 DAT_01e620a8
;
; Called Functions:
;   core_motion.cpp_FUN_00502f10
;   core_motion.cpp_FUN_005038a0
;   core_motion.cpp_FUN_00503f50
;   core_scat.cpp_FUN_00520140
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_FUN_00545a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ff60
        ;   Label: core_scat.cpp_FUN_0051ff60
    PUSH ESI                            ; 0051ff61
    PUSH EDI                            ; 0051ff62
    PUSH EBP                            ; 0051ff63
    MOV EBP,ESP                         ; 0051ff64
    SUB ESP,0x20                        ; 0051ff66
    AND ESP,0xfffffff8                  ; 0051ff69
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051ff6c
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 0051ff6f
    SHL EAX,0x3                         ; 0051ff75
    MOV ESI,EAX                         ; 0051ff78
    SHL EAX,0x3                         ; 0051ff7a
    SUB EAX,ESI                         ; 0051ff7d
    MOV EDX,0x3f800000                  ; 0051ff7f
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x2834] ; 0051ff84
    MOV dword ptr [ESP + 0x8],EDX       ; 0051ff8b
    TEST ECX,ECX                        ; 0051ff8f
    JZ 0x00520115                       ; 0051ff91
        ;   XREF to: 00520115 (CONDITIONAL_JUMP)  ; LAB_00520115
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 0051ff97
        ;   Label: LAB_0051ff97
    SHL EAX,0x3                         ; 0051ff9d
    MOV ESI,EAX                         ; 0051ffa0
    SHL EAX,0x3                         ; 0051ffa2
    SUB EAX,ESI                         ; 0051ffa5
    CMP dword ptr [EBX + EAX*0x1 + 0x2838],0x0 ; 0051ffa7
    JNZ 0x0051ffc3                      ; 0051ffaf
        ;   XREF to: 0051ffc3 (CONDITIONAL_JUMP)  ; LAB_0051ffc3
    FLD float ptr [EBX + 0x2d08]        ; 0051ffb1
    FLD1                                ; 0051ffb7
    FSUBRP                              ; 0051ffb9
    FMUL float ptr [ESP + 0x8]          ; 0051ffbb
    FSTP float ptr [ESP + 0x8]          ; 0051ffbf
    PUSH 0x4                            ; 0051ffc3
        ;   Label: LAB_0051ffc3
    LEA ESI,[EBX + 0x2b4]               ; 0051ffc5
    PUSH ESI                            ; 0051ffcb
    CALL core_motion.cpp_FUN_005038a0   ; 0051ffcc
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x20],EAX      ; 0051ffd1
    ADD ESP,0x8                         ; 0051ffd5
    PUSH 0x5                            ; 0051ffd8
    PUSH ESI                            ; 0051ffda
    CALL core_motion.cpp_FUN_005038a0   ; 0051ffdb
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x24],EAX      ; 0051ffe0
    FLD float ptr [ESP + 0x24]          ; 0051ffe4
    ADD ESP,0x8                         ; 0051ffe8
    PUSH 0xc                            ; 0051ffeb
    FADD float ptr [ESP + 0x1c]         ; 0051ffed
    PUSH ESI                            ; 0051fff1
    FSTP float ptr [ESP + 0x20]         ; 0051fff2
    CALL core_motion.cpp_FUN_005038a0   ; 0051fff6
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x24],EAX      ; 0051fffb
    FLD float ptr [ESP + 0x24]          ; 0051ffff
    ADD ESP,0x8                         ; 00520003
    PUSH 0xd                            ; 00520006
    FADD float ptr [ESP + 0x1c]         ; 00520008
    PUSH ESI                            ; 0052000c
    FSTP float ptr [ESP + 0x20]         ; 0052000d
    CALL core_motion.cpp_FUN_005038a0   ; 00520011
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x24],EAX      ; 00520016
    FLD float ptr [ESP + 0x24]          ; 0052001a
    ADD ESP,0x8                         ; 0052001e
    PUSH 0xe                            ; 00520021
    FADD float ptr [ESP + 0x1c]         ; 00520023
    PUSH ESI                            ; 00520027
    FSTP float ptr [ESP + 0x20]         ; 00520028
    CALL core_motion.cpp_FUN_005038a0   ; 0052002c
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x24],EAX      ; 00520031
    FLD float ptr [ESP + 0x24]          ; 00520035
    ADD ESP,0x8                         ; 00520039
    FADD float ptr [ESP + 0x18]         ; 0052003c
    FLD1                                ; 00520040
    FSUBRP                              ; 00520042
    FLD float ptr [ESP + 0x8]           ; 00520044
    FXCH                                ; 00520048
    FMUL ST1                            ; 0052004a
    FLDZ                                ; 0052004c
    FXCH                                ; 0052004e
    FSTP ST2                            ; 00520050
    FXCH                                ; 00520052
    FSTP float ptr [ESP + 0x8]          ; 00520054
    FCOMP float ptr [ESP + 0x8]         ; 00520058
    FNSTSW AX                           ; 0052005c
    SAHF                                ; 0052005e
    JBE 0x00520067                      ; 0052005f
        ;   XREF to: 00520067 (CONDITIONAL_JUMP)  ; LAB_00520067
    XOR EDI,EDI                         ; 00520061
    MOV dword ptr [ESP + 0x8],EDI       ; 00520063
    FLD float ptr [ESP + 0x8]           ; 00520067
        ;   Label: LAB_00520067
    FST double ptr [ESP]                ; 0052006b
    FCOMP double ptr [0x005e2bb3]       ; 0052006e | DAT_005e2bb3
    FNSTSW AX                           ; 00520074
    SAHF                                ; 00520076
    JBE 0x0052010e                      ; 00520077
        ;   XREF to: 0052010e (CONDITIONAL_JUMP)  ; LAB_0052010e
    FLD1                                ; 0052007d
    FCOMP double ptr [ESP]              ; 0052007f
    FNSTSW AX                           ; 00520082
    SAHF                                ; 00520084
    JNC 0x0052008f                      ; 00520085
        ;   XREF to: 0052008f (CONDITIONAL_JUMP)  ; LAB_0052008f
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00520087
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 0052008f
        ;   Label: LAB_0052008f
    SHL EAX,0x3                         ; 00520095
    MOV ESI,EAX                         ; 00520098
    SHL EAX,0x3                         ; 0052009a
    SUB EAX,ESI                         ; 0052009d
    MOV ESI,EAX                         ; 0052009f
    LEA EAX,[EBX + 0x2834]              ; 005200a1
    ADD EAX,ESI                         ; 005200a7
    PUSH 0x1                            ; 005200a9
    ADD EAX,0x8                         ; 005200ab
    PUSH EAX                            ; 005200ae
    LEA ESI,[EBX + 0x2b4]               ; 005200af
    PUSH ESI                            ; 005200b5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 005200b6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005200bb
    PUSH EAX                            ; 005200be
    CALL core_motion.cpp_FUN_00502f10   ; 005200bf
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005200c4
    PUSH dword ptr [EBX + 0x2d08]       ; 005200c7
    PUSH EAX                            ; 005200cd
    PUSH ESI                            ; 005200ce
    MOV EDI,EAX                         ; 005200cf
    CALL core_motion.cpp_FUN_00503f50   ; 005200d1
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    MOV dword ptr [ESP + 0x28],EAX      ; 005200d6
    FLD float ptr [ESP + 0x28]          ; 005200da
    ADD ESP,0xc                         ; 005200de
    PUSH 0x544cc0                       ; 005200e1
    MOV EDX,dword ptr [0x01e620a8]      ; 005200e6 | DAT_01e620a8
    PUSH EDX                            ; 005200ec
    PUSH dword ptr [ESP + 0x10]         ; 005200ed
    FSTP float ptr [ESP + 0x20]         ; 005200f1
    PUSH dword ptr [ESP + 0x20]         ; 005200f5
    PUSH EDI                            ; 005200f9
    PUSH ESI                            ; 005200fa
    CALL core_skeleton.cpp_FUN_00545a60 ; 005200fb
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00545a60()
    MOV ECX,dword ptr [EBX + 0x2d04]    ; 00520100
    ADD ESP,0x18                        ; 00520106
    CMP ECX,0x1                         ; 00520109
    JZ 0x00520124                       ; 0052010c
        ;   XREF to: 00520124 (CONDITIONAL_JUMP)  ; LAB_00520124
    MOV ESP,EBP                         ; 0052010e
        ;   Label: LAB_0052010e
    POP EBP                             ; 00520110
    POP EDI                             ; 00520111
    POP ESI                             ; 00520112
    POP EBX                             ; 00520113
    RET                                 ; 00520114
    MOV EAX,dword ptr [EBX + 0x2d08]    ; 00520115
        ;   Label: LAB_00520115
    MOV dword ptr [ESP + 0x8],EAX       ; 0052011b
    JMP 0x0051ff97                      ; 0052011f
        ;   XREF to: 0051ff97 (UNCONDITIONAL_JUMP)  ; LAB_0051ff97
    PUSH ECX                            ; 00520124
        ;   Label: LAB_00520124
    PUSH EBX                            ; 00520125
    CALL core_scat.cpp_FUN_00520140     ; 00520126
        ;   XREF to: 00520140 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_FUN_00520140(CScat * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 0052012b
    MOV ESP,EBP                         ; 0052012e
    POP EBP                             ; 00520130
    POP EDI                             ; 00520131
    POP ESI                             ; 00520132
    POP EBX                             ; 00520133
    RET                                 ; 00520134

