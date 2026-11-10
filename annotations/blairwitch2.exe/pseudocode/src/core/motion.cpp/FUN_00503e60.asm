; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_motion_cpp_FUN_00503e60(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[19]:
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041e074
;   core_confedrt.cpp_FUN_005a1180 at 005a1216
;   core_doc.cpp_FUN_00450c60 at 004513d0
;   core_doc.cpp_FUN_004555c0 at 004556e5
;   core_dog1.cpp_CDog_processLeapAttackState_FUN_005ac200 at 005ac23d
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004add1d
;   core_ghostchi.cpp_CGhostChild_processMeleeAttackState_FUN_005a9580 at 005a9601
;   core_ghoul.cpp_CGhoul_process_FUN_004c1bb0 at 004c3419
;   core_hag.cpp_CHag_processMeleeAttackState_FUN_005aab50 at 005aac51
;   core_hand.cpp_CHand_processMeleeAttackState_FUN_005a9ed0 at 005a9f76
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503e60
        ;   Label: core_motion.cpp_FUN_00503e60
    PUSH ESI                            ; 00503e61
    PUSH EDI                            ; 00503e62
    PUSH EBP                            ; 00503e63
    SUB ESP,0xc                         ; 00503e64
    MOV ESI,dword ptr [ESP + 0x20]      ; 00503e67
    MOV ECX,dword ptr [ESI + 0x4]       ; 00503e6b
    LEA EBX,[ECX*0x8 + 0x0]             ; 00503e6e
    ADD EBX,ECX                         ; 00503e75
    FLD float ptr [ESI + 0x8]           ; 00503e77
    SHL EBX,0x2                         ; 00503e7a
    MOV EDX,dword ptr [ESI]             ; 00503e7d
    SUB EBX,ECX                         ; 00503e7f
    ADD EDX,0x1c28                      ; 00503e81
    SHL EBX,0x3                         ; 00503e87
    FLDZ                                ; 00503e8a
    ADD EBX,EDX                         ; 00503e8c
    FCOMPP                              ; 00503e8e
    FNSTSW AX                           ; 00503e90
    SAHF                                ; 00503e92
    JNC 0x00503f02                      ; 00503e93
        ;   XREF to: 00503f02 (CONDITIONAL_JUMP)  ; LAB_00503f02
    FILD dword ptr [EBX + 0x64]         ; 00503e95
    FCOMP float ptr [ESI + 0x8]         ; 00503e98
    FNSTSW AX                           ; 00503e9b
    SAHF                                ; 00503e9d
    JBE 0x00503f09                      ; 00503e9e
        ;   XREF to: 00503f09 (CONDITIONAL_JUMP)  ; LAB_00503f09
    MOV EDX,dword ptr [EBX + 0xec]      ; 00503ea0
    XOR ECX,ECX                         ; 00503ea6
    XOR EDI,EDI                         ; 00503ea8
    TEST EDX,EDX                        ; 00503eaa
    JLE 0x00503ed2                      ; 00503eac
        ;   XREF to: 00503ed2 (CONDITIONAL_JUMP)  ; LAB_00503ed2
    MOV EDX,EBX                         ; 00503eae
    FILD dword ptr [EDX + 0xf0]         ; 00503eb0
        ;   Label: LAB_00503eb0
    FCOMP float ptr [ESI + 0x8]         ; 00503eb6
    FNSTSW AX                           ; 00503eb9
    SAHF                                ; 00503ebb
    JA 0x00503f1a                       ; 00503ebc
        ;   XREF to: 00503f1a (CONDITIONAL_JUMP)  ; LAB_00503f1a
    ADD EDX,0x4                         ; 00503ebe
    INC ECX                             ; 00503ec1
    MOV EBP,dword ptr [EBX + 0xec]      ; 00503ec2
    MOV EDI,dword ptr [EDX + 0xec]      ; 00503ec8
    CMP ECX,EBP                         ; 00503ece
    JL 0x00503eb0                       ; 00503ed0
        ;   XREF to: 00503eb0 (CONDITIONAL_JUMP)  ; LAB_00503eb0
    MOV dword ptr [ESP + 0x4],EDI       ; 00503ed2
        ;   Label: LAB_00503ed2
    MOV EDX,dword ptr [EBX + 0x64]      ; 00503ed6
    FILD dword ptr [ESP + 0x4]          ; 00503ed9
    SUB EDX,EDI                         ; 00503edd
    FSUBR float ptr [ESI + 0x8]         ; 00503edf
    MOV dword ptr [ESP + 0x4],EDX       ; 00503ee2
    FILD dword ptr [ESP + 0x4]          ; 00503ee6
    FDIVP                               ; 00503eea
    FILD dword ptr [EBX + 0xec]         ; 00503eec
    FADDP                               ; 00503ef2
    FSTP float ptr [ESP]                ; 00503ef4
        ;   Label: LAB_00503ef4
    MOV EAX,dword ptr [ESP]             ; 00503ef7
        ;   Label: LAB_00503ef7
    ADD ESP,0xc                         ; 00503efa
    POP EBP                             ; 00503efd
    POP EDI                             ; 00503efe
    POP ESI                             ; 00503eff
    POP EBX                             ; 00503f00
    RET                                 ; 00503f01
    XOR ECX,ECX                         ; 00503f02
        ;   Label: LAB_00503f02
    MOV dword ptr [ESP],ECX             ; 00503f04
    JMP 0x00503ef7                      ; 00503f07
        ;   XREF to: 00503ef7 (UNCONDITIONAL_JUMP)  ; LAB_00503ef7
    MOV EDX,dword ptr [EBX + 0xec]      ; 00503f09
        ;   Label: LAB_00503f09
    INC EDX                             ; 00503f0f
    MOV dword ptr [ESP + 0x4],EDX       ; 00503f10
    FILD dword ptr [ESP + 0x4]          ; 00503f14
    JMP 0x00503ef4                      ; 00503f18
        ;   XREF to: 00503ef4 (UNCONDITIONAL_JUMP)  ; LAB_00503ef4
    MOV EDX,dword ptr [EDX + 0xf0]      ; 00503f1a
        ;   Label: LAB_00503f1a
    SUB EDX,EDI                         ; 00503f20
    MOV dword ptr [ESP + 0x4],EDX       ; 00503f22
    MOV dword ptr [ESP + 0x8],EDI       ; 00503f26
    FILD dword ptr [ESP + 0x4]          ; 00503f2a
    FILD dword ptr [ESP + 0x8]          ; 00503f2e
    FSUBR float ptr [ESI + 0x8]         ; 00503f32
    FDIVRP                              ; 00503f35
    MOV dword ptr [ESP + 0x8],ECX       ; 00503f37
    FILD dword ptr [ESP + 0x8]          ; 00503f3b
    FADDP                               ; 00503f3f
    FSTP float ptr [ESP]                ; 00503f41
    MOV EAX,dword ptr [ESP]             ; 00503f44
    ADD ESP,0xc                         ; 00503f47
    POP EBP                             ; 00503f4a
    POP EDI                             ; 00503f4b
    POP ESI                             ; 00503f4c
    POP EBX                             ; 00503f4d
    RET                                 ; 00503f4e

