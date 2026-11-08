; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d810(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_00544190 at 005442ca
;   FUN_00544460 at 005491a0
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_02c83278
;   undefined4 DAT_02c83279
;   undefined4 DAT_02c8327a
;   undefined4 DAT_02c8327b
;   undefined4 DAT_02c832a0
;   undefined4 DAT_02c832a4
;
; Called Functions:
;   FUN_0057d880
;   FUN_0057d9d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057d810
        ;   Label: FUN_0057d810
    PUSH EDI                            ; 0057d811
    MOV EDX,dword ptr [0x02c832a0]      ; 0057d812 | DAT_02c832a0
    PUSH EDX                            ; 0057d818
    MOV ECX,dword ptr [ESP + 0x10]      ; 0057d819
    PUSH ECX                            ; 0057d81d
    CALL FUN_0057d9d0                   ; 0057d81e
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d9d0()
    ADD ESP,0x8                         ; 0057d823
    MOV EDI,0x2c83278                   ; 0057d826
    MOV ESI,dword ptr [ESP + 0x10]      ; 0057d82b
    PUSH EDI                            ; 0057d82f
    MOV AL,byte ptr [ESI]               ; 0057d830
        ;   Label: LAB_0057d830
    MOV byte ptr [EDI],AL               ; 0057d832 | DAT_02c83278 | DAT_02c8327a
    CMP AL,0x0                          ; 0057d834
    JZ 0x0057d848                       ; 0057d836
        ;   XREF to: 0057d848 (CONDITIONAL_JUMP)  ; LAB_0057d848
    MOV AL,byte ptr [ESI + 0x1]         ; 0057d838
    ADD ESI,0x2                         ; 0057d83b
    MOV byte ptr [EDI + 0x1],AL         ; 0057d83e | DAT_02c83279 | DAT_02c8327b
    ADD EDI,0x2                         ; 0057d841
    CMP AL,0x0                          ; 0057d844
    JNZ 0x0057d830                      ; 0057d846
        ;   XREF to: 0057d830 (CONDITIONAL_JUMP)  ; LAB_0057d830
    POP EDI                             ; 0057d848
        ;   Label: LAB_0057d848
    CMP dword ptr [0x02c832a4],0x0      ; 0057d849 | DAT_02c832a4
    JNZ 0x0057d855                      ; 0057d850
        ;   XREF to: 0057d855 (CONDITIONAL_JUMP)  ; LAB_0057d855
    POP EDI                             ; 0057d852
    POP ESI                             ; 0057d853
    RET                                 ; 0057d854
    PUSH EDI                            ; 0057d855 | DAT_02c83278
        ;   Label: LAB_0057d855
    MOV ESI,dword ptr [0x00622c18]      ; 0057d856 | DAT_00622c18
    PUSH ESI                            ; 0057d85c
    MOV EDI,dword ptr [ESP + 0x14]      ; 0057d85d
    PUSH EDI                            ; 0057d861
    CALL FUN_0057d880                   ; 0057d862
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d880()
    ADD ESP,0xc                         ; 0057d867
    MOV [0x02c832a0],EAX                ; 0057d86a | DAT_02c832a0
    POP EDI                             ; 0057d86f
    POP ESI                             ; 0057d870
    RET                                 ; 0057d871

