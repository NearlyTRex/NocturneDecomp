; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043d840(void)
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

    SUB ESP,0x8                         ; 0043d840
        ;   Label: FUN_0043d840
    PUSH 0x41700000                     ; 0043d843
    PUSH 0x41200000                     ; 0043d848
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0043d84d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d852
    FLD float ptr [ESP + 0xc]           ; 0043d856
    ADD ESP,0x8                         ; 0043d85a
    FSTP float ptr [ESP]                ; 0043d85d
    MOV EAX,dword ptr [ESP]             ; 0043d860
    ADD ESP,0x8                         ; 0043d863
    RET                                 ; 0043d866

