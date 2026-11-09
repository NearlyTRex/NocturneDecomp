; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c08e0(uint param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[3]:
;   crt_unknown.c_FUN_005c08d0 at 005c08d5
;   crt_unknown.c_FUN_005c10e8 at 005c10f9
;   crt_unknown.c_FUN_005c9fa0 at 005c9fcd
;
; Referenced Globals:
;   undefined4 DAT_00626220
;   undefined4 DAT_00626224
;   undefined4 DAT_00626228
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626618 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626620 = 005c50d4
;   undefined4 DAT_02c9f690
;
; Called Functions:
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c66a0
;   crt_unknown.c_FUN_005c69a8
;   crt_unknown.c_FUN_005c6a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c08e0
        ;   Label: crt_unknown.c_FUN_005c08e0
    PUSH ESI                            ; 005c08e1
    PUSH EDI                            ; 005c08e2
    PUSH ES                             ; 005c08e3
    PUSH FS                             ; 005c08e4
    PUSH GS                             ; 005c08e6
    PUSH EBP                            ; 005c08e8
    SUB ESP,0xc                         ; 005c08e9
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005c08ec
    TEST EBP,EBP                        ; 005c08f0
    JZ 0x005c08f9                       ; 005c08f2
        ;   XREF to: 005c08f9 (CONDITIONAL_JUMP)  ; LAB_005c08f9
    CMP EBP,-0x2c                       ; 005c08f4
    JBE 0x005c0900                      ; 005c08f7
        ;   XREF to: 005c0900 (CONDITIONAL_JUMP)  ; LAB_005c0900
    XOR EAX,EAX                         ; 005c08f9
        ;   Label: LAB_005c08f9
    JMP 0x005c09e1                      ; 005c08fb
        ;   XREF to: 005c09e1 (UNCONDITIONAL_JUMP)  ; LAB_005c09e1
    LEA EAX,[EBP + 0xb]                 ; 005c0900
        ;   Label: LAB_005c0900
    AND AL,0xf8                         ; 005c0903
    MOV dword ptr [ESP + 0x4],EAX       ; 005c0905
    CMP EAX,0x10                        ; 005c0909
    JNC 0x005c0916                      ; 005c090c
        ;   XREF to: 005c0916 (CONDITIONAL_JUMP)  ; LAB_005c0916
    MOV dword ptr [ESP + 0x4],0x10      ; 005c090e
    CALL dword ptr [0x00626618]         ; 005c0916 | PTR_crt_unknown.c_FUN_005c50d4_00626618
        ;   Label: LAB_005c0916
    XOR ECX,ECX                         ; 005c091c
    XOR AH,AH                           ; 005c091e
    MOV dword ptr [ESP],ECX             ; 005c0920
    MOV byte ptr [ESP + 0x8],AH         ; 005c0923
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c0927
        ;   Label: LAB_005c0927
    CMP EAX,dword ptr [0x00626228]      ; 005c092b | DAT_00626228
    JBE 0x005c094b                      ; 005c0931
        ;   XREF to: 005c094b (CONDITIONAL_JUMP)  ; LAB_005c094b
    MOV ESI,dword ptr [0x00626224]      ; 005c0933 | DAT_00626224
    TEST ESI,ESI                        ; 005c0939
    JNZ 0x005c0959                      ; 005c093b
        ;   XREF to: 005c0959 (CONDITIONAL_JUMP)  ; LAB_005c0959
    MOV dword ptr [0x00626228],ESI      ; 005c093d | DAT_00626228
    MOV ESI,dword ptr [0x00626220]      ; 005c0943 | DAT_00626220
    JMP 0x005c0959                      ; 005c0949
        ;   XREF to: 005c0959 (UNCONDITIONAL_JUMP)  ; LAB_005c0959
    XOR EDI,EDI                         ; 005c094b
        ;   Label: LAB_005c094b
    MOV ESI,dword ptr [0x00626220]      ; 005c094d | DAT_00626220
    MOV dword ptr [0x00626228],EDI      ; 005c0953 | DAT_00626228
    TEST ESI,ESI                        ; 005c0959
        ;   Label: LAB_005c0959
    JZ 0x005c099a                       ; 005c095b
        ;   XREF to: 005c099a (CONDITIONAL_JUMP)  ; LAB_005c099a
    MOV EDI,dword ptr [ESI + 0x14]      ; 005c095d
    MOV dword ptr [0x00626224],ESI      ; 005c0960 | DAT_00626224
    CMP EDI,EBP                         ; 005c0966
    JC 0x005c0987                       ; 005c0968
        ;   XREF to: 005c0987 (CONDITIONAL_JUMP)  ; LAB_005c0987
    MOV EAX,0x626220                    ; 005c096a | DAT_00626220
    MOV DX,DS                           ; 005c096f
    AND EDX,0xffff                      ; 005c0971
    MOV EBX,ESI                         ; 005c0977
    MOV EAX,EBP                         ; 005c0979
    CALL crt_unknown.c_FUN_005c66a0     ; 005c097b
        ;   XREF to: 005c66a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c66a0()
    MOV dword ptr [ESP],EAX             ; 005c0980
    TEST EAX,EAX                        ; 005c0983
    JNZ 0x005c09d0                      ; 005c0985
        ;   XREF to: 005c09d0 (CONDITIONAL_JUMP)  ; LAB_005c09d0
    CMP EDI,dword ptr [0x00626228]      ; 005c0987 | DAT_00626228
        ;   Label: LAB_005c0987
    JBE 0x005c0995                      ; 005c098d
        ;   XREF to: 005c0995 (CONDITIONAL_JUMP)  ; LAB_005c0995
    MOV dword ptr [0x00626228],EDI      ; 005c098f | DAT_00626228
    MOV ESI,dword ptr [ESI + 0x8]       ; 005c0995
        ;   Label: LAB_005c0995
    JMP 0x005c0959                      ; 005c0998
        ;   XREF to: 005c0959 (UNCONDITIONAL_JUMP)  ; LAB_005c0959
    CMP byte ptr [ESP + 0x8],0x0        ; 005c099a
        ;   Label: LAB_005c099a
    JNZ 0x005c09ae                      ; 005c099f
        ;   XREF to: 005c09ae (CONDITIONAL_JUMP)  ; LAB_005c09ae
    PUSH EBP                            ; 005c09a1
    CALL crt_unknown.c_FUN_005c69a8     ; 005c09a2
        ;   XREF to: 005c69a8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c69a8()
    ADD ESP,0x4                         ; 005c09a7
    TEST EAX,EAX                        ; 005c09aa
    JNZ 0x005c09c6                      ; 005c09ac
        ;   XREF to: 005c09c6 (CONDITIONAL_JUMP)  ; LAB_005c09c6
    PUSH EBP                            ; 005c09ae
        ;   Label: LAB_005c09ae
    CALL crt_unknown.c_FUN_005c6a10     ; 005c09af
        ;   XREF to: 005c6a10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6a10()
    ADD ESP,0x4                         ; 005c09b4
    TEST EAX,EAX                        ; 005c09b7
    JZ 0x005c09d0                       ; 005c09b9
        ;   XREF to: 005c09d0 (CONDITIONAL_JUMP)  ; LAB_005c09d0
    XOR BL,BL                           ; 005c09bb
    MOV byte ptr [ESP + 0x8],BL         ; 005c09bd
    JMP 0x005c0927                      ; 005c09c1
        ;   XREF to: 005c0927 (UNCONDITIONAL_JUMP)  ; LAB_005c0927
    MOV byte ptr [ESP + 0x8],0x1        ; 005c09c6
        ;   Label: LAB_005c09c6
    JMP 0x005c0927                      ; 005c09cb
        ;   XREF to: 005c0927 (UNCONDITIONAL_JUMP)  ; LAB_005c0927
    XOR BH,BH                           ; 005c09d0
        ;   Label: LAB_005c09d0
    MOV byte ptr [0x02c9f690],BH        ; 005c09d2 | DAT_02c9f690
    CALL dword ptr [0x00626620]         ; 005c09d8 | PTR_crt_unknown.c_FUN_005c50d4_00626620
    MOV EAX,dword ptr [ESP]             ; 005c09de
    ADD ESP,0xc                         ; 005c09e1
        ;   Label: LAB_005c09e1
    POP EBP                             ; 005c09e4
    POP GS                              ; 005c09e5
    POP FS                              ; 005c09e7
    POP ES                              ; 005c09e9
    POP EDI                             ; 005c09ea
    POP ESI                             ; 005c09eb
    POP EBX                             ; 005c09ec
    RET                                 ; 005c09ed

