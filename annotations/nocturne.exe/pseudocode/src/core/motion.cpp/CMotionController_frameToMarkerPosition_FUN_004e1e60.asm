; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_bride.cpp_FUN_0041fe40 at 004202a4
;   core_gabriela.cpp_FUN_00495a20 at 004960a5
;   core_ghoul.cpp_FUN_004a9270 at 004aa8e2
;   core_mimic.cpp_FUN_004d4f30 at 004d5429
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10 at 00539c6d
;   core_stranger.cpp_FUN_00535900 at 00536075
;   core_zombie.cpp_FUN_0055ef50 at 00560881
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1e60
        ;   Label: core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
    PUSH ESI                            ; 004e1e61
    PUSH EDI                            ; 004e1e62
    PUSH EBP                            ; 004e1e63
    SUB ESP,0xc                         ; 004e1e64
    MOV EDI,dword ptr [ESP + 0x20]      ; 004e1e67
    IMUL EBX,dword ptr [EDI + 0x4],0x54c ; 004e1e6b
    MOV EDX,dword ptr [EDI]             ; 004e1e72
    FLD float ptr [EDI + 0x8]           ; 004e1e74
    ADD EDX,0x968                       ; 004e1e77
    FLDZ                                ; 004e1e7d
    ADD EBX,EDX                         ; 004e1e7f
    FCOMPP                              ; 004e1e81
    FNSTSW AX                           ; 004e1e83
    SAHF                                ; 004e1e85
    JNC 0x004e1ef5                      ; 004e1e86
        ;   XREF to: 004e1ef5 (CONDITIONAL_JUMP)  ; LAB_004e1ef5
    FILD dword ptr [EBX + 0x64]         ; 004e1e88
    FCOMP float ptr [EDI + 0x8]         ; 004e1e8b
    FNSTSW AX                           ; 004e1e8e
    SAHF                                ; 004e1e90
    JBE 0x004e1efc                      ; 004e1e91
        ;   XREF to: 004e1efc (CONDITIONAL_JUMP)  ; LAB_004e1efc
    MOV EBP,dword ptr [EBX + 0x520]     ; 004e1e93
    XOR ECX,ECX                         ; 004e1e99
    XOR ESI,ESI                         ; 004e1e9b
    TEST EBP,EBP                        ; 004e1e9d
    JLE 0x004e1ec5                      ; 004e1e9f
        ;   XREF to: 004e1ec5 (CONDITIONAL_JUMP)  ; LAB_004e1ec5
    MOV EDX,EBX                         ; 004e1ea1
    FILD dword ptr [EDX + 0x524]        ; 004e1ea3
        ;   Label: LAB_004e1ea3
    FCOMP float ptr [EDI + 0x8]         ; 004e1ea9
    FNSTSW AX                           ; 004e1eac
    SAHF                                ; 004e1eae
    JA 0x004e1f0d                       ; 004e1eaf
        ;   XREF to: 004e1f0d (CONDITIONAL_JUMP)  ; LAB_004e1f0d
    ADD EDX,0x4                         ; 004e1eb1
    INC ECX                             ; 004e1eb4
    MOV EBP,dword ptr [EBX + 0x520]     ; 004e1eb5
    MOV ESI,dword ptr [EDX + 0x520]     ; 004e1ebb
    CMP ECX,EBP                         ; 004e1ec1
    JL 0x004e1ea3                       ; 004e1ec3
        ;   XREF to: 004e1ea3 (CONDITIONAL_JUMP)  ; LAB_004e1ea3
    MOV dword ptr [ESP + 0x4],ESI       ; 004e1ec5
        ;   Label: LAB_004e1ec5
    MOV EDX,dword ptr [EBX + 0x64]      ; 004e1ec9
    FILD dword ptr [ESP + 0x4]          ; 004e1ecc
    SUB EDX,ESI                         ; 004e1ed0
    FSUBR float ptr [EDI + 0x8]         ; 004e1ed2
    MOV dword ptr [ESP + 0x4],EDX       ; 004e1ed5
    FILD dword ptr [ESP + 0x4]          ; 004e1ed9
    FDIVP                               ; 004e1edd
    FILD dword ptr [EBX + 0x520]        ; 004e1edf
    FADDP                               ; 004e1ee5
    FSTP float ptr [ESP]                ; 004e1ee7
        ;   Label: LAB_004e1ee7
    MOV EAX,dword ptr [ESP]             ; 004e1eea
        ;   Label: LAB_004e1eea
    ADD ESP,0xc                         ; 004e1eed
    POP EBP                             ; 004e1ef0
    POP EDI                             ; 004e1ef1
    POP ESI                             ; 004e1ef2
    POP EBX                             ; 004e1ef3
    RET                                 ; 004e1ef4
    XOR EAX,EAX                         ; 004e1ef5
        ;   Label: LAB_004e1ef5
    MOV dword ptr [ESP],EAX             ; 004e1ef7
    JMP 0x004e1eea                      ; 004e1efa
        ;   XREF to: 004e1eea (UNCONDITIONAL_JUMP)  ; LAB_004e1eea
    MOV EDX,dword ptr [EBX + 0x520]     ; 004e1efc
        ;   Label: LAB_004e1efc
    INC EDX                             ; 004e1f02
    MOV dword ptr [ESP + 0x4],EDX       ; 004e1f03
    FILD dword ptr [ESP + 0x4]          ; 004e1f07
    JMP 0x004e1ee7                      ; 004e1f0b
        ;   XREF to: 004e1ee7 (UNCONDITIONAL_JUMP)  ; LAB_004e1ee7
    MOV EDX,dword ptr [EDX + 0x524]     ; 004e1f0d
        ;   Label: LAB_004e1f0d
    SUB EDX,ESI                         ; 004e1f13
    MOV dword ptr [ESP + 0x4],EDX       ; 004e1f15
    MOV dword ptr [ESP + 0x8],ESI       ; 004e1f19
    FILD dword ptr [ESP + 0x4]          ; 004e1f1d
    FILD dword ptr [ESP + 0x8]          ; 004e1f21
    FSUBR float ptr [EDI + 0x8]         ; 004e1f25
    FDIVRP                              ; 004e1f28
    MOV dword ptr [ESP + 0x8],ECX       ; 004e1f2a
    FILD dword ptr [ESP + 0x8]          ; 004e1f2e
    FADDP                               ; 004e1f32
    FSTP float ptr [ESP]                ; 004e1f34
    MOV EAX,dword ptr [ESP]             ; 004e1f37
    ADD ESP,0xc                         ; 004e1f3a
    POP EBP                             ; 004e1f3d
    POP EDI                             ; 004e1f3e
    POP ESI                             ; 004e1f3f
    POP EBX                             ; 004e1f40
    RET                                 ; 004e1f41

