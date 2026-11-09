; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_netgame_cpp_computeTimeDelta_FUN_00503a80(int start_time,int end_time)
;
; Parameters:
; int              Stack[0x4]:4   start_time
; int              Stack[0x8]:4   end_time
;
; Referenced Globals:
;   undefined4 DAT_005ca3e1
;   undefined4 DAT_005ca3e9
;   undefined4 DAT_005ca3f1
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00503a80
        ;   Label: core_netgame.cpp_computeTimeDelta_FUN_00503a80
    MOV EBP,ESP                         ; 00503a81
    SUB ESP,0x8                         ; 00503a83
    AND ESP,0xfffffff8                  ; 00503a86
    MOV EAX,dword ptr [EBP + 0xc]       ; 00503a89
    MOV EDX,dword ptr [EBP + 0x8]       ; 00503a8c
    SUB EAX,EDX                         ; 00503a8f
    MOV dword ptr [ESP + 0x4],EAX       ; 00503a91
    FILD dword ptr [ESP + 0x4]          ; 00503a95
    FMUL double ptr [0x005ca3e1]        ; 00503a99 | DAT_005ca3e1
    FST float ptr [ESP]                 ; 00503a9f
    FCOMP double ptr [0x005ca3e9]       ; 00503aa2 | DAT_005ca3e9
    FNSTSW AX                           ; 00503aa8
    SAHF                                ; 00503aaa
    JC 0x00503ac2                       ; 00503aab
        ;   XREF to: 00503ac2 (CONDITIONAL_JUMP)  ; LAB_00503ac2
    FLD float ptr [ESP]                 ; 00503aad
        ;   Label: LAB_00503aad
    FCOMP double ptr [0x005ca3f1]       ; 00503ab0 | DAT_005ca3f1
    FNSTSW AX                           ; 00503ab6
    SAHF                                ; 00503ab8
    JA 0x00503acb                       ; 00503ab9
        ;   XREF to: 00503acb (CONDITIONAL_JUMP)  ; LAB_00503acb
    MOV EAX,dword ptr [ESP]             ; 00503abb
    MOV ESP,EBP                         ; 00503abe
    POP EBP                             ; 00503ac0
    RET                                 ; 00503ac1
    MOV dword ptr [ESP],0xc1f00000      ; 00503ac2
        ;   Label: LAB_00503ac2
    JMP 0x00503aad                      ; 00503ac9
        ;   XREF to: 00503aad (UNCONDITIONAL_JUMP)  ; LAB_00503aad
    MOV dword ptr [ESP],0x41f00000      ; 00503acb
        ;   Label: LAB_00503acb
    MOV EAX,dword ptr [ESP]             ; 00503ad2
    MOV ESP,EBP                         ; 00503ad5
    POP EBP                             ; 00503ad7
    RET                                 ; 00503ad8

