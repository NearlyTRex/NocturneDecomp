; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_vampboss_cpp_FUN_0054c5f0(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0054c5f0
        ;   Label: core_vampboss.cpp_FUN_0054c5f0
    PUSH dword ptr [ESP + 0x10]         ; 0054c5f3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0054c5f7
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xc],EAX       ; 0054c5fc
    FLD float ptr [ESP + 0xc]           ; 0054c600
    ADD ESP,0x4                         ; 0054c604
    FLD float ptr [ESP + 0x14]          ; 0054c607
    FXCH                                ; 0054c60b
    FST float ptr [ESP + 0x10]          ; 0054c60d
    FXCH                                ; 0054c611
    FCHS                                ; 0054c613
    FSTP float ptr [ESP]                ; 0054c615
    FCOMP float ptr [ESP]               ; 0054c618
    FNSTSW AX                           ; 0054c61b
    SAHF                                ; 0054c61d
    JC 0x0054c63d                       ; 0054c61e
        ;   XREF to: 0054c63d (CONDITIONAL_JUMP)  ; LAB_0054c63d
    FLD float ptr [ESP + 0x10]          ; 0054c620
    FCOMP float ptr [ESP + 0x14]        ; 0054c624
    FNSTSW AX                           ; 0054c628
    SAHF                                ; 0054c62a
    JBE 0x0054c642                      ; 0054c62b
        ;   XREF to: 0054c642 (CONDITIONAL_JUMP)  ; LAB_0054c642
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054c62d
    MOV dword ptr [ESP + 0x4],EAX       ; 0054c631
        ;   Label: LAB_0054c631
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054c635
    ADD ESP,0xc                         ; 0054c639
    RET                                 ; 0054c63c
    MOV EAX,dword ptr [ESP]             ; 0054c63d
        ;   Label: LAB_0054c63d
    JMP 0x0054c631                      ; 0054c640
        ;   XREF to: 0054c631 (UNCONDITIONAL_JUMP)  ; LAB_0054c631
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054c642
        ;   Label: LAB_0054c642
    MOV dword ptr [ESP + 0x4],EAX       ; 0054c646
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054c64a
    ADD ESP,0xc                         ; 0054c64e
    RET                                 ; 0054c651

