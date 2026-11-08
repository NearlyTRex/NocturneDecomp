; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ae95c(int param_1)
;
;
; XREF[1]:
;   FUN_005ae8c0 at 005ae8e3
;
; Referenced Globals:
;   undefined4 DAT_006075c4
;
; Called Functions:
;   FUN_005ae8fc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae95c
        ;   Label: FUN_005ae95c
    PUSH ESI                            ; 005ae95d
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ae95e
    PUSH EAX                            ; 005ae962
    MOV ESI,dword ptr [EAX + 0x4]       ; 005ae963
    MOV EBX,dword ptr [EAX + 0x8]       ; 005ae966
    CALL FUN_005ae8fc                   ; 005ae969
        ;   XREF to: 005ae8fc (UNCONDITIONAL_CALL)  ; undefined FUN_005ae8fc()
    ADD ESP,0x4                         ; 005ae96e
    TEST EAX,EAX                        ; 005ae971
    JNZ 0x005ae98b                      ; 005ae973
        ;   XREF to: 005ae98b (CONDITIONAL_JUMP)  ; LAB_005ae98b
    TEST ESI,ESI                        ; 005ae975
    JNZ 0x005ae981                      ; 005ae977
        ;   XREF to: 005ae981 (CONDITIONAL_JUMP)  ; LAB_005ae981
    MOV dword ptr [0x006075c4],EBX      ; 005ae979 | DAT_006075c4
    JMP 0x005ae984                      ; 005ae97f
        ;   XREF to: 005ae984 (UNCONDITIONAL_JUMP)  ; LAB_005ae984
    MOV dword ptr [ESI + 0x8],EBX       ; 005ae981
        ;   Label: LAB_005ae981
    TEST EBX,EBX                        ; 005ae984
        ;   Label: LAB_005ae984
    JZ 0x005ae98b                       ; 005ae986
        ;   XREF to: 005ae98b (CONDITIONAL_JUMP)  ; LAB_005ae98b
    MOV dword ptr [EBX + 0x4],ESI       ; 005ae988
    POP ESI                             ; 005ae98b
        ;   Label: LAB_005ae98b
    POP EBX                             ; 005ae98c
    RET                                 ; 005ae98d

