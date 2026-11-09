; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_0041afa0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[5]:
;   core_boneguy.cpp_FUN_0041c9a0 at 0041cc02
;   core_carved.cpp_FUN_0042a930 at 0042ac28
;   core_demnfolk.cpp_FUN_0045b560 at 0045b852
;   core_mobster.cpp_FUN_0051e5d0 at 0051e860
;   core_zombie.cpp_FUN_005bd560 at 005bd852
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0041afa0
        ;   Label: core_bodypart.cpp_FUN_0041afa0
    SUB ESP,0xc                         ; 0041afa1
    MOV ECX,dword ptr [ESP + 0x14]      ; 0041afa4
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041afa8
    MOV EAX,ESI                         ; 0041afac
    FLD float ptr [ECX]                 ; 0041afae
    FMUL float ptr [EDX]                ; 0041afb0
    FLD float ptr [ECX + 0x4]           ; 0041afb2
    FMUL float ptr [EDX]                ; 0041afb5
    FLD float ptr [ECX + 0x8]           ; 0041afb7
    FMUL float ptr [EDX]                ; 0041afba
    MOV EDI,ESI                         ; 0041afbc
    MOV ESI,ESP                         ; 0041afbe
    FXCH                                ; 0041afc0
    FSTP float ptr [ESP + 0x4]          ; 0041afc2
    FSTP float ptr [ESP + 0x8]          ; 0041afc6
    FSTP float ptr [ESP]                ; 0041afca
    MOVSD ES:EDI,ESI                    ; 0041afcd
    MOVSD ES:EDI,ESI                    ; 0041afce
    MOVSD ES:EDI,ESI                    ; 0041afcf
    ADD ESP,0xc                         ; 0041afd0
    POP EDI                             ; 0041afd3
    RET                                 ; 0041afd4

