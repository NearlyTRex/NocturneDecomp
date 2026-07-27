; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_0040e1cc(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_005992b0
;
; *****************************************************************************

section .text

    PUSH EDX                            ; 0040e1cc
        ;   Label: core_actor.cpp_FUN_0040e1cc
    ADD byte ptr [EBX + 0x24448bdb],CL  ; 0040e1cd
    ADD AL,0xc7                         ; 0040e1d3
    INC EAX                             ; 0040e1d5
    OR byte ptr [EAX],AL                ; 0040e1d6
    ADD byte ptr [EAX],AL               ; 0040e1d8
    ADD byte ptr [EBX + 0x50890850],CL  ; 0040e1da
    ADD AL,0x8b                         ; 0040e1e0
    PUSH EAX                            ; 0040e1e2
    ADD AL,0x89                         ; 0040e1e3
    ADC BL,AL                           ; 0040e1e5
    LEA EAX,[EAX]                       ; 0040e1e7
    LEA EDX,[EDX]                       ; 0040e1ed
    PUSH EBX                            ; 0040e1f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e1f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040e1f5
    FLD float ptr [EAX]                 ; 0040e1f9
    FMUL float ptr [0x005992b0]         ; 0040e1fb | DAT_005992b0
    FISTP dword ptr [EBX]               ; 0040e201
    FLD float ptr [EAX + 0x4]           ; 0040e203
    FMUL float ptr [0x005992b0]         ; 0040e206 | DAT_005992b0
    FISTP dword ptr [EBX + 0x4]         ; 0040e20c
    FLD float ptr [EAX + 0x8]           ; 0040e20f
    FMUL float ptr [0x005992b0]         ; 0040e212 | DAT_005992b0
    FISTP dword ptr [EBX + 0x8]         ; 0040e218
    POP EBX                             ; 0040e21b
    RET                                 ; 0040e21c

