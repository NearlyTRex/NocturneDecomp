; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_0055d560(float param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 at 0051d8b2
;
; Referenced Globals:
;   double DOUBLE_0059838e = 0.5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055d560
        ;   Label: core_xform.cpp_FUN_0055d560
    SUB ESP,0x20                        ; 0055d561
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0055d564
    MOV EDX,ESI                         ; 0055d568
    FLD float ptr [ESP + 0x28]          ; 0055d56a
    FMUL double ptr [0x0059838e]        ; 0055d56e | DOUBLE_0059838e
    FLD ST0                             ; 0055d574
    FSIN                                ; 0055d576
    FXCH                                ; 0055d578
    FCOS                                ; 0055d57a
    FLD float ptr [ECX]                 ; 0055d57c
    FMUL ST2                            ; 0055d57e
    FLD float ptr [ECX + 0x4]           ; 0055d580
    FMUL ST3                            ; 0055d583
    FLD float ptr [ECX + 0x8]           ; 0055d585
    FMULP ST4                           ; 0055d588
    MOV EDI,ESI                         ; 0055d58a
    MOV ESI,ESP                         ; 0055d58c
    FXCH ST2                            ; 0055d58e
    FSTP float ptr [ESP]                ; 0055d590
    FSTP float ptr [ESP + 0x4]          ; 0055d593
    FSTP float ptr [ESP + 0x8]          ; 0055d597
    FSTP float ptr [ESP + 0xc]          ; 0055d59b
    MOVSD ES:EDI,ESI                    ; 0055d59f
    MOVSD ES:EDI,ESI                    ; 0055d5a0
    MOVSD ES:EDI,ESI                    ; 0055d5a1
    MOVSD ES:EDI,ESI                    ; 0055d5a2
    MOV EAX,EDX                         ; 0055d5a3
    ADD ESP,0x20                        ; 0055d5a5
    POP EDI                             ; 0055d5a8
    RET                                 ; 0055d5a9

