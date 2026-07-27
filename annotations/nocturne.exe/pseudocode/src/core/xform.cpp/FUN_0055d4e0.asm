; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_0055d4e0(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[9]:
;   core_charactr.cpp_FUN_00429e60 at 00429ebb
;   core_gabriela.cpp_FUN_00497900 at 00497ab9
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_004db6f0 at 004db99b
;   core_scat.cpp_FUN_004fd1d0 at 004fd216
;   core_skeleton.cpp_FUN_0051d650 at 0051d714
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10 at 0053a0e1
;   core_stranger.cpp_FUN_005384d0 at 00538710
;   core_stranger.cpp_FUN_005396d0 at 0053975d
;   core_stranger.cpp_FUN_0053a260 at 0053a2a1
;
; Referenced Globals:
;   double DOUBLE_0059837e = 0.5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055d4e0
        ;   Label: core_xform.cpp_FUN_0055d4e0
    SUB ESP,0x18                        ; 0055d4e1
    MOV EDX,ESI                         ; 0055d4e4
    FLD float ptr [ESP + 0x20]          ; 0055d4e6
    FMUL double ptr [0x0059837e]        ; 0055d4ea | DOUBLE_0059837e
    FLD ST0                             ; 0055d4f0
    FCOS                                ; 0055d4f2
    FXCH                                ; 0055d4f4
    FSIN                                ; 0055d4f6
    MOV EDI,ESI                         ; 0055d4f8
    XOR ECX,ECX                         ; 0055d4fa
    MOV ESI,ESP                         ; 0055d4fc
    MOV dword ptr [ESP + 0x4],ECX       ; 0055d4fe
    MOV dword ptr [ESP + 0xc],ECX       ; 0055d502
    FXCH                                ; 0055d506
    FSTP float ptr [ESP]                ; 0055d508
    FSTP float ptr [ESP + 0x8]          ; 0055d50b
    MOVSD ES:EDI,ESI                    ; 0055d50f
    MOVSD ES:EDI,ESI                    ; 0055d510
    MOVSD ES:EDI,ESI                    ; 0055d511
    MOVSD ES:EDI,ESI                    ; 0055d512
    MOV EAX,EDX                         ; 0055d513
    ADD ESP,0x18                        ; 0055d515
    POP EDI                             ; 0055d518
    RET                                 ; 0055d519

