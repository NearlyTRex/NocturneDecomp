; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a7274(float10 *param_1,uint param_2)
;
; Local Variables:
; undefined1[10]   Stack[-0x1c]:10  local_1c
;
; XREF[1]:
;   crt_unknown.c_FUN_005a72cc at 005a731e
;
; Referenced Globals:
;   undefined4 DAT_0060789c
;   undefined4 DAT_006078a0
;   undefined2 DAT_006078a4
;
; Called Functions:
;   crt_unknown.c_FUN_005a7a5e
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a7274
        ;   Label: crt_unknown.c_FUN_005a7274
    MOV EBP,ESP                         ; 005a7275
    PUSH EBX                            ; 005a7277
    PUSH ESI                            ; 005a7278
    PUSH EDI                            ; 005a7279
    SUB ESP,0xc                         ; 005a727a
    MOV EDI,dword ptr [EBP + 0xc]       ; 005a727d
    CMP EDI,0x2000                      ; 005a7280
    JL 0x005a728d                       ; 005a7286
        ;   XREF to: 005a728d (CONDITIONAL_JUMP)  ; LAB_005a728d
    MOV EDI,0x2000                      ; 005a7288
    MOV ESI,0x60789c                    ; 005a728d | DAT_0060789c
        ;   Label: LAB_005a728d
    JMP 0x005a72c3                      ; 005a7292
        ;   XREF to: 005a72c3 (UNCONDITIONAL_JUMP)  ; LAB_005a72c3
    TEST DI,0x1                         ; 005a7294
        ;   Label: LAB_005a7294
    JZ 0x005a72be                       ; 005a7299
        ;   XREF to: 005a72be (CONDITIONAL_JUMP)  ; LAB_005a72be
    MOV AX,word ptr [ESI + 0x8]         ; 005a729b | DAT_006078a4
    MOV word ptr [EBP + -0x10],AX       ; 005a729f
    MOV EAX,dword ptr [ESI + 0x4]       ; 005a72a3 | DAT_006078a0
    MOV dword ptr [EBP + -0x14],EAX     ; 005a72a6
    MOV EBX,dword ptr [EBP + 0x8]       ; 005a72a9
    MOV EAX,dword ptr [ESI]             ; 005a72ac | DAT_0060789c
    LEA EDX,[EBP + -0x18]               ; 005a72ae
    MOV dword ptr [EBP + -0x18],EAX     ; 005a72b1
    MOV EAX,EBX                         ; 005a72b4
    FLD extended double ptr [EAX]       ; 005a72b6
    FLD extended double ptr [EDX]       ; 005a72b8
    FMULP                               ; 005a72ba
    FSTP extended double ptr [EBX]      ; 005a72bc
    SAR EDI,0x1                         ; 005a72be
        ;   Label: LAB_005a72be
    ADD ESI,0xa                         ; 005a72c0
    TEST EDI,EDI                        ; 005a72c3
        ;   Label: LAB_005a72c3
    JG 0x005a7294                       ; 005a72c5
        ;   XREF to: 005a7294 (CONDITIONAL_JUMP)  ; LAB_005a7294
    JMP 0x005a7a5e                      ; 005a72c7
        ;   XREF to: 005a7a5e (UNCONDITIONAL_CALL)

