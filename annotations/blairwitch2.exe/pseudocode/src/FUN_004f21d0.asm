; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f21d0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004f2190 at 004f2195
;
; Referenced Globals:
;   undefined4 DAT_01d09858
;   undefined4 DAT_01d0985c
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d09864
;   undefined4 DAT_01d09868
;   undefined4 DAT_01d098dc
;   undefined4 DAT_01d098e0
;   undefined4 DAT_01d098e4
;   undefined4 DAT_01d098e8
;   undefined4 DAT_01d098f0
;   undefined4 DAT_01d0990c
;   undefined4 DAT_01d09910
;   undefined4 DAT_01d09914
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0991c
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f21d0
        ;   Label: FUN_004f21d0
    PUSH ESI                            ; 004f21d1
    PUSH EBP                            ; 004f21d2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f21d3
    MOV ESI,0x3f800000                  ; 004f21d7
    MOV EBP,0x3f000000                  ; 004f21dc
    MOV EBX,0x1d09920                   ; 004f21e1
    XOR ECX,ECX                         ; 004f21e6
    MOV EDX,0xc0                        ; 004f21e8
    MOV dword ptr [0x01d0985c],ECX      ; 004f21ed | DAT_01d0985c
    MOV dword ptr [0x01d0991c],ECX      ; 004f21f3 | DAT_01d0991c
    MOV dword ptr [0x01d098e4],ESI      ; 004f21f9 | DAT_01d098e4
    MOV dword ptr [0x01d098e8],ESI      ; 004f21ff | DAT_01d098e8
    MOV dword ptr [0x01d098f0],EBP      ; 004f2205 | DAT_01d098f0
    MOV dword ptr [0x01d0c398],ECX      ; 004f220b | DAT_01d0c398
    MOV dword ptr [0x01d09864],ECX      ; 004f2211 | DAT_01d09864
    MOV dword ptr [0x01d09868],ECX      ; 004f2217 | DAT_01d09868
    MOV dword ptr [0x01d09b7c],ECX      ; 004f221d | DAT_01d09b7c
    MOV dword ptr [0x01d09b80],ECX      ; 004f2223 | DAT_01d09b80
    MOV dword ptr [0x01d09b78],ECX      ; 004f2229 | DAT_01d09b78
    MOV dword ptr [0x01d09860],ESI      ; 004f222f | DAT_01d09860
    MOV dword ptr [0x01d0d2b4],ECX      ; 004f2235 | DAT_01d0d2b4
    MOV dword ptr [0x01d0d2cc],ECX      ; 004f223b | DAT_01d0d2cc
    MOV dword ptr [0x01d0d2d0],ECX      ; 004f2241 | DAT_01d0d2d0
    MOV dword ptr [0x01d098dc],ESI      ; 004f2247 | DAT_01d098dc
    MOV dword ptr [0x01d0990c],ECX      ; 004f224d | DAT_01d0990c
    MOV dword ptr [0x01d09918],EBX      ; 004f2253 | DAT_01d09918
    MOV dword ptr [0x01d12114],ECX      ; 004f2259 | DAT_01d12114
    MOV dword ptr [0x01d0c39c],ECX      ; 004f225f | DAT_01d0c39c
    MOV dword ptr [0x01d09914],ECX      ; 004f2265 | DAT_01d09914
    MOV EBP,0x44c80000                  ; 004f226b
    MOV dword ptr [0x01d09858],EDX      ; 004f2270 | DAT_01d09858
    MOV dword ptr [0x01d098e0],EBP      ; 004f2276 | DAT_01d098e0
    MOV dword ptr [0x01d09910],EBP      ; 004f227c | DAT_01d09910
    POP EBP                             ; 004f2282
    POP ESI                             ; 004f2283
    POP EBX                             ; 004f2284
    RET                                 ; 004f2285

