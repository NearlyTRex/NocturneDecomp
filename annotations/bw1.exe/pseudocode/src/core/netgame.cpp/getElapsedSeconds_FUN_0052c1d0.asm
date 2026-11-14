; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_netgame_cpp_getElapsedSeconds_FUN_0052c1d0(uint timestamp)
;
; Parameters:
; uint             Stack[0x4]:4   timestamp
;
; Referenced Globals:
;   undefined4 DAT_005eb5e8
;   undefined4 DAT_005eb5f0
;   undefined4 DAT_01d51da0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0052c1d0
        ;   Label: core_netgame.cpp_getElapsedSeconds_FUN_0052c1d0
    MOV EBP,ESP                         ; 0052c1d1
    SUB ESP,0x8                         ; 0052c1d3
    AND ESP,0xfffffff8                  ; 0052c1d6
    MOV EDX,dword ptr [EBP + 0x8]       ; 0052c1d9
    MOV EAX,[0x01d51da0]                ; 0052c1dc | DAT_01d51da0
    SUB EAX,EDX                         ; 0052c1e1
    MOV dword ptr [ESP + 0x4],EAX       ; 0052c1e3
    FILD dword ptr [ESP + 0x4]          ; 0052c1e7
    FMUL double ptr [0x005eb5e8]        ; 0052c1eb | DAT_005eb5e8
    FST float ptr [ESP]                 ; 0052c1f1
    FLDZ                                ; 0052c1f4
    FCOMPP                              ; 0052c1f6
    FNSTSW AX                           ; 0052c1f8
    SAHF                                ; 0052c1fa
    JA 0x0052c212                       ; 0052c1fb
        ;   XREF to: 0052c212 (CONDITIONAL_JUMP)  ; LAB_0052c212
    FLD float ptr [ESP]                 ; 0052c1fd
        ;   Label: LAB_0052c1fd
    FCOMP double ptr [0x005eb5f0]       ; 0052c200 | DAT_005eb5f0
    FNSTSW AX                           ; 0052c206
    SAHF                                ; 0052c208
    JA 0x0052c219                       ; 0052c209
        ;   XREF to: 0052c219 (CONDITIONAL_JUMP)  ; LAB_0052c219
    MOV EAX,dword ptr [ESP]             ; 0052c20b
    MOV ESP,EBP                         ; 0052c20e
    POP EBP                             ; 0052c210
    RET                                 ; 0052c211
    XOR ECX,ECX                         ; 0052c212
        ;   Label: LAB_0052c212
    MOV dword ptr [ESP],ECX             ; 0052c214
    JMP 0x0052c1fd                      ; 0052c217
        ;   XREF to: 0052c1fd (UNCONDITIONAL_JUMP)  ; LAB_0052c1fd
    MOV dword ptr [ESP],0x41f00000      ; 0052c219
        ;   Label: LAB_0052c219
    MOV EAX,dword ptr [ESP]             ; 0052c220
    MOV ESP,EBP                         ; 0052c223
    POP EBP                             ; 0052c225
    RET                                 ; 0052c226

