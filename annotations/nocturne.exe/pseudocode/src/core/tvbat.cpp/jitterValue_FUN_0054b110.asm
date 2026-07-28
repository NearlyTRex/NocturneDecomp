; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_tvbat_cpp_jitterValue_FUN_0054b110(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0054b110
        ;   Label: core_tvbat.cpp_jitterValue_FUN_0054b110
    PUSH 0x3f8ccccd                     ; 0054b113
    PUSH 0x3f666666                     ; 0054b118
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054b11d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0054b122
    FLD float ptr [ESP + 0xc]           ; 0054b126
    ADD ESP,0x8                         ; 0054b12a
    FMUL float ptr [ESP + 0xc]          ; 0054b12d
    FSTP float ptr [ESP]                ; 0054b131
    MOV EAX,dword ptr [ESP]             ; 0054b134
    ADD ESP,0x8                         ; 0054b137
    RET                                 ; 0054b13a

