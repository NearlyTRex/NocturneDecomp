; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_00503ae0(uint timestamp)
;
; Parameters:
; uint             Stack[0x4]:4   timestamp
;
; Referenced Globals:
;   undefined4 DAT_005ca3f9
;   undefined4 DAT_005ca401
;   undefined4 DAT_01da6478
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00503ae0
        ;   Label: core_netgame.cpp_getElapsedSeconds_FUN_00503ae0
    MOV EBP,ESP                         ; 00503ae1
    SUB ESP,0x8                         ; 00503ae3
    AND ESP,0xfffffff8                  ; 00503ae6
    MOV EDX,dword ptr [EBP + 0x8]       ; 00503ae9
    MOV EAX,[0x01da6478]                ; 00503aec | DAT_01da6478
    SUB EAX,EDX                         ; 00503af1
    MOV dword ptr [ESP + 0x4],EAX       ; 00503af3
    FILD dword ptr [ESP + 0x4]          ; 00503af7
    FMUL double ptr [0x005ca3f9]        ; 00503afb | DAT_005ca3f9
    FST float ptr [ESP]                 ; 00503b01
    FLDZ                                ; 00503b04
    FCOMPP                              ; 00503b06
    FNSTSW AX                           ; 00503b08
    SAHF                                ; 00503b0a
    JA 0x00503b22                       ; 00503b0b
        ;   XREF to: 00503b22 (CONDITIONAL_JUMP)  ; LAB_00503b22
    FLD float ptr [ESP]                 ; 00503b0d
        ;   Label: LAB_00503b0d
    FCOMP double ptr [0x005ca401]       ; 00503b10 | DAT_005ca401
    FNSTSW AX                           ; 00503b16
    SAHF                                ; 00503b18
    JA 0x00503b29                       ; 00503b19
        ;   XREF to: 00503b29 (CONDITIONAL_JUMP)  ; LAB_00503b29
    MOV EAX,dword ptr [ESP]             ; 00503b1b
    MOV ESP,EBP                         ; 00503b1e
    POP EBP                             ; 00503b20
    RET                                 ; 00503b21
    XOR ECX,ECX                         ; 00503b22
        ;   Label: LAB_00503b22
    MOV dword ptr [ESP],ECX             ; 00503b24
    JMP 0x00503b0d                      ; 00503b27
        ;   XREF to: 00503b0d (UNCONDITIONAL_JUMP)  ; LAB_00503b0d
    MOV dword ptr [ESP],0x41f00000      ; 00503b29
        ;   Label: LAB_00503b29
    MOV EAX,dword ptr [ESP]             ; 00503b30
    MOV ESP,EBP                         ; 00503b33
    POP EBP                             ; 00503b35
    RET                                 ; 00503b36

