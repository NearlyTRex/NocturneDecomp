; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_motion_cpp_FUN_004fc930(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[21]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a1104
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 0059752d
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a338
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 004181e4
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 004276db
;   core_carved.cpp_FUN_00429090 at 004290c1
;   core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0 at 00598d26
;   core_demnfolk.cpp_FUN_00455080 at 004565d1
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c872a
;   core_hecaitmx.cpp_CHecaitomix_process_FUN_00597f40 at 0059827b
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc930
        ;   Label: core_motion.cpp_FUN_004fc930
    PUSH ESI                            ; 004fc931
    PUSH EDI                            ; 004fc932
    PUSH EBP                            ; 004fc933
    SUB ESP,0xc                         ; 004fc934
    MOV ESI,dword ptr [ESP + 0x20]      ; 004fc937
    MOV ECX,dword ptr [ESI + 0x4]       ; 004fc93b
    FLD float ptr [ESI + 0x8]           ; 004fc93e
    LEA EBX,[ECX*0x8 + 0x0]             ; 004fc941
    MOV EDX,dword ptr [ESI]             ; 004fc948
    ADD EBX,ECX                         ; 004fc94a
    ADD EDX,0x1c28                      ; 004fc94c
    SHL EBX,0x5                         ; 004fc952
    FLDZ                                ; 004fc955
    ADD EBX,EDX                         ; 004fc957
    FCOMPP                              ; 004fc959
    FNSTSW AX                           ; 004fc95b
    SAHF                                ; 004fc95d
    JNC 0x004fc9cd                      ; 004fc95e
        ;   XREF to: 004fc9cd (CONDITIONAL_JUMP)  ; LAB_004fc9cd
    FILD dword ptr [EBX + 0x64]         ; 004fc960
    FCOMP float ptr [ESI + 0x8]         ; 004fc963
    FNSTSW AX                           ; 004fc966
    SAHF                                ; 004fc968
    JBE 0x004fc9d4                      ; 004fc969
        ;   XREF to: 004fc9d4 (CONDITIONAL_JUMP)  ; LAB_004fc9d4
    MOV EDX,dword ptr [EBX + 0xf4]      ; 004fc96b
    XOR ECX,ECX                         ; 004fc971
    XOR EDI,EDI                         ; 004fc973
    TEST EDX,EDX                        ; 004fc975
    JLE 0x004fc99d                      ; 004fc977
        ;   XREF to: 004fc99d (CONDITIONAL_JUMP)  ; LAB_004fc99d
    MOV EDX,EBX                         ; 004fc979
    FILD dword ptr [EDX + 0xf8]         ; 004fc97b
        ;   Label: LAB_004fc97b
    FCOMP float ptr [ESI + 0x8]         ; 004fc981
    FNSTSW AX                           ; 004fc984
    SAHF                                ; 004fc986
    JA 0x004fc9e5                       ; 004fc987
        ;   XREF to: 004fc9e5 (CONDITIONAL_JUMP)  ; LAB_004fc9e5
    ADD EDX,0x4                         ; 004fc989
    INC ECX                             ; 004fc98c
    MOV EBP,dword ptr [EBX + 0xf4]      ; 004fc98d
    MOV EDI,dword ptr [EDX + 0xf4]      ; 004fc993
    CMP ECX,EBP                         ; 004fc999
    JL 0x004fc97b                       ; 004fc99b
        ;   XREF to: 004fc97b (CONDITIONAL_JUMP)  ; LAB_004fc97b
    MOV dword ptr [ESP + 0x4],EDI       ; 004fc99d
        ;   Label: LAB_004fc99d
    MOV EDX,dword ptr [EBX + 0x64]      ; 004fc9a1
    FILD dword ptr [ESP + 0x4]          ; 004fc9a4
    SUB EDX,EDI                         ; 004fc9a8
    FSUBR float ptr [ESI + 0x8]         ; 004fc9aa
    MOV dword ptr [ESP + 0x4],EDX       ; 004fc9ad
    FILD dword ptr [ESP + 0x4]          ; 004fc9b1
    FDIVP                               ; 004fc9b5
    FILD dword ptr [EBX + 0xf4]         ; 004fc9b7
    FADDP                               ; 004fc9bd
    FSTP float ptr [ESP]                ; 004fc9bf
        ;   Label: LAB_004fc9bf
    MOV EAX,dword ptr [ESP]             ; 004fc9c2
        ;   Label: LAB_004fc9c2
    ADD ESP,0xc                         ; 004fc9c5
    POP EBP                             ; 004fc9c8
    POP EDI                             ; 004fc9c9
    POP ESI                             ; 004fc9ca
    POP EBX                             ; 004fc9cb
    RET                                 ; 004fc9cc
    XOR ECX,ECX                         ; 004fc9cd
        ;   Label: LAB_004fc9cd
    MOV dword ptr [ESP],ECX             ; 004fc9cf
    JMP 0x004fc9c2                      ; 004fc9d2
        ;   XREF to: 004fc9c2 (UNCONDITIONAL_JUMP)  ; LAB_004fc9c2
    MOV EDX,dword ptr [EBX + 0xf4]      ; 004fc9d4
        ;   Label: LAB_004fc9d4
    INC EDX                             ; 004fc9da
    MOV dword ptr [ESP + 0x4],EDX       ; 004fc9db
    FILD dword ptr [ESP + 0x4]          ; 004fc9df
    JMP 0x004fc9bf                      ; 004fc9e3
        ;   XREF to: 004fc9bf (UNCONDITIONAL_JUMP)  ; LAB_004fc9bf
    MOV EDX,dword ptr [EDX + 0xf8]      ; 004fc9e5
        ;   Label: LAB_004fc9e5
    SUB EDX,EDI                         ; 004fc9eb
    MOV dword ptr [ESP + 0x4],EDX       ; 004fc9ed
    MOV dword ptr [ESP + 0x8],EDI       ; 004fc9f1
    FILD dword ptr [ESP + 0x4]          ; 004fc9f5
    FILD dword ptr [ESP + 0x8]          ; 004fc9f9
    FSUBR float ptr [ESI + 0x8]         ; 004fc9fd
    FDIVRP                              ; 004fca00
    MOV dword ptr [ESP + 0x8],ECX       ; 004fca02
    FILD dword ptr [ESP + 0x8]          ; 004fca06
    FADDP                               ; 004fca0a
    FSTP float ptr [ESP]                ; 004fca0c
    MOV EAX,dword ptr [ESP]             ; 004fca0f
    ADD ESP,0xc                         ; 004fca12
    POP EBP                             ; 004fca15
    POP EDI                             ; 004fca16
    POP ESI                             ; 004fca17
    POP EBX                             ; 004fca18
    RET                                 ; 004fca19

