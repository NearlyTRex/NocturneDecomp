; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_0041b020(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[5]:
;   core_boneguy.cpp_FUN_0041c9a0 at 0041cbda
;   core_carved.cpp_FUN_0042a930 at 0042ac00
;   core_demnfolk.cpp_FUN_0045b560 at 0045b82a
;   core_mobster.cpp_FUN_0051e5d0 at 0051e83e
;   core_zombie.cpp_FUN_005bd560 at 005bd82a
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0041b020
        ;   Label: core_bodypart.cpp_FUN_0041b020
    SUB ESP,0xc                         ; 0041b021
    MOV ECX,dword ptr [ESP + 0x14]      ; 0041b024
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041b028
    MOV EAX,ESI                         ; 0041b02c
    FLD float ptr [ECX]                 ; 0041b02e
    FLD float ptr [ECX + 0x4]           ; 0041b030
    FLD float ptr [ECX + 0x8]           ; 0041b033
    MOV EDI,ESI                         ; 0041b036
    MOV ESI,ESP                         ; 0041b038
    FXCH ST2                            ; 0041b03a
    FADD float ptr [EDX]                ; 0041b03c
    FXCH                                ; 0041b03e
    FADD float ptr [EDX + 0x4]          ; 0041b040
    FXCH ST2                            ; 0041b043
    FADD float ptr [EDX + 0x8]          ; 0041b045
    FXCH ST2                            ; 0041b048
    FSTP float ptr [ESP + 0x4]          ; 0041b04a
    FXCH                                ; 0041b04e
    FSTP float ptr [ESP + 0x8]          ; 0041b050
    FSTP float ptr [ESP]                ; 0041b054
    MOVSD ES:EDI,ESI                    ; 0041b057
    MOVSD ES:EDI,ESI                    ; 0041b058
    MOVSD ES:EDI,ESI                    ; 0041b059
    ADD ESP,0xc                         ; 0041b05a
    POP EDI                             ; 0041b05d
    RET                                 ; 0041b05e

