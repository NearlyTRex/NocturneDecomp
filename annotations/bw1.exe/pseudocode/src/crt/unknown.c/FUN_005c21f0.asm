; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c21f0(int param_1,undefined4 param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   crt_string.c_splitpath_FUN_005c2238 at 005c22c1
;
; Called Functions:
;   crt_unknown.c_FUN_005c8fb0
;   crt_unknown.c_FUN_005c8ff0
;   crt_unknown.c_FUN_005c9020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c21f0
        ;   Label: crt_unknown.c_FUN_005c21f0
    PUSH ESI                            ; 005c21f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005c21f2
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c21f6
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c21fa
    TEST ESI,ESI                        ; 005c21fe
    JZ 0x005c2235                       ; 005c2200
        ;   XREF to: 005c2235 (CONDITIONAL_JUMP)  ; LAB_005c2235
    CMP EAX,EBX                         ; 005c2202
    JLE 0x005c2208                      ; 005c2204
        ;   XREF to: 005c2208 (CONDITIONAL_JUMP)  ; LAB_005c2208
    MOV EAX,EBX                         ; 005c2206
    PUSH EAX                            ; 005c2208
        ;   Label: LAB_005c2208
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c2209
    PUSH EDX                            ; 005c220d
    CALL crt_unknown.c_FUN_005c8fb0     ; 005c220e
        ;   XREF to: 005c8fb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8fb0()
    ADD ESP,0x8                         ; 005c2213
    PUSH EAX                            ; 005c2216
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c2217
    PUSH ECX                            ; 005c221b
    PUSH ESI                            ; 005c221c
    MOV EBX,EAX                         ; 005c221d
    CALL crt_unknown.c_FUN_005c8ff0     ; 005c221f
        ;   XREF to: 005c8ff0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8ff0()
    ADD ESP,0xc                         ; 005c2224
    PUSH EBX                            ; 005c2227
    PUSH ESI                            ; 005c2228
    CALL crt_unknown.c_FUN_005c9020     ; 005c2229
        ;   XREF to: 005c9020 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9020()
    ADD ESP,0x8                         ; 005c222e
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 005c2231
    POP ESI                             ; 005c2235
        ;   Label: LAB_005c2235
    POP EBX                             ; 005c2236
    RET                                 ; 005c2237

