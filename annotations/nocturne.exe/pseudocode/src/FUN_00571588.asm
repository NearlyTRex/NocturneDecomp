; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00571588(int param_1)
;
;
; XREF[2]:
;   FUN_005715ac at 005715b1
;   FUN_00571718 at 00571755
;
; Referenced Globals:
;   void* PTR_FUN_005c1abc = 005671dc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571588
        ;   Label: FUN_00571588
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571589
    CMP EBX,0x7                         ; 0057158d
    JZ 0x00571597                       ; 00571590
        ;   XREF to: 00571597 (CONDITIONAL_JUMP)  ; LAB_00571597
    CMP EBX,0x4                         ; 00571592
    JNZ 0x005715a0                      ; 00571595
        ;   XREF to: 005715a0 (CONDITIONAL_JUMP)  ; LAB_005715a0
    MOV EAX,dword ptr [EBX*0x8 + 0x5c20dc] ; 00571597
        ;   Label: LAB_00571597
    POP EBX                             ; 0057159e
    RET                                 ; 0057159f
    CALL dword ptr [0x005c1abc]         ; 005715a0 | PTR_FUN_005c1abc
        ;   Label: LAB_005715a0
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x5c] ; 005715a6
    POP EBX                             ; 005715aa
    RET                                 ; 005715ab

