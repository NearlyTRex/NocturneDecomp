; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_0055d520(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   FUN_00497900 at 00497daf
;   FUN_004fd1d0 at 004fd239
;   FUN_0053a260 at 0053a2c1
;
; Referenced Globals:
;   double DOUBLE_00598386 = 0.5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055d520
        ;   Label: core_xform.cpp_FUN_0055d520
    SUB ESP,0x18                        ; 0055d521
    MOV EDX,ESI                         ; 0055d524
    FLD float ptr [ESP + 0x20]          ; 0055d526
    FMUL double ptr [0x00598386]        ; 0055d52a | DOUBLE_00598386
    FLD ST0                             ; 0055d530
    FCOS                                ; 0055d532
    FXCH                                ; 0055d534
    FSIN                                ; 0055d536
    MOV EDI,ESI                         ; 0055d538
    XOR ECX,ECX                         ; 0055d53a
    MOV ESI,ESP                         ; 0055d53c
    MOV dword ptr [ESP + 0x4],ECX       ; 0055d53e
    MOV dword ptr [ESP + 0x8],ECX       ; 0055d542
    FXCH                                ; 0055d546
    FSTP float ptr [ESP]                ; 0055d548
    FSTP float ptr [ESP + 0xc]          ; 0055d54b
    MOVSD ES:EDI,ESI                    ; 0055d54f
    MOVSD ES:EDI,ESI                    ; 0055d550
    MOVSD ES:EDI,ESI                    ; 0055d551
    MOVSD ES:EDI,ESI                    ; 0055d552
    MOV EAX,EDX                         ; 0055d553
    ADD ESP,0x18                        ; 0055d555
    POP EDI                             ; 0055d558
    RET                                 ; 0055d559

